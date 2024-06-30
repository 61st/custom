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

class CBA_Extended_EventHandlers;
class CfgVehicles {
    class All {
        class Turrets;
    };

    class AllVehicles: All {
        class NewTurret {
            class Turrets;
        };
    };

    class Land: AllVehicles {};

    class LandVehicle: Land {
        class CommanderOptics;
    };

    class Car: LandVehicle {};
    class Car_F: Car {
        class Turrets {
            class MainTurret: NewTurret {};
        };
    };

    class Wheeled_APC_F: Car_F {
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics: CommanderOptics {};
                };
            };
        };
    };

    class APC_Wheeled_03_base_F: Wheeled_APC_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
    };
    class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F {};

    class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F {
        class AnimationSources {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {};
                };
            };
        };
    };

    class lxim_outlaw_base_F: I_APC_Wheeled_03_cannon_F {
        scope = 1;
        scopeCurator = 1;
        displayName = "AMPF";
        author = QAUTHOR;
        picture = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
        side = 1;
        armor = 500;
        maxSpeed = 125;
        enginePower = 390;
        terrainCoef = 1;
        vehicleClass = "APCs""";
        textureList[] = {"Blu",1};
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","CamoNet","CamoSlat"};
        class EventHandlers;
        class TextureSources {
            class Blu_green {
                displayName = "AMPF";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert {
                displayName = "AMPF Desert";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_d.paa),QPATHTOF(data\outlaw_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v11a {
                displayName = "AMPF 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v11b {
                displayName = "AMPF 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_v12a {
                displayName = "AMPF 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v12b {
                displayName = "AMPF 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_v11a {
                displayName = "AMPF Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_v11b {
                displayName = "AMPF Desert 1/1/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_v12a {
                displayName = "AMPF Desert 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_v12b {
                displayName = "AMPF Desert 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_rino {
                displayName = "AMPF 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_ext_g.paa),QPATHTOF(data\rino_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_rino {
                displayName = "AMPF Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_01_ext_d.paa),QPATHTOF(data\rino_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
            factions[] = {QUOTE(PREFIX)};
            };
        };
        class AnimationSources {
            class BreakWater {
                source = "user";
                initPhase = 0;
                animPeriod = 2;
            };
            class Missiles_revolving {
                source = "revolving";
                weapon = "missiles_titan";
            };
            class Missiles_reloadMagazine: Missiles_revolving {
                source = "reloadMagazine";
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = "autocannon_30mm_CTWS";
            };
            class muzzle_hide {
                source = "reload";
                weapon = "autocannon_30mm_CTWS";
            };
            class HitEngine_src {
                source = "Hit";
                hitpoint = "HitEngine";
                raw = 1;
            };
            class HitFuel_src {
                source = "Hit";
                hitpoint = "HitFuel";
                raw = 1;
            };
            class HitHull_src {
                source = "Hit";
                hitpoint = "HitHull";
                raw = 1;
            };
            class HitMainGun_src {
                source = "Hit";
                hitpoint = "HitGun";
                raw = 1;
            };
            class HitTurret_src {
                source = "Hit";
                hitpoint = "HitTurret";
                raw = 1;
            };
            class HitComTurret_src {
                source = "Hit";
                hitpoint = "HitComTurret";
                raw = 1;
            };
            class HitSLAT_Left_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_1";
                raw = 1;
            };
            class HitSLAT_Left_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_2";
                raw = 1;
            };
            class HitSLAT_Left_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_3";
                raw = 1;
            };
            class HitSLAT_Right_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_1";
                raw = 1;
            };
            class HitSLAT_Right_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_2";
                raw = 1;
            };
            class HitSLAT_Right_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_3";
                raw = 1;
            };
            class HitSLAT_back_src {
                source = "Hit";
                hitpoint = "HitSLAT_back";
                raw = 1;
            };
            class HitSLAT_front_src {
                source = "Hit";
                hitpoint = "HitSLAT_front";
                raw = 1;
            };
            class showCamonetHull {
                displayName = "$STR_A3_animationsources_showcamonethull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags {
                displayName = "$STR_A3_animationsources_showbagshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags2 {
                displayName = "$STR_A3_animationsources_showbagsturret0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showTools {
                displayName = "$STR_A3_animationsources_showtoolshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showSLATHull {
                displayName = "$STR_A3_animationsources_showslathull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"lxim_autocannon_40mm_CTWS","ACE_LMG_coax_ext_MAG58","missiles_titan"};
                magazines[] = {"lxim_60Rnd_40mm_MP_shells_Tracer_Red","lxim_60Rnd_40mm_MP_shells_Tracer_Red","lxim_60Rnd_40mm_HEI_shells_Tracer_Red","lxim_60Rnd_40mm_HEI_shells_Tracer_Red","lxim_60Rnd_40mm_APFSDS_shells_Tracer_Red","lxim_60Rnd_40mm_APFSDS_shells_Tracer_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","2Rnd_GAT_missiles","2Rnd_GAT_missiles","2Rnd_GAT_missiles"};
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {"SmokeLauncher"};
                        magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
                    };
                };
            };
        };
    };

    class lxim_outlaw_eng_base_F: I_APC_Wheeled_03_cannon_F {
        scope = 1;
        scopeCurator = 1;
        displayName = "AMPF";
        author = QAUTHOR;
        picture = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
        side = 1;
        armor = 500;
        maxSpeed = 125;
        vehicleClass = "APCs""";
        textureList[] = {"Blu",1};
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","CamoNet","CamoSlat"};
        class TextureSources {
            class Blu_green {
                displayName = "AMPF";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert {
                displayName = "AMPF Desert";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_d.paa),QPATHTOF(data\outlaw_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v11a {
                displayName = "AMPF 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v11b {
                displayName = "AMPF 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_v12a {
                displayName = "AMPF 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v12b {
                displayName = "AMPF 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_v11a {
                displayName = "AMPF Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_v11b {
                displayName = "AMPF Desert 1/1/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_v12a {
                displayName = "AMPF Desert 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_v12b {
                displayName = "AMPF Desert 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_rino {
                displayName = "AMPF 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_ext_g.paa),QPATHTOF(data\rino_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_rino {
                displayName = "AMPF Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_01_ext_d.paa),QPATHTOF(data\rino_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
        };
        class AnimationSources {
            class BreakWater {
                source = "user";
                initPhase = 0;
                animPeriod = 2;
            };
            class Missiles_revolving {
                source = "revolving";
                weapon = "missiles_titan";
            };
            class Missiles_reloadMagazine: Missiles_revolving {
                source = "reloadMagazine";
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = "autocannon_30mm_CTWS";
            };
            class muzzle_hide {
                source = "reload";
                weapon = "autocannon_30mm_CTWS";
            };
            class HitEngine_src {
                source = "Hit";
                hitpoint = "HitEngine";
                raw = 1;
            };
            class HitFuel_src {
                source = "Hit";
                hitpoint = "HitFuel";
                raw = 1;
            };
            class HitHull_src {
                source = "Hit";
                hitpoint = "HitHull";
                raw = 1;
            };
            class HitMainGun_src {
                source = "Hit";
                hitpoint = "HitGun";
                raw = 1;
            };
            class HitTurret_src {
                source = "Hit";
                hitpoint = "HitTurret";
                raw = 1;
            };
            class HitComTurret_src {
                source = "Hit";
                hitpoint = "HitComTurret";
                raw = 1;
            };
            class HitSLAT_Left_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_1";
                raw = 1;
            };
            class HitSLAT_Left_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_2";
                raw = 1;
            };
            class HitSLAT_Left_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_3";
                raw = 1;
            };
            class HitSLAT_Right_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_1";
                raw = 1;
            };
            class HitSLAT_Right_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_2";
                raw = 1;
            };
            class HitSLAT_Right_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_3";
                raw = 1;
            };
            class HitSLAT_back_src {
                source = "Hit";
                hitpoint = "HitSLAT_back";
                raw = 1;
            };
            class HitSLAT_front_src {
                source = "Hit";
                hitpoint = "HitSLAT_front";
                raw = 1;
            };
            class showCamonetHull {
                displayName = "$STR_A3_animationsources_showcamonethull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags {
                displayName = "$STR_A3_animationsources_showbagshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags2 {
                displayName = "$STR_A3_animationsources_showbagsturret0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showTools {
                displayName = "$STR_A3_animationsources_showtoolshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showSLATHull {
                displayName = "$STR_A3_animationsources_showslathull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"lxim_autocannon_40mm_ENG","ACE_LMG_coax_ext_MAG58","missiles_titan_eng_2Rnd"};
                magazines[] = {"lxim_200Rnd_40mm_G_belt","lxim_200Rnd_40mm_G_belt","lxim_200Rnd_40mm_G_belt","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","2Rnd_Titan_long_missiles_ENG","2Rnd_Titan_long_missiles_ENG"};
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {"SmokeLauncher"};
                        magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
                    };
                };
            };
        };
    };

    class lxim_outlaw_AA_base_F: I_APC_Wheeled_03_cannon_F {
        scope = 1;
        scopeCurator = 1;
        displayName = "AMPF";
        author = QAUTHOR;
        picture = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
        side = 1;
        armor = 500;
        maxSpeed = 125;
        vehicleClass = "APCs""";
        textureList[] = {"Blu",1};
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","CamoNet","CamoSlat"};
        class EventHandlers;
        class TextureSources {
            class Blu_green {
                displayName = "AMPF";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert {
                displayName = "AMPF Desert";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_d.paa),QPATHTOF(data\outlaw_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v11a {
                displayName = "AMPF 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v11b {
                displayName = "AMPF 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_v12a {
                displayName = "AMPF 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v12b {
                displayName = "AMPF 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_v11a {
                displayName = "AMPF Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_v11b {
                displayName = "AMPF Desert 1/1/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_v12a {
                displayName = "AMPF Desert 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_v12b {
                displayName = "AMPF Desert 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_rino {
                displayName = "AMPF 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_ext_g.paa),QPATHTOF(data\rino_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_rino {
                displayName = "AMPF Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_01_ext_d.paa),QPATHTOF(data\rino_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
        };
        class AnimationSources {
            class BreakWater {
                source = "user";
                initPhase = 0;
                animPeriod = 2;
            };
            class Missiles_revolving {
                source = "revolving";
                weapon = "missiles_titan";
            };
            class Missiles_reloadMagazine: Missiles_revolving {
                source = "reloadMagazine";
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = "autocannon_30mm_CTWS";
            };
            class muzzle_hide {
                source = "reload";
                weapon = "autocannon_30mm_CTWS";
            };
            class HitEngine_src {
                source = "Hit";
                hitpoint = "HitEngine";
                raw = 1;
            };
            class HitFuel_src {
                source = "Hit";
                hitpoint = "HitFuel";
                raw = 1;
            };
            class HitHull_src {
                source = "Hit";
                hitpoint = "HitHull";
                raw = 1;
            };
            class HitMainGun_src {
                source = "Hit";
                hitpoint = "HitGun";
                raw = 1;
            };
            class HitTurret_src {
                source = "Hit";
                hitpoint = "HitTurret";
                raw = 1;
            };
            class HitComTurret_src {
                source = "Hit";
                hitpoint = "HitComTurret";
                raw = 1;
            };
            class HitSLAT_Left_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_1";
                raw = 1;
            };
            class HitSLAT_Left_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_2";
                raw = 1;
            };
            class HitSLAT_Left_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_3";
                raw = 1;
            };
            class HitSLAT_Right_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_1";
                raw = 1;
            };
            class HitSLAT_Right_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_2";
                raw = 1;
            };
            class HitSLAT_Right_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_3";
                raw = 1;
            };
            class HitSLAT_back_src {
                source = "Hit";
                hitpoint = "HitSLAT_back";
                raw = 1;
            };
            class HitSLAT_front_src {
                source = "Hit";
                hitpoint = "HitSLAT_front";
                raw = 1;
            };
            class showCamonetHull {
                displayName = "$STR_A3_animationsources_showcamonethull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags {
                displayName = "$STR_A3_animationsources_showbagshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags2 {
                displayName = "$STR_A3_animationsources_showbagsturret0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showTools {
                displayName = "$STR_A3_animationsources_showtoolshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showSLATHull {
                displayName = "$STR_A3_animationsources_showslathull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"lxim_autocannon_40mm_GDF","ACE_LMG_coax_ext_MAG58","missiles_titan_aa_2Rnd"};
                magazines[] = {"lxim_280Rnd_40mm_AA_shells_Tracer_Red","lxim_280Rnd_40mm_AA_shells_Tracer_Red","lxim_280Rnd_40mm_AA_shells_Tracer_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","2Rnd_Titan_long_missiles_AA","2Rnd_Titan_long_missiles_AA","2Rnd_Titan_long_missiles_AA"};
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {"SmokeLauncher"};
                        magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
                    };
                };
            };
        };
    };

    class lxim_outlaw_unarmed_base_F: lxim_outlaw_base_F {
        supplyRadius = 10;
        attendant = 1;
        forceInGarage = 1;
        scope = 0;
        scopeCurator = 0;
        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
        };
        textureList[] = {"Blu",1};
        class TextureSources {
            class Blu_Woodland {
                displayName = "AMPF MEV Green";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\med_01_ext_g.paa),QPATHTOF(data\med_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert {
                displayName = "AMPF MEV Desert";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\med_01_ext_d.paa),QPATHTOF(data\med_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
        };
        driverCanSee = "4+8+2+32+16";
        gunnerCanSee = "4+2+8+32+16";
        weapons[] = {"TruckHorn","SmokeLauncher"};
        magazines[] = {"SmokeLauncherMag"};
        class Turrets {};
        threat[] = {0,0,0};
    };

    class lxim_outlaw_Unarmed_g: lxim_outlaw_unarmed_base_F {
        displayName = "AMPF-MEV Green";
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 1;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\med_01_ext_g.paa),QPATHTOF(data\med_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class lxim_outlaw_Unarmed_d: lxim_outlaw_unarmed_base_F {
        displayName = "AMPF-MEV Desert";
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_desert";
        hiddenSelectionsTextures[] = {QPATHTOF(data\med_01_ext_d.paa),QPATHTOF(data\med_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };

    class lxim_outlaw_repair_g: lxim_outlaw_unarmed_base_F {
        displayName = "AMPF-SUP Green";
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 1;
        transportAmmo = 0;
        ace_refuel_fuelCargo = 1000;
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 1200;
        transportSoldier = 4;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class lxim_outlaw_repair_d: lxim_outlaw_unarmed_base_F {
        displayName = "AMPF-SUP Desert";
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        transportAmmo = 0;
        ace_refuel_fuelCargo = 1000;
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 1200;
        transportSoldier = 4;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_desert";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_d.paa),QPATHTOF(data\outlaw_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };

    class lxim_outlaw_g: lxim_outlaw_base_F {
        displayName = "AMPF";
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class lxim_outlaw_d: lxim_outlaw_base_F {
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_desert";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_d.paa),QPATHTOF(data\outlaw_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };

    class lxim_outlaw_AA_g: lxim_outlaw_AA_base_F {
        displayName = "AMPF-AA";
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g_aa.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class lxim_outlaw_AA_d: lxim_outlaw_AA_base_F {
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_desert";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_d.paa),QPATHTOF(data\outlaw_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d_aa.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };

    class lxim_outlaw_g_V11: lxim_outlaw_g {
        displayName = "AMPF 1/1";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_1_1_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };


    class lxim_outlaw_g_V12: lxim_outlaw_g {
        displayName = "AMPF 1/2";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_1_2_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_g_Vhq: lxim_outlaw_g {
        displayName = "AMPF HQ";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_hq_01_ext_g.paa),QPATHTOF(data\outlaw_hq_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_AA_g_V11: lxim_outlaw_AA_g {
        displayName = "AMPF-AA 1/1";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_1_1_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g_aa.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_AA_g_V12: lxim_outlaw_AA_g {
        displayName = "AMPF-AA 1/2";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_1_2_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g_aa.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };
    class lxim_outlaw_AA_g_Vhq: lxim_outlaw_AA_g {
        displayName = "AMPF-AA HQ";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_hq_01_ext_g.paa),QPATHTOF(data\outlaw_hq_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g_aa.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_g_rino: lxim_outlaw_eng_base_F {
        displayName = "AMPF-ENG Rino";
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_green";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\rino_01_ext_g.paa),QPATHTOF(data\rino_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g_eng.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};        
    };

    class lxim_outlaw_d_V11: lxim_outlaw_d {
        displayName = "AMPF Desert 1/1";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_1_1_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_d_V12: lxim_outlaw_d {
        displayName = "AMPF Desert 1/2";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_1_2_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        forceInGarage = 0;
    };
    class lxim_outlaw_d_Vhq: lxim_outlaw_d {
        displayName = "AMPF Desert HQ";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_hq_01_ext_d.paa),QPATHTOF(data\outlaw_hq_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_AA_d_V11: lxim_outlaw_AA_d {
        displayName = "AMPF-AA Desert 1/1";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_1_1_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d_aa.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_AA_d_V12: lxim_outlaw_AA_d {
        displayName = "AMPF-AA Desert 1/2";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_1_2_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d_aa.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        forceInGarage = 0;
    };
    class lxim_outlaw_AA_d_Vhq: lxim_outlaw_AA_d {
        displayName = "AMPF-AA Desert HQ";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_hq_01_ext_d.paa),QPATHTOF(data\outlaw_hq_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d_aa.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_d_rino: lxim_outlaw_eng_base_F {
        displayName = "AMPF-ENG Desert Rino";
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_desert";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\rino_01_ext_d.paa),QPATHTOF(data\rino_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d_eng.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };

    //matv
    class B_MRAP_01_F;
    class B_T_MRAP_01_F;
    class B_MRAP_01_gmg_F;
    class B_MRAP_01_hmg_F;
    class B_T_MRAP_01_gmg_F;
    class B_T_MRAP_01_hmg_F;
    /// sand
    class lxim_B_MRAP_D: B_MRAP_01_F {
        displayName = "M-ATV [Sand]";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        crewCrashProtection = 0.8;
        crewExplosionProtection = .5;
        armor = 275;
        threat[]={0,0,0};
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\MRAP_01_base_61D_CO.paa),
            QUOTE(\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa)
        };
    };
    class lxim_B_MRAP_D_gmg: B_MRAP_01_gmg_F {
        displayName = "M-ATV GMG [Sand]";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        crewCrashProtection = 0.8;
        crewExplosionProtection = .5;
        armor = 275;
        threat[]={0,0,0};
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\MRAP_01_base_61D_CO.paa),
            QUOTE(\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa),
            QPATHTOF(data\Turret_CO_D.paa),
        };
    };
    class lxim_B_MRAP_D_hmg: B_MRAP_01_hmg_F {
        displayName = "M-ATV HMG [Sand]";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        crewCrashProtection = 0.8;
        crewExplosionProtection = .5;
        armor = 275;
        threat[]={0,0,0};
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\MRAP_01_base_61D_CO.paa),
            QUOTE(\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa),
            QPATHTOF(data\Turret_CO_D.paa),
        };
    };
    class lxim_B_MRAP_G: B_T_MRAP_01_F {
        displayName = "M-ATV [Green]";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        crewCrashProtection = 0.8;
        crewExplosionProtection = .5;
        armor = 275;
        threat[]={0,0,0};
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\MRAP_01_base_61G_CO.paa),
            QUOTE(\A3\soft_F_Exp\MRAP_01\data\MRAP_01_adds_olive_CO.paa)
        };
    };
    class lxim_B_MRAP_G_gmg: B_T_MRAP_01_gmg_F {
        displayName = "M-ATV GMG [Green]";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        crewCrashProtection = 0.8;
        crewExplosionProtection = .5;
        armor = 275;
        threat[]={0,0,0};
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\MRAP_01_base_61G_CO.paa),
            QUOTE(\A3\soft_F_Exp\MRAP_01\data\MRAP_01_adds_olive_CO.paa),
            QPATHTOF(data\Turret_CO_G.paa),
        };
    };
    class lxim_B_MRAP_G_hmg: B_T_MRAP_01_hmg_F {
        displayName = "M-ATV HMG [Green]";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        crewCrashProtection = 0.8;
        crewExplosionProtection = .5;
        armor = 275;
        threat[]={0,0,0};
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\MRAP_01_base_61G_CO.paa),
            QUOTE(\A3\soft_F_Exp\MRAP_01\data\MRAP_01_adds_olive_CO.paa),
            QPATHTOF(data\Turret_CO_G.paa),
        };
    };
};
