class GVAR(modal)
{
    idd = IDD_lxim_ADMINMENU;
    movingEnable = 0;
    enableDisplay = 1;
    enableSimulation = 1;

    onLoad = QUOTE(_this call FUNC(modalOnLoad););
    onUnload = QUOTE(_this call FUNC(modalOnUnload););
    class Controls
    {
        class Background: RscText
        {
            idc = IDC_lxim_ADMINMENU_MODAL_BACK;
            colorBackground[] = {0, 0, 0, 0};
            x = "1 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            y = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "38 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            h = "23 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
        };
        class TitleBackground: RscText
        {
            idc = IDC_lxim_ADMINMENU_MODAL_TBACK;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
            x = "1.5 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            y = "2.6 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "37 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
        };
        class Title: RscTitle
        {
            idc = IDC_lxim_ADMINMENU_MODAL_TITLE;
            text = "61st Mechanized Infantry BattalionAdmin Menu";
            style = 0;
            colorBackground[] = {0, 0, 0, 0};
            x = "1.5 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            y = "2.6 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "37 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
        };
        class GroupBackground: RscText
        {
            idc = IDC_lxim_ADMINMENU_MODAL_GBACK;
            colorBackground[] = {0, 0, 0, 0.8};
            shadow = 2;
            colorShadow[] = {1, 1, 1, 1};
            colorText[] = {1, 1, 1, 1};
            x = "1.5 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            y = "3.7 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "37 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            h = "20.3 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
        };
        class Group: RscControlsGroup
        {
            idc = IDC_lxim_ADMINMENU_G_MODAL;
            x = "1.6 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            y = "3.8 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "36.8 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            h = "20.1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
            class Controls {};
        };
        class Close
        {
            idc = IDC_lxim_ADMINMENU_MODAL_CLOSE;
            type = 1;
            style = "48 + 2048";
            text = "\a3\ui_f\data\GUI\Rsc\RscDisplayArcadeMap\top_close_gs.paa";
            tooltip = "Close Utility";
            onMouseButtonClick = "closeDialog 1;";
            sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX);
            font = "RobotoCondensed";
            colorBackground[] = {0, 0, 0, 0};
            colorBackgroundActive[] = {0, 0, 0, 0};
            colorBackgroundDisabled[] = {0, 0, 0, 0};
            colorBorder[] = {0, 0, 0, 0};
            colorDisabled[] = {0, 0, 0, 0};
            colorFocused[] = {0, 0, 0, 0};
            colorShadow[] = {0, 0, 0, 0};
            colorText[] = {1, 1, 1, 1};
            offsetX = 0;
            offsetY = 0;
            offsetPressedX = 0;
            offsetPressedY = 0;
            borderSize = 0;
            soundEnter[] = {"", 0.1, 1};
            soundPush[] = {"", 0.1, 1};
            soundClick[] = {"", 0.1, 1};
            soundEscape[] = {"", 0.1, 1};
            x = "37.5 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            y = "2.6 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "1 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
        };
    };
};
