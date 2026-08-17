if (!hasInterface) exitWith {false};

private _removedAny = false;
private _inventory = (items ACE_player) + (assignedItems ACE_player);

{
    if (([_x, "tf_parent", ""] call TFAR_fnc_getWeaponConfigProperty) == "SR_StaticHandsetRadio") then {
        ACE_player unassignItem _x;
        ACE_player removeItem _x;
        _removedAny = true;
    };
} forEach (_inventory arrayIntersect _inventory);

if (_removedAny) then {
    TFAR_lastLoadoutChange = diag_tickTime;
};

_removedAny
