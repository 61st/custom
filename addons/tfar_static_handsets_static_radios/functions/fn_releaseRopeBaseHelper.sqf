params ["_object"];

if (!isServer) exitWith {};
if (isNull _object) exitWith {};
if (!isNull ([_object] call SR_fnc_getCurrentUser)) exitWith {};

private _ropeHelper = _object getVariable ["SR_ropeBaseHelper", objNull];
if (isNull _ropeHelper) exitWith {};

deleteVehicle _ropeHelper;
_object setVariable ["SR_ropeBaseHelper", objNull, true];
