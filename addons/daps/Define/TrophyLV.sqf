private["_v"];
_v=_this;
[typeOf _v,"TrophyLV"]execVM"daps\Scripts\Management\RegisterNewType.sqf";
if(isServer)then{deleteVehicle _v};