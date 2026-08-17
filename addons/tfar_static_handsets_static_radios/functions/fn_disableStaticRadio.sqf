params ["_object"];

if (!isServer) exitWith {};
if (isNull _object) exitWith {};

private _currentUser = [_object] call SR_fnc_getCurrentUser;
if (!isNull _currentUser && {alive _currentUser}) then {
    [_object, _currentUser] call SR_fnc_serverDisconnect;
};

_object setVariable ["SR_enabled", false, true];
[_object] call SR_fnc_resetBackend;
[_object] remoteExecCall ["SR_fnc_initObject", 0, _object];
