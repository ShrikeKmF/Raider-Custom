////////////////////////////////////////////////////////////////////
//DeRap: uh-60_c\UH60\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 08 18:52:16 2023 : 'file' last modified on Thu Jan 01 13:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Ej_UH60M
	{
		units[] = {"ej_UH60M_BR","ej_UH60M_NATO","ej_UH60M_MEV_NOESSS","ej_MH60MDAP4DP","ej_MH60L","ej_UH60M_UT","ej_UH60M","ej_MH60S","ej_MH60SI","ej_MH60SI2","ej_MH60SI3","ej_MH60MDAP2","ej_MH60MDAP","ej_MH60MDAP4","ej_MH60M","ej_UH60M_U","ej_UH60M_MEV"};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 1.94;
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};
class CfgMods
{
	class Mod_Base;
	class ej_Uh60: Mod_Base
	{
		picture = "\A3\air_f_beta\Heli_Transport_01\Data\UI\Map_Heli_Transport_01_base_CA.paa";
		logo = "\A3\air_f_beta\Heli_Transport_01\Data\UI\Map_Heli_Transport_01_base_CA.paa";
		logoOver = "\A3\air_f_beta\Heli_Transport_01\Data\UI\Map_Heli_Transport_01_base_CA.paa";
		logoSmall = "\uh-60\data\logo\halfa.paa";
		name = "EricJ UH-60 Pack";
		hideName = "true";
		actionName = "Website";
		action = "http://562.50megs.com";
		author = "EricJ562";
		timepacked = "1426373691";
		dlcColor[] = {0.19,0.54,0.8,1};
		dir = "uh-60";
	};
	author = "EricJ";
	timepacked = "1699000307";
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
		class Components;
	};
	class ej_UH60M_base: Helicopter_Base_H
	{
		features = "Slingload: Slingloads up to 2000kg";
		destrType = "DestructWreck";
		picture = "\A3\air_f_beta\Heli_Transport_01\Data\UI\Heli_Transport_01_base_CA.paa";
		icon = "\A3\air_f_beta\Heli_Transport_01\Data\UI\Map_Heli_Transport_01_base_CA.paa";
		vehicleClass = "Air";
		editorSubcategory = "EdSubcat_Helicopters";
		mapSize = 15;
		cargoCanEject = 1;
		driverCanEject = 0;
		helmetMountedDisplay = 0;
		maxFordingDepth = 1.5;
		mainBladeRadius = 8.18;
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
			libTextDesc = "UH-60";
		};
		fuelCapacity = 600;
		fuelConsumptionRate = 0.126;
		maxSpeed = 293;
		simulation = "helicopterX";
		armor = 20;
		numberPhysicalWheels = 3;
		selectionFireAnim = "muzzleFlash";
		selectionHRotorStill = "main rotor static";
		selectionHRotorMove = "main rotor blur";
		selectionVRotorStill = "tail rotor static";
		selectionVRotorMove = "tail rotor blur";
		weapons[] = {"EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
		availableForSupportTypes[] = {"Drop","Transport"};
		LockDetectionSystem = "8 + 4";
		incomingMissileDetectionSystem = 16;
		slingLoadMaxCargoMass = 4100;
		slingLoadMemoryPoint = "slingLoad0";
		cargoDoors[] = {"LDoor","LDoor","LDoor","LDoor","RDoor","RDoor","RDoor","RDoor"};
		unitInfoTypeRTD = "RscUnitInfoAirRTDBasic";
		driveOnComponent[] = {"gear_1","gear_2","gear_3","gear1","gear2","gear3","wheel_1_axis","Wheel_2_axis","wheel_3_axis","wheels","wheel_1","wheel_2","wheel_3","wheel_1_1","wheel_1_2","wheel_1_3","wheel_2_1","wheel_2_2","wheel_2_3","wheel_2_1_damper","wheel_1_1_damper","wheel_1_2_damper","wheel_2_1_steering","wheel_1_1_steering","wheel_1_2_steering"};
		class RotorLibHelicopterProperties
		{
			RTDconfig = "uh-60_c\UH60\uh-60.xml";
			autoHoverCorrection[] = {3,2.45,0};
			defaultCollective = 0.625;
			retreatBladeStallWarningSpeed = 85.556;
			maxTorque = 1700;
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
		threat[] = {0.8,1,0.6};
		memoryPointsGetInDriver = "pos pilot";
		memoryPointsGetInDriverDir = "pos pilot dir";
		driverCanSee = 31;
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		driverAction = "pilot_Heli_Transport_01";
		driverInAction = "pilot_Heli_Light_03_Enter";
		cargoAction[] = {"passenger_low01","passenger_generic01_leanleft","passenger_generic01_leanleft","passenger_generic01_leanright","passenger_generic01_foldhands","passenger_mantisrear","passenger_mantisrear","passenger_generic01_foldhands"};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		hideWeaponsCargo = 1;
		cargoIsCoDriver[] = {0,0,0,0,0,0};
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12};
		castCargoShadow = 1;
		transportSoldier = 12;
		transportAmmo = 100;
		transportMaxMagazines = 40;
		transportMaxWeapons = 4;
		transportMaxBackpacks = 10;
		memoryPointCM[] = {"Flare_launcher1","Flare_launcher2"};
		memoryPointCMDir[] = {"Flare_launcher1_dir","Flare_launcher2_dir"};
		class RenderTargets
		{
			class MFD1
			{
				renderTarget = "rendertarget0";
				class View01
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				class Bones{};
				class Draw{};
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {0,0,0};
				helmetRight[] = {0,0,0};
				helmetDown[] = {0,0,0};
			};
			class Kimi_HUD_1
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				enableParallax = 0;
				class Bones
				{
					class GunnerAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,"0.9 - 0.04 + 0.012"};
						pos10[] = {"0.5 + 0.0111","0.9 - 0.04 + 0.012 + 0.0133"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.5};
						pos10[] = {0.65,0.65};
					};
					class Velocity_slip
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.845};
						pos10[] = {0.53,0.845};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93,0.2};
						maxPos[] = {0.93,0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965,0.2};
						maxPos[] = {0.965,0.8};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5,0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.25,0.25};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.75,0.75};
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.78,0.78};
						angle = 0;
					};
					class LevelP5: Level0
					{
						angle = 5;
					};
					class LevelM5: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
				};
				class Draw
				{
					color[] = {0.18,1,0.18};
					alpha = 1;
					condition = "on";
					class Horizont
					{
						clipTL[] = {0.15,0.15};
						clipBR[] = {0.85,0.85};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] = {{"Level0",{-0.42,0},1},{"Level0",{-0.38,0},1},{},{"Level0",{-0.37,0},1},{"Level0",{-0.33,0},1},{},{"Level0",{-0.32,0},1},{"Level0",{-0.28,0},1},{},{"Level0",{-0.27,0},1},{"Level0",{-0.23,0},1},{},{"Level0",{-0.22,0},1},{"Level0",{-0.18,0},1},{},{"Level0",{-0.17,0},1},{"Level0",{-0.13,0},1},{},{"Level0",{-0.12,0},1},{"Level0",{-0.08,0},1},{},{"Level0",{0.42,0},1},{"Level0",{0.38,0},1},{},{"Level0",{0.37,0},1},{"Level0",{0.33,0},1},{},{"Level0",{0.32,0},1},{"Level0",{0.28,0},1},{},{"Level0",{0.27,0},1},{"Level0",{0.23,0},1},{},{"Level0",{0.22,0},1},{"Level0",{0.18,0},1},{},{"Level0",{0.17,0},1},{"Level0",{0.13,0},1},{},{"Level0",{0.12,0},1},{"Level0",{0.08,0},1}};
							};
						};
					};
					class HorizonBankRot
					{
						type = "line";
						width = 3;
						points[] = {{"HorizonBankRot",{0,0.25},1},{"HorizonBankRot",{-0.01,0.23},1},{"HorizonBankRot",{0.01,0.23},1},{"HorizonBankRot",{0,0.25},1}};
					};
					class Static_HAD_BOX
					{
						clipTL[] = {0,1};
						clipBR[] = {1,0};
						type = "line";
						width = 5;
						points[] = {{{"0.5-0.1","0.9-0.04"},1},{{"0.5-0.1","0.9+0.04"},1},{{"0.5+0.1","0.9+0.04"},1},{{"0.5+0.1","0.9-0.04"},1},{{"0.5-0.1","0.9-0.04"},1},{},{{"0.5-0.1","0.9-0.04+0.012"},1},{{"0.5-0.092","0.9-0.04+0.012"},1},{},{{"0.5+0.1","0.9-0.04+0.012"},1},{{"0.5+0.092","0.9-0.04+0.012"},1},{},{{0.5,"0.9-0.04"},1},{{0.5,"0.9-0.032"},1},{},{{0.5,"0.9+0.04"},1},{{0.5,"0.9+0.032"},1},{}};
					};
					class Gunner_HAD
					{
						type = "line";
						width = 6;
						points[] = {{"GunnerAim",{-0.015,-0.008},1},{"GunnerAim",{-0.015,0.008},1},{"GunnerAim",{0.015,0.008},1},{"GunnerAim",{0.015,-0.008},1},{"GunnerAim",{-0.015,-0.008},1}};
					};
					class Slip_ball_group
					{
						class Slip_bars
						{
							type = "line";
							width = 4;
							points[] = {{{"0.5-0.018","0.9-0.04"},1},{{"0.5-0.018","0.9-0.075"},1},{},{{"0.5+0.018","0.9-0.04"},1},{{"0.5+0.018","0.9-0.075"},1}};
						};
						class Slip_ball
						{
							type = "line";
							width = 6;
							points[] = {{"Velocity_slip",1,{"0 * 0.75","-0.02 * 0.75"},1},{"Velocity_slip",1,{"0.0099999998 * 0.75","-0.01732 * 0.75"},1},{"Velocity_slip",1,{"0.01732 * 0.75","-0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"0.02 * 0.75","0 * 0.75"},1},{"Velocity_slip",1,{"0.01732 * 0.75","0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"0.0099999998 * 0.75","0.01732 * 0.75"},1},{"Velocity_slip",1,{"0 * 0.75","0.02 * 0.75"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.75","0.01732 * 0.75"},1},{"Velocity_slip",1,{"-0.01732 * 0.75","0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"-0.02 * 0.75","0 * 0.75"},1},{"Velocity_slip",1,{"-0.01732 * 0.75","-0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.75","-0.01732 * 0.75"},1},{"Velocity_slip",1,{"0 * 0.75","-0.02 * 0.75"},1},{},{"Velocity_slip",1,{"0 * 0.6","-0.02 * 0.6"},1},{"Velocity_slip",1,{"0.0099999998 * 0.6","-0.01732 * 0.6"},1},{"Velocity_slip",1,{"0.01732 * 0.6","-0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"0.02 * 0.6","0 * 0.6"},1},{"Velocity_slip",1,{"0.01732 * 0.6","0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"0.0099999998 * 0.6","0.01732 * 0.6"},1},{"Velocity_slip",1,{"0 * 0.6","0.02 * 0.6"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.6","0.01732 * 0.6"},1},{"Velocity_slip",1,{"-0.01732 * 0.6","0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"-0.02 * 0.6","0 * 0.6"},1},{"Velocity_slip",1,{"-0.01732 * 0.6","-0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.6","-0.01732 * 0.6"},1},{"Velocity_slip",1,{"0 * 0.6","-0.02 * 0.6"},1},{},{"Velocity_slip",1,{"0 * 0.5","-0.02 * 0.5"},1},{"Velocity_slip",1,{"0.0099999998 * 0.5","-0.01732 * 0.5"},1},{"Velocity_slip",1,{"0.01732 * 0.5","-0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"0.02 * 0.5","0 * 0.5"},1},{"Velocity_slip",1,{"0.01732 * 0.5","0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"0.0099999998 * 0.5","0.01732 * 0.5"},1},{"Velocity_slip",1,{"0 * 0.5","0.02 * 0.5"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.5","0.01732 * 0.5"},1},{"Velocity_slip",1,{"-0.01732 * 0.5","0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"-0.02 * 0.5","0 * 0.5"},1},{"Velocity_slip",1,{"-0.01732 * 0.5","-0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.5","-0.01732 * 0.5"},1},{"Velocity_slip",1,{"0 * 0.5","-0.02 * 0.5"},1},{},{"Velocity_slip",1,{"0 * 0.4","-0.02 * 0.4"},1},{"Velocity_slip",1,{"0.0099999998 * 0.4","-0.01732 * 0.4"},1},{"Velocity_slip",1,{"0.01732 * 0.4","-0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"0.02 * 0.4","0 * 0.4"},1},{"Velocity_slip",1,{"0.01732 * 0.4","0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"0.0099999998 * 0.4","0.01732 * 0.4"},1},{"Velocity_slip",1,{"0 * 0.4","0.02 * 0.4"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.4","0.01732 * 0.4"},1},{"Velocity_slip",1,{"-0.01732 * 0.4","0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"-0.02 * 0.4","0 * 0.4"},1},{"Velocity_slip",1,{"-0.01732 * 0.4","-0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.4","-0.01732 * 0.4"},1},{"Velocity_slip",1,{"0 * 0.4","-0.02 * 0.4"},1},{},{"Velocity_slip",1,{"0 * 0.30","-0.02 * 0.30"},1},{"Velocity_slip",1,{"0.0099999998 * 0.30","-0.01732 * 0.30"},1},{"Velocity_slip",1,{"0.01732 * 0.30","-0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"0.02 * 0.30","0 * 0.30"},1},{"Velocity_slip",1,{"0.01732 * 0.30","0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"0.0099999998 * 0.30","0.01732 * 0.30"},1},{"Velocity_slip",1,{"0 * 0.30","0.02 * 0.30"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.30","0.01732 * 0.30"},1},{"Velocity_slip",1,{"-0.01732 * 0.30","0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"-0.02 * 0.30","0 * 0.30"},1},{"Velocity_slip",1,{"-0.01732 * 0.30","-0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.30","-0.01732 * 0.30"},1},{"Velocity_slip",1,{"0 * 0.30","-0.02 * 0.30"},1},{},{"Velocity_slip",1,{"0 * 0.20","-0.02 * 0.20"},1},{"Velocity_slip",1,{"0.0099999998 * 0.20","-0.01732 * 0.20"},1},{"Velocity_slip",1,{"0.01732 * 0.20","-0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"0.02 * 0.20","0 * 0.20"},1},{"Velocity_slip",1,{"0.01732 * 0.20","0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"0.0099999998 * 0.20","0.01732 * 0.20"},1},{"Velocity_slip",1,{"0 * 0.20","0.02 * 0.20"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.20","0.01732 * 0.20"},1},{"Velocity_slip",1,{"-0.01732 * 0.20","0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"-0.02 * 0.20","0 * 0.20"},1},{"Velocity_slip",1,{"-0.01732 * 0.20","-0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.20","-0.01732 * 0.20"},1},{"Velocity_slip",1,{"0 * 0.20","-0.02 * 0.20"},1},{},{"Velocity_slip",1,{"0 * 0.1","-0.02 * 0.1"},1},{"Velocity_slip",1,{"0.0099999998 * 0.1","-0.01732 * 0.1"},1},{"Velocity_slip",1,{"0.01732 * 0.1","-0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"0.02 * 0.1","0 * 0.1"},1},{"Velocity_slip",1,{"0.01732 * 0.1","0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"0.0099999998 * 0.1","0.01732 * 0.1"},1},{"Velocity_slip",1,{"0 * 0.1","0.02 * 0.1"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.1","0.01732 * 0.1"},1},{"Velocity_slip",1,{"-0.01732 * 0.1","0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"-0.02 * 0.1","0 * 0.1"},1},{"Velocity_slip",1,{"-0.01732 * 0.1","-0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.1","-0.01732 * 0.1"},1},{"Velocity_slip",1,{"0 * 0.1","-0.02 * 0.1"},1}};
						};
					};
					class Centerline
					{
						type = "line";
						width = 5;
						points[] = {{{0.5,0.48},1},{{0.5,0.45},1},{},{{0.5,0.52},1},{{0.5,0.55},1},{},{{0.48,0.5},1},{{0.45,0.5},1},{},{{0.52,0.5},1},{{0.55,0.5},1},{}};
					};
					class WeaponName
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.61,0.86},1};
						right[] = {{0.65,0.86},1};
						down[] = {{0.61,0.9},1};
					};
					class Ammo_GUN
					{
						type = "group";
						condition = "mgun";
						class Ammo_count_GUN
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61,0.89},1};
							right[] = {{0.65,0.89},1};
							down[] = {{0.61,0.93},1};
						};
					};
					class Ammo_RKT
					{
						type = "group";
						condition = "rocket";
						class Ammo_count_RKT
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61,0.89},1};
							right[] = {{0.65,0.89},1};
							down[] = {{0.61,0.93},1};
						};
					};
					class Ammo_AGM
					{
						type = "group";
						condition = "AAmissile";
						class Ammo_count_AGM
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61,0.89},1};
							right[] = {{0.65,0.89},1};
							down[] = {{0.61,0.93},1};
						};
					};
					class Ammo_AAM
					{
						type = "group";
						condition = "ATmissile";
						class Ammo_count_AAM
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61,0.89},1};
							right[] = {{0.65,0.89},1};
							down[] = {{0.61,0.93},1};
						};
					};
					class LightsGroup
					{
						type = "group";
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHTS";
							align = "right";
							scale = 1;
							pos[] = {{0.03,"0.53 + 0.055"},1};
							right[] = {{0.07,"0.53 + 0.055"},1};
							down[] = {{0.03,"0.53 + 0.095"},1};
						};
					};
					class CollisionLightsGroup
					{
						type = "group";
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "A-COL";
							align = "right";
							scale = 1;
							pos[] = {{0.03,"0.53 + 0.105"},1};
							right[] = {{0.07,"0.53 + 0.105"},1};
							down[] = {{0.03,"0.53 + 0.145"},1};
						};
					};
					class ATMissileTOFGroup
					{
						condition = "ATmissile";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{0.61,0.92},1};
							right[] = {{0.65,0.92},1};
							down[] = {{0.61,0.96},1};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{0.69,0.92},1};
							right[] = {{0.73,0.92},1};
							down[] = {{0.69,0.96},1};
						};
					};
					class LaserTOFGroup
					{
						condition = "Bomb";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{0.61,0.92},1};
							right[] = {{0.65,0.92},1};
							down[] = {{0.61,0.96},1};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{0.69,0.92},1};
							right[] = {{0.73,0.92},1};
							down[] = {{0.69,0.96},1};
						};
					};
					class RocketTOFGroup
					{
						condition = "Rocket";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{0.61,0.92},1};
							right[] = {{0.65,0.92},1};
							down[] = {{0.61,0.96},1};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{0.69,0.92},1};
							right[] = {{0.73,0.92},1};
							down[] = {{0.69,0.96},1};
						};
					};
					class RangeNumber
					{
						type = "text";
						source = "targetDist";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.39,0.89},1};
						right[] = {{0.43,0.89},1};
						down[] = {{0.39,0.93},1};
					};
					class RangeText
					{
						type = "text";
						source = "static";
						text = "RNG";
						align = "left";
						scale = 1;
						pos[] = {{0.39,0.86},1};
						right[] = {{0.43,0.86},1};
						down[] = {{0.39,0.9},1};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 1.94384;
						pos[] = {{0.03,0.475},1};
						right[] = {{0.08,0.475},1};
						down[] = {{0.03,0.525},1};
					};
					class TorqueNumber
					{
						condition = "simulRTD";
						class Torque_number
						{
							type = "text";
							align = "left";
							scale = 1;
							source = "rtdRotorTorque";
							sourceScale = 290;
							pos[] = {{0.065,0.175},1};
							right[] = {{0.115,0.175},1};
							down[] = {{0.065,0.225},1};
						};
						class Torquetext
						{
							type = "text";
							source = "static";
							text = "%";
							align = "right";
							scale = 1;
							pos[] = {{0.07,0.175},1};
							right[] = {{0.12,0.175},1};
							down[] = {{0.07,0.225},1};
						};
					};
					class AltNumber: SpeedNumber
					{
						align = "right";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						pos[] = {{0.83,0.475},1};
						right[] = {{0.88,0.475},1};
						down[] = {{0.83,0.525},1};
					};
					class ASLNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 3.28084;
						align = "right";
						scale = 1;
						pos[] = {{0.835,0.18},1};
						right[] = {{0.875,0.18},1};
						down[] = {{0.835,0.22},1};
					};
					class VspeedScalePosta
					{
						type = "line";
						width = 5;
						points[] = {{{0.98,0.2},1},{{1,0.2},1},{},{{0.93,0.2},1},{{0.95,0.2},1},{},{{0.98,0.35},1},{{1,0.35},1},{},{{0.93,0.35},1},{{0.95,0.35},1},{},{{0.94,0.38},1},{{0.95,0.38},1},{},{{0.94,0.41},1},{{0.95,0.41},1},{},{{0.94,0.44},1},{{0.95,0.44},1},{},{{0.94,0.47},1},{{0.95,0.47},1},{},{{0.98,0.5},1},{{1,0.5},1},{},{{0.93,0.5},1},{{0.95,0.5},1},{},{{0.94,0.53},1},{{0.95,0.53},1},{},{{0.94,0.56},1},{{0.95,0.56},1},{},{{0.94,0.59},1},{{0.95,0.59},1},{},{{0.94,0.62},1},{{0.95,0.62},1},{},{{0.98,0.65},1},{{1,0.65},1},{},{{0.93,0.65},1},{{0.95,0.65},1},{},{{0.99,0.68},1},{{0.98,0.68},1},{},{{0.99,0.71},1},{{0.98,0.71},1},{},{{0.99,0.74},1},{{0.98,0.74},1},{},{{0.99,0.77},1},{{0.98,0.77},1},{},{{0.98,0.8},1},{{1,0.8},1},{},{{0.93,0.8},1},{{0.95,0.8},1},{}};
					};
					class RadarAltitudeBand
					{
						clipTL[] = {0,0.2};
						clipBR[] = {1,0.8};
						hideValue = 201;
						class radarbanda
						{
							type = "line";
							width = 17;
							points[] = {{"RadarAltitudeBone",{0,0},1},{"RadarAltitudeBone",{0,0.6},1}};
						};
					};
					class VspeedBand
					{
						type = "line";
						width = 3;
						points[] = {{"VspeedBone",{-0.01,0},1},{"VspeedBone",{-0.025,-0.015},1},{"VspeedBone",{-0.025,0.015},1},{"VspeedBone",{-0.01,0},1},{}};
					};
					class HeadingNumber: SpeedNumber
					{
						source = "heading";
						sourceScale = 1;
						align = "center";
						pos[] = {{0.5,0.045},1};
						right[] = {{0.56,0.045},1};
						down[] = {{0.5,"0.045 + 0.06"},1};
					};
					class Center_box
					{
						type = "line";
						width = 1.5;
						points[] = {{{0.45,"0.02 + 0.085 - 0.06"},1},{{"0.45 + 0.10","0.02 + 0.085 - 0.06"},1},{{"0.45 + 0.10","0.02 + 0.085"},1},{{0.45,"0.02 + 0.085"},1},{{0.45,"0.02 + 0.085 - 0.06"},1}};
					};
					class HeadingArrow
					{
						type = "line";
						width = 7;
						points[] = {{{"0.5","0.128 + 0.03"},1},{{0.5,0.128},1}};
					};
					class HeadingScale_LEFT
					{
						clipTL[] = {0,0};
						clipBR[] = {0.45,1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class HeadingScale_RIGHT
					{
						clipTL[] = {0.55,0};
						clipBR[] = {1,1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class HeadingScale_BOTTOM
					{
						clipTL[] = {0.45,"0.02 + 0.085"};
						clipBR[] = {"0.45 + 0.10",1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class Fuel_Text
					{
						type = "text";
						source = "static";
						text = "Fuel";
						align = "right";
						scale = 1;
						pos[] = {{0.03,0.9},1};
						right[] = {{0.07,0.9},1};
						down[] = {{0.03,0.94},1};
					};
					class Fuel_Number
					{
						type = "text";
						source = "fuel";
						sourceScale = 100;
						align = "right";
						scale = 1;
						pos[] = {{0.1,0.9},1};
						right[] = {{0.14,0.9},1};
						down[] = {{0.1,0.94},1};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04,0.04,0.1};
				helmetRight[] = {0.08,0,0};
				helmetDown[] = {0,-0.08,0};
			};
			class Kimi_HUD_2
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				enableParallax = 0;
				class Bones
				{
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.5};
						pos10[] = {0.75,0.75};
					};
					class ForwardVec1
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.25,0.25};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.253,0.253};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.753,0.753};
					};
					class WeaponAim1
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0,0};
						pos10[] = {0.253,0.23};
					};
					class Target
					{
						type = "vector";
						source = "target";
						pos0[] = {0.5,0.5};
						pos10[] = {0.753,0.753};
					};
					class RadarContact
					{
						type = "fixed";
						pos[] = {0,0};
					};
				};
				class Draw
				{
					color[] = {0.18,1,0.18};
					alpha = 1;
					condition = "on";
					class PlaneMovementCrosshair
					{
						type = "line";
						width = 7;
						points[] = {{"ForwardVec1",1,"Velocity",1,{0,-0.02},1},{"ForwardVec1",1,"Velocity",1,{0.01,-0.01732},1},{"ForwardVec1",1,"Velocity",1,{0.01732,-0.01},1},{"ForwardVec1",1,"Velocity",1,{0.02,0},1},{"ForwardVec1",1,"Velocity",1,{0.01732,0.01},1},{"ForwardVec1",1,"Velocity",1,{0.01,0.01732},1},{"ForwardVec1",1,"Velocity",1,{0,0.02},1},{"ForwardVec1",1,"Velocity",1,{-0.01,0.01732},1},{"ForwardVec1",1,"Velocity",1,{-0.01732,0.01},1},{"ForwardVec1",1,"Velocity",1,{-0.02,0},1},{"ForwardVec1",1,"Velocity",1,{-0.01732,-0.01},1},{"ForwardVec1",1,"Velocity",1,{-0.01,-0.01732},1},{"ForwardVec1",1,"Velocity",1,{0,-0.02},1},{},{"ForwardVec1",1,"Velocity",1,{0.04,0},1},{"ForwardVec1",1,"Velocity",1,{0.02,0},1},{},{"ForwardVec1",1,"Velocity",1,{-0.04,0},1},{"ForwardVec1",1,"Velocity",1,{-0.02,0},1},{},{"ForwardVec1",1,"Velocity",1,{0,-0.04},1},{"ForwardVec1",1,"Velocity",1,{0,-0.02},1}};
					};
					class Gunner_AIM
					{
						type = "group";
						class Circle
						{
							type = "line";
							width = 6;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{0,-0.015},1},{"ForwardVec",1,"WeaponAim",1,{0,-0.03},1},{},{"ForwardVec",1,"WeaponAim",1,{0,-0.0325},1},{"ForwardVec",1,"WeaponAim",1,{0,-0.0475},1},{},{"ForwardVec",1,"WeaponAim",1,{0,0.015},1},{"ForwardVec",1,"WeaponAim",1,{0,0.03},1},{},{"ForwardVec",1,"WeaponAim",1,{0,0.0325},1},{"ForwardVec",1,"WeaponAim",1,{0,0.0475},1},{},{"ForwardVec",1,"WeaponAim",1,{-0.015,0},1},{"ForwardVec",1,"WeaponAim",1,{-0.03,0},1},{},{"ForwardVec",1,"WeaponAim",1,{-0.0325,0},1},{"ForwardVec",1,"WeaponAim",1,{-0.0475,0},1},{},{"ForwardVec",1,"WeaponAim",1,{0.015,0},1},{"ForwardVec",1,"WeaponAim",1,{0.03,0},1},{},{"ForwardVec",1,"WeaponAim",1,{0.0325,0},1},{"ForwardVec",1,"WeaponAim",1,{0.0475,0},1}};
						};
					};
					class GunCross
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							width = 9;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{0,-0.05},1},{"ForwardVec",1,"WeaponAim",1,{0,-0.015},1},{},{"ForwardVec",1,"WeaponAim",1,{0,0.015},1},{"ForwardVec",1,"WeaponAim",1,{0,0.05},1},{},{"ForwardVec",1,"WeaponAim",1,{-0.05,0},1},{"ForwardVec",1,"WeaponAim",1,{-0.015,0},1},{},{"ForwardVec",1,"WeaponAim",1,{0.015,0},1},{"ForwardVec",1,"WeaponAim",1,{0.05,0},1},{}};
						};
					};
					class RocketCross
					{
						condition = "rocket";
						width = 6;
						class Circle
						{
							type = "line";
							width = 6;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{-0.05,-0.08},1},{"ForwardVec",1,"WeaponAim",1,{0.05,-0.08},1},{},{"ForwardVec",1,"WeaponAim",1,{0,-0.08},1},{"ForwardVec",1,"WeaponAim",1,{0,0.08},1},{},{"ForwardVec",1,"WeaponAim",1,{-0.05,0.08},1},{"ForwardVec",1,"WeaponAim",1,{0.05,0.08},1},{}};
						};
					};
					class AT_Aim
					{
						condition = "ATmissile";
						width = 2;
						class Circle
						{
							type = "line";
							width = 2;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{-0.1,-0.1},1},{"ForwardVec",1,"WeaponAim",1,{0.1,-0.1},1},{"ForwardVec",1,"WeaponAim",1,{0.1,0.1},1},{"ForwardVec",1,"WeaponAim",1,{-0.1,0.1},1},{"ForwardVec",1,"WeaponAim",1,{-0.1,-0.1},1}};
						};
					};
					class AA_aim
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							width = 2.5;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{"0 / 4","-0.248559 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 4","-0.244781 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 4","-0.233571 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.125 / 4","-0.215252 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 4","-0.190396 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 4","-0.159774 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 4","-0.12428 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 4","-0.0850072 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 4","-0.0431499 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.25 / 4","0 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 4","0.0431499 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 4","0.0850072 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 4","0.12428 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 4","0.159774 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 4","0.190396 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.125 / 4","0.215252 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 4","0.233571 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 4","0.244781 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0 / 4","0.248559 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 4","0.244781 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 4","0.233571 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 4","0.215252 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 4","0.190396 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 4","0.159774 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 4","0.12428 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 4","0.0850072 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 4","0.0431499 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.25 / 4","0 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 4","-0.0431499 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 4","-0.0850072 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 4","-0.12428 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 4","-0.159774 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 4","-0.190396 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 4","-0.215252 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 4","-0.233571 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 4","-0.244781 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0 / 4","-0.248559 / 4"},1},{},{"ForwardVec",1,"WeaponAim",1,{"0 / 2","-0.248559 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 2","-0.244781 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 2","-0.233571 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.125 / 2","-0.215252 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 2","-0.190396 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 2","-0.159774 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 2","-0.12428 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 2","-0.0850072 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 2","-0.0431499 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.25 / 2","0 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 2","0.0431499 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 2","0.0850072 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 2","0.12428 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 2","0.159774 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 2","0.190396 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.125 / 2","0.215252 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 2","0.233571 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 2","0.244781 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0 / 2","0.248559 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 2","0.244781 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 2","0.233571 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 2","0.215252 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 2","0.190396 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 2","0.159774 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 2","0.12428 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 2","0.0850072 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 2","0.0431499 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.25 / 2","0 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 2","-0.0431499 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 2","-0.0850072 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 2","-0.12428 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 2","-0.159774 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 2","-0.190396 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 2","-0.215252 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 2","-0.233571 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 2","-0.244781 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0 / 2","-0.248559 / 2"},1}};
						};
					};
					class TargetACQ
					{
						type = "line";
						width = 2;
						points[] = {{"ForwardVec",1,"target",{0,-0.06},1},{"ForwardVec",1,"target",{0,-0.055},1},{},{"ForwardVec",1,"target",{0,-0.05},1},{"ForwardVec",1,"target",{0,-0.045},1},{},{"ForwardVec",1,"target",{0,-0.04},1},{"ForwardVec",1,"target",{0,-0.035},1},{},{"ForwardVec",1,"target",{0,-0.03},1},{"ForwardVec",1,"target",{0,-0.025},1},{},{"ForwardVec",1,"target",{0,-0.02},1},{"ForwardVec",1,"target",{0,-0.015},1},{},{"ForwardVec",1,"target",{0,-0.01},1},{"ForwardVec",1,"target",{0,-0.005},1},{},{"ForwardVec",1,"target",{0,0},1},{"ForwardVec",1,"target",{0,0},1},{},{"ForwardVec",1,"target",{0,0.06},1},{"ForwardVec",1,"target",{0,0.055},1},{},{"ForwardVec",1,"target",{0,0.05},1},{"ForwardVec",1,"target",{0,0.045},1},{},{"ForwardVec",1,"target",{0,0.04},1},{"ForwardVec",1,"target",{0,0.035},1},{},{"ForwardVec",1,"target",{0,0.03},1},{"ForwardVec",1,"target",{0,0.025},1},{},{"ForwardVec",1,"target",{0,0.02},1},{"ForwardVec",1,"target",{0,0.015},1},{},{"ForwardVec",1,"target",{0,0.01},1},{"ForwardVec",1,"target",{0,0.005},1},{},{"ForwardVec",1,"target",{-0.06,0},1},{"ForwardVec",1,"target",{-0.055,0},1},{},{"ForwardVec",1,"target",{-0.05,0},1},{"ForwardVec",1,"target",{-0.045,0},1},{},{"ForwardVec",1,"target",{-0.04,0},1},{"ForwardVec",1,"target",{-0.035,0},1},{},{"ForwardVec",1,"target",{-0.03,0},1},{"ForwardVec",1,"target",{-0.025,0},1},{},{"ForwardVec",1,"target",{-0.02,0},1},{"ForwardVec",1,"target",{-0.015,0},1},{},{"ForwardVec",1,"target",{-0.01,0},1},{"ForwardVec",1,"target",{-0.005,0},1},{},{"ForwardVec",1,"target",{0.06,0},1},{"ForwardVec",1,"target",{0.055,0},1},{},{"ForwardVec",1,"target",{0.05,0},1},{"ForwardVec",1,"target",{0.045,0},1},{},{"ForwardVec",1,"target",{0.04,0},1},{"ForwardVec",1,"target",{0.035,0},1},{},{"ForwardVec",1,"target",{0.03,0},1},{"ForwardVec",1,"target",{0.025,0},1},{},{"ForwardVec",1,"target",{0.02,0},1},{"ForwardVec",1,"target",{0.015,0},1},{},{"ForwardVec",1,"target",{0.01,0},1},{"ForwardVec",1,"target",{0.005,0},1},{}};
					};
					class RadarTargets
					{
						type = "radar";
						pos0[] = {0.5,0.5};
						pos10[] = {0.753,0.753};
						width = 2.5;
						points[] = {{"ForwardVec",1,"RadarContact",{-0.01,-0.01},1},{"ForwardVec",1,"RadarContact",{0.01,-0.01},1},{"ForwardVec",1,"RadarContact",{0.01,0.01},1},{"ForwardVec",1,"RadarContact",{-0.01,0.01},1},{"ForwardVec",1,"RadarContact",{-0.01,-0.01},1}};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.035,0.035,0.1};
				helmetRight[] = {0.07,0,0};
				helmetDown[] = {0,-0.07,0};
			};
		};
		class TransportBackpacks
		{
			class _xx_ej_skram
			{
				backpack = "ej_skram";
				count = 4;
			};
			class _xx_ej_speedball
			{
				backpack = "ej_speedball";
				count = 4;
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
		class TransportWeapons
		{
			class _xx_ej_flaregun
			{
				weapon = "ej_flaregun";
				count = 2;
			};
		};
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
		class MarkerLights
		{
			class WhiteStill
			{
				name = "bily pozicni";
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
				name = "cerveny pozicni";
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
				name = "zeleny pozicni";
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
			class AddHellfire
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
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
			class HidePilotMFD
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
				radius = 1.5;
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
				radius = 1.5;
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
				sound[] = {"Uh-60\sound\Engine_Close.ogg",1,1,200};
				frequency = "rotorSpeed";
				volume = "3 * camPos * (0 max (rotorSpeed-0.4))";
			};
			class RotorExt
			{
				sound[] = {"Uh-60\sound\Int_Rotor.wav",1,1,700};
				frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
				volume = "camPos *3* (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust)";
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
				sound[] = {"Uh-60\sound\Int_Main.ogg",1,1};
				frequency = "rotorSpeed";
				volume = "1*(1-camPos)*(0 max (rotorSpeed-0.4))";
			};
			class RotorInt
			{
				sound[] = {"Uh-60\sound\uh60_inside.wav",1,1};
				frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
				volume = "(1 - camPos) * (rotorSpeed factor [0.3, 0.7]) * (1 + rotorThrust) * 0.7";
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
					sound[] = {"Uh-60\sound\Engine_Close.ogg",1,1,200};
					frequency = "rotorSpeed";
					volume = "3 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class RotorExt
				{
					sound[] = {"Uh-60\sound\Rotor_Close.ogg",1,1,700};
					frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
					volume = "camPos *3* (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust)";
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
		hiddenSelectionsTextures[] = {"\uh-60\data\uh60m_fuselage_co.paa","\uh-60\data\uh60m_engine_co.paa","\uh-60\data\default_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"uh-60\data\mat\uh60m_dust_filter.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","uh-60\data\mat\uh60m_engine.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass.rvmat","A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat","A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat","uh-60\data\mat\uh60m_fuselage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","uh-60\data\mat\uh60m_interior.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","uh-60\data\mat\uh60m_navijak.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","a3\air_f_beta\heli_transport_01\data\heli_transport_01_glass.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat","A3\data_F\default.rvmat","A3\data_F\default.rvmat","A3\data_F\default_destruct.rvmat","uh-60\data\mat\uh60m_engine_MEV.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","uh-60\data\mat\uh60m_fuselage_MEV.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat","A3\data_F\default.rvmat","A3\data_F\default.rvmat","A3\data_F\default_destruct.rvmat"};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				minElev = -90;
				maxElev = 2;
				initElev = 0;
				minTurn = -160;
				maxTurn = 7;
				initTurn = 0;
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				weapons[] = {"M240_veh_2"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerName = "Right M240 Gunner";
				memoryPointGun = "machinegun_1";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerCompartments = "Compartment2";
				hasGunner = 1;
				hasCrew = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -90;
				maxElev = 2;
				initElev = 0;
				minTurn = -7;
				maxTurn = 160;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200};
				discreteDistanceInitIndex = 1;
				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerName = "Left M240 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
				isCopilot = 1;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Light_03_Enter";
				memoryPointsGetInGunner = "pos copilot";
				memoryPointsGetInGunnerDir = "pos copilot dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				memoryPointGunnerOptics = "";
				CanEject = 0;
				startEngine = 0;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				turretInfoType = "";
				showAllTargets = 2;
				copilotHasFlares = 1;
				LockDetectionSystem = "1 + 2 + 4 + 8";
				incomingMissileDetectionSystem = 16;
				TurretCanSee = "1+2+4+8+16";
				weapons[] = {"EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos side";
				memoryPointsGetInGunnerDir = "pos side dir";
				gunnerName = "Left Side FFV Position";
				proxyIndex = 11;
				maxElev = 15;
				minElev = -80;
				maxTurn = 0;
				minTurn = -75;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "LDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos side 4";
				memoryPointsGetInGunnerDir = "pos side dir 4";
				gunnerName = "Left Side FFV Position 2";
				proxyIndex = 12;
				maxElev = 10;
				minElev = -80;
				maxTurn = 65;
				minTurn = 0;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "LDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos side 2";
				memoryPointsGetInGunnerDir = "pos side dir 2";
				gunnerName = "Right Side FFV Position";
				proxyIndex = 10;
				maxElev = 15;
				minElev = -80;
				maxTurn = 75;
				minTurn = -1;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "RDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_04: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos side 3";
				memoryPointsGetInGunnerDir = "pos side dir 3";
				gunnerName = "Right Side FFV Position 2";
				proxyIndex = 9;
				maxElev = 15;
				minElev = -80;
				maxTurn = 0;
				minTurn = -54;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "RDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
		};
		class textureSources
		{
			class NATO
			{
				displayName = "NATO";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_nato_co.paa","\uh-60\data\uh60m_engine_nato_co.paa","\uh-60\data\default_co.paa"};
				factions[] = {"BLU_F"};
			};
			class ADF
			{
				displayName = "ADF";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_adf.paa","\uh-60\data\uh60m_engine_adf.paa","\uh-60\data\default_co.paa"};
				factions[] = {"BLU_F"};
			};
			class RDA
			{
				displayName = "RDA SEC-FOR";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_rda_co.paa","\uh-60\data\uh60m_engine_rda_co.paa","\uh-60\data\default_co.paa"};
				factions[] = {"BLU_F"};
			};
			class Desert
			{
				displayName = "Desert";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_desert_co.paa","\uh-60\data\uh60m_engine_desert_co.paa","\uh-60\data\default_co.paa"};
				factions[] = {"BLU_F"};
			};
			class Black
			{
				displayName = "Black";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_black_co.paa","\uh-60\data\uh60m_engine_black_co.paa","\uh-60\data\default_co.paa"};
				factions[] = {"BLU_F"};
			};
			class BlackRiver
			{
				displayName = "Black River PMC";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_blackriver_co.paa","\uh-60\data\uh60m_engine_blackriver_co.paa","\uh-60\data\default_co.paa"};
				factions[] = {"BRPMC"};
			};
			class USArmy
			{
				displayName = "US Army";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_co.paa","\uh-60\data\uh60m_engine_co.paa","\uh-60\data\default_co.paa"};
				factions[] = {"BLU_F"};
			};
			class USArmyMEV
			{
				displayName = "US ArmyMEV";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_mev_co.paa","\uh-60\data\uh60m_engine_mev_co.paa","\uh-60\data\default_co.paa"};
				factions[] = {"BLU_F"};
			};
			class USN
			{
				displayName = "USN";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_Navy_co.paa","\uh-60\data\uh60m_engine_Navy_co.paa","\uh-60\data\default_co.paa"};
				factions[] = {"BLU_F"};
			};
			class SOAR
			{
				displayName = "SOAR";
				author = "EricJ";
				textures[] = {"\uh-60\data\uh60m_fuselage_dap_co.paa","\uh-60\data\uh60m_engine_DAP_co.paa","\uh-60\data\default_co.paa"};
				factions[] = {"TF160","BLU_F"};
			};
		};
		class Eventhandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", false, false] call bis_fnc_initVehicle;};";
		};
	};
	class ej_UH60M: ej_UH60M_base
	{
		dlc = "ej_Uh60";
		scope = 2;
		side = 1;
		faction = "USA";
		author = "EricJ";
		_generalMacro = "UH60M";
		displayName = "UH-60M";
		crew = "B_Helipilot_F";
		model = "\UH-60\UH60\ej_UH60M.p3d";
		typicalCargo[] = {"B_Helipilot_F"};
		textureList[] = {"USArmy",1};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft","ropeOriginRight"};
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		class MFD{};
	};
	class ej_UH60M_NATO: ej_UH60M
	{
		dlc = "ej_Uh60";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		author = "EricJ";
		_generalMacro = "UH60M";
		displayName = "UH-60M (NATO)";
		textureList[] = {"NATO",1};
		ForceInGarage = 1;
	};
	class ej_UH60M_BRPMC: ej_UH60M
	{
		dlc = "ej_Uh60";
		scope = 2;
		side = 0;
		faction = "BRPMC";
		crew = "BRPMC_Pilot";
		author = "EricJ";
		_generalMacro = "UH60M";
		displayName = "UH-60M (Black River PMC)";
		textureList[] = {"BlackRiver",1};
		model = "\UH-60\UH60\ej_UH60M_BRPMC.p3d";
		ForceInGarage = 1;
		class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				minElev = -90;
				maxElev = 2;
				initElev = 0;
				minTurn = -160;
				maxTurn = 7;
				initTurn = 0;
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				weapons[] = {"M240_veh_2"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerName = "Right M240 Gunner";
				memoryPointGun = "machinegun_1";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerCompartments = "Compartment2";
				hasGunner = 1;
				hasCrew = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -90;
				maxElev = 2;
				initElev = 0;
				minTurn = -7;
				maxTurn = 160;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200};
				discreteDistanceInitIndex = 1;
				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerName = "Left M240 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
				isCopilot = 1;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Light_03_Enter";
				memoryPointsGetInGunner = "pos copilot";
				memoryPointsGetInGunnerDir = "pos copilot dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				memoryPointGunnerOptics = "";
				CanEject = 0;
				startEngine = 0;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				turretInfoType = "";
				showAllTargets = 2;
				copilotHasFlares = 1;
				LockDetectionSystem = "1 + 2 + 4 + 8";
				incomingMissileDetectionSystem = 16;
				TurretCanSee = "1+2+4+8+16";
				weapons[] = {"EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos side";
				memoryPointsGetInGunnerDir = "pos side dir";
				gunnerName = "Left Side FFV Position";
				proxyIndex = 10;
				maxElev = 15;
				minElev = -80;
				maxTurn = 55;
				minTurn = -18;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
				enabledByAnimationSource = "Ldoor";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos side 4";
				memoryPointsGetInGunnerDir = "pos side dir 4";
				gunnerName = "Left Side FFV Position 2";
				proxyIndex = 9;
				maxElev = 15;
				minElev = -80;
				maxTurn = 15;
				minTurn = -55;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
				enabledByAnimationSource = "Ldoor";
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos side 2";
				memoryPointsGetInGunnerDir = "pos side dir 2";
				gunnerName = "Right Side FFV Position";
				proxyIndex = 12;
				maxElev = 15;
				minElev = -80;
				maxTurn = 47;
				minTurn = -45;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
				enabledByAnimationSource = "Rdoor";
			};
			class CargoTurret_04: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos side 3";
				memoryPointsGetInGunnerDir = "pos side dir 3";
				gunnerName = "Right Side FFV Position 2";
				proxyIndex = 11;
				maxElev = 15;
				minElev = -80;
				maxTurn = 65;
				minTurn = -1;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
				enabledByAnimationSource = "Rdoor";
			};
		};
	};
	class ej_UH60M_U: ej_UH60M_base
	{
		dlc = "ej_Uh60";
		author = "EricJ";
		_generalMacro = "UH60M_U";
		scope = 2;
		accuracy = 1;
		side = 1;
		faction = "USA";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		displayName = "UH-60M (Unarmed)";
		model = "\UH-60\UH60\ej_UH60M_U.p3d";
		textureList[] = {"USArmy",1};
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		class MFD{};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft","ropeOriginRight"};
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
				memoryPointGunnerOptics = "";
				CanEject = 0;
				startEngine = 0;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				turretInfoType = "";
				showAllTargets = 2;
				copilotHasFlares = 1;
				LockDetectionSystem = "1 + 2 + 4 + 8";
				incomingMissileDetectionSystem = 16;
				TurretCanSee = "1+2+4+8+16";
				weapons[] = {"EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos side";
				memoryPointsGetInGunnerDir = "pos side dir";
				gunnerName = "Left Side FFV Position";
				proxyIndex = 11;
				maxElev = 15;
				minElev = -80;
				maxTurn = 0;
				minTurn = -75;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "LDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos side 4";
				memoryPointsGetInGunnerDir = "pos side dir 4";
				gunnerName = "Left Side FFV Position 2";
				proxyIndex = 12;
				maxElev = 10;
				minElev = -80;
				maxTurn = 65;
				minTurn = 0;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "LDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos side 2";
				memoryPointsGetInGunnerDir = "pos side dir 2";
				gunnerName = "Right Side FFV Position";
				proxyIndex = 10;
				maxElev = 15;
				minElev = -80;
				maxTurn = 75;
				minTurn = -1;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "RDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_04: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos side 3";
				memoryPointsGetInGunnerDir = "pos side dir 3";
				gunnerName = "Right Side FFV Position 2";
				proxyIndex = 9;
				maxElev = 15;
				minElev = -80;
				maxTurn = 0;
				minTurn = -54;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "RDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
		};
	};
	class ej_UH60M_UT: ej_UH60M_U
	{
		dlc = "ej_Uh60";
		author = "EricJ";
		_generalMacro = "UH60M_U";
		scope = 2;
		accuracy = 1;
		side = 1;
		faction = "USA";
		fuelCapacity = 950;
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		displayName = "UH-60M (Unarmed/ESSS)";
		model = "\UH-60\UH60\ej_UH60M_UT.p3d";
		textureList[] = {"USArmy",1};
		slingLoadMaxCargoMass = 3600;
	};
	class ej_UH60M_MEV: ej_UH60M_base
	{
		dlc = "ej_Uh60";
		author = "EricJ";
		_generalMacro = "UH60M_MEV";
		scope = 2;
		accuracy = 1;
		side = 1;
		faction = "USA";
		transportSoldier = 4;
		attendant = 1;
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		fuelCapacity = 950;
		displayName = "UH-60M (Medevac)";
		model = "\UH-60\UH60\ej_UH60M_MEV.p3d";
		textureList[] = {"USArmyMEV",1};
		slingLoadMaxCargoMass = 3600;
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		class MFD{};
		class CargoTurret;
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class Medical_Menu
				{
					displayName = "CSTRING(OpenMenu)";
					runOnHover = 0;
					exceptions[] = {"isNotInside"};
					condition = "QUOTE([ARR_2(ACE_player,_target)] call FUNC(canOpenMenu))";
					statement = "QUOTE([_target] call DFUNC(openMenu))";
					icon = "PATHTOEF(medical,UI\icons\medical_cross.paa)";
				};
			};
		};
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
				memoryPointGunnerOptics = "";
				CanEject = 0;
				startEngine = 0;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				turretInfoType = "";
				showAllTargets = 2;
				copilotHasFlares = 1;
				LockDetectionSystem = "1 + 2 + 4 + 8";
				incomingMissileDetectionSystem = 16;
				TurretCanSee = "1+2+4+8+16";
				weapons[] = {"EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
			};
		};
	};
	class ej_UH60M_MEV_NOESSS: ej_UH60M_base
	{
		dlc = "ej_Uh60";
		author = "EricJ";
		_generalMacro = "UH60M_MEV";
		scope = 2;
		accuracy = 1;
		side = 1;
		faction = "USA";
		transportSoldier = 4;
		attendant = 1;
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		displayName = "UH-60M (Medevac/No ESSS)";
		model = "\UH-60\UH60\ej_UH60M_MEV_NOESSS.p3d";
		textureList[] = {"USArmyMEV",1};
		slingLoadMaxCargoMass = 3700;
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		class MFD{};
		class CargoTurret;
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class Medical_Menu
				{
					displayName = "CSTRING(OpenMenu)";
					runOnHover = 0;
					exceptions[] = {"isNotInside"};
					condition = "QUOTE([ARR_2(ACE_player,_target)] call FUNC(canOpenMenu))";
					statement = "QUOTE([_target] call DFUNC(openMenu))";
					icon = "PATHTOEF(medical,UI\icons\medical_cross.paa)";
				};
			};
		};
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
				memoryPointGunnerOptics = "";
				CanEject = 0;
				startEngine = 0;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				turretInfoType = "";
				showAllTargets = 2;
				copilotHasFlares = 1;
				LockDetectionSystem = "1 + 2 + 4 + 8";
				incomingMissileDetectionSystem = 16;
				TurretCanSee = "1+2+4+8+16";
				weapons[] = {"EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
			};
		};
	};
	class ej_MH60S: ej_UH60M_base
	{
		dlc = "ej_Uh60";
		author = "EricJ";
		_generalMacro = "MH60S";
		scope = 2;
		accuracy = 1;
		side = 1;
		faction = "USN";
		transportSoldier = 12;
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		fuelCapacity = 950;
		displayName = "MH-60S (Transport)";
		model = "\UH-60\MH60\ej_MH60S.p3d";
		weapons[] = {"ej_master_arms_safe"};
		textureList[] = {"USN",1};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft","ropeOriginRight"};
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
	};
	class ej_MH60SI: ej_MH60S
	{
		dlc = "ej_Uh60";
		author = "EricJ";
		_generalMacro = "ej_MH60SI";
		scope = 2;
		accuracy = 1;
		side = 1;
		faction = "USN";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		displayName = "MH-60S (Insertion)";
		model = "\UH-60\MH60\ej_MH60SI.p3d";
		attenuationEffectType = "OpenCarAttenuation";
		cargoAction[] = {"passenger_flatground_leanleft","passenger_flatground_leanright","passenger_flatground_crosslegs","passenger_flatground_leanleft"};
		class CargoTurret;
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev = -90;
				maxElev = 2;
				initElev = 0;
				minTurn = -160;
				maxTurn = 7;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				weapons[] = {"M240_veh_2"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerName = "Right M240 Gunner";
				memoryPointGun = "machinegun_1";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerCompartments = "Compartment2";
				hasGunner = 1;
				hasCrew = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -90;
				maxElev = 2;
				initElev = 0;
				minTurn = -7;
				maxTurn = 160;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200};
				discreteDistanceInitIndex = 1;
				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerName = "Left M240 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
				isCopilot = 1;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Light_03_Enter";
				memoryPointsGetInGunner = "pos copilot";
				memoryPointsGetInGunnerDir = "pos copilot dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				memoryPointGunnerOptics = "";
				CanEject = 0;
				startEngine = 0;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				turretInfoType = "Rsc_HMDs_Kimi_Helo_UI_Turret";
				showAllTargets = 2;
				copilotHasFlares = 1;
				LockDetectionSystem = "1 + 2 + 4 + 8";
				incomingMissileDetectionSystem = 16;
				TurretCanSee = "1+2+4+8+16";
				weapons[] = {"EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos side";
				memoryPointsGetInGunnerDir = "pos side dir";
				gunnerName = "Left Side FFV Position";
				proxyIndex = 10;
				maxElev = 15;
				minElev = -80;
				maxTurn = 65;
				minTurn = -15;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "LDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos side 4";
				memoryPointsGetInGunnerDir = "pos side dir 4";
				gunnerName = "Left Side FFV Position 2";
				proxyIndex = 9;
				maxElev = 15;
				minElev = -80;
				maxTurn = 20;
				minTurn = -65;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "LDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos side 2";
				memoryPointsGetInGunnerDir = "pos side dir 2";
				gunnerName = "Right Side FFV Position";
				proxyIndex = 11;
				maxElev = 15;
				minElev = -80;
				maxTurn = 20;
				minTurn = -65;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "RDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_04: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos side 3";
				memoryPointsGetInGunnerDir = "pos side dir 3";
				gunnerName = "Right Side FFV Position 2";
				proxyIndex = 12;
				maxElev = 15;
				minElev = -80;
				maxTurn = 65;
				minTurn = -15;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "RDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
		};
	};
	class ej_MH60SI2: ej_MH60S
	{
		dlc = "ej_Uh60";
		author = "EricJ";
		_generalMacro = "ej_MH60SI2";
		scope = 2;
		accuracy = 1;
		side = 1;
		faction = "USN";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		displayName = "MH-60S (2 pylons)";
		model = "\UH-60\MH60\ej_MH60SI2.p3d";
		castCargoShadow = 1;
		transportSoldier = 0;
		attenuationEffectType = "OpenCarAttenuation";
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		slingLoadMaxCargoMass = 300;
		cargoProxyIndexes[] = {1,2};
		class CargoTurret;
		class UserActions
		{
			class PilotMFDOn
			{
				displayName = "FLIR Page On";
				displayNameDefault = "";
				position = "";
				radius = 20;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip5"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip5"",1];";
				priority = 4;
			};
			class PilotMFDOff: PilotMFDOn
			{
				displayName = "FLIR Page Off";
				condition = "this animationPhase ""copip5"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip5"",0];";
			};
		};
		class Turrets: Turrets
		{
			class CoPilotObs: MainTurret
			{
				isCopilot = 0;
				body = "ObsTurret";
				gun = "ObsGun";
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
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				showHMD = 0;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				primaryGunner = 1;
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor = 1;
				turretInfoType = "Rsc_HMDs_Kimi_Helo_UI_Turret";
				showAllTargets = 2;
				copilotHasFlares = 1;
				weapons[] = {"ej_master_arms_safe","EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon","Laserdesignator_mounted"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine","Laserbatteries"};
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						directionStabilized = 0;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
						gunnerOpticsEffect[] = {"TankCommanderOptics1"};
					};
					class WideL: Wide
					{
						opticsDisplayName = "WL";
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
						gunnerOpticsColor[] = {0,0,0,1};
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						directionStabilized = 1;
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.02;
						minFov = 0.02;
						maxFov = 0.02;
					};
					class Narrower: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.01;
						minFov = 0.01;
						maxFov = 0.01;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 40;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.4;
					minFov = 0.3;
					maxFov = 1;
				};
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev = -90;
				maxElev = 2;
				initElev = 0;
				minTurn = -160;
				maxTurn = 7;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				weapons[] = {"M240_veh_2"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerName = "Right M240 Gunner";
				memoryPointGun = "machinegun_1";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerCompartments = "Compartment2";
				hasGunner = 1;
				hasCrew = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -90;
				maxElev = 2;
				initElev = 0;
				minTurn = -7;
				maxTurn = 160;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200};
				discreteDistanceInitIndex = 1;
				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerName = "Left M240 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos side";
				memoryPointsGetInGunnerDir = "pos side dir";
				gunnerName = "Left Side FFV Position";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -80;
				maxTurn = 55;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
				enabledByAnimationSource = "Ldoor";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos side 2";
				memoryPointsGetInGunnerDir = "pos side dir2";
				gunnerName = "Right Side FFV Position";
				proxyIndex = 2;
				maxElev = 15;
				minElev = -80;
				maxTurn = 55;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
				enabledByAnimationSource = "Rdoor";
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\UH-60\Data\UI\Heli_Blackhawk.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 5;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL"};
						turret[] = {1};
						maxweight = 400;
						UIposition[] = {0.06,0.15};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 4;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL"};
						maxweight = 400;
						UIposition[] = {0.5,0.15};
					};
				};
			};
		};
	};
	class ej_MH60SI3: ej_MH60SI2
	{
		dlc = "ej_Uh60";
		author = "EricJ";
		_generalMacro = "ej_MH60SI3";
		scope = 2;
		accuracy = 1;
		side = 1;
		faction = "USN";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		displayName = "MH-60S (M197/Pylon)";
		model = "\UH-60\MH60\ej_MH60SI3.p3d";
		transportSoldier = 0;
		attenuationEffectType = "OpenCarAttenuation";
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		slingLoadMaxCargoMass = 300;
		memoryPointGun = "Cannon_end";
		class UserActions
		{
			class PilotMFDOn
			{
				displayName = "FLIR Page On";
				displayNameDefault = "";
				position = "";
				radius = 20;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip5"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip5"",1];";
				priority = 4;
			};
			class PilotMFDOff: PilotMFDOn
			{
				displayName = "FLIR Page Off";
				condition = "this animationPhase ""copip5"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip5"",0];";
			};
		};
		weapons[] = {"ej_master_arms_safe","EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon","M197_MH60"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine","750Rnd_M197_MH60"};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CoPilotObs: MainTurret
			{
				isCopilot = 0;
				body = "ObsTurret";
				gun = "ObsGun";
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
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				showHMD = 0;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				primaryGunner = 1;
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor = 1;
				turretInfoType = "Rsc_HMDs_Kimi_Helo_UI_Turret";
				showAllTargets = 2;
				copilotHasFlares = 1;
				weapons[] = {"ej_master_arms_safe","EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon","Laserdesignator_mounted"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine","Laserbatteries"};
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						directionStabilized = 0;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
						gunnerOpticsEffect[] = {"TankCommanderOptics1"};
					};
					class WideL: Wide
					{
						opticsDisplayName = "WL";
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
						gunnerOpticsColor[] = {0,0,0,1};
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						directionStabilized = 1;
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.02;
						minFov = 0.02;
						maxFov = 0.02;
					};
					class Narrower: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.01;
						minFov = 0.01;
						maxFov = 0.01;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 40;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.4;
					minFov = 0.3;
					maxFov = 1;
				};
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev = -90;
				maxElev = 2;
				initElev = 0;
				minTurn = -160;
				maxTurn = 7;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				weapons[] = {"M240_veh_2"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerName = "Right M240 Gunner";
				memoryPointGun = "machinegun_1";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerCompartments = "Compartment2";
				hasGunner = 1;
				hasCrew = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -90;
				maxElev = 2;
				initElev = 0;
				minTurn = -7;
				maxTurn = 160;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200};
				discreteDistanceInitIndex = 1;
				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunnerName = "Left M240 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\UH-60\Data\UI\Heli_Blackhawk.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 5;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL"};
						turret[] = {1};
						maxweight = 400;
						UIposition[] = {0.06,0.4};
					};
				};
			};
		};
	};
	class ej_MH60M: ej_UH60M_base
	{
		dlc = "ej_Uh60";
		scope = 2;
		accuracy = 1;
		side = 1;
		faction = "TF160";
		vehicleClass = "Air";
		model = "\UH-60\MH60\ej_MH60M.p3d";
		displayName = "MH-60M (Insertion)";
		crew = "160th_SOAR_Pilot";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		hideWeaponsCargo = 1;
		transportSoldier = 12;
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft","ropeOriginRight"};
		weapons[] = {"EricJ_CMFlareLauncherDAP","kuy_IR_Jammer_Weapon"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
		memoryPointCM[] = {"Flare_launcher1","Flare_launcher2","Flare_launcher3"};
		memoryPointCMDir[] = {"Flare_launcher1_dir","Flare_launcher2_dir","Flare_launcher3_dir"};
		textureList[] = {"SOAR",1};
		laserScanner = 1;
		Cost = 5000;
		cargoAction[] = {"passenger_flatground_leanleft","passenger_flatground_leanright","passenger_flatground_crosslegs","passenger_flatground_leanleft"};
		class RenderTargets
		{
			class MFD1
			{
				renderTarget = "rendertarget0";
				class View01
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
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
				radius = 1.5;
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
				radius = 1.5;
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
			class PilotMFDOn
			{
				displayName = "FLIR Page On";
				displayNameDefault = "";
				position = "";
				radius = 20;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip5"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip5"",1];";
				priority = 4;
			};
			class PilotMFDOff: PilotMFDOn
			{
				displayName = "FLIR Page Off";
				condition = "this animationPhase ""copip5"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip5"",0];";
			};
		};
		class TransportBackpacks
		{
			class _xx_ej_skram_SOAR
			{
				backpack = "ej_skram_SOAR";
				count = 4;
			};
			class _xx_ej_speedball
			{
				backpack = "ej_speedball";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShellYellow
			{
				count = 10;
				magazine = "SmokeShellYellow";
			};
			class _xx_41630m855a1_mag
			{
				count = 14;
				magazine = "41630m855a1_mag";
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
				count = 10;
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
			class _xx_ej_PVS15
			{
				count = 2;
				name = "ej_PVS15";
			};
		};
		class TransportWeapons
		{
			class _xx_ej_flaregun
			{
				weapon = "ej_flaregun";
				count = 2;
			};
			class _xx_ej_hk41610_ERCO_IR
			{
				weapon = "ej_hk41610_ERCO_IR";
				count = 2;
			};
		};
		class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev = -60;
				maxElev = 2;
				initElev = -45;
				minTurn = -160;
				maxTurn = 5;
				initTurn = -90;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				weapons[] = {"LMG_Minigun_Transport2"};
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
				gunnerName = "Right M134 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerCompartments = "Compartment2";
				hasGunner = 1;
				hasCrew = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -60;
				maxElev = 2;
				initElev = -45;
				minTurn = -5;
				maxTurn = 160;
				initTurn = 90;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] = {"LMG_Minigun_Transport"};
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
				gunnerName = "Left M134 Gunner";
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 1;
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
				isCopilot = 1;
				body = "ObsTurret";
				gun = "ObsGun";
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
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				memoryPointGun = "gun_end";
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				showHMD = 1;
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
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor = 1;
				turretInfoType = "Rsc_HMDs_Kimi_Helo_UI_Turret";
				copilotHasFlares = 1;
				weapons[] = {"ej_master_arms_safe","Laserdesignator_mounted","kuy_IR_Jammer_Weapon"};
				magazines[] = {"Laserbatteries","kuy_IR_Jammer_Magazine"};
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						directionStabilized = 0;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
						gunnerOpticsEffect[] = {"TankCommanderOptics1"};
					};
					class WideL: Wide
					{
						opticsDisplayName = "WL";
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
						gunnerOpticsColor[] = {0,0,0,1};
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						directionStabilized = 1;
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.02;
						minFov = 0.02;
						maxFov = 0.02;
					};
					class Narrower: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.01;
						minFov = 0.01;
						maxFov = 0.01;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 40;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.4;
					minFov = 0.3;
					maxFov = 1;
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos side";
				memoryPointsGetInGunnerDir = "pos side dir";
				gunnerName = "Left Side FFV Position";
				proxyIndex = 10;
				maxElev = 15;
				minElev = -80;
				maxTurn = 65;
				minTurn = -15;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "LDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos side 4";
				memoryPointsGetInGunnerDir = "pos side dir 4";
				gunnerName = "Left Side FFV Position 2";
				proxyIndex = 9;
				maxElev = 15;
				minElev = -80;
				maxTurn = 20;
				minTurn = -65;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "LDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos side 2";
				memoryPointsGetInGunnerDir = "pos side dir 2";
				gunnerName = "Right Side FFV Position";
				proxyIndex = 11;
				maxElev = 15;
				minElev = -80;
				maxTurn = 20;
				minTurn = -65;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "RDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_04: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos side 3";
				memoryPointsGetInGunnerDir = "pos side dir 3";
				gunnerName = "Right Side FFV Position 2";
				proxyIndex = 12;
				maxElev = 15;
				minElev = -80;
				maxTurn = 65;
				minTurn = -15;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "RDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
		};
	};
	class ej_MH60L: ej_MH60M
	{
		dlc = "ej_Uh60";
		scope = 2;
		accuracy = 1;
		side = 1;
		faction = "TF160";
		vehicleClass = "Air";
		model = "\UH-60\MH60\ej_MH60L.p3d";
		displayName = "MH-60L (Insertion)";
		class MFD{};
	};
	class ej_MH60MDAP: ej_MH60M
	{
		dlc = "ej_Uh60";
		scope = 2;
		accuracy = 1;
		side = 1;
		faction = "TF160";
		vehicleClass = "Air";
		availableForSupportTypes[] = {"CAS_Heli"};
		displayName = "MH-60M DAP 2-Pylon (M230/Pylon)";
		model = "\UH-60\MH60\ej_MH60MDAP.p3d";
		crew = "160th_SOAR_Pilot";
		enableManualFire = 1;
		hideWeaponsCargo = 1;
		transportSoldier = 0;
		ace_fastroping_enabled = 0;
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_1";
		slingLoadMaxCargoMass = 300;
		memoryPointGun = "Cannon_end";
		class UserActions
		{
			class PilotMFDOn
			{
				displayName = "FLIR Page On";
				displayNameDefault = "";
				position = "";
				radius = 20;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip5"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip5"",1];";
				priority = 4;
			};
			class PilotMFDOff: PilotMFDOn
			{
				displayName = "FLIR Page Off";
				condition = "this animationPhase ""copip5"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip5"",0];";
			};
		};
		weapons[] = {"ej_master_arms_safe","EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon","M230"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine","1200Rnd_30x113mm_M789_HEDP"};
		class Turrets: Turrets
		{
			class CoPilotObs: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				body = "ObsTurret";
				gun = "ObsGun";
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
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				showAsCargo = 1;
				showHMD = 1;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				primaryGunner = 1;
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor = 1;
				turretInfoType = "Rsc_HMDs_Kimi_Helo_UI_Turret";
				showAllTargets = 2;
				copilotHasFlares = 1;
				weapons[] = {"ej_master_arms_safe","Laserdesignator_mounted","kuy_IR_Jammer_Weapon","EricJ_CMFlareLauncherDAP"};
				magazines[] = {"Laserbatteries","kuy_IR_Jammer_Magazine","168Rnd_CMFlare_Chaff_Magazine"};
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						directionStabilized = 0;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
						gunnerOpticsEffect[] = {"TankCommanderOptics1"};
					};
					class WideL: Wide
					{
						opticsDisplayName = "WL";
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
						gunnerOpticsColor[] = {0,0,0,1};
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						directionStabilized = 1;
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.02;
						minFov = 0.02;
						maxFov = 0.02;
					};
					class Narrower: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.01;
						minFov = 0.01;
						maxFov = 0.01;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 40;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.4;
					minFov = 0.3;
					maxFov = 1;
				};
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev = -60;
				maxElev = 2;
				initElev = -45;
				minTurn = -160;
				maxTurn = 5;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				weapons[] = {"LMG_Minigun_Transport2"};
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
				gunnerName = "Right M134 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerCompartments = "Compartment2";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				showAsCargo = 1;
			};
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -60;
				maxElev = 2;
				initElev = -45;
				minTurn = -5;
				maxTurn = 160;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex = 5;
				weapons[] = {"LMG_Minigun_Transport"};
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
				gunnerName = "Left M134 Gunner";
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
				proxyIndex = 1;
				showAsCargo = 1;
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\UH-60\Data\UI\Heli_Blackhawk.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 5;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL"};
						turret[] = {1};
						maxweight = 400;
						UIposition[] = {0.06,0.4};
					};
				};
			};
		};
	};
	class ej_MH60MDAP2: ej_MH60M
	{
		dlc = "ej_Uh60";
		scope = 2;
		accuracy = 1;
		side = 1;
		faction = "TF160";
		vehicleClass = "Air";
		availableForSupportTypes[] = {"CAS_Heli"};
		displayName = "MH-60M DAP 2-Pylon";
		model = "\UH-60\MH60\ej_MH60MDAP2.p3d";
		crew = "160th_SOAR_Pilot";
		enableManualFire = 1;
		hideWeaponsCargo = 1;
		transportSoldier = 0;
		ace_fastroping_enabled = 0;
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_1";
		slingLoadMaxCargoMass = 300;
		memoryPointGun = "Cannon_end";
		class UserActions
		{
			class PilotMFDOn
			{
				displayName = "FLIR Page On";
				displayNameDefault = "";
				position = "";
				radius = 20;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip5"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip5"",1];";
				priority = 4;
			};
			class PilotMFDOff: PilotMFDOn
			{
				displayName = "FLIR Page Off";
				condition = "this animationPhase ""copip5"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip5"",0];";
			};
		};
		weapons[] = {"ej_master_arms_safe","EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
		class Turrets: Turrets
		{
			class CoPilotObs: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				body = "ObsTurret";
				gun = "ObsGun";
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
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				showAsCargo = 1;
				showHMD = 1;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				primaryGunner = 1;
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor = 1;
				turretInfoType = "Rsc_HMDs_Kimi_Helo_UI_Turret";
				showAllTargets = 2;
				copilotHasFlares = 1;
				weapons[] = {"ej_master_arms_safe","Laserdesignator_mounted","kuy_IR_Jammer_Weapon","EricJ_CMFlareLauncherDAP"};
				magazines[] = {"Laserbatteries","kuy_IR_Jammer_Magazine","168Rnd_CMFlare_Chaff_Magazine"};
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						directionStabilized = 0;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
						gunnerOpticsEffect[] = {"TankCommanderOptics1"};
					};
					class WideL: Wide
					{
						opticsDisplayName = "WL";
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
						gunnerOpticsColor[] = {0,0,0,1};
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						directionStabilized = 1;
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.02;
						minFov = 0.02;
						maxFov = 0.02;
					};
					class Narrower: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.01;
						minFov = 0.01;
						maxFov = 0.01;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 40;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.4;
					minFov = 0.3;
					maxFov = 1;
				};
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev = -60;
				maxElev = 2;
				initElev = -45;
				minTurn = -160;
				maxTurn = 5;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				weapons[] = {"LMG_Minigun_Transport2"};
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
				gunnerName = "Right M134 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerCompartments = "Compartment2";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				showAsCargo = 1;
			};
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -60;
				maxElev = 2;
				initElev = -45;
				minTurn = -5;
				maxTurn = 160;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex = 5;
				weapons[] = {"LMG_Minigun_Transport"};
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
				gunnerName = "Left M134 Gunner";
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
				proxyIndex = 1;
				showAsCargo = 1;
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\UH-60\Data\UI\Heli_Blackhawk.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 5;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL"};
						turret[] = {1};
						maxweight = 400;
						UIposition[] = {0.06,0.15};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 4;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL"};
						maxweight = 400;
						UIposition[] = {0.5,0.15};
					};
				};
			};
		};
	};
	class ej_MH60MDAP4: ej_MH60M
	{
		dlc = "ej_Uh60";
		scope = 2;
		accuracy = 1;
		side = 1;
		faction = "TF160";
		vehicleClass = "Air";
		availableForSupportTypes[] = {"CAS_Heli"};
		displayName = "MH-60M DAP 4-Pylon (M230/3 Pylons)";
		model = "\UH-60\MH60\ej_MH60MDAP4.p3d";
		crew = "160th_SOAR_Pilot";
		enableManualFire = 1;
		hideWeaponsCargo = 1;
		transportSoldier = 0;
		ace_fastroping_enabled = 0;
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		slingLoadMaxCargoMass = 300;
		memoryPointGun = "Cannon_end";
		class UserActions
		{
			class PilotMFDOn
			{
				displayName = "FLIR Page On";
				displayNameDefault = "";
				position = "";
				radius = 20;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip5"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip5"",1];";
				priority = 4;
			};
			class PilotMFDOff: PilotMFDOn
			{
				displayName = "FLIR Page Off";
				condition = "this animationPhase ""copip5"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip5"",0];";
			};
		};
		weapons[] = {"ej_master_arms_safe","EricJ_CMFlareLauncher","M230","kuy_IR_Jammer_Weapon"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","1200Rnd_30x113mm_M789_HEDP","kuy_IR_Jammer_Magazine"};
		class Turrets: Turrets
		{
			class CoPilotObs: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				body = "ObsTurret";
				gun = "ObsGun";
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
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				showHMD = 1;
				CanEject = 0;
				startEngine = 0;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				primaryGunner = 1;
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor = 1;
				turretInfoType = "Rsc_HMDs_Kimi_Helo_UI_Turret";
				copilotHasFlares = 1;
				weapons[] = {"ej_master_arms_safe","EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon","Laserdesignator_mounted"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine","Laserbatteries"};
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						directionStabilized = 0;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
						gunnerOpticsEffect[] = {"TankCommanderOptics1"};
					};
					class WideL: Wide
					{
						opticsDisplayName = "WL";
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
						gunnerOpticsColor[] = {0,0,0,1};
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						directionStabilized = 1;
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.02;
						minFov = 0.02;
						maxFov = 0.02;
					};
					class Narrower: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.01;
						minFov = 0.01;
						maxFov = 0.01;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 40;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.4;
					minFov = 0.3;
					maxFov = 1;
				};
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev = -60;
				maxElev = 2;
				initElev = -45;
				minTurn = -160;
				maxTurn = 5;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				weapons[] = {"LMG_Minigun_Transport2"};
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
				gunnerName = "Right M134 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerCompartments = "Compartment2";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -60;
				maxElev = 2;
				initElev = -45;
				minTurn = -5;
				maxTurn = 160;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex = 5;
				weapons[] = {"LMG_Minigun_Transport"};
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
				gunnerName = "Left M134 Gunner";
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
				proxyIndex = 1;
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\UH-60\Data\UI\Heli_Blackhawk.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 5;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL"};
						turret[] = {1};
						maxweight = 400;
						UIposition[] = {0.06,0.4};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 5;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL"};
						maxweight = 400;
						UIposition[] = {0.08,0.35};
					};
					class PylonRight2: PylonLeft2
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 5;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL"};
						maxweight = 400;
						UIposition[] = {0.57,0.35};
					};
				};
			};
		};
	};
	class ej_MH60MDAP4DP: ej_MH60M
	{
		dlc = "ej_Uh60";
		scope = 2;
		accuracy = 1;
		side = 1;
		faction = "TF160";
		vehicleClass = "Air";
		availableForSupportTypes[] = {"CAS_Heli"};
		displayName = "MH-60M DAP 4-Pylon";
		model = "\UH-60\MH60\ej_MH60MDAP4DP.p3d";
		crew = "160th_SOAR_Pilot";
		enableManualFire = 1;
		hideWeaponsCargo = 1;
		transportSoldier = 0;
		ace_fastroping_enabled = 0;
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		slingLoadMaxCargoMass = 300;
		memoryPointGun = "Cannon_end";
		class UserActions
		{
			class PilotMFDOn
			{
				displayName = "FLIR Page On";
				displayNameDefault = "";
				position = "";
				radius = 20;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip5"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip5"",1];";
				priority = 4;
			};
			class PilotMFDOff: PilotMFDOn
			{
				displayName = "FLIR Page Off";
				condition = "this animationPhase ""copip5"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip5"",0];";
			};
		};
		weapons[] = {"ej_master_arms_safe","EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
		class Turrets: Turrets
		{
			class CoPilotObs: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				body = "ObsTurret";
				gun = "ObsGun";
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
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				showHMD = 1;
				CanEject = 0;
				startEngine = 0;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				primaryGunner = 1;
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor = 1;
				turretInfoType = "Rsc_HMDs_Kimi_Helo_UI_Turret";
				copilotHasFlares = 1;
				weapons[] = {"ej_master_arms_safe","EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon","Laserdesignator_mounted"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine","Laserbatteries"};
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						directionStabilized = 0;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
						gunnerOpticsEffect[] = {"TankCommanderOptics1"};
					};
					class WideL: Wide
					{
						opticsDisplayName = "WL";
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
						gunnerOpticsColor[] = {0,0,0,1};
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						directionStabilized = 1;
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.02;
						minFov = 0.02;
						maxFov = 0.02;
					};
					class Narrower: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.01;
						minFov = 0.01;
						maxFov = 0.01;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 40;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.4;
					minFov = 0.3;
					maxFov = 1;
				};
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev = -60;
				maxElev = 2;
				initElev = -45;
				minTurn = -160;
				maxTurn = 5;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				weapons[] = {"LMG_Minigun_Transport2"};
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
				gunnerName = "Right M134 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -3;
				primaryGunner = 0;
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerCompartments = "Compartment2";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -60;
				maxElev = 2;
				initElev = -45;
				minTurn = -5;
				maxTurn = 160;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex = 5;
				weapons[] = {"LMG_Minigun_Transport"};
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
				gunnerName = "Left M134 Gunner";
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
				proxyIndex = 1;
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\UH-60\Data\UI\Heli_Blackhawk.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 5;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL"};
						turret[] = {1};
						maxweight = 400;
						UIposition[] = {0.06,0.4};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 4;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL"};
						maxweight = 400;
						UIposition[] = {0.08,0.35};
					};
					class PylonRight2: PylonLeft2
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 3;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL"};
						maxweight = 400;
						UIposition[] = {0.57,0.35};
					};
					class PylonRight1: PylonLeft1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 2;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL"};
						maxweight = 400;
						UIposition[] = {0.59,0.4};
					};
				};
			};
		};
	};
};
