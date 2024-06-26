#include "..\script_component.hpp"
/*
 * Author: Alganthe, Mike
 * Specified masks protect from a contamination zone while providing HUD/Sound effects.
 * Requires a marker covering an area named for damage to take effect. Can be used for multiple marker zones.
 * Provides Burn damage on Head/Torso if inside a zone without a mask.
 * Markers array provided will be converted into GVAR(respiratorMarkers) so it can be edited after mission start.
 *
 * Call from initPlayerLocal.sqf
 *
 * Arguments:
 * 0: Markers <ARRAY> (default: [])
 * 1: Damage Per Tick <NUMBER> (default: 0.15)
 * 2: Damage Tick Rate <NUMBER> (default: 10)
 * 3: Use Additional Effect <BOOL> (default: false)
 *
 * Return Value:
 * None
 *
 * Example:
 * [["MyMarker1", "MyMarker2"]] call MFUNC(respiratorEffects)
 * [["MyMarker"], 0.6, 5, true] call MFUNC(respiratorEffects)
 */

params [["_markers", []], ["_damagePerTick", 0.15], ["_damageTickRate", 10], ["_additionalEffect", false]];

GVAR(maskCounter) =  CBA_missionTime;
GVAR(lastSoundRan) = CBA_missionTime;
GVAR(oldGlasses) = "";
GVAR(respiratorMarkers) = _markers;

// Damage capped at 1, basically an instant knock out or kill.
if (_damagePerTick > 1) then {
    _damagePerTick = 1;
    WARNING_1("Damage Per Tick (%1) higher than 1, setting to maximum (1)!",_damagePerTick);
};

// If not player defined use default
if (isNil QGVAR(respiratorMasks)) then {
    // Lower-case!
    GVAR(respiratorMasks) = ["g_airpurifyingrespirator_01_f", "g_airpurifyingrespirator_02_black_f", "g_airpurifyingrespirator_02_olive_f", "g_airpurifyingrespirator_02_sand_f", "g_regulatormask_f"];
};

[{
    params ["_args", "_handle"];
    _args params ["_damagePerTick", "_damageTickRate", "_additionalEffect"];

    private _goggles = toLower (goggles ace_player);

    if (_goggles in GVAR(respiratorMasks)) then {
        // Breathing effect
        if (GVAR(lastSoundRan) + 3 < CBA_missionTime) then {
            GVAR(lastSoundRan) = CBA_missionTime;

            // Optional disabling of mask sounds via: ace_player setVariable ["LXIM_Mission_enableMaskSounds", false];
            if (ace_player getVariable [QGVAR(enableMaskSounds), true] && {alive ace_player}) then {
                playSound "lximr_gasmask_breath";
            };
        };
        // Add Mask
        if (GVAR(oldGlasses) != _goggles) then {
            playSound "lximr_gasmask_on";
            "lximr_gasmask_overlay" cutRsc ["lximr_gasmask", "PLAIN", 1, false, false]; // Main effect
            if (_additionalEffect) then {
                "lximr_gasmask_overlayAdditional" cutRsc ["RscCBRN_Regulator", "PLAIN", 1, false, false]; // Additional effect
            };
        };
    } else {
        // Mask Removal
        if (GVAR(oldGlasses) in GVAR(respiratorMasks)) then {
            playSound "lximr_gasmask_off";
            "lximr_gasmask_overlay" cutFadeOut 0;
            if (_additionalEffect) then {
                "lximr_gasmask_overlayAdditional" cutFadeOut 0;
            };
        };

        // Damage
        if (GVAR(respiratorMarkers) isNotEqualTo []) then {
            if ((GVAR(respiratorMarkers) findIf {ace_player inArea _x}) >= 0 && {GVAR(maskCounter) + _damageTickRate < CBA_missionTime}) then {
                GVAR(maskCounter) = CBA_missionTime;

                private _bodypart = selectRandom ["Head", "Body"];
                [ace_player, _damagePerTick, _bodyPart, "burn"] call ACEFUNC(medical,addDamageToUnit);
            };
        };
    };

    // failsafe if player dies and mask overlay doesn't get removed.
    if (!alive ace_player) exitWith {
        "lximr_gasmask_overlay" cutFadeOut 0;
        if (_additionalEffect) then {
            "lximr_gasmask_overlayAdditional" cutFadeOut 0;
        };
    };

    GVAR(oldGlasses) = _goggles;
}, 1, [_damagePerTick, _damageTickRate, _additionalEffect]] call CBA_fnc_addPerFrameHandler;
