#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
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

#include "CfgEventHandlers.hpp"
#include "CfgMarkerColors.hpp"
#include "ui\RscDisplayMainMap.hpp"

class CfgMarkerClasses {
    class xmark_assets {
        displayName="61st Mechanized Infantry Battalion Markers";
    };
};

#include "CfgMarkers.hpp"

