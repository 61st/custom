params ["_prop", "_unit"];

if (!isServer) exitWith {};
if (isNull _prop || {isNull _unit}) exitWith {};

if ((_prop getVariable ["SR_currentUser", objNull]) isEqualTo _unit) then {
    _prop setVariable ["SR_currentUser", objNull, true];
};

if ((_unit getVariable ["SR_connectedProp", objNull]) isEqualTo _prop) then {
    _unit setVariable ["SR_connectedProp", objNull, true];
};

[_prop, -1, true] call SR_fnc_applyRadioProfile;
[_prop] remoteExecCall ["SR_fnc_clientDisconnect", owner _unit];

[_prop] spawn {
    params ["_connectedProp"];
    sleep 1;
    [_connectedProp] call SR_fnc_releaseRopeBaseHelper;
};
