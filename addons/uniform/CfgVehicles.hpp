class CBA_Extended_EventHandlers;
class CfgVehicles {
    class B_Soldier_base_F;
    class B_Soldier_F: B_Soldier_base_F;
    class FPGP2_Uni_Crye_mcb_1: B_Soldier_base_F;

    class GVAR(UNI_Base): B_Soldier_base_F {
        scope = 1;
        displayName = "Crye Combat Uniform";
        model = "FPGP_2_uni\Crye_uni.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"FPGP_2_uni\data\cryetop_mcb_co.paa","FPGP_2_uni\data\cryepants_mcb_co.paa"};
    };
    //mc
    class GVAR(Uni_Crye_1_mc): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc.paa), "FPGP_2_uni\data\cryepants_co.paa"};
        
    };
    class GVAR(Uni_Crye_1_mc_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform Vet (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc_v.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_mc_eod): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform EOD (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc_eod.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_mc_eod_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform EOD Vet (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc_eod_v.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_mc_med): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform MED (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc_med.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_mc_med_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform MED Vet (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc_med_v.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_mc_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform JFIRE (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc_jfire.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_mc_jfire_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform JFIRE Vet (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mc_jfire_v.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    //khk
    class GVAR(Uni_Crye_1_khk): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_khk_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform Vet (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk_v.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_khk_eod): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform EOD (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk_eod.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_khk_eod_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform EOD Vet (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk_eod_v.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_khk_med): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform MED (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk_med.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_khk_med_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform MED Vet (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk_med_v.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_khk_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform JFIRE (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk_jfire.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_khk_jfire_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform JFIRE Vet (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_khk_jfire_v.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    //m81
    class GVAR(Uni_Crye_1_m81): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_m81_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform Vet (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81_v.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_m81_eod): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform EOD (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81_eod.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_m81_eod_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform EOD Vet (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81_eod_v.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_m81_med): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform MED (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81_med.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_m81_med_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform MED Vet (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81_med_v.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_m81_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform JFIRE (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81_jfire.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_m81_jfire_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform JFIRE Vet (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_m81_jfire_v.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    //mca
    class GVAR(Uni_Crye_1_mca): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_mca_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform Vet (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca_v.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_mca_eod): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform EOD (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca_eod.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_mca_eod_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform EOD Vet (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca_eod_v.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_mca_med): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform MED (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca_med.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_mca_med_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform MED Vet (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca_med_v.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_mca_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform JFIRE (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca_jfire.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_mca_jfire_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform JFIRE Vet (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mca_jfire_v.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    //mct
    class GVAR(Uni_Crye_1_mct): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_mct_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform Vet (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct_v.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_mct_eod): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform EOD (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct_eod.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_mct_eod_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform EOD Vet (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct_eod_v.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_mct_med): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform MED (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct_med.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_mct_med_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform MED Vet (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct_med_v.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_mct_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform JFIRE (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct_jfire.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_mct_jfire_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform JFIRE Vet (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_mct_jfire_v.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    //rgr
    class GVAR(Uni_Crye_1_rgr): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_rgr_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform Vet (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr_v.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_rgr_eod): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform EOD (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr_eod.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_rgr_eod_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform EOD Vet (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr_eod_v.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_rgr_med): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform MED (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr_med.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_rgr_med_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform MED Vet (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr_med_v.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_rgr_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform JFIRE (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr_jfire.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_rgr_jfire_v): GVAR(UNI_Base) {
        displayName="[Ghost] US Crye Combat Uniform JFIRE Vet (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_rgr_jfire_v.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };

    //mc
    class GVAR(Uni_Crye_1_ca_mc): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mc.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_mc): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform Vet (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mc.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_mc_eod): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform EOD (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mc_eod.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_mc_eod): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform EOD Vet (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mc_eod.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_mc_med): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform MED (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mc_med.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_mc_med): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform MED Vet (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mc_med.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_mc_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mc_jfire.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_mc_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE Vet (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mc_jfire.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    //khk
    class GVAR(Uni_Crye_1_ca_khk): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_khk.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_khk): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform Vet (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_khk.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_khk_eod): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform EOD (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_khk_eod.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_khk_eod): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform EOD Vet (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_khk_eod.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_khk_med): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform MED (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_khk_med.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_khk_med): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform MED Vet (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_khk_med.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_khk_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_khk_jfire.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_khk_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE Vet (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_khk_jfire.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    //m81
    class GVAR(Uni_Crye_1_ca_m81): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_m81.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_m81): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform Vet (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_m81.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_m81_eod): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform EOD (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_m81_eod.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_m81_eod): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform EOD Vet (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_m81_eod.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_m81_med): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform MED (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_m81_med.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_m81_med): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform MED Vet (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_m81_med.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_m81_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_m81_jfire.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_m81_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE Vet (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_m81_jfire.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    //mca
    class GVAR(Uni_Crye_1_ca_mca): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mca.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_mca): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform Vet (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mca.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_mca_eod): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform EOD (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mca_eod.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_mca_eod): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform EOD Vet (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mca_eod.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_mca_med): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform MED (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mca_med.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_mca_med): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform MED Vet (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mca_med.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_mca_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mca_jfire.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_mca_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE Vet (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mca_jfire.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    //mct
    class GVAR(Uni_Crye_1_ca_mct): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mct.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_mct): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform Vet (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mct.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_mct_eod): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform EOD (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mct_eod.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_mct_eod): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform EOD Vet (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mct_eod.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_mct_med): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform MED (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mct_med.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_mct_med): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform MED Vet (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mct_med.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_mct_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_mct_jfire.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_mct_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE Vet (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_mct_jfire.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    //rgr
    class GVAR(Uni_Crye_1_ca_rgr): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_rgr.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_rgr): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform Vet (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_rgr.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_rgr_eod): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform EOD (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_rgr_eod.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_rgr_eod): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform EOD Vet (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_rgr_eod.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_rgr_med): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform MED (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_rgr_med.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_rgr_med): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform MED Vet (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_rgr_med.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_rgr_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_rgr_jfire.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_ca_v_rgr_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] CA Crye Combat Uniform JFIRE Vet (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_ca_v_rgr_jfire.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };

    //mc
    class GVAR(Uni_Crye_1_uk_mc): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mc.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_mc): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform Vet (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mc.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_mc_eod): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform EOD (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mc_eod.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_mc_eod): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform EOD Vet (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mc_eod.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_mc_med): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform MED (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mc_med.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_mc_med): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform MED Vet (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mc_med.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_mc_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform JFIRE (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mc_jfire.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_mc_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform JFIRE Vet (Multicam)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mc_jfire.paa), "FPGP_2_uni\data\cryepants_co.paa"};
    };
    //khk
    class GVAR(Uni_Crye_1_uk_khk): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_khk.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_khk): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform Vet (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_khk.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_khk_eod): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform EOD (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_khk_eod.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_khk_eod): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform EOD Vet (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_khk_eod.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_khk_med): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform MED (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_khk_med.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_khk_med): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform MED Vet (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_khk_med.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_khk_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform JFIRE (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_khk_jfire.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_khk_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform JFIRE Vet (Khaki)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_khk_jfire.paa), "FPGP_2_uni\data\cryepants_khk_co.paa"};
    };
    //m81
    class GVAR(Uni_Crye_1_uk_m81): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_m81.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_m81): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform Vet (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_m81.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_m81_eod): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform EOD (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_m81_eod.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_m81_eod): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform EOD Vet (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_m81_eod.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_m81_med): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform MED (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_m81_med.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_m81_med): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform MED Vet (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_m81_med.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_m81_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform JFIRE (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_m81_jfire.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_m81_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform JFIRE Vet (M81)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_m81_jfire.paa), "FPGP_2_uni\data\cryepants_m81_co.paa"};
    };
    //mca
    class GVAR(Uni_Crye_1_uk_mca): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mca.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_mca): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform Vet (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mca.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_mca_eod): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform EOD (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mca_eod.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_mca_eod): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform EOD Vet (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mca_eod.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_mca_med): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform MED (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mca_med.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_mca_med): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform MED Vet (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mca_med.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_mca_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform JFIRE (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mca_jfire.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_mca_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform JFIRE Vet (Multicam Arid)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mca_jfire.paa), "FPGP_2_uni\data\cryepants_mcar_co.paa"};
    };
    //mct
    class GVAR(Uni_Crye_1_uk_mct): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mct.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_mct): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform Vet (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mct.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_mct_eod): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform EOD (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mct_eod.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_mct_eod): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform EOD Vet (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mct_eod.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_mct_med): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform MED (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mct_med.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_mct_med): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform MED Vet (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mct_med.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_mct_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform JFIRE (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_mct_jfire.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_mct_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform JFIRE Vet (Multicam Tropical)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_mct_jfire.paa), "FPGP_2_uni\data\cryepants_mct_co.paa"};
    };
    //rgr
    class GVAR(Uni_Crye_1_uk_rgr): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_rgr.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_rgr): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform Vet (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_rgr.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_rgr_eod): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform EOD (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_rgr_eod.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_rgr_eod): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform EOD Vet (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_rgr_eod.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_rgr_med): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform MED (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_rgr_med.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_rgr_med): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform MED Vet (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_rgr_med.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_rgr_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform JFIRE (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_rgr_jfire.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };
    class GVAR(Uni_Crye_1_uk_v_rgr_jfire): GVAR(UNI_Base) {
        displayName="[Ghost] UK CryeCombat Uniform JFIRE Vet (Ranger)";
        hiddenSelections[]={"Camo1", "Camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\cryetop_ghost_uk_v_rgr_jfire.paa), "FPGP_2_uni\data\cryepants_rgr_co.paa"};
    };

    
};
