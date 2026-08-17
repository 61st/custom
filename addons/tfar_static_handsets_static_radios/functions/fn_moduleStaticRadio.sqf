params ["_control"];

disableSerialization;

private _display = ctrlParent _control;
private _logic = missionNamespace getVariable ["BIS_fnc_initCuratorAttributes_target", objNull];
private _object = attachedTo _logic;

if (isNull _object) exitWith {
    hint "Attach the module to a radio prop.";
    _display closeDisplay 0;
    deleteVehicle _logic;
};
if !([_object] call SR_fnc_isStaticRadioObject) exitWith {
    hint "Attach the module to a radio prop, not a unit.";
    _display closeDisplay 0;
    deleteVehicle _logic;
};

private _settings = [_object] call SR_fnc_getPropSettings;
if (_settings getOrDefault ["enabled", false]) exitWith {
    [_object] remoteExecCall ["SR_fnc_disableStaticRadio", 2];
    ["Static radio removed."] call SR_fnc_clientNotify;
    deleteVehicle _logic;
    [_display] spawn {
        params ["_dialog"];
        uiSleep 0;
        if (!isNull _dialog) then {
            _dialog closeDisplay 0;
        };
    };
};

private _onUnload = {
    private _logic = missionNamespace getVariable ["BIS_fnc_initCuratorAttributes_target", objNull];
    if (isNull _logic) exitWith {};

    if ((_this select 1) == 2) then {
        deleteVehicle _logic;
    };
};

private _onConfirm = {
    params [["_ctrlButtonOK", controlNull, [controlNull]]];

    private _display = ctrlParent _ctrlButtonOK;
    if (isNull _display) exitWith {};

    private _logic = missionNamespace getVariable ["BIS_fnc_initCuratorAttributes_target", objNull];
    if (isNull _logic) exitWith {};

    private _object = attachedTo _logic;
    if (isNull _object) exitWith {
        deleteVehicle _logic;
    };
    if !([_object] call SR_fnc_isStaticRadioObject) exitWith {
        deleteVehicle _logic;
    };

    private _freqControl = _display displayCtrl 2611906;
    private _speakerControl = _display displayCtrl 2611910;
    private _codeControl = _display displayCtrl 2611912;
    private _volumeControl = _display displayCtrl 2611914;
    private _rangeControl = _display displayCtrl 2611916;
    private _intercomControl = _display displayCtrl 2611918;
    private _configurableControl = _display displayCtrl 2611920;

    [
        _object,
        parseNumber ctrlText _freqControl,
        cbChecked _speakerControl,
        _codeControl lbValue (lbCurSel _codeControl),
        parseNumber ctrlText _volumeControl,
        parseNumber ctrlText _rangeControl,
        cbChecked _intercomControl,
        cbChecked _configurableControl
    ] remoteExecCall ["SR_fnc_applyZeusSettings", 2];

    deleteVehicle _logic;
};

_display displayAddEventHandler ["Unload", _onUnload];
_control ctrlAddEventHandler ["ButtonClick", _onConfirm];

private _freqControl = _display displayCtrl 2611906;
private _speakerControl = _display displayCtrl 2611910;
private _codeControl = _display displayCtrl 2611912;
private _volumeControl = _display displayCtrl 2611914;
private _rangeControl = _display displayCtrl 2611916;
private _intercomControl = _display displayCtrl 2611918;
private _configurableControl = _display displayCtrl 2611920;

_freqControl ctrlSetText str ([_object] call SR_fnc_getConfiguredFrequency);
_speakerControl cbSetChecked (_object getVariable ["SR_speakers", missionNamespace getVariable ["SR_defaultSpeakers", true]]);
_volumeControl ctrlSetText str (_object getVariable ["SR_volume", missionNamespace getVariable ["SR_defaultVolume", 7]]);
_rangeControl ctrlSetText str (_object getVariable ["SR_handsetRange", missionNamespace getVariable ["SR_defaultHandsetRange", 3]]);
_intercomControl cbSetChecked (_object getVariable ["SR_intercomLike", missionNamespace getVariable ["SR_defaultIntercomLike", true]]);
_configurableControl cbSetChecked (_object getVariable ["SR_configurable", missionNamespace getVariable ["SR_defaultConfigurable", false]]);

lbClear _codeControl;
{
    _x params ["_label", "_value"];
    private _index = _codeControl lbAdd _label;
    _codeControl lbSetValue [_index, _value];
} forEach [
    ["BLUFOR", 1],
    ["INDFOR", 2],
    ["OPFOR", 3],
    ["Civilian", 4]
];
_codeControl lbSetCurSel ([_object] call SR_fnc_getCodeMode);
