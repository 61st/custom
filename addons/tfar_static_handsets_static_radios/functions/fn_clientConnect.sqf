params ["_prop", ["_radioOverride", objNull], ["_tempRadioClass", "", [""]]];

if (!hasInterface) exitWith {};
if (isNull _prop) exitWith {};

private _current = ACE_player getVariable ["SR_connectedProp", objNull];
if (!isNull _current && {_current isNotEqualTo _prop}) then {
    [_current] call SR_fnc_clientDisconnect;
};

ACE_player setVariable ["SR_connectedProp", _prop];
ACE_player setVariable ["SR_disconnectPending", false];

private _settings = [_prop] call SR_fnc_getPropSettings;
private _connectSucceeded = [_prop] call SR_fnc_connectClientLr;
if (!_connectSucceeded) exitWith {};

private _handsetRange = _settings getOrDefault ["handsetRange", 3];
[_prop, _handsetRange] call SR_fnc_createLocalHandsetRope;
("TFAR_external_intercom_PhoneConnectionIndicatorRsc" call BIS_fnc_rscLayer) cutRsc ["TFAR_external_intercom_PhoneConnectionIndicatorRsc", "PLAIN", 0, true];

if (_settings getOrDefault ["intercomLike", missionNamespace getVariable ["SR_defaultIntercomLike", true]]) then {
    if !(missionNamespace getVariable ["TFAR_fullDuplex", true]) then {
        ["Intercom-like mode works best with TFAR Full Duplex enabled."] call SR_fnc_clientNotify;
    };

    private _transmitTask = [_prop] spawn {
        params ["_connectedProp"];

        for "_attempt" from 0 to 20 do {
            if ((ACE_player getVariable ["SR_connectedProp", objNull]) isNotEqualTo _connectedProp) exitWith {};

            private _radio = call TFAR_fnc_activeLrRadio;
            if (_radio isEqualType [] && {count _radio > 0}) then {
                [_radio, true] call TFAR_fnc_radioOn;

                private _channel = _radio call TFAR_fnc_getLrChannel;
                if (_channel isEqualType 0 && {_channel >= 0}) then {
                    private _frequency = [_radio, _channel + 1] call TFAR_fnc_getChannelFrequency;
                    private _frequencyText = if (_frequency isEqualType "") then {_frequency} else {str _frequency};
                    if (_frequencyText != "") exitWith {
                        [_radio, _channel, _frequencyText, false] call TFAR_fnc_doLRTransmit;
                        TF_tangent_lr_pressed = true;
                        ACE_player setVariable ["SR_intercomLikeRadio", _radio];
                        ACE_player setVariable ["SR_intercomLikeChannel", _channel];
                        ACE_player setVariable ["SR_intercomLikeFrequency", _frequencyText];
                    };
                };
            };

            sleep 0.1;
        };
    };

    ACE_player setVariable ["SR_intercomLikeTask", _transmitTask];
};

[_prop] call SR_fnc_registerClientSessionHandlers;
[_prop] call SR_fnc_startClientSessionMonitor;
