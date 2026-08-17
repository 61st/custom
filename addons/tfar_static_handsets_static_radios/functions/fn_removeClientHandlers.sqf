if (!hasInterface) exitWith {};

{
    _x params ["_type", "_id"];
    switch (_type) do {
        case "GetInMan": {
            ACE_player removeEventHandler [_type, _id];
        };
        case "MPKilled": {
            ACE_player removeMPEventHandler [_type, _id];
        };
        default {
            [_type, _id] call CBA_fnc_removeEventHandler;
        };
    };
} forEach (ACE_player getVariable ["SR_clientHandlers", []]);

ACE_player setVariable ["SR_clientHandlers", nil];

private _monitor = ACE_player getVariable ["SR_clientMonitor", scriptNull];
if (_monitor isEqualType scriptNull && {!scriptDone _monitor}) then {
    terminate _monitor;
};
ACE_player setVariable ["SR_clientMonitor", nil];
