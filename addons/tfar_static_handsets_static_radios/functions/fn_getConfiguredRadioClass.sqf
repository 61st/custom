params ["_prop"];

if (isNull _prop) exitWith {
    missionNamespace getVariable ["SR_defaultLongRangeRadioClass", "TFAR_rt1523g"]
};

private _legacyClass = _prop getVariable ["SR_radioClass", ""];
if !(_legacyClass isEqualType "") then {
    _legacyClass = str _legacyClass;
};

if (_legacyClass != "" && {_legacyClass call TFAR_fnc_isLRRadio}) exitWith {
    _legacyClass
};

missionNamespace getVariable ["SR_defaultLongRangeRadioClass", "TFAR_rt1523g"]
