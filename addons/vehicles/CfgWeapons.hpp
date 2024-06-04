class CfgWeapons {
    class CannonCore;
    class autocannon_Base_F: CannonCore {
        class player;
    };
    class autocannon_40mm_CTWS: autocannon_Base_F {
        class HE: autocannon_Base_F {};
        class AP: autocannon_Base_F {};
    };
    class lxim_autocannon_40mm_CTWS: autocannon_40mm_CTWS {
        displayName = "Bushmaster IV";
        class HE: HE {
            displayName = "Bushmaster IV HE";
            magazines[] = {"lxim_60Rnd_40mm_MP_shells_Tracer_Red","lxim_60Rnd_40mm_HEI_shells_Tracer_Red"};
        };
        class AP: AP {
            displayName = "Bushmaster IV AP";
            magazines[] = {"lxim_60Rnd_40mm_APFSDS_shells_Tracer_Red"};
        };
    };

    class autocannon_35mm: autocannon_Base_F {
    };

    class lxim_autocannon_40mm_GDF: autocannon_40mm_CTWS {
        displayName = "Bushmaster IV-A";
        aiRateOfFire = .5;
        reloadTime = 1;
        class HE: HE {
            displayName = "Bushmaster IV AA";
            magazines[] = {"lxim_280Rnd_40mm_AA_shells","lxim_280Rnd_40mm_AA_shells_Tracer_Red"};
            maxRange = 1500;
            aiRateOfFire = .5;
            reloadTime = 0.0545455;
        };

    };
    class GMG_40mm;
    class lxim_autocannon_40mm_ENG: GMG_40mm {
        displayName = "Bushmaster IV-G";
        magazines[] = {"lxim_200Rnd_40mm_G_belt"};

    };
    class missiles_titan;
    class missiles_titan_aa_2Rnd: missiles_titan {
        magazines[]= {
            "2Rnd_Titan_long_missiles_AA"
        };
    };
    class missiles_titan_eng_2Rnd: missiles_titan {
        magazines[]= {
            "2Rnd_Titan_long_missiles_ENG"
        };
    };
};