params [
    ["_enabled", true, [true]],
    ["_frequency", 50],
    ["_speakers", true, [true]],
    ["_codeMode", 1],
    ["_volume", 7],
    ["_handsetRange", 3],
    ["_intercomLike", true, [true]],
    ["_configurable", false, [true]]
];

private _defaultFrequency = missionNamespace getVariable ["SR_defaultFrequency", 50];
if !(_defaultFrequency isEqualType 0) then {
    _defaultFrequency = parseNumber str _defaultFrequency;
};
if (_defaultFrequency <= 0) then {
    _defaultFrequency = 50;
};

private _defaultVolume = missionNamespace getVariable ["SR_defaultVolume", 7];
if !(_defaultVolume isEqualType 0) then {
    _defaultVolume = parseNumber str _defaultVolume;
};
if (_defaultVolume <= 0) then {
    _defaultVolume = 7;
};

private _defaultHandsetRange = missionNamespace getVariable ["SR_defaultHandsetRange", 3];
if !(_defaultHandsetRange isEqualType 0) then {
    _defaultHandsetRange = parseNumber str _defaultHandsetRange;
};
if (_defaultHandsetRange <= 0) then {
    _defaultHandsetRange = 3;
};

if !(_frequency isEqualType 0) then {
    _frequency = parseNumber str _frequency;
};
if (_frequency <= 0) then {
    _frequency = _defaultFrequency;
};
if (_frequency isEqualTo floor _frequency) then {
    _frequency = floor _frequency;
};

if !(_codeMode isEqualType 0) then {
    _codeMode = parseNumber str _codeMode;
};
_codeMode = (floor _codeMode max 1) min 4;

if !(_volume isEqualType 0) then {
    _volume = parseNumber str _volume;
};
if (_volume <= 0) then {
    _volume = _defaultVolume;
};
_volume = (floor _volume max 1) min 10;

if !(_handsetRange isEqualType 0) then {
    _handsetRange = parseNumber str _handsetRange;
};
if (_handsetRange <= 0) then {
    _handsetRange = _defaultHandsetRange;
};
_handsetRange = _handsetRange max 1;

createHashMapFromArray [
    ["enabled", _enabled],
    ["frequency", _frequency],
    ["speakers", _speakers],
    ["codeMode", _codeMode],
    ["volume", _volume],
    ["handsetRange", _handsetRange],
    ["intercomLike", _intercomLike],
    ["configurable", _configurable]
]
