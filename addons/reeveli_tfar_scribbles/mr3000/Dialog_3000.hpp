/*
 * Author: Reeveli
 * Part of Reeveli's TFAR Scribbles.
 * UI for MR3000.
 
2.1
    Increased nigh time threshold to <1
    
2.0.1
    Updated notebook graphic to v7

2.0 Update
    New UI background image
    New dynamic controls for showing alt channel
        Added function call to alt channel button and onLoad EH for new alt channel functionality
*/



//Notebook x, y, w, h in addon common defines

class mr3000_radio_dialog
{
    idd = 1998;
    movingEnable = 1;
    controls[] = {"background","Rev_list","Rev_fr_1","Rev_fr_2","Rev_fr_3","Rev_fr_4","Rev_fr_5","Rev_fr_6","Rev_fr_7","Rev_fr_8","Rev_desc_1","Rev_desc_2","Rev_desc_3","Rev_desc_4","Rev_desc_5","Rev_desc_6","Rev_desc_7","Rev_desc_8","Rev_alt_1","Rev_alt_2","Rev_alt_3","Rev_alt_4","Rev_alt_5","Rev_alt_6","Rev_alt_7","Rev_alt_8","enter","clear","next_channel","previous_channel","increase_volume","decrease_volume","volume_switch","channel_1","channel_2","channel_3","channel_4","channel_5","channel_6","channel_7","channel_8","channel_9","edit","channel_edit","stereo","additional","channel_switch","speakers"};
    controlsBackground[] = {};
    onUnload = "['OnRadioOpen', [player, TF_lr_dialog_radio, true, 'mr3000_radio_dialog', false]] call TFAR_fnc_fireEventHandlers;[TF_lr_dialog_radio # 0, [ctrlText 8009,ctrlText 8010,ctrlText 8011,ctrlText 8012,ctrlText 8013,ctrlText 8014,ctrlText 8015,ctrlText 8016]] call Rev_TFAR_fnc_saveScribble";
    onLoad = "if (sunOrMoon < 1) then {((_this select 0) displayCtrl 67676) ctrlSetText '\z\tfar\addons\backpacks\mr3000\ui\mr3000_n.paa';((_this select 0) displayCtrl 8000) ctrlSetTextColor [0.18,0.18,0.18,1]};call Rev_TFAR_fnc_getLwAlt;";
    class background: RscBackPicture
    {
        idc = 67676;
        text = "\z\tfar\addons\backpacks\mr3000\ui\mr3000.paa";
        x = "0.0993594 * safezoneW + safezoneX";
        y = "0.1722 * safezoneH + safezoneY";
        w = "0.66825 * safezoneW";
        h = "0.5962 * safezoneH";
        moving = 1;
    };
    class Rev_list: background
    {
        idc=8000;
        x = TFAR_notebook_X + TFAR_notebook_W * 0.75;
        y = TFAR_notebook_Y;
        w = TFAR_notebook_W;
        h = TFAR_notebook_H;
        text="\reeveli_tfar_scribbles\notebook\Rev_notebook_7.paa";
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]);";
    };
    class Rev_fr_1: RscText
    {
        idc = 8001;
        text = "";
        font = "Caveat";
        sizeEx = TFAR_notebook_H * 0.03;
        colorText[] = {0,0,0,1};
        shadow = 0;
        x = TFAR_notebook_X + TFAR_notebook_W * (0.75 + 0.38);
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.337;
        w = TFAR_notebook_W * 0.08;
        h = TFAR_notebook_H * 0.03;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]); [1,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_2: Rev_fr_1
    {
        idc = 8002;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.382;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]); [2,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_3: Rev_fr_1
    {
        idc = 8003;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.427;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]); [3,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_4: Rev_fr_1
    {
        idc = 8004;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.472;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]); [4,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_5: Rev_fr_1
    {
        idc = 8005;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.512;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]); [5,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_6: Rev_fr_1
    {
        idc = 8006;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.557;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]); [6,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_7: Rev_fr_1
    {
        idc = 8007;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.602;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]); [7,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_8: Rev_fr_1
    {
        idc = 8008;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.647;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]); [8,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_desc_1: RscEdit
    {
        idc = 8009;
        text = "";
        font = "Caveat";
        sizeEx = TFAR_notebook_H * 0.03;
        colorText[] = {0,0,0,1};
        shadow = 0;
        style = 512;
        x = TFAR_notebook_X + TFAR_notebook_W * (0.75 + 0.465);
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.337;
        w = TFAR_notebook_W * 0.15;
        h = TFAR_notebook_H * 0.03;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]);[TF_lr_dialog_radio # 0, 1, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_2: Rev_desc_1
    {
        idc = 8010;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.382;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]);[TF_lr_dialog_radio # 0, 2, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_3: Rev_desc_1
    {
        idc = 8011;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.427;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]);[TF_lr_dialog_radio # 0, 3, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_4: Rev_desc_1
    {
        idc = 8012;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.472;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]);[TF_lr_dialog_radio # 0, 4, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_5: Rev_desc_1
    {
        idc = 8013;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.512;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]);[TF_lr_dialog_radio # 0, 5, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_6: Rev_desc_1
    {
        idc = 8014;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.557;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]);[TF_lr_dialog_radio # 0, 6, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_7: Rev_desc_1
    {
        idc = 8015;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.602;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]);[TF_lr_dialog_radio # 0, 7, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_8: Rev_desc_1
    {
        idc = 8016;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.647;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]);[TF_lr_dialog_radio # 0, 8, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_alt_1: Rev_fr_1
    {
        idc=8020;
        text = "";
        font = "Caveat";
        sizeEx = TFAR_notebook_H * 0.03;
        colorText[] = {0,0,0,1};
        shadow = 0;
        x = TFAR_notebook_X + TFAR_notebook_W * (0.75 + 0.624);
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.337;
        w = TFAR_notebook_W * 0.04;
        h = TFAR_notebook_H * 0.03;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_mr3000',false]);";
    };
    class Rev_alt_2: Rev_alt_1
    {
        idc=8021;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.382;
    };
    class Rev_alt_3: Rev_alt_1
    {
        idc=8022;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.427;
    };
    class Rev_alt_4: Rev_alt_1
    {
        idc=8023;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.472;
    };
    class Rev_alt_5: Rev_alt_1
    {
        idc=8024;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.512;
    };
    class Rev_alt_6: Rev_alt_1
    {
        idc=8025;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.557;
    };
    class Rev_alt_7: Rev_alt_1
    {
        idc=8026;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.602;
    };
    class Rev_alt_8: Rev_alt_1
    {
        idc=8027;
        y = TFAR_notebook_Y + TFAR_notebook_H * 0.647;
    };
    class enter: HiddenButton
    {
        idc = 2392;
        x = "0.562391 * safezoneW + safezoneX";
        y = "0.4208 * safezoneH + safezoneY";
        w = "0.0223125 * safezoneW";
        h = "0.0308069 * safezoneH";
        tooltip = "Set frequency";
        onButtonClick = "[((ctrlParent (_this select 0))) displayCtrl 1410] call TFAR_backpacks_fnc_onButtonClick_Enter;private _channel = ((TF_lr_dialog_radio) call TFAR_fnc_getLrSettings) # 0; [_channel + 1, displayCtrl (8000 + _channel + 1)] call Rev_TFAR_fnc_getLwFrq;";
        action = "";
    };
    class clear: HiddenButton
    {
        idc = 2393;
        x = "0.562391 * safezoneW + safezoneX";
        y = "0.3548 * safezoneH + safezoneY";
        w = "0.0223125 * safezoneW";
        h = "0.0308069 * safezoneH";
        tooltip = "Clear frequency";
        action = "ctrlSetText [1410,'']; ctrlSetFocus ((findDisplay 1998) displayCtrl 1410);";
    };
    class next_channel: HiddenButton
    {
        idc = 2394;
        x = "0.568062 * safezoneW + safezoneX";
        y = "0.5396 * safezoneH + safezoneY";
        w = "0.0190313 * safezoneW";
        h = "0.0280062 * safezoneH";
        tooltip = "Next channel";
        action = "[1, true] call TFAR_fnc_setChannelViaDialog;";
    };
    class previous_channel: HiddenButton
    {
        idc = 2395;
        x = "0.529391 * safezoneW + safezoneX";
        y = "0.5374 * safezoneH + safezoneY";
        w = "0.0203438 * safezoneW";
        h = "0.0280062 * safezoneH";
        tooltip = "Previous channel";
        action = "[0, true] call TFAR_fnc_setChannelViaDialog;";
    };
    class increase_volume: HiddenButton
    {
        idc = 2396;
        x = "0.550531 * safezoneW + safezoneX";
        y = "0.4989 * safezoneH + safezoneY";
        w = "0.0190313 * safezoneW";
        h = "0.0294066 * safezoneH";
        tooltip = "Increase volume";
        action = "[1, true] call TFAR_fnc_setVolumeViaDialog;";
    };
    class decrease_volume: HiddenButton
    {
        idc = 2397;
        x = "0.548469 * safezoneW + safezoneX";
        y = "0.5726 * safezoneH + safezoneY";
        w = "0.021 * safezoneW";
        h = "0.0266059 * safezoneH";
        action = "[0, true] call TFAR_fnc_setVolumeViaDialog;";
        tooltip = "Decrease volume";
    };
    class channel_1: HiddenButton
    {
        idc = 2399;
        x = "0.365422 * safezoneW + safezoneX";
        y = "0.4989 * safezoneH + safezoneY";
        w = "0.0190313 * safezoneW";
        h = "0.0322072 * safezoneH";
        action = "[TF_lr_dialog_radio, 0] call TFAR_fnc_setLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 1";
    };
    class channel_2: HiddenButton
    {
        idc = 2400;
        x = "0.397906 * safezoneW + safezoneX";
        y = "0.5011 * safezoneH + safezoneY";
        w = "0.0223125 * safezoneW";
        h = "0.0294066 * safezoneH";
        action = "[TF_lr_dialog_radio, 1] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 2";
    };
    class channel_3: HiddenButton
    {
        idc = 2401;
        x = "0.432453 * safezoneW + safezoneX";
        y = "0.5 * safezoneH + safezoneY";
        w = "0.0203438 * safezoneW";
        h = "0.0322072 * safezoneH";
        action = "[TF_lr_dialog_radio, 2] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 3";
    };
    class channel_4: HiddenButton
    {
        idc = 2402;
        x = "0.465453 * safezoneW + safezoneX";
        y = "0.4989 * safezoneH + safezoneY";
        w = "0.021 * safezoneW";
        h = "0.0308069 * safezoneH";
        action = "[TF_lr_dialog_radio, 3] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 4";
    };
    class channel_5: HiddenButton
    {
        idc = 2403;
        x = "0.497937 * safezoneW + safezoneX";
        y = "0.5011 * safezoneH + safezoneY";
        w = "0.0223125 * safezoneW";
        h = "0.0322072 * safezoneH";
        action = "[TF_lr_dialog_radio, 4] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 5";
    };
    class channel_6: HiddenButton
    {
        idc = 2404;
        x = "0.365937 * safezoneW + safezoneX";
        y = "0.5561 * safezoneH + safezoneY";
        w = "0.021 * safezoneW";
        h = "0.0294066 * safezoneH";
        action = "[TF_lr_dialog_radio, 5] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 6";
    };
    class channel_7: HiddenButton
    {
        idc = 2405;
        x = "0.399969 * safezoneW + safezoneX";
        y = "0.555 * safezoneH + safezoneY";
        w = "0.021 * safezoneW";
        h = "0.0294066 * safezoneH";
        action = "[TF_lr_dialog_radio, 6] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 7";
    };
    class channel_8: HiddenButton
    {
        idc = 2406;
        x = "0.431937 * safezoneW + safezoneX";
        y = "0.5539 * safezoneH + safezoneY";
        w = "0.021 * safezoneW";
        h = "0.0294066 * safezoneH";
        action = "[TF_lr_dialog_radio, 7] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 8";
    };
    class channel_9: HiddenButton
    {
        idc = 2407;
        x = "0.464937 * safezoneW + safezoneX";
        y = "0.555 * safezoneH + safezoneY";
        w = "0.021 * safezoneW";
        h = "0.0294066 * safezoneH";
        action = "[TF_lr_dialog_radio, 8] call TFAR_fnc_setLrChannel; call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
        tooltip = "Channel 9";
    };
    class edit: RscEditLCD
    {
        idc = 1410;
        x = "0.459266 * safezoneW + safezoneX";
        y = "0.3768 * safezoneH + safezoneY";
        w = "0.0531563 * safezoneW";
        h = "0.03 * safezoneH";
        font = "TFAR_font_dots";
        shadow = 1;
        sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1.2)";
        tooltip = "Current frequency";
        canModify = 1;
        onKeyUp = "if (_this select 1 in [28,156]) then { [((ctrlParent (_this select 0))) displayCtrl 1410] call TFAR_backpacks_fnc_onButtonClick_Enter;private _channel = ((TF_lr_dialog_radio) call TFAR_fnc_getLrSettings) # 0; [_channel + 1, displayCtrl (8000 + _channel + 1)] call Rev_TFAR_fnc_getLwFrq;};";
        onLoad = "params ['_control','_config']; ctrlSetFocus _control";
    };
    class channel_edit: RscEditLCD
    {
        idc = 1411;
        x = "0.416469 * safezoneW + safezoneX";
        y = "0.3768 * safezoneH + safezoneY";
        w = "0.0427969 * safezoneW";
        h = "0.0297 * safezoneH";
        font = "TFAR_font_dots";
        shadow = 1;
        sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1.2)";
        tooltip = "Current channel";
        canModify = 0;
    };
    class stereo: HiddenButton
    {
        idc = 2408;
        x = "0.499484 * safezoneW + safezoneX";
        y = "0.5572 * safezoneH + safezoneY";
        w = "0.0216563 * safezoneW";
        h = "0.0308069 * safezoneH";
        action = "[TF_lr_dialog_radio,((TF_lr_dialog_radio call TFAR_fnc_getCurrentLrStereo) + 1) mod 3] call TFAR_fnc_setLrStereo; [TF_lr_dialog_radio] call TFAR_fnc_showRadioVolume;";
        tooltip = "Stereo settings";
    };
    class additional: HiddenRotator
    {
        idc = 12345;
        x = "0.295812 * safezoneW + safezoneX";
        y = "0.4197 * safezoneH + safezoneY";
        w = "0.0367463 * safezoneW";
        h = "0.0812181 * safezoneH";
        tooltip = "Set additional channel";
        action = "playSound 'TFAR_rotatorPush'; [TF_lr_dialog_radio,TF_lr_dialog_radio call TFAR_fnc_getLrChannel] call TFAR_fnc_setAdditionalLrChannel; call TFAR_fnc_updateLRDialogToChannel; [TF_lr_dialog_radio,true] call TFAR_fnc_showRadioInfo; call Rev_TFAR_fnc_getLwAlt;";
    };
    class volume_switch: HiddenRotator
    {
        idc = 2398;
        x = "0.300453 * safezoneW + safezoneX";
        y = "0.3218 * safezoneH + safezoneY";
        w = "0.0360938 * safezoneW";
        h = "0.0728162 * safezoneH";
        tooltip = "Decrease volume | Increase volume";
        onMouseButtonDown = "[_this select 1, true] call TFAR_fnc_setVolumeViaDialog;";
    };
    class channel_switch: HiddenRotator
    {
        idc = 2399;
        x = "0.292203 * safezoneW + safezoneX";
        y = "0.5407 * safezoneH + safezoneY";
        w = "0.033499 * safezoneW";
        h = "0.0659931 * safezoneH";
        tooltip = "Previous channel | Next channel";
        onMouseButtonDown = "[_this select 1, true] call TFAR_fnc_setChannelViaDialog;";
    };
    class speakers: HiddenButton
    {
        idc = 123456;
        x = "0.603125 * safezoneW + safezoneX";
        y = "0.5682 * safezoneH + safezoneY";
        w = "0.0159844 * safezoneW";
        h = "0.0715 * safezoneH";
        tooltip = "Speakers";
        action = "TF_lr_dialog_radio call TFAR_fnc_setLrSpeakers;[TF_lr_dialog_radio] call TFAR_fnc_showRadioSpeakers;";
    };
};