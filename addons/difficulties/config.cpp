#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"lxim_main"};
        author = QAUTHOR;
        authors[] = {"Jonpas", ACECSTRING(Common,ACETeam)};
        url = URL;
        VERSION_CONFIG;
    };
};

#include "CfgAILevelPresets.hpp"
#include "CfgAISkill.hpp"
#include "CfgDifficultyPresets.hpp"
#include "CfgSurfaces.hpp"
