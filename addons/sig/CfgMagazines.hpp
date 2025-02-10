
class CfgMagazines {
    class ICM_XM7_Magazine_277_Fury_BP_Arid_F;
    class ICM_XM7_Magazine_277_Fury_BP_Arid_Tracer_Red_F;
    class ICM_XM7_Magazine_277_Fury_BP_Khaki_Tracer_Red_F;
    class ICM_XM7_Magazine_277_Fury_BP_Khaki_Tracer_IR_F;
    class ICM_XM7_Magazine_277_Fury_BP_Khaki_F;
    class ICM_XM7_Magazine_277_Fury_BP_F;
    class ICM_XM7_Magazine_277_Fury_BP_Tracer_Red_F;
    class ICM_XM7_Magazine_277_Fury_BP_Arid_Tracer_IR_F;
    class ICM_XM7_Magazine_277_Fury_BP_Tracer_IR_F;

    class KAR_100Rnd_Fury;
    class KAR_100Rnd_Fury_blk;
    class KAR_100Rnd_Fury_RT;
    class KAR_100Rnd_Fury_RT_blk;

    class GVAR(25Rnd_Fury): ICM_XM7_Magazine_277_Fury_BP_Arid_F {
        ammo=QGVAR(65x51_Fury_Ammo);
        displayname="[61st] 25rnd .277 Fury";
        displaynameshort=".277";
        count=25;
        mass=10;
    };
    class GVAR(25Rnd_Fury_blk): ICM_XM7_Magazine_277_Fury_BP_F {
        ammo=QGVAR(65x51_Fury_Ammo);
        displayname="[61st] 25rnd .277 Fury (Black)";
        displaynameshort=".277";
        count=25;
        mass=10;
    };
    class GVAR(25Rnd_Fury_khk): ICM_XM7_Magazine_277_Fury_BP_Khaki_F {
        ammo=QGVAR(65x51_Fury_Ammo);
        displayname="[61st] 25rnd .277 Fury (Khaki)";
        displaynameshort=".277";
        count=25;
        mass=10;
    };
    class GVAR(25Rnd_Fury_RT): ICM_XM7_Magazine_277_Fury_BP_Arid_Tracer_Red_F {
        ammo=QGVAR(65x51_Fury_Ammo_RT);
        displayname="[61st] 25rnd .277 Fury (Red Tracer)";
        displaynameshort=".277 (Red Tracer)";
        count=25;
        mass=10;
    };
    class GVAR(25Rnd_Fury_RT_blk): ICM_XM7_Magazine_277_Fury_BP_Tracer_Red_F {
        ammo=QGVAR(65x51_Fury_Ammo_RT);
        displayname="[61st] 25rnd .277 Fury (Black/Red Tracer)";
        displaynameshort=".277 (Red Tracer)";
        count=25;
        mass=10;
    };
    class GVAR(25Rnd_Fury_RT_khk): ICM_XM7_Magazine_277_Fury_BP_Khaki_Tracer_Red_F {
        ammo=QGVAR(65x51_Fury_Ammo_RT);
        displayname="[61st] 25rnd .277 Fury (Khaki/Red Tracer)";
        displaynameshort=".277 (Red Tracer)";
        count=25;
        mass=10;
    };

    class GVAR(25Rnd_Fury_IR): ICM_XM7_Magazine_277_Fury_BP_Arid_Tracer_IR_F {
        ammo=QGVAR(65x51_Fury_Ammo_IR);
        displayname="[61st] 25rnd .277 Fury (IR Tracer)";
        displaynameshort=".277 (Red Tracer)";
        count=25;
        mass=10;
    };
    class GVAR(25Rnd_Fury_IR_blk): ICM_XM7_Magazine_277_Fury_BP_Tracer_IR_F {
        ammo=QGVAR(65x51_Fury_Ammo_IR);
        displayname="[61st] 25rnd .277 Fury (Black/IR Tracer)";
        displaynameshort=".277 (Red Tracer)";
        count=25;
        mass=10;
    };
    class GVAR(25Rnd_Fury_IR_khk): ICM_XM7_Magazine_277_Fury_BP_Khaki_Tracer_IR_F {
        ammo=QGVAR(65x51_Fury_Ammo_IR);
        displayname="[61st] 25rnd .277 Fury (Khaki/IR Tracer)";
        displaynameshort=".277 (Red Tracer)";
        count=25;
        mass=10;
    };

    class GVAR(150Rnd_Fury): KAR_100Rnd_Fury {
        ammo=QGVAR(65x51_Fury_Ammo);
        displayname="[61st] 150rnd .277 Fury";
        displaynameshort=".277";
        count=150;
        ACE_isBelt= 1;
        mass=40;
    };
    class GVAR(150Rnd_Fury_blk): KAR_100Rnd_Fury_blk {
        ammo=QGVAR(65x51_Fury_Ammo);
        displayname="[61st] 150rnd .277 Fury (Black)";
        displaynameshort=".277";
        count=150;
        ACE_isBelt= 1;
        mass=40;
    };
    class GVAR(150Rnd_Fury_RT): KAR_100Rnd_Fury_RT {
        ammo=QGVAR(65x51_Fury_Ammo_RT);
        displayname="[61st] 150rnd .277 Fury (Red Tracer)";
        displaynameshort=".277 (Red Tracer)";
        count=150;
        ACE_isBelt= 1;
        mass=40;
        tracersEvery= 5;
    };
    class GVAR(150Rnd_Fury_RT_blk): KAR_100Rnd_Fury_RT_blk {
        ammo=QGVAR(65x51_Fury_Ammo_RT);
        displaynameshort=".277 (Red Tracer)";
        displayname="[61st] 150rnd .277 Fury (Black/Red Tracer)";
        count=150;
        ACE_isBelt= 1;
        mass=40;
        tracersEvery= 5;
    };
    class GVAR(150Rnd_Fury_IR): KAR_100Rnd_Fury_RT {
        ammo=QGVAR(65x51_Fury_Ammo_IR);
        displayname="[61st] 150rnd .277 Fury (IR Tracer)";
        displaynameshort=".277 (IR Tracer)";
        count=150;
        ACE_isBelt= 1;
        mass=40;
        tracersEvery= 5;
    };
    class GVAR(150Rnd_Fury_IR_blk): KAR_100Rnd_Fury_RT_blk {
        ammo=QGVAR(65x51_Fury_Ammo_IR);
        displaynameshort=".277 (IR Tracer)";
        displayname="[61st] 150rnd .277 Fury (Black/IR Tracer)";
        count=150;
        ACE_isBelt= 1;
        mass=40;
        tracersEvery= 5;
    };
};