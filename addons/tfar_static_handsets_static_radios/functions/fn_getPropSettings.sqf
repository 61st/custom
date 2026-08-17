params ["_prop"];

if (isNull _prop) exitWith {createHashMap};

private _settings = [
    _prop getVariable ["SR_enabled", false],
    [_prop] call SR_fnc_getConfiguredFrequency,
    _prop getVariable ["SR_speakers", missionNamespace getVariable ["SR_defaultSpeakers", true]],
    [_prop] call SR_fnc_getCodeMode,
    _prop getVariable ["SR_volume", missionNamespace getVariable ["SR_defaultVolume", 7]],
    _prop getVariable ["SR_handsetRange", missionNamespace getVariable ["SR_defaultHandsetRange", 3]],
    _prop getVariable ["SR_intercomLike", missionNamespace getVariable ["SR_defaultIntercomLike", true]],
    _prop getVariable ["SR_configurable", missionNamespace getVariable ["SR_defaultConfigurable", false]]
] call SR_fnc_buildPropSettings;

private _radioClass = [_prop] call SR_fnc_getConfiguredRadioClass;
_settings set ["radioClass", _radioClass];
_settings set ["isLr", true];

_settings
