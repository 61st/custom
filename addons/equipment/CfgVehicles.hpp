class CBA_Extended_EventHandlers_base;
class CfgVehicles {    
    // Box
    class NATO_Box_Base;
        // Rebreather
    class Vest_V_RebreatherB;
    class GVAR(Item_vest_rebreather): Vest_V_RebreatherB {
        scope = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "[61ST] Rebreather";
        class TransportItems {
            class GVAR(rebreather) {
                name = QGVAR(rebreather);
                count = 1;
            };
        };
    };
    class Item_U_B_Wetsuit;
    class GVAR(Item_Wetsuit): Item_U_B_Wetsuit {
        author = QAUTHOR;
        displayName = "[61ST] Wetsuit";
        class TransportItems {
            class GVAR(Wetsuit) {
                name = QGVAR(Wetsuit);
                count = 1;
            };
        };
    };
    class ACE_Item_Vector;
    class GVAR(Item_Vector_Designator): ACE_Item_Vector {
        author = "NemessisRE";
        displayName = "[61ST] ACE Vector Designator (NVG/TI)";
        class TransportItems {
            class GVAR(Vector_Designator) {
                name=QGVAR(Vector_Designator);
                count=1;
            };
        };
    };
    class GVAR(Item_Vector_Designator_NVG): GVAR(Item_Vector_Designator) {
        displayName = "[61ST] ACE Vector Designator (NVG)";
        class TransportItems {
            class GVAR(Vector_Designator) {
                name=QGVAR(Vector_Designator);
                count=1;
            };
        };
    };
    class Item_optic_Nightstalker;
    class GVAR(Item_optic_Nightstalker): Item_optic_Nightstalker {
        displayName="[61ST] Nightstalker";
        author="NemesisRE";
        vehicleClass="WeaponAccessories";
        class TransportItems {
            class GVAR(optic_Nightstalker) {
                name=QGVAR(optic_Nightstalker);
                count=1;
            };
        };
    };
    class Item_optic_AMS;
    class GVAR(Item_optic_AMS): Item_optic_AMS {
        displayName="[61ST] AMS (Black)";
        author="NemesisRE";
        class TransportItems {
            class GVAR(optic_AMS) {
                name=QGVAR(optic_AMS);
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMS_khk): GVAR(Item_optic_AMS) {
        displayName="[61ST] AMS (Khaki)";
        class TransportItems {
            class GVAR(optic_AMS_khk) {
                name=QGVAR(optic_AMS_khk);
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMS_snd): GVAR(Item_optic_AMS) {
        displayName="[61ST] AMS (Sand)";
        class TransportItems {
            class GVAR(optic_AMS_snd) {
                name=QGVAR(optic_AMS_snd);
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMSTI): Item_optic_AMS {
        displayName="[61ST] AMS-TI (Black)";
        author="NemesisRE";
        class TransportItems {
            class GVAR(optic_AMS) {
                name=QGVAR(optic_AMS);
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMSTI_khk): GVAR(Item_optic_AMSTI) {
        displayName="[61ST] AMS-TI (Khaki)";
        class TransportItems {
            class GVAR(optic_AMS_khk) {
                name=QGVAR(optic_AMS_khk) ;
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMSTI_snd): GVAR(Item_optic_AMSTI) {
        displayName="[61ST] AMS-TI (Sand)";
        class TransportItems {
            class GVAR(optic_AMS_snd) {
                name=QGVAR(optic_AMS_snd);
                count=1;
            };
        };
    };
    class Box_NATO_Support_F;
    class ACE_Box_Misc: Box_NATO_Support_F {
        class TransportItems {
            class GVAR(Vector_Designator) {
                name=QGVAR(Vector_Designator);
                count=3;
            };
        };
    };

    class Box_NATO_WpsLaunch_F;
    class Box_NATO_Ammo_F;
    class Box_NATO_AmmoOrd_F;
    class Box_NATO_WpsSpecial_F;
    class Land_PlasticCase_01_large_olive_F;
    class Land_PlasticCase_01_large_black_F;
    class Land_PlasticCase_01_large_F;
    class Land_PlasticCase_01_large_idap_F;
    class Land_PlasticCase_01_medium_CBRN_F;
    class Land_PlasticCase_01_large_olive_CBRN_F;

    class GVAR(MOPP): Land_PlasticCase_01_medium_CBRN_F {
        displayName="[61ST] MOPP Box";
        maximumLoad = 6000;
        class TransportBackpacks {};
        class TransportItems {
            MACRO_ADDITEM(lxim_medbags_mopp,40);
        };
        class TransportMagazines {};
    };

    class GVAR(TOW): Box_NATO_WpsLaunch_F {
        displayName="[61ST] TOW Box";
        maximumLoad = 10000;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AmmoBox_signs_61a_ammo_CA.paa),
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        class TransportWeapons {};
        class TransportBackpacks {};
        class TransportItems {};
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ace_compat_rhs_usf3_mag_TOW2A,8);
            MACRO_ADDMAGAZINE(ace_compat_rhs_usf3_mag_TOW2bb,2);
        };
    };

    class GVAR(AA): Box_NATO_WpsSpecial_F {
        displayName="[61ST] AA Box";
        maximumLoad = 6000;
        class TransportBackpacks {};
        class TransportWeapons {
            MACRO_ADDWEAPON(rhs_weap_fim92,1);
        };
        class TransportItems {};
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhs_fim92_mag,8);
        };
    };

    class GVAR(javelin): Box_NATO_WpsSpecial_F {
        displayName="[61ST] Javelin Box";
        maximumLoad = 6000;
        class TransportBackpacks {};
        class TransportWeapons {
            MACRO_ADDWEAPON(rhs_weap_fgm148,1);
        };
        class TransportItems {};
        class TransportMagazines {
            MACRO_ADDMAGAZINE(rhs_fgm148_magazine_AT,8);
        };
    };

    class GVAR(50cal): Box_NATO_Support_F {
        displayName="[61ST] M2 Box";
        maximumLoad = 6000;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AmmoBox_signs_61a_ammo_CA.paa),
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        class TransportBackpacks {};
        class TransportItems {};
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ace_csw_100Rnd_127x99_mag_red,12);
            MACRO_ADDMAGAZINE(ace_csw_100Rnd_127x99_mag,2);
        };
    };

