#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_common",
            "cba_main",
            "ace_nightvision"
        };
        author = "sixtyone";
        authors[] = {"PDT"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgEffects.hpp"
#include "CfgWeapons.hpp"
#include "XtdGear.hpp"
// #include "BettIR.hpp"