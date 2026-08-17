params ["_unit", "_radios"];

if (!hasInterface) exitWith {};
if (_unit isNotEqualTo ACE_player) exitWith {};

["SR_StaticHandsetConnect", "OnRadiosReceived"] call TFAR_fnc_removeEventHandler;

private _prop = ACE_player getVariable ["SR_connectedProp", objNull];
if (isNull _prop) exitWith {};

private _backendRadioId = ACE_player getVariable ["SR_connectedRadioId", ""];
if (_backendRadioId == "") exitWith {};

private _tempRadio = "";
{
    if (([_x, "tf_parent", ""] call TFAR_fnc_getWeaponConfigProperty) == "SR_StaticHandsetRadio") exitWith {
        _tempRadio = _x;
    };
} forEach _radios;

if (_tempRadio == "") then {
    {
        if (([_x, "tf_parent", ""] call TFAR_fnc_getWeaponConfigProperty) == "SR_StaticHandsetRadio") exitWith {
            _tempRadio = _x;
        };
    } forEach (ACE_player call TFAR_fnc_radiosList);
};

if (_tempRadio == "") exitWith {
    ["Static radio handset could not be instantiated."] call SR_fnc_clientNotify;
    [_prop] call SR_fnc_requestDisconnect;
};

private _backendSettings = +(_backendRadioId call TFAR_fnc_getSwSettings);
[_tempRadio, _backendSettings, true] call TFAR_fnc_setSwSettings;
if (_tempRadio call TFAR_fnc_getSwSpeakers) then {
    [_tempRadio] call TFAR_fnc_setSwSpeakers;
};

ACE_player setVariable ["SR_connectedProxyRadioId", _tempRadio];

if ((call TFAR_fnc_activeSwRadio) != _tempRadio) then {
    [_tempRadio] call TFAR_fnc_setActiveSwRadio;
};
