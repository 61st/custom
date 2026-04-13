#include "\z\lxim\addons\ai\script_component.hpp"
// not documented: module called
if !(isServer) exitWith {};

private _logic = param [0,objNull,[objNull]];

private _SpawnLocation = (getPos _logic);
private _ObjName = _logic getVariable ["ObjName", "Objective 1"];
private _Faction = _logic getVariable ["Type", "CIV_F"];
private _Side = _logic getVariable ["Side", "civilian"];
private _GarrRadius = _logic getVariable ["GarrRadius", 200];
private _GarrisonedUnitsMin = _logic getVariable ["GarrisonedUnitsMin", 0];
private _GarrisonedUnitsMax = _logic getVariable ["GarrisonedUnitsMax", 0];
private _Radius = _logic getVariable ["Radius", 500];
private _civPedPatrolsMin = _logic getVariable ["CivPedPatrolsMin", 0];
private _civPedPatrolsMax = _logic getVariable ["CivPedPatrolsMax", 0];
private _civVehPatrolsMin = _logic getVariable ["CivVehPatrolsMin", 0];
private _civVehPatrolsMax = _logic getVariable ["CivVehPatrolsMax", 0];
private _civVehParkedMin = _logic getVariable ["CivVehParkedMin", 0];
private _civVehParkedMax = _logic getVariable ["CivVehParkedMax", 0];

// Figure out the side stuff
_Side = toLower _Side;

switch (_Side) do {
    case "west": {_Side = west;};
    case "east": {_Side = east;};
    case "independent": {_Side = independent;};
    case "civilian": {_Side = civilian;};
    default {_Side = civilian;};
};

[
    _SpawnLocation,
    _ObjName,
    _Faction,
    _Side,
    _GarrRadius,    
    [_GarrisonedUnitsMin, _GarrisonedUnitsMax],
    _Radius,    
    [_civPedPatrolsMin, _civPedPatrolsMax],
    [_civVehPatrolsMin, _civVehPatrolsMax],
    [_civVehParkedMin, _civVehParkedMax]
] call lxim_ai_fnc_SpawnCivilians;

