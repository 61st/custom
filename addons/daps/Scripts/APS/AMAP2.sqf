private ["_v","_rd","_p","_id","_s","_i"];
_v=_this select 0;
_rd=_this select 1;
_p=_this select 2;
_id=_this select 3;
_i=_this select 4;
if(isNull _i)exitWith{};
if((typeOf _i)in dapsExcludedAmmo)exitWith{};
_s="";
if((getNumber(configFile>>"CfgAmmo">>typeOf _i>>"explosive"))==0)exitWith{};
//{_x doWatch _p}forEach(crew _v);
_p=[_v,_id,5]call DAPS_fnc_RelPos;
_p call DAPS_fnc_Blast;
if(_rd>180)then{_s="LEFT"}else{_s="RIGHT"};
if(_rd>180)then{_a=_v getVariable"dapsAmmoL"}else{_a=_v getVariable"dapsAmmoR"};
[_v,_id,_p,_i]call DAPS_fnc_React;
[_v,_s,_a]call DAPS_fnc_DeductAmmo;
[_v,_s,_rd,TRUE]remoteExec["DAPS_fnc_Report"];