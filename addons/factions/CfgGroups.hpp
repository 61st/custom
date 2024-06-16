#include "script_component.hpp"
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
    class EAST {
        class O_FictionArmy_Woodland {
            name = "61st EFP";
            class Infantry {
                name = "Infantry";
                class o_fictionarmy_infantry_opfor_team_woodland {
                    name = "OPFOR Team";
                    side = 0;
                    faction = "O_FictionArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Teamlead_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Rifleman_M4_Woodland_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Autorifleman_Woodland_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Grenadier_Woodland_01";
                    };
                };
                class o_fictionarmy_infantry_opfor_squad_woodland {
                    name = "OPFOR Squad";
                    side = 0;
                    faction = "O_FictionArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Squad_Leader_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Teamlead_Woodland_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Teamlead_Woodland_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Rifleman_M4_Woodland_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Rifleman_M14_Woodland_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Autorifleman_Woodland_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Autorifleman_Woodland_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Grenadier_Woodland_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Grenadier_Woodland_01";
                    };
                };
                class o_fictionarmy_infantry_opfor_at_team_woodland {
                    name = "OPFOR AT Team";
                    side = 0;
                    faction = "O_FictionArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Light_AT_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Heavy_AT_Woodland_01";
                    };
                };
                class o_fictionarmy_infantry_opfor_marksman_team_woodland {
                    name = "OPFOR Marksman Team";
                    side = 0;
                    faction = "O_FictionArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Rifleman_M14_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Marksman_Woodland_01";
                    };
                };

                class o_fictionarmy_infantry_opfor_all_woodland {
                    name = "OPFOR ALL";
                    side = 0;
                    faction = "O_FictionArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Teamlead_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Squad_Leader_Woodland_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Sniper_Woodland_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Rifleman_M4_Woodland_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Rifleman_M14_Woodland_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Officer_Woodland_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Marksman_Woodland_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Light_AT_Woodland_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Heavy_AT_Woodland_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Grenadier_Woodland_01";
                    };
                    class Unit10 {
                        position[] = {-25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Crewman_Woodland_01";
                    };
                    class Unit11 {
                        position[] = {30,-30,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_Autorifleman_Woodland_01";
                    };
                    class Unit12 {
                        position[] = {-30,-30,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_ANTI_AIR_Infantry_Woodland_01";
                    };
                };
                class o_fictionarmy_infantry_opfor_anti_air_woodland {
                    name = "OPFOR Anti-Air";
                    side = 0;
                    faction = "O_FictionArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_ANTI_AIR_Infantry_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_FictionArmy_OPFOR_ANTI_AIR_Infantry_Woodland_01";
                    };
                };
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
        class B_FictionSOFArmy_Woodland {
            name = "61st SOF EFP ";
            class Infantry {
                name = "Infantry";
                class b_fictionsofarmy_infantry_blufor_sof_team_woodland {
                    name = "BLUFOR SOF Team";
                    side = 1;
                    faction = "B_FictionSOFArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Team_Lead_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Rifleman_Woodland_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Marksman_Woodland_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Grenadier_Woodland_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Autorifleman_Woodland_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_AT_Woodland_01";
                    };
                };
                class b_fictionsofarmy_infantry_blufor_sof_squad_woodland {
                    name = "BLUFOR SOF Squad";
                    side = 1;
                    faction = "B_FictionSOFArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Squad_lead_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Team_Lead_Woodland_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Team_Lead_Woodland_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Rifleman_Woodland_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Rifleman_Woodland_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Marksman_Woodland_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Marksman_Woodland_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Grenadier_Woodland_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Grenadier_Woodland_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Autorifleman_Woodland_01";
                    };
                    class Unit10 {
                        position[] = {-25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Autorifleman_Woodland_01";
                    };
                    class Unit11 {
                        position[] = {30,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_AT_Woodland_01";
                    };
                    class Unit12 {
                        position[] = {-30,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_AT_Woodland_01";
                    };
                };
                class b_fictionsofarmy_infantry_blufor_sof_at_team_woodland {
                    name = "BLUFOR SOF AT Team";
                    side = 1;
                    faction = "B_FictionSOFArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_AT_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_AT_Woodland_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionSOFArmy_BLUFOR_SOF_Rifleman_Woodland_01";
                    };
                };
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
        class B_FictionArmy_Woodland {
            name = "61st EFP ";

            class Infantry {
                name = "Infantry";

                class b_fictionarmy_infantry_blufor_team_woodland {
                    name = "BLUFOR Team";
                    side = 1;
                    faction = "B_FictionArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Team_Lead_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Rifleman_Woodland_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Autorifleman_Woodland_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Grenadier_Woodland_01";
                    };
                };

                class b_fictionarmy_infantry_blufor_squad_woodland {
                    name = "BLUFOR Squad";
                    side = 1;
                    faction = "B_FictionArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Squad_Leader_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Team_Lead_Woodland_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Team_Lead_Woodland_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Rifleman_Woodland_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Rifleman_Woodland_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Grenadier_Woodland_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Grenadier_Woodland_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Autorifleman_Woodland_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Autorifleman_Woodland_01";
                    };
                };

                class b_fictionarmy_infantry_blufor_marksman_team_woodland {
                    name = "BLUFOR Marksman Team";
                    side = 1;
                    faction = "B_FictionArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Marksman_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Rifleman_Woodland_01";
                    };
                };
                class b_fictionarmy_infantry_blufor_anti_tank_team_woodland {
                    name = "BLUFOR Anti-Tank Team";
                    side = 1;
                    faction = "B_FictionArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Heavy_AT_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Light_AT_Woodland_01";
                    };
                };
                class b_fictionarmy_infantry_blufor_anti_air_team_woodland {
                    name = "BLUFOR Anti-Air Team";
                    side = 1;
                    faction = "B_FictionArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Anti_Air_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Anti_Air_Woodland_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FictionArmy_BLUFOR_Rifleman_Woodland_01";
                    };
                };
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
};
