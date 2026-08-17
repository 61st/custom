params ["_prop"];

private _defaultFrequency = missionNamespace getVariable ["SR_defaultFrequency", 50];

if (isNull _prop) exitWith {_defaultFrequency};

private _frequency = _prop getVariable ["SR_frequency", -1];
if !(_frequency isEqualType 0) then {
    _frequency = parseNumber str _frequency;
};

if (_frequency > 0) exitWith {
    if (_frequency isEqualTo floor _frequency) then {floor _frequency} else {_frequency}
};

private _legacyFrequencies = _prop getVariable ["SR_frequencies", []];
if (_legacyFrequencies isEqualType [] && {count _legacyFrequencies > 0}) then {
    ([_legacyFrequencies] call SR_fnc_normalizeFrequencies) param [0, _defaultFrequency]
} else {
    _defaultFrequency
}
