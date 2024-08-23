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

class CfgMagazines {
    class KAR_20Rnd_Fury;
    class KAR_20Rnd_Fury_blk;
    class KAR_20Rnd_Fury_RT;
    class KAR_20Rnd_Fury_RT_blk;

    class GVAR(25Rnd_Fury): KAR_20Rnd_Fury {
        displayname="[61st] 25rnd .277 Fury";
        count=25;
        mass=17;
    };
    class GVAR(25Rnd_Fury_blk): KAR_20Rnd_Fury_blk {
        displayname="[61st] 25rnd .277 Fury (Black)";
        count=25;
        mass=17;
    };
    class GVAR(25Rnd_Fury_RT): KAR_20Rnd_Fury_RT {
        displayname="[61st] 25rnd .277 Fury (Red Tracer)";
        count=25;
        mass=17;
    };
    class GVAR(25Rnd_Fury_RT_blk): KAR_20Rnd_Fury_RT_blk {
        displayname="[61st] 25rnd .277 Fury (Black/Red Tracer)";
        count=25;
        mass=17;
    };
};

