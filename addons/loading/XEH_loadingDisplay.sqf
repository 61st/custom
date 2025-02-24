#include "script_component.hpp"
#include "\a3\ui_f\hpp\defineResinclDesign.inc"
/*
 * Author: veteran29
 * Initializes loading screen display and adds 61st Mechanized Infantry Battalion branding.
 *
 * Arguments:
 * 0: Loading display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_display"];

TRACE_1("Loading screen",_display);

private _width = 512 * pixelW;
private _height = 512 * pixelH;

private _picture = _display ctrlCreate ["RscPicture", -1];
_picture ctrlSetPosition [
    safeZoneX,
    safeZoneY + safeZoneH - _height,
    _width, _height
];

private _month = systemTime select 1;
private _easterMonth = [] call EFUNC(common,easterDate) select 1;
switch (_month) do {
    case 10: {
        _picture ctrlSetText QUOTE(z\lxim\addons\media\images\logo_512_10.paa);
    };
    case 11: {
        _picture ctrlSetText QUOTE(z\lxim\addons\media\images\logo_512_11.paa);
    };
    case 12: {
        _picture ctrlSetText QUOTE(z\lxim\addons\media\images\logo_512_12.paa);
    };
    case _easterMonth: {
        _picture ctrlSetText QUOTE(z\lxim\addons\media\images\logo_512_e.paa);
    };
    default {
        _picture ctrlSetText QUOTE(z\lxim\addons\media\images\logo_512.paa);
    };
};
_picture ctrlCommit 0;

private _ctrlBg = _display displayCtrl IDC_LOADINGSTART_CUSTOM_BG;
private _backgroundCfg = uiNamespace getVariable [QGVAR(backgroundCfg), configNull];
if (isNull _backgroundCfg) then {
    if (_month == _easterMonth && {selectRandom [true, false]}) then {
        _backgroundCfg = CFG_LOADING_SCREEN >> "Backgrounds" >> "bunny";
    } else {
        _backgroundCfg = selectRandom ("true" configClasses (CFG_LOADING_SCREEN >> "Backgrounds"));
    };
    uiNamespace setVariable [QGVAR(backgroundCfg), _backgroundCfg];
    TRACE_1("Loading background",_backgroundCfg);
};

_ctrlBg ctrlSetText getText (_backgroundCfg >> "path");
_ctrlBg ctrlCommit 0;

private _ctrlGrpLoadingStart = _display displayCtrl IDC_LOADINGSTART_LOADINGSTART;
private _loadingLabel = _display ctrlCreate ["RscStructuredText", -1, _ctrlGrpLoadingStart];
_loadingLabel ctrlSetPosition [0, 0, 1, 1];
_loadingLabel ctrlSetStructuredText parseText ([
    '<t size="1.17" shadow="2">',
    format [LLSTRING(Author), getText (_backgroundCfg >> "author")],
    '</t>'
] joinString "");
_loadingLabel ctrlCommit 0;

_loadingLabel ctrlSetPosition [
    safeZoneW - ctrlTextWidth _loadingLabel,
    0,
    ctrlTextWidth _loadingLabel, ctrlTextHeight _loadingLabel
];
_loadingLabel ctrlCommit 0;

nil
