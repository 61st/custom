params ["_prop"];

if (!hasInterface) exitWith {false};

private _radioObject = [_prop] call SR_fnc_getBackendRadio;
if !(_radioObject isEqualType objNull) exitWith {
    ["Static radio backend did not resolve on this client."] call SR_fnc_clientNotify;
    false
};
if (isNull _radioObject) exitWith {
    ["Static radio backend did not resolve on this client."] call SR_fnc_clientNotify;
    false
};

missionNamespace setVariable ["TFAR_OverrideActiveLRRadio", [_radioObject, "radio_settings"]];
ACE_player setVariable ["SR_connectedRadioType", "LR"];

true
