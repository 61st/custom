class CfgVehicles {
    // External class reference START
    class B_AssaultPack_rgr;
    class B_AssaultPack_Kerry;
    class B_Carryall_cbr;
    class B_Kitbag_rgr;
    class B_TacticalPack_blk;
    class B_Kitbag_Base;

    // External class reference  END


/////////////////////////
    class GVAR(AssaultPack_Multicam): B_AssaultPack_rgr {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Multicam): B_AssaultPack_Kerry {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_multicam_co.paa),
            QPATHTOF(data\vests_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Multicam): B_Carryall_cbr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Multicam.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_Multicam): B_Kitbag_rgr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Multicam.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Multicam): B_TacticalPack_blk {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Multicam.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_Multicam_Snow): B_AssaultPack_rgr {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_multicam_snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Multicam_Snow): B_AssaultPack_Kerry {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_multicam_snow_co.paa),
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Multicam_Snow): B_Carryall_cbr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_Multicam_Snow): B_Kitbag_rgr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Multicam_Snow): B_TacticalPack_blk {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_Multicam_Woodland): B_AssaultPack_rgr {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_multicam_woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Multicam_Woodland): B_AssaultPack_Kerry {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_multicam_woodland_co.paa),
            QPATHTOF(data\vests_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Multicam_Woodland): B_Carryall_cbr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_Multicam_Woodland): B_Kitbag_rgr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Multicam_Woodland): B_TacticalPack_blk {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_Solid_Black): B_AssaultPack_rgr {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_solid_black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Solid_Black): B_AssaultPack_Kerry {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_solid_black_co.paa),
            QPATHTOF(data\vests_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Solid_Black): B_Carryall_cbr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_Black.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_Solid_Black): B_Kitbag_rgr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Black.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Solid_Black): B_TacticalPack_blk {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_Black.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_Solid_CoyoteBrown): B_AssaultPack_rgr {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_solid_coyotebrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Solid_CoyoteBrown): B_AssaultPack_Kerry {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_solid_coyotebrown_co.paa),
            QPATHTOF(data\vests_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Solid_CoyoteBrown): B_Carryall_cbr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_Solid_CoyoteBrown): B_Kitbag_rgr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Solid_CoyoteBrown): B_TacticalPack_blk {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_Solid_Ranger_Green): B_AssaultPack_rgr {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_solid_ranger_green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Solid_Ranger_Green): B_AssaultPack_Kerry {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_solid_ranger_green_co.paa),
            QPATHTOF(data\vests_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Solid_Ranger_Green): B_Carryall_cbr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_Solid_Ranger_Green): B_Kitbag_rgr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Solid_Ranger_Green): B_TacticalPack_blk {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_US_Tigerstripe): B_AssaultPack_rgr {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_us_tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_US_Tigerstripe): B_AssaultPack_Kerry {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_us_tigerstripe_co.paa),
            QPATHTOF(data\vests_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_US_Tigerstripe): B_Carryall_cbr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_US_Tigerstripe): B_Kitbag_rgr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_US_Tigerstripe): B_TacticalPack_blk {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_Solid_Olive): B_AssaultPack_rgr {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_solid_olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Solid_Olive): B_AssaultPack_Kerry {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_solid_olive_co.paa),
            QPATHTOF(data\vests_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Solid_Olive): B_Carryall_cbr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_Olive.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_Solid_Olive): B_Kitbag_rgr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Olive.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Solid_Olive): B_TacticalPack_blk {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_Olive.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_Solid_White): B_AssaultPack_rgr {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_solid_white_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Solid_White): B_AssaultPack_Kerry {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_solid_white_co.paa),
            QPATHTOF(data\vests_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Solid_White): B_Carryall_cbr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_White.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_Solid_White): B_Kitbag_rgr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_White.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Solid_White): B_TacticalPack_blk {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_White.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_US_DCU): B_AssaultPack_rgr {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_us_dcu_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_US_DCU): B_AssaultPack_Kerry {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_us_dcu_co.paa),
            QPATHTOF(data\vests_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_US_DCU): B_Carryall_cbr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_US_DCU.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_US_DCU): B_Kitbag_rgr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_US_DCU.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_US_DCU): B_TacticalPack_blk {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_US_DCU.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_US_M81): B_AssaultPack_rgr {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_us_m81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_US_M81): B_AssaultPack_Kerry {
        author = QAUTHOR;
        
        maximumLoad = 210;
        displayName="[61st] Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_us_m81_co.paa),
            QPATHTOF(data\vests_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_M81_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_US_M81): B_Carryall_cbr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_US_M81.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_US_M81): B_Kitbag_rgr {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_US_M81.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_US_M81): B_TacticalPack_blk {
        author = QAUTHOR;
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 210;
        displayName="[61st] Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_US_M81.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Backpack_Kitbag_Medic_White): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 400;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[61st] Kitbag Medic";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_White.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_white_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Black): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 400;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[61st] Kitbag Medic";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Black.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_black_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Coyote): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 400;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[61st] Kitbag Medic";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_CoyoteBrown.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_coyote_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_MTP): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 400;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[61st] Kitbag Medic";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Multicam.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_mtp_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Green): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 400;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[61st] Kitbag Medic";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Olive.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_green_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Sage): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 400;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[61st] Kitbag Medic";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Olive.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_sage_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Tan): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 400;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[61st] Kitbag Medic";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Ranger_Green.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_tan_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_RGR): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        hiddenSelections[]=
        {
            "Camo"
        };
        maximumLoad = 400;
        author = "Bohemia Interactive, GilleeDoo, Tyrone";
        displayName="[61st] Kitbag Medic";
        picture = QPATHTOF(data\ui\backpack_kitbag_medic_rgr_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_rgr_co.paa)
        };
    };

