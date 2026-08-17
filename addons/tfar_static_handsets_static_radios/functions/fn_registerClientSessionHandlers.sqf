params ["_prop"];

if (!hasInterface) exitWith {};

private _eventHandlers = [];

_eventHandlers pushBack [
    "GetInMan",
    ACE_player addEventHandler [
        "GetInMan",
        {
            params ["_unit"];
            [_unit getVariable ["SR_connectedProp", objNull]] call SR_fnc_requestDisconnect;
        }
    ]
];

_eventHandlers pushBack [
    "MPKilled",
    ACE_player addMPEventHandler [
        "MPKilled",
        {
            params ["_unit"];
            [_unit getVariable ["SR_connectedProp", objNull]] call SR_fnc_requestDisconnect;
        }
    ]
];

_eventHandlers pushBack [
    "ace_unconscious",
    [
        "ace_unconscious",
        {
            params ["_unit", "_isUnconscious"];
            if (_isUnconscious) then {
                [_unit getVariable ["SR_connectedProp", objNull]] call SR_fnc_requestDisconnect;
            };
        }
    ] call CBA_fnc_addEventHandler
];

ACE_player setVariable ["SR_clientHandlers", _eventHandlers];
