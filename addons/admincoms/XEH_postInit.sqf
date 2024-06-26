#include "script_component.hpp"

GVAR(logs) = [];

if (hasInterface) then {
    ["lxim_adminMsg", {
        if ([] call EFUNC(common,isAuthorized)) then {
            TRACE_1("Adding Log",_this);
            params ["_msg", ["_from", "?"], ["_to", ""]];
            GVAR(logs) pushBack [time, _msg, _from, _to];

            if (!isNull (findDisplay 49)) then {
                //If they have it open, update chat log now:
                [findDisplay 49] call FUNC(mouseCatch);
            };
        };
    }] call CBA_fnc_addEventHandler;
};
