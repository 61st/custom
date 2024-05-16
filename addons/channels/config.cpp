#include "script_component.hpp"

class CfgPatches {
    class sixtyoneFundamentals_channels {

        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
        VERSION_CONFIG;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};

class Extended_PreInit_EventHandlers {
    class sixtyoneFundamentals_channels_Event {
        init = "call compile preprocessFileLineNumbers 'z\sixtyone\addons\channels\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class sixtyone_AI_Event {
        init = "call compile preprocessFileLineNumbers 'z\sixtyone\addons\channels\XEH_postInit.sqf'";
    };
};