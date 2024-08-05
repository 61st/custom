#include "script_component.hpp"

class CfgPatches {
    class ADDON {

        author = QAUTHOR;
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Item_Vector_Designator),
            QGVAR(Item_optic_Nightstalker),
            QGVAR(Item_optic_AMS),
            QGVAR(Item_optic_AMS_khk),
            QGVAR(Item_optic_AMS_snd),
            QGVAR(Item_optic_AMSTI),
            QGVAR(Item_optic_AMSTI_khk),
            QGVAR(Item_optic_AMSTI_snd),
            QGVAR(vest_rebreather),
            QGVAR(Item_Wetsuit),
            QGVAR(diver_base_F),
            QGVAR(vs17_item)
        };
        weapons[] = {
            QGVAR(xm157_prototype),
            QGVAR(optic_DMS),
            QGVAR(Vector_Designator),
            QGVAR(optic_Nightstalker),
            QGVAR(optic_AMS_base),
            QGVAR(optic_AMS),
            QGVAR(optic_AMS_khk),
            QGVAR(optic_AMS_snd),
            QGVAR(optic_AMSTI_base),
            QGVAR(optic_AMSTI),
            QGVAR(optic_AMSTI_khk),
            QGVAR(optic_AMSTI_snd),
            QGVAR(xm157_ace),
            QGVAR(rebreather),
            QGVAR(Wetsuit),
            QGVAR(vs17),
            QGVAR(optic_ISM1400A7),
            QGVAR(optic_ISM1400A7_tan),
            QGVAR(optic_ISM1400A7_od),
            QGVAR(optic_ISM1400A7_green)
        };
        magazines[]= {
            QGVAR(30Rnd_762x51mm_M80A1_EPR),
            QGVAR(30Rnd_762x51mm_M80A1_EPR_IR),
            QGVAR(30Rnd_762x51mm_M80A1_EPR_Tracer),
            QGVAR(50Rnd_762x51mm_M80A1_EPR),
            QGVAR(50Rnd_762x51mm_M80A1_EPR_IR),
            QGVAR(50Rnd_762x51mm_M80A1_EPR_Tracer)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_UI_F",
            "cba_main",
            "cba_xeh",
            "ace_vector",
            "A3_Weapons_F",
            "cba_jr",
            "ace_xm157",
            "SPS_weapons_hk417"
        };
        VERSION_CONFIG;
        authors[] = {"YonV"};
    };
};

class CfgFunctions {
    #include "CfgFunctions.hpp"
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "jr_classes.hpp"
#include "RscInGameUI.hpp"
#include "CfgMagazines.hpp"
// #include "tfar.hpp"
// #include "rhsCFGWeapons.hpp"
// #include "XtdRHS.hpp"
