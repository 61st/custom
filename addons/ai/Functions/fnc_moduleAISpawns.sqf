#include "script_component.hpp"
// not documented: module called
if !(isServer) exitWith {};

private _logic = param [0,objNull,[objNull]];

private _ObjName = _logic getVariable ["ObjName", "Objective 1"];
private _Faction = _logic getVariable ["EnemyType", "OPF_F"];
private _GarrRadius = _logic getVariable ["GarrRadius", 100];
private _GarrisonedGroupsMin = _logic getVariable ["GarrisonedGroupsMin", 0];
private _GarrisonedGroupsMax = _logic getVariable ["GarrisonedGroupsMax", 0];
private _PatrolMethod = _logic getVariable ["PatrolMethod", "RANDOM"];
private _Radius = _logic getVariable ["Radius", 500];
private _EIPatrolsMin = _logic getVariable ["EIPatrolsMin", 0];
private _EIPatrolsMax = _logic getVariable ["EIPatrolsMax", 0];
private _EIAAMin = _logic getVariable ["EIAAMin", 0];
private _EIAAMax = _logic getVariable ["EIAAMax", 0];
private _EIATMin = _logic getVariable ["EIATMin", 0];
private _EIATMax = _logic getVariable ["EIATMax", 0];
private _EISniperMin = _logic getVariable ["EISniperMin", 0];
private _EISniperMax = _logic getVariable ["EISniperMax", 0];
private _VehAAMin = _logic getVariable ["VehAAMin", 0];
private _VehAAMax = _logic getVariable ["VehAAMax", 0];
private _VehLightMin = _logic getVariable ["VehLightMin", 0];
private _VehLightMax = _logic getVariable ["VehLightMax", 0];
private _VehMRAPMin = _logic getVariable ["VehMRAPMin", 0];
private _VehMRAPMax = _logic getVariable ["VehMRAPMax", 0];
private _VehHeavyMin  = _logic getVariable ["VehHeavyMin", 0];
private _VehHeavyMax = _logic getVariable ["VehHeavyMax", 0];
private _VehRandomMin = _logic getVariable ["VehRandomMin", 0];
private _VehRandomMax = _logic getVariable ["VehRandomMax", 0];


private _SpawnLocation = (getPos _logic);

[
    _SpawnLocation,
    _ObjName,
    _Faction,
    _GarrRadius,
    [_GarrisonedGroupsMin, _GarrisonedGroupsMax],
    _PatrolMethod,
    _Radius,
    [_EIPatrolsMin, _EIPatrolsMax],
    [_EIAAMin, _EIAAMax],
    [_EIATMin, _EIATMax],
    [_EISniperMin, _EISniperMax],
    [_VehAAMin, _VehAAMax],
    [_VehLightMin, _VehLightMax],    
    [_VehMRAPMin, _VehMRAPMax],
    [_VehHeavyMin, _VehHeavyMax],
    [_VehRandomMin, _VehRandomMax]
] call lxim_ai_fnc_SpawnAI;

