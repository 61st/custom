
class CBA_Extended_EventHandlers_base;
class CBA_Extended_EventHandlers;
class CfgVehicles {
    
    class CFP_O_NKARMY_Rifleman_01;
    class CFP_O_NKARMY_Rifleman_01_OCimport_01 : CFP_O_NKARMY_Rifleman_01 { scope = 0; class EventHandlers; };
    class CFP_O_NKARMY_Rifleman_01_OCimport_02 : CFP_O_NKARMY_Rifleman_01_OCimport_01 { class EventHandlers; };

    class CFP_B_USARMY_2003_HMMWV_M2_WDL_01;
    class CFP_B_USARMY_2003_HMMWV_M2_WDL_01_OCimport_01 : CFP_B_USARMY_2003_HMMWV_M2_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_2003_HMMWV_M2_WDL_01_OCimport_02 : CFP_B_USARMY_2003_HMMWV_M2_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_ILIDF_HMMWV_Mk19_01;
    class CFP_B_ILIDF_HMMWV_Mk19_01_OCimport_01 : CFP_B_ILIDF_HMMWV_Mk19_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_ILIDF_HMMWV_Mk19_01_OCimport_02 : CFP_B_ILIDF_HMMWV_Mk19_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_USARMY_1991_M2A2_Bradley_IFV_WDL_01;
    class CFP_B_USARMY_1991_M2A2_Bradley_IFV_WDL_01_OCimport_01 : CFP_B_USARMY_1991_M2A2_Bradley_IFV_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_1991_M2A2_Bradley_IFV_WDL_01_OCimport_02 : CFP_B_USARMY_1991_M2A2_Bradley_IFV_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_USARMY_1991_M113A3_WDL_01;
    class CFP_B_USARMY_1991_M113A3_WDL_01_OCimport_01 : CFP_B_USARMY_1991_M113A3_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_1991_M113A3_WDL_01_OCimport_02 : CFP_B_USARMY_1991_M113A3_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_UH1H_Slick_RACS;
    class CUP_I_UH1H_Slick_RACS_OCimport_01 : CUP_I_UH1H_Slick_RACS { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_UH1H_Slick_RACS_OCimport_02 : CUP_I_UH1H_Slick_RACS_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class RightDoorGun;
            class LeftDoorGun;
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_I_UH1H_gunship_RACS;
    class CUP_I_UH1H_gunship_RACS_OCimport_01 : CUP_I_UH1H_gunship_RACS { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_UH1H_gunship_RACS_OCimport_02 : CUP_I_UH1H_gunship_RACS_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class RightDoorGun;
            class LeftDoorGun;
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CFP_O_NKARMY_Anotov_AN_2_01;
    class CFP_O_NKARMY_Anotov_AN_2_01_OCimport_01 : CFP_O_NKARMY_Anotov_AN_2_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_NKARMY_Anotov_AN_2_01_OCimport_02 : CFP_O_NKARMY_Anotov_AN_2_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_O_NKARMY_SU_25_Frogfoot_01;
    class CFP_O_NKARMY_SU_25_Frogfoot_01_OCimport_01 : CFP_O_NKARMY_SU_25_Frogfoot_01 { scope = 0; class EventHandlers; };
    class CFP_O_NKARMY_SU_25_Frogfoot_01_OCimport_02 : CFP_O_NKARMY_SU_25_Frogfoot_01_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_L39_TK;
    class CUP_O_L39_TK_OCimport_01 : CUP_O_L39_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_L39_TK_OCimport_02 : CUP_O_L39_TK_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_C_CESSNA_CIV;
    class CUP_C_CESSNA_CIV_OCimport_01 : CUP_C_CESSNA_CIV { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_CESSNA_CIV_OCimport_02 : CUP_C_CESSNA_CIV_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_B_M2StaticMG_US;
    class CUP_B_M2StaticMG_US_OCimport_01 : CUP_B_M2StaticMG_US { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M2StaticMG_US_OCimport_02 : CUP_B_M2StaticMG_US_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_B_M2StaticMG_MiniTripod_US;
    class CUP_B_M2StaticMG_MiniTripod_US_OCimport_01 : CUP_B_M2StaticMG_MiniTripod_US { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M2StaticMG_MiniTripod_US_OCimport_02 : CUP_B_M2StaticMG_MiniTripod_US_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_O_SSREBELS_Mortar_01;
    class CFP_O_SSREBELS_Mortar_01_OCimport_01 : CFP_O_SSREBELS_Mortar_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_SSREBELS_Mortar_01_OCimport_02 : CFP_O_SSREBELS_Mortar_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_O_IQARMY_D30_01;
    class CFP_O_IQARMY_D30_01_OCimport_01 : CFP_O_IQARMY_D30_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_IQARMY_D30_01_OCimport_02 : CFP_O_IQARMY_D30_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_O_SDARMY_BM_21_01;
    class CFP_O_SDARMY_BM_21_01_OCimport_01 : CFP_O_SDARMY_BM_21_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_SDARMY_BM_21_01_OCimport_02 : CFP_O_SDARMY_BM_21_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_USARMY_M270_HE_USA;
    class CFP_B_USARMY_M270_HE_USA_OCimport_01 : CFP_B_USARMY_M270_HE_USA { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_M270_HE_USA_OCimport_02 : CFP_B_USARMY_M270_HE_USA_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };


    class O_FictionArmy_OPFOR_Teamlead_Woodland_01 : CFP_O_NKARMY_Rifleman_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Teamlead";
        side = 0;
        faction = "O_FictionArmy_Woodland";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "U_I_E_Uniform_01_tanktop_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_Ger_M92_GG_CB","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_Ger_M92_GG_CB","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};

        weapons[] = {"CUP_arifle_HK416_Black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_HK416_Black","","CUP_acc_Flashlight","CUP_optic_ACOG_TA01NSN_Black_PIP",{"CUP_30Rnd_556x45_Emag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_E_Uniform_01_tanktop_F",{}},{"V_CarrierRigKBT_01_light_EAF_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",8,30}}},{},"CUP_H_Ger_M92_GG_CB","CUP_G_Scarf_Face_Grn",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_Squad_Leader_Woodland_01 : O_FictionArmy_OPFOR_Teamlead_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Squad Leader";
        side = 0;
        faction = "O_FictionArmy_Woodland";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "U_I_L_Uniform_01_deserter_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_RUS_6B47_headset_goggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_RUS_6B47_headset_goggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};

