params ["_prop"];

if (isNull _prop) exitWith {objNull};

_prop getVariable ["SR_backendHolder", objNull]
