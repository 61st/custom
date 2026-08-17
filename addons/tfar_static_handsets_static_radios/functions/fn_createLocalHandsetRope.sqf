params ["_prop", ["_handsetRange", 3]];

if (!hasInterface) exitWith {};
if (isNull _prop) exitWith {};
if (!isNull (ACE_player getVariable ["SR_handsetObject", objNull])) exitWith {};

_handsetRange = [_prop] call SR_fnc_getHandsetRange;

private _handsetObject = objNull;
ACE_player playActionNow "take_receiver_anim";

private _ropeBase = _prop;
private _ropeBasePoint = [_prop] call SR_fnc_getInteractionPoint;

if !(_prop isKindOf "AllVehicles") then {
    _ropeBase = _prop getVariable ["SR_ropeBaseHelper", objNull];
    _ropeBasePoint = [0, 0, 0];

    if (isNull _ropeBase) then {
        if !(canSuspend) exitWith {
            [_prop, _handsetRange] spawn SR_fnc_createLocalHandsetRope;
        };

        for "_attempt" from 0 to 20 do {
            if ((ACE_player getVariable ["SR_connectedProp", objNull]) isNotEqualTo _prop) exitWith {};

            _ropeBase = _prop getVariable ["SR_ropeBaseHelper", objNull];
            if (!isNull _ropeBase) exitWith {};
            sleep 0.05;
        };

        if (isNull _ropeBase) exitWith {
            diag_log format ["[SR] missing rope helper for static object %1", typeOf _prop];
        };
    };
};

private _handsetVisual = createSimpleObject ["\z\tfar\addons\external_intercom\data\TFAR_handset.p3d", ACE_player selectionPosition "head"];
_handsetVisual attachTo [ACE_player, [-0.14, -0.02, 0.02], "head", true];
_handsetVisual setVectorDirAndUp [[-2.5, 0.8, 0.25], [-1, -1, 1]];
_handsetObject = _handsetVisual;

private _ropeId = ropeCreate [
    _ropeBase,
    _ropeBasePoint,
    _handsetVisual,
    "plug",
    (_handsetRange max 1.2) - 0.2,
    ["", [0, 0, -1]],
    ["", [0, 0, -1]],
    "TFAR_RopeSmallWire"
];

if (isNull _ropeId) then {
    diag_log format ["[SR] ropeCreate failed for %1 using base %2 at %3", typeOf _prop, typeOf _ropeBase, _ropeBasePoint];
} else {
    _ropeId allowDamage false;
    ACE_player setVariable ["SR_handsetRope", _ropeId];
};

ACE_player setVariable ["SR_handsetObject", _handsetObject];
