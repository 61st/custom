class CfgWeapons {
    class KAR_XM7;
    class KAR_XM7_BLK;
    class KAR_XM7_G;
    class KAR_XM7_BLK_G;
    class KAR_XM250;
    class KAR_XM250_BLK;

    class GVAR(XM7): KAR_XM7 {
        author=QAUTHOR;
        dlc = QUOTE(PREFIX);
        scope=2;
        ACE_clearJamAction="GestureReloadSPAR_01";
        ACE_checkTemperatureAction="Gear";
        ACE_overheating_mrbs=10000;
        ACE_Overheating_Dispersion[]={0, 0.0008, 0.0012, 0.0024};
        ACE_Overheating_SlowdownFactor[]={1, 1, 1, 0.9};
        ACE_Overheating_JamChance[]={0, 0.00015, 0.00075, 0.00375};
        displayName="[61st] Sig MCX Spear";
        hiddenSelections[]={"Camo2", "Camo3", "Camo4", "Camo5", "Camo6", "Camo7", "Camo8"};
        hiddenSelectionsTextures[]={QPATHTOF(data\UpperReceiver_lxim_co.paa), "\KAR_XM7\data\tex\stock_co.paa", "\KAR_XM7\data\tex\magazine_co.paa", QPATHTOF(data\LowerReceiver_lxim_co.paa), "\KAR_XM7\data\tex\ironsight_co.paa", "\KAR_XM7\data\tex\handguard_co.paa", "\KAR_XM7\data\tex\details_co.paa"};
        baseWeapon = QGVAR(XM7);
        magazines[]={QGVAR(25Rnd_Fury),QGVAR(25Rnd_Fury_blk),QGVAR(25Rnd_Fury_RT),QGVAR(25Rnd_Fury_RT_blk)};
    };
    class GVAR(XM7_G): KAR_XM7_G {
        author=QAUTHOR;
        dlc = QUOTE(PREFIX);
        scope=2;
        ACE_clearJamAction="GestureReloadSPAR_01";
        ACE_checkTemperatureAction="Gear";
        ACE_overheating_mrbs=10000;
        ACE_Overheating_Dispersion[]={0, 0.0008, 0.0012, 0.0024};
        ACE_Overheating_SlowdownFactor[]={1, 1, 1, 0.9};
        ACE_Overheating_JamChance[]={0, 0.00015, 0.00075, 0.00375};
        displayName="[61st] Sig MCX Spear (Grip)";
        hiddenSelections[]={"Camo2", "Camo3", "Camo4", "Camo5", "Camo6", "Camo7", "Camo8"};
        hiddenSelectionsTextures[]={QPATHTOF(data\UpperReceiver_lxim_co.paa), "\KAR_XM7\data\tex\stock_co.paa", "\KAR_XM7\data\tex\magazine_co.paa", QPATHTOF(data\LowerReceiver_lxim_co.paa), "\KAR_XM7\data\tex\ironsight_co.paa", "\KAR_XM7\data\tex\handguard_co.paa", "\KAR_XM7\data\tex\details_co.paa"};
        baseWeapon = QGVAR(XM7_G);
        magazines[]={QGVAR(25Rnd_Fury),QGVAR(25Rnd_Fury_blk),QGVAR(25Rnd_Fury_RT),QGVAR(25Rnd_Fury_RT_blk)};
    };

    class GVAR(XM7_BLK): KAR_XM7_BLK {
        author=QAUTHOR;
        dlc = QUOTE(PREFIX);
        scope=2;
        ACE_clearJamAction="GestureReloadSPAR_01";
        ACE_checkTemperatureAction="Gear";
        ACE_overheating_mrbs=10000;
        ACE_Overheating_Dispersion[]={0, 0.0008, 0.0012, 0.0024};
        ACE_Overheating_SlowdownFactor[]={1, 1, 1, 0.9};
        ACE_Overheating_JamChance[]={0, 0.00015, 0.00075, 0.00375};
        displayName="[61st] Sig MCX Spear (Black)";
        hiddenSelections[]={"Camo2", "Camo3", "Camo4", "Camo5", "Camo6", "Camo7", "Camo8"};
        hiddenSelectionsTextures[]={QPATHTOF(data\UpperReceiver_blk_lxim_co.paa), "\KAR_XM7\data\tex\stock_blk_co.paa", "\KAR_XM7\data\tex\magazine_blk_co.paa", QPATHTOF(data\LowerReceiver_blk_lxim_co.paa), "\KAR_XM7\data\tex\ironsight_co.paa", "\KAR_XM7\data\tex\handguard_blk_co.paa", "\KAR_XM7\data\tex\details_blk_co.paa"};
        baseWeapon = QGVAR(XM7_BLK);
        magazines[]={QGVAR(25Rnd_Fury),QGVAR(25Rnd_Fury_blk),QGVAR(25Rnd_Fury_RT),QGVAR(25Rnd_Fury_RT_blk)};
    };

    class GVAR(XM7_BLK_G): KAR_XM7_BLK_G {
        author=QAUTHOR;
        dlc = QUOTE(PREFIX);
        scope=2;
        ACE_clearJamAction="GestureReloadSPAR_01";
        ACE_checkTemperatureAction="Gear";
        ACE_overheating_mrbs=10000;
        ACE_Overheating_Dispersion[]={0, 0.0008, 0.0012, 0.0024};
        ACE_Overheating_SlowdownFactor[]={1, 1, 1, 0.9};
        ACE_Overheating_JamChance[]={0, 0.00015, 0.00075, 0.00375};
        displayName="[61st] Sig MCX Spear (Grip/Black)";
        hiddenSelections[]={"Camo2", "Camo3", "Camo4", "Camo5", "Camo6", "Camo7", "Camo8"};
        hiddenSelectionsTextures[]={QPATHTOF(data\UpperReceiver_blk_lxim_co.paa), "\KAR_XM7\data\tex\stock_blk_co.paa", "\KAR_XM7\data\tex\magazine_blk_co.paa", QPATHTOF(data\LowerReceiver_blk_lxim_co.paa), "\KAR_XM7\data\tex\ironsight_co.paa", "\KAR_XM7\data\tex\handguard_blk_co.paa", "\KAR_XM7\data\tex\details_blk_co.paa"};
        baseWeapon = QGVAR(XM7_BLK_G);
        magazines[]={QGVAR(25Rnd_Fury),QGVAR(25Rnd_Fury_blk),QGVAR(25Rnd_Fury_RT),QGVAR(25Rnd_Fury_RT_blk)};
    };

    class GVAR(XM250): KAR_XM250 {
        displayName="[61st]M250";
        recoil="recoil_mk200";
        modes[]={"manual", "close", "short", "medium", "far_optic1", "far_optic2"};
    };

    class GVAR(XM250_BLK): KAR_XM250_BLK {
        displayName="[61st] M250 (Black)";
        recoil="recoil_mk200";
        modes[]={"manual", "close", "short", "medium", "far_optic1", "far_optic2"};
    };
};


