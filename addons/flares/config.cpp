#include "script_component.hpp"

#ifndef SIXTYONE_LEAN_RHS_CUP_HLC

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"sixtyone_common"};
        author = QAUTHOR;
        authors[] = {"PabstMirror"};
        authorUrl = "https://sixtyonesofbattle.com";
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"

#endif
