/*
 * Author: AACO
 * Function used to safely convert a number or string to a bool
 *
 * Arguments:
 * 0: The string/number to convert <ANY>
 *
 * Return Value:
 * True if the input is "true", "1" or, 1 (case insensitive) <BOOL>
 *
 * Examples:
 * ["tRuE"] call lxim_common_fnc_parseBool; // returns true
 * [false] call lxim_common_fnc_parseBool; // returns false
 * ["1"] call lxim_common_fnc_parseBool; // returns true
 * [1] call lxim_common_fnc_parseBool; // returns true
 * [nil] call lxim_common_fnc_parseBool; // returns false
 * ["lxim (literally anything except 'true', '1' or, 1)"] call lxim_common_fnc_parseBool; // returns false
 *
 * Public: Yes
 */

#include "script_component.hpp"
TRACE_1("params",_this);

params ["_input"];

if (_input isEqualType 0 && {_input == 1}) exitWith {
    true
};

if (_input isEqualType "" && {_input == "true" || _input == "1"}) exitWith {
    true
};

false
