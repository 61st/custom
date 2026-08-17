private _devMode = isFilePatchingEnabled;
private _useFinal = !_devMode;
private _basePath = "\z\lxim\addons\tfar_static_handsets_static_radios\functions\";

missionNamespace setVariable ["SR_devMode", _devMode];

private _compileFunction = {
    params ["_path", "_useFinal"];

    if (_useFinal) exitWith {
        compileFinal preprocessFileLineNumbers _path
    };

    compile preprocessFileLineNumbers _path
};

{
    _x params ["_name", "_file"];
    missionNamespace setVariable [
        _name,
        [format ["%1%2", _basePath, _file], _useFinal] call _compileFunction
    ];
} forEach [
    ["SR_fnc_addInteractions", "fn_addInteractions.sqf"],
    ["SR_fnc_applyZeusSettings", "fn_applyZeusSettings.sqf"],
    ["SR_fnc_applyRadioProfile", "fn_applyRadioProfile.sqf"],
    ["SR_fnc_buildPropSettings", "fn_buildPropSettings.sqf"],
    ["SR_fnc_canPickupHandset", "fn_canPickupHandset.sqf"],
    ["SR_fnc_cleanupHandsetObjects", "fn_cleanupHandsetObjects.sqf"],
    ["SR_fnc_cleanupLegacyUnitAttributes", "fn_cleanupLegacyUnitAttributes.sqf"],
    ["SR_fnc_cleanupLocalSession", "fn_cleanupLocalSession.sqf"],
    ["SR_fnc_cleanupTempHandsetRadios", "fn_cleanupTempHandsetRadios.sqf"],
    ["SR_fnc_clearClientSessionVars", "fn_clearClientSessionVars.sqf"],
    ["SR_fnc_clientConnect", "fn_clientConnect.sqf"],
    ["SR_fnc_clientDisconnect", "fn_clientDisconnect.sqf"],
    ["SR_fnc_clientNotify", "fn_clientNotify.sqf"],
    ["SR_fnc_connectClientLr", "fn_connectClientLr.sqf"],
    ["SR_fnc_connectClientSw", "fn_connectClientSw.sqf"],
    ["SR_fnc_createLocalHandsetRope", "fn_createLocalHandsetRope.sqf"],
    ["SR_fnc_devReload", "fn_devReload.sqf"],
    ["SR_fnc_disableStaticRadio", "fn_disableStaticRadio.sqf"],
    ["SR_fnc_enforceLockedRadio", "fn_enforceLockedRadio.sqf"],
    ["SR_fnc_ensureRopeBaseHelper", "fn_ensureRopeBaseHelper.sqf"],
    ["SR_fnc_finishTempSwConnect", "fn_finishTempSwConnect.sqf"],
    ["SR_fnc_getBackendHolder", "fn_getBackendHolder.sqf"],
    ["SR_fnc_getBackendRadio", "fn_getBackendRadio.sqf"],
    ["SR_fnc_getCodeMode", "fn_getCodeMode.sqf"],
    ["SR_fnc_getConfiguredFrequency", "fn_getConfiguredFrequency.sqf"],
    ["SR_fnc_getConfiguredRadioClass", "fn_getConfiguredRadioClass.sqf"],
    ["SR_fnc_getCurrentUser", "fn_getCurrentUser.sqf"],
    ["SR_fnc_getDefaultFrequencies", "fn_getDefaultFrequencies.sqf"],
    ["SR_fnc_getHandsetPoint", "fn_getHandsetPoint.sqf"],
    ["SR_fnc_getHandsetRange", "fn_getHandsetRange.sqf"],
    ["SR_fnc_getInteractionPoint", "fn_getInteractionPoint.sqf"],
    ["SR_fnc_getPropSettings", "fn_getPropSettings.sqf"],
    ["SR_fnc_initObject", "fn_initObject.sqf"],
    ["SR_fnc_initSettings", "fn_initSettings.sqf"],
    ["SR_fnc_isStaticRadioObject", "fn_isStaticRadioObject.sqf"],
    ["SR_fnc_moduleStaticRadio", "fn_moduleStaticRadio.sqf"],
    ["SR_fnc_normalizeFrequencies", "fn_normalizeFrequencies.sqf"],
    ["SR_fnc_postInit", "fn_postInit.sqf"],
    ["SR_fnc_allocateTempRadioId", "fn_allocateTempRadioId.sqf"],
    ["SR_fnc_requestConnect", "fn_requestConnect.sqf"],
    ["SR_fnc_requestDisconnect", "fn_requestDisconnect.sqf"],
    ["SR_fnc_releaseRopeBaseHelper", "fn_releaseRopeBaseHelper.sqf"],
    ["SR_fnc_releaseTempRadioId", "fn_releaseTempRadioId.sqf"],
    ["SR_fnc_registerClientSessionHandlers", "fn_registerClientSessionHandlers.sqf"],
    ["SR_fnc_removeClientHandlers", "fn_removeClientHandlers.sqf"],
    ["SR_fnc_resolveCode", "fn_resolveCode.sqf"],
    ["SR_fnc_restoreSwRadioState", "fn_restoreSwRadioState.sqf"],
    ["SR_fnc_resetBackend", "fn_resetBackend.sqf"],
    ["SR_fnc_runRopeSelfTest", "fn_runRopeSelfTest.sqf"],
    ["SR_fnc_setPropSettings", "fn_setPropSettings.sqf"],
    ["SR_fnc_serverConnect", "fn_serverConnect.sqf"],
    ["SR_fnc_serverDisconnect", "fn_serverDisconnect.sqf"],
    ["SR_fnc_startClientSessionMonitor", "fn_startClientSessionMonitor.sqf"],
    ["SR_fnc_syncBackendObjects", "fn_syncBackendObjects.sqf"]
];
