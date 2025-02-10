class CfgWeapons {
    class ICM_XM7_F_Khaki;
    class ICM_XM7_F_Arid;
    class ICM_XM7_F;

    class KAR_XM250;
    class KAR_XM250_BLK;

    class GVAR(XM7): ICM_XM7_F_Arid {
        author=QAUTHOR;
        dlc= QUOTE(PREFIX);
        scope=2;
        scopeArsenal=2;
        ACE_barrelLength=330;
        ACE_barrelTwist=177.8;
        ACE_twistDirection=1;
        ACE_clearJamAction="ICM_XM7_Reload_F";
        ACE_checkTemperatureAction="Gear";
        ace_overheating_dispersion= 0.75;
        ace_overheating_mrbs= 3000;
        ace_overheating_slowdownFactor= 1;
                inertia=0.5;
        initSpeed=915;
        htMin=8;
        htMax=920;
        displayName="[61st] Sig MCX Spear";
        baseWeapon= QGVAR(XM7);
        magazines[]={
            QGVAR(25Rnd_Fury),
            QGVAR(25Rnd_Fury_blk),
            QGVAR(25Rnd_Fury_khk),
            QGVAR(25Rnd_Fury_RT),
            QGVAR(25Rnd_Fury_RT_blk),
            QGVAR(25Rnd_Fury_RT_khk),
            QGVAR(25Rnd_Fury_IR),
            QGVAR(25Rnd_Fury_IR_blk),
            QGVAR(25Rnd_Fury_IR_khk),
        };
    };
    class GVAR(XM7_BLK): ICM_XM7_F {
        author=QAUTHOR;
        dlc= QUOTE(PREFIX);
        scope=2;
        scopeArsenal=2;
        ACE_barrelLength=330;
        ACE_barrelTwist=177.8;
        ACE_twistDirection=1;
        ACE_clearJamAction="ICM_XM7_Reload_F";
        ACE_checkTemperatureAction="Gear";
        ace_overheating_dispersion= 0.75;
        ace_overheating_mrbs= 3000;
        ace_overheating_slowdownFactor= 1;
                inertia=0.5;
        initSpeed=915;
        htMin=8;
        htMax=920;
        displayName="[61st] Sig MCX Spear (Black)";
        baseWeapon= QGVAR(XM7_BLK);
        magazines[]={
            QGVAR(25Rnd_Fury),
            QGVAR(25Rnd_Fury_blk),
            QGVAR(25Rnd_Fury_khk),
            QGVAR(25Rnd_Fury_RT),
            QGVAR(25Rnd_Fury_RT_blk),
            QGVAR(25Rnd_Fury_RT_khk),
            QGVAR(25Rnd_Fury_IR),
            QGVAR(25Rnd_Fury_IR_blk),
            QGVAR(25Rnd_Fury_IR_khk),
        };
    };

    class GVAR(XM7_KHK): ICM_XM7_F_Khaki {
        author=QAUTHOR;
        dlc= QUOTE(PREFIX);
        scope=2;
        scopeArsenal=2;
        ACE_barrelLength=330;
        ACE_barrelTwist=177.8;
        ACE_twistDirection=1;
        ACE_clearJamAction="ICM_XM7_Reload_F";
        ACE_checkTemperatureAction="Gear";
        ace_overheating_dispersion= 0.75;
        ace_overheating_mrbs= 3000;
        ace_overheating_slowdownFactor= 1;
        inertia=0.5;
        initSpeed=915;
        htMin=8;
        htMax=920;
        displayName="[61st] Sig MCX Spear (Khaki)";
        baseWeapon= QGVAR(XM7_KHK);
        magazines[]={
            QGVAR(25Rnd_Fury),
            QGVAR(25Rnd_Fury_blk),
            QGVAR(25Rnd_Fury_khk),
            QGVAR(25Rnd_Fury_RT),
            QGVAR(25Rnd_Fury_RT_blk),
            QGVAR(25Rnd_Fury_RT_khk),
            QGVAR(25Rnd_Fury_IR),
            QGVAR(25Rnd_Fury_IR_blk),
            QGVAR(25Rnd_Fury_IR_khk),
        };
    };

    class GVAR(M250): KAR_XM250 {
        author=QAUTHOR;
        dlc= QUOTE(PREFIX);
        scope=2;
        scopeArsenal=2;
        displayName="[61st] M250";
        recoil="recoil_mk200";
        ACE_checkTemperatureAction="Gear";
        ACE_clearJamAction="GestureReloadMMG02";
        ace_overheating_allowSwapBarrel= 1;
        ace_overheating_closedBolt= 0;
        ace_overheating_dispersion= 0.75;
        ace_overheating_mrbs= 3000;
        ace_overheating_slowdownFactor= 1;
        modes[]={"manual", "close", "short", "medium", "far_optic1", "far_optic2"};
        magazines[]={
            QGVAR(150Rnd_Fury),
            QGVAR(150Rnd_Fury_blk),
            QGVAR(150Rnd_Fury_RT),
            QGVAR(150Rnd_Fury_RT_blk),
            QGVAR(150Rnd_Fury_IR),
            QGVAR(150Rnd_Fury_RT_IR)
        };
        baseWeapon= QGVAR(M250);
    };

    class GVAR(M250_BLK): KAR_XM250_BLK {
        author=QAUTHOR;
        dlc= QUOTE(PREFIX);
        scope=2;
        scopeArsenal=2;
        displayName="[61st] M250 (Black)";
        recoil="recoil_mk200";
        ACE_checkTemperatureAction="Gear";
        ACE_clearJamAction="GestureReloadMMG02";
        ace_overheating_allowSwapBarrel= 1;
        ace_overheating_closedBolt= 0;
        ace_overheating_dispersion= 0.75;
        ace_overheating_mrbs= 3000;
        ace_overheating_slowdownFactor= 1;
        modes[]={"manual", "close", "short", "medium", "far_optic1", "far_optic2"};
        magazines[]={
            QGVAR(150Rnd_Fury),
            QGVAR(150Rnd_Fury_blk),
            QGVAR(150Rnd_Fury_RT),
            QGVAR(150Rnd_Fury_RT_blk),
            QGVAR(150Rnd_Fury_IR),
            QGVAR(150Rnd_Fury_RT_IR)
        };
        baseWeapon= QGVAR(M250_BLK);
    };
};