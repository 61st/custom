#include "script_component.hpp"
/*
Function: FUNC(ZenOccupy)

Description:
    Teleports the units to random windows of the building(s) within the distance
    Faces units in the right direction and orders them to stand up or crouch on a roof
    Units will only fill the building to as many positions as are at windows
    Multiple buildings can be filled either evenly or to the limit of each sequentially

    Released under Creative Commons Attribution-NonCommercial 4.0 International (CC BY-NC 4.0)
    http://creativecommons.org/licenses/by-nc/4.0/

Arguments:
    _center - Buildings nearest to this position and within the radius will be used <POSITION 3D>
    _units - The units that shall be garrisoned <ARRAY OF UNITS>
    _buildingRadius - Radius in which to fill buildings, -1 to only use nearest building <SCALAR>
    _putOnRoof - Put units on roofs of buildings? <BOOLEAN>
    _fillEvenly - Fill buildings evenly or one by one? <BOOLEAN>
    _mode - Mode setting, 1 for "by class name", 0 for normal <SCALAR 0/1>
    _classRef - Class name of buildings to garrison <STRING>
Return Value:
    Array of units that were NOT garrisoned <ARRAY OF UNITS>

Example:
    Nothing to see here

Author:
    Zenophon, modified by Mokka
*/
#define I(X) X = X + 1;
#define EYE_HEIGHT 1.53
#define CHECK_DISTANCE 5
#define FOV_ANGLE 10
#define ROOF_CHECK 4
#define ROOF_EDGE 2

private [
    "_center",
    "_units",
    "_buildingRadius",
    "_putOnRoof",
    "_fillEvenly",
    "_Zen_ExtendPosition",
    "_buildingsArray",
    "_buildingPosArray",
    "_buildingPositions",
    "_posArray",
    "_unitIndex", "_j",
    "_building",
    "_posArray",
    "_randomIndex",
    "_housePos",
    "_startAngle", "_i",
    "_checkPos",
    "_hitCount",
    "_isRoof",
    "_edge", "_k",
    "_unUsedUnits"
];

_center = _this select 0;
_units = _this select 1;
_buildingRadius = _this select 2;
_putOnRoof = _this select 3;
_fillEvenly = _this select 4;
_mode = _this select 5;
//if (_mode == 1) then {
    _classRef = _this select 6;
//};

_Zen_ExtendPosition = {
    private ["_center", "_dist", "_phi"];

    _center = _this select 0;
    _dist = _this select 1;
    _phi = _this select 2;

    ([(_center select 0) + (_dist * (cos _phi)),(_center select 1) + (_dist * (sin _phi)), (_this select 3)])
};
_buildingsArray = [];

switch (_mode) do {
    case 1: {
        if (_buildingRadius < 0) then {
            _buildingsArray = [nearestBuilding _center];
        } else {
            _buildingsArray = nearestObjects [_center, _classRef, _buildingRadius];
        };
    };
    default {
        if (_buildingRadius < 0) then {
            _buildingsArray = [nearestBuilding _center];
        } else {
            _buildingsArray = nearestObjects [_center, ["building"], _buildingRadius];
        };
    };
};

_buildingPosArray = [];
{
    _buildingPositions = 0;
    for "_i" from 0 to 100 do {
        if ((_x buildingPos _buildingPositions) isEqualTo [0,0,0]) exitWith {};
        I(_buildingPositions)
    };

    _posArray = [];
    for "_i" from 0 to (_buildingPositions - 1) do {
        _posArray set [_i, _i];
    };

    _buildingPosArray set [_forEachIndex, _posArray];
} forEach _buildingsArray;