    class GVAR(252): Box_NATO_Ammo_F {
        displayName="[61ST] M252 Box";
        maximumLoad = 6000;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AmmoBox_signs_61a_ammo_CA.paa),
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        class TransportBackpacks {};
        class TransportItems {};
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_1Rnd_82mm_Mo_HE_Guided,8);
            MACRO_ADDMAGAZINE(ACE_1Rnd_82mm_Mo_HE,16);
            MACRO_ADDMAGAZINE(ACE_1Rnd_82mm_Mo_Illum,8);
            MACRO_ADDMAGAZINE(ACE_1Rnd_82mm_Mo_HE_LaserGuided,4);
            MACRO_ADDMAGAZINE(ACE_1Rnd_82mm_Mo_Smoke,8);
        };
    };

    class GVAR(eng): Box_NATO_AmmoOrd_F {
        displayName="[61ST] Engineering Box";
        maximumLoad = 6000;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\AmmoBox_signs_61a_ammo_CA.paa),
            "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
        };
        class TransportBackpacks {};
        class TransportItems {
            MACRO_ADDITEM(ACE_M26_Clacker,2);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,10);
            MACRO_ADDMAGAZINE(ATMine_Range_Mag,10);
            MACRO_ADDMAGAZINE(ClaymoreDirectionalMine_Remote_Mag,10);
            MACRO_ADDMAGAZINE(SLAMDirectionalMine_Wire_Mag,10);
            MACRO_ADDMAGAZINE(tsp_breach_package_mag,10);
            MACRO_ADDMAGAZINE(tsp_breach_popper_mag,10);
            MACRO_ADDMAGAZINE(tsp_breach_linear_mag,10);
            MACRO_ADDMAGAZINE(tsp_breach_block_mag,10);
            MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,10);
        };
    };

    class GVAR(outlawHQ): Land_PlasticCase_01_large_olive_CBRN_F {
        displayName="[61ST] Outlaw HQ Resupply";
        hiddenSelectionsTextures[]= {
            "a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
            QPATHTOF(data\plasticcase_01_logo_01_hq.paa)
        };
        maximumLoad = 6000;
        class TransportWeapons {
            MACRO_ADDWEAPON(rhs_weap_M136,4);
            MACRO_ADDWEAPON(launch_MRAWS_olive_F,2);
        };
        class TransportBackpacks {};
        class TransportItems {
            MACRO_ADDITEM(ACRE_PRC152,1);
            MACRO_ADDITEM(ACRE_PRC148,4);
            MACRO_ADDITEM(ACRE_PRC117F,2);

            MACRO_ADDITEM(ACE_IR_Strobe_Item,8);

            MACRO_ADDITEM(lxim_medbags_MedicKit,2);
            MACRO_ADDITEM(lxim_medbags_cls,3);
            MACRO_ADDITEM(lxim_medbags_FirstAid,8);

            MACRO_ADDITEM(Rev_darter,1);
            MACRO_ADDITEM(lxim_vs17_vs17,1);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(lxim_sig_25Rnd_Fury,40);
            MACRO_ADDMAGAZINE(lxim_sig_25Rnd_Fury_RT,40);
            MACRO_ADDMAGAZINE(lxim_sig_25Rnd_Fury_blk,40);
            MACRO_ADDMAGAZINE(lxim_sig_25Rnd_Fury_RT_blk,40);

            MACRO_ADDMAGAZINE(lxim_sig_150Rnd_Fury,12);
            MACRO_ADDMAGAZINE(lxim_sig_150Rnd_Fury_blk,12);
            MACRO_ADDMAGAZINE(lxim_sig_150Rnd_Fury_RT,12);
            MACRO_ADDMAGAZINE(lxim_sig_150Rnd_Fury_RT_blk,12);

            MACRO_ADDMAGAZINE(rhs_mag_maaws_HEAT,6);
            MACRO_ADDMAGAZINE(rhs_mag_maaws_HE,3);
            MACRO_ADDMAGAZINE(rhs_mag_maaws_HEDP,3);

            MACRO_ADDMAGAZINE(rhs_mag_M441_HE,12);
            MACRO_ADDMAGAZINE(ACE_40mm_Pike,12);
            MACRO_ADDMAGAZINE(rhs_mag_M433_HEDP,12);
            MACRO_ADDMAGAZINE(rhs_mag_M397_HET,12);
            MACRO_ADDMAGAZINE(rhs_mag_m576,12);
            MACRO_ADDMAGAZINE(rhs_mag_m4009,12);
            MACRO_ADDMAGAZINE(rhs_mag_M663_green_cluster,3);
            MACRO_ADDMAGAZINE(rhs_mag_M585_white_cluster,3);
            MACRO_ADDMAGAZINE(rhs_mag_M664_red_cluster,3);
            MACRO_ADDMAGAZINE(rhs_mag_m714_White,3);
            MACRO_ADDMAGAZINE(rhs_mag_m715_Green,3);
            MACRO_ADDMAGAZINE(rhs_mag_m713_Red,3);
            MACRO_ADDMAGAZINE(rhs_mag_m661_green,3);
            MACRO_ADDMAGAZINE(rhs_mag_m716_yellow,3);
            MACRO_ADDMAGAZINE(ACE_HUNTIR_M203,3);

            MACRO_ADDMAGAZINE(rhs_mag_m67,12);
            MACRO_ADDMAGAZINE(ACE_M84,4);
            MACRO_ADDMAGAZINE(MS_Strobe_Mag_2,4);
            MACRO_ADDMAGAZINE(MS_Strobe_Mag_1,4);
            MACRO_ADDMAGAZINE(B_IR_Grenade,4);

            MACRO_ADDMAGAZINE(SmokeShell,4);
            MACRO_ADDMAGAZINE(SmokeShellYellow,4);

            MACRO_ADDMAGAZINE(ACE_Chemlight_IR,4);
            MACRO_ADDMAGAZINE(ACE_Chemlight_HiYellow,4);

        };
    };

    class GVAR(outlaw11): Land_PlasticCase_01_large_olive_CBRN_F {
        displayName="[61ST] Outlaw 1-1 Resupply";
        maximumLoad = 6000;
        hiddenSelectionsTextures[]= {
            "a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
            QPATHTOF(data\plasticcase_01_logo_01_11.paa)
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(rhs_weap_M136,4);
            MACRO_ADDWEAPON(launch_MRAWS_olive_F,2);
        };
        class TransportBackpacks {};
        class TransportItems {
            MACRO_ADDITEM(ACRE_PRC152,1);
            MACRO_ADDITEM(ACRE_PRC148,4);
            MACRO_ADDITEM(ACRE_PRC117F,1);

            MACRO_ADDITEM(ACE_IR_Strobe_Item,8);

            MACRO_ADDITEM(lxim_medbags_MedicKit,1);
            MACRO_ADDITEM(lxim_medbags_cls,2);
            MACRO_ADDITEM(lxim_medbags_FirstAid,8);

            MACRO_ADDITEM(Rev_darter,1);
            MACRO_ADDITEM(lxim_vs17_vs17,1);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(lxim_sig_25Rnd_Fury,40);
            MACRO_ADDMAGAZINE(lxim_sig_25Rnd_Fury_RT,40);
            MACRO_ADDMAGAZINE(lxim_sig_25Rnd_Fury_blk,40);
            MACRO_ADDMAGAZINE(lxim_sig_25Rnd_Fury_RT_blk,40);

            MACRO_ADDMAGAZINE(lxim_sig_150Rnd_Fury,12);
            MACRO_ADDMAGAZINE(lxim_sig_150Rnd_Fury_blk,12);
            MACRO_ADDMAGAZINE(lxim_sig_150Rnd_Fury_RT,12);
            MACRO_ADDMAGAZINE(lxim_sig_150Rnd_Fury_RT_blk,12);

            MACRO_ADDMAGAZINE(rhs_mag_maaws_HEAT,6);
            MACRO_ADDMAGAZINE(rhs_mag_maaws_HE,3);
            MACRO_ADDMAGAZINE(rhs_mag_maaws_HEDP,3);

            MACRO_ADDMAGAZINE(rhs_mag_M441_HE,12);
            MACRO_ADDMAGAZINE(ACE_40mm_Pike,12);
            MACRO_ADDMAGAZINE(rhs_mag_M433_HEDP,12);
            MACRO_ADDMAGAZINE(rhs_mag_M397_HET,12);
            MACRO_ADDMAGAZINE(rhs_mag_m576,12);
            MACRO_ADDMAGAZINE(rhs_mag_m4009,12);
            MACRO_ADDMAGAZINE(rhs_mag_M663_green_cluster,3);
            MACRO_ADDMAGAZINE(rhs_mag_M585_white_cluster,3);
            MACRO_ADDMAGAZINE(rhs_mag_M664_red_cluster,3);
            MACRO_ADDMAGAZINE(rhs_mag_m714_White,3);
            MACRO_ADDMAGAZINE(rhs_mag_m715_Green,3);
            MACRO_ADDMAGAZINE(rhs_mag_m713_Red,3);
            MACRO_ADDMAGAZINE(rhs_mag_m661_green,3);
            MACRO_ADDMAGAZINE(rhs_mag_m716_yellow,3);
            MACRO_ADDMAGAZINE(ACE_HUNTIR_M203,3);

            MACRO_ADDMAGAZINE(rhs_mag_m67,12);
            MACRO_ADDMAGAZINE(ACE_M84,4);
            MACRO_ADDMAGAZINE(MS_Strobe_Mag_2,4);
            MACRO_ADDMAGAZINE(MS_Strobe_Mag_1,4);
            MACRO_ADDMAGAZINE(B_IR_Grenade,4);

            MACRO_ADDMAGAZINE(SmokeShell,4);
            MACRO_ADDMAGAZINE(SmokeShellRed,4);

            MACRO_ADDMAGAZINE(ACE_Chemlight_IR,4);
            MACRO_ADDMAGAZINE(ACE_Chemlight_HiRed,4);

        };
    };

    class GVAR(outlaw12): Land_PlasticCase_01_large_olive_CBRN_F {
        displayName="[61ST] Outlaw 1-2 Resupply";
        hiddenSelectionsTextures[]= {
            "a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
            QPATHTOF(data\plasticcase_01_logo_01_12.paa)
        };
        maximumLoad = 6000;
        class TransportWeapons {
            MACRO_ADDWEAPON(rhs_weap_fgm148,1);
            MACRO_ADDWEAPON(rhs_weap_fim92,1);         
            MACRO_ADDWEAPON(launch_MRAWS_olive_F,1);
        };
        class TransportBackpacks {};
        class TransportItems {
            MACRO_ADDITEM(ACRE_PRC152,1);
            MACRO_ADDITEM(ACRE_PRC148,4);
            MACRO_ADDITEM(ACRE_PRC117F,1);

            MACRO_ADDITEM(ACE_IR_Strobe_Item,8);

            MACRO_ADDITEM(lxim_medbags_MedicKit,1);
            MACRO_ADDITEM(lxim_medbags_cls,2);
            MACRO_ADDITEM(lxim_medbags_FirstAid,8);

            MACRO_ADDITEM(Rev_darter,1);
            MACRO_ADDITEM(lxim_vs17_vs17,1);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(lxim_sig_25Rnd_Fury,40);
            MACRO_ADDMAGAZINE(lxim_sig_25Rnd_Fury_RT,40);
            MACRO_ADDMAGAZINE(lxim_sig_25Rnd_Fury_blk,40);
            MACRO_ADDMAGAZINE(lxim_sig_25Rnd_Fury_RT_blk,40);

            MACRO_ADDMAGAZINE(lxim_sig_150Rnd_Fury,24);
            MACRO_ADDMAGAZINE(lxim_sig_150Rnd_Fury_blk,24);
            MACRO_ADDMAGAZINE(lxim_sig_150Rnd_Fury_RT,24);
            MACRO_ADDMAGAZINE(lxim_sig_150Rnd_Fury_RT_blk,24);

            MACRO_ADDMAGAZINE(rhs_mag_maaws_HEAT,2);
            MACRO_ADDMAGAZINE(rhs_mag_maaws_HE,2);
            MACRO_ADDMAGAZINE(rhs_mag_maaws_HEDP,2);
            MACRO_ADDMAGAZINE(rhs_fgm148_magazine_AT,4);
            MACRO_ADDMAGAZINE(rhs_fim92_mag,2);

            MACRO_ADDMAGAZINE(rhs_mag_M441_HE,12);
            MACRO_ADDMAGAZINE(ACE_40mm_Pike,12);
            MACRO_ADDMAGAZINE(rhs_mag_M433_HEDP,12);
            MACRO_ADDMAGAZINE(rhs_mag_M397_HET,12);
            MACRO_ADDMAGAZINE(rhs_mag_m576,12);
            MACRO_ADDMAGAZINE(rhs_mag_m4009,12);
            MACRO_ADDMAGAZINE(rhs_mag_M663_green_cluster,3);
            MACRO_ADDMAGAZINE(rhs_mag_M585_white_cluster,3);
            MACRO_ADDMAGAZINE(rhs_mag_M664_red_cluster,3);
            MACRO_ADDMAGAZINE(rhs_mag_m714_White,3);
            MACRO_ADDMAGAZINE(rhs_mag_m715_Green,3);
            MACRO_ADDMAGAZINE(rhs_mag_m713_Red,3);
            MACRO_ADDMAGAZINE(rhs_mag_m661_green,3);
            MACRO_ADDMAGAZINE(rhs_mag_m716_yellow,3);
            MACRO_ADDMAGAZINE(ACE_HUNTIR_M203,3);

            MACRO_ADDMAGAZINE(rhs_mag_m67,12);
            MACRO_ADDMAGAZINE(ACE_M84,4);
            MACRO_ADDMAGAZINE(MS_Strobe_Mag_2,4);
            MACRO_ADDMAGAZINE(MS_Strobe_Mag_1,4);
            MACRO_ADDMAGAZINE(B_IR_Grenade,4);

            MACRO_ADDMAGAZINE(SmokeShell,4);
            MACRO_ADDMAGAZINE(SmokeShellBlue,4);

            MACRO_ADDMAGAZINE(ACE_Chemlight_IR,4);
            MACRO_ADDMAGAZINE(ACE_Chemlight_HiBlue,4);

        };
    };

    class GVAR(outlawmed): Land_PlasticCase_01_large_idap_F {
        displayName="[61ST] Outlaw Medical Resupply";
        maximumLoad = 6000;
        class TransportWeapons {};
        class TransportBackpacks {};
        class TransportItems {
            MACRO_ADDITEM(ACE_surgicalKit,2);
            MACRO_ADDITEM(ACE_bodyBag,20);
            MACRO_ADDITEM(ACM_PressureBandage,40);
            MACRO_ADDITEM(ACM_EmergencyTraumaDressing,20);
            MACRO_ADDITEM(lxim_medbags_MedicKit,10);
            MACRO_ADDITEM(lxim_medbags_cls,16);
            MACRO_ADDITEM(lxim_medbags_FirstAid,20);
            MACRO_ADDITEM(lxim_medbags_DrugKit,8);
            MACRO_ADDITEM(lxim_medbags_Fluid,20);
        };
        class TransportMagazines {};
    };
};
