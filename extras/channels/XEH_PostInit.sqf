if !(isserver) exitwith {};

// Enable/Disable channels
[0, [lxim_channels_GlobalText, lxim_channels_GlobalVoice]] remoteExec ["enablechannel",0,true];
[1, [lxim_channels_SideText, lxim_channels_SideVoice]] remoteExec ["enablechannel",0,true];
[2, [lxim_channels_CommandText, lxim_channels_CommandVoice]] remoteExec ["enablechannel",0,true];
[3, [lxim_channels_GroupText, lxim_channels_GroupVoice]] remoteExec ["enablechannel",0,true];
[4, [lxim_channels_VehicleText, lxim_channels_VehicleVoice]] remoteExec ["enablechannel",0,true];
[5, [lxim_channels_DirectText, lxim_channels_DirectVoice]] remoteExec ["enablechannel",0,true];


// Global Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (lxim_channels_GlobalDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (lxim_channels_GlobalDuration * 60)) then {
            [0, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Side Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (lxim_channels_SideDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (lxim_channels_SideDuration * 60)) then {
            [1, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Command Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (lxim_channels_CommandDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (lxim_channels_CommandDuration * 60)) then {
            [2, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Group Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (lxim_channels_GroupDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (lxim_channels_GroupDuration * 60)) then {
            [3, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Vehicle Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (lxim_channels_VehicleDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (lxim_channels_VehicleDuration * 60)) then {
            [4, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Direct Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (lxim_channels_DirectDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (lxim_channels_DirectDuration * 60)) then {
            [5, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;