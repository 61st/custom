params ["_prop", "_player"];

if (isNull _prop || {isNull _player}) exitWith {false};
if !(_prop getVariable ["SR_enabled", false]) exitWith {false};
if !(alive _player) exitWith {false};

private _connectedProp = _player getVariable ["SR_connectedProp", objNull];
if (!isNull _connectedProp && {_connectedProp isNotEqualTo _prop}) exitWith {false};

private _currentUser = [_prop] call SR_fnc_getCurrentUser;
if (!isNull _currentUser && {alive _currentUser}) exitWith {false};

private _point = [_prop] call SR_fnc_getInteractionPoint;
private _range = [_prop] call SR_fnc_getHandsetRange;

(_player distance (_prop modelToWorldVisual _point)) <= _range
