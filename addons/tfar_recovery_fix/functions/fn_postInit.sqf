/*
    61st TFAR Recovery Fix

    Repairs a local player's TFAR state after ACE unconsciousness or Arma
    respawn. The repair is guarded so it never makes an unconscious or dead
    player able to speak.
*/

if (!hasInterface) exitWith {};

S61_TFAR_Recovery_Fix_fnc_recover = {
    params ["_unit", ["_reason", "unknown"]];

    if (isNull _unit) exitWith {};
    if (!local _unit) exitWith {};
    if (!alive _unit) exitWith {};
    if (_unit getVariable ["ACE_isUnconscious", false]) exitWith {};
    if (lifeState _unit isEqualTo "INCAPACITATED") exitWith {};

    // ACE uses this variable to mute direct speech while unconscious.
    // Restore it only after ACE confirms that the local player is conscious.
    _unit setVariable ["tf_voiceVolume", 1, true];

    // Do not restore radio access if ACE Captives is intentionally blocking it.
    private _isRestrained =
        (_unit getVariable ["ace_captives_isHandcuffed", false]) ||
        (_unit getVariable ["ace_captives_isSurrendering", false]);

    if (!_isRestrained) then {
        _unit setVariable ["tf_unable_to_use_radio", false, true];
    };

    // A stale TFAR spectator state makes a living player deaf and mute.
    if (!isNil "TFAR_fnc_forceSpectator") then {
        [_unit, false] call TFAR_fnc_forceSpectator;
    };

    diag_log format [
        "[61st TFAR Recovery Fix] Recovered %1 after %2",
        name _unit,
        _reason
    ];
};

S61_TFAR_Recovery_Fix_fnc_scheduleRecovery = {
    params ["_unit", ["_reason", "unknown"]];

    // Retry because ACE and TFAR can finish their state updates on later frames.
    {
        [{
            params ["_unit", "_reason"];
            [_unit, _reason] call S61_TFAR_Recovery_Fix_fnc_recover;
        }, [_unit, _reason], _x] call CBA_fnc_waitAndExecute;
    } forEach [0.25, 1, 3];
};

["ace_unconscious", {
    params ["_unit", "_isUnconscious"];

    if (_unit isEqualTo player && {!_isUnconscious}) then {
        [_unit, "ACE recovery"] call S61_TFAR_Recovery_Fix_fnc_scheduleRecovery;
    };
}] call CBA_fnc_addEventHandler;

player addEventHandler ["Respawn", {
    params ["_newUnit", "_oldUnit"];
    [_newUnit, "respawn"] call S61_TFAR_Recovery_Fix_fnc_scheduleRecovery;
}];

// Covers missions/frameworks that replace the controlled player object.
["unit", {
    params ["_newUnit", "_oldUnit"];

    if (!isNull _newUnit && {_newUnit isEqualTo player}) then {
        [_newUnit, "player object change"] call S61_TFAR_Recovery_Fix_fnc_scheduleRecovery;
    };
}] call CBA_fnc_addPlayerEventHandler;

// Initial guarded synchronization for JIP clients.
[player, "initialization/JIP"] call S61_TFAR_Recovery_Fix_fnc_scheduleRecovery;

diag_log "[61st TFAR Recovery Fix] Client handlers initialized";

