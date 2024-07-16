#include "script_component.hpp"

class CfgPatches {
    class lximFundamentals_channels {

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
    class lximFundamentals_channels_Event {
        init = "call compile preprocessFileLineNumbers 'z\lxim\addons\channels\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class lxim_AI_Event {
        init = "call compile preprocessFileLineNumbers 'z\lxim\addons\channels\XEH_postInit.sqf'";
    };
};