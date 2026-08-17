params ["_object"];

if (!isServer) exitWith {};
if (isNull _object) exitWith {};

private _holder = _object getVariable ["SR_backendHolder", objNull];
if (!isNull _holder) then {
    deleteVehicle _holder;
};

private _ropeHelper = _object getVariable ["SR_ropeBaseHelper", objNull];
if (!isNull _ropeHelper) then {
    deleteVehicle _ropeHelper;
};

_object setVariable ["SR_backendHolder", objNull, true];
_object setVariable ["SR_ropeBaseHelper", objNull, true];
_object setVariable ["SR_backendInitialized", false, true];
_object setVariable ["SR_backendIsLR", nil, true];
_object setVariable ["SR_backendRadioId", nil, true];
