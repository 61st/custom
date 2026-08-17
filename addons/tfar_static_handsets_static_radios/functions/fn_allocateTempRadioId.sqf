if (!isServer) exitWith {0};

private _used = +(missionNamespace getVariable ["SR_tempRadioUsedIds", []]);
private _next = missionNamespace getVariable ["SR_tempRadioNextId", 0];
private _result = 0;

for "_i" from 1 to 1000 do {
    _next = (_next mod 1000) + 1;
    if !(_next in _used) exitWith {
        _result = _next;
    };
};

if (_result > 0) then {
    _used pushBack _result;
    missionNamespace setVariable ["SR_tempRadioUsedIds", _used];
    missionNamespace setVariable ["SR_tempRadioNextId", _result];
};

_result