_unitIndex = 0;
for [{_j = 0}, {(_unitIndex < count _units) && {(count _buildingPosArray > 0)}}, {I(_j)}] do {
    scopeName "for";

    _building = _buildingsArray select (_j % (count _buildingsArray));
    _posArray = _buildingPosArray select (_j % (count _buildingsArray));

    if (count _posArray == 0) then {
        _buildingsArray set [(_j % (count _buildingsArray)), 0];
        _buildingPosArray set [(_j % (count _buildingPosArray)), 0];
        _buildingsArray = _buildingsArray - [0];
        _buildingPosArray = _buildingPosArray - [0];
    };

    while {(count _posArray) > 0} do {
        scopeName "while";
        if (_unitIndex >= count _units) exitWith {};

        _randomIndex = floor random count _posArray;
        _housePos = _building buildingPos (_posArray select _randomIndex);
        _housePos = [(_housePos select 0), (_housePos select 1), (_housePos select 2) + (getTerrainHeightASL _housePos) + EYE_HEIGHT];

        _posArray set [_randomIndex, _posArray select -1];
        _posArray resize (count _posArray - 1);

        _startAngle = (round random 10) * (round random 36);
        for "_i" from _startAngle to (_startAngle + 350) step 10 do {
            _checkPos = [_housePos, CHECK_DISTANCE, (90 - _i), (_housePos select 2)] call _Zen_ExtendPosition;
            if !(lineIntersects [_checkPos, [_checkPos select 0, _checkPos select 1, (_checkPos select 2) + 25], objNull, objNull]) then {
                if !(lineIntersects [_housePos, _checkPos, objNull, objNull]) then {
                    _checkPos = [_housePos, CHECK_DISTANCE, (90 - _i), (_housePos select 2) + (CHECK_DISTANCE * sin FOV_ANGLE / cos FOV_ANGLE)] call _Zen_ExtendPosition;
                    if !(lineIntersects [_housePos, _checkPos, objNull, objNull]) then {
                        _hitCount = 0;
                        for "_k" from 30 to 360 step 30 do {
                            _checkPos = [_housePos, 20, (90 - _k), (_housePos select 2)] call _Zen_ExtendPosition;
                            if (lineIntersects [_housePos, _checkPos, objNull, objNull]) then {
                                I(_hitCount)
                            };

                            if (_hitCount >= ROOF_CHECK) exitWith {};
                        };

                        _isRoof = (_hitCount < ROOF_CHECK) && {!(lineIntersects [_housePos, [_housePos select 0, _housePos select 1, (_housePos select 2) + 25], objNull, objNull])};
                        if (!(_isRoof) || {((_isRoof) && {(_putOnRoof)})}) then {
                            if (_isRoof) then {
                                _edge = false;
                                for "_k" from 30 to 360 step 30 do {
                                    _checkPos = [_housePos, ROOF_EDGE, (90 - _k), (_housePos select 2)] call _Zen_ExtendPosition;
                                    _edge = !(lineIntersects [_checkPos, [(_checkPos select 0), (_checkPos select 1), (_checkPos select 2) - EYE_HEIGHT - 1], objNull, objNull]);

                                    if (_edge) exitWith {
                                        _i = _k;
                                    };
                                };
                            };

                            if (!(_isRoof) || {_edge}) then {
                                (_units select _unitIndex) setPosASL [(_housePos select 0), (_housePos select 1), (_housePos select 2) - EYE_HEIGHT];
                                (_units select _unitIndex) setDir (_i );

                                if (_isRoof) then {
                                    (_units select _unitIndex) setUnitPos "UP";
                                } else {
                                    (_units select _unitIndex) setUnitPos "UP";
                                };

                                (_units select _unitIndex) doWatch ([_housePos, CHECK_DISTANCE, (90 - _i), (_housePos select 2) - (getTerrainHeightASL _housePos)] call _Zen_ExtendPosition);
                                //doStop (_units select _unitIndex);
                                //(_units select _unitIndex) disableAI "MOVE";
                                (_units select _unitIndex) forceSpeed 0;

                                I(_unitIndex)
                                if (_fillEvenly) then {
                                    breakTo "for";
                                } else {
                                    breakTo "while";
                                };
                            };
                        };
                    };
                };
            };
        };
    };
};

_unUsedUnits = [];

for [{_i = _unitIndex}, {_i < count _units}, {I(_i)}] do {
    _unUsedUnits set [(count _unUsedUnits), (_units select _i)];
};

(_unUsedUnits)

