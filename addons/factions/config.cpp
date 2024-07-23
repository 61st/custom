#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "B_PhilippinesArmy_Squad_Leader_Woodland_01",
            "B_PhilippinesArmy_Team_Leader_Woodland_01",
            "B_PhilippinesArmy_Rifleman_Woodland_01",
            "B_PhilippinesArmy_Autorifleman_Woodland_01",
            "B_PhilippinesArmy_Light_AT_Woodland_01",
            "B_PhilippinesArmy_Heavy_AT_Woodland_01",
            "B_PhilippinesArmy_Marksman_Woodland_01",
            "B_PhilippinesArmy_JTAC_Woodland_01",
            "B_PhilippinesArmy_Grenadier_Woodland_01",
            "B_PhilippinesArmy_Crewman_Woodland_01",
            "B_PhilippinesArmy_Pilot_Woodland_01",
            "B_PhilippinesArmy_Officer_Woodland_01",
            "B_PhilippinesArmy_M1A2_Abrams_Woodland_01",
            "B_PhilippinesArmy_M1126_ICV_M2_Woodland_01",
            "B_PhilippinesArmy_M2_HUMVEE_Woodland_01",
            "B_PhilippinesArmy_MK19_HUMVEE_Woodland_01",
            "B_PhilippinesArmy_UH_60_Woodland_01",
            "B_PhilippinesArmy_M2_STANDING_Woodland_01",
            "I_CebuArmy_Squad_Leader_woodland_01",
            "I_CebuArmy_Team_Leader_woodland_01",
            "I_CebuArmy_Rifleman_M4_woodland_01",
            "I_CebuArmy_Rifleman_M14_woodland_01",
            "I_CebuArmy_Autorifleman_woodland_01",
            "I_CebuArmy_Light_AT_woodland_01",
            "I_CebuArmy_Heavy_AT_woodland_01",
            "I_CebuArmy_Sniper_woodland_01",
            "I_CebuArmy_Grenadier_woodland_01",
            "I_CebuArmy_Crewman_woodland_01",
            "I_CebuArmy_Pilot_woodland_01",
            "I_CebuArmy_Officer_woodland_01",
            "I_CebuArmy_Tank_woodland_01",
            "I_CebuArmy_M1A1_Abrams_woodland_01",
            "I_CebuArmy_M2_Landrover_woodland_01",
            "I_CebuArmy_UH_1H_Transport_woodland_01",
            "I_CebuArmy_UH_1H_Gunship_woodland_01",
            "I_CebuArmy_UH_1H_Transport_Loaded_woodland_01",
            "I_CebuArmy_M2_Standing_woodland_01",
            "I_CebuArmy_M2_Lower_woodland_01",
            "I_CebuArmy_2B14_Mortar_woodland_01",
            "I_CebuArmy_SPG_woodland_01",
            "I_CebuArmy_TOW_Launcher_woodland_01",
            "I_CebuArmy_M163A1_Vad_woodland_01",
            "I_CebuArmy_AA_Missle_woodland_01"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        authorUrl = URL;
        author = "CPT Cury";
        authors[] = {"CPT Cury"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
