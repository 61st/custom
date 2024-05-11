#include "\z\sixtyone\addons\adminmenu\script_component.hpp"

disableSerialization;

createDialog QGVAR(adminEyeDialog);

GVAR(Triggers) = allMissionObjects "EmptyDetector";
GVAR(WaveSpawners) = allMissionObjects "ghost_ai_wavespawn";
GVAR(Garrison) = (allMissionObjects "ghost_ai_garrison" + allMissionObjects "ghost_ai_garrisonQuantity");


GVAR(adminEyeSelectedObj) = objNull;
//FUTURE - Area
