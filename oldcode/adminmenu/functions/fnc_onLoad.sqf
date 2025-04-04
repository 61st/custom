#include "\z\lxim\addons\adminmenu\script_component.hpp"

disableSerialization;
params ["_display"];
uiNamespace setVariable [QGVAR(display), _display];

{
    (_display displayCtrl _x) ctrlEnable false;
    (_display displayCtrl _x) ctrlShow false;
} forEach IDCS_lxim_ADMINMENU_UTIL;

if (!isMultiplayer) then {
    (_display displayCtrl IDC_lxim_ADMINMENU_DASH_CURRADMIN) ctrlSetText "none (singleplayer)";
};

// // Mission Maker's Notes
// private _ctrlMissionNotes = (_display displayCtrl IDC_lxim_ADMINMENU_G_DASH_MISSIONNOTES) controlsGroupCtrl IDC_lxim_ADMINMENU_DASH_MISSIONNOTES;
// if (!isNil QEGVAR(briefing,admin) && {EGVAR(briefing,admin) isEqualType ""}) then {
//     _ctrlMissionNotes ctrlSetStructuredText parseText EGVAR(briefing,admin);
// } else {
//     _ctrlMissionNotes ctrlSetStructuredText parseText "No admin notes provided!";
// };
// private _notesPos = ctrlPosition _ctrlMissionNotes;
// _notesPos set [3, ctrlTextHeight _ctrlMissionNotes];
// _ctrlMissionNotes ctrlSetPosition _notesPos;
// _ctrlMissionNotes ctrlCommit 0;

// // Safestart
// private _ctrlCheckSafestart = _display displayCtrl IDC_lxim_ADMINMENU_DASH_SAFESTART;
// _ctrlCheckSafestart cbSetChecked ([] call EFUNC(safestart,isActive));
// _ctrlCheckSafestart ctrlAddEventHandler ["CheckedChanged", {
//     if ((param [1]) isEqualTo 0) then {
//         [true] call EFUNC(safestart,end);
//         [format ["%1 Ended safestart",profileName],false,"Admin Menu"] call FUNC(log);
//     } else {
//         [-1,true] call EFUNC(safestart,set);
//         [format ["%1 Enabled safestart",profileName],false,"Admin Menu"] call FUNC(log);
//     };
// }];

// Talk to spectators
// private _ctrlCheckSpectatorTalk = _display displayCtrl IDC_lxim_ADMINMENU_DASH_SPECTATORTALK;
// _ctrlCheckSpectatorTalk cbSetChecked ([player] call acre_api_fnc_isSpectator);
// if (alive player) then {
//     _ctrlCheckSpectatorTalk ctrlAddEventHandler ["CheckedChanged", {
//         params ["", "_state"];
//         [_state isEqualTo 1] call acre_api_fnc_setSpectator;
//         systemChat format ["[61st Mechanized Infantry Battalion Admin Menu] Spectator talk toggled %1", ["off", "on"] select _state];
//         if (_state isEqualTo 1) then {
//             [format ["%1 Started talking to spectators",profileName],false,"Admin Menu"] call FUNC(log);
//         } else {
//             [format ["%1 Stopped talking to spectators",profileName],false,"Admin Menu"] call FUNC(log);
//         };
//     }];
// } else {
//     _ctrlCheckSpectatorTalk ctrlEnable false;
//     _ctrlCheckSpectatorTalk ctrlSetTooltip "Can't toggle when in spectator yourself.";
// };


// Player Management tab

private _ctrlFilterSide = _display displayCtrl IDC_lxim_ADMINMENU_PMAN_FILTER_SIDE;
{
    _x params ["_icon", "_text"];
    _ctrlFilterSide lbAdd _text;
    _ctrlFilterSide lbSetPicture [_forEachIndex, _icon];
} forEach [
    ["\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\heal_ca.paa", "All Sides"],
    ["\a3\ui_f\data\Map\Diary\Icons\playerWest_ca.paa", "BLUFOR"], // fetch from profile vars
    ["\a3\ui_f\data\Map\Diary\Icons\playerEast_ca.paa", "OPFOR"],
    ["\a3\ui_f\data\Map\Diary\Icons\playerGuer_ca.paa", "Independent"],
    ["\a3\ui_f\data\Map\Diary\Icons\playerCiv_ca.paa", "Civilian"]
];
_ctrlFilterSide lbSetCurSel 0;
_ctrlFilterSide ctrlAddEventHandler ["LBSelChanged", {
    params ["_ctrlCombo"];

    private _display = ctrlParent _ctrlCombo;
    _display call FUNC(playerManagement_updateList);
}];

