params ["_object"];

if (isNull _object) exitWith {};

if !(_object getVariable ["SR_enabled", false]) exitWith {
    if !(_object getVariable ["SR_initRetryScheduled", false]) then {
        _object setVariable ["SR_initRetryScheduled", true];
        [_object] spawn {
            params ["_prop"];
            for "_i" from 1 to 20 do {
                if (isNull _prop) exitWith {};
                if (_prop getVariable ["SR_enabled", false]) exitWith {
                    _prop setVariable ["SR_initRetryScheduled", false];
                    [_prop] call SR_fnc_initObject;
                };
                sleep 0.5;
            };
            if (!isNull _prop) then {
                _prop setVariable ["SR_initRetryScheduled", false];
            };
        };
    };
};

_object setVariable ["SR_initRetryScheduled", false];

if (isServer) then {
    if (isNil {_object getVariable "SR_backendDeleteHandler"}) then {
        private _deleteHandler = _object addEventHandler ["Deleted", {
            params ["_entity"];
            private _holder = _entity getVariable ["SR_backendHolder", objNull];
            private _ropeHelper = _entity getVariable ["SR_ropeBaseHelper", objNull];
            if (!isNull _holder) then {
                deleteVehicle _holder;
            };
            if (!isNull _ropeHelper) then {
                deleteVehicle _ropeHelper;
            };
        }];
        _object setVariable ["SR_backendDeleteHandler", _deleteHandler];
    };

    if !(_object getVariable ["SR_backendIsLR", true]) then {
        [_object] call SR_fnc_resetBackend;
    };

    private _settings = [_object] call SR_fnc_getPropSettings;
    private _radioClass = _settings getOrDefault ["radioClass", [_object] call SR_fnc_getConfiguredRadioClass];
    private _isLr = true;
    private _backendObjects = [_object] call SR_fnc_syncBackendObjects;
    private _holder = _backendObjects param [0, objNull];

    if !(_object getVariable ["SR_backendInitialized", false]) then {
        if (!isNull _holder) then {
            clearWeaponCargoGlobal _holder;
            clearMagazineCargoGlobal _holder;
            clearItemCargoGlobal _holder;
            clearBackpackCargoGlobal _holder;
            _holder addBackpackCargoGlobal [_radioClass, 1];
        };

        _object setVariable ["SR_backendIsLR", _isLr, true];
        _object setVariable ["SR_radioClass", _radioClass, true];
        _object setVariable ["SR_backendInitialized", true, true];

        [_object] spawn {
            params ["_prop"];

            private _profileApplied = false;
            for "_i" from 1 to 25 do {
                if (isNull _prop || {!(_prop getVariable ["SR_enabled", false])}) exitWith {};

                private _backendRadio = [_prop] call SR_fnc_getBackendRadio;
                private _backendReady = if (_backendRadio isEqualType objNull) then {
                    !isNull _backendRadio
                } else {
                    _backendRadio isEqualType "" && {_backendRadio != ""}
                };

                if (_backendReady) exitWith {
                    [_prop] call SR_fnc_applyRadioProfile;
                    _profileApplied = true;
                };

                sleep 0.2;
            };

            if (!_profileApplied && {!isNull _prop} && {_prop getVariable ["SR_enabled", false]}) then {
                [_prop] call SR_fnc_applyRadioProfile;
            };
        };

        private _backendRadio = [_object] call SR_fnc_getBackendRadio;
        if (_backendRadio isEqualType objNull) then {
            if (!isNull _backendRadio) then {
                _backendRadio setVariable ["SR_hostProp", _object, true];
            };
        } else {
            if (_backendRadio isEqualType "") then {
                _object setVariable ["SR_backendRadioId", _backendRadio, true];
            };
        };
    };
};

if (hasInterface) then {
    [_object] call SR_fnc_addInteractions;
};
