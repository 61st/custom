params ["_prop"];

if (isNull _prop) exitWith {};

[_prop, ACE_player] remoteExecCall ["SR_fnc_serverConnect", 2];
