params [["_prop", objNull]];

if (!hasInterface) exitWith {};

private _connectedType = ACE_player getVariable ["SR_connectedRadioType", ""];

private _transmitTask = ACE_player getVariable ["SR_intercomLikeTask", scriptNull];
if (_transmitTask isEqualType scriptNull && {!scriptDone _transmitTask}) then {
    terminate _transmitTask;
};

private _transmitRadio = ACE_player getVariable ["SR_intercomLikeRadio", []];
if (_transmitRadio isEqualType [] && {count _transmitRadio > 0}) then {
    private _channel = ACE_player getVariable ["SR_intercomLikeChannel", -1];
    private _frequency = ACE_player getVariable ["SR_intercomLikeFrequency", ""];
    private _frequencyText = if (_frequency isEqualType "") then {_frequency} else {str _frequency};
    if (_channel isEqualType 0 && {_channel >= 0} && {_frequencyText != ""}) then {
        [_transmitRadio, _channel, _frequencyText, false] call TFAR_fnc_doLRTransmitEnd;
    };
};
TF_tangent_lr_pressed = false;
("TFAR_external_intercom_PhoneConnectionIndicatorRsc" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

private _overrideRadio = missionNamespace getVariable ["TFAR_OverrideActiveLRRadio", []];
if (_overrideRadio isEqualType [] && {count _overrideRadio > 0}) then {
    private _radioObject = _overrideRadio select 0;
    private _propForRadio = if (isNull _radioObject) then {objNull} else {_radioObject getVariable ["SR_hostProp", objNull]};
    if (isNull _prop || {_propForRadio isEqualTo _prop}) then {
        missionNamespace setVariable ["TFAR_OverrideActiveLRRadio", nil];
    };
};

if (_connectedType == "SW") then {
    call SR_fnc_restoreSwRadioState;
    call SR_fnc_cleanupTempHandsetRadios;
};

call SR_fnc_clearClientSessionVars;
call SR_fnc_removeClientHandlers;
call SR_fnc_cleanupHandsetObjects;
