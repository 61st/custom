params ["_prop"];

private _range = if (isNull _prop) then {
    missionNamespace getVariable ["SR_defaultHandsetRange", 3]
} else {
    _prop getVariable ["SR_handsetRange", missionNamespace getVariable ["SR_defaultHandsetRange", 3]]
};

if !(_range isEqualType 0) then {
    _range = parseNumber str _range;
};

_range max 1
