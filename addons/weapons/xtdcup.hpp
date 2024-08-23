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


class XtdGearModels {
    class CfgWeapons {    
        class cupm1014_entry {
            options[] = { "grip" };
            label="M1014 Entry";
            class grip {
                label="Vertical Foregrip";
                values[] = { "none", "YES" };
                alwaysSelectable=1;
            };
        };

        class cupm1014 {
            options[] = { "grip", "stock" };
            label="M1014";
            class grip {
                label="Vertical Foregrip";
                values[] = { "none", "YES" };
                alwaysSelectable=1;
            };
            class stock {
                label = "Stock";
                values[] = { "telescopic", "solid" };
                alwaysSelectable=1;
                class telescopic {
                    label = "Telescopic";
                };
                class solid {
                    label = "Solid";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class CUP_sgun_M1014_Entry {
            model = "cupm1014_entry";
            grip = "none";
        };
        class CUP_sgun_M1014_Entry_vfg {
            model = "cupm1014_entry";
            grip = "YES";
        };
        class CUP_sgun_M1014 {
            model = "cupm1014";
            grip = "none";
            stock = "telescopic";
        };
        class CUP_sgun_M1014_vfg {
            model = "cupm1014";
            grip = "YES";
            stock = "telescopic";
        };
        class CUP_sgun_M1014_solidstock {
            model = "cupm1014";
            grip = "none";
            stock = "solid";
        };
    };
};