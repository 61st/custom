#include "\z\sixtyone\addons\adminmenu\script_component.hpp"

disableSerialization;

createDialog QGVAR(adminEyeDialog);

GVAR(Triggers) = allMissionObjects "EmptyDetector";
GVAR(WaveSpawners) = allMissionObjects "sixtyone_ai_wavespawn";
GVAR(Garrison) = (allMissionObjects "sixtyone_ai_garrison" + allMissionObjects "sixtyone_ai_garrisonQuantity");


GVAR(adminEyeSelectedObj) = objNull;
//FUTURE - Area