        weapons[] = {"CUP_arifle_M16A4_Base","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Base","CUP_hgun_M9A1"};

        magazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Base","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_L_Uniform_01_deserter_F",{}},{"V_CarrierRigKBT_01_light_EAF_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1}}},{},"CUP_H_RUS_6B47_headset_goggles","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_Sniper_Woodland_01 : O_FictionArmy_OPFOR_Squad_Leader_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Sniper";
        side = 0;
        faction = "O_FictionArmy_Woodland";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "U_I_E_Uniform_01_sweater_F";

        linkedItems[] = {"V_SmershVest_01_radio_F","H_MilCap_grn","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnlinkedItems[] = {"V_SmershVest_01_radio_F","H_MilCap_grn","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};

        weapons[] = {"CUP_srifle_M24_blk","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_srifle_M24_blk","CUP_hgun_M9A1"};

        magazines[] = {"CUP_5Rnd_762x51_M24","CUP_15Rnd_9x19_M9","CUP_5Rnd_762x51_M24","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_5Rnd_762x51_M24","CUP_15Rnd_9x19_M9","CUP_5Rnd_762x51_M24","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M24_blk","","","CUP_optic_LeupoldM3LR_pip",{"CUP_5Rnd_762x51_M24",5},{},"CUP_bipod_VLTOR_Modpod_black"},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_E_Uniform_01_sweater_F",{{"SmokeShell",2,1}}},{"V_SmershVest_01_radio_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1}}},{},"H_MilCap_grn","CUP_G_Scarf_Face_Grn",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_Rifleman_M4_Woodland_01 : O_FictionArmy_OPFOR_Sniper_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Rifleman M4";
        side = 0;
        faction = "O_FictionArmy_Woodland";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "U_I_L_Uniform_01_deserter_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_LWHv2_OD_ess_comms","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_LWHv2_OD_ess_comms","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};

        weapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_M9A1"};

        magazines[] = {"30Rnd_556x45_Stanag_green","CUP_15Rnd_9x19_M9","30Rnd_556x45_Stanag_green","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_green","CUP_15Rnd_9x19_M9","30Rnd_556x45_Stanag_green","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"30Rnd_556x45_Stanag_green",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_L_Uniform_01_deserter_F",{{"SmokeShell",2,1}}},{"V_CarrierRigKBT_01_light_EAF_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"30Rnd_556x45_Stanag_green",8,30}}},{},"CUP_H_LWHv2_OD_ess_comms","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_Rifleman_M14_Woodland_01 : O_FictionArmy_OPFOR_Rifleman_M4_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Rifleman M14";
        side = 0;
        faction = "O_FictionArmy_Woodland";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "U_I_L_Uniform_01_camo_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_LWHv2_OD_comms","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_LWHv2_OD_comms","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};

        weapons[] = {"CUP_srifle_M14","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_srifle_M14","CUP_hgun_M9A1"};

        magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_15Rnd_9x19_M9","CUP_20Rnd_762x51_DMR","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_15Rnd_9x19_M9","CUP_20Rnd_762x51_DMR","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M14","","CUP_acc_Flashlight","CUP_optic_SB_11_4x20_PM_pip",{"CUP_20Rnd_762x51_DMR",20},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_L_Uniform_01_camo_F",{{"SmokeShell",2,1}}},{"V_CarrierRigKBT_01_light_EAF_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_20Rnd_762x51_DMR",6,20}}},{},"CUP_H_LWHv2_OD_comms","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_Pilot_Woodland_01 : O_FictionArmy_OPFOR_Rifleman_M14_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Pilot";
        side = 0;
        faction = "O_FictionArmy_Woodland";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "CUP_U_B_BDUv2_roll2_gloves_OD";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_PilotHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_PilotHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};

        weapons[] = {"CUP_arifle_M4A1_standard_short_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A1_standard_short_black","CUP_hgun_M9A1"};

        magazines[] = {"30Rnd_556x45_Stanag_green","CUP_15Rnd_9x19_M9","30Rnd_556x45_Stanag_green","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_green","CUP_15Rnd_9x19_M9","30Rnd_556x45_Stanag_green","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_standard_short_black","","CUP_acc_Flashlight","CUP_optic_CompM4",{"30Rnd_556x45_Stanag_green",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_BDUv2_roll2_gloves_OD",{{"ACE_packingBandage",5},{"ACE_quikclot",5},{"ACE_tourniquet",2}}},{"V_CarrierRigKBT_01_light_EAF_F",{{"CUP_15Rnd_9x19_M9",4,15},{"30Rnd_556x45_Stanag_green",5,30}}},{},"H_PilotHelmetHeli_O","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_Officer_Woodland_01 : O_FictionArmy_OPFOR_Pilot_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Officer";
        side = 0;
        faction = "O_FictionArmy_Woodland";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "U_I_E_Uniform_01_sweater_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_Ger_Beret_TankCommander_Grn","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_Ger_Beret_TankCommander_Grn","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};

        weapons[] = {"CUP_arifle_M16A4_Base","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Base","CUP_hgun_M9A1"};

        magazines[] = {"30Rnd_556x45_Stanag_green","CUP_15Rnd_9x19_M9","30Rnd_556x45_Stanag_green","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_green","CUP_15Rnd_9x19_M9","30Rnd_556x45_Stanag_green","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Base","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"30Rnd_556x45_Stanag_green",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_E_Uniform_01_sweater_F",{}},{"V_CarrierRigKBT_01_light_EAF_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"30Rnd_556x45_Stanag_green",7,30}}},{},"CUP_H_Ger_Beret_TankCommander_Grn","CUP_FR_NeckScarf",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_Marksman_Woodland_01 : O_FictionArmy_OPFOR_Officer_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Marksman";
        side = 0;
        faction = "O_FictionArmy_Woodland";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "U_I_E_Uniform_01_sweater_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_RUS_6B47_headset_goggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_RUS_6B47_headset_goggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};

        weapons[] = {"CUP_srifle_m110_kac_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_srifle_m110_kac_black","CUP_hgun_M9A1"};

        magazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9","CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9","CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_m110_kac_black","","CUP_acc_ANPEQ_15_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_KF_black_PIP",{"CUP_20Rnd_762x51_B_M110",20},{},"CUP_bipod_VLTOR_Modpod_black"},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_E_Uniform_01_sweater_F",{{"SmokeShell",2,1},{"CUP_HandGrenade_M67",2,1}}},{"V_CarrierRigKBT_01_light_EAF_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_20Rnd_762x51_B_M110",6,20}}},{},"CUP_H_RUS_6B47_headset_goggles","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_Light_AT_Woodland_01 : O_FictionArmy_OPFOR_Marksman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Light AT";
        side = 0;
        faction = "O_FictionArmy_Woodland";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "U_I_L_Uniform_01_camo_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_snakeskin","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_snakeskin","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};

        weapons[] = {"CUP_arifle_M16A4_Base","CUP_launch_RPG7V","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Base","CUP_launch_RPG7V","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Base","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag_Mk16_black",30},{},""},{"CUP_launch_RPG7V","","","CUP_optic_PGO7V3",{},{},""},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_L_Uniform_01_camo_F",{}},{"V_CarrierRigKBT_01_light_EAF_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"H_HelmetB_snakeskin","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_Heavy_AT_Woodland_01 : O_FictionArmy_OPFOR_Teamlead_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Heavy AT";
        side = 0;
        faction = "O_FictionArmy_Woodland";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "U_I_L_Uniform_01_camo_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_snakeskin","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_snakeskin","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};

        weapons[] = {"CUP_arifle_M16A4_Base","CUP_launch_RPG7V","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Base","CUP_launch_RPG7V","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Base","","CUP_acc_Flashlight","CUP_optic_ACOG2",{"CUP_30Rnd_556x45_Stanag_Mk16_black",30},{},""},{"CUP_launch_RPG7V","","","CUP_optic_PGO7V3",{},{},""},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_L_Uniform_01_camo_F",{}},{"V_CarrierRigKBT_01_light_EAF_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag_Mk16_black",8,30}}},{},"H_HelmetB_snakeskin","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_Grenadier_Woodland_01 : O_FictionArmy_OPFOR_Light_AT_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Grenadier ";
        side = 0;
        faction = "O_FictionArmy_Woodland";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "U_I_E_Uniform_01_sweater_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_Ger_M92_GG_CB","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_Ger_M92_GG_CB","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};

        weapons[] = {"CUP_arifle_M16A4_GL","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M16A4_GL","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_black","1Rnd_HE_Grenade_shell","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag_Mk16_black","1Rnd_HE_Grenade_shell","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_black","1Rnd_HE_Grenade_shell","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag_Mk16_black","1Rnd_HE_Grenade_shell","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_GL","","","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag_Mk16_black",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_E_Uniform_01_sweater_F",{}},{"V_CarrierRigKBT_01_light_EAF_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"1Rnd_HE_Grenade_shell",4,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"CUP_H_Ger_M92_GG_CB","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_Crewman_Woodland_01 : O_FictionArmy_OPFOR_Teamlead_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Crewman";
        side = 0;
        faction = "O_FictionArmy_Woodland";

        identityTypes[] = {};

        uniformClass = "U_I_E_Uniform_01_tanktop_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_CVC","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_CVC","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};

        weapons[] = {"CUP_arifle_M4A1_standard_short_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A1_standard_short_black","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_standard_short_black","","CUP_acc_Flashlight","CUP_optic_CompM4",{"CUP_30Rnd_556x45_Stanag_Mk16_black",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_E_Uniform_01_tanktop_F",{{"ACE_packingBandage",5},{"ACE_quikclot",5},{"ACE_tourniquet",2}}},{"V_CarrierRigKBT_01_light_EAF_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_30Rnd_556x45_Stanag_Mk16_black",8,30}}},{},"CUP_H_CVC","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_Autorifleman_Woodland_01 : O_FictionArmy_OPFOR_Teamlead_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Autorifleman";
        side = 0;
        faction = "O_FictionArmy_Woodland";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "U_I_E_Uniform_01_tanktop_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_RUS_6B47_headset_goggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_RUS_6B47_headset_goggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};

        weapons[] = {"CUP_lmg_m249_pip1","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_lmg_m249_pip1","CUP_hgun_M9A1"};

        magazines[] = {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_15Rnd_9x19_M9","CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_15Rnd_9x19_M9","CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_m249_pip1","","","CUP_optic_ACOG_TA01NSN_Black_PIP",{"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",200},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_E_Uniform_01_tanktop_F",{{"CUP_HandGrenade_M67",2,1},{"CUP_15Rnd_9x19_M9",3,15}}},{"V_CarrierRigKBT_01_light_EAF_F",{{"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",3,200}}},{},"CUP_H_RUS_6B47_headset_goggles","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_ANTI_AIR_Infantry_Woodland_01 : O_FictionArmy_OPFOR_Pilot_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR ANTI-AIR Infantry";
        side = 0;
        faction = "O_FictionArmy_Woodland";

        identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

        uniformClass = "U_I_E_Uniform_01_sweater_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_RUS_6B47_headset_goggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","CUP_H_RUS_6B47_headset_goggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};

        weapons[] = {"CUP_arifle_M4A3_black","CUP_launch_FIM92Stinger","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_launch_FIM92Stinger","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag_Mk16_black",30},{},""},{"CUP_launch_FIM92Stinger","","","",{},{},""},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_E_Uniform_01_sweater_F",{}},{"V_CarrierRigKBT_01_light_EAF_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"CUP_H_RUS_6B47_headset_goggles","CUP_FR_NeckScarf2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_HUMVEE_M2_Woodland_01 : CFP_B_USARMY_2003_HMMWV_M2_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR HUMVEE M2";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "O_FictionArmy_OPFOR_Rifleman_M4_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_FictionArmy_OPFOR_Rifleman_M14_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\HMMWV\hmmwv_body_idf.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "IDF";

    };

    class O_FictionArmy_OPFOR_HUMVEE_Mk19_Woodland_02 : CFP_B_ILIDF_HMMWV_Mk19_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR HUMVEE Mk19";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "O_FictionArmy_OPFOR_Rifleman_M4_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_FictionArmy_OPFOR_Rifleman_M14_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_APC_Woodland_01 : CFP_B_USARMY_1991_M2A2_Bradley_IFV_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR APC";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "O_FictionArmy_OPFOR_Crewman_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_FictionArmy_OPFOR_Crewman_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\nato_t_base_co.paa'];_unit setObjectTextureGlobal [1,'cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\nato_t_a3_co.paa'];_unit setObjectTextureGlobal [2,'cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\nato_t_ultralp_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "NATO_T";

    };

    class O_FictionArmy_OPFOR_M113A3_Woodland_01 : CFP_B_USARMY_1991_M113A3_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR M113A3";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "O_FictionArmy_OPFOR_Crewman_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_FictionArmy_OPFOR_Crewman_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\M113a3\idfbody1.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\M113a3\idfbody2.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "IDF";

    };

    class O_FictionArmy_OPFOR_Huey_Transport_Woodland_01 : CUP_I_UH1H_Slick_RACS_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Huey Transport";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "O_FictionArmy_OPFOR_Pilot_Woodland_01";

        class Turrets : Turrets {
            class RightDoorGun : RightDoorGun { gunnerType = "O_FictionArmy_OPFOR_Rifleman_M14_Woodland_01"; };
            class LeftDoorGun : LeftDoorGun { gunnerType = "O_FictionArmy_OPFOR_Rifleman_M4_Woodland_01"; };
            class CopilotTurret : CopilotTurret { gunnerType = "O_FictionArmy_OPFOR_Pilot_Woodland_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_CO.paa'];_unit setObjectTextureGlobal [1,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_CO.paa'];_unit setObjectTextureGlobal [2,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Olive";

    };

    class O_FictionArmy_OPFOR_Huey_Gunship_Woodland_01 : CUP_I_UH1H_gunship_RACS_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Huey Gunship";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "O_FictionArmy_OPFOR_Pilot_Woodland_01";

        class Turrets : Turrets {
            class RightDoorGun : RightDoorGun { gunnerType = ""; };
            class LeftDoorGun : LeftDoorGun { gunnerType = ""; };
            class CopilotTurret : CopilotTurret { gunnerType = "O_FictionArmy_OPFOR_Pilot_Woodland_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_CO.paa'];_unit setObjectTextureGlobal [1,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_CO.paa'];_unit setObjectTextureGlobal [2,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Olive";

    };

    class O_FictionArmy_OPFOR_Anotov_AN_2_Woodland_01 : CFP_O_NKARMY_Anotov_AN_2_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Anotov AN-2";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "O_FictionArmy_OPFOR_Pilot_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_FictionArmy_OPFOR_Pilot_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_AN2\data\an2_1_CO.paa'];_unit setObjectTextureGlobal [1,'CUP\AirVehicles\CUP_AirVehicles_AN2\data\an2_2_CO.paa'];_unit setObjectTextureGlobal [2,'CUP\AirVehicles\CUP_AirVehicles_AN2\data\an2_wings_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "military";

    };

    class O_FictionArmy_OPFOR_SU_25_Frogfoot_Woodland_01 : CFP_O_NKARMY_SU_25_Frogfoot_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR SU-25 Frogfoot";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "O_FictionArmy_OPFOR_Pilot_Woodland_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body1_cdf_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body2_cdf_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "CDF";

    };

    class O_FictionArmy_OPFOR_L39ZA_Woodland_01 : CUP_O_L39_TK_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR L-39ZA";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "O_FictionArmy_OPFOR_Pilot_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_FictionArmy_OPFOR_Pilot_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\airvehicles\cup_airvehicles_l39\data\l-39_body_co.paa'];_unit setObjectTextureGlobal [1,'cup\airvehicles\cup_airvehicles_l39\data\l-39_body_1_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Taki";

    };

    class O_FictionArmy_OPFOR_Scout_Plane_Woodland_01 : CUP_C_CESSNA_CIV_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Scout Plane";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "O_FictionArmy_OPFOR_Pilot_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_FictionArmy_OPFOR_Pilot_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_Cessna\data\new\skins\body_olivedrab_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "mil_olive";

    };

    class O_FictionArmy_OPFOR_Turret_M2_Woodland_01 : CUP_B_M2StaticMG_US_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Turret M2";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "CUP_B_US_Soldier";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_FictionArmy_OPFOR_Rifleman_M4_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_M2_Mini_Woodland_01 : CUP_B_M2StaticMG_MiniTripod_US_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR M2 Mini";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "CUP_B_US_Soldier";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_FictionArmy_OPFOR_Rifleman_M4_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_M27_Mortar_Woodland_01 : CFP_O_SSREBELS_Mortar_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR M27 Mortar";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "CFP_O_SSREBELS_Soldier_02";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_FictionArmy_OPFOR_Rifleman_M14_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_Artillery_Gun_Woodland_01 : CFP_O_IQARMY_D30_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Artillery Gun";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "CFP_O_IQARMY_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_FictionArmy_OPFOR_Rifleman_M4_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_FictionArmy_OPFOR_Rocket_Artillery_Woodland_01 : CFP_O_SDARMY_BM_21_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR Rocket Artillery";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "O_FictionArmy_OPFOR_Rifleman_M14_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_FictionArmy_OPFOR_Rifleman_M4_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_bm21_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_bm21_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "SLA";

    };

    class O_FictionArmy_OPFOR_MLRS_Woodland_01 : CFP_B_USARMY_M270_HE_USA_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "OPFOR MLRS";
        side = 0;
        faction = "O_FictionArmy_Woodland";
        crew = "O_FictionArmy_OPFOR_Rifleman_M14_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_FictionArmy_OPFOR_Rifleman_M4_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cup\trackedvehicles\cup_trackedvehicles_m270\data\mlrs_hull_baf_wood_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "BAF_Wood";

    };
    class B_CTRG_Soldier_TL_tna_F;
    class B_CTRG_Soldier_TL_tna_F_OCimport_01 : B_CTRG_Soldier_TL_tna_F { scope = 0; class EventHandlers; };
    class B_CTRG_Soldier_TL_tna_F_OCimport_02 : B_CTRG_Soldier_TL_tna_F_OCimport_01 { class EventHandlers; };

    class CFP_B_USARMY_HMMWV_M2_USA;
    class CFP_B_USARMY_HMMWV_M2_USA_OCimport_01 : CFP_B_USARMY_HMMWV_M2_USA { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_HMMWV_M2_USA_OCimport_02 : CFP_B_USARMY_HMMWV_M2_USA_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_USARMY_2003_M1A1_Abrams_WDL_01;
    class CFP_B_USARMY_2003_M1A1_Abrams_WDL_01_OCimport_01 : CFP_B_USARMY_2003_M1A1_Abrams_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_2003_M1A1_Abrams_WDL_01_OCimport_02 : CFP_B_USARMY_2003_M1A1_Abrams_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
        };
    };

    class CUP_B_M7Bradley_USA_W;
    class CUP_B_M7Bradley_USA_W_OCimport_01 : CUP_B_M7Bradley_USA_W { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M7Bradley_USA_W_OCimport_02 : CUP_B_M7Bradley_USA_W_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_USARMY_2003_HMMWV_Avenger_WDL_01;
    class CFP_B_USARMY_2003_HMMWV_Avenger_WDL_01_OCimport_01 : CFP_B_USARMY_2003_HMMWV_Avenger_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_2003_HMMWV_Avenger_WDL_01_OCimport_02 : CFP_B_USARMY_2003_HMMWV_Avenger_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_USARMY_2003_M2_Machine_Gun_WDL_01;
    class CFP_B_USARMY_2003_M2_Machine_Gun_WDL_01_OCimport_01 : CFP_B_USARMY_2003_M2_Machine_Gun_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_2003_M2_Machine_Gun_WDL_01_OCimport_02 : CFP_B_USARMY_2003_M2_Machine_Gun_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_USARMY_2003_TOW_Tripod_WDL_01;
    class CFP_B_USARMY_2003_TOW_Tripod_WDL_01_OCimport_01 : CFP_B_USARMY_2003_TOW_Tripod_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_2003_TOW_Tripod_WDL_01_OCimport_02 : CFP_B_USARMY_2003_TOW_Tripod_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_USARMY_2003_M252_81mm_Mortar_WDL_01;
    class CFP_B_USARMY_2003_M252_81mm_Mortar_WDL_01_OCimport_01 : CFP_B_USARMY_2003_M252_81mm_Mortar_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_2003_M252_81mm_Mortar_WDL_01_OCimport_02 : CFP_B_USARMY_2003_M252_81mm_Mortar_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_USARMY_2003_M2_Minitripod_WDL_01;
    class CFP_B_USARMY_2003_M2_Minitripod_WDL_01_OCimport_01 : CFP_B_USARMY_2003_M2_Minitripod_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_2003_M2_Minitripod_WDL_01_OCimport_02 : CFP_B_USARMY_2003_M2_Minitripod_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_USARMY_2003_M119_WDL_01;
    class CFP_B_USARMY_2003_M119_WDL_01_OCimport_01 : CFP_B_USARMY_2003_M119_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_2003_M119_WDL_01_OCimport_02 : CFP_B_USARMY_2003_M119_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_USARMY_2003_MH_6J_Little_Bird_WDL_01;
    class CFP_B_USARMY_2003_MH_6J_Little_Bird_WDL_01_OCimport_01 : CFP_B_USARMY_2003_MH_6J_Little_Bird_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_2003_MH_6J_Little_Bird_WDL_01_OCimport_02 : CFP_B_USARMY_2003_MH_6J_Little_Bird_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
        };
    };

    class CFP_B_USARMY_2003_AH_64D_WDL_01;
    class CFP_B_USARMY_2003_AH_64D_WDL_01_OCimport_01 : CFP_B_USARMY_2003_AH_64D_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_2003_AH_64D_WDL_01_OCimport_02 : CFP_B_USARMY_2003_AH_64D_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_ILIDF_F35_Adir_01;
    class CFP_B_ILIDF_F35_Adir_01_OCimport_01 : CFP_B_ILIDF_F35_Adir_01 { scope = 0; class EventHandlers; };
    class CFP_B_ILIDF_F35_Adir_01_OCimport_02 : CFP_B_ILIDF_F35_Adir_01_OCimport_01 { scope = 0; class EventHandlers; };

    class CFP_B_ILIDF_C130_Qarnaf_01;
    class CFP_B_ILIDF_C130_Qarnaf_01_OCimport_01 : CFP_B_ILIDF_C130_Qarnaf_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_ILIDF_C130_Qarnaf_01_OCimport_02 : CFP_B_ILIDF_C130_Qarnaf_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };


    class B_FictionArmy_BLUFOR_Anti_Air_Woodland_01 : B_CTRG_Soldier_TL_tna_F_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Anti-Air ";
        side = 1;
        faction = "B_FictionArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_M4A3_black","CUP_launch_FIM92Stinger","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_launch_FIM92Stinger","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_FIM92Stinger","","","",{},{},""},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",10,30}}},{},"H_HelmetIA","CUP_G_ESS_BLK",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Autorifleman_Woodland_01 : B_FictionArmy_BLUFOR_Anti_Air_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Autorifleman";
        side = 1;
        faction = "B_FictionArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_lmg_m249_pip1","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_lmg_m249_pip1","CUP_hgun_M9A1"};

        magazines[] = {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_15Rnd_9x19_M9","CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_15Rnd_9x19_M9","CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_m249_pip1","","","CUP_optic_ACOG_TA01B_Black_PIP",{"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",200},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform",{{"CUP_HandGrenade_M67",2,1},{"CUP_15Rnd_9x19_M9",3,15}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",3,200}}},{},"H_HelmetIA","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Crewman_Woodland_01 : B_FictionArmy_BLUFOR_Autorifleman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Crewman";
        side = 1;
        faction = "B_FictionArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "U_Tank_green_F";

        linkedItems[] = {"H_HelmetCrew_I","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"H_HelmetCrew_I","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_M4A1_standard_short_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A1_standard_short_black","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag_Tracer_Green","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag_Tracer_Green","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag_Tracer_Green","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag_Tracer_Green","CUP_15Rnd_9x19_M9"};

        backpack = "B_LegStrapBag_black_F";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_standard_short_black","","CUP_acc_Flashlight","CUP_optic_CompM4",{"CUP_30Rnd_556x45_Stanag_Tracer_Green",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_Tank_green_F",{{"ACE_packingBandage",5},{"ACE_quikclot",5},{"ACE_tourniquet",2}}},{},{"B_LegStrapBag_black_F",{{"CUP_15Rnd_9x19_M9",4,15}}},"H_HelmetCrew_I","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Grenadier_Woodland_01 : B_FictionArmy_BLUFOR_Crewman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Grenadier ";
        side = 1;
        faction = "B_FictionArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_M4A1_BUIS_GL","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A1_BUIS_GL","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_BUIS_GL","","","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform_shortsleeve",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"1Rnd_HE_Grenade_shell",4,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"H_HelmetIA","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Heavy_AT_Woodland_01 : B_FictionArmy_BLUFOR_Anti_Air_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Heavy AT";
        side = 1;
        faction = "B_FictionArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_M4A3_black","launch_NLAW_F","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","launch_NLAW_F","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform_shortsleeve",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"H_HelmetIA","CUP_G_ESS_BLK_Scarf_Face_Grn_GPS",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_General_Woodland_01 : B_FictionArmy_BLUFOR_Heavy_AT_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR General";
        side = 1;
        faction = "B_FictionArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "U_I_ParadeUniform_01_AAF_decorated_F";

        linkedItems[] = {"H_ParadeDressCap_01_AAF_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"H_ParadeDressCap_01_AAF_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_hgun_M9A1"};

        magazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_ParadeUniform_01_AAF_decorated_F",{{"ACE_packingBandage",5},{"CUP_15Rnd_9x19_M9",2,15}}},{},{},"H_ParadeDressCap_01_AAF_F","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_JTAC_Woodland_01 : B_FictionArmy_BLUFOR_General_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR JTAC";
        side = 1;
        faction = "B_FictionArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform_shortsleeve",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"H_HelmetIA","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Light_AT_Woodland_01 : B_FictionArmy_BLUFOR_JTAC_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Light AT";
        side = 1;
        faction = "B_FictionArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_M4A3_black","CUP_launch_RPG18","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_launch_RPG18","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_RPG18","","","",{},{},""},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"H_HelmetIA","CUP_G_ESS_BLK",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Marksman_Woodland_01 : B_FictionArmy_BLUFOR_Light_AT_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Marksman";
        side = 1;
        faction = "B_FictionArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_srifle_m110_kac_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_srifle_m110_kac_black","CUP_hgun_M9A1"};

        magazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9","CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9","CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_m110_kac_black","","CUP_acc_Flashlight","CUP_optic_ACOG_TA01B_Black_PIP",{"CUP_20Rnd_762x51_B_M110",20},{},"CUP_bipod_VLTOR_Modpod_black"},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform_shortsleeve",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_20Rnd_762x51_B_M110",6,20}}},{},"H_HelmetIA","CUP_G_Scarf_Face_Grn",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Officer_Woodland_01 : B_FictionArmy_BLUFOR_Marksman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Officer";
        side = 1;
        faction = "B_FictionArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "U_I_OfficerUniform";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","SP_Beret_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","SP_Beret_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_OfficerUniform",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"SP_Beret_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Pilot_Woodland_01 : B_FictionArmy_BLUFOR_Officer_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Pilot";
        side = 1;
        faction = "B_FictionArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_CrewHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_CrewHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_M4A1_standard_short_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A1_standard_short_black","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_standard_short_black","","CUP_acc_Flashlight","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform",{{"ACE_packingBandage",5},{"ACE_quikclot",5},{"ACE_tourniquet",2}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_30Rnd_556x45_Stanag",6,30}}},{},"H_CrewHelmetHeli_O","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Rifleman_Woodland_01 : B_FictionArmy_BLUFOR_Pilot_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Rifleman";
        side = 1;
        faction = "B_FictionArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"H_HelmetIA","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Squad_Leader_Woodland_01 : B_FictionArmy_BLUFOR_Rifleman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Squad Leader";
        side = 1;
        faction = "B_FictionArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_M4A1_standard_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A1_standard_black","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_standard_black","","CUP_acc_ANPEQ_15_Black_Top","CUP_optic_ACOG_TA01B_Black_PIP",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform_shortsleeve",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"H_HelmetIA","CUP_FR_NeckScarf2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Team_Lead_Woodland_01 : B_FictionArmy_BLUFOR_Squad_Leader_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Team Lead";
        side = 1;
        faction = "B_FictionArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "CUP_U_B_CZ_WDL_NoKneepads";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_HK416_CQB_Wood","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_HK416_CQB_Wood","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_HK416_CQB_Wood","","CUP_acc_ANPEQ_15_Flashlight_OD_L","CUP_optic_HensoldtZO_od_PIP",{"CUP_30Rnd_556x45_Emag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_CZ_WDL_NoKneepads",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1},{"CUP_30Rnd_556x45_Emag",8,30}}},{},"H_HelmetHBK_headset_F","CUP_G_ESS_BLK_Scarf_Face_Grn",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_HUMVEE_Woodland_01 : CFP_B_USARMY_HMMWV_M2_USA_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR HUMVEE";
        side = 1;
        faction = "B_FictionArmy_Woodland";
        crew = "B_FictionArmy_BLUFOR_Rifleman_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_FictionArmy_BLUFOR_Rifleman_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Woodland";

    };

    class B_FictionArmy_BLUFOR_Tank_Woodland_01 : CFP_B_USARMY_2003_M1A1_Abrams_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Tank";
        side = 1;
        faction = "B_FictionArmy_Woodland";
        crew = "B_FictionArmy_BLUFOR_Crewman_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_FictionArmy_BLUFOR_Crewman_Woodland_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_APC_Woodland_01 : CUP_B_M7Bradley_USA_W_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR APC";
        side = 1;
        faction = "B_FictionArmy_Woodland";
        crew = "B_FictionArmy_BLUFOR_Crewman_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_FictionArmy_BLUFOR_Crewman_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Anti_Air_Vehicle_Woodland_01 : CFP_B_USARMY_2003_HMMWV_Avenger_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Anti-Air Vehicle";
        side = 1;
        faction = "B_FictionArmy_Woodland";
        crew = "CFP_B_USARMY_2003_Rifleman_WDL_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USARMY_2003_Rifleman_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Turret_M2_Woodland_01 : CFP_B_USARMY_2003_M2_Machine_Gun_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Turret M2";
        side = 1;
        faction = "B_FictionArmy_Woodland";
        crew = "CFP_B_USARMY_2003_Rifleman_WDL_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_FictionArmy_BLUFOR_Rifleman_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_TOW_Turret_Woodland_01 : CFP_B_USARMY_2003_TOW_Tripod_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR TOW Turret";
        side = 1;
        faction = "B_FictionArmy_Woodland";
        crew = "CFP_B_USARMY_2003_Rifleman_WDL_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_FictionArmy_BLUFOR_Rifleman_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Turret_81mm_Mortar_Woodland_01 : CFP_B_USARMY_2003_M252_81mm_Mortar_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Turret 81mm Mortar";
        side = 1;
        faction = "B_FictionArmy_Woodland";
        crew = "CFP_B_USARMY_2003_Rifleman_WDL_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_FictionArmy_BLUFOR_Rifleman_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Turret_M2_Mini_Tripod_Woodland_01 : CFP_B_USARMY_2003_M2_Minitripod_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Turret M2 Mini Tripod";
        side = 1;
        faction = "B_FictionArmy_Woodland";
        crew = "CFP_B_USARMY_2003_Rifleman_WDL_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_FictionArmy_BLUFOR_Rifleman_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_Turret_Artillery_Woodland_01 : CFP_B_USARMY_2003_M119_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Turret Artillery";
        side = 1;
        faction = "B_FictionArmy_Woodland";
        crew = "CFP_B_USARMY_2003_Rifleman_WDL_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_MH_6J_Little_Bird_Woodland_01 : CFP_B_USARMY_2003_MH_6J_Little_Bird_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR MH-6J Little Bird";
        side = 1;
        faction = "B_FictionArmy_Woodland";
        crew = "B_FictionArmy_BLUFOR_Pilot_Woodland_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_FictionArmy_BLUFOR_Pilot_Woodland_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_AH_64D_Apache_Woodland_01 : CFP_B_USARMY_2003_AH_64D_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR AH-64D Apache";
        side = 1;
        faction = "B_FictionArmy_Woodland";
        crew = "B_FictionArmy_BLUFOR_Pilot_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_FictionArmy_BLUFOR_Pilot_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionArmy_BLUFOR_F35_Lightning_Woodland_01 : CFP_B_ILIDF_F35_Adir_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR F-35 Lightning";
        side = 1;
        faction = "B_FictionArmy_Woodland";
        crew = "B_FictionArmy_BLUFOR_Pilot_Woodland_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_F35\data\f35_baf_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "BAFGrey";

    };

    class B_FictionArmy_BLUFOR_C130_Woodland_01 : CFP_B_ILIDF_C130_Qarnaf_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR C-130";
        side = 1;
        faction = "B_FictionArmy_Woodland";
        crew = "B_FictionArmy_BLUFOR_Pilot_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_FictionArmy_BLUFOR_Pilot_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_body_raf2_co.paa'];_unit setObjectTextureGlobal [1,'CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_wings_raf2_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RAFGrey";

    };

    class CFP_B_USRANGERS_M1165_GMV_WDL_01;
    class CFP_B_USRANGERS_M1165_GMV_WDL_01_OCimport_01 : CFP_B_USRANGERS_M1165_GMV_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USRANGERS_M1165_GMV_WDL_01_OCimport_02 : CFP_B_USRANGERS_M1165_GMV_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_B_USRANGERS_M1126_ICV_M2_CROWS_Slat_WDL_01;
    class CFP_B_USRANGERS_M1126_ICV_M2_CROWS_Slat_WDL_01_OCimport_01 : CFP_B_USRANGERS_M1126_ICV_M2_CROWS_Slat_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USRANGERS_M1126_ICV_M2_CROWS_Slat_WDL_01_OCimport_02 : CFP_B_USRANGERS_M1126_ICV_M2_CROWS_Slat_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class ObsTurret;
            class CommanderTurret;
        };
    };

    class B_FictionSOFArmy_BLUFOR_SOF_AT_Woodland_01 : B_FictionArmy_BLUFOR_Heavy_AT_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR SOF AT";
        side = 1;
        faction = "B_FictionSOFArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "CUP_U_B_CZ_WDL_NoKneepads";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_M4A1_MOE_short_black","launch_NLAW_F","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A1_MOE_short_black","launch_NLAW_F","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_MOE_short_black","CUP_muzzle_snds_SCAR_L","CUP_acc_ANPEQ_15_Flashlight_Black_L","CUP_optic_G33_HWS_BLK",{"CUP_30Rnd_556x45_Stanag",30},{},"CUP_bipod_VLTOR_Modpod_black"},{"launch_NLAW_F","","","",{},{},""},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_CZ_WDL_NoKneepads",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1},{"CUP_30Rnd_556x45_Stanag",9,30}}},{},"H_HelmetHBK_headset_F","CUP_G_Scarf_Face_Grn",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionSOFArmy_BLUFOR_SOF_Autorifleman_Woodland_01 : B_FictionSOFArmy_BLUFOR_SOF_AT_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR SOF Autorifleman";
        side = 1;
        faction = "B_FictionSOFArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "CUP_U_B_CZ_WDL_NoKneepads";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_lmg_m249_pip2","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_lmg_m249_pip2","CUP_hgun_M9A1"};

        magazines[] = {"CUP_200Rnd_TE1_Red_Tracer_556x45_M249","CUP_15Rnd_9x19_M9","CUP_200Rnd_TE1_Red_Tracer_556x45_M249","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_200Rnd_TE1_Red_Tracer_556x45_M249","CUP_15Rnd_9x19_M9","CUP_200Rnd_TE1_Red_Tracer_556x45_M249","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_m249_pip2","CUP_muzzle_snds_M16","","optic_Holosight_smg_blk_F",{"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",200},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_CZ_WDL_NoKneepads",{{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1},{"CUP_15Rnd_9x19_M9",2,15}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",3,200}}},{},"H_HelmetHBK_headset_F","CUP_G_Grn_Scarf_Shades_GPS",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionSOFArmy_BLUFOR_SOF_Grenadier_Woodland_01 : B_FictionSOFArmy_BLUFOR_SOF_Autorifleman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR SOF Grenadier";
        side = 1;
        faction = "B_FictionSOFArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "CUP_U_B_CZ_WDL_TShirt";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_M4A1_BUIS_GL","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A1_BUIS_GL","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_X95","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_X95","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_X95","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_X95","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_BUIS_GL","CUP_muzzle_snds_M16","CUP_acc_ANPEQ_15_Flashlight_Black_L","CUP_optic_AIMM_MICROT1_BLK",{"CUP_30Rnd_556x45_X95",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_CZ_WDL_TShirt",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1},{"CUP_30Rnd_556x45_PMAG_COYOTE_RPL_Tracer_Yellow",8,30}}},{},"H_HelmetHBK_headset_F","CUP_G_Scarf_Face_Grn",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionSOFArmy_BLUFOR_SOF_Marksman_Woodland_01 : B_FictionSOFArmy_BLUFOR_SOF_Grenadier_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR SOF Marksman";
        side = 1;
        faction = "B_FictionSOFArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "CUP_U_B_CZ_WDL_NoKneepads";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_srifle_M110_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_srifle_M110_black","CUP_hgun_M9A1"};

        magazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9","CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9","CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M110_black","CUP_muzzle_snds_M110_black","CUP_acc_Flashlight","CUP_optic_ACOG_TA31_KF_PIP",{"CUP_20Rnd_762x51_B_M110",20},{},"CUP_bipod_VLTOR_Modpod_black"},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_CZ_WDL_NoKneepads",{{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_20Rnd_762x51_B_M110",7,20}}},{},"H_HelmetHBK_headset_F","CUP_G_PMC_Facewrap_Tropical_Glasses_Dark_Headset",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionSOFArmy_BLUFOR_SOF_Rifleman_Woodland_01 : B_FictionSOFArmy_BLUFOR_SOF_Marksman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR SOF Rifleman";
        side = 1;
        faction = "B_FictionSOFArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "CUP_U_B_CZ_WDL_NoKneepads";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_HK416_Wood","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_HK416_Wood","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_HK416_Wood","CUP_muzzle_snds_M16_camo","CUP_acc_ANPEQ_15_Flashlight_OD_L","CUP_optic_G33_HWS_BLK",{"CUP_30Rnd_556x45_Emag",30},{},"bipod_01_F_khk"},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_CZ_WDL_NoKneepads",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1},{"CUP_30Rnd_556x45_PMAG_COYOTE",8,30}}},{},"H_HelmetHBK_headset_F","CUP_G_Scarf_Face_Grn",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionSOFArmy_BLUFOR_SOF_Squad_lead_Woodland_01 : B_FictionSOFArmy_BLUFOR_SOF_Rifleman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR SOF Squad lead";
        side = 1;
        faction = "B_FictionSOFArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "CUP_U_B_CZ_WDL_Kneepads";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_HK416_Wood","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_HK416_Wood","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_HK416_Wood","","CUP_acc_ANPEQ_15_Flashlight_OD_L","CUP_optic_CompM2_Woodland",{"CUP_30Rnd_556x45_Emag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_CZ_WDL_Kneepads",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1},{"CUP_30Rnd_556x45_Emag",9,30}}},{},"H_HelmetHBK_headset_F","CUP_G_Scarf_Face_Grn",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionSOFArmy_BLUFOR_SOF_Team_Lead_Woodland_01 : B_FictionSOFArmy_BLUFOR_SOF_Squad_lead_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR SOF Team Lead";
        side = 1;
        faction = "B_FictionSOFArmy_Woodland";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "CUP_U_B_CZ_WDL_NoKneepads";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};

        weapons[] = {"CUP_arifle_HK416_CQB_Wood","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_HK416_CQB_Wood","CUP_hgun_M9A1"};

        magazines[] = {"CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_HK416_CQB_Wood","CUP_muzzle_snds_G36_wood","CUP_acc_ANPEQ_15_Flashlight_OD_L","CUP_optic_Elcan_reflex_OD",{"CUP_30Rnd_556x45_Emag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_CZ_WDL_NoKneepads",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1},{"CUP_30Rnd_556x45_Emag",8,30}}},{},"H_HelmetHBK_headset_F","CUP_G_ESS_BLK_Scarf_Face_Grn",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_FictionSOFArmy_BLUFOR_Light_Vehicle_Woodland_01 : CFP_B_USRANGERS_M1165_GMV_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Light Vehicle";
        side = 1;
        faction = "B_FictionSOFArmy_Woodland";
        crew = "B_FictionSOFArmy_BLUFOR_SOF_Rifleman_Woodland_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_FictionSOFArmy_BLUFOR_SOF_Rifleman_Woodland_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\Data\hmmwv_body_canvas_1_wl_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_hood_canvas_wl_co.paa'];_unit setObjectTextureGlobal [2,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_regular_wl_1_co.paa'];_unit setObjectTextureGlobal [3,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_parts_wl_1_ca.paa'];_unit setObjectTextureGlobal [4,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_gpk_tower_wl_co.paa'];_unit setObjectTextureGlobal [5,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_gmv_wl_01_co.paa'];_unit setObjectTextureGlobal [6,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_details_2_wl_co.paa'];_unit setObjectTextureGlobal [7,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\stryker_net_co.paa'];_unit setObjectTextureGlobal [8,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_m1167turret_wl_co.paa'];_unit setObjectTextureGlobal [9,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\fbcb2_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Woodland";

    };

    class B_FictionSOFArmy_BLUFOR_Heavy_Vehicle_Woodland_01 : CFP_B_USRANGERS_M1126_ICV_M2_CROWS_Slat_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "BLUFOR Heavy Vehicle";
        side = 1;
        faction = "B_FictionSOFArmy_Woodland";
        crew = "B_FictionSOFArmy_BLUFOR_SOF_Rifleman_Woodland_01";

        class Turrets : Turrets {
            class ObsTurret : ObsTurret { gunnerType = "B_FictionSOFArmy_BLUFOR_SOF_Rifleman_Woodland_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body1_des_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body2_des_co.paa'];_unit setObjectTextureGlobal [2,'cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_body2_des_co.paa'];_unit setObjectTextureGlobal [3,'cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\icv_des_co.paa'];_unit setObjectTextureGlobal [4,'cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa'];_unit setObjectTextureGlobal [5,'cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa'];_unit setObjectTextureGlobal [6,'cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa'];_unit setObjectTextureGlobal [7,'cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa'];_unit setObjectTextureGlobal [8,'cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Woodland";

    };

};
