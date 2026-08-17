params ["_prop"];

if (isNull _prop) exitWith {""};

switch ([_prop] call SR_fnc_getCodeMode) do {
    case 1: {
        missionNamespace getVariable ["tf_west_radio_code", "_bluefor"]
    };
    case 2: {
        missionNamespace getVariable ["tf_independent_radio_code", "_independent"]
    };
    case 3: {
        missionNamespace getVariable ["tf_east_radio_code", "_opfor"]
    };
    case 4: {
        "_civilian"
    };
    default {
        missionNamespace getVariable ["tf_west_radio_code", "_bluefor"]
    };
}
