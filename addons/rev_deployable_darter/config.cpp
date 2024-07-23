#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
			"B_Rev_Darter",
			"O_Rev_Darter",
			"I_Rev_Darter",
			"C_Rev_Darter",
			"B_Rev_Pelican",
			"O_Rev_Pelican",
			"I_Rev_Pelican",
			"C_Rev_Pelican",
			"B_Rev_Demine",
			"O_Rev_Demine",
			"I_Rev_Demine",
			"C_Rev_Demine",
			"Item_Rev_Darter",
			"Item_Rev_Pelican",
			"Item_Rev_Demine"
		};
        weapons[] = {
			"Rev_Darter",
			"Rev_Pelican",
			"Rev_Demine"
		};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxim_main",
            "A3_Drones_F",
			"cba_main"
        };
        authorUrl = URL;
        author = QAUTHOR;
        authors[] = {"Reeveli"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

class CfgFunctions {
	class Rev_uav {
		class Rev_uav {
			file="\Rev_deployable_darter\functions";
			class arsenal {postInit=1;};
			class deploy_uav {};
			class uav_init {preInit=1;};
			class pick_up {};
		};
	};
};