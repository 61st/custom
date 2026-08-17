params ["_prop", "_unit"];

if (!isServer) exitWith {};
if (isNull _prop || {isNull _unit}) exitWith {};
if !(_prop getVariable ["SR_enabled", false]) exitWith {};
if !([_prop, _unit] call SR_fnc_canPickupHandset) exitWith {
    ["Handset is out of reach."] remoteExecCall ["SR_fnc_clientNotify", owner _unit];
};

[_prop] call SR_fnc_initObject;

private _holder = [_prop] call SR_fnc_getBackendHolder;
if (isNull _holder) then {
    [_prop] call SR_fnc_initObject;
    _holder = [_prop] call SR_fnc_getBackendHolder;
};
if (isNull _holder) exitWith {
    ["Static radio backend is missing."] remoteExecCall ["SR_fnc_clientNotify", owner _unit];
};

private _currentUser = [_prop] call SR_fnc_getCurrentUser;
if (!isNull _currentUser && {!alive _currentUser}) then {
    _currentUser = objNull;
    _prop setVariable ["SR_currentUser", objNull, true];
};

if (!isNull _currentUser && {_currentUser isNotEqualTo _unit}) exitWith {
    ["Handset is already in use."] remoteExecCall ["SR_fnc_clientNotify", owner _unit];
};

private _oldProp = _unit getVariable ["SR_connectedProp", objNull];
if (!isNull _oldProp && {_oldProp isNotEqualTo _prop}) exitWith {
    ["You are already using another handset. Hang it up first."] remoteExecCall ["SR_fnc_clientNotify", owner _unit];
};

_prop setVariable ["SR_currentUser", _unit, true];
_unit setVariable ["SR_connectedProp", _prop, true];

[_prop, false, true] call SR_fnc_applyRadioProfile;
[_prop] call SR_fnc_ensureRopeBaseHelper;
[_prop] remoteExecCall ["SR_fnc_clientConnect", owner _unit];
