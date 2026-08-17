params ["_prop", "_settings"];

if (isNull _prop) exitWith {};
if (isNil "_settings") exitWith {};

_prop setVariable ["SR_enabled", _settings getOrDefault ["enabled", false], true];
_prop setVariable ["SR_frequency", _settings getOrDefault ["frequency", missionNamespace getVariable ["SR_defaultFrequency", 50]], true];
_prop setVariable ["SR_frequencies", nil, true];
_prop setVariable ["SR_channel", 1, true];
_prop setVariable ["SR_speakers", _settings getOrDefault ["speakers", missionNamespace getVariable ["SR_defaultSpeakers", true]], true];
_prop setVariable ["SR_codeMode", _settings getOrDefault ["codeMode", missionNamespace getVariable ["SR_defaultCodeMode", 1]], true];
_prop setVariable ["SR_code", nil, true];
_prop setVariable ["SR_volume", _settings getOrDefault ["volume", missionNamespace getVariable ["SR_defaultVolume", 7]], true];
_prop setVariable ["SR_handsetRange", _settings getOrDefault ["handsetRange", missionNamespace getVariable ["SR_defaultHandsetRange", 3]], true];
_prop setVariable ["SR_intercomLike", _settings getOrDefault ["intercomLike", missionNamespace getVariable ["SR_defaultIntercomLike", true]], true];
_prop setVariable ["SR_configurable", _settings getOrDefault ["configurable", missionNamespace getVariable ["SR_defaultConfigurable", false]], true];
