if (!isFilePatchingEnabled) exitWith {
    if (hasInterface) then {
        ["[SR DEV TEST] -filePatching is not active. SQF reload is using the packed addon."] call SR_fnc_clientNotify;
    };
    false
};

private _player = missionNamespace getVariable ["ACE_player", objNull];
private _connectedProp = objNull;

if (hasInterface && {!isNull _player}) then {
    _connectedProp = _player getVariable ["SR_connectedProp", objNull];
    if (!isNull _connectedProp) then {
        [_connectedProp] call SR_fnc_cleanupLocalSession;
    };
};

call SR_fnc_compileFunctions;
call SR_fnc_postInit;

private _objects = [];
{
    _objects append (allMissionObjects _x);
} forEach ["AllVehicles", "ThingX", "Thing", "Static", "House_F", "ReammoBox_F"];
_objects = _objects arrayIntersect _objects;

private _reloadedObjects = 0;
{
    if (!isNull _x && {_x getVariable ["SR_enabled", false]}) then {
        [_x] call SR_fnc_initObject;
        _reloadedObjects = _reloadedObjects + 1;
    };
} forEach _objects;

diag_log format ["[SR DEV] Reloaded SQF from loose files. Refreshed %1 static radio objects.", _reloadedObjects];

if (hasInterface) then {
    systemChat format ["[SR DEV TEST] Loose SQF reload worked. Refreshed %1 static radios.", _reloadedObjects];
    ["[SR DEV TEST] Loose SQF reload worked. If you can see this exact message, -filePatching is active."] call SR_fnc_clientNotify;
};

true
