/*
 * Name: ghost_common_fnc_sideToColor
 * Author: Snippers
 *
 * Arguments:
 * side
 *
 * Return:
 * array: color array
 *
 * Description:
 * Will return the color of the inputted side.
 */

//Cache vars for speed
if (isNil "ghost_common_blufor_color") then {
    ghost_common_blufor_color = [blufor] call bis_fnc_sideColor;
    ghost_common_opfor_color = [opfor] call bis_fnc_sideColor;
    ghost_common_indep_color = [independent] call bis_fnc_sideColor;
    ghost_common_civ_color = [civilian] call bis_fnc_sideColor;
    ghost_common_empty_color = [sideUnknown] call bis_fnc_sideColor;
};

switch _this do {
    case blufor: {ghost_common_blufor_color};
    case opfor: {ghost_common_opfor_color};
    case independent: {ghost_common_indep_color};
    case civilian: {ghost_common_civ_color};
    default {ghost_common_empty_color};
};
