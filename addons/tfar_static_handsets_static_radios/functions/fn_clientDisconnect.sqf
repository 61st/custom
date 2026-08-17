params [["_prop", objNull]];

if (!hasInterface) exitWith {};

if (isNull _prop) then {
    _prop = ACE_player getVariable ["SR_connectedProp", objNull];
};

private _currentProp = ACE_player getVariable ["SR_connectedProp", objNull];
if (!isNull _currentProp && {!isNull _prop} && {_currentProp isNotEqualTo _prop}) exitWith {};

if ((ACE_player getVariable ["SR_connectedProp", objNull]) isEqualTo _prop) then {
    ACE_player setVariable ["SR_connectedProp", objNull];
};

[_prop] call SR_fnc_cleanupLocalSession;
