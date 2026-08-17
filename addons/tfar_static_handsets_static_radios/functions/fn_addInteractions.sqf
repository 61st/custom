params ["_object"];

if (isNull _object) exitWith {};
if !(_object getVariable ["SR_enabled", false]) exitWith {};
if (_object getVariable ["SR_actionsAdded", false]) exitWith {};

private _pickupAction = [
    "SR_pickupHandset",
    "Pick up handset",
    "\z\tfar\addons\external_intercom\ui\tfar_ace_interaction_external_intercom_phone.paa",
    {[_target] call SR_fnc_requestConnect;},
    {[_target, _player] call SR_fnc_canPickupHandset;},
    {},
    [],
    {[_target] call SR_fnc_getInteractionPoint}
] call ace_interact_menu_fnc_createAction;

[_object, 0, [], _pickupAction] call ace_interact_menu_fnc_addActionToObject;

private _hangupAction = [
    "SR_hangupHandset",
    "Hang up handset",
    "\z\tfar\addons\external_intercom\ui\tfar_ace_interaction_external_intercom_phone.paa",
    {[_target] call SR_fnc_requestDisconnect;},
    {
        params ["_target", "_player"];
        alive _player && {(_target getVariable ["SR_currentUser", objNull]) isEqualTo _player}
    },
    {},
    [],
    {[_target] call SR_fnc_getInteractionPoint}
] call ace_interact_menu_fnc_createAction;

[_object, 0, [], _hangupAction] call ace_interact_menu_fnc_addActionToObject;

private _busyAction = [
    "SR_busyHandset",
    "Handset in use",
    "\z\tfar\addons\external_intercom\ui\tfar_ace_interaction_external_intercom_phone_busy.paa",
    {},
    {
        params ["_target", "_player"];
        private _user = _target getVariable ["SR_currentUser", objNull];
        !isNull _user && {_user isNotEqualTo _player}
    },
    {},
    [],
    {[_target] call SR_fnc_getInteractionPoint}
] call ace_interact_menu_fnc_createAction;

[_object, 0, [], _busyAction] call ace_interact_menu_fnc_addActionToObject;

_object setVariable ["SR_actionsAdded", true];
