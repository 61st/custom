#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QGVAR(XM7),
            QGVAR(XM7_G),
            QGVAR(XM7_BLK),
            QGVAR(XM7_BLK_G),
            QGVAR(XM250),
            QGVAR(XM250_BLK)
        };
        magazines[] = {
            QGVAR(25Rnd_Fury),
            QGVAR(25Rnd_Fury_blk),
            QGVAR(25Rnd_Fury_RT),
            QGVAR(25Rnd_Fury_RT_blk)
        };
        requiredVersion = REQUIRED_VERSION;
        skipWhenMissingDependencies = 1;
        requiredAddons[] = {
            "lxim_main",
            "KAR_XM7"
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
#include "CfgMagazines.hpp"
#include "xtdsig.hpp"