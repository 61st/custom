#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"sixtyone_main"};
        author = QAUTHOR;
        authors[] = {"ARK", "Jonpas"};
        authorUrl = "https://sixtyonesofbattle.com";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
