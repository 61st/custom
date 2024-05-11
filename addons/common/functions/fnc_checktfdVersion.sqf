#include "\z\sixtyone\addons\common\script_component.hpp"
/*
 * Name: ghost_common_fnc_checkModVersion
 * Author: Snippers
 *
 * Arguments:
 *  Array - Version to check
 *
 * Return:
 * Boolean
 *
 * Description:
 * Checks if ghost Mission version is larger than the input version;
 */

params [
    ["_input",[0,0,0]]
];

private _ghostersion = getMissionConfigValue ["ghost_version",[0,0,0]];

([_ghostersion,_input] call EFUNC(common,checkVersionArray));

