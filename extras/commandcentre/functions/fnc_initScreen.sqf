/*
Function: lxim_commandcenter_fnc_initScreen

Description:
    Initializes a Screen for the Command Centre based on the passed parameters.

Arguments:
    _object - Screen object
    _name - Name of the screen, used for the actions
    _allowCam - If true, allows viewing Helmet Cameras through the screen
    _allowDrone - If true, allows viewing Drone Cameras through the screen
    _allowSat - If true, allows viewing Satellite imagery through the screen
    _allowMap - If true, allows viewing the Tactical Map through the screen
    _selection - The texture selection of the screen content

Return Values:
    Nothing.

Examples:
    Nothing to see here

Author:
    Mokka
*/

params [
    "_object",
    "_name",
    ["_allowCam", true],
    ["_allowDrone", true],
    ["_allowSat", true],
    ["_allowMap", true],
    ["_selection", 0]
];

if !(isServer) exitWith {};
if !(isClass (configFile >> "CfgPatches" >> "cTab")) exitWith {};

// register screen, important to properly assign the render targets later down the line
if (isNil "LXIM_CC_nextScreenID") then {
    LXIM_CC_nextScreenID = 0;
};

_object setVariable [format ["LXIM_CC_screen_%1_ID", _selection], LXIM_CC_nextScreenID, true];

LXIM_CC_nextScreenID = LXIM_CC_nextScreenID + 1;

_object setVariable [format ["LXIM_CC_screen_%1_on", _selection], false, true];
_object setVariable [format ["LXIM_CC_screen_%1_mode", _selection], "", true];
_object setVariable [format ["LXIM_CC_screen_%1_target", _selection], "", true];

// set default screen texture
_object setObjectTextureGlobal [_selection, "z\lxim\addons\media\images\cc_screen_standby.paa"];

[_object, _selection, _name, [_allowCam, _allowDrone, _allowSat, _allowMap]] remoteExec ["lxim_commandcenter_fnc_addScreenActions", 0, true];