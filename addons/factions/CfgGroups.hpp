/*
 * Author: AUTHOR
 * Function description
 *
 * Arguments:
 * 0: Objects <ARRAY>
 * 1: All <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[bob, ted], false] call lxim_main_fnc_example
 *
 * Public: No
 */
class CfgGroups {
    class Indep {
        class I_CebuArmy_Woodland {
            name = "Cebu Armed Forces";
            class Infantry {
                name = "Infantry";
            };
            class SpecOps {
                name = "Special Forces";
            };
            class Motorized {
                name = "Motorized Infantry";
            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";
            };
            class Support {
                name = "Support Infantry";
            };
            class Mechanized {
                name = "Mechanized Infantry";
            };
            class Armored {
                name = "Armor";
            };
            class Artillery {
                name = "Artillery";
            };
            class Naval {
                name = "Naval";
            };
            class Air {
                name = "Air";
            };
        };
    };
    class WEST {
        class B_PhilippinesArmy_Woodland {
            name = "Philippines Armed Forces ";
            class Infantry {
                name = "Infantry";
                class CFP_B_USARMY_1991_WDL_RifleSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Squad_Leader_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Team_Leader_Woodland_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Team_Leader_Woodland_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Rifleman_Woodland_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Rifleman_Woodland_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Autorifleman_Woodland_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Autorifleman_Woodland_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Grenadier_Woodland_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Grenadier_Woodland_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_TeamAT {
                    name = "Team (AT)";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.1;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Light_AT_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Heavy_AT_Woodland_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_Team {
                    name = "Team";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Rifleman_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Team_Leader_Woodland_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Autorifleman_Woodland_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Grenadier_Woodland_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_SniperTeam {
                    name = "Sniper Team";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;
                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Sniper_WDL_01";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Sniper_WDL_01";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Spotter_WDL_01";
                    };
                };
                class b_philippinesarmy_infantry_marksman_team_woodland {
                    name = "Marksman Team";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Marksman_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_PhilippinesArmy_Marksman_Woodland_01";
                    };
                };
            };
            class SpecOps {
                name = "SpecOps";
                class CFP_B_USARMY_1991_WDL_SFSquad {
                    name = "SF Squad";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Team_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Grenadier_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Explosives_Specialist_WDL_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Medic_WDL_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Auto_Rifleman_WDL_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Marksman_WDL_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Rifleman_WDL_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_SFFireTeam {
                    name = "SF Fire Team";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Team_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Grenadier_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Rifleman_WDL_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Auto_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_MotorizedSFTeam_Mk19 {
                    name = "Motorized SF Team [HMMWV SOV Mk19]";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_HMMWV_SOV_Mk19_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Team_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Grenadier_WDL_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Auto_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_MotorizedSFTeam_M2 {
                    name = "Motorized SF Team [HMMWV SOV M2]";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_HMMWV_SOV_M2_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Team_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Grenadier_WDL_01";
                    };
                    class Unit3 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_SF_Auto_Rifleman_WDL_01";
                    };
                };
            };
            class Motorized {
                name = "Motorized";
                class CFP_B_USARMY_1991_WDL_motorized_infantry_squad_mtvr {
                    name = "Motorized Infantry squad [MTVR]";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_MTVR_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Squad_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Grenadier_WDL_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Rifleman_AT_WDL_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Grenadier_WDL_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Asst_Auto_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_motorized_fire_team_humvee_m2 {
                    name = "Motorized Fire Team [Humvee M2]";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_HMMWV_M2_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_motorized_fire_team_humvee_mk19 {
                    name = "Motorized Fire Team [Humvee Mk19]";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_HMMWV_MK19_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_motorized_at_team {
                    name = "Motorized AT Team";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_HMMWV_TOW_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_AT_Specialist_Dragon_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Asst_AT_Specialist_Dragon_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_motorized_aa_team {
                    name = "Motorized AA Team";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_HMMWV_M2_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_AA_Specialist_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_AA_Specialist_WDL_01";
                    };
                };
            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";
            };
            class Support {
                name = "Support";
            };
            class Mechanized {
                name = "Mechanized";
                class CFP_B_USARMY_1991_WDL_mechanized_infantry_squad_m113 {
                    name = "Mechanized Infantry Squad [M113]";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_M113A3_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Squad_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Grenadier_WDL_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Rifleman_AT_WDL_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Grenadier_WDL_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Asst_Auto_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_mechanized_infantry_squad_m2a2_bradley {
                    name = "Mechanized Infantry Squad [M2A2 Bradley]";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_M2A2_Bradley_IFV_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Squad_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Rifleman_AT_WDL_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Asst_Auto_Rifleman_WDL_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_mechanized_infantry_squad_m2a3_bradley {
                    name = "Mechanized Infantry Squad [M2A3 Bradley]";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_M2A3_ERA_Bradley_IFV_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Squad_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Rifleman_AT_WDL_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Asst_Auto_Rifleman_WDL_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_Rifleman_WDL_01";
                    };
                };
            };
            class Armored {
                name = "Armored";
                class CFP_B_USARMY_1991_WDL_armored_m1a1_section {
                    name = "M1A1 Section";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_M1A1_Abrams_WDL_01";
                    };
                    class Unit1 {
                        position[] = {9,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_M1A1_Abrams_WDL_01";
                    };
                };
            };
            class Artillery {
                name = "Artillery";
                class CFP_B_USARMY_1991_WDL_artillery_m270_section_he {
                    name = "M270 Section [HE]";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_M270_MLRS_HE_WDL_01";
                    };
                    class Unit1 {
                        position[] = {7,-11,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_M270_MLRS_HE_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_artillery_m270_section_dpicm {
                    name = "M270 Section [DPICM]";
                    side = 1;
                    faction = "B_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_M270_MLRS_DPICM_WDL_01";
                    };
                    class Unit1 {
                        position[] = {7,-11,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_1991_M270_MLRS_DPICM_WDL_01";
                    };
                };
            };
            class Naval {
                name = "Naval";
            };
            class Air {
                name = "Air";
            };
        };
    };
};
