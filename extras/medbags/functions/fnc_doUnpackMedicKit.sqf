#include "..\script_component.hpp"
/*

 * \sixtyone_medical\supplies\functions\fn_doUnpackMedicKit.sqf
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
 * [player] call sixtyone_medical_supplies_fnc_doUnpackMedicKit;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {};

// -------------------------------------------------------------------------------------------------

[_unit] spawn {

    params ["_unit"];

    _unit playAction "Gear";

    if (vehicle _unit != _unit) then {
        playSound QGVAR(Medical_MedicKit_Open_1);
    } else {
        private _pitch = random [0.6, 1, 1.4];
        playSound3D ["z\sixtyone\addons\medbags\data\sounds\medickit_open_1.ogg", _unit]
    };

    sixtyone_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
    sixtyone_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;

    [
        2,
        [], { sixtyone_MEDICAL_SUPPLIES_UNPACK_SUCCESS = true; }, { sixtyone_MEDICAL_SUPPLIES_UNPACK_FAILURE = true; },
        Hint "Unpacking Medical Kit....",
        {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;

    waitUntil {if ((sixtyone_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (sixtyone_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

    if (sixtyone_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

        _unit removeItem "sixtyone_medbags_MedicKit";

        private _order = [3,2,1];
        private _overflow = true;

        [_unit, "ACE_fieldDressing", 18, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_elasticBandage", 14, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_packingBandage", 14, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_quikClot", 14, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_salineIV_500", 8, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_tourniquet", 08, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_splint", 08, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_fieldDressing", 06, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_tourniquet", 04, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_EarPlugs", 02, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_plasmaIV_500", 4, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_tourniquet", 04, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "SIXTYONE_Apap", 04, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_suture", 12, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
    };
    if (sixtyone_MEDICAL_SUPPLIES_UNPACK_FAILURE) exitWith {
        [_unit, QGVAR(Medical_MedicKit_Open_1)] call EFUNC(common,stop3dSound);
    };
};
