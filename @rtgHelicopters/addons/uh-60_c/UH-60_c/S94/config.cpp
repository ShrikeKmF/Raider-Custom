////////////////////////////////////////////////////////////////////
//DeRap: uh-60_c\S94\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 08 18:52:16 2023 : 'file' last modified on Thu Jan 01 13:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Ej_S94
	{
		units[] = {"ej_S94U","ej_S94"};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};
class Default;
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class EventHandlers;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitFuel;
			class HitWinch;
		};
		class AnimationSources;
		class ViewOptics;
		class NewTurret;
		class MainTurret;
		class RotorLibHelicopterProperties;
		class Reflector
		{
			class Right;
		};
	};
	class ej_S94_base: Helicopter_Base_H
	{
		features = "Slingload: Slingloads up to 5000kg";
		destrType = "DestructWreck";
		picture = "\A3\air_f_beta\Heli_Transport_01\Data\UI\Heli_Transport_01_base_CA.paa";
		icon = "\A3\air_f_beta\Heli_Transport_01\Data\UI\Map_Heli_Transport_01_base_CA.paa";
		editorSubcategory = "EdSubcat_Helicopters";
		mapSize = 15;
		cargoCanEject = 1;
		driverCanEject = 0;
		maxFordingDepth = 1.5;
		mainBladeRadius = 2;
		altFullForce = 4000;
		altNoForce = 6000;
		bodyFrictionCoef = 0.7;
		supplyRadius = 2.5;
		liftForceCoef = 1.1;
		cyclicAsideForceCoef = 1;
		cyclicForwardForceCoef = 1;
		backRotorForceCoef = 1;
		enableManualFire = 0;
		class Library
		{
			libTextDesc = "UH-92";
		};
		simulation = "helicopterX";
		armor = 40;
		numberPhysicalWheels = 3;
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "uh-60_c\S94\UH-92.xml";
			autoHoverCorrection[] = {3,2.45,0};
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1850;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 200000;
			maxTailRotorStress = 25000;
			rtd_center = "rtd_center";
		};
		fuelConsumptionRate = 0.105;
		fuelCapacity = 800;
		maxSpeed = 330;
		slingLoadMaxCargoMass = 5500;
		slingLoadMemoryPoint = "slingLoad0";
		memoryPointDriverOptics = "slingCamera";
		availableForSupportTypes[] = {"Drop","Transport"};
		LockDetectionSystem = "1 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		threat[] = {0.8,1,0.6};
		selectionFireAnim = "muzzleFlash";
		selectionHRotorStill = "main rotor static";
		selectionHRotorMove = "main rotor blur";
		selectionVRotorStill = "tail rotor static";
		selectionVRotorMove = "tail rotor blur";
		memoryPointsGetInDriver = "pos pilot";
		memoryPointsGetInDriverDir = "pos pilot dir";
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		driverCanSee = 31;
		driverAction = "pilot_Heli_Transport_01";
		driverInAction = "pilot_Heli_Light_03_Enter";
		driveOnComponent[] = {"gear_1","gear_2","gear_3","gear1","gear2","gear3","wheel_1_axis","Wheel_2_axis","wheel_3_axis","wheels","wheel_1","wheel_2","wheel_3","wheel_1_1","wheel_1_2","wheel_1_3","wheel_2_1","wheel_2_2","wheel_2_3","wheel_2_1_damper","wheel_1_1_damper","wheel_1_2_damper","wheel_2_1_steering","wheel_1_1_steering","wheel_1_2_steering"};
		cargoAction[] = {"passenger_low01","passenger_generic01_leanleft","passenger_generic01_leanleft","passenger_generic01_leanright","passenger_generic01_foldhands","passenger_mantisrear","passenger_mantisrear","passenger_generic01_foldhands"};
		hideWeaponsCargo = 1;
		castCargoShadow = 1;
		transportSoldier = 12;
		transportAmmo = 100;
		transportMaxMagazines = 40;
		transportMaxWeapons = 4;
		transportMaxBackpacks = 10;
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		cargoDoors[] = {"LDoor","LDoor","LDoor","LDoor","RDoor","RDoor","RDoor","RDoor"};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class TransportBackpacks
		{
			class _xx_ej_survivalbag
			{
				backpack = "ej_survivalbag";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShellYellow
			{
				count = 10;
				magazine = "SmokeShellYellow";
			};
			class _xx_SmokeShellPurple
			{
				count = 10;
				magazine = "SmokeShellPurple";
			};
			class _xx_FlareGreen_F
			{
				count = 10;
				magazine = "FlareGreen_F";
			};
			class _xx_FlareRed_F
			{
				count = 10;
				magazine = "FlareRed_F";
			};
			class _xx_FlareWhite_F
			{
				count = 10;
				magazine = "FlareWhite_F";
			};
			class _xx_FlareYellow_F
			{
				count = 10;
				magazine = "FlareYellow_F";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				count = 20;
				name = "FirstAidKit";
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_ItemGPS
			{
				count = 2;
				name = "ItemGPS";
			};
		};
		class RenderTargets
		{
			class MFD1
			{
				renderTarget = "rendertarget0";
				class View01
				{
					pointPosition = "slingpip0_pos";
					pointDirection = "slingpip0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.093;
				};
			};
		};
		class MFD{};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliCom";
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 999;
				visual = "camo1";
				minimalHit = 0.05;
				depends = "Total";
				radius = 0.01;
			};
			class HitFuel: HitFuel
			{
				name = "camo1";
				armor = 0.7;
				radius = 0.125;
				passthrough = 0.5;
				minimalHit = 0.05;
				explosionShielding = 2;
			};
			class HitAvionics: HitAvionics
			{
				armor = 1.3;
				radius = 0.4;
				minimalHit = 0.15;
				explosionShielding = 1.5;
				visual = "podsvit pristroju";
			};
			class HitEngine1: HitEngine
			{
				armor = 0.7;
				radius = 0.35;
				explosionShielding = 3;
				minimalHit = 0.1;
				name = "engine_1_hit";
				convexComponent = "engine_1_hit";
			};
			class HitEngine2: HitEngine1
			{
				name = "engine_2_hit";
				convexComponent = "engine_2_hit";
			};
			class HitEngine: HitEngine2
			{
				armor = 999;
				visual = "camo2";
				name = "engine_hit";
				convexComponent = "engine_hit";
				depends = "0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitHRotor: HitHRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.1;
				explosionShielding = 2;
			};
			class HitVRotor: HitVRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.1;
				explosionShielding = 2;
			};
			class HitGlass1: HitGlass1
			{
				name = "glass1";
				passthrough = 0.5;
				armor = 1.3;
				radius = 0.45;
				explosionShielding = 6;
			};
			class HitGlass2: HitGlass2
			{
				name = "glass2";
				passthrough = 0.5;
				armor = 1.3;
				radius = 0.45;
				explosionShielding = 6;
			};
			class HitGlass3: HitGlass3
			{
				name = "glass3";
				armor = 1.3;
				passthrough = 0.5;
				radius = 0.35;
				explosionShielding = 6;
			};
			class HitGlass4: HitGlass4
			{
				name = "glass4";
				passthrough = 0.5;
				armor = 1.3;
				radius = 0.35;
				explosionShielding = 6;
			};
			class HitGlass5: HitGlass5
			{
				name = "glass5";
				passthrough = 0.5;
				armor = 1.3;
				radius = 0.46;
				explosionShielding = 6;
			};
			class HitGlass6: HitGlass6
			{
				name = "glass6";
				passthrough = 0.5;
				armor = 1.3;
				radius = 0.46;
				explosionShielding = 6;
			};
			class HitGlass7: HitGlass6
			{
				name = "glass7";
				passthrough = 0.5;
				convexComponent = "glass7";
				visual = "glass7";
				radius = 0.2;
			};
			class HitGlass8: HitGlass7
			{
				name = "glass8";
				passthrough = 0.5;
				convexComponent = "glass8";
				visual = "glass8";
			};
			class HitGlass9: HitGlass6
			{
				name = "glass9";
				passthrough = 0.5;
				convexComponent = "glass9";
				visual = "glass9";
				radius = 0.42;
			};
			class HitGlass10: HitGlass9
			{
				name = "glass10";
				convexComponent = "glass10";
				visual = "glass10";
			};
			class HitGlass11: HitGlass9
			{
				name = "glass11";
				convexComponent = "glass11";
				visual = "glass11";
			};
			class HitGlass12: HitGlass9
			{
				name = "glass12";
				convexComponent = "glass12";
				visual = "glass12";
			};
			class HitGlass13: HitGlass6
			{
				name = "glass13";
				convexComponent = "glass13";
				visual = "glass13";
				radius = 0.33;
			};
			class HitWinch: HitWinch
			{
				name = "winch";
				passthrough = 0.5;
				armor = 1.3;
				radius = 0.35;
				explosionShielding = 6;
				class DestructionEffects{};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gun_HRot
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
			class Gun_VRot
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
			class HideWeapon
			{
				source = "user";
				animPeriod = 1e-05;
				initPhase = 0;
			};
			class Gatling
			{
				source = "revolving";
				weapon = "M197_MH60";
			};
			class Gatling_1
			{
				source = "revolving";
				weapon = "LMG_Minigun_Transport";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "LMG_Minigun_Transport2";
			};
			class Cannon
			{
				source = "ammorandom";
				weapon = "M230";
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "missiles_DAGR";
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "M240_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M240_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M240_veh";
			};
			class ReloadAnim_2
			{
				source = "reload";
				weapon = "M240_veh_2";
			};
			class ReloadMagazine_2
			{
				source = "reloadmagazine";
				weapon = "M240_veh_2";
			};
			class Revolving_2
			{
				source = "revolving";
				weapon = "M240_veh_2";
			};
			class RDoor
			{
				source = "door";
				animPeriod = 1;
				sound = "ServoDoorsSound";
				initPhase = 0;
			};
			class LDoor
			{
				source = "door";
				animPeriod = 1;
				sound = "ServoDoorsSound";
				initPhase = 0;
			};
			class FormationLights
			{
				AnimPeriod = 1;
				source = "user";
				InitPhase = 1;
			};
			class HidePilotMFD
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class HideGunMFD
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class HideSlingFeed
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class Wheel_1_source
			{
				source = "wheel";
				wheel = "Wheel_1";
			};
			class Wheel_2_source
			{
				source = "wheel";
				wheel = "Wheel_2";
			};
			class Wheel_3_source
			{
				source = "wheel";
				wheel = "Wheel_3";
			};
		};
		class UserActions
		{
			class LDoor_Open
			{
				userActionID = 60;
				displayName = "Open Left door";
				displayNameDefault = "";
				position = "pilot";
				condition = "this doorPhase ""LDoor"" < 0.5 AND Alive(this) AND (player in crew this)";
				statement = "this animateDoor ['LDoor', 1]";
				priority = 1.5;
				radius = 2;
				showWindow = 0;
				onlyForPlayer = 1;
				shortcut = "";
			};
			class LDoor_Close: LDoor_Open
			{
				userActionID = 61;
				displayName = "Close Left door";
				textToolTip = "Close door";
				condition = "this doorPhase ""LDoor"" > 0.5 AND Alive(this) AND (player in crew this)";
				statement = "this animateDoor ['LDoor', 0]";
			};
			class RDoor_Open
			{
				userActionID = 60;
				displayName = "Open Right door";
				displayNameDefault = "";
				position = "pilot";
				condition = "this doorPhase ""RDoor"" < 0.5 AND Alive(this) AND (player in crew this)";
				statement = "this animateDoor ['RDoor', 1]";
				priority = 1.5;
				radius = 2;
				showWindow = 0;
				onlyForPlayer = 1;
				shortcut = "";
			};
			class RDoor_Close: LDoor_Open
			{
				userActionID = 61;
				displayName = "Close Right door";
				textToolTip = "Close door";
				condition = "this doorPhase ""RDoor"" > 0.5 AND Alive(this) AND (player in crew this)";
				statement = "this animateDoor ['RDoor', 0]";
			};
			class SlingMFDOn
			{
				displayName = "Sling Page On";
				displayNameDefault = "";
				position = "";
				radius = 20;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip"",1];";
				priority = 4;
			};
			class SlingMFDOff: SlingMFDOn
			{
				displayName = "Sling Page Off";
				condition = "this animationPhase ""copip"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip"",0];";
			};
		};
		class Reflectors: Reflector
		{
			class Right
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				intensity = 50;
				size = 1;
				innerAngle = 15;
				outerAngle = 65;
				coneFadeCoef = 10;
				position = "Light_R_pos";
				direction = "Light_R_dir";
				hitpoint = "Light_R_hitpoint";
				selection = "Light_R";
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
			};
			class Left: Right
			{
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L_hitpoint";
				selection = "Light_L";
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "PositionLight_White_1_pos";
				color[] = {1,1,1};
				ambient[] = {0.1,0.1,0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class RedStill
			{
				name = "PositionLight_Red_1_pos";
				color[] = {0.8,0,0};
				ambient[] = {0.08,0,0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class GreenStill
			{
				name = "PositionLight_Green_1_pos";
				color[] = {0,0.8,0};
				ambient[] = {0,0.08,0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
		};
		dammageHalf[] = {};
		dammageFull[] = {};
		attenuationEffectType = "HeliAttenuation";
		emptySound[] = {"",0,1};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",1,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",1,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",1,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.33,"soundGeneralCollision2",0.33,"soundGeneralCollision3",0.33};
		soundLandCrashes[] = {"emptySound",0};
		soundBuildingCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundArmorCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundWoodCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",1,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",1,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",1,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1,1,100};
		soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1,1,100};
		soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
		soundDammage[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",10,1};
		soundGetIn[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\open",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\close",1,1,50};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_start_v2",0.39810717,1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_start_v2",0.7943282,1,600};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_stop_v2",0.39810717,1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_stop_v2",0.7943282,1,600};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",1,1};
		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_1",1,1};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",2.5118864,1,300};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1,1};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1,1,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",1,1,100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",1,1,100};
		landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",1.7782794,1,100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",1.7782794,1,100};
		landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",1,1};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",1,1,80};
		slingCargoAttach[] = {"slingCargoAttach0","slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",1,1};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",1,1,80};
		slingCargoDetach[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",1,1};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",1,1,80};
		slingCargoDetachAir[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",1,1};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",1,1,80};
		slingCargoRopeBreak[] = {"slingCargoDetach0","slingCargoDetach1"};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_ext_engine",2.2387211,1,600};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_rotor",1,1,1500};
				frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class RotorNoiseExt
			{
				sound[] = {"uh-60\sound\uh92.wav",1,1,400};
				frequency = 1;
				volume = "(camPos*(rotorThrust factor [0.6, 1]))";
				cone[] = {0.7,1.3,1,0};
			};
			class RotorInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_rotor",0.5011872,1};
				frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
			};
			class EngineInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_int_engine",1,1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.22387211,1,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.22387211,1,20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1,1,100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.4466836,1,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2e",0.39810717,1,50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_engine_v2",1.7782794,1,700};
					frequency = "rotorSpeed";
					volume = "camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_rotor",1,1,1500};
					frequency = "rotorSpeed * (1-rotorThrust/5)";
					volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					cone[] = {1.6,3.14,1.6,0.95};
				};
				class RotorNoiseExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\rotor_swist",1,1,400};
					frequency = 1;
					volume = "(camPos*(rotorThrust factor [0.6, 1]))";
					cone[] = {0.7,1.3,1,0};
				};
				class EngineInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_engine_v2",1,1};
					frequency = "rotorSpeed";
					volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
				};
				class RotorInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_rotor_normal",0.70794576,1};
					frequency = "rotorSpeed * (1-rotorThrust/5)";
					volume = "(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.31622776,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.22387211,1,20};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.22387211,1,20};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
					frequency = 1;
					volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1,1,100};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.4466836,1,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
				};
				class GStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2e",0.39810717,1,50};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
		};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\uh-60\data\uh60m_fuselage_co.paa","\uh-60\data\uh60m_engine_co.paa","\uh-60\data\ductfans_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"uh-60\data\mat\uh92_ductfans.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","uh-60\data\mat\uh60m_engine.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","uh-60\data\mat\uh60m_fuselage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","uh-60\data\mat\uh60m_interior.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","uh-60\data\mat\uh60m_navijak.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","a3\air_f_beta\heli_transport_01\data\heli_transport_01_glass.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat","A3\data_F\default.rvmat","A3\data_F\default.rvmat","A3\data_F\default_destruct.rvmat","uh-60\data\mat\uh60m_engine_MEV.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","uh-60\data\mat\uh60m_fuselage_MEV.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat","A3\data_F\default.rvmat","A3\data_F\default.rvmat","A3\data_F\default_destruct.rvmat"};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CoPilotObs: MainTurret
			{
				isCopilot = 1;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Light_03_Enter";
				memoryPointsGetInGunner = "pos copilot";
				memoryPointsGetInGunnerDir = "pos copilot dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				minElev = -80;
				maxElev = 25;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				copilotHasFlares = 1;
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
			};
		};
		class textureSources
		{
			class CIVWhite
			{
				displayName = "White";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_white_co.paa","\uh-60\data\uh60m_engine_white_co.paa","\uh-60\data\whiteductfans_co.paa"};
				factions[] = {"CIV_F"};
			};
			class CIVRed
			{
				displayName = "Red";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_Red_co.paa","\uh-60\data\uh60m_engine_Red_co.paa","\uh-60\data\redductfans_co.paa"};
				factions[] = {"CIV_F"};
			};
			class CIVGreen
			{
				displayName = "Green";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_Green_co.paa","\uh-60\data\uh60m_engine_Green_co.paa","\uh-60\data\Greenductfans_co.paa"};
				factions[] = {"CIV_F"};
			};
			class CIVBlue
			{
				displayName = "Blue";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_blue_co.paa","\uh-60\data\uh60m_engine_blue_co.paa","\uh-60\data\blueductfans_co.paa"};
				factions[] = {"CIV_F"};
			};
			class CIVBlack
			{
				displayName = "Black";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_black_co.paa","\uh-60\data\uh60m_engine_black_co.paa","\uh-60\data\blackductfans_co.paa"};
				factions[] = {"CIV_F","BLU_F"};
			};
		};
		class Eventhandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", false, false] call bis_fnc_initVehicle;};";
		};
	};
	class ej_S94: ej_S94_base
	{
		dlc = "ej_Uh60";
		author = "EricJ";
		_generalMacro = "ej_S94";
		scope = 2;
		accuracy = 1;
		side = 3;
		faction = "CIV_F";
		crew = "C_man_1_1_F";
		displayName = "S-94";
		model = "\UH-60\S94\ej_S94.p3d";
		textureList[] = {"CIVWhite",1};
		cost = 200;
	};
	class ej_S94U: ej_S94
	{
		dlc = "ej_Uh60";
		author = "EricJ";
		_generalMacro = "ej_S94G";
		scope = 2;
		slingLoadMaxCargoMass = 6000;
		ForceinGarage = 1;
		model = "\UH-60\S94\ej_S94U.p3d";
		displayName = "S-94 Utility";
		textureList[] = {"CIVWhite",1};
		cargoProxyIndexes[] = {1,2,3,4};
		castCargoShadow = 1;
		transportSoldier = 4;
	};
};
class cfgMods
{
	author = "EricJ";
	timepacked = "1699000307";
};
