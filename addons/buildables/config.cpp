#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(areaModule)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxim_main"
        };
        author = QAUTHOR;
        authors[] = {"veteran29"};
        VERSION_CONFIG;
    };
};

#include "ui\gui.hpp"
#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
