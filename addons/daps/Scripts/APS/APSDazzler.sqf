private _v=_this;
private _m=[];
private _sm=[];
private _p=[];
private _r=[];
private _l=0;
_v setVariable["dapsActive",TRUE,TRUE];
_v setVariable["dapsLastAmmo",(_v call DAPS_fnc_CountAmmo),TRUE];
_v setVariable["dapsType","Dazzler",TRUE];
_v setVariable["dapsAmmo",999,TRUE];
_v setVariable["dapsAmmoMax",999,TRUE];
private _time=-1;
private _reg=[];
while{TRUE}do{
    if!(alive _v)exitWith{};
    //if(TRUE)then{
    if(_v call DAPS_fnc_Active)then{
        _r=_v nearObjects["RocketCore",300];
        _m=_v nearObjects["MissileCore",300];
        _sm=_v nearObjects["SubmunitionCore",300];
        _p=_v nearObjects["ammo_Penetrator_Base",200];
        _r=_r+_m+_sm+_p;
        _r=_r-_reg;
        if((count _r)>0)then{[_v,_r select 0]spawn DAPS_fnc_Dazzler;_l=.3;_reg pushBack(_r select 0)};
        if((count _r)>1)then{[_v,_r select 1]spawn DAPS_fnc_Dazzler;_l=.3;_reg pushBack(_r select 1)};
        if((count _r)>2)then{[_v,_r select 2]spawn DAPS_fnc_Dazzler;_l=.3;_reg pushBack(_r select 2)};
        if(_l>0)then{sleep _l;_l=0};
    };
    //{if!(alive _x)then{_reg=_reg-[_x]}}forEach _reg;
    if((call DAPS_fnc_Time)>_time)then{
        {if!(alive _x)then{_reg=_reg-[_x]}}forEach _reg;
        _time=TIME+20;
    };
    sleep .01;
};