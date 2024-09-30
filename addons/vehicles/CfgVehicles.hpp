/*
 * Author: AUTHOR
 * Function description
 *
 * Arguments:
 * 0: Objects <ARRAY>
 * 1: All <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[bob, ted], false] call lxim_main_fnc_example
 *
 * Public: No
 */

class DefaultVehicleSystemsDisplayManagerLeft {
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight {
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft {
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight {
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft {
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight {
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft {
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight {
	class components;
};
class CBA_Extended_EventHandlers;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;



class CfgVehicles {
    class All {
        class Turrets;
    };

    class AllVehicles: All {
        class NewTurret {
            class Turrets;
        };
    };

    class Land: AllVehicles {};

    class LandVehicle: Land {
        class CommanderOptics;
    };

    class Car: LandVehicle {};
    class Car_F: Car {
        class Turrets {
            class MainTurret: NewTurret {};
        };
    };

    class Wheeled_APC_F: Car_F {
        class ViewPilot;
        class ViewOptics;
        class ViewCargo;
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics: CommanderOptics {};
                };
            };
        };
        class EventHandlers;
    };

    class APC_Wheeled_03_base_F: Wheeled_APC_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
    };

    class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F {};

    class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F {
        class MFD {
            class MFD_Driver_Heading {
                topLeft = "MFD_1_TL";
                topRight = "MFD_1_TR";
                bottomLeft = "MFD_1_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84,0.86,0.84};
                alpha = 0.5;
                enableParallax = 0;
                font = "LCD14";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {0.61,0.62,0};
                    alpha = 1;
                    condition = "on";
                    class Driver_Heading {
                        type = "text";
                        source = "heading";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.5,0},1};
                        right[] = {{1,0},1};
                        down[] = {{0.5,0.81},1};
                    };
                };
            };
            class MFD_Commander_Display_Damage {
                topLeft = "mfd_com_TL";
                topRight = "mfd_com_TR";
                bottomLeft = "mfd_com_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0,0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Damage_Hull {
                        type = "text";
                        source = "static";
                        text = "HULL";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.04,0.18},1};
                        right[] = {{0.065,0.18},1};
                        down[] = {{0.04,0.44},1};
                    };
                    class Damage_Engine {
                        type = "text";
                        source = "static";
                        text = "ENG";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.11,0.18},1};
                        right[] = {{0.135,0.18},1};
                        down[] = {{0.11,0.44},1};
                    };
                    class Damage_Fuel {
                        type = "text";
                        source = "static";
                        text = "FUEL";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.178,0.18},1};
                        right[] = {{0.203,0.18},1};
                        down[] = {{0.178,0.44},1};
                    };
                    class Damage_Wheels {
                        type = "text";
                        source = "static";
                        text = "WHL";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.04,0.55},1};
                        right[] = {{0.065,0.55},1};
                        down[] = {{0.04,0.81},1};
                    };
                    class Damage_Gun {
                        type = "text";
                        source = "static";
                        text = "GUN";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.11,0.55},1};
                        right[] = {{0.135,0.55},1};
                        down[] = {{0.11,0.81},1};
                    };
                    class Damage_Turret {
                        type = "text";
                        source = "static";
                        text = "TRT";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.178,0.55},1};
                        right[] = {{0.203,0.55},1};
                        down[] = {{0.178,0.81},1};
                    };
                };
            };
            class MFD_Commander_Display {
                topLeft = "mfd_com_TL";
                topRight = "mfd_com_TR";
                bottomLeft = "mfd_com_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones {
                    class FuelScale {
                        type = "linear";
                        source = "fuel";
                        sourceIndex = 1;
                        sourceScale = 1.0;
                        min = 0;
                        max = 1;
                        minPos[] = {0,0};
                        maxPos[] = {-0.09,0};
                    };
                };
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Main_Gun {
                        type = "text";
                        source = "static";
                        text = "MAIN GUN";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.273,0.18},1};
                        right[] = {{0.298,0.18},1};
                        down[] = {{0.273,0.44},1};
                    };
                    class Main_Gun_Ammo_count {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 0;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.273,0.55},1};
                        right[] = {{0.298,0.55},1};
                        down[] = {{0.273,0.81},1};
                    };
                    class Main_Gun_Ammo_Type_text {
                        type = "text";
                        source = "static";
                        text = "TYPE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.385,0.18},1};
                        right[] = {{0.41,0.18},1};
                        down[] = {{0.385,0.44},1};
                    };
                    class Main_Gun_Ammo_Type {
                        type = "text";
                        source = "ammoFormat";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.385,0.55},1};
                        right[] = {{0.41,0.55},1};
                        down[] = {{0.385,0.81},1};
                    };
                    class Coax {
                        type = "text";
                        source = "static";
                        text = "COAX";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.498,0.18},1};
                        right[] = {{0.523,0.18},1};
                        down[] = {{0.498,0.44},1};
                    };
                    class Coax_Ammo_count {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 1;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.498,0.55},1};
                        right[] = {{0.523,0.55},1};
                        down[] = {{0.498,0.81},1};
                    };
                    class Azimuth {
                        type = "text";
                        source = "static";
                        text = "GUN AZIM";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.605,0.18},1};
                        right[] = {{0.63,0.18},1};
                        down[] = {{0.605,0.44},1};
                    };
                    class Azimuth_number {
                        type = "text";
                        source = "[x]turretworld";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.61,0.55},1};
                        right[] = {{0.635,0.55},1};
                        down[] = {{0.61,0.81},1};
                    };
                    class Smoke {
                        type = "text";
                        source = "static";
                        text = "SMOKE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.717,0.18},1};
                        right[] = {{0.742,0.18},1};
                        down[] = {{0.717,0.44},1};
                    };
                    class Fuel_background_white {
                        color[] = {0.2,0.2,0.2};
                        alpha = 0.1;
                        condition = "1";
                        class Background {
                            type = "polygon";
                            points[] = {{{{0.787,0.7},1},{{0.877,0.7},1},{{0.877,0.9},1},{{0.787,0.9},1}}};
                        };
                    };
                    class Fuel_background_green {
                        color[] = {0,0.7,0};
                        condition = "fuel>=0.5";
                        class Background {
                            type = "polygon";
                            points[] = {{{{0.787,0.7},1},{"FuelScale",{0.877,0.7},1},{"FuelScale",{0.877,0.9},1},{{0.787,0.9},1}}};
                        };
                    };
                    class Fuel_background_yellow {
                        color[] = {0.9,0.7,0};
                        condition = "fuel<0.5";
                        class Background {
                            type = "polygon";
                            points[] = {{{{0.787,0.7},1},{"FuelScale",{0.877,0.7},1},{"FuelScale",{0.877,0.9},1},{{0.787,0.9},1}}};
                        };
                    };
                    class Fuel_background_red {
                        color[] = {0.7,0,0};
                        condition = "fuel<0.3";
                        class Background {
                            type = "polygon";
                            points[] = {{{{0.787,0.7},1},{"FuelScale",{0.877,0.7},1},{"FuelScale",{0.877,0.9},1},{{0.787,0.9},1}}};
                        };
                    };
                    class Fuel {
                        type = "text";
                        source = "static";
                        text = "FUEL";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.83,0.18},1};
                        right[] = {{0.855,0.18},1};
                        down[] = {{0.83,0.44},1};
                    };
                    class Fuel_number {
                        type = "text";
                        source = "fuel";
                        sourceScale = 100;
                        sourceLength = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.835,0.4},1};
                        right[] = {{0.86,0.4},1};
                        down[] = {{0.835,0.66},1};
                    };
                    class Fuel_percent_sign {
                        type = "text";
                        source = "static";
                        text = "%";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.845,0.4},1};
                        right[] = {{0.87,0.4},1};
                        down[] = {{0.845,0.66},1};
                    };
                };
            };
            class MFD_Commander_OnScreen {
                topLeft = "PIP_COM_TL";
                topRight = "PIP_COM_TR";
                bottomLeft = "PIP_COM_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0,0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Azimuth_number {
                        type = "text";
                        source = "[x]turretworld";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.22,0.435},1};
                        right[] = {{0.245,0.435},1};
                        down[] = {{0.22,0.472},1};
                    };
                    class Elevation_Text {
                        type = "text";
                        source = "static";
                        text = "E: ";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.2,0.28},1};
                        right[] = {{0.225,0.28},1};
                        down[] = {{0.2,0.317},1};
                    };
                    class Elevation_Number {
                        type = "text";
                        source = "[y]turretworld";
                        sourceScale = 1;
                        sourceLength = 4;
                        sourcePrecision = 1;
                        refreshRate = 0;
                        align = "center";
                        scale = 1;
                        pos[] = {{0.23,0.28},1};
                        right[] = {{0.255,0.28},1};
                        down[] = {{0.23,0.317},1};
                    };
                    class Lased_Range {
                        type = "text";
                        source = "laserDist";
                        sourceScale = 1;
                        sourceLength = 4;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.75,0.28},1};
                        right[] = {{0.775,0.28},1};
                        down[] = {{0.75,0.317},1};
                    };
                    class VisionMode_Text {
                        type = "text";
                        source = "static";
                        text = "WFOV";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.75,0.65},1};
                        right[] = {{0.775,0.65},1};
                        down[] = {{0.75,0.687},1};
                    };
                    class VisionMode_String {
                        type = "text";
                        source = "visionMode";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.825,0.65},1};
                        right[] = {{0.85,0.65},1};
                        down[] = {{0.825,0.687},1};
                    };
                };
            };
            class MFD_Commander_Display_MainTurret {
                topLeft = "mfd_com_TL";
                topRight = "mfd_com_TR";
                bottomLeft = "mfd_com_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0,0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Smoke_ammo {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 3;
                        sourceIndex = 0;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.72,0.55},1};
                        right[] = {{0.745,0.55},1};
                        down[] = {{0.72,0.81},1};
                    };
                };
            };
            class MFD_Gunner_Ready_To_Fire {
                topLeft = "mfd_gun_cli_TL";
                topRight = "mfd_gun_cli_TR";
                bottomLeft = "mfd_gun_cli_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0,0,0};
                alpha = 0.5;
                enableParallax = 0;
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {0,0,0};
                    alpha = 1;
                    condition = "1";
                    class Top_text {
                        type = "text";
                        source = "static";
                        text = "READY TO";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.45,0.05},1};
                        right[] = {{0.67,0.05},1};
                        down[] = {{0.45,0.55},1};
                    };
                    class Bottom_text {
                        type = "text";
                        source = "static";
                        text = "FIRE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.465,0.45},1};
                        right[] = {{0.685,0.45},1};
                        down[] = {{0.465,0.95},1};
                    };
                };
            };
            class MFD_Gunner_Display {
                topLeft = "mfd_gun_TL";
                topRight = "mfd_gun_TR";
                bottomLeft = "mfd_gun_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Main_armament {
                        type = "text";
                        source = "static";
                        text = "MAIN ARMAMENT";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,-0.003},1};
                        right[] = {{0.075,-0.003},1};
                        down[] = {{0.015,0.075},1};
                    };
                    class Machinegun {
                        type = "text";
                        source = "static";
                        text = "COAX MG";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.31},1};
                        right[] = {{0.075,0.31},1};
                        down[] = {{0.015,0.388},1};
                    };
                    class Main_armament_ammo_type {
                        type = "text";
                        source = "static";
                        text = "AMMO TYPE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.545,-0.003},1};
                        right[] = {{0.605,-0.003},1};
                        down[] = {{0.545,0.075},1};
                    };
                    class Lased_distance_elevation {
                        type = "text";
                        source = "static";
                        text = "LASED DIST";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.84},1};
                        right[] = {{0.069,0.84},1};
                        down[] = {{0.015,0.918},1};
                    };
                    class Azimut {
                        type = "text";
                        source = "static";
                        text = "AZIMUTH";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.915},1};
                        right[] = {{0.075,0.915},1};
                        down[] = {{0.015,0.993},1};
                    };
                    class Damage {
                        type = "text";
                        source = "static";
                        text = "DAMAGE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.39},1};
                        right[] = {{0.075,0.39},1};
                        down[] = {{0.015,0.468},1};
                    };
                    class Heading {
                        type = "text";
                        source = "[x]turretworld";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 0.2;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.34,0.915},1};
                        right[] = {{0.4,0.915},1};
                        down[] = {{0.34,0.993},1};
                    };
                    class Lased_Range {
                        type = "text";
                        source = "laserDist";
                        sourceScale = 1;
                        sourceLength = 4;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.335,0.84},1};
                        right[] = {{0.395,0.84},1};
                        down[] = {{0.335,0.918},1};
                    };
                };
            };
            class MFD_Gunner_Main_Armament_Ammo_Type {
                topLeft = "mfd_gun_TL";
                topRight = "mfd_gun_TR";
                bottomLeft = "mfd_gun_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84,0.86,0.84};
                alpha = 0.5;
                turret[] = {0};
                enableParallax = 0;
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Gunner_AmmoType {
                        type = "text";
                        source = "ammoFormat";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.56,0.09},1};
                        right[] = {{0.62,0.09},1};
                        down[] = {{0.56,0.168},1};
                    };
                };
            };
            class MFD_Gunner_Coax_Ammo {
                topLeft = "mfd_gun_TL";
                topRight = "mfd_gun_TR";
                bottomLeft = "mfd_gun_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84,0.86,0.84};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Gunner_Text_1 {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        sourceIndex = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.38,0.31},1};
                        right[] = {{0.43,0.31},1};
                        down[] = {{0.38,0.388},1};
                    };
                };
            };
            class MFD_Gunner_AmmoIndicator_Main_Armament {
                topLeft = "mfd_gun_TL";
                topRight = "mfd_gun_TR";
                bottomLeft = "mfd_gun_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84,0.86,0.84};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0};
                font = "EtelkaMonospacePro";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Main_Armament_Ammo_Type_1 {
                        type = "text";
                        source = "static";
                        text = "MP-T";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.065},1};
                        right[] = {{0.075,0.065},1};
                        down[] = {{0.015,0.143},1};
                    };
                    class Gunner_Text_1 {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 0;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.38,0.065},1};
                        right[] = {{0.44,0.065},1};
                        down[] = {{0.38,0.143},1};
                    };
                    class Main_Armament_Ammo_Type_2 {
                        type = "text";
                        source = "static";
                        text = "APFSDS-T";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.125},1};
                        right[] = {{0.065,0.125},1};
                        down[] = {{0.015,0.203},1};
                    };
                    class Gunner_Text_2 {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 0;
                        sourcePrecision = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.38,0.125},1};
                        right[] = {{0.44,0.125},1};
                        down[] = {{0.38,0.203},1};
                    };
                    class Main_Armament_Ammo_Type_3 {
                        type = "text";
                        source = "static";
                        text = "AT MISSILE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.185},1};
                        right[] = {{0.065,0.185},1};
                        down[] = {{0.015,0.263},1};
                    };
                    class Gunner_Text_3 {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 2;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.38,0.185},1};
                        right[] = {{0.43,0.185},1};
                        down[] = {{0.38,0.263},1};
                    };
                };
            };
        };
        memoryPointDriverOptics = "driverview";
        driverInfoPanelCameraPos = "driverview_old";
        viewDriverInExternal = 1;
        viewDriverShadowAmb = 0.5;
        viewDriverShadowDiff = 0.05;
        driverForceOptics = 0;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {};
                };
            };
        };
        class Components;
    };

    class lxim_outlaw_base_F: I_APC_Wheeled_03_cannon_F {
        scope = 1;
        scopeCurator = 1;
        displayName = "M20";
        author = QAUTHOR;
        picture = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
        side = 1;
        armorStructural = 7;
        armor = 550;
        ace_vehicle_damage_hullFireProb = 0.5;
        ace_hunterkiller = 1;
        radarType = 2;
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        receiveRemoteTargets = 1;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class DataLinkSensorComponent: SensorTemplateDataLink{};
                };
            };
        };
        maxSpeed = 125;
        maximumLoad = 4000;
        enginePower = 390;
        terrainCoef = 1;
        vehicleClass = "APCs""";
        textureList[] = {"Blu",1};
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","CamoNet","CamoSlat"};
        class EventHandlers;
        class TextureSources {
            class Blu_green {
                displayName = "M20";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert {
                displayName = "M20 Desert";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_d.paa),QPATHTOF(data\outlaw_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v11a {
                displayName = "M20 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v11b {
                displayName = "M20 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_v12a {
                displayName = "M20 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v12b {
                displayName = "M20 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_v11a {
                displayName = "M20 Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_v11b {
                displayName = "M20 Desert 1/1/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_v12a {
                displayName = "M20 Desert 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_v12b {
                displayName = "M20 Desert 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_rino {
                displayName = "M20 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_ext_g.paa),QPATHTOF(data\rino_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_rino {
                displayName = "M20 Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_01_ext_d.paa),QPATHTOF(data\rino_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
            factions[] = {QUOTE(PREFIX)};
            };
        };
        class AnimationSources {
            class BreakWater {
                source = "user";
                initPhase = 0;
                animPeriod = 2;
            };
            class Missiles_revolving {
                source = "revolving";
                weapon = "missiles_titan";
            };
            class Missiles_reloadMagazine: Missiles_revolving {
                source = "reloadMagazine";
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = "autocannon_30mm_CTWS";
            };
            class muzzle_hide {
                source = "reload";
                weapon = "autocannon_30mm_CTWS";
            };
            class HitEngine_src {
                source = "Hit";
                hitpoint = "HitEngine";
                raw = 1;
            };
            class HitFuel_src {
                source = "Hit";
                hitpoint = "HitFuel";
                raw = 1;
            };
            class HitHull_src {
                source = "Hit";
                hitpoint = "HitHull";
                raw = 1;
            };
            class HitMainGun_src {
                source = "Hit";
                hitpoint = "HitGun";
                raw = 1;
            };
            class HitTurret_src {
                source = "Hit";
                hitpoint = "HitTurret";
                raw = 1;
            };
            class HitComTurret_src {
                source = "Hit";
                hitpoint = "HitComTurret";
                raw = 1;
            };
            class HitSLAT_Left_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_1";
                raw = 1;
            };
            class HitSLAT_Left_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_2";
                raw = 1;
            };
            class HitSLAT_Left_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_3";
                raw = 1;
            };
            class HitSLAT_Right_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_1";
                raw = 1;
            };
            class HitSLAT_Right_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_2";
                raw = 1;
            };
            class HitSLAT_Right_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_3";
                raw = 1;
            };
            class HitSLAT_back_src {
                source = "Hit";
                hitpoint = "HitSLAT_back";
                raw = 1;
            };
            class HitSLAT_front_src {
                source = "Hit";
                hitpoint = "HitSLAT_front";
                raw = 1;
            };
            class showCamonetHull {
                displayName = "$STR_A3_animationsources_showcamonethull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags {
                displayName = "$STR_A3_animationsources_showbagshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags2 {
                displayName = "$STR_A3_animationsources_showbagsturret0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showTools {
                displayName = "$STR_A3_animationsources_showtoolshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showSLATHull {
                displayName = "$STR_A3_animationsources_showslathull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"lxim_autocannon_40mm_CTWS","ACE_LMG_coax_ext_MAG58","missiles_titan"};
                magazines[] = {"lxim_60Rnd_40mm_MP_shells_Tracer_Red","lxim_60Rnd_40mm_HEI_shells_Tracer_Red","lxim_60Rnd_40mm_APFSDS_shells_Tracer_Red","lxim_60Rnd_40mm_APFSDS_shells_Tracer_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","2Rnd_GAT_missiles","2Rnd_GAT_missiles"};  
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {"SmokeLauncher"};
                        magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
                    };
                };
            };
        };
        class HitPoints: HitPoints {
            class HitBody {
                armor = 1.8;  // Increased body armor
                explosionShielding = 1.9;  // Increased explosion shielding
                material = -1;
                name = "karoserie";
                passThrough = 0.6;  // Reduced passthrough
                visual = "zbytek";
            };
            class HitEngine: HitEngine {
                armor = 1.8;  // Increased engine armor
                armorComponent = "hit_engine";
                explosionShielding = 0.6;  // Increased explosion shielding
                material = -1;
                minimalHit = 0.1;
                name = "hit_engine_point";
                passThrough = 0.05;  // Reduced passthrough
                radius = 0.2;
                visual = "-";
            };
            class HitFuel: HitFuel {
                armor = 1.2;  // Increased fuel tank armor
                armorComponent = "hit_fuel";
                explosionShielding = 0.6;  // Increased explosion shielding
                material = -1;
                minimalHit = 0.1;
                name = "hit_fuel_point";
                passThrough = 0.3;  // Reduced passthrough
                radius = 0.2;
                visual = "-";
            };
            class HitHull: HitHull {
                armor = 3.0;  // Increased hull armor
                armorComponent = "hit_hull";
                explosionShielding = 0.2;
                material = -1;
                minimalHit = 0.1;
                name = "hit_hull_point";
                passThrough = 0.6;  // Reduced passthrough
                radius = 0.2;
                visual = "zbytek";
            };
        };
    };

    class lxim_outlaw_eng_base_F: I_APC_Wheeled_03_cannon_F {
        scope = 1;
        scopeCurator = 1;
        displayName = "M20";
        author = QAUTHOR;
        picture = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
        side = 1;
        armorStructural = 7;
        armor = 550;
        ace_vehicle_damage_hullFireProb = 0.5;
        ace_hunterkiller = 1;
        maxSpeed = 125;
        maximumLoad = 4000;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class DataLinkSensorComponent: SensorTemplateDataLink{};
                };
            };
        };
        vehicleClass = "APCs""";
        textureList[] = {"Blu",1};
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","CamoNet","CamoSlat"};
        class TextureSources {
            class Blu_green {
                displayName = "M20";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert {
                displayName = "M20 Desert";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_d.paa),QPATHTOF(data\outlaw_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v11a {
                displayName = "M20 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v11b {
                displayName = "M20 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_v12a {
                displayName = "M20 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v12b {
                displayName = "M20 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_v11a {
                displayName = "M20 Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_v11b {
                displayName = "M20 Desert 1/1/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_v12a {
                displayName = "M20 Desert 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_v12b {
                displayName = "M20 Desert 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_rino {
                displayName = "M20 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_ext_g.paa),QPATHTOF(data\rino_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_rino {
                displayName = "M20 Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_01_ext_d.paa),QPATHTOF(data\rino_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
        };
        class AnimationSources {
            class BreakWater {
                source = "user";
                initPhase = 0;
                animPeriod = 2;
            };
            class Missiles_revolving {
                source = "revolving";
                weapon = "missiles_titan";
            };
            class Missiles_reloadMagazine: Missiles_revolving {
                source = "reloadMagazine";
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = "autocannon_30mm_CTWS";
            };
            class muzzle_hide {
                source = "reload";
                weapon = "autocannon_30mm_CTWS";
            };
            class HitEngine_src {
                source = "Hit";
                hitpoint = "HitEngine";
                raw = 1;
            };
            class HitFuel_src {
                source = "Hit";
                hitpoint = "HitFuel";
                raw = 1;
            };
            class HitHull_src {
                source = "Hit";
                hitpoint = "HitHull";
                raw = 1;
            };
            class HitMainGun_src {
                source = "Hit";
                hitpoint = "HitGun";
                raw = 1;
            };
            class HitTurret_src {
                source = "Hit";
                hitpoint = "HitTurret";
                raw = 1;
            };
            class HitComTurret_src {
                source = "Hit";
                hitpoint = "HitComTurret";
                raw = 1;
            };
            class HitSLAT_Left_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_1";
                raw = 1;
            };
            class HitSLAT_Left_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_2";
                raw = 1;
            };
            class HitSLAT_Left_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_3";
                raw = 1;
            };
            class HitSLAT_Right_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_1";
                raw = 1;
            };
            class HitSLAT_Right_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_2";
                raw = 1;
            };
            class HitSLAT_Right_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_3";
                raw = 1;
            };
            class HitSLAT_back_src {
                source = "Hit";
                hitpoint = "HitSLAT_back";
                raw = 1;
            };
            class HitSLAT_front_src {
                source = "Hit";
                hitpoint = "HitSLAT_front";
                raw = 1;
            };
            class showCamonetHull {
                displayName = "$STR_A3_animationsources_showcamonethull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags {
                displayName = "$STR_A3_animationsources_showbagshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags2 {
                displayName = "$STR_A3_animationsources_showbagsturret0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showTools {
                displayName = "$STR_A3_animationsources_showtoolshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showSLATHull {
                displayName = "$STR_A3_animationsources_showslathull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"lxim_autocannon_40mm_ENG","ACE_LMG_coax_ext_MAG58","missiles_titan_eng_2Rnd"};
                magazines[] = {"lxim_200Rnd_40mm_G_belt","lxim_200Rnd_40mm_G_belt","lxim_200Rnd_40mm_G_belt","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","2Rnd_Titan_long_missiles_ENG","2Rnd_Titan_long_missiles_ENG"};
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {"SmokeLauncher"};
                        magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
                    };
                };
            };
        };
        class HitPoints: HitPoints {
            class HitBody {
                armor = 1.8;  // Increased body armor
                explosionShielding = 1.9;  // Increased explosion shielding
                material = -1;
                name = "karoserie";
                passThrough = 0.6;  // Reduced passthrough
                visual = "zbytek";
            };
            class HitEngine: HitEngine {
                armor = 1.8;  // Increased engine armor
                armorComponent = "hit_engine";
                explosionShielding = 0.6;  // Increased explosion shielding
                material = -1;
                minimalHit = 0.1;
                name = "hit_engine_point";
                passThrough = 0.05;  // Reduced passthrough
                radius = 0.2;
                visual = "-";
            };
            class HitFuel: HitFuel {
                armor = 1.2;  // Increased fuel tank armor
                armorComponent = "hit_fuel";
                explosionShielding = 0.6;  // Increased explosion shielding
                material = -1;
                minimalHit = 0.1;
                name = "hit_fuel_point";
                passThrough = 0.3;  // Reduced passthrough
                radius = 0.2;
                visual = "-";
            };
            class HitHull: HitHull {
                armor = 3.0;  // Increased hull armor
                armorComponent = "hit_hull";
                explosionShielding = 0.2;
                material = -1;
                minimalHit = 0.1;
                name = "hit_hull_point";
                passThrough = 0.6;  // Reduced passthrough
                radius = 0.2;
                visual = "zbytek";
            };
        };
    };

    class lxim_outlaw_AA_base_F: I_APC_Wheeled_03_cannon_F {
        scope = 1;
        scopeCurator = 1;
        displayName = "M20";
        author = QAUTHOR;
        picture = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
        side = 1;
        armorStructural = 7;
        armor = 550;
        ace_vehicle_damage_hullFireProb = 0.5;
        ace_hunterkiller = 1;
        radarType = 2;
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        receiveRemoteTargets = 1;
        maxSpeed = 125;
        maximumLoad = 4000;
        enginePower = 390;
        terrainCoef = 1;
        vehicleClass = "APCs""";
        textureList[] = {"Blu",1};
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 9000;
                            maxRange = 9000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 6000;
                            maxRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        typeRecognitionDistance = 6000;
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 100;
                        aimDown = -45;
                        maxTrackableSpeed = 694.444;
                    };
                    class DataLinkSensorComponent: SensorTemplateDataLink{};
                };
            };
        };
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","CamoNet","CamoSlat"};
        class EventHandlers;
        class TextureSources {
            class Blu_green {
                displayName = "M20";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert {
                displayName = "M20 Desert";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_d.paa),QPATHTOF(data\outlaw_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v11a {
                displayName = "M20 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v11b {
                displayName = "M20 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_v12a {
                displayName = "M20 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_v12b {
                displayName = "M20 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_v11a {
                displayName = "M20 Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_v11b {
                displayName = "M20 Desert 1/1/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_v12a {
                displayName = "M20 Desert 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_v12b {
                displayName = "M20 Desert 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_rino {
                displayName = "M20 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_ext_g.paa),QPATHTOF(data\rino_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_rino {
                displayName = "M20 Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_01_ext_d.paa),QPATHTOF(data\rino_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
        };
        class AnimationSources {
            class BreakWater {
                source = "user";
                initPhase = 0;
                animPeriod = 2;
            };
            class Missiles_revolving {
                source = "revolving";
                weapon = "missiles_titan";
            };
            class Missiles_reloadMagazine: Missiles_revolving {
                source = "reloadMagazine";
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = "autocannon_30mm_CTWS";
            };
            class muzzle_hide {
                source = "reload";
                weapon = "autocannon_30mm_CTWS";
            };
            class HitEngine_src {
                source = "Hit";
                hitpoint = "HitEngine";
                raw = 1;
            };
            class HitFuel_src {
                source = "Hit";
                hitpoint = "HitFuel";
                raw = 1;
            };
            class HitHull_src {
                source = "Hit";
                hitpoint = "HitHull";
                raw = 1;
            };
            class HitMainGun_src {
                source = "Hit";
                hitpoint = "HitGun";
                raw = 1;
            };
            class HitTurret_src {
                source = "Hit";
                hitpoint = "HitTurret";
                raw = 1;
            };
            class HitComTurret_src {
                source = "Hit";
                hitpoint = "HitComTurret";
                raw = 1;
            };
            class HitSLAT_Left_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_1";
                raw = 1;
            };
            class HitSLAT_Left_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_2";
                raw = 1;
            };
            class HitSLAT_Left_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_3";
                raw = 1;
            };
            class HitSLAT_Right_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_1";
                raw = 1;
            };
            class HitSLAT_Right_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_2";
                raw = 1;
            };
            class HitSLAT_Right_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_3";
                raw = 1;
            };
            class HitSLAT_back_src {
                source = "Hit";
                hitpoint = "HitSLAT_back";
                raw = 1;
            };
            class HitSLAT_front_src {
                source = "Hit";
                hitpoint = "HitSLAT_front";
                raw = 1;
            };
            class showCamonetHull {
                displayName = "$STR_A3_animationsources_showcamonethull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags {
                displayName = "$STR_A3_animationsources_showbagshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags2 {
                displayName = "$STR_A3_animationsources_showbagsturret0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showTools {
                displayName = "$STR_A3_animationsources_showtoolshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showSLATHull {
                displayName = "$STR_A3_animationsources_showslathull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"lxim_autocannon_40mm_GDF","ACE_LMG_coax_ext_MAG58","missiles_titan_aa_2Rnd"};
                magazines[] = {"lxim_280Rnd_40mm_AA_shells_Tracer_Red","lxim_280Rnd_40mm_AA_shells_Tracer_Red","lxim_280Rnd_40mm_AA_shells_Tracer_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","2Rnd_Titan_long_missiles_AA","2Rnd_Titan_long_missiles_AA","2Rnd_Titan_long_missiles_AA"};
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {"SmokeLauncher"};
                        magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
                    };
                };
            };
        };
        class HitPoints: HitPoints {
            class HitBody {
                armor = 1.8;  // Increased body armor
                explosionShielding = 1.9;  // Increased explosion shielding
                material = -1;
                name = "karoserie";
                passThrough = 0.6;  // Reduced passthrough
                visual = "zbytek";
            };
            class HitEngine: HitEngine {
                armor = 1.8;  // Increased engine armor
                armorComponent = "hit_engine";
                explosionShielding = 0.6;  // Increased explosion shielding
                material = -1;
                minimalHit = 0.1;
                name = "hit_engine_point";
                passThrough = 0.05;  // Reduced passthrough
                radius = 0.2;
                visual = "-";
            };
            class HitFuel: HitFuel {
                armor = 1.2;  // Increased fuel tank armor
                armorComponent = "hit_fuel";
                explosionShielding = 0.6;  // Increased explosion shielding
                material = -1;
                minimalHit = 0.1;
                name = "hit_fuel_point";
                passThrough = 0.3;  // Reduced passthrough
                radius = 0.2;
                visual = "-";
            };
            class HitHull: HitHull {
                armor = 3.0;  // Increased hull armor
                armorComponent = "hit_hull";
                explosionShielding = 0.2;
                material = -1;
                minimalHit = 0.1;
                name = "hit_hull_point";
                passThrough = 0.6;  // Reduced passthrough
                radius = 0.2;
                visual = "zbytek";
            };
        };
    };

    class lxim_outlaw_unarmed_base_F: lxim_outlaw_base_F {
        supplyRadius = 10;
        attendant = 1;
        forceInGarage = 1;
        scope = 0;
        scopeCurator = 0;
        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
        };
        textureList[] = {"Blu",1};
        class TextureSources {
            class Blu_Woodland {
                displayName = "M20 MEV Green";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\med_01_ext_g.paa),QPATHTOF(data\med_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert {
                displayName = "M20 MEV Desert";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\med_01_ext_d.paa),QPATHTOF(data\med_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
        };
        class AnimationSources {
            class BreakWater {
                source = "user";
                initPhase = 0;
                animPeriod = 2;
            };
            class Missiles_revolving {
                source = "revolving";
                weapon = "missiles_titan";
            };
            class Missiles_reloadMagazine: Missiles_revolving {
                source = "reloadMagazine";
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = "autocannon_30mm_CTWS";
            };
            class muzzle_hide {
                source = "reload";
                weapon = "autocannon_30mm_CTWS";
            };
            class HitEngine_src {
                source = "Hit";
                hitpoint = "HitEngine";
                raw = 1;
            };
            class HitFuel_src {
                source = "Hit";
                hitpoint = "HitFuel";
                raw = 1;
            };
            class HitHull_src {
                source = "Hit";
                hitpoint = "HitHull";
                raw = 1;
            };
            class HitMainGun_src {
                source = "Hit";
                hitpoint = "HitGun";
                raw = 1;
            };
            class HitTurret_src {
                source = "Hit";
                hitpoint = "HitTurret";
                raw = 1;
            };
            class HitComTurret_src {
                source = "Hit";
                hitpoint = "HitComTurret";
                raw = 1;
            };
            class HitSLAT_Left_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_1";
                raw = 1;
            };
            class HitSLAT_Left_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_2";
                raw = 1;
            };
            class HitSLAT_Left_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_3";
                raw = 1;
            };
            class HitSLAT_Right_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_1";
                raw = 1;
            };
            class HitSLAT_Right_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_2";
                raw = 1;
            };
            class HitSLAT_Right_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_3";
                raw = 1;
            };
            class HitSLAT_back_src {
                source = "Hit";
                hitpoint = "HitSLAT_back";
                raw = 1;
            };
            class HitSLAT_front_src {
                source = "Hit";
                hitpoint = "HitSLAT_front";
                raw = 1;
            };
            class showCamonetHull {
                displayName = "$STR_A3_animationsources_showcamonethull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags {
                displayName = "$STR_A3_animationsources_showbagshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags2 {
                displayName = "$STR_A3_animationsources_showbagsturret0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showTools {
                displayName = "$STR_A3_animationsources_showtoolshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showSLATHull {
                displayName = "$STR_A3_animationsources_showslathull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
        };
        driverCanSee = "4+8+2+32+16";
        gunnerCanSee = "4+2+8+32+16";
        weapons[] = {"TruckHorn","SmokeLauncher"};
        magazines[] = {"SmokeLauncherMag"};
        class Turrets {};
        threat[] = {0,0,0};
        class HitPoints: HitPoints {
            class HitBody {
                armor = 1.8;  // Increased body armor
                explosionShielding = 1.9;  // Increased explosion shielding
                material = -1;
                name = "karoserie";
                passThrough = 0.6;  // Reduced passthrough
                visual = "zbytek";
            };
            class HitEngine: HitEngine {
                armor = 1.8;  // Increased engine armor
                armorComponent = "hit_engine";
                explosionShielding = 0.6;  // Increased explosion shielding
                material = -1;
                minimalHit = 0.1;
                name = "hit_engine_point";
                passThrough = 0.05;  // Reduced passthrough
                radius = 0.2;
                visual = "-";
            };
            class HitFuel: HitFuel {
                armor = 1.2;  // Increased fuel tank armor
                armorComponent = "hit_fuel";
                explosionShielding = 0.6;  // Increased explosion shielding
                material = -1;
                minimalHit = 0.1;
                name = "hit_fuel_point";
                passThrough = 0.3;  // Reduced passthrough
                radius = 0.2;
                visual = "-";
            };
            class HitHull: HitHull {
                armor = 3.0;  // Increased hull armor
                armorComponent = "hit_hull";
                explosionShielding = 0.2;
                material = -1;
                minimalHit = 0.1;
                name = "hit_hull_point";
                passThrough = 0.6;  // Reduced passthrough
                radius = 0.2;
                visual = "zbytek";
            };
        };
    };

    class lxim_outlaw_Unarmed_g: lxim_outlaw_unarmed_base_F {
        displayName = "M20-MEV Green";
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 1;
        crew = "B_crew_F";
        class MyAmbulance {
            attendant = 1;
        };
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\med_01_ext_g.paa),QPATHTOF(data\med_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class lxim_outlaw_Unarmed_d: lxim_outlaw_unarmed_base_F {
        displayName = "M20-MEV Desert";
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        class MyAmbulance {
            attendant = 1;
        };
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_desert";
        hiddenSelectionsTextures[] = {QPATHTOF(data\med_01_ext_d.paa),QPATHTOF(data\med_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };

    class lxim_outlaw_repair_g: lxim_outlaw_unarmed_base_F {
        displayName = "M20-SUP Green";
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 1;
        transportAmmo = 0;
        ace_refuel_fuelCargo = 1000;
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 1200;
        transportSoldier = 4;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class lxim_outlaw_repair_d: lxim_outlaw_unarmed_base_F {
        displayName = "M20-SUP Desert";
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        transportAmmo = 0;
        ace_refuel_fuelCargo = 1000;
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 1200;
        transportSoldier = 4;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_desert";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_d.paa),QPATHTOF(data\outlaw_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };

    class lxim_outlaw_g: lxim_outlaw_base_F {
        displayName = "M20";
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class lxim_outlaw_d: lxim_outlaw_base_F {
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_desert";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_d.paa),QPATHTOF(data\outlaw_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };

    class lxim_outlaw_AA_g: lxim_outlaw_AA_base_F {
        displayName = "M20-AA";
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g_aa.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class lxim_outlaw_AA_d: lxim_outlaw_AA_base_F {
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_desert";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_d.paa),QPATHTOF(data\outlaw_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d_aa.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };

    class lxim_outlaw_g_V26: lxim_outlaw_g {
        displayName = "M20 Thunder 2/6";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_wardaddy_g.paa),QPATHTOF(data\outlaw_02_ext_wardaddy_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_g_V11: lxim_outlaw_g {
        displayName = "M20 Thunder 2/1";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\thunder_2_1_hull_g.paa),QPATHTOF(data\thunder_2_1_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_g_V12: lxim_outlaw_g {
        displayName = "M20 Thunder 2/2";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\thunder_2_2_hull_g.paa),QPATHTOF(data\thunder_2_2_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_g_Vhq: lxim_outlaw_g {
        displayName = "M20 HQ";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_hq_01_ext_g.paa),QPATHTOF(data\outlaw_hq_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_AA_g_V26: lxim_outlaw_AA_g {
        displayName = "M20-AA Thunder 2/6";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_wardaddy_g.paa),QPATHTOF(data\outlaw_02_ext_wardaddy_g.paa),QPATHTOF(data\outlaw_turret_g_aa.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_AA_g_V11: lxim_outlaw_AA_g {
        displayName = "M20-AA Thunder 2/1";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\thunder_2_1_hull_g.paa),QPATHTOF(data\thunder_2_1_ext_g.paa),QPATHTOF(data\outlaw_turret_g_aa.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_AA_g_V12: lxim_outlaw_AA_g {
        displayName = "M20-AA thunder 2/2";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\thunder_2_2_hull_g.paa),QPATHTOF(data\thunder_2_2_ext_g.paa),QPATHTOF(data\outlaw_turret_g_aa.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };
    class lxim_outlaw_AA_g_Vhq: lxim_outlaw_AA_g {
        displayName = "M20-AA HQ";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_hq_01_ext_g.paa),QPATHTOF(data\outlaw_hq_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g_aa.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_g_rino: lxim_outlaw_eng_base_F {
        displayName = "M20-ENG Rino";
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_green";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\rino_01_ext_g.paa),QPATHTOF(data\rino_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g_eng.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};        
    };

    class lxim_outlaw_d_V26: lxim_outlaw_d {
        displayName = "M20 Desert Thuinder 2/6";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_wardaddy_d.paa),QPATHTOF(data\outlaw_02_ext_wardaddy_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_d_V11: lxim_outlaw_d {
        displayName = "M20 Desert Thuinder 2/1";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\thunder_2_1_hull_d.paa),QPATHTOF(data\thunder_2_1_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_d_V12: lxim_outlaw_d {
        displayName = "M20 Desert Thunder 2/2";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\thunder_2_2_hull_d.paa),QPATHTOF(data\thunder_2_2_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        forceInGarage = 0;
    };
    class lxim_outlaw_d_Vhq: lxim_outlaw_d {
        displayName = "M20 Desert HQ";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_hq_01_ext_d.paa),QPATHTOF(data\outlaw_hq_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_AA_d_V26: lxim_outlaw_AA_d {
        displayName = "M20-AA Desert Thunder 2/6";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_wardaddy_d.paa),QPATHTOF(data\outlaw_02_ext_wardaddy_d.paa),QPATHTOF(data\outlaw_turret_d_aa.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_AA_d_V11: lxim_outlaw_AA_d {
        displayName = "M20-AA Desert Thunder 2/1";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\thunder_2_1_hull_d.paa),QPATHTOF(data\thunder_2_1_ext_d.paa),QPATHTOF(data\outlaw_turret_d_aa.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_AA_d_V12: lxim_outlaw_AA_d {
        displayName = "M20-AA Desert Thunder 2/2";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\thunder_2_2_hull_d.paa),QPATHTOF(data\thunder_2_2_ext_d.paa),QPATHTOF(data\outlaw_turret_d_aa.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        forceInGarage = 0;
    };
    class lxim_outlaw_AA_d_Vhq: lxim_outlaw_AA_d {
        displayName = "M20-AA Desert HQ";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_hq_01_ext_d.paa),QPATHTOF(data\outlaw_hq_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d_aa.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
        forceInGarage = 0;
    };

    class lxim_outlaw_d_rino: lxim_outlaw_eng_base_F {
        displayName = "M20-ENG Desert Rino";
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "LXIM_EdSubcat_vehicles_desert";
        author = QAUTHOR;
        hiddenSelectionsTextures[] = {QPATHTOF(data\rino_01_ext_d.paa),QPATHTOF(data\rino_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d_eng.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
    };

    //matv
    class B_MRAP_01_F;
    class B_T_MRAP_01_F;
    class B_MRAP_01_gmg_F;
    class B_MRAP_01_hmg_F;
    class B_T_MRAP_01_gmg_F;
    class B_T_MRAP_01_hmg_F;
    /// sand
    class lxim_B_MRAP_D: B_MRAP_01_F {
        displayName = "M-ATV [Sand]";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        crewCrashProtection = 0.8;
        crewExplosionProtection = .5;
        armor = 275;
        threat[]={0,0,0};
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\MRAP_01_base_61D_CO.paa),
            QUOTE(\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa)
        };
    };
    class lxim_B_MRAP_D_gmg: B_MRAP_01_gmg_F {
        displayName = "M-ATV GMG [Sand]";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        crewCrashProtection = 0.8;
        crewExplosionProtection = .5;
        armor = 275;
        threat[]={0,0,0};
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\MRAP_01_base_61D_CO.paa),
            QUOTE(\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa),
            QPATHTOF(data\Turret_CO_D.paa),
        };
    };
    class lxim_B_MRAP_D_hmg: B_MRAP_01_hmg_F {
        displayName = "M-ATV HMG [Sand]";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        crewCrashProtection = 0.8;
        crewExplosionProtection = .5;
        armor = 275;
        threat[]={0,0,0};
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\MRAP_01_base_61D_CO.paa),
            QUOTE(\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa),
            QPATHTOF(data\Turret_CO_D.paa),
        };
    };
    class lxim_B_MRAP_G: B_T_MRAP_01_F {
        displayName = "M-ATV [Green]";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        crewCrashProtection = 0.8;
        crewExplosionProtection = .5;
        armor = 275;
        threat[]={0,0,0};
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\MRAP_01_base_61G_CO.paa),
            QUOTE(\A3\soft_F_Exp\MRAP_01\data\MRAP_01_adds_olive_CO.paa)
        };
    };
    class lxim_B_MRAP_G_gmg: B_T_MRAP_01_gmg_F {
        displayName = "M-ATV GMG [Green]";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        crewCrashProtection = 0.8;
        crewExplosionProtection = .5;
        armor = 275;
        threat[]={0,0,0};
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\MRAP_01_base_61G_CO.paa),
            QUOTE(\A3\soft_F_Exp\MRAP_01\data\MRAP_01_adds_olive_CO.paa),
            QPATHTOF(data\Turret_CO_G.paa),
        };
    };
    class lxim_B_MRAP_G_hmg: B_T_MRAP_01_hmg_F {
        displayName = "M-ATV HMG [Green]";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        crewCrashProtection = 0.8;
        crewExplosionProtection = .5;
        armor = 275;
        threat[]={0,0,0};
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\MRAP_01_base_61G_CO.paa),
            QUOTE(\A3\soft_F_Exp\MRAP_01\data\MRAP_01_adds_olive_CO.paa),
            QPATHTOF(data\Turret_CO_G.paa),
        };
    };


    
    class B_AFV_Wheeled_01_up_cannon_F;
    class B_AFV_Wheeled_01_cannon_F;

    class LXIM_B_RHINO_UP_base : B_AFV_Wheeled_01_up_cannon_F {
        displayName="MGS";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        side = 1;
        scope= 1;
        scopeCurator=2;
        class TextureSources {
            class LXIM_GREEN {
                textures[]={
                    QPATHTOF(data\afv_wheeled_01_ext1_wardaddy_g_co.paa),
                    QPATHTOF(data\afv_wheeled_01_ext2_wardaddy_g_co.paa),
                    "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
                    "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa",
                    "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_CO.paa",
                    "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                    "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"
                };
                factions[]={"BLU_F"};
            };
            class LXIM_SAND {
                textures[]={
                    QPATHTOF(data\afv_wheeled_01_ext1_wardaddy_d_co.paa),
                    QPATHTOF(data\afv_wheeled_01_ext2_wardaddy_d_co.paa),
                    "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa",
                    "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa",
                    "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_sand_CO.paa",
                    "a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                    "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"
                    };
                factions[]={"BLU_F"};
            };
        };
    };

    class LXIM_B_RHINO_base : B_AFV_Wheeled_01_cannon_F {
        displayName="MGS";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        side = 1;
        scope= 1;
        scopeCurator=2;
        class TextureSources {
            class LXIM_GREEN {
                textures[]={
                    QPATHTOF(data\afv_wheeled_01_ext1_wardaddy_g_co.paa),
                    QPATHTOF(data\afv_wheeled_01_ext2_wardaddy_g_co.paa),
                    "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
                    "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa",
                    "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_CO.paa",
                    "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                    "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"
                };
                factions[]={"BLU_F"};
            };
            class LXIM_SAND {
                textures[]={
                    QPATHTOF(data\afv_wheeled_01_ext1_wardaddy_d_co.paa),
                    QPATHTOF(data\afv_wheeled_01_ext2_wardaddy_d_co.paa),
                    "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa",
                    "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa",
                    "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_sand_CO.paa",
                    "a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                    "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"
                    };
                factions[]={"BLU_F"};
            };
        };
    };


    class LXIM_B_RHINO_UP_26_G : LXIM_B_RHINO_UP_base {
        displayName="MGS UP 2/6";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        side = 1;
        scope= 2;
        scopeCurator=2;
        editorSubcategory = "LXIM_EdSubcat_mgs_green";
        hiddenSelectionsTextures[]={
            QPATHTOF(data\afv_wheeled_01_ext1_wardaddy_g_co.paa),
            QPATHTOF(data\afv_wheeled_01_ext2_wardaddy_g_co.paa),
            "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
            "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa",
            "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_CO.paa",
            "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
            "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"
            };
    };
    class LXIM_B_RHINO_UP_26_D : LXIM_B_RHINO_UP_base {
        displayName="MGS UP 2/6 Sand";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        side = 1;
        scope= 2;
        scopeCurator=2;
        editorSubcategory = "LXIM_EdSubcat_mgs_desert";
        hiddenSelectionsTextures[]={
            QPATHTOF(data\afv_wheeled_01_ext1_wardaddy_d_co.paa),
            QPATHTOF(data\afv_wheeled_01_ext2_wardaddy_d_co.paa),
            "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa",
            "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa",
            "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_sand_CO.paa",
            "a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
            "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"
            };
    };

    class LXIM_B_RHINO_26_G : LXIM_B_RHINO_UP_base {
        displayName="MGS 2/6";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        side = 1;
        scope= 2;
        scopeCurator=2;
        editorSubcategory = "LXIM_EdSubcat_mgs_green";
        hiddenSelectionsTextures[]={
            QPATHTOF(data\afv_wheeled_01_ext1_wardaddy_g_co.paa),
            QPATHTOF(data\afv_wheeled_01_ext2_wardaddy_g_co.paa),
            "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
            "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa",
            "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_CO.paa",
            "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
            "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"
            };
    };
    class LXIM_B_RHINO_26_D : LXIM_B_RHINO_base {
        displayName="MGS 2.6 Sand";
        author = QAUTHOR;
        faction=QUOTE(PREFIX);
        side = 1;
        scope= 2;
        scopeCurator=2;
        editorSubcategory = "LXIM_EdSubcat_mgs_desert";
        hiddenSelectionsTextures[]={
            QPATHTOF(data\afv_wheeled_01_ext1_wardaddy_d_co.paa),
            QPATHTOF(data\afv_wheeled_01_ext2_wardaddy_d_co.paa),
            "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa",
            "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa",
            "a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_sand_CO.paa",
            "a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
            "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"
            };
    };
};
