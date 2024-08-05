class CfgMagazines {
    class CA_Magazine;
    class 16Rnd_9x21_Mag;
    class 20Rnd_762x51_Mag;
    class sps_16Rnd_75x27_FK_95gr_jhp : 16Rnd_9x21_Mag {
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
    };

    class GVAR(30Rnd_762x51mm_M80A1_EPR) : 20Rnd_762x51_Mag {
        scope=2;
        displayName="7.62x51mm 230Rnd Mag (M80A1 EPR)";
        displaynameshort="M80A1";
        ammo="B_SPS_M80A1_EPR";
        count=30;
        initSpeed=869;
        tracersEvery=0;
        lastRoundsTracer=3;
        descriptionShort="Caliber: 7.62x51mm M80A1 EPR. <br> Rounds: 30";
        model="\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_762_30rnd_2.p3d";
        modelSpecial="\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_762_30rnd_2.p3d";
        modelSpecialIsProxy=1;
        picture="\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_762x51_30rnd_2_ca.paa";
    };


    class GVAR(30Rnd_762x51mm_M80A1_EPR_IR) : GVAR(30Rnd_762x51mm_M80A1_EPR) {
        scope=2;
        displayName="7.62x51mm 30Rnd Mag (M80A1 EPR IR)";
        displaynameshort="M80A1 IR";
        ammo="B_SPS_M80A1_EPR_IR";
        tracersEvery=1;
    };


    class GVAR(30Rnd_762x51mm_M80A1_EPR_Tracer) : GVAR(30Rnd_762x51mm_M80A1_EPR) {
        scope=2;
        displayName="7.62x51mm 30Rnd Mag (M80A1 EPR Tracer)";
        displaynameshort="M80A1 T";
        ammo="B_SPS_M80A1_EPR_Red";
        tracersEvery=1;
    };

    class GVAR(50Rnd_762x51mm_M80A1_EPR) : 20Rnd_762x51_Mag {
        scope=2;
        displayName="7.62x51mm 250Rnd Mag (M80A1 EPR)";
        displaynameshort="M80A1";
        ammo="B_SPS_M80A1_EPR";
        count=50;
        initSpeed=869;
        tracersEvery=0;
        lastRoundsTracer=3;
        descriptionShort="Caliber: 7.62x51mm M80A1 EPR. <br> Rounds: 50";
        model="\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_762_50rnd.p3d";
        modelSpecial="\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_762_50rnd.p3d";
        modelSpecialIsProxy=1;
        picture="\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_762x51_50rnd_ca.paa";
    };


    class GVAR(50Rnd_762x51mm_M80A1_EPR_IR) : GVAR(50Rnd_762x51mm_M80A1_EPR) {
        scope=2;
        displayName="7.62x51mm 50Rnd Mag (M80A1 EPR IR)";
        displaynameshort="M80A1 IR";
        ammo="B_SPS_M80A1_EPR_IR";
        tracersEvery=1;
    };


    class GVAR(50Rnd_762x51mm_M80A1_EPR_Tracer) : GVAR(50Rnd_762x51mm_M80A1_EPR) {
        scope=2;
        displayName="7.62x51mm 50Rnd Mag (M80A1 EPR Tracer)";
        displaynameshort="M80A1 T";
        ammo="B_SPS_M80A1_EPR_Red";
        tracersEvery=1;
    };

};