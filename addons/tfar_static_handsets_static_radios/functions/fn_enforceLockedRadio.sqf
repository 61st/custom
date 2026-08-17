params ["_radio", "_kind", ["_args", []]];

if (!hasInterface) exitWith {};
if (missionNamespace getVariable ["SR_lockGuard", false]) exitWith {};
if !((_radio isEqualType []) || {_radio isEqualType ""}) exitWith {};

private _prop = objNull;
private _isLr = _radio isEqualType [];
if (_isLr) then {
    _radio params [["_radioObject", objNull], ["_radioQualifier", "radio_settings"]];
    if (isNull _radioObject) exitWith {};
    _prop = _radioObject getVariable ["SR_hostProp", objNull];
    _radio = [_radioObject, _radioQualifier];
} else {
    if (_radio == "") exitWith {};
    private _connectedProp = ACE_player getVariable ["SR_connectedProp", objNull];
    private _proxyRadioId = ACE_player getVariable ["SR_connectedProxyRadioId", ""];
    if (!isNull _connectedProp && {_proxyRadioId == _radio}) then {
        _prop = _connectedProp;
    };
};

if (isNull _prop) exitWith {};
if !(_prop getVariable ["SR_enabled", false]) exitWith {};
if (_prop getVariable ["SR_configurable", missionNamespace getVariable ["SR_defaultConfigurable", false]]) exitWith {};

private _channel = 1;
private _frequency = [_prop] call SR_fnc_getConfiguredFrequency;
private _frequencies = [
    _frequency,
    _frequency,
    _frequency,
    _frequency,
    _frequency,
    _frequency,
    _frequency,
    _frequency,
    _frequency
];

private _volume = _prop getVariable ["SR_volume", missionNamespace getVariable ['SR_defaultVolume', 7]];
if !(_volume isEqualType 0) then {
    _volume = parseNumber str _volume;
};
_volume = (_volume max 1) min 10;

private _speakerState = _prop getVariable ["SR_speakers", missionNamespace getVariable ['SR_defaultSpeakers', true]];
if ((_prop getVariable ["SR_currentUser", objNull]) isEqualTo ACE_player) then {
    _speakerState = false;
};

missionNamespace setVariable ["SR_lockGuard", true];

switch (_kind) do {
    case "channel": {
        _args params [["_newChannel", -1], ["_isAdditional", false]];
        if (_isLr) then {
            if (_isAdditional) then {
                if ((_radio call TFAR_fnc_getAdditionalLrChannel) != -1) then {
                    [_radio, -1] call TFAR_fnc_setAdditionalLrChannel;
                };
            } else {
                if (_newChannel != (_channel - 1)) then {
                    [_radio, _channel - 1] call TFAR_fnc_setLrChannel;
                };
            };
        } else {
            if (_isAdditional) then {
                if ((_radio call TFAR_fnc_getAdditionalSwChannel) != -1) then {
                    [_radio, -1] call TFAR_fnc_setAdditionalSwChannel;
                };
            } else {
                if (_newChannel != (_channel - 1)) then {
                    [_radio, _channel - 1] call TFAR_fnc_setSwChannel;
                };
            };
        };
    };

    case "frequency": {
        _args params [["_zeroBasedChannel", 0]];
        private _lockedFrequency = _frequencies param [_zeroBasedChannel, ""];
        private _lockedFrequencyText = if (_lockedFrequency isEqualType "") then {_lockedFrequency} else {str _lockedFrequency};
        if (_lockedFrequencyText != "") then {
            [_radio, _zeroBasedChannel + 1, _lockedFrequencyText] call TFAR_fnc_setChannelFrequency;
        };
    };

    case "volume": {
        if (_isLr) then {
            [_radio, _volume] call TFAR_fnc_setLrVolume;
        } else {
            [_radio, _volume] call TFAR_fnc_setSwVolume;
        };
    };

    case "speakers": {
        if (_isLr) then {
            private _holder = [_prop] call SR_fnc_getBackendHolder;
            if (!isNull _holder) then {
                [_holder, _speakerState] call TFAR_static_radios_fnc_setSpeakers;
            };
        } else {
            private _currentSpeakerState = _radio call TFAR_fnc_getSwSpeakers;
            if (_currentSpeakerState != _speakerState) then {
                [_radio] call TFAR_fnc_setSwSpeakers;
            };
        };
    };
};

missionNamespace setVariable ["SR_lockGuard", false];
