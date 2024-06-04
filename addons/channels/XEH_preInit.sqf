#include "script_component.hpp"
// Global Text
[
    "lxim_channels_GlobalText",
    "CHECKBOX",
    ["Global Text", "Allow players to use Global Text Channel and draw on map."],
    COMPONENT_NAME,
    true,
    true,
    {

    }
] call CBA_fnc_addSetting;

// Global Voice
[
    "lxim_channels_GlobalVoice",
    "CHECKBOX",
    ["Global Voice", "Allow players to speak in Global Voice Channel."],
    COMPONENT_NAME,
    true,
    true,
    {

    }
] call CBA_fnc_addSetting;

// Global Duration
[
    "lxim_channels_GlobalDuration",
    "SLIDER",
    ["Global Duration", "If enabled, how long till selected channels are disabled. 0 is permanent."],
    COMPONENT_NAME,
    [0, 300, 0, 0],
    true,
    {

    }
] call CBA_fnc_addSetting;

// Side Text
[
    "lxim_channels_SideText",
    "CHECKBOX",
    ["Side Text", "Allow players to use Side Text Channel and draw on map."],
    COMPONENT_NAME,
    true,
    true,
    {

    }
] call CBA_fnc_addSetting;

// Side Voice
[
    "lxim_channels_SideVoice",
    "CHECKBOX",
    ["Side Voice", "Allow players to speak in Side Voice Channel."],
    COMPONENT_NAME,
    true,
    true,
    {

    }
] call CBA_fnc_addSetting;

// Side Duration
[
    "lxim_channels_SideDuration",
    "SLIDER",
    ["Side Duration", "If enabled, how long till selected channels are disabled. 0 is permanent."],
    COMPONENT_NAME,
    [0, 300, 0, 0],
    true,
    {

    }
] call CBA_fnc_addSetting;

// Command Text
[
    "lxim_channels_CommandText",
    "CHECKBOX",
    ["Command Text", "Allow players to use Command Text Channel and draw on map."],
    COMPONENT_NAME,
    true,
    true,
    {

    }
] call CBA_fnc_addSetting;

// Command Voice
[
    "lxim_channels_CommandVoice",
    "CHECKBOX",
    ["Command Voice", "Allow players to speak in Command Voice Channel."],
    COMPONENT_NAME,
    true,
    true,
    {

    }
] call CBA_fnc_addSetting;

// Command Duration
[
    "lxim_channels_CommandDuration",
    "SLIDER",
    ["Command Duration", "If enabled, how long till selected channels are disabled. 0 is permanent."],
    COMPONENT_NAME,
    [0, 300, 0, 0],
    true,
    {

    }
] call CBA_fnc_addSetting;

// Group Text
[
    "lxim_channels_GroupText",
    "CHECKBOX",
    ["Group Text", "Allow players to use Group Text Channel and draw on map."],
    COMPONENT_NAME,
    true,
    true,
    {

    }
] call CBA_fnc_addSetting;

// Group Voice
[
    "lxim_channels_GroupVoice",
    "CHECKBOX",
    ["Group Voice", "Allow players to speak in Group Voice Channel."],
    COMPONENT_NAME,
    true,
    true,
    {

    }
] call CBA_fnc_addSetting;

// Group Duration
[
    "lxim_channels_GroupDuration",
    "SLIDER",
    ["Group Duration", "If enabled, how long till selected channels are disabled. 0 is permanent."],
    COMPONENT_NAME,
    [0, 300, 0, 0],
    true,
    {

    }
] call CBA_fnc_addSetting;

// Vehicle Text
[
    "lxim_channels_VehicleText",
    "CHECKBOX",
    ["Vehicle Text", "Allow players to use Vehicle Text Channel and draw on map."],
    COMPONENT_NAME,
    true,
    true,
    {

    }
] call CBA_fnc_addSetting;

// Vehicle Voice
[
    "lxim_channels_VehicleVoice",
    "CHECKBOX",
    ["Vehicle Voice", "Allow players to speak in Vehicle Voice Channel."],
    COMPONENT_NAME,
    true,
    true,
    {

    }
] call CBA_fnc_addSetting;

// Vehicle Duration
[
    "lxim_channels_VehicleDuration",
    "SLIDER",
    ["Vehicle Duration", "If enabled, how long till selected channels are disabled. 0 is permanent."],
    COMPONENT_NAME,
    [0, 300, 0, 0],
    true,
    {

    }
] call CBA_fnc_addSetting;

// Direct Text
[
    "lxim_channels_DirectText",
    "CHECKBOX",
    ["Direct Text", "Allow players to use Direct Text Channel and draw on map."],
    COMPONENT_NAME,
    true,
    true,
    {

    }
] call CBA_fnc_addSetting;

// Direct Voice
[
    "lxim_channels_DirectVoice",
    "CHECKBOX",
    ["Direct Voice", "Allow players to speak in Direct Voice Channel."],
    COMPONENT_NAME,
    true,
    true,
    {

    }
] call CBA_fnc_addSetting;

// Direct Duration
[
    "lxim_channels_DirectDuration",
    "SLIDER",
    ["Direct Duration", "If enabled, how long till selected channels are disabled. 0 is permanent."],
    COMPONENT_NAME,
    [0, 300, 0, 0],
    true,
    {

    }
] call CBA_fnc_addSetting;