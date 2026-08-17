params ["_prop"];

if (!hasInterface) exitWith {};

private _monitor = [_prop, ACE_player] spawn {
    params ["_connectedProp", "_unit"];

    while {alive _unit} do {
        if ((_unit getVariable ["SR_connectedProp", objNull]) isNotEqualTo _connectedProp) exitWith {};
        if (isNull _connectedProp) exitWith {};

        private _point = [_connectedProp] call SR_fnc_getInteractionPoint;
        private _maxRange = [_connectedProp] call SR_fnc_getHandsetRange;

        if ((_unit distance (_connectedProp modelToWorldVisual _point)) > _maxRange) exitWith {
            [_connectedProp] call SR_fnc_requestDisconnect;
        };

        sleep 0.1;
    };
};

ACE_player setVariable ["SR_clientMonitor", _monitor];
