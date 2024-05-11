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
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
	class Logic;
	class Module_F: Logic {
		class AttributesBase {
			class Default;
			class Edit;
			class Combo;
			class Checkbox;
			class CheckboxNumber;
			class ModuleDescription;
			class Units;
		};

		class ModuleDescription {
			class AnyBrain;
		};
	};

	#include "ModuleCommsTower.hpp"
	#include "ModuleSingleScreen.hpp"
	#include "ModuleMultiScreen.hpp"
	#include "ModuleStationaryRadio.hpp"
	#include "ModuleVehicleCam.hpp"
};


#include "GUI\defines.hpp"
#include "GUI\DialogStationaryRadio.hpp"
#include "GUI\DialogScreen.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

