class SensorTemplateIR;
class SensorTemplatePassiveRadar;
class SensorTemplateActiveRadar;
class SensorTemplateVisual;
class SensorTemplateLaser;

class CfgVehicles {
	//Helicopters
	class Helicopter {
		class ACE_SelfActions;
	};
	class Helicopter_Base_F: Helicopter {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class Helicopter_Base_H: Helicopter_Base_F {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class RHS_UH60_Base: Heli_Transport_01_base_F {
		class ACE_SelfActions: ACE_SelfActions {};
		weapons[] =
		{
			"rhsusf_weap_ANALQ144"
		};
		magazines[] =
		{
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM"
		};
		
	};
	class RHS_UH60M_base: RHS_UH60_Base {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class RHS_UH60M_US_base: RHS_UH60M_base {
		class ACE_SelfActions: ACE_SelfActions {};
		class TransportBackpacks;
	};
	class RHS_UH60M: RHS_UH60M_US_base {
		#include "MFD.hpp"
		defaultUserMFDvalues[] = {0,0,0,0,1,0,0.2};
		lockDetectionSystem = "2+4+8";
		incomingMissileDetectionSystem = 16;
		// statement = "this SetUserMFDvalue [3,1];this SetUserMFDvalue [4,0.65];this SetUserMFDvalue [5,0];"; To change color
		#include "UH60AceActions.hpp"
		class Components;
		class TransportBackpacks: TransportBackpacks {
			class _xx_tf_rt1523g_big_rhs {
				backpack = "tf_rt1523g_big_rhs";
				count = 4;
			};
		};
	};
	class RHS_UH60M2: RHS_UH60M {
	};
	class RHS_UH60M_ESSS: RHS_UH60M2 {
		class Components: Components {
			class TransportPylonsComponent;
		};
	};
//	faction(UH60M_ESSS, RHS_UH60M_ESSS)
	class GVAR(UH60M_DAP): RHS_UH60M_ESSS {
		#include "MFD.hpp"
		displayName = "[61st] UH-60M (DAP)";
		scope = 2;
		scopeCurator = 2;
		//faction = "61st_Aux";
		class pilotCamera
        {
            class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-10;
					maxAngleX=90;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=90;
					initFov=0.425;//"(30 / 120)";
					minFov=0.425;//"(30 / 120)";
					maxFov=0.425;//"(30 / 120)";
					thermalMode[] = {0,1,2,3,4,5};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};

				class zoomx4: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.425/4)";//"(3.75 / 120)";
					minFov="(0.425/4)";//"(3.75 / 120)";
					maxFov="(0.425/4)";//"(3.75 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};

				class zoomX8: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/8)";//"(.375 / 120)";
					minFov="(0.42/8)";//"(.375 / 120)";
					maxFov="(0.42/8)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/20)";//"(.375 / 120)";
					minFov="(0.42/20)";//"(.375 / 120)";
					maxFov="(0.42/20)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/50)";//"(.375 / 120)";
					minFov="(0.42/50)";//"(.375 / 120)";
					maxFov="(0.42/50)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};

				class zoomX70: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/70)";//"(.375 / 120)";
					minFov="(0.42/70)";//"(.375 / 120)";
					maxFov="(0.42/70)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
            minTurn = -180;
            maxTurn = 180;
            initTurn = 0;

            minElev = -10;
            maxElev = 90;
            initElev = -10;

            maxXRotSpeed = .3;
            maxYRotSpeed = .3;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
		class Components: Components {
			class SensorsManagerComponent
			{
				class Components
				{					
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						animDirection = "mainTurret";
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						componentType = "ActiveRadarSensorComponent";
						class AirTarget		// ranges for targets with sky background
						{
							minRange	= 0;	// minimum possible range in meters
							maxRange	= 8000;	// maximum possible range in meters
							objectDistanceLimitCoef	= -1; // range not limited by obj. view distance
							viewDistanceLimitCoef	= -1; // range not limited by view distance
						};
						class GroundTarget	// ranges for targets with ground background
						{
							minRange = 0;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef 	= -1;
						};
						typeRecognitionDistance = 8000; // distance how far the target type gets recognized
						angleRangeHorizontal 	= 180;	// sensor azimuth coverage in degrees
						angleRangeVertical 		= 90;	// sensor elevation coverage in degrees
						groundNoiseDistanceCoef = 0;	// portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance 	= 0;	// distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold 		= 0;	// target speed in m/s above which the target will start to become visible
						maxSpeedThreshold 		= 0;	// target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
					};
					
					//class VisualSensorComponent : SensorTemplateVisual {};

					class LaserSensor : SensorTemplateLaser {};
				};
			};
			class TransportPylonsComponent: TransportPylonsComponent {
				class pylons // pylons are indexed to aircraft model's proxies IDs in the order they are written in class Pylons
				{
					class pylons1 // left wingtip
					{
						attachment	= "ace_compat_rhs_usf3_pylon_mag_4rnd_hellfire_l";	// default magazine
					};
					class pylons2
					{
						attachment	=  "rhs_mag_M229_19";
					};
					class pylons3
					{
						attachment	= "rhs_mag_DAGR_16";
					};
					class pylons4
					{
						attachment	= "ace_compat_rhs_usf3_pylon_mag_4rnd_hellfire_k";
					};
				};
				class Presets {
					class Empty {
						displayName = "Empty";
						attachment[] = {};
					};
					class Default {
						displayName = "Default";
						attachment[] = {"ace_compat_rhs_usf3_pylon_mag_4rnd_hellfire_l","rhs_mag_M229_19","rhs_mag_DAGR_16","ace_compat_rhs_usf3_pylon_mag_4rnd_hellfire_k","rhsusf_M130_CMFlare_Chaff_Magazine_x2"};
					};
					class Rockets {
						displayName = "Rockets";
						attachment[] = {"rhs_mag_M229_19","rhs_mag_M229_19","rhs_mag_M229_19","rhs_mag_M229_19","rhsusf_M130_CMFlare_Chaff_Magazine_x2"};
					};
				};
			};
		};
        memoryPointDriverOptics = "doplnovani";
		weapons[] =
		{
			"rhsusf_weap_ANALQ144",
			"Laserdesignator_pilotCamera"
		};
		magazines[] =
		{
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"Laserbatteries"
		};
	};
};
