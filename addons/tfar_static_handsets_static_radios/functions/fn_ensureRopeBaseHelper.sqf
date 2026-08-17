params ["_object"];

if (!isServer) exitWith {objNull};
if (isNull _object) exitWith {objNull};
if (_object isKindOf "AllVehicles") exitWith {_object};

private _ropeHelper = _object getVariable ["SR_ropeBaseHelper", objNull];
if (!isNull _ropeHelper && {!(_ropeHelper isKindOf "AllVehicles")}) then {
    deleteVehicle _ropeHelper;
    _ropeHelper = objNull;
    _object setVariable ["SR_ropeBaseHelper", objNull, true];
};

if (isNull _ropeHelper) then {
    _ropeHelper = createVehicle ["C_Quadbike_01_F", getPosWorld _object, [], 0, "CAN_COLLIDE"];
    _object setVariable ["SR_ropeBaseHelper", _ropeHelper, true];
};

private _ropeHelperPoint = [_object] call SR_fnc_getHandsetPoint;
_ropeHelper allowDamage false;
_ropeHelper enableSimulationGlobal false;
_ropeHelper enableRopeAttach true;
_ropeHelper hideObjectGlobal true;
_ropeHelper disableCollisionWith _object;
_ropeHelper attachTo [_object, _ropeHelperPoint];
_ropeHelper setVectorDirAndUp [vectorDir _object, vectorUp _object];
_ropeHelper setVariable ["SR_hostProp", _object, true];
{
    _x removeCuratorEditableObjects [[_ropeHelper], false];
} forEach allCurators;

_ropeHelper
