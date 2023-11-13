////////////////////////////////////////////////////////////////////
//DeRap: uh-60_c\AH96\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 08 18:52:16 2023 : 'file' last modified on Thu Jan 01 13:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ej_AH96
	{
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {"ej_ah96","ej_AH96_USA","ej_AH96_NATO"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitWinch;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Reflector
		{
			class Right;
		};
		class Components;
	};
	class ej_AH96_base_F: Helicopter_Base_F
	{
		author = "EricJ";
		mapSize = 17.75;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_air_gunship_s"};
				speechPlural[] = {"veh_air_gunship_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_air_gunship_s";
		textPlural = "$STR_A3_nameSound_veh_air_gunship_p";
		nameSound = "veh_air_gunship_s";
		_generalMacro = "Heli_Attack_01_base_F";
		model = "\uh-60\AH96\ej_AH96.p3d";
		editorSubcategory = "EdSubcat_Helicopters";
		icon = "\A3\Air_F_Beta\Heli_Attack_01\Data\UI\Map_Heli_Attack_01_CA.paa";
		picture = "\A3\Air_F_Beta\Heli_Attack_01\Data\UI\Heli_Attack_01_CA.paa";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "A3\Air_F_Beta\Heli_Attack_01\RTD_Heli_Attack_01.xml";
			defaultCollective = 0.675;
			autoHoverCorrection[] = {3.5,5.2,0};
			retreatBladeStallWarningSpeed = 92.778;
			maxTorque = 4500;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 100000;
			maxHorizontalStabilizerRightStress = 100000;
			maxVerticalStabilizerStress = 100000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 150000;
			maxTailRotorStress = 30000;
		};
		memoryPointTaskMarker = "TaskMarker_1_pos";
		fuelCapacity = 500;
		fuelConsumptionRate = 0.0555;
		maxSpeed = 365;
		armor = 40;
		accuracy = 0.5;
		cost = 2000000;
		altFullForce = 3000;
		altNoForce = 5000;
		crewVulnerable = 0;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		maxFordingDepth = 0.45;
		mainBladeRadius = 2;
		liftForceCoef = 0.9;
		bodyFrictionCoef = 0.431;
		castDriverShadow = 1;
		viewCargoShadow = 1;
		threat[] = {1,1,0.7};
		maxMainRotorDive = 7;
		minMainRotorDive = -7;
		neutralMainRotorDive = 0;
		gearRetracting = 0;
		mainRotorSpeed = -1;
		backRotorSpeed = 1;
		LockDetectionSystem = "1 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		weapons[] = {"ej_master_arms_safe","EricJ_CMFlareLauncherUH92","kuy_IR_Jammer_Weapon"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
		memoryPointCM[] = {"Flare_launcher1","Flare_launcher2","Flare_launcher3","Flare_launcher4"};
		memoryPointCMDir[] = {"Flare_launcher1_dir","Flare_launcher2_dir","Flare_launcher3_dir","flare_launcher4_dir"};
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		driverAction = "Heli_Attack_01_pilot";
		driverInAction = "Heli_Attack_01_pilot";
		memoryPointsGetInDriver = "pos pilot";
		memoryPointsGetInDriverDir = "pos pilot dir";
		driverCanEject = 0;
		precisegetinout = 1;
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
			class MFD2
			{
				renderTarget = "rendertarget1";
				class View02
				{
					pointPosition = "pilotFLIR_Pos";
					pointDirection = "PilotFLIR_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.05;
				};
			};
			class MFD3
			{
				renderTarget = "rendertarget2";
				class View03
				{
					pointPosition = "pilotFLIR_Pos";
					pointDirection = "PilotFLIR_dir";
					renderQuality = 2;
					renderVisionMode = 1;
					fov = 0.05;
				};
			};
			class MFD4
			{
				renderTarget = "rendertarget3";
				class View04
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
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
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MXC_F
			{
				weapon = "arifle_MXC_F";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_ItemGPS
			{
				name = "ItemGPS";
				count = 1;
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
					class Ammo_Bomb
					{
						type = "group";
						condition = "Bomb";
						class Ammo_count_Bomb
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
		getinAction = "Heli_Attack_01_Pilot_Enter";
		getoutaction = "Heli_Attack_01_Pilot_Exit";
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
		class AnimationSources: AnimationSources
		{
			class Gatling
			{
				source = "revolving";
				weapon = "M197_MH60";
			};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint = "HitGlass6";
			};
			class HitGlass7: HitGlass1
			{
				hitpoint = "HitGlass7";
			};
			class HitGlass8: HitGlass1
			{
				hitpoint = "HitGlass8";
			};
			class Missiles
			{
				source = "revolving";
				weapon = "missiles_DAGR";
			};
			class Hide
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class HidePilotFeed
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class HidePilotNVGFeed
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class Muzzle_flash
			{
				source = "ammorandom";
				weapon = "M197_MH60";
			};
			class FormationLights
			{
				AnimPeriod = 1;
				source = "user";
				InitPhase = 1;
			};
		};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"uh-60\data\ah96_body_co.paa","uh-60\data\ah96_engines_co.paa","uh-60\data\usmcductfans_co.paa","uh-60\data\SOAS_AAQ16_Flir_Navy_co.paa"};
		class textureSources
		{
			class USMC1
			{
				displayName = "USMC (HMLA-167)";
				author = "EricJ";
				textures[] = {"\uh-60\data\ah96_body_HMLA167_co.paa","uh-60\data\ah96_engines_HMLA167_co.paa","uh-60\data\usmcductfans_co.paa","uh-60\data\SOAS_AAQ16_Flir_Navy_co.paa"};
				factions[] = {"USMC"};
			};
			class USArmy
			{
				displayName = "US Army";
				author = "EricJ";
				textures[] = {"\uh-60\data\ah96_body_army_co.paa","uh-60\data\ah96_engines_army_co.paa","uh-60\data\ductfans_co.paa","uh-60\data\SOAS_AAQ16_Flir_co.paa"};
				factions[] = {"USA"};
			};
			class NATO
			{
				displayName = "NATO";
				author = "EricJ";
				textures[] = {"\uh-60\data\ah96_body_nato_co.paa","uh-60\data\ah96_engines_nato_co.paa","uh-60\data\natoductfans_co.paa","uh-60\data\SOAS_AAQ16_Flir_co.paa"};
				factions[] = {"BLU_F"};
			};
			class RDA
			{
				displayName = "RDA SECFOR";
				author = "EricJ";
				textures[] = {"\uh-60\data\ah96_body_rda_co.paa","uh-60\data\ah96_engines_rda_co.paa","uh-60\data\rdaductfans_co.paa","uh-60\data\SOAS_AAQ16_Flir_co.paa"};
				factions[] = {"BLU_F"};
			};
		};
		class UserActions
		{
			class PilotMFDOn
			{
				displayName = "FLIR Page On";
				displayNameDefault = "";
				position = "";
				radius = 20;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip1"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip1"",1];";
				priority = 4;
			};
			class PilotMFDOff: PilotMFDOn
			{
				displayName = "FLIR Page Off";
				condition = "this animationPhase ""copip1"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip1"",0];";
			};
			class PilotFMFDOn
			{
				displayName = "Flight Page On";
				displayNameDefault = "";
				position = "";
				radius = 20;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip3"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip3"",1];";
				priority = 4;
			};
			class PilotFMFDOff: PilotFMFDOn
			{
				displayName = "Flight Page Off";
				condition = "this animationPhase ""copip3"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip3"",0];";
			};
			class PilotFNVGMFDOn
			{
				displayName = "Flight NVG Page On";
				displayNameDefault = "";
				position = "";
				radius = 20;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip4"" < 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip4"",1];";
				priority = 4;
			};
			class PilotFNVGMFDOff: PilotFNVGMFDOn
			{
				displayName = "Flight NVG Page Off";
				condition = "this animationPhase ""copip4"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip4"",0];";
			};
			class formationLights
			{
				displayName = "Formation Lights On";
				position = "pilot";
				priority = 2;
				radius = 15;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""FormationLights"" > 0.5";
				statement = "this animate [""FormationLights"",0];";
			};
			class unFormationLights
			{
				displayName = "Formation Lights Off";
				position = "pilot";
				priority = 2;
				radius = 15;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""FormationLights"" < 0.5";
				statement = "this animate [""FormationLights"",1];";
			};
		};
		laserScanner = 1;
		showAllTargets = 4;
		class ViewPilot: ViewPilot
		{
			initAngleX = 10;
		};
		class ViewOptics: ViewOptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.1;
			minFov = 0.1;
			maxFov = 1.2;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				CanEject = 0;
				startEngine = 0;
				minElev = -60;
				maxElev = 10;
				initElev = 0;
				minTurn = -70;
				maxTurn = 70;
				initTurn = 0;
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						opticsDisplayName = "W";
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						opticsDisplayName = "M";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
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
						minFov = 0.25;
						maxFov = 1.25;
						initFov = 0.75;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				primaryGunner = 1;
				memoryPointsGetInGunner = "pos Copilot";
				memoryPointsGetInGunnerDir = "pos Copilot dir";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				memoryPointGun = "machinegun";
				gunBeg = "gun2_end";
				gunEnd = "gun2_begin";
				memoryPointGunnerOptics = "z_flir_pos";
				selectionFireAnim = "muzzleflash";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				gunnerGetInAction = "Heli_Attack_01_Gunner_Enter";
				gunnerGetOutAction = "Heli_Attack_01_Gunner_Exit";
				precisegetinout = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1","BWTV"};
				gunnerForceOptics = 0;
				turretInfoType = "RscOptics_Heli_Attack_01_gunner";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex = 5;
				weapons[] = {"ej_master_arms_safe","EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon","M197_MH60","Laserdesignator_mounted"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine","750Rnd_M197_MH60","Laserbatteries"};
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "main_turret_hit";
						visual = "gun1";
						passThrough = 0.3;
						radius = 0.2;
					};
					class HitGun
					{
						armor = 1;
						material = -1;
						name = "main_gun_hit";
						visual = "gun2";
						passThrough = 0.3;
						radius = 0.2;
					};
				};
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\UH-60\Data\UI\Heli_attack_AH_96.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonRack_12Rnd_PG_missiles";
						priority = 5;
						bay = 1;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL","DAR","DAGR"};
						turret[] = {0};
						maxweight = 500;
						UIposition[] = {0.06,0.4};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = "PylonRack_12Rnd_PG_missiles";
						priority = 4;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL","DAR","DAGR"};
						maxweight = 500;
						UIposition[] = {0.08,0.35};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment = "PylonRack_12Rnd_PG_missiles";
						priority = 3;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL","DAR","DAGR"};
						maxweight = 500;
						UIposition[] = {0.1,0.3};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos = 3;
						UIposition[] = {0.55,0.3};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.57,0.35};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.59,0.4};
					};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"uh-60\data\mat\uh92_ductfans.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","uh-60\data\mat\ah1z_engines.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass.rvmat","A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat","A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat","uh-60\data\mat\ah1z_body.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","uh-60\data\mat\ah1z_cockpit.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat"};
		};
		class EventHandlers: EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		numberPhysicalWheels = 0;
	};
	class ej_AH96: ej_AH96_base_F
	{
		author = "EricJ";
		_generalMacro = "ej_AH96";
		scope = 2;
		side = 1;
		faction = "USMC";
		textureList[] = {"USMC1",1};
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_pilot_F"};
		accuracy = 2.5;
		displayName = "AH-96 Coyote (6 pylons)";
		class Library
		{
			libTextDesc = "AH-96 Coyote";
		};
		availableForSupportTypes[] = {"CAS_Heli"};
		cost = 3000000;
	};
	class ej_AH96_USA: ej_AH96_base_F
	{
		author = "EricJ";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Heli_Attack_01_F.jpg";
		_generalMacro = "ej_AH96";
		scope = 2;
		side = 1;
		faction = "USA";
		textureList[] = {"USArmy",1};
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_pilot_F"};
		accuracy = 2.5;
		ForceinGarage = 1;
		displayName = "AH-96 Coyote (US Army) (6 pylons)";
		class Library
		{
			libTextDesc = "$STR_A3_Heli_Attack_01_lib";
		};
		availableForSupportTypes[] = {"CAS_Heli"};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"uh-60\data\ah96_body_army_co.paa","uh-60\data\ah96_engines_army_co.paa","uh-60\data\ductfans_co.paa","uh-60\data\SOAS_AAQ16_Flir_co.paa"};
		cost = 3000000;
	};
	class ej_AH96_NATO: ej_AH96_base_F
	{
		author = "EricJ";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Heli_Attack_01_F.jpg";
		_generalMacro = "ej_AH96";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		textureList[] = {"NATO",1};
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_pilot_F"};
		accuracy = 2.5;
		ForceinGarage = 1;
		displayName = "AH-96 Coyote (NATO) (6 Pylons)";
		class Library
		{
			libTextDesc = "Ah-96 Coyote";
		};
		availableForSupportTypes[] = {"CAS_Heli"};
		cost = 3000000;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"uh-60\data\ah96_body_NATO_co.paa","uh-60\data\ah96_engines_nato_co.paa","uh-60\data\natoductfans_co.paa","uh-60\data\SOAS_AAQ16_Flir_co.paa"};
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
						sourceScale = 1;
						min = -10;
						max = 10;
						minPos[] = {0.93,0.2};
						maxPos[] = {0.93,0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 1;
						min = 0;
						max = 60;
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
								points[] = {{"Level0",{-0.42,0},1},{"Level0",{-0.38,0},1},{},{"Level0",{-0.37,0},1},{"Level0",{-0.33,0},1},{},{"Level0",{-0.32,0},1},{"Level0",{-0.28,0},1},{},{"Level0",{-0.27,0},1},{"Level0",{-0.23,0},1},{},{"Level0",{-0.22,0},1},{"Level0",{-0.18,0},1},{},{"Level0",{-0.17,0},1},{"Level0",{-0.13,0},1},{},{"Level0",{0.12,0},1},{"Level0",{-0.08,0},1},{},{"Level0",{0.42,0},1},{"Level0",{0.38,0},1},{},{"Level0",{0.37,0},1},{"Level0",{0.33,0},1},{},{"Level0",{0.32,0},1},{"Level0",{0.28,0},1},{},{"Level0",{0.27,0},1},{"Level0",{0.23,0},1},{},{"Level0",{0.22,0},1},{"Level0",{0.18,0},1},{},{"Level0",{0.17,0},1},{"Level0",{0.13,0},1},{},{"Level0",{0.12,0},1},{"Level0",{0.08,0},1}};
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
					class Ammo_Bomb
					{
						type = "group";
						condition = "Bomb";
						class Ammo_count_Bomb
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
						sourceScale = 3.6;
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
						sourceScale = 1;
						pos[] = {{0.83,0.475},1};
						right[] = {{0.88,0.475},1};
						down[] = {{0.83,0.525},1};
					};
					class ASLNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
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
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.035,0.035,0.1};
				helmetRight[] = {0.07,0,0};
				helmetDown[] = {0,-0.07,0};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				CanEject = 0;
				startEngine = 0;
				minElev = -60;
				maxElev = 10;
				initElev = 0;
				minTurn = -70;
				maxTurn = 70;
				initTurn = 0;
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						opticsDisplayName = "W";
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						opticsDisplayName = "M";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
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
						minFov = 0.25;
						maxFov = 1.25;
						initFov = 0.75;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				primaryGunner = 1;
				memoryPointsGetInGunner = "pos Copilot";
				memoryPointsGetInGunnerDir = "pos Copilot dir";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				memoryPointGun = "machinegun";
				gunBeg = "gun2_end";
				gunEnd = "gun2_begin";
				memoryPointGunnerOptics = "z_flir_pos";
				selectionFireAnim = "muzzleflash";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				gunnerGetInAction = "Heli_Attack_01_Gunner_Enter";
				gunnerGetOutAction = "Heli_Attack_01_Gunner_Exit";
				precisegetinout = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1","BWTV"};
				gunnerForceOptics = 0;
				turretInfoType = "RscOptics_Heli_Attack_01_gunner";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex = 5;
				weapons[] = {"ej_master_arms_safe","EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon","M197_MH60","Laserdesignator_mounted"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine","750Rnd_M197_MH60","Laserbatteries"};
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "main_turret_hit";
						visual = "gun1";
						passThrough = 0.3;
						radius = 0.2;
					};
					class HitGun
					{
						armor = 1;
						material = -1;
						name = "main_gun_hit";
						visual = "gun2";
						passThrough = 0.3;
						radius = 0.2;
					};
				};
			};
		};
	};
};
class cfgMods
{
	author = "EricJ";
	timepacked = "1699000307";
};
