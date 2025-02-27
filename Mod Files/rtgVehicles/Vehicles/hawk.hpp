#include "Vehicles/AH-1Z.hpp"
class ViewPilot;
class RHS_Effects_Helicopter_Hull_Destruction;
class HitFuel;
class HitAvionics;
class HitMissiles;
class HitHRotor;
class HitVRotor;
class HitGlass5;
class HitGlass6;
class rtg_AH1Z_Hawk : RHS_AH1Z
{
	displayName = "Hawk (2/0)";
	editorSubcategory = "RTGHelicopters";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	maximumLoad = 20000;
	ace_cargo_space = 4;
	rhs_hasNoRadar=0;
	RTG_Vehicle_Gear
	
	lockDetectionSystem = "2 + 4 + 8";
	incomingMissileDetectionSystem = 16;	
	laserScanner = false;
	laserTarget = true;
	showAllTargets = 2 + 4;
	radarType = 4;
	allowTabLock = 1;
	countermeasureActivationRadius = 5000;	

	hiddenSelectionsTextures[] =
	{
		"\rtgVehicles\tex\Hawk\ah1z_body_co.paa",
		"\rtgVehicles\tex\Hawk\ah1z_engines_co.paa",
		"#(argb,8,8,3)color(0,0,0,1.0,co)",
		"#(argb,8,8,3)color(0,0,0,1.0,co)",
		"#(argb,8,8,3)color(0,0,0,1.0,co)",
		"#(argb,8,8,3)color(0,0,0,1.0,co)"
	};
	
	class textureSources
	{
		class raider
		{
			displayName = "Raider";
			author = "Shrike";
			textures[] =
			{
				"\rtgVehicles\tex\Hawk\ah1z_body_co.paa",
				"\rtgVehicles\tex\Hawk\ah1z_engines_co.paa"
			};
			factions[] =
			{
				"Raider_Tactical_F"
			};
		};
	};
	
	textureList[] =
	{
		"raider", 1
	};

	class HitPoints
	{
		class HitHull
		{
			simulation           = RHS_Hull_Helicopter;
			armor               = 150;
			minimalHit          = -0.2;
			explosionShielding  = 2;
			radius              = 0.4;
			armorComponent      = Hit_Hull;
			name                = "hull_hit";
			visual              = "zbytek";
			passThrough         = 1;
			class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
		};
		class HitFuel: HitFuel
		{
			armor = 3.5;
			radius = 0.25;
			minimalHit = 0.05;
		};
		class HitAvionics: HitAvionics
		{
			armor = 7;
			radius = 0.4;
			minimalHit = 0.05;
			name = "avionics_hit";
			visual = "elektronika";
		};
		class HitMissiles: HitMissiles
		{
			armor = 3.5;
			radius = 0.15;
			minimalHit = 0.05;
			name = "ammot_hit";
			visual = "munice";
		};
		class HitEngine1
		{
			armor               = -20;
			radius              = 0.18;
			explosionShielding  = 0.5;
			minimalHit          = -0.01;
			passThrough         = 0.4;
			visual              = "";
			name                = "engine_1_hit";
			armorComponent      = Hit_Engine_1;
		};
		class HitEngine2: HitEngine1
		{
			name            = "engine_2_hit";
			armorComponent  = Hit_Engine_2;
		};
		class HitEngine: HitEngine2
		{
			armor          = -50;
			armorComponent = "Hit_Engine";
			name          = "engine_hit";
			depends       = "0.5 * (HitEngine1 + HitEngine2)";
		};
		class HitHRotor: HitHRotor
		{
			armor = 14;
			radius = 0.4;
			minimalHit = 0.09;
			explosionShielding = 2.5;
			name = "velka vrtule";
			visual = "velka vrtule staticka";
			armorComponent = Hit_Rotor_Main;
		};
		class HitTail
		{
			armor = -37.5;
			explosionShielding = 0.20;
			passThrough = 0.50;
			minimalHit = -0.15;
			radius = 0.13;
			armorComponent = "Hit_Tail";
			name = "Hit_Tail";
			visual = "vis_tail";
			simulation = RHS_Hull_Helicopter;
		};
		class HitVRotor: HitVRotor
		{
			armor = 10.5;
			radius = 0.06;
			minimalHit = 0.05;
			explosionShielding = 6;
			name = "mala vrtule";
			visual = "mala vrtule staticka";
			armorComponent = Hit_Rotor_Rear;
			depends = "HitTail";
		};
		class HitGlass1: HitGlass1 { armor = 5; radius = 0.4; explosionShielding = 6; };
		class HitGlass2: HitGlass2 { armor = 5; radius = 0.4; explosionShielding = 6; };
		class HitGlass3: HitGlass3 { armor = 5; radius = 0.4; explosionShielding = 6; };
		class HitGlass4: HitGlass4 { armor = 5; radius = 0.4; explosionShielding = 6; };
		class HitGlass5: HitGlass5 { armor = 5; radius = 0.4; explosionShielding = 6; };
		class HitGlass6: HitGlass6 { armor = 5; radius = 0.4; explosionShielding = 6; };
	};

