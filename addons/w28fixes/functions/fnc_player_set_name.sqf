#include "script_component.hpp"

_playerUID = getplayerUID player;

switch (_playerUID) do {
        case "76561198000002705": {[player,"non_us_yonv"] call simc_fnc_setUnitNom;}; 
        case "76561198176590682": {[player,"non_us_carnage"] call simc_fnc_setUnitNom;};
        case "76561198068010293": {[player,"non_us_cury"] call simc_fnc_setUnitNom;};
        default {};
    };

