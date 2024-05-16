#include "..\script_component.hpp"
/*

 * \sixtyone_medical\supplies\functions\fn_doUnpackFirstAid.sqf
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
 * [player] call sixtyone_medical_supplies_fnc_doUnpackFirstAid;
 *
 */

// -------------------------------------------------------------------------------------------------

params ["_unit", "_target"];

_target removeItem "sixtyone_medbags_FirstAid";

[_unit, "sixtyone_medbags_FirstAid", 1, _order, _overflow] call EFUNC(common,addItem);
