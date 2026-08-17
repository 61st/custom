if (!hasInterface) exitWith {};

private _handset = ACE_player getVariable ["SR_handsetObject", objNull];
private _ropeId = ACE_player getVariable ["SR_handsetRope", nil];

if (!isNil "_ropeId") then {
    ropeDestroy _ropeId;
};
ACE_player setVariable ["SR_handsetRope", nil];
ACE_player playActionNow "phone_anim_stop";

if (!isNull _handset) then {
    deleteVehicle _handset;
};
ACE_player setVariable ["SR_handsetObject", nil];
