class CfgWeapons {
    class UniformItem;
    class Uniform_Base;
    
    class U_B_CTRG_Soldier_F: Uniform_Base {
        class ItemInfo;
    };
    class U_B_CombatUniform_mcam: Uniform_Base {
        class ItemInfo;
    };
    class FPGP2_Uni_Crye_mcb_1_U: U_B_CombatUniform_mcam {
        class ItemInfo;
    };
    
    //mc
    class GVAR(Uni_Crye_1_mc_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mc);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mc_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc_v.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mc_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mc_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform EOD (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc_eod.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mc_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mc_eod_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform EOD VET (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc_eod_v.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mc_eod_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mc_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform MED (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc_med.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mc_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mc_med_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform MED VET (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc_med_v.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mc_med_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mc_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform JFIRE (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc_jfire.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mc_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mc_jfire_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform JFIRE VET (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc_jfire_v.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mc_jfire_v);
            containerClass="Supply100";
            mass=20;
        };
    };

    //khk
    class GVAR(Uni_Crye_1_khk_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_khk);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_khk_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khkv.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_khk_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_khk_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform EOD (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk_eod.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_khk_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_khk_eod_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform EOD VET (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk_eod_v.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_khk_eod_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_khk_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform MED (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk_med.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_khk_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_khk_med_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform MED VET (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk_med_v.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_khk_med_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_khk_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform JFIRE (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk_jfire.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_khk_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_khk_jfire_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform JFIRE VET (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk_jfire_v.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_khk_jfire_v);
            containerClass="Supply100";
            mass=20;
        };
    };

    //m81
    class GVAR(Uni_Crye_1_m81_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_m81);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_m81_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81v.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_m81_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_m81_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform EOD (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81_eod.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_m81_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_m81_eod_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform EOD VET (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81_eod_v.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_m81_eod_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_m81_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform MED (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81_med.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_m81_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_m81_med_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform MED VET (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81_med_v.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_m81_med_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_m81_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform JFIRE (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81_jfire.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_m81_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_m81_jfire_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform JFIRE VET (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81_jfire_v.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_m81_jfire_v);
            containerClass="Supply100";
            mass=20;
        };
    };

    //mca
    class GVAR(Uni_Crye_1_mca_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mca);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mca_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform Vet (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca_v.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mca_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mca_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform EOD (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca_eod.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mca_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mca_eod_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform EOD VET (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca_eod_v.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mca_eod_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mca_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform MED (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca_med.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mca_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mca_med_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform MED VET (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca_med_v.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mca_med_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mca_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform JFIRE (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca_jfire.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mca_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mca_jfire_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform JFIRE VET (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca_jfire_v.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mca_jfire_v);
            containerClass="Supply100";
            mass=20;
        };
    };

    //mct
    class GVAR(Uni_Crye_1_mct_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mct);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mct_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform Vet (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct_v.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mct_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mct_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform EOD (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct_eod.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mct_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mct_eod_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform EOD VET (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct_eod_v.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mct_eod_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mct_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform MED (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct_med.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mct_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mct_med_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform MED VET (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct_med_v.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mct_med_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mct_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform JFIRE (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct_jfire.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mct_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_mct_jfire_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform JFIRE VET (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct_jfire_v.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_mct_jfire_v);
            containerClass="Supply100";
            mass=20;
        };
    };

    //rgr
    class GVAR(Uni_Crye_1_rgr_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_rgr);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_rgr_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform Vet (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr_v.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_rgr_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_rgr_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform EOD (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr_eod.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_rgr_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_rgr_eod_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform EOD VET (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr_eod_v.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_rgr_eod_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_rgr_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform MED (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr_med.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_rgr_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_rgr_med_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform MED VET (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr_med_v.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_rgr_med_v);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_rgr_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform JFIRE (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr_jfire.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_rgr_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_rgr_jfire_v_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] US Crye Combat Uniform JFIRE VET (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr_jfire_v.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_rgr_jfire_v);
            containerClass="Supply100";
            mass=20;
        };
    };

    //mc
    class GVAR(Uni_Crye_1_ca_mc_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mc.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_mc);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_mc_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mc.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_mc);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_mc_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform EOD (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mc_eod.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_mc_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_mc_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform EOD VET (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mc_eod.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_mc_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_mc_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform MED (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mc_med.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_mc_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_mc_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform MED VET (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mc_med.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_mc_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_mc_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mc_jfire.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_mc_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_mc_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE VET (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mc_jfire.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_mc_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };

    //khk
    class GVAR(Uni_Crye_1_ca_khk_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_khk.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_khk);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_khk_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_khk.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_khk);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_khk_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform EOD (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_khk_eod.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_khk_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_khk_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform EOD VET (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_khk_eod.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_khk_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_khk_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform MED (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_khk_med.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_khk_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_khk_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform MED VET (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_khk_med.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_khk_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_khk_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_khk_jfire.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_khk_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_khk_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE VET (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_khk_jfire.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_khk_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };

    //m81
    class GVAR(Uni_Crye_1_ca_m81_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_m81.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_m81);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_m81_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_m81.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_m81);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_m81_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform EOD (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_m81_eod.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_m81_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_m81_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform EOD VET (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_m81_eod.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_m81_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_m81_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform MED (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_m81_med.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_m81_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_m81_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform MED VET (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_m81_med.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_m81_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_m81_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_m81_jfire.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_m81_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_m81_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE VET (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_m81_jfire.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_m81_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };

    //mca
    class GVAR(Uni_Crye_1_ca_mca_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mca.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_mca);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_mca_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform Vet (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mca.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_mca);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_mca_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform EOD (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mca_eod.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_mca_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_mca_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform EOD VET (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mca_eod.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_mca_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_mca_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform MED (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mca_med.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_mca_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_mca_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform MED VET (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mca_med.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_mca_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_mca_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mca_jfire.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_mca_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_mca_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE VET (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mca_jfire.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_mca_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };

    //mct
    class GVAR(Uni_Crye_1_ca_mct_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mct.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_mct);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_mct_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform Vet (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mct.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_mct);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_mct_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform EOD (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mct_eod.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_mct_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_mct_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform EOD VET (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mct_eod.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_mct_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_mct_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform MED (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mct_med.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_mct_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_mct_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform MED VET (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mct_med.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_mct_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_mct_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mct_jfire.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_mct_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_mct_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE VET (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mct_jfire.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_mct_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };

    //rgr
    class GVAR(Uni_Crye_1_ca_rgr_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_rgr.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_rgr);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_rgr_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform Vet (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_rgr.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_rgr);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_rgr_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform EOD (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_rgr_eod.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_rgr_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_rgr_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform EOD VET (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_rgr_eod.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_rgr_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_rgr_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform MED (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_rgr_med.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_rgr_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_rgr_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform MED VET (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_rgr_med.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_rgr_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_rgr_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_rgr_jfire.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_rgr_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_ca_v_rgr_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE VET (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_rgr_jfire.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_ca_v_rgr_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };

    //mc
    class GVAR(Uni_Crye_1_uk_mc_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mc.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_mc);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_mc_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mc.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_mc);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_mc_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform EOD (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mc_eod.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_mc_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_mc_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform EOD VET (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mc_eod.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_mc_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_mc_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform MED (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mc_med.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_mc_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_mc_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform MED VET (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mc_med.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_mc_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_mc_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform JFIRE (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mc_jfire.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_mc_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_mc_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform JFIRE VET (Multicam)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mc_jfire.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_mc_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };

    //khk
    class GVAR(Uni_Crye_1_uk_khk_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_khk.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_khk);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_khk_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_khk.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_khk);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_khk_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform EOD (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_khk_eod.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_khk_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_khk_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform EOD VET (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_khk_eod.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_khk_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_khk_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform MED (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_khk_med.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_khk_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_khk_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform MED VET (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_khk_med.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_khk_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_khk_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform JFIRE (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_khk_jfire.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_khk_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_khk_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform JFIRE VET (Khaki)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_khk_jfire.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_khk_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };

    //m81
    class GVAR(Uni_Crye_1_uk_m81_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_m81.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_m81);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_m81_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_m81.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_m81);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_m81_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform EOD (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_m81_eod.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_m81_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_m81_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform EOD VET (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_m81_eod.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_m81_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_m81_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform MED (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_m81_med.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_m81_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_m81_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform MED VET (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_m81_med.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_m81_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_m81_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform JFIRE (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_m81_jfire.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_m81_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_m81_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform JFIRE VET (M81)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_m81_jfire.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_m81_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };

    //mca
    class GVAR(Uni_Crye_1_uk_mca_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mca.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_mca);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_mca_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform Vet (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mca.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_mca);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_mca_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform EOD (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mca_eod.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_mca_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_mca_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform EOD VET (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mca_eod.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_mca_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_mca_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform MED (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mca_med.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_mca_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_mca_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform MED VET (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mca_med.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_mca_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_mca_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform JFIRE (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mca_jfire.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_mca_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_mca_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform JFIRE VET (Multicam Arid)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mca_jfire.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_mca_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };

    //mct
    class GVAR(Uni_Crye_1_uk_mct_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mct.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_mct);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_mct_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform Vet (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mct.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_mct);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_mct_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform EOD (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mct_eod.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_mct_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_mct_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform EOD VET (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mct_eod.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_mct_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_mct_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform MED (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mct_med.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_mct_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_mct_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform MED VET (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mct_med.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_mct_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_mct_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform JFIRE (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mct_jfire.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_mct_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_mct_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform JFIRE VET (Multicam Tropical)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mct_jfire.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_mct_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };

    //rgr
    class GVAR(Uni_Crye_1_uk_rgr_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_rgr.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_rgr);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_rgr_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform Vet (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_rgr.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_rgr);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_rgr_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform EOD (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_rgr_eod.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_rgr_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_rgr_eod_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform EOD VET (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_rgr_eod.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_rgr_eod);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_rgr_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform MED (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_rgr_med.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_rgr_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_rgr_med_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform MED VET (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_rgr_med.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_rgr_med);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_rgr_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform JFIRE (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_rgr_jfire.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_rgr_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
    class GVAR(Uni_Crye_1_uk_v_rgr_jfire_U): U_B_CombatUniform_mcam {
        displayName="[Ghost] UK Crye Combat Uniform JFIRE VET (Ranger)";
        picture=QPATHTOF(data\icon_u_b_ctrg_uniform_multicam_ca.paa);
        hiddenSelections[]={"Camo1", "Camo2"};
        MACRO_ITEM_COMMON
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_rgr_jfire.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
        class ItemInfo: ItemInfo {
            uniformClass=QGVAR(Uni_Crye_1_uk_v_rgr_jfire);
            containerClass="Supply100";
            mass=20;
        };
    };
};
