params ["_prop"];

private _holder = [_prop] call SR_fnc_getBackendHolder;
if (isNull _holder) exitWith {objNull};

_holder call TFAR_static_radios_fnc_instanciatedRadio
