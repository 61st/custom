#include "script_component.hpp"

class CfgPatches {
    class cba_settings_userconfig {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_settings"};
        author = "sixtyone";
        authors[] = {"commy2"};
        authorUrl = "https://ghostsofbattle.com";
        VERSION_CONFIG;
    };
};
