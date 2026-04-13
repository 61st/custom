#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(vs17_item)
        };
        weapons[] = {
            QGVAR(vs17)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxim_main"
        };
        authorUrl = URL;
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
