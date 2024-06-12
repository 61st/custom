class CfgMagazines {
    class 60Rnd_40mm_GPR_Tracer_Red_shells;
    class 40Rnd_40mm_APFSDS_Tracer_Red_shells;
    class lxim_60Rnd_40mm_MP_shells_Tracer_Red: 60Rnd_40mm_GPR_Tracer_Red_shells  {
        displayName = "60Rnd MP Tracer (Red)";
        displayNameShort = "MP-T";
        displayNameMFDFormat = "MP-T";
        count=60;
    };
    class 40Rnd_40mm_APFSDS_Tracer_Red_shells ;
    class lxim_60Rnd_40mm_APFSDS_shells_Tracer_Red: 40Rnd_40mm_APFSDS_Tracer_Red_shells  {
        displayName = "60Rnd APFSDS Tracer (Red)";
        displayNameShort = "APFSDS-T";
        displayNameMFDFormat = "APFSDS-T";
        count=60;
    };
    class lxim_60Rnd_40mm_HEI_shells_Tracer_Red: lxim_60Rnd_40mm_MP_shells_Tracer_Red {
        ammo = "lxim_B_40mm_HEI_Tracer_Red";
        displayNameMFDFormat = "HEI-T";
        displayName = "60Rnd HEI Tracer (Red)";
        displayNameShort = "HEI-T";
        count=60;
        initSpeed=1100;
    };
    class 4Rnd_Titan_long_missiles;
    class 2Rnd_Titan_long_missiles_AA: 4Rnd_Titan_long_missiles {
        author="$STR_A3_Bohemia_Interactive";
        count=2;
    };

    class 2Rnd_Titan_long_missiles_ENG: 4Rnd_Titan_long_missiles {
        ammo = "lxim_eng_round";
        author="$STR_A3_Bohemia_Interactive";
        displayNameShort="AS";
        count=2;
    };
    // TODO: ACE FCS Air Burst Mags
    class lxim_60Rnd_40mm_HEABT_shells_Tracer_Red: lxim_60Rnd_40mm_MP_shells_Tracer_Red {
        ammo="lxim_B_40mm_HEAB_Tracer_Red";
        displayNameMFDFormat="HEAB-T";
        displayName="60Rnd HEAB Tracer (Red)";
        displayNameShort="HEAB-T";
    };

    class 680Rnd_35mm_AA_shells;
    class lxim_280Rnd_40mm_AA_shells: 680Rnd_35mm_AA_shells {
        ammo="lxim_40mm_AA_shells";
        displayNameMFDFormat="40mmFlak";
        displayName="280Rnd 40mm Flak";
        displayNameShort="40mm Flak";
        count=280;
        initSpeed=1600;
    };


    class 680Rnd_35mm_AA_shells_Tracer_Red;
    class lxim_280Rnd_40mm_AA_shells_Tracer_Red: 680Rnd_35mm_AA_shells_Tracer_Red {
        ammo="lxim_40mm_AA_shells_Tracer_Red";
        displayNameMFDFormat="40mmFlakT";
        displayName="280Rnd 40mm Flak Tracer (Red)";
        displayNameShort="40mm Flak";
        count=280;
        initSpeed=1600;
    };

    class 200Rnd_40mm_G_belt;
    class lxim_200Rnd_40mm_G_belt: 200Rnd_40mm_G_belt {
        ammo="lxim_40mm_G_belt";
        displayNameMFDFormat="40mm HE";
        displayName="480Rnd 40mm HE Tracer (Red)";
        displayNameShort="40mm HE";
        count=480;
    };
};