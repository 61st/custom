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
        Hint "Unpacking Trauma Kit....",
        {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;

    waitUntil {if ((sixtyone_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (sixtyone_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

    if (sixtyone_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

        _unit removeItem "sixtyone_medbags_Trauma";

        private _order = [3,2,1];
        private _overflow = true;

        [_unit, "ACE_fieldDressing", 28, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_elasticBandage", 24, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_packingBandage", 24, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_quikClot", 24, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_salineIV", 12, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_tourniquet", 12, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_splint", 12, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_fieldDressing", 24, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_tourniquet", 10, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_EarPlugs", 02, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_plasmaIV", 8, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_tourniquet", 12, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_suture", 24, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_surgicalKit", 01, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "SIXTYONE_apap", 06, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
    };

    if (sixtyone_MEDICAL_SUPPLIES_UNPACK_FAILURE) exitWith {

        [_unit, QGVAR(Medical_MedicKit_Open_1)] call EFUNC(common,stop3dSound);



    };

};
