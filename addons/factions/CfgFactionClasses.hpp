#include "script_component.hpp"
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

class CfgFactionClasses {
    class O_FictionArmy_Woodland {
        displayName = "61st EFP";
        side = 0;
        flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        priority = 0;
    };
    class B_FictionArmy_Woodland {
        displayName = "61st EFP ";
        side = 1;
        flag = "\a3\Data_f\Flags\flag_FIA_co.paa";
        icon = "\a3\Data_f\Flags\flag_FIA_co.paa";
        priority = 0;
    };
    class B_FictionSOFArmy_Woodland {
        displayName = "61st SOF EFP ";
        side = 1;
        flag = "\A3\ui_f\data\map\markers\flags\Altis_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\Altis_ca.paa";
        priority = 0;
    };
};