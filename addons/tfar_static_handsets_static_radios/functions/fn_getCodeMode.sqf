params ["_prop"];

private _defaultMode = missionNamespace getVariable ["SR_defaultCodeMode", 1];

if (isNull _prop) exitWith {_defaultMode};

private _mode = _prop getVariable ["SR_codeMode", -1];
if (_mode isEqualType 0 && {_mode >= 1 && {_mode <= 4}}) exitWith {
    floor _mode
};

private _legacyCode = _prop getVariable ["SR_code", ""];
if !(_legacyCode isEqualType "") then {
    _legacyCode = str _legacyCode;
};

private _westCode = missionNamespace getVariable ["tf_west_radio_code", "_bluefor"];
private _independentCode = missionNamespace getVariable ["tf_independent_radio_code", "_independent"];
private _eastCode = missionNamespace getVariable ["tf_east_radio_code", "_opfor"];

private _normalized = toLower _legacyCode;
if (_normalized in ["", "default"]) exitWith {_defaultMode};
if (_normalized == "_bluefor") exitWith {1};
if (_normalized == "_independent") exitWith {2};
if (_normalized == "_opfor") exitWith {3};
if (_normalized == "_civilian") exitWith {4};

if (_legacyCode == _westCode) exitWith {1};
if (_legacyCode == _independentCode) exitWith {2};
if (_legacyCode == _eastCode) exitWith {3};

_defaultMode
