class CfgPatches {
    class S61_TFAR_Recovery_Fix {
        name = "61st TFAR Recovery Fix";
        author = "61st Mechanized Infantry";
        requiredVersion = 2.20;
        requiredAddons[] = {
            "cba_main",
            "ace_medical",
            "tfar_core"
        };
        units[] = {};
        weapons[] = {};
        version = "1.0.0";
    };
};

class CfgFunctions {
    class S61 {
        class TFARRecoveryFix {
            file = "\z\lxim\addons\tfar_recovery_fix\functions";

            class postInit {
                postInit = 1;
            };
        };
    };
};

