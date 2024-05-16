/*
 * Name: sixtyone_common_fnc_sideToColor
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
if (isNil "sixtyone_common_blufor_color") then {
    sixtyone_common_blufor_color = [blufor] call bis_fnc_sideColor;
    sixtyone_common_opfor_color = [opfor] call bis_fnc_sideColor;
    sixtyone_common_indep_color = [independent] call bis_fnc_sideColor;
    sixtyone_common_civ_color = [civilian] call bis_fnc_sideColor;
    sixtyone_common_empty_color = [sideUnknown] call bis_fnc_sideColor;
};

switch _this do {
    case blufor: {sixtyone_common_blufor_color};
    case opfor: {sixtyone_common_opfor_color};
    case independent: {sixtyone_common_indep_color};
    case civilian: {sixtyone_common_civ_color};
    default {sixtyone_common_empty_color};
};
