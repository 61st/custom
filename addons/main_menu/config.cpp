#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main"
        };
        author = QAUTHOR;
        authors[] = {"veteran29"};
        VERSION_CONFIG;
    };
};

class CfgCommands {
    allowedHTMLLoadURIs[] += {
        "https://ghostsofbattle.com"
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgMainMenuSpotlight.hpp"
#include "CfgMenus.hpp"
#include "gui.hpp"
