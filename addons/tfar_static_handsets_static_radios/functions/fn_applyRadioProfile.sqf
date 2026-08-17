params ["_prop", ["_speakerOverride", -1], ["_speakerOnly", false, [false]]];

if (isNull _prop) exitWith {};

private _holder = [_prop] call SR_fnc_getBackendHolder;
if (isNull _holder) exitWith {};

private _settings = [_prop] call SR_fnc_getPropSettings;
private _frequency = _settings getOrDefault ["frequency", missionNamespace getVariable ["SR_defaultFrequency", 50]];
private _frequencyText = if (_frequency isEqualType "") then {_frequency} else {str _frequency};
private _frequencies = [
    _frequencyText,
    _frequencyText,
    _frequencyText,
    _frequencyText,
    _frequencyText,
    _frequencyText,
    _frequencyText,
    _frequencyText,
    _frequencyText
];
private _channel = 1;

private _volume = _settings getOrDefault ["volume", missionNamespace getVariable ["SR_defaultVolume", 7]];
private _speakers = _settings getOrDefault ["speakers", missionNamespace getVariable ["SR_defaultSpeakers", true]];
if (_speakerOverride isEqualType true) then {
    _speakers = _speakerOverride;
} else {
    if (!isNull ([_prop] call SR_fnc_getCurrentUser)) then {
        _speakers = false;
    };
};

private _code = [_prop] call SR_fnc_resolveCode;

private _backendRadio = [_prop] call SR_fnc_getBackendRadio;
if (_backendRadio isEqualType objNull) then {
    if (isNull _backendRadio) exitWith {};

    private _radioSettings = _backendRadio getVariable ["radio_settings", []];
    if !(_radioSettings isEqualType []) then {
        _radioSettings = [];
    };

    if (_speakerOnly) then {
        if ((count _radioSettings) > 0) then {
            _radioSettings set [8, _speakers];
            _backendRadio setVariable ["radio_settings", +_radioSettings, true];
        };
    } else {
        if ((count _radioSettings) < 10) then {
            _radioSettings = [0, _volume, +_frequencies, 0, _code, -1, 0, nil, _speakers, true];
        };

        _radioSettings set [0, _channel - 1];
        _radioSettings set [1, _volume];
        _radioSettings set [2, +_frequencies];
        _radioSettings set [4, _code];
        _radioSettings set [5, -1];
        _radioSettings set [8, _speakers];
        _radioSettings set [9, true];
        _backendRadio setVariable ["radio_settings", +_radioSettings, true];
    };

    _backendRadio setVariable ["TFAR_LRSpeakersEnabled", _speakers, true];
    _backendRadio setVariable ["SR_hostProp", _prop, true];
} else {
    if !(_backendRadio isEqualType "") exitWith {};

    if (isNil "TFAR_RadioSettingsNamespace") exitWith {};

    private _radioSettings = TFAR_RadioSettingsNamespace getVariable [_backendRadio, []];
    if !(_radioSettings isEqualType []) then {
        _radioSettings = [];
    };

    if (_speakerOnly) then {
        if ((count _radioSettings) > 0) then {
            _radioSettings set [8, _speakers];
            TFAR_RadioSettingsNamespace setVariable [_backendRadio, +_radioSettings, true];
            TFAR_RadioSettingsNamespace setVariable [_backendRadio + "_local", +_radioSettings];
        };
    } else {
        if ((count _radioSettings) < 10) then {
            _radioSettings = [0, _volume, +_frequencies, 0, _code, -1, 0, "", _speakers, true];
        };

        _radioSettings set [0, _channel - 1];
        _radioSettings set [1, _volume];
        _radioSettings set [2, +_frequencies];
        _radioSettings set [4, _code];
        _radioSettings set [5, -1];
        _radioSettings set [8, _speakers];
        _radioSettings set [9, true];
        TFAR_RadioSettingsNamespace setVariable [_backendRadio, +_radioSettings, true];
        TFAR_RadioSettingsNamespace setVariable [_backendRadio + "_local", +_radioSettings];
    };

    _prop setVariable ["SR_backendRadioId", _backendRadio, true];
};
