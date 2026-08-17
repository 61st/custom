params ["_prop"];

if (isNull _prop) then {
    _prop = ACE_player getVariable ["SR_connectedProp", objNull];
};
if (isNull _prop) exitWith {};
if (ACE_player getVariable ["SR_disconnectPending", false]) exitWith {};

ACE_player setVariable ["SR_disconnectPending", true];

[_prop, ACE_player] remoteExecCall ["SR_fnc_serverDisconnect", 2];
