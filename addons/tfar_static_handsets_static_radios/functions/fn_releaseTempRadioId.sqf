params [["_id", 0, [0]]];

if (!isServer) exitWith {};
if (_id <= 0) exitWith {};

private _used = +(missionNamespace getVariable ["SR_tempRadioUsedIds", []]);
_used = _used - [_id];
missionNamespace setVariable ["SR_tempRadioUsedIds", _used];
