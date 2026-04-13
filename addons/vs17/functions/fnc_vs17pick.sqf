#include "script_component.hpp"
private["_unit","_vs17"];

_unit = _this select 0;
private _order = [1,2,3];
private _overflow = true;
[_unit, QGVAR(vs17), 1, _order, _overflow] call EFUNC(common,addItem);
deleteVehicle (_this select 1);

true
