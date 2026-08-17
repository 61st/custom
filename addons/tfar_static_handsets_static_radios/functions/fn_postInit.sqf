if (!hasInterface) exitWith {};

if (missionNamespace getVariable ["SR_lockHandlersRegistered", false]) exitWith {};
missionNamespace setVariable ["SR_lockHandlersRegistered", true];

[
    "TFAR_event_OnLRchannelSet",
    {
        params ["", "_radioObject", "_radioQualifier", "_newChannel", "_isAdditional"];
        [[_radioObject, _radioQualifier], "channel", [_newChannel, _isAdditional]] call SR_fnc_enforceLockedRadio;
    }
] call CBA_fnc_addEventHandler;

[
    "TFAR_event_OnFrequencyChanged",
    {
        params ["", "_radio", "_channel"];
        [_radio, "frequency", [_channel]] call SR_fnc_enforceLockedRadio;
    }
] call CBA_fnc_addEventHandler;

[
    "TFAR_event_OnLRvolumeSet",
    {
        params ["", "_radioObject", "_radioQualifier"];
        [[_radioObject, _radioQualifier], "volume", []] call SR_fnc_enforceLockedRadio;
    }
] call CBA_fnc_addEventHandler;

[
    "TFAR_event_OnLRspeakersSet",
    {
        params ["", "_radioObject", "_radioQualifier"];
        [[_radioObject, _radioQualifier], "speakers", []] call SR_fnc_enforceLockedRadio;
    }
] call CBA_fnc_addEventHandler;

[
    "TFAR_event_OnSWchannelSet",
    {
        params ["", "_radioId", "_newChannel", "_isAdditional"];
        [_radioId, "channel", [_newChannel, _isAdditional]] call SR_fnc_enforceLockedRadio;
    }
] call CBA_fnc_addEventHandler;

[
    "TFAR_event_OnSWvolumeSet",
    {
        params ["", "_radioId"];
        [_radioId, "volume", []] call SR_fnc_enforceLockedRadio;
    }
] call CBA_fnc_addEventHandler;

[
    "TFAR_event_OnSWspeakersSet",
    {
        params ["", "_radioId"];
        [_radioId, "speakers", []] call SR_fnc_enforceLockedRadio;
    }
] call CBA_fnc_addEventHandler;

[
    "TFAR_event_OnRadioOpen",
    {
        params ["", "_radio", "_isLr"];
        private _prop = objNull;
        if (_isLr) then {
            _radio params [["_radioObject", objNull]];
            if (isNull _radioObject) exitWith {};
            _prop = _radioObject getVariable ["SR_hostProp", objNull];
        } else {
            private _connectedProp = ACE_player getVariable ["SR_connectedProp", objNull];
            if (!isNull _connectedProp && {_radio == (ACE_player getVariable ["SR_connectedProxyRadioId", ""])}) then {
                _prop = _connectedProp;
            };
        };
        if (isNull _prop) exitWith {};
        if (_prop getVariable ["SR_configurable", missionNamespace getVariable ["SR_defaultConfigurable", false]]) exitWith {};

        closeDialog 0;
        ["Static radio channels are locked. Configure them in Eden or Zeus."] call SR_fnc_clientNotify;
    }
] call CBA_fnc_addEventHandler;