private _ctrlFilterState = _display displayCtrl IDC_lxim_ADMINMENU_PMAN_FILTER_STATE;
{
    _ctrlFilterState lbAdd _x;
} forEach ["Alive and Dead", "Alive", "Dead"];
_ctrlFilterState lbSetCurSel 0;
_ctrlFilterState ctrlAddEventHandler ["LBSelChanged", {
    params ["_ctrlCombo"];

    private _display = ctrlParent _ctrlCombo;
    _display call FUNC(playerManagement_updateList);
}];

private _ctrlReset = _display displayCtrl IDC_lxim_ADMINMENU_PMAN_FILTER_RESET;
_ctrlReset ctrlAddEventHandler ["ButtonClick", {
    params ["_ctrlButton"];
    _ctrlButton call FUNC(debounceButton);

    private _display = ctrlParent _ctrlButton;
    (_display displayCtrl IDC_lxim_ADMINMENU_PMAN_FILTER_SIDE) lbSetCurSel 0;
    (_display displayCtrl IDC_lxim_ADMINMENU_PMAN_FILTER_STATE) lbSetCurSel 0;
    _display call FUNC(playerManagement_updateList);
}];

private _ctrlRefresh = _display displayCtrl IDC_lxim_ADMINMENU_PMAN_REFRESH;
_ctrlRefresh ctrlAddEventHandler ["ButtonClick", {
    params ["_ctrlButton"];
    _ctrlButton call FUNC(debounceButton);

    private _display = ctrlParent _ctrlButton;
    _display call FUNC(playerManagement_updateList);
}];

private _ctrlSelectAll = _display displayCtrl IDC_lxim_ADMINMENU_PMAN_SEL_ALL;
_ctrlSelectAll ctrlAddEventHandler ["ButtonClick", {
    params ["_ctrlButton"];
    _ctrlButton call FUNC(debounceButton);

    private _display = ctrlParent _ctrlButton;
    private _ctrlList = _display displayCtrl IDC_lxim_ADMINMENU_PMAN_LIST;
    for "_i" from 0 to ((lbSize _ctrlList) - 1) do {
        _ctrlList lbSetSelected [_i, true];
    };

    GVAR(playerManagement_selected) = +GVAR(playerManagement_players);
}];

private _ctrlSelectNone = _display displayCtrl IDC_lxim_ADMINMENU_PMAN_SEL_NONE;
_ctrlSelectNone ctrlAddEventHandler ["ButtonClick", {
    params ["_ctrlButton"];
    _ctrlButton call FUNC(debounceButton);

    private _display = ctrlParent _ctrlButton;
    private _ctrlList = _display displayCtrl IDC_lxim_ADMINMENU_PMAN_LIST;
    for "_i" from 0 to ((lbSize _ctrlList) - 1) do {
        _ctrlList lbSetSelected [_i, false];
    };

    GVAR(playerManagement_selected) = [];
}];

private _ctrlSelectInvert = _display displayCtrl IDC_lxim_ADMINMENU_PMAN_SEL_INVERT;
_ctrlSelectInvert ctrlAddEventHandler ["ButtonClick", {
    params ["_ctrlButton"];
    _ctrlButton call FUNC(debounceButton);

    private _display = ctrlParent _ctrlButton;
    private _ctrlList = _display displayCtrl IDC_lxim_ADMINMENU_PMAN_LIST;
    for "_i" from 0 to ((lbSize _ctrlList) - 1) do {
        _ctrlList lbSetSelected [_i, !(_ctrlList lbIsSelected _i)];
    };

    GVAR(playerManagement_selected) = GVAR(playerManagement_players) - GVAR(playerManagement_selected);
}];


// Register client as server FPS receiver
[true] remoteExec [QFUNC(fpsHandlerServer), 2];

// Show dashboard when opening the admin menu, hide other tabs
[_display] call FUNC(selectTab);
