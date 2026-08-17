params [
    "_prop",
    ["_radioOverride", objNull],
    ["_tempRadioClass", "", [""]]
];

if (!hasInterface) exitWith {false};

private _radioId = _radioOverride;
if !(_radioId isEqualType "") then {
    _radioId = _prop getVariable ["SR_backendRadioId", ""];
};
if (_radioId == "") exitWith {
    ["Static radio backend did not resolve on this client."] call SR_fnc_clientNotify;
    false
};

if (_tempRadioClass == "") exitWith {
    ["Static radio handset class did not resolve on this client."] call SR_fnc_clientNotify;
    false
};

call SR_fnc_cleanupTempHandsetRadios;

private _previousSw = call TFAR_fnc_activeSwRadio;
if !(_previousSw isEqualType "") then {
    _previousSw = "";
};
if (_previousSw != "" && {([_previousSw, "tf_parent", ""] call TFAR_fnc_getWeaponConfigProperty) == "SR_StaticHandsetRadio"}) then {
    _previousSw = "";
};

ACE_player addItem _tempRadioClass;
if !(_tempRadioClass in ((items ACE_player) + (assignedItems ACE_player))) exitWith {
    ["Static radio handset could not allocate a temporary radio item."] call SR_fnc_clientNotify;
    [_prop] call SR_fnc_requestDisconnect;
    [_prop] call SR_fnc_cleanupLocalSession;
    false
};

TFAR_lastLoadoutChange = diag_tickTime;
[_tempRadioClass, getPlayerUID ACE_player] call TFAR_fnc_setRadioOwner;

private _backendSettings = +(_radioId call TFAR_fnc_getSwSettings);
[_tempRadioClass, _backendSettings, true] call TFAR_fnc_setSwSettings;
if (_tempRadioClass call TFAR_fnc_getSwSpeakers) then {
    [_tempRadioClass] call TFAR_fnc_setSwSpeakers;
};

ACE_player setVariable ["SR_connectedRadioId", _radioId];
ACE_player setVariable ["SR_connectedProxyRadioId", _tempRadioClass];
ACE_player setVariable ["SR_savedActiveSwRadio", _previousSw];
ACE_player setVariable ["SR_connectedRadioType", "SW"];
ACE_player setVariable ["SR_connectedTempRadioClass", _tempRadioClass];

if ((call TFAR_fnc_activeSwRadio) != _tempRadioClass) then {
    [_tempRadioClass] call TFAR_fnc_setActiveSwRadio;
};

true
