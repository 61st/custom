#include "..\script_component.hpp"
/*

 * \ghost_medical\supplies\functions\fn_doUnpackFirstAid.sqf
 * by YonV
 *
 * unpack medical supplies
 *
 * Arguments:
 * 0: unit - <OBJECT>
 *
 * Return:
 * nothing
 *
 * Example:
 * [player] call ghost_medical_supplies_fnc_doUnpackFirstAid;
 *
 */

// -------------------------------------------------------------------------------------------------

params ["_unit", "_target"];

_target removeItem "ghost_medbags_FirstAid";

[_unit, "ghost_medbags_FirstAid", 1, _order, _overflow] call EFUNC(common,addItem);
