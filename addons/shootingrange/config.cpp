#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Module)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"lxim_main"};
        author = QAUTHOR;
        authors[] = {"Jonpas"};
        url = URL;
        VERSION_CONFIG;
    };
};

#include "CfgAnimationSourceSounds.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
