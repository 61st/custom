params ["_prop"];

if (isNull _prop) exitWith {objNull};

private _user = _prop getVariable ["SR_currentUser", objNull];
if (!isNull _user && {!alive _user}) then {
    _user = objNull;
};

_user
