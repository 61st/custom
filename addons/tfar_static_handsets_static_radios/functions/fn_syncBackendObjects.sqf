params ["_object"];

if (!isServer) exitWith {[objNull, objNull]};
if (isNull _object) exitWith {[objNull, objNull]};

private _holder = _object getVariable ["SR_backendHolder", objNull];
private _holderOffset = [0, 0, 0.35];

if (!isNull _holder && {!(_holder isKindOf "GroundWeaponHolder_Scripted")}) then {
    deleteVehicle _holder;
    _holder = objNull;
    _object setVariable ["SR_backendHolder", objNull, true];
    _object setVariable ["SR_backendInitialized", false, true];
};

if (isNull _holder) then {
    _holder = createVehicle ["GroundWeaponHolder_Scripted", (getPosWorld _object) vectorAdd _holderOffset, [], 0, "CAN_COLLIDE"];
    _object setVariable ["SR_backendHolder", _holder, true];
};

if (!isNull _holder) then {
    _holder allowDamage false;
    _holder enableSimulationGlobal false;
    _holder hideObjectGlobal true;
    _holder attachTo [_object, _holderOffset];
    _holder setVariable ["SR_hostProp", _object, true];
    {
        _x removeCuratorEditableObjects [[_holder], false];
    } forEach allCurators;
};

[_holder, objNull]