///////////////////////////////////////////////////////////

    // MODIFIED ENOCH RADIOBAGS
    class B_RadioBag_01_base_F;
    // RADIOBAG 01 BASE
    class GVAR(RadioBag_01_Base): B_RadioBag_01_base_F {
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;
        author = QAUTHOR;
        // maximumLoad = 80;
        // mass = 160;
        maximumLoad = 180;
        mass = 101.2;
        transportMaxBackpacks = 1;
        transportMaxMagazines = 30;
        transportMaxWeapons = 1;
        class TransportMagazines {};
        class TransportWeapons {};
        isBackpack = 1;
        class TransportItems {
            MACRO_ADDITEM(ACRE_PRC117F,1);
        };
    };


    class GVAR(B_RadioBag_01_Multicam_F): GVAR(RadioBag_01_Base) {
        author = QAUTHOR;
        displayName = "[61st](Multicam) Radio Pack";
        hiddenSelectionsTextures[] = {QPATHTOF(data\B_radiobag_Multicam_CO.paa)};
        picture = QPATHTOF(data\UI\icon_B_C_UAV_Multicam_ca.paa);
        hiddenSelections[] = {"Camo1"};
        MACRO_ITEM_COMMON
    };
    class GVAR(B_RadioBag_01_Multicam_Snow_F): GVAR(RadioBag_01_Base) {
        author = QAUTHOR;
        displayName = "[61st](Multicam Snow) Radio Pack";
        hiddenSelectionsTextures[] = {QPATHTOF(data\B_radiobag_Multicam_Snow_CO.paa)};
        picture = QPATHTOF(data\UI\icon_B_C_UAV_Multicam_Snow_ca.paa);
        hiddenSelections[] = {"Camo1"};
        MACRO_ITEM_COMMON
    };
    class GVAR(B_RadioBag_01_Multicam_Woodland_F): GVAR(RadioBag_01_Base) {
        author = QAUTHOR;
        displayName = "[61st](Multicam Woodland) Radio Pack";
        hiddenSelectionsTextures[] = {QPATHTOF(data\B_radiobag_Multicam_Woodland_CO.paa)};
        picture = QPATHTOF(data\UI\icon_B_C_UAV_Multicam_Woodland_ca.paa);
        hiddenSelections[] = {"Camo1"};
        MACRO_ITEM_COMMON
    };
    class GVAR(B_RadioBag_01_Solid_Black_F): GVAR(RadioBag_01_Base) {
        author = QAUTHOR;
        displayName = "[61st](Black) Radio Pack";
        hiddenSelectionsTextures[] = {QPATHTOF(data\B_radiobag_Solid_Black_CO.paa)};
        picture = QPATHTOF(data\UI\icon_B_C_UAV_Solid_Black_ca.paa);
        hiddenSelections[] = {"Camo1"};
        MACRO_ITEM_COMMON
    };
    class GVAR(B_RadioBag_01_Solid_CoyoteBrown_F): GVAR(RadioBag_01_Base) {
        author = QAUTHOR;
        displayName = "[61st](CoyoteBrown) Radio Pack";
        hiddenSelectionsTextures[] = {QPATHTOF(data\B_radiobag_Solid_CoyoteBrown_CO.paa)};
        picture = QPATHTOF(data\UI\icon_B_C_UAV_Solid_CoyoteBrown_ca.paa);
        hiddenSelections[] = {"Camo1"};
        MACRO_ITEM_COMMON
    };
    class GVAR(B_RadioBag_01_Solid_Olive_F): GVAR(RadioBag_01_Base) {
        author = QAUTHOR;
        displayName = "[61st](Olive) Radio Pack";
        hiddenSelectionsTextures[] = {QPATHTOF(data\B_radiobag_Solid_Olive_CO.paa)};
        picture = QPATHTOF(data\UI\icon_B_C_UAV_Solid_Olive_ca.paa);
        hiddenSelections[] = {"Camo1"};
        MACRO_ITEM_COMMON
    };
    class GVAR(B_RadioBag_01_Solid_Ranger_Green_F): GVAR(RadioBag_01_Base) {
        author = QAUTHOR;
        displayName = "[61st](Ranger Green) Radio Pack";
        hiddenSelectionsTextures[] = {QPATHTOF(data\B_radiobag_Solid_Ranger_Green_CO.paa)};
        picture = QPATHTOF(data\UI\icon_B_C_UAV_Solid_Ranger_Green_ca.paa);
        hiddenSelections[] = {"Camo1"};
        MACRO_ITEM_COMMON
    };
    class GVAR(B_RadioBag_01_Solid_Tan_F): GVAR(RadioBag_01_Base) {
        author = QAUTHOR;
        displayName = "[61st](Tan) Radio Pack";
        hiddenSelectionsTextures[] = {QPATHTOF(data\B_radiobag_Solid_Tan_CO.paa)};
        picture = QPATHTOF(data\UI\icon_B_C_UAV_Solid_Tan_ca.paa);
        hiddenSelections[] = {"Camo1"};
        MACRO_ITEM_COMMON
    };
    class GVAR(B_RadioBag_01_Solid_White_F): GVAR(RadioBag_01_Base) {
        author = QAUTHOR;
        displayName = "[61st](White) Radio Pack";
        hiddenSelectionsTextures[] = {QPATHTOF(data\B_radiobag_Solid_White_CO.paa)};
        picture = QPATHTOF(data\UI\icon_B_C_UAV_Solid_White_ca.paa);
        hiddenSelections[] = {"Camo1"};
        MACRO_ITEM_COMMON
    };
    class GVAR(B_RadioBag_01_US_DCU_F): GVAR(RadioBag_01_Base) {
        author = QAUTHOR;
        displayName = "[61st](DCU) Radio Pack";
        hiddenSelectionsTextures[] = {QPATHTOF(data\B_radiobag_US_DCU_CO.paa)};
        picture = QPATHTOF(data\UI\icon_B_C_UAV_US_DCU_ca.paa);
        hiddenSelections[] = {"Camo1"};
        MACRO_ITEM_COMMON
    };
    class GVAR(B_RadioBag_01_US_Tigerstripe_F): GVAR(RadioBag_01_Base) {
        author = QAUTHOR;
        displayName = "[61st](Tigerstripe) Radio Pack";
        hiddenSelectionsTextures[] = {QPATHTOF(data\B_radiobag_US_Tigerstripe_CO.paa)};
        picture = QPATHTOF(data\UI\icon_B_C_UAV_US_Tigerstripe_ca.paa);
        hiddenSelections[] = {"Camo1"};
        MACRO_ITEM_COMMON
    };
    class GVAR(B_RadioBag_01_US_M81_F): GVAR(RadioBag_01_Base) {
        author = QAUTHOR;
        displayName = "[61st](US_M81) Radio Pack";
        hiddenSelectionsTextures[] = {QPATHTOF(data\B_radiobag_US_M81_CO.paa)};
        picture = QPATHTOF(data\UI\icon_B_C_UAV_US_M81_ca.paa);
        hiddenSelections[] = {"Camo1"};
        MACRO_ITEM_COMMON
    };
};


