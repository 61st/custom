class XtdGearModels {
    class CfgWeapons {
        class anvg {
            options[] = { "camo", "ti"};
            label = "Adv NVG";
            class camo {
                alwaysSelectable = 1;
                values[] = { "blk", "gry", "grn"};
                class blk {
                    label = "Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class gry {
                    label = "Grey";
                    image = "z\aceax\addons\gearinfo\data\camo\gry.paa";
                };
                class grn {
                    label = "Green";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
            class ti {
                label = "Thermal";
                alwaysSelectable = 1;
                values[] = { "yes", "no"};
            };
        };
        class nvg5 {
            options[] = { "camo", "ti"};
            label = "NVG v5";
            class camo {
                alwaysSelectable = 1;
                values[] = { "blk", "brn", "grn"};
                class blk {
                    label = "Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class bnn {
                    label = "Brown";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class grn {
                    label = "Green";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
            };
            class ti {
                label = "Thermal";
                alwaysSelectable = 1;
                values[] = { "yes", "no"};
            };
        };
        class nivas {
            options[] = { "camo", "ti"};
            label = "IVAS";
            class camo {
                alwaysSelectable = 1;
                values[] = { "blk", "gry", "mud", "olive", "tan", "wht"};
                class blk {
                    label = "Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class gry {
                    label = "Grey";
                    image = "z\aceax\addons\gearinfo\data\camo\gry.paa";
                };
                class olive {
                    label = "Olive";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class tan {
                    label = "Tan";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class wht {
                    label = "Olive";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class mud {
                    label = "Mud";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
            class ti {
                label = "Thermal";
                alwaysSelectable = 1;
                values[] = { "yes", "no"};
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class GVAR(anvg_blk) {
            model = "anvg";
            camo = "blk";
            ti = "no";
        };
        class GVAR(anvg_gry) {
            model = "anvg";
            camo = "gry";
            ti = "no";
        };
        class GVAR(anvg_grn) {
            model = "anvg";
            camo = "grn";
            ti = "no";
        };
        class GVAR(nvg5_blk) {
            model = "nvg5";
            camo = "blk";
            ti = "no";
        };
        class GVAR(nvg5_brn) {
            model = "nvg5";
            camo = "brn";
            ti = "no";
        };
        class GVAR(nvg5_grn) {
            model = "nvg5";
            camo = "grn";
            ti = "no";
        };

        class GVAR(anvgTI_blk) {
            model = "anvg";
            camo = "blk";
            ti = "yes";
        };
        class GVAR(anvgTI_gry) {
            model = "anvg";
            camo = "gry";
            ti = "yes";
        };
        class GVAR(anvgTI_grn) {
            model = "anvg";
            camo = "grn";
            ti = "yes";
        };
        class GVAR(nvg5TI_blk) {
            model = "nvg5";
            camo = "blk";
            ti = "yes";
        };
        class GVAR(nvg5TI_brn) {
            model = "nvg5";
            camo = "brn";
            ti = "yes";
        };
        class GVAR(nvg5TI_grn) {
            model = "nvg5";
            camo = "grn";
            ti = "yes";
        };

        class TIOW_IVAS_Black {
            model = "nivas";
            camo = "blk";
            ti = "no";
        };
        class TIOW_IVAS_BlackTI {
            model = "nivas";
            camo = "blk";
            ti = "yes";
        };
        class TIOW_IVAS_Grey {
            model = "nivas";
            camo = "gry";
            ti = "no";
        };
        class TIOW_IVAS_GreyTI {
            model = "nivas";
            camo = "gry";
            ti = "yes";
        };
        class TIOW_IVAS_Mud {
            model = "nivas";
            camo = "mud";
            ti = "no";
        };
        class TIOW_IVAS_MudTI {
            model = "nivas";
            camo = "mud";
            ti = "yes";
        };
        class TIOW_IVAS_Olive {
            model = "nivas";
            camo = "olive";
            ti = "no";
        };
        class TIOW_IVAS_OliveTI {
            model = "nivas";
            camo = "olive";
            ti = "yes";
        };
        class TIOW_IVAS_Tan {
            model = "nivas";
            camo = "tan";
            ti = "no";
        };
        class TIOW_IVAS_TanTI {
            model = "nivas";
            camo = "tan";
            ti = "yes";
        };
        class TIOW_IVAS_White {
            model = "nivas";
            camo = "wht";
            ti = "no";
        };
        class TIOW_IVAS_WhiteTI {
            model = "nivas";
            camo = "wht";
            ti = "yes";
        };
    };
};
