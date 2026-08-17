params [
    ["_object", objNull, [objNull]],
    ["_frequency", 50, [0]],
    ["_speakers", true, [true]],
    ["_codeMode", 1, [0]],
    ["_volume", 7, [0]],
    ["_handsetRange", 3, [0]],
    ["_intercomLike", true, [true]],
    ["_configurable", false, [true]]
];

if (!isServer) exitWith {};
if (isNull _object) exitWith {};
if !([_object] call SR_fnc_isStaticRadioObject) exitWith {};

private _currentUser = [_object] call SR_fnc_getCurrentUser;
private _oldRadioClass = [_object] call SR_fnc_getConfiguredRadioClass;
private _settings = [
    true,
    _frequency,
    _speakers,
    _codeMode,
    _volume,
    _handsetRange,
    _intercomLike,
    _configurable
] call SR_fnc_buildPropSettings;

if (!isNull _currentUser && {alive _currentUser}) then {
    [_object, _currentUser] call SR_fnc_serverDisconnect;
};

[_object, _settings] call SR_fnc_setPropSettings;

if !(_settings getOrDefault ["enabled", false]) exitWith {
    [_object] call SR_fnc_resetBackend;
};

private _newRadioClass = [_object] call SR_fnc_getConfiguredRadioClass;
private _backendReset = false;
if ((_oldRadioClass != _newRadioClass) || {isNull (_object getVariable ["SR_backendHolder", objNull])}) then {
    [_object] call SR_fnc_resetBackend;
    _backendReset = true;
};

if (!_backendReset && {_object getVariable ["SR_backendInitialized", false]}) then {
    [_object] call SR_fnc_applyRadioProfile;
};

[_object] remoteExecCall ["SR_fnc_initObject", 0, _object];
