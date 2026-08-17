if (!is3DEN) exitWith {0};

private _attributes = [
    "SR_StaticRadioEnabled",
    "SR_StaticRadioFrequency",
    "SR_StaticRadioSpeaker",
    "SR_StaticRadioCodeMode",
    "SR_StaticRadioVolume",
    "SR_StaticRadioHandsetPoint",
    "SR_StaticRadioHandsetRange",
    "SR_StaticRadioIntercomLike",
    "SR_StaticRadioConfigurable"
];

private _objects = all3DENEntities param [0, []];
private _targets = _objects select {
    !isNull _x && {
        (_x isKindOf "CAManBase") || {
            getArray (configOf _x >> "agentTasks") isNotEqualTo []
        }
    }
};

private _cleared = 0;
collect3DENHistory {
    {
        private _entity = _x;
        {
            if (_entity clear3DENAttribute _x) then {
                _cleared = _cleared + 1;
            };
        } forEach _attributes;
    } forEach _targets;
};

systemChat format ["[SR] Cleared %1 legacy Static Radio attributes from %2 unit/agent objects.", _cleared, count _targets];
diag_log format ["[SR] Cleared %1 legacy Static Radio attributes from %2 unit/agent objects.", _cleared, count _targets];

_cleared
