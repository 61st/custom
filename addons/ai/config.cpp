#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "lxim_ModuleAISpawns",
            "lxim_ModuleAISpawnsIndependent",
            "lxim_ModuleAISpawnsWest",
            "lxim_ModuleCivilianSpawns"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxim_main",
            "cba_main",
            "cba_xeh"
        };
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