	class Components
	{
		class TransportPylonsComponent
		{
			class pylons
			{
				class pylonTip1
				{
					hardpoints[]		= {"RHS_HP_AIM9_HELI_USMC"};
					priority			= 3;
					attachment			= "rhs_mag_Sidewinder_heli_2";
					maxweight			= 1200;
					UIposition[]		= {0.625,0.25};
					bay					= -1;
					hitpoint 			= HitPylon1;
				};
				class pylon2
				{
					hardpoints[]		= {"RTG_HELI_Pylons"};
					priority			= 2;
					attachment			= "RTG_Pylon_20mm_Gunpod";
					maxweight			= 1200;
					UIposition[]		= {0.625,0.39};
					bay					= -1;
					turret[] 			= {0};
					hitpoint 			= HitPylon2;
				};
				class pylon3 : pylon2
				{
					UIposition[]		= {0.565,0.44};
					priority			= 1;
					attachment			= "RTG_Hellfire_AGM114N_pylon";
					turret[] 			= {};
					hitpoint 			= HitPylon3;
				};
				class pylon4 : pylon3
				{
					UIposition[]		= {0.10,0.44};
					mirroredMissilePos	= 3;
					attachment			= "RTG_Hellfire_AGM114K_pylon";
					turret[] 			= {};
					hitpoint 			= HitPylon4;
				};
				class pylon5 : pylon2
				{
					UIposition[]		= {0.04,0.39};
					mirroredMissilePos	= 2;
					attachment			= "RTG_Hellfire_AGM114K_pylon";
					turret[]			 = {0};
					hitpoint 			= HitPylon5;
				};
				class pylonTip6 : pylonTip1
				{
					UIposition[]		= {0.04,0.25};
					attachment			= "rhs_mag_Sidewinder_heli_2";
					mirroredMissilePos	= 1;
					hitpoint 			= HitPylon6;
				};
				class cmDispenser
				{
					hardpoints[]	= {"RHSUSF_cm_ANALE39","RHSUSF_cm_ANALE39_x2","RHSUSF_cm_ANALE39_x4"};
					priority		= 1;
					attachment		= "rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4";
					maxweight		= 800;
					UIposition[]	= {0.33,0.0};
				};
			};
			class Presets
			{
				class EM
				{
					attachment[] =
					{
						"rhs_mag_Sidewinder_heli_2",
						"",
						"",
						"",
						"",
						"rhs_mag_Sidewinder_heli_2",
						"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
					};
					displayname = "Empty";
				};
				class CAS
				{
					attachment[] =
					{
						"rhs_mag_Sidewinder_heli_2",
						"RTG_Pylon_20mm_Gunpod",
						"RTG_Hellfire_AGM114N_pylon",
						"RTG_Hellfire_AGM114K_pylon",
						"RTG_Hellfire_AGM114K_pylon",
						"rhs_mag_Sidewinder_heli_2",
						"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
					};
					displayname = "CAS";
				};
				class CAP
				{
					attachment[] =
					{
						"rhs_mag_Sidewinder_heli_2",
						"RTG_Pylon_20mm_Gunpod",
						"RTG_Pylon_20mm_Gunpod",
						"RTG_Pylon_20mm_Gunpod",
						"RTG_Pylon_20mm_Gunpod",
						"rhs_mag_Sidewinder_heli_2",
						"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
					};
					displayname = "Close Air Protection";
				};
			};
		};
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: SensorTemplateIR
				{
					class AirTarget
					{
						minRange = 250;
						maxRange = 4500;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget
					{
						minRange = 250;
						maxRange = 4500;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					animDirection = "Sensors";
					angleRangeHorizontal = 46;
					angleRangeVertical = 36;
					typeRecognitionDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					maxFogSeeThrough = 0.95;
					minTrackableSpeed = 0;
					maxTrackableSpeed = 695;
				};
				class VisualSensorComponent: SensorTemplateVisual
				{
					class AirTarget
					{
						minRange = 250;
						maxRange = 3000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget
					{
						minRange = 250;
						maxRange = 3000;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					maxTrackableSpeed = 70;
					animDirection = "Sensors";
					angleRangeHorizontal = 46;
					angleRangeVertical = 36;
				};
				class LaserSensorComponent: SensorTemplateLaser{};
				class PassiveRadarSensorComponent : ActiveRadarSensorComponent
				{
					typeRecognitionDistance = 4000;
					allowsMarking = 0;
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
		{
			class Components: components
			{
				class EmptyDisplay
				{
					componentType = "EmptyDisplayComponent";
				};
				class MinimapDisplay
				{
					componentType = "MinimapDisplayComponent";
					resource = "RscCustomInfoMiniMap";
				};
				class CrewDisplay
				{
					componentType = "CrewDisplayComponent";
					resource = "RscCustomInfoCrew";
				};
				class VehiclePrimaryGunnerDisplay
				{
					componentType = "TransportFeedDisplayComponent";
					source = "PrimaryGunner";
				};
				class SensorDisplay
				{
					componentType = "SensorsDisplayComponent";
					range[] = {8000,16000,25000,4000};
					resource = "RscCustomInfoSensors";
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
		{
			defaultDisplay = "SensorDisplay";
			class Components: components
			{
				class EmptyDisplay
				{
					componentType = "EmptyDisplayComponent";
				};
				class MinimapDisplay
				{
					componentType = "MinimapDisplayComponent";
					resource = "RscCustomInfoMiniMap";
				};
				class CrewDisplay
				{
					componentType = "CrewDisplayComponent";
					resource = "RscCustomInfoCrew";
				};
				class VehiclePrimaryGunnerDisplay
				{
					componentType = "TransportFeedDisplayComponent";
					source = "PrimaryGunner";
				};
				class SensorDisplay
				{
					componentType = "SensorsDisplayComponent";
					range[] = {8000,16000,25000,4000};
					resource = "RscCustomInfoSensors";
				};
			};
		};
		class TransportCountermeasuresComponent{};
	};
};
