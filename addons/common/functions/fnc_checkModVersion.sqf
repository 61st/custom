#include "\z\sixtyone\addons\common\script_component.hpp"
/*
 * Name: sixtyone_common_fnc_checkModVersion
 * Author: Snippers
 *
 * Arguments:
 *  Array - Version to check
 *
 * Return:
 * Boolean
 *
 * Description:
 * Checks if sixtyone Mission version is larger than the input version;
 */

params [
    ["_input",[0,0,0]]
];

private _sixtyoneersion = getMissionConfigValue ["sixtyone_version",[0,0,0]];

([_sixtyoneersion,_input] call EFUNC(common,checkVersionArray));

