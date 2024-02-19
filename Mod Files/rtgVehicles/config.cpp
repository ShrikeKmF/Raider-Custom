class CfgPatches
{
	class rtgVehicles
	{
		name = "rtgVehicles";
		version = "1";
		author = "Shrike";
		url = "";
		requiredAddons[] = {"a3_characters_F","a3_characters_F_beta","A3_Characters_F_Common","a3_characters_f_beta","a3_characters_f_gamma","A3_Soft_F_epc","bma3_bushmaster","uk3cb_factions_fia","rhsusf_c_weapons"};
		units[] = {"raider_racecar", "rtg_wheelsBox","hitman_light_vehicle","raider_light_strike_vehicle","raider_fast_rhib","rtg_artillery","raider_strike_car","raider_bushmaster_unarmed","rtg_loaf","rtg_damper","rtg_heavyLift_Cargo","rtg_heavyLift_Transport","rtg_BasicSupply","rtg_atSupply","rtg_medicalSupply"};
	};
};
class cfgFactionClasses
{
	class Raider_Tactical_F
	{
		displayName = "[RTG] Vehicles";
		priority = 0;
		side = 1;
		scope = 2;
	};
};
class cfgEditorCategories
{
	class Raider_Tactical
	{
		displayName = "[RTG] Objects";
		scope = 2;
	};
};
class cfgEditorSubcategories
{
	class RTGCars
	{
		displayName = "Cars";
		scope = 2;
	};
	class RTGBoats
	{
		displayName = "Boats";
		scope = 2;
	};
	class RTGHelicopters
	{
		displayName = "Helicopters";
		scope = 2;
	};
	class RTGAircraft
	{
		displayName = "Planes";
		scope = 2;
	};
	class RTGArtillery
	{
		displayName = "Artillery";
		scope = 2;
	};
};

class CfgVehicles
{
	class bma3_bushmaster_unarmed_F;
	class I_MRAP_03_F;
	class Components;
	class SensorTemplatePassiveRadar;
	class SensorTemplateActiveRadar;
	class ActiveRadarSensorComponent;
	class RHS_M119_D;
	class Turrets;
	class HitPoints;
	class hitwindshield_1;
	class hitwindshield_2;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	class CargoTurret;
	class CargoTurret_01;
	class CargoTurret_02;
	class CargoTurret_03;
	class MainTurret;
	class ViewOptics;
	class rhsusf_m1025_d_m2;
	class rtg_artillery: RHS_M119_D
	{
		displayName = "M119A3 [1/2]";
		editorSubcategory = "RTGArtillery";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";
	};
	class raider_strike_car: I_MRAP_03_F
	{
		displayName = "Hawkei Transport [1/3]";
		editorSubcategory = "RTGCars";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";
		fuelConsumptionRate = 0.03;
		fuelCapacity = 84;
		armor = 350;
		armorEngine = 100;
		armorGun = 100;
		armorGlass = 250;
		armorFuel = 20;
		armorStructural = 400;
		armorLights = 0.5;
		damageResistance = 0.00719;
		crewVulnerable = 0;
		crewCrashProtection = 0.15;
		crewExplosionProtection = 0.9999;
		threat[] = {0.8,0.6,0.3};
		maxSpeed = 125;
		enginePower = 275;
		ace_cargo_space = 16;
		ace_vehicles_engineStartDelay = 3;
		acre_hasInfantryPhone = 0;
		canFloat = 1;
		waterSpeedFactor = 1;
		waterResistanceCoef = 0.11;
		weapons[] = {"SmokeLauncher","TruckHorn"};
		magazines[] = {"SmokeLauncherMag"};
		smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 30;
		ace_refuel_fuelCargo = 80;
		textureList[] = {"rtg_blk",1};
		HiddenSelectionsTextures[] = {"rtgVehicles\tex\hawkei\rtg_hawkei.paa"};
		ace_tagging_canTag = 1;
		class textureSources
		{
			class rtg_blk
			{
				displayName = "Black";
				author = "Shrike";
				textures[] = {"rtgVehicles\tex\hawkei\rtg_hawkei.paa"};
				factions[] = {"Raider_Tactical_F"};
			};
		};
		maximumLoad = 20000;
		class TransportItems
		{
			class _xx_rtg_pvs_15_black_gh
			{
				name = "rtg_pvs_15_black_gh";
				count = 8;
			};
			class _xx_ACRE_PRC343
			{
				name = "ACRE_PRC343";
				count = 2;
			};
			class _xx_ACRE_PRC152
			{
				name = "ACRE_PRC152";
				count = 2;
			};
			class _xx_ACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 8;
			};
			class _xx_ACE_Canteen
			{
				name = "ACE_Canteen";
				count = 5;
			};
			class _xx_ACE_Can_Franta
			{
				name = "ACE_Can_Franta";
				count = 9;
			};
			class _xx_ACE_MRE_BeefStew
			{
				name = "ACE_MRE_BeefStew";
				count = 5;
			};
			class _xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 9;
			};
		};
		class TransportBackpacks
		{
			class _xx_rtg_medical_grabpack
			{
				backpack = "rtg_medical_grabpack";
				count = 1;
			};
			class _xx_rtg_engineer_grabpack
			{
				backpack = "rtg_engineer_grabpack";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_m16a4_carryhandle
			{
				weapon = "rhs_weap_m16a4_carryhandle";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_rtg_30rnd_556_45
			{
				magazine = "rtg_30rnd_556_45";
				count = 10;
			};
			class _xx_rtg_200Rnd_762x51
			{
				magazine = "rtg_200Rnd_762x51";
				count = 5;
			};
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Intercom";
				shortName = "Intercom";
				allowedPositions[] = {"driver","commander","gunner"};
				limitedPositions[] = {};
				numLimitedPositions = 0;
				masterPositions[] = {"driver"};
				connectedByDefault = 1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				allowedPositions[] = {"driver","commander","gunner"};
				componentName = "ACRE_PRC152";
				displayName = "Dash";
				mountedRadio = "ACRE_PRC152";
				shortName = "Dash";
			};
		};
		class ace_cargo
		{
			class Cargo
			{
				class ACE_Wheel
				{
					type = "ACE_Wheel";
					amount = 4;
				};
			};
		};
	};
	class rhsusf_m998_d_s_2dr_halftop;
	class hitman_light_vehicle: rhsusf_m998_d_s_2dr_halftop
	{
		displayName = "LV [1/7]";
		editorSubcategory = "RTGCars";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";
		fuelConsumptionRate = 0.03;
		fuelCapacity = 84;
		ace_cargo_space = 25;
		ace_vehicles_engineStartDelay = 3;
		acre_hasInfantryPhone = 0;
		canFloat = 0;
		weapons[] = {"SmokeLauncher","TruckHorn"};
		magazines[] = {"SmokeLauncherMag"};

		// Movement Config
		simulation = "carx";
		maxSpeed = 115;
		brakeIdleSpeed = 0.87;
		switchTime	= 0.5;
		latency		= 1.0;
		changeGearType 			= "effective";		// condition for switching gears
		changeGearOmegaRatios[] = {						// rpm ratio max/min pair
			__EVAL(3400/3400)	, __EVAL(1000/3400),
			__EVAL(700/3400)	, __EVAL(500/3400),
			__EVAL(3150/3400)	, __EVAL(1600/3400),
			__EVAL(2600/3400)	, __EVAL(1200/3400),
			__EVAL(2900/3400)	, __EVAL(1700/3400),
			__EVAL(3400/3400)	, __EVAL(2200/3400)
		};		
		class complexGearbox
		{
			GearboxRatios[] = {
				"R1",	-3.07,
				"N",	0,
				"D1",	2.78,
				"D2",	1.48,
				"D3",	1.0,
				"D4",	0.75
			};
			TransmissionRatios[] = {"High",6.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};

		differentialType = "all_limited";
		frontRearSplit=0.5;
		frontBias=2.7;
		rearBias=1.9;
		centreBias=1.5;
		clutchStrength=85;
		transmissionLosses = 20;
		dampingRateFullThrottle					= 0.15;
		dampingRateZeroThrottleClutchEngaged	= 2.8;
		dampingRateZeroThrottleClutchDisengaged	= 0.35;
		torqueCurve[] = {
		{__EVAL(650/3400),__EVAL(420/597)},
		{__EVAL(1000/3400),__EVAL(465/597)},
		{__EVAL(1400/3400),__EVAL(544/597)},
		{__EVAL(1800/3400),__EVAL(597/597)},
		{__EVAL(2400/3400),__EVAL(583/597)},
		{__EVAL(2600/3400),__EVAL(499/597)},
		{__EVAL(3200/3400),__EVAL(472/597)},
		{__EVAL(3603/3400),__EVAL(0/597)}
		};		

		enginePower = 191;
		peakTorque = 597;
		minOmega = 41;
		maxOmega = 356.05;
		idleRPM = 650;
		redRPM = 3400;

		engineLosses = 12;
		thrustDelay=0.8;
		engineBrakeCoef = 0.8;

		antiRollbarForceCoef=20;
		antiRollbarForceLimit=5.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=80;

		accelAidForceYOffset = -1.25;
	
		// Wheels
		class Wheels
		{
			class LF
			{
				side = "left";
				boneName = "wheel_1_1_damper";
				center = "axis_wheel_1_1";
				boundary = "bound_wheel_1_1";
				suspForceAppPointOffset = "axis_wheel_1_1";
				tireForceAppPointOffset = "axis_wheel_1_1";
				suspTravelDirection[] = {0,-1,0};
				steering = 1;
				width = 0.25;
				mass = 80;
				MOI = 10.9;
				maxBrakeTorque = 7500;
				maxHandBrakeTorque = 0;
				longitudinalStiffnessPerUnitGravity = 1250;
				latStiffX = 24.1;
				latStiffY = 16.1;
				frictionVsSlipGraph[] = {{0,0.3},{0.5,1},{0.8,0.7},{1,0.6}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "axis_wheel_3_1";
				boundary = "bound_wheel_3_1";
				suspForceAppPointOffset = "axis_wheel_3_1";
				tireForceAppPointOffset = "axis_wheel_3_1";
				maxHandBrakeTorque = 18500;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "axis_wheel_2_1";
				boundary = "bound_wheel_2_1";
				suspForceAppPointOffset = "axis_wheel_2_1";
				tireForceAppPointOffset = "axis_wheel_2_1";
				steering = 1;
				side = "right";
				suspTravelDirection[] = {0,-1,0};
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "axis_wheel_4_1";
				boundary = "bound_wheel_4_1";
				suspForceAppPointOffset = "axis_wheel_4_1";
				tireForceAppPointOffset = "axis_wheel_4_1";
				maxHandBrakeTorque = 18500;
			};
		};

		ace_tagging_canTag = 1;
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 160;
		ace_refuel_fuelCargo = 80;
		armor = 25;
		armorStructural = 2;
		armorFuel = 1.4;
		armorGlass = 4;
		armorLights = 0.4;
		armorWheels = 0.05;
		armorHull = 1;
		armorEngine = 2;
		hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","interior_wood","2drcargocomplete","camo1","unitdecals_1","unitdecals_2"};
		hiddenSelectionsTextures[] = {"rtgVehicles\tex\LSV\a_exterior_black.paa","rtgVehicles\tex\LSV\b_interior_black.paa","rtgVehicles\tex\LSV\c_a2_black.paa","rtgVehicles\tex\LSV\d_wheels_black.paa","rtgVehicles\tex\LSV\e_mainbody_black.paa","rtgVehicles\tex\LSV\f_gratting_black.paa","","rtgVehicles\tex\LSV\k_2drcargocomplete_black_with_logoshitman.paa","rtgVehicles\tex\LSV\i_unitdecals1.paa","rtgVehicles\tex\LSV\j_unitdecals2.paa"};
		class textureSources
		{
			class rtg_hitman
			{
				displayName = "Hitman";
				author = "Shrike";
				textures[] = {"rtgVehicles\tex\LSV\a_exterior_black.paa","rtgVehicles\tex\LSV\b_interior_black.paa","rtgVehicles\tex\LSV\c_a2_black.paa","rtgVehicles\tex\LSV\d_wheels_black.paa","rtgVehicles\tex\LSV\e_mainbody_black.paa","rtgVehicles\tex\LSV\f_gratting_black.paa","","rtgVehicles\tex\LSV\k_2drcargocomplete_black_with_logoshitman.paa","rtgVehicles\tex\LSV\i_unitdecals1.paa","rtgVehicles\tex\LSV\j_unitdecals2.paa"};
				factions[] = {"Raider_Tactical_F"};
			};
		};
		
		class HitPoints: HitPoints
		{
			class hitwindshield_1: hitwindshield_1
			{
				armor = 4.29;
			};
			class hitwindshield_2: hitwindshield_2
			{
				armor = 4.29;
			};
			class HitGlass1: HitGlass1
			{
				armor = 4.09;
			};
			class HitGlass2: HitGlass2
			{
				armor = 4.09;
			};
			class HitGlass3: HitGlass3
			{
				armor = 4.09;
			};
			class HitGlass4: HitGlass4
			{
				armor = 4.09;
			};
		};
		class ace_cargo
		{
			class Cargo
			{
				class ACE_Wheel
				{
					type = "ACE_Wheel";
					amount = 4;
				};
			};
		};
		maximumLoad = 20000;
		class TransportItems
		{
			class _xx_rtg_pvs_15_black_gh
			{
				name = "rtg_pvs_15_black_gh";
				count = 8;
			};
			class _xx_ACRE_PRC343
			{
				name = "ACRE_PRC343";
				count = 2;
			};
			class _xx_ACRE_PRC152
			{
				name = "ACRE_PRC152";
				count = 2;
			};
			class _xx_ACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 8;
			};
			class _xx_ACE_Canteen
			{
				name = "ACE_Canteen";
				count = 5;
			};
			class _xx_ACE_Can_Franta
			{
				name = "ACE_Can_Franta";
				count = 9;
			};
			class _xx_ACE_MRE_BeefStew
			{
				name = "ACE_MRE_BeefStew";
				count = 5;
			};
			class _xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 9;
			};
		};
		class TransportBackpacks
		{
			class _xx_rtg_medical_grabpack
			{
				backpack = "rtg_medical_grabpack";
				count = 1;
			};
			class _xx_rtg_engineer_grabpack
			{
				backpack = "rtg_engineer_grabpack";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_m16a4_carryhandle
			{
				weapon = "rhs_weap_m16a4_carryhandle";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_rtg_30rnd_556_45
			{
				magazine = "rtg_30rnd_556_45";
				count = 10;
			};
			class _xx_rtg_200Rnd_762x51
			{
				magazine = "rtg_200Rnd_762x51";
				count = 5;
			};
		};
	};

	class raider_racecar : hitman_light_vehicle
	{
		displayName = "LV-10R  [1/7]";
		editorSubcategory = "RTGCars";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";

		// Movement Config
		simulation = "carx";
		maxSpeed = 240;
		brakeIdleSpeed = 0.87;
		switchTime	= 0.5;
		latency		= 1.0;
		changeGearType 			= "effective";		// condition for switching gears
		changeGearOmegaRatios[] = {						// rpm ratio max/min pair
			__EVAL(3400/3400)	, __EVAL(1000/3400),
			__EVAL(700/3400)	, __EVAL(500/3400),
			__EVAL(3150/3400)	, __EVAL(1600/3400),
			__EVAL(2600/3400)	, __EVAL(1200/3400),
			__EVAL(2900/3400)	, __EVAL(1700/3400),
			__EVAL(3400/3400)	, __EVAL(2200/3400)
		};		
		class complexGearbox
		{
			GearboxRatios[] = {
				"R1",	-3.07,
				"N",	0,
				"D1",	2.78,
				"D2",	1.48,
				"D3",	1.0,
				"D4",	0.75
			};
			TransmissionRatios[] = {"High",6.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};

		differentialType = "all_limited";
		frontRearSplit=0.5;
		frontBias=2.7;
		rearBias=1.9;
		centreBias=1.5;
		clutchStrength=85;
		transmissionLosses = 20;
		dampingRateFullThrottle					= 0.15;
		dampingRateZeroThrottleClutchEngaged	= 2.8;
		dampingRateZeroThrottleClutchDisengaged	= 0.35;
		torqueCurve[] = {
		{__EVAL(650/3400),__EVAL(420/597)},
		{__EVAL(1000/3400),__EVAL(465/597)},
		{__EVAL(1400/3400),__EVAL(544/597)},
		{__EVAL(1800/3400),__EVAL(597/597)},
		{__EVAL(2400/3400),__EVAL(583/597)},
		{__EVAL(2600/3400),__EVAL(499/597)},
		{__EVAL(3200/3400),__EVAL(472/597)},
		{__EVAL(3603/3400),__EVAL(0/597)}
		};		

		enginePower = 421;
		peakTorque = 597;
		minOmega = 41;
		maxOmega = 356.05;
		idleRPM = 650;
		redRPM = 3400;

		engineLosses = 12;
		thrustDelay=0.8;
		engineBrakeCoef = 0.8;

		antiRollbarForceCoef=20;
		antiRollbarForceLimit=5.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=80;

		accelAidForceYOffset = -1.25;
	
		// Wheels
		class Wheels
		{
			class LF
			{
				side = "left";
				boneName = "wheel_1_1_damper";
				center = "axis_wheel_1_1";
				boundary = "bound_wheel_1_1";
				suspForceAppPointOffset = "axis_wheel_1_1";
				tireForceAppPointOffset = "axis_wheel_1_1";
				suspTravelDirection[] = {0,-1,0};
				steering = 1;
				width = 0.25;
				mass = 80;
				MOI = 10.9;
				maxBrakeTorque = 7500;
				maxHandBrakeTorque = 0;
				longitudinalStiffnessPerUnitGravity = 1250;
				latStiffX = 38.5;
				latStiffY = 24.1;
				frictionVsSlipGraph[] = {{0,0.3},{0.5,1},{0.8,0.7},{1,0.6}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "axis_wheel_3_1";
				boundary = "bound_wheel_3_1";
				suspForceAppPointOffset = "axis_wheel_3_1";
				tireForceAppPointOffset = "axis_wheel_3_1";
				maxHandBrakeTorque = 18500;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "axis_wheel_2_1";
				boundary = "bound_wheel_2_1";
				suspForceAppPointOffset = "axis_wheel_2_1";
				tireForceAppPointOffset = "axis_wheel_2_1";
				steering = 1;
				side = "right";
				suspTravelDirection[] = {0,-1,0};
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "axis_wheel_4_1";
				boundary = "bound_wheel_4_1";
				suspForceAppPointOffset = "axis_wheel_4_1";
				tireForceAppPointOffset = "axis_wheel_4_1";
				maxHandBrakeTorque = 18500;
			};
		};
	};

	class raider_light_strike_vehicle: rhsusf_m1025_d_m2
	{
		displayName = "LSV Armed [2/3]";
		editorSubcategory = "RTGCars";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";
		fuelConsumptionRate = 0.03;
		fuelCapacity = 84;
		ace_cargo_space = 16;
		ace_vehicles_engineStartDelay = 3;
		acre_hasInfantryPhone = 0;
		canFloat = 0;
		weapons[] = {"SmokeLauncher","TruckHorn"};
		magazines[] = {"SmokeLauncherMag"};
		ace_tagging_canTag = 1;
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 160;
		ace_refuel_fuelCargo = 80;

		// Movement Config
		simulation = "carx";
		maxSpeed = 115;
		brakeIdleSpeed = 0.87;
		switchTime	= 0.5;
		latency		= 1.0;
		changeGearType 			= "effective";		// condition for switching gears
		changeGearOmegaRatios[] = {						// rpm ratio max/min pair
			__EVAL(3400/3400)	, __EVAL(1000/3400),
			__EVAL(700/3400)	, __EVAL(500/3400),
			__EVAL(3150/3400)	, __EVAL(1600/3400),
			__EVAL(2600/3400)	, __EVAL(1200/3400),
			__EVAL(2900/3400)	, __EVAL(1700/3400),
			__EVAL(3400/3400)	, __EVAL(2200/3400)
		};		
		class complexGearbox
		{
			GearboxRatios[] = {
				"R1",	-3.07,
				"N",	0,
				"D1",	2.78,
				"D2",	1.48,
				"D3",	1.0,
				"D4",	0.75
			};
			TransmissionRatios[] = {"High",6.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};

		differentialType = "all_limited";
		frontRearSplit=0.5;
		frontBias=2.7;
		rearBias=1.9;
		centreBias=1.5;
		clutchStrength=85;
		transmissionLosses = 20;
		dampingRateFullThrottle					= 0.15;
		dampingRateZeroThrottleClutchEngaged	= 2.8;
		dampingRateZeroThrottleClutchDisengaged	= 0.35;
		torqueCurve[] = {
		{__EVAL(650/3400),__EVAL(420/597)},
		{__EVAL(1000/3400),__EVAL(465/597)},
		{__EVAL(1400/3400),__EVAL(544/597)},
		{__EVAL(1800/3400),__EVAL(597/597)},
		{__EVAL(2400/3400),__EVAL(583/597)},
		{__EVAL(2600/3400),__EVAL(499/597)},
		{__EVAL(3200/3400),__EVAL(472/597)},
		{__EVAL(3603/3400),__EVAL(0/597)}
		};		

		enginePower = 191;
		peakTorque = 597;
		minOmega = 41;
		maxOmega = 356.05;
		idleRPM = 650;
		redRPM = 3400;

		engineLosses = 12;
		thrustDelay=0.8;
		engineBrakeCoef = 0.8;

		antiRollbarForceCoef=20;
		antiRollbarForceLimit=5.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=80;

		accelAidForceYOffset = -1.25;
	
		// Wheels
		class Wheels
		{
			class LF
			{
				side = "left";
				boneName = "wheel_1_1_damper";
				center = "axis_wheel_1_1";
				boundary = "bound_wheel_1_1";
				suspForceAppPointOffset = "axis_wheel_1_1";
				tireForceAppPointOffset = "axis_wheel_1_1";
				suspTravelDirection[] = {0,-1,0};
				steering = 1;
				width = 0.25;
				mass = 80;
				MOI = 10.9;
				maxBrakeTorque = 7500;
				maxHandBrakeTorque = 0;
				longitudinalStiffnessPerUnitGravity = 1250;
				latStiffX = 24.1;
				latStiffY = 16.1;
				frictionVsSlipGraph[] = {{0,0.3},{0.5,1},{0.8,0.7},{1,0.6}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "axis_wheel_3_1";
				boundary = "bound_wheel_3_1";
				suspForceAppPointOffset = "axis_wheel_3_1";
				tireForceAppPointOffset = "axis_wheel_3_1";
				maxHandBrakeTorque = 18500;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "axis_wheel_2_1";
				boundary = "bound_wheel_2_1";
				suspForceAppPointOffset = "axis_wheel_2_1";
				tireForceAppPointOffset = "axis_wheel_2_1";
				steering = 1;
				side = "right";
				suspTravelDirection[] = {0,-1,0};
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "axis_wheel_4_1";
				boundary = "bound_wheel_4_1";
				suspForceAppPointOffset = "axis_wheel_4_1";
				tireForceAppPointOffset = "axis_wheel_4_1";
				maxHandBrakeTorque = 18500;
			};
		};

		armor = 25;
		armorStructural = 2;
		armorFuel = 1.4;
		armorGlass = 4;
		armorLights = 0.4;
		armorWheels = 0.05;
		armorHull = 1;
		armorEngine = 2;
		hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","camo1","camo2","unitdecals_1","unitdecals_2"};
		hiddenSelectionsTextures[] = {"rtgVehicles\tex\LSV\a_exterior_black.paa","rtgVehicles\tex\LSV\b_interior_black.paa","rtgVehicles\tex\LSV\c_a2_black.paa","rtgVehicles\tex\LSV\d_wheels_black.paa","rtgVehicles\tex\LSV\e_mainbody_black.paa","rtgVehicles\tex\LSV\f_gratting_black.paa","rtgVehicles\tex\LSV\g_camo1_tile_black.paa","rtgVehicles\tex\LSV\h_camo2_m1025_black.paa","rtgVehicles\tex\LSV\i_unitdecals1.paa","rtgVehicles\tex\LSV\j_unitdecals2.paa"};
		class textureSources
		{
			class rtg_empty
			{
				displayName = "Clear";
				author = "Fish & Shrike";
				textures[] = {"rtgVehicles\tex\LSV\a_exterior_black.paa","rtgVehicles\tex\LSV\b_interior_black.paa","rtgVehicles\tex\LSV\c_a2_black.paa","rtgVehicles\tex\LSV\d_wheels_black.paa","rtgVehicles\tex\LSV\e_mainbody_black.paa","rtgVehicles\tex\LSV\f_gratting_black.paa","rtgVehicles\tex\LSV\g_camo1_tile_black.paa","rtgVehicles\tex\LSV\h_camo2_m1025_black.paa","rtgVehicles\tex\LSV\i_unitdecals1.paa","rtgVehicles\tex\LSV\j_unitdecals2.paa"};
				factions[] = {"Raider_Tactical_F"};
			};
			class rtg_sabre
			{
				displayName = "Sabre";
				author = "Fish & Shrike";
				textures[] = {"rtgVehicles\tex\LSV\a_exterior_black.paa","rtgVehicles\tex\LSV\b_interior_black.paa","rtgVehicles\tex\LSV\c_a2_black.paa","rtgVehicles\tex\LSV\d_wheels_black.paa","rtgVehicles\tex\LSV\e_mainbody_black.paa","rtgVehicles\tex\LSV\f_gratting_black.paa","rtgVehicles\tex\LSV\g_camo1_tile_black.paa","rtgVehicles\tex\LSV\h_camo2_m1025_black_with_logosSabre.paa","rtgVehicles\tex\LSV\i_unitdecals1.paa","rtgVehicles\tex\LSV\j_unitdecals2.paa"};
				factions[] = {"Raider_Tactical_F"};
			};
			class rtg_demon
			{
				displayName = "Demon";
				author = "Fish & Shrike";
				textures[] = {"rtgVehicles\tex\LSV\a_exterior_black.paa","rtgVehicles\tex\LSV\b_interior_black.paa","rtgVehicles\tex\LSV\c_a2_black.paa","rtgVehicles\tex\LSV\d_wheels_black.paa","rtgVehicles\tex\LSV\e_mainbody_black.paa","rtgVehicles\tex\LSV\f_gratting_black.paa","rtgVehicles\tex\LSV\g_camo1_tile_black.paa","rtgVehicles\tex\LSV\h_camo2_m1025_black_with_logosDemon.paa","rtgVehicles\tex\LSV\i_unitdecals1.paa","rtgVehicles\tex\LSV\j_unitdecals2.paa"};
				factions[] = {"Raider_Tactical_F"};
			};
			class rtg_ares
			{
				displayName = "Ares";
				author = "Fish & Shrike";
				textures[] = {"rtgVehicles\tex\LSV\a_exterior_black.paa","rtgVehicles\tex\LSV\b_interior_black.paa","rtgVehicles\tex\LSV\c_a2_black.paa","rtgVehicles\tex\LSV\d_wheels_black.paa","rtgVehicles\tex\LSV\e_mainbody_black.paa","rtgVehicles\tex\LSV\f_gratting_black.paa","rtgVehicles\tex\LSV\g_camo1_tile_black.paa","rtgVehicles\tex\LSV\h_camo2_m1025_black_with_logosAres.paa","rtgVehicles\tex\LSV\i_unitdecals1.paa","rtgVehicles\tex\LSV\j_unitdecals2.paa"};
				factions[] = {"Raider_Tactical_F"};
			};
			class rtg_hitman
			{
				displayName = "Hitman";
				author = "Fish & Shrike";
				textures[] = {"rtgVehicles\tex\LSV\a_exterior_black.paa","rtgVehicles\tex\LSV\b_interior_black.paa","rtgVehicles\tex\LSV\c_a2_black.paa","rtgVehicles\tex\LSV\d_wheels_black.paa","rtgVehicles\tex\LSV\e_mainbody_black.paa","rtgVehicles\tex\LSV\f_gratting_black.paa","rtgVehicles\tex\LSV\g_camo1_tile_black.paa","rtgVehicles\tex\LSV\h_camo2_m1025_black_with_logosHitman.paa","rtgVehicles\tex\LSV\i_unitdecals1.paa","rtgVehicles\tex\LSV\j_unitdecals2.paa"};
				factions[] = {"Raider_Tactical_F"};
			};
		};
		class HitPoints: HitPoints
		{
			class hitwindshield_1: hitwindshield_1
			{
				armor = 4.29;
			};
			class hitwindshield_2: hitwindshield_2
			{
				armor = 4.29;
			};
			class HitGlass1: HitGlass1
			{
				armor = 4.09;
			};
			class HitGlass2: HitGlass2
			{
				armor = 4.09;
			};
			class HitGlass3: HitGlass3
			{
				armor = 4.09;
			};
			class HitGlass4: HitGlass4
			{
				armor = 4.09;
			};
		};
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				gunnerLeftHandAnimName = "OtocHlaven_Shake";
				gunnerRightHandAnimName = "OtocHlaven_Shake";
				gunnerLeftLegAnimName = "leg_left";
				gunnerRightLegAnimName = "leg_right";
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				animationSourceStickX = "MainTurret_Inertia";
				animationSourceStickY = "MainGun_Inertia";
				turretInfoType = "RHS_RscWeaponZeroing_TurretAdjust";
				discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex = 2;
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				weapons[] = {"RHS_M2"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Yellow","rhs_mag_100rnd_127x99_mag_Tracer_Yellow","rhs_mag_100rnd_127x99_mag_Tracer_Yellow","rhs_mag_100rnd_127x99_mag_Tracer_Yellow","rhs_mag_100rnd_127x99_mag_Tracer_Yellow","rhs_mag_100rnd_127x99_mag_Tracer_Yellow","rhs_mag_100rnd_127x99_mag_Tracer_Yellow","rhs_mag_100rnd_127x99_mag_Tracer_Yellow","rhs_mag_100rnd_127x99_mag_Tracer_Yellow","rhs_mag_100rnd_127x99_mag_Tracer_Yellow"};
				minElev = -12;
				maxElev = 45;
				soundServo[] = {"A3\sounds_f\dummysound",1e-06,1};
				soundAttenuationTurret = "HeliAttenuationGunner";
				disableSoundAttenuation = 1;
				gunnerAction = "RHS_HMMWV_Gunner03";
				gunnerInAction = "RHS_HMMWV_Gunner03a_in";
				lodTurnedIn = 0;
				lodTurnedOut = 1000;
				lodOpticsOut = 1000;
				canhideGunner = 1;
				inGunnerMayFire = 0;
				outGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				gunnerDoor = "Door_RB";
				gunnerCompartments = "Compartment1";
				ejectDeadGunner = 0;
				castGunnerShadow = 1;
				stabilizedInAxes = 0;
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "";
				memoryPointGunnerOutOptics = "gunnerview";
				gunnerOpticsModel = "";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				optics = 0;
				memoryPointsGetInGunner = "pos_cargo_RB";
				memoryPointsGetInGunnerDir = "pos_cargo_RB_dir";
				class ViewOptics: ViewOptics
				{
					initFov = 0.7;
					minFov = 0.3;
					maxFov = 1.1;
				};
				class ViewGunner: ViewOptics{};
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
		};
		class ace_cargo
		{
			class Cargo
			{
				class ACE_Wheel
				{
					type = "ACE_Wheel";
					amount = 4;
				};
			};
		};
		maximumLoad = 20000;
		class TransportItems
		{
			class _xx_rtg_pvs_15_black_gh
			{
				name = "rtg_pvs_15_black_gh";
				count = 8;
			};
			class _xx_ACRE_PRC343
			{
				name = "ACRE_PRC343";
				count = 2;
			};
			class _xx_ACRE_PRC152
			{
				name = "ACRE_PRC152";
				count = 2;
			};
			class _xx_ACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 8;
			};
			class _xx_ACE_Canteen
			{
				name = "ACE_Canteen";
				count = 5;
			};
			class _xx_ACE_Can_Franta
			{
				name = "ACE_Can_Franta";
				count = 9;
			};
			class _xx_ACE_MRE_BeefStew
			{
				name = "ACE_MRE_BeefStew";
				count = 5;
			};
			class _xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 9;
			};
		};
		class TransportBackpacks
		{
			class _xx_rtg_medical_grabpack
			{
				backpack = "rtg_medical_grabpack";
				count = 1;
			};
			class _xx_rtg_engineer_grabpack
			{
				backpack = "rtg_engineer_grabpack";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_m16a4_carryhandle
			{
				weapon = "rhs_weap_m16a4_carryhandle";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_rtg_30rnd_556_45
			{
				magazine = "rtg_30rnd_556_45";
				count = 10;
			};
			class _xx_rtg_200Rnd_762x51
			{
				magazine = "rtg_200Rnd_762x51";
				count = 5;
			};
		};
	};
	class raider_bushmaster_unarmed: bma3_bushmaster_unarmed_F
	{
		displayName = "Bushmaster Transport [1/7]";
		editorSubcategory = "RTGCars";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";
		fuelConsumptionRate = 0.03;
		fuelCapacity = 84;
		armor = 200;
		armorStructural = 350;
		explosionShielding = 70;
		minTotalDamageTreshold = 0.4;
		armorFuel = 1.4;
		armorGlass = 0.5;
		armorLights = 0.4;
		armorWheels = 0.05;
		armorHull = 4;
		armorEngine = 2;
		crewCrashProtection = 0.15;
		crewExplosionProtection = 0.9999;
		damageResistance = 0.00619;
		fuelExplosionPower = 5;
		destrType = "DestructWreck";
		ace_cargo_space = 16;
		ace_vehicles_engineStartDelay = 3;
		acre_hasInfantryPhone = 0;
		canFloat = 1;
		waterSpeedFactor = 1;
		waterResistanceCoef = 0.11;

		// Movement Config
		simulation = "carx";
		maxSpeed = 115;
		differentialType = "all_limited";
		enginePower = 429;
		
		// Wheels
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 150;
				suspTravelDirection[] = {0.25,-1,0};
				maxHandBrakeTorque = 0;
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 2066;
				springStrength = 201234;
				springDamperRate = 20600.6;
				MOI = 10.9;
				dampingRate = 0.1;
				maxBrakeTorque = 8000;
				maxHandBrakeTorque = 0;
				longitudinalStiffnessPerUnitGravity = 1150;
				latStiffX = 45.6;
				latStiffY = 23.8;
				frictionVsSlipGraph[] = {{0,0.3},{0.5,1},{0.8,0.7},{1,0.6}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 18000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
				suspTravelDirection[] = {-0.25,-1,0};
			};
			class RR: RF
			{
				boneName = "wheel_2_2";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 18000;
			};
		};

		weapons[] = {"SmokeLauncher","TruckHorn"};
		magazines[] = {"SmokeLauncherMag"};
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 160;
		ace_refuel_fuelCargo = 80;
		textureList[] = {"rtg_black1",1,"rtg_black2",1,"rtg_black3",1};
		class textureSources
		{
			class rtg_black1
			{
				displayName = "Black (Sabre)";
				author = "Fish";
				textures[] = {"rtgVehicles\tex\bushmaster\bm2_S.paa","rtgVehicles\tex\bushmaster\rtg_co.paa","bma3\bma3_bushmaster_data\camo3\camo3_co.paa",""};
				factions[] = {"Raider_Tactical_F"};
			};
			class rtg_black2
			{
				displayName = "Black (Ares)";
				author = "Fish";
				textures[] = {"rtgVehicles\tex\bushmaster\bm2_A.paa","rtgVehicles\tex\bushmaster\rtg_co.paa","bma3\bma3_bushmaster_data\camo3\camo3_co.paa",""};
				factions[] = {"Raider_Tactical_F"};
			};
			class rtg_black3
			{
				displayName = "Black (Demon)";
				author = "Fish";
				textures[] = {"rtgVehicles\tex\bushmaster\bm2_C.paa","rtgVehicles\tex\bushmaster\rtg_co.paa","bma3\bma3_bushmaster_data\camo3\camo3_co.paa",""};
				factions[] = {"Raider_Tactical_F"};
			};
		};
		class TransportItems
		{
			class _xx_rtg_pvs_15_black_gh
			{
				name = "rtg_pvs_15_black_gh";
				count = 8;
			};
			class _xx_ACRE_PRC343
			{
				name = "ACRE_PRC343";
				count = 2;
			};
			class _xx_ACRE_PRC152
			{
				name = "ACRE_PRC152";
				count = 2;
			};
			class _xx_ACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 8;
			};
			class _xx_ACE_Canteen
			{
				name = "ACE_Canteen";
				count = 5;
			};
			class _xx_ACE_Can_Franta
			{
				name = "ACE_Can_Franta";
				count = 9;
			};
			class _xx_ACE_MRE_BeefStew
			{
				name = "ACE_MRE_BeefStew";
				count = 5;
			};
			class _xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 9;
			};
		};
		class TransportBackpacks
		{
			class _xx_rtg_medical_grabpack
			{
				backpack = "rtg_medical_grabpack";
				count = 1;
			};
			class _xx_rtg_engineer_grabpack
			{
				backpack = "rtg_engineer_grabpack";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_m16a4_carryhandle
			{
				weapon = "rhs_weap_m16a4_carryhandle";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_rtg_30rnd_556_45
			{
				magazine = "rtg_30rnd_556_45";
				count = 10;
			};
			class _xx_rtg_200Rnd_762x51
			{
				magazine = "rtg_200Rnd_762x51";
				count = 5;
			};
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Intercom";
				shortName = "Intercom";
				allowedPositions[] = {"driver","commander","gunner"};
				limitedPositions[] = {};
				numLimitedPositions = 0;
				masterPositions[] = {"driver"};
				connectedByDefault = 1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				allowedPositions[] = {"driver","commander","gunner"};
				componentName = "ACRE_PRC152";
				displayName = "Dash";
				mountedRadio = "ACRE_PRC152";
				shortName = "Dash";
			};
		};
		class ace_cargo
		{
			class Cargo
			{
				class ACE_Wheel
				{
					type = "ACE_Wheel";
					amount = 4;
				};
			};
		};
	};
	class ej_UH92_NATO;
	class rtg_loaf: ej_UH92_NATO
	{
		displayName = "Magpie (4/12)";
		editorSubcategory = "RTGHelicopters";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";
		maximumLoad = 20000;
		ace_cargo_space = 16;
		acre_hasInfantryPhone = 0;
		camouflage = 3;
		canFloat = 1;
		irTarget = 1;
		irTargetSize = 0.5;
		visualTarget = 1;
		visualTargetSize = 1;
		radarTarget = 1;
		radarTargetSize = 0.3;
		radarType = 4;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 16;
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		laserScanner = 1;
		armor = 20;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		ace_fastroping_enabled = 2;
		ace_fastroping_friesType = "ACE_friesAnchorBar";
		ace_refuel_fuelCargo = 80;
		class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev = -60;
				maxElev = 18;
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
				weapons[] = {"rhs_weap_m134_minigun_1"};
				magazines[] = {"rhs_mag_762x51_m80a1_4000"};
				gunnerName = "Right M134 Gunner";
				memoryPointGun = "machinegun_1";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				primaryGunner = 0;
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerCompartments = "Compartment3";
				commanding = -3;
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
				maxElev = 18;
				initElev = -30;
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
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex = 5;
				weapons[] = {"rhs_weap_m134_minigun_1"};
				magazines[] = {"rhs_mag_762x51_m80a1_4000"};
				gunnerName = "Left M134 Gunner";
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
				minTurn = -190;
				maxTurn = 190;
				initTurn = 180;
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				showHMD = 1;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				gunnerCompartments = "Compartment2";
				commanding = -1;
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
				weapons[] = {"ej_master_arms_safe","Laserdesignator_mounted","EricJ_CMFlareLauncherDAP"};
				magazines[] = {"Laserbatteries","168Rnd_CMFlare_Chaff_Magazine"};
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
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange = 2500;
							maxRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 2500;
							maxRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 3500;
							maxRange = 3500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 2500;
							maxRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						groundNoiseDistanceCoef = 0.0005;
						maxGroundNoiseDistance = 50;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						typeRecognitionDistance = 20000;
						maxFogSeeThrough = 1;
						maxTrackableSpeed = 830;
					};
					class ActiveRadarSensorComponent_Wide: ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						groundNoiseDistanceCoef = 0.0005;
						maxGroundNoiseDistance = 50;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						angleRangeHorizontal = 110;
						angleRangeVertical = 110;
						typeRecognitionDistance = 10000;
						maxFogSeeThrough = 1;
						maxTrackableSpeed = 830;
					};
				};
			};
		};
	};
	class ej_AH96_NATO;
	class rtg_damper: ej_AH96_NATO
	{
		displayName = "Hawk (2/0)";
		editorSubcategory = "RTGHelicopters";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";
		maximumLoad = 20000;
		ace_cargo_space = 16;
		acre_hasInfantryPhone = 0;
		camouflage = 3;
		canFloat = 1;
		irTarget = 1;
		irTargetSize = 0.5;
		visualTarget = 1;
		visualTargetSize = 1;
		radarTarget = 1;
		radarTargetSize = 0.3;
		radarType = 4;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 16;
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		laserScanner = 1;
		armor = 20;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		bodyFrictionCoef = 0.7;
		liftForceCoef = 1.1;
		minMainRotorDive = -12;
		maxMainRotorDive = 16;
		ace_fastroping_enabled = 1;
		ace_refuel_fuelCargo = 80;
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
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL","DAR","DAGR","RHS_weap_m134_pylon"};
						turret[] = {0};
						maxweight = 800;
						UIposition[] = {0.06,0.4};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = "PylonRack_12Rnd_PG_missiles";
						priority = 4;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL","DAR","DAGR","RHS_weap_m134_pylon"};
						maxweight = 800;
						UIposition[] = {0.08,0.35};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment = "PylonRack_12Rnd_PG_missiles";
						priority = 3;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL","DAR","DAGR","RHS_weap_m134_pylon"};
						maxweight = 800;
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
	};
	class FP_GLD_Taru_S0;
	class rtg_heavyLift_Cargo: FP_GLD_Taru_S0
	{
		displayName = "Pelican Cargo [3/0]";
		editorSubcategory = "RTGHelicopters";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";
		maximumLoad = 20000;
		ace_cargo_space = 16;
		acre_hasInfantryPhone = 0;
		camouflage = 3;
		canFloat = 1;
		irTarget = 1;
		irTargetSize = 0.5;
		visualTarget = 1;
		visualTargetSize = 1;
		radarTarget = 1;
		radarTargetSize = 0.3;
		radarType = 4;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 16;
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		laserScanner = 1;
		armor = 80;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		class TransportItems
		{
			class _xx_rtg_pvs_15_black_gh
			{
				name = "rtg_pvs_15_black_gh";
				count = 8;
			};
			class _xx_ACRE_PRC343
			{
				name = "ACRE_PRC343";
				count = 2;
			};
			class _xx_ACRE_PRC152
			{
				name = "ACRE_PRC152";
				count = 2;
			};
			class _xx_ACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 8;
			};
			class _xx_ACE_Canteen
			{
				name = "ACE_Canteen";
				count = 5;
			};
			class _xx_ACE_Can_Franta
			{
				name = "ACE_Can_Franta";
				count = 9;
			};
			class _xx_ACE_MRE_BeefStew
			{
				name = "ACE_MRE_BeefStew";
				count = 5;
			};
			class _xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 9;
			};
		};
		class TransportBackpacks
		{
			class _xx_rtg_medical_grabpack
			{
				backpack = "rtg_medical_grabpack";
				count = 1;
			};
			class _xx_rtg_engineer_grabpack
			{
				backpack = "rtg_engineer_grabpack";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_m16a4_carryhandle
			{
				weapon = "rhs_weap_m16a4_carryhandle";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_rtg_30rnd_556_45
			{
				magazine = "rtg_30rnd_556_45";
				count = 10;
			};
			class _xx_rtg_200Rnd_762x51
			{
				magazine = "rtg_200Rnd_762x51";
				count = 5;
			};
		};
		ace_fastroping_enabled = 1;
		ace_refuel_fuelCargo = 80;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange = 2500;
							maxRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 2500;
							maxRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 3500;
							maxRange = 3500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 2500;
							maxRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						groundNoiseDistanceCoef = 0.0005;
						maxGroundNoiseDistance = 50;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						typeRecognitionDistance = 20000;
						maxFogSeeThrough = 1;
						maxTrackableSpeed = 830;
					};
					class ActiveRadarSensorComponent_Wide: ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						groundNoiseDistanceCoef = 0.0005;
						maxGroundNoiseDistance = 50;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						angleRangeHorizontal = 110;
						angleRangeVertical = 110;
						typeRecognitionDistance = 10000;
						maxFogSeeThrough = 1;
						maxTrackableSpeed = 830;
					};
				};
			};
		};
	};
	class FP_GLD_TaruTransport_S0;
	class rtg_heavyLift_Transport: FP_GLD_TaruTransport_S0
	{
		displayName = "Pelican Transport [3/16]";
		editorSubcategory = "RTGHelicopters";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";
		maximumLoad = 20000;
		ace_cargo_space = 16;
		acre_hasInfantryPhone = 0;
		camouflage = 3;
		canFloat = 1;
		irTarget = 1;
		irTargetSize = 0.5;
		visualTarget = 1;
		visualTargetSize = 1;
		radarTarget = 1;
		radarTargetSize = 0.3;
		radarType = 4;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 16;
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		laserScanner = 1;
		armor = 45;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		ace_fastroping_enabled = 1;
		ace_refuel_fuelCargo = 80;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange = 2500;
							maxRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 2500;
							maxRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 3500;
							maxRange = 3500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 2500;
							maxRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						groundNoiseDistanceCoef = 0.0005;
						maxGroundNoiseDistance = 50;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						typeRecognitionDistance = 20000;
						maxFogSeeThrough = 1;
						maxTrackableSpeed = 830;
					};
					class ActiveRadarSensorComponent_Wide: ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						groundNoiseDistanceCoef = 0.0005;
						maxGroundNoiseDistance = 50;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						angleRangeHorizontal = 110;
						angleRangeVertical = 110;
						typeRecognitionDistance = 10000;
						maxFogSeeThrough = 1;
						maxTrackableSpeed = 830;
					};
				};
			};
		};
		class TransportItems
		{
			class _xx_rtg_pvs_15_black_gh
			{
				name = "rtg_pvs_15_black_gh";
				count = 8;
			};
			class _xx_ACRE_PRC343
			{
				name = "ACRE_PRC343";
				count = 2;
			};
			class _xx_ACRE_PRC152
			{
				name = "ACRE_PRC152";
				count = 2;
			};
			class _xx_ACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 8;
			};
			class _xx_ACE_Canteen
			{
				name = "ACE_Canteen";
				count = 5;
			};
			class _xx_ACE_Can_Franta
			{
				name = "ACE_Can_Franta";
				count = 9;
			};
			class _xx_ACE_MRE_BeefStew
			{
				name = "ACE_MRE_BeefStew";
				count = 5;
			};
			class _xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 9;
			};
		};
		class TransportBackpacks
		{
			class _xx_rtg_medical_grabpack
			{
				backpack = "rtg_medical_grabpack";
				count = 1;
			};
			class _xx_rtg_engineer_grabpack
			{
				backpack = "rtg_engineer_grabpack";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_m16a4_carryhandle
			{
				weapon = "rhs_weap_m16a4_carryhandle";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_rtg_30rnd_556_45
			{
				magazine = "rtg_30rnd_556_45";
				count = 10;
			};
			class _xx_rtg_200Rnd_762x51
			{
				magazine = "rtg_200Rnd_762x51";
				count = 5;
			};
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Crew Intercom";
				shortName = "Crew";
				allowedPositions[] = {"driver","commander",{"turret","all"}};
				limitedPositions[] = {};
				numLimitedPositions = 0;
				masterPositions[] = {"driver"};
				connectedByDefault = 1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				allowedPositions[] = {"driver","commander",{"turret","all"}};
				componentName = "ACRE_PRC152";
				displayName = "Dash";
				mountedRadio = "ACRE_PRC152";
				shortName = "Dash";
			};
		};
	};
	class UK3CB_MDF_B_Skiff;
	class raider_fast_rhib: UK3CB_MDF_B_Skiff
	{
		displayName = "Rhib Fast [1/8]";
		editorSubcategory = "RTGBoats";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";
		fuelConsumptionRate = 0.03;
		fuelCapacity = 84;
		armor = 300;
		maxSpeed = 130;
		maximumLoad = 20000;
		ace_cargo_space = 16;
		ace_vehicles_engineStartDelay = 3;
		acre_hasInfantryPhone = 0;
		ace_refuel_fuelCargo = 80;
		canPush = 1;
		class TransportItems
		{
			class _xx_rtg_pvs_15_black_gh
			{
				name = "rtg_pvs_15_black_gh";
				count = 8;
			};
			class _xx_ACRE_PRC343
			{
				name = "ACRE_PRC343";
				count = 2;
			};
			class _xx_ACRE_PRC152
			{
				name = "ACRE_PRC152";
				count = 2;
			};
			class _xx_ACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 8;
			};
			class _xx_ACE_Canteen
			{
				name = "ACE_Canteen";
				count = 5;
			};
			class _xx_ACE_Can_Franta
			{
				name = "ACE_Can_Franta";
				count = 9;
			};
			class _xx_ACE_MRE_BeefStew
			{
				name = "ACE_MRE_BeefStew";
				count = 5;
			};
			class _xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 9;
			};
		};
		class TransportBackpacks
		{
			class _xx_rtg_medical_grabpack
			{
				backpack = "rtg_medical_grabpack";
				count = 1;
			};
			class _xx_rtg_engineer_grabpack
			{
				backpack = "rtg_engineer_grabpack";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_m16a4_carryhandle
			{
				weapon = "rhs_weap_m16a4_carryhandle";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_rtg_30rnd_556_45
			{
				magazine = "rtg_30rnd_556_45";
				count = 10;
			};
			class _xx_rtg_200Rnd_762x51
			{
				magazine = "rtg_200Rnd_762x51";
				count = 5;
			};
		};
	};
	class B_CargoNet_01_ammo_F;
	class rtg_BasicSupply: B_CargoNet_01_ammo_F
	{
		displayName = "Basic Supply Crate";
		editorCategory = "Raider_Tactical";
		scope = 2;
		dlc = "raiderTactical";
		ace_refuel_fuelCargo = 80;
		class TransportItems
		{
			class _xx_rtg_pvs_15_black_gh
			{
				name = "rtg_pvs_15_black_gh";
				count = 8;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 2;
			};
			class _xx_ACRE_PRC343
			{
				name = "ACRE_PRC343";
				count = 6;
			};
			class _xx_ACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 12;
			};
			class _xx_ACE_Canteen
			{
				name = "ACE_Canteen";
				count = 14;
			};
			class _xx_ACE_MRE_BeefStew
			{
				name = "ACE_MRE_BeefStew";
				count = 14;
			};
			class _xx_ACE_bloodIV
			{
				name = "ACE_bloodIV";
				count = 8;
			};
			class _xx_ACE_bloodIV_500
			{
				name = "ACE_bloodIV_500";
				count = 8;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 60;
			};
			class _xx_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 60;
			};
			class _xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 8;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 60;
			};
			class _xx_ACE_morphine
			{
				name = "ACE_morphine";
				count = 15;
			};
			class _xx_kat_PainkillerItem
			{
				name = "kat_PainkillerItem";
				count = 15;
			};
			class _xx_kat_PervitinItem
			{
				name = "kat_PervitinItem";
				count = 25;
			};
			class _xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 30;
			};
			class _xx_kat_guedel
			{
				name = "kat_guedel";
				count = 25;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_m16a4_carryhandle
			{
				weapon = "rhs_weap_m16a4_carryhandle";
				count = 6;
			};
		};
		class TransportMagazines
		{
			class _xx_rtg_30rnd_556_45
			{
				magazine = "rtg_30rnd_556_45";
				count = 40;
			};
			class _xx_rtg_30rnd_300_blk
			{
				magazine = "rtg_30rnd_300_blk";
				count = 35;
			};
			class _xx_rtg_20Rnd_762x51
			{
				magazine = "rtg_20Rnd_762x51";
				count = 35;
			};
			class _xx_rtg_8Rnd_762x51
			{
				magazine = "rtg_8Rnd_762x51";
				count = 20;
			};
			class _xx_rtg_10rnd_10bw
			{
				magazine = "rtg_10rnd_10bw";
				count = 25;
			};
			class _xx_rtg_10Rnd_127x99
			{
				magazine = "rtg_10Rnd_127x99";
				count = 15;
			};
			class _xx_rtg_p90
			{
				magazine = "rtg_p90";
				count = 18;
			};
			class _xx_rtg_9mm_35Rnd_mag
			{
				magazine = "rtg_9mm_35Rnd_mag";
				count = 30;
			};
			class _xx_rtg_12g_15Rnd
			{
				magazine = "rtg_12g_15Rnd";
				count = 18;
			};
			class _xx_rhs_mag_M433_HEDP
			{
				magazine = "rhs_mag_M433_HEDP";
				count = 40;
			};
			class _xx_ACE_HuntIR_M203
			{
				magazine = "ACE_HuntIR_M203";
				count = 12;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 15;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 40;
			};
			class _xx_rtg_200rnd_556_45_t
			{
				magazine = "rtg_200rnd_556_45_t";
				count = 25;
			};
			class _xx_rtg_200Rnd_762x51_t
			{
				magazine = "rtg_200Rnd_762x51_t";
				count = 25;
			};
			class _xx_rtg_200rnd_300_blk_t
			{
				magazine = "rtg_200rnd_300_blk_t";
				count = 25;
			};
			class _xx_rtg_rpg_hedp_mag
			{
				magazine = "rtg_rpg_hedp_mag";
				count = 4;
			};
			class _xx_rtg_rpg_heat_mag
			{
				magazine = "rtg_rpg_heat_mag";
				count = 4;
			};
			class _xx_rtg_rpg_smk_mag
			{
				magazine = "rtg_rpg_smk_mag";
				count = 4;
			};
			class _xx_rtg_MRAWS_SMK_F
			{
				magazine = "rtg_MRAWS_SMK_F";
				count = 3;
			};
			class _xx_rtg_MRAWS_HE_F
			{
				magazine = "rtg_MRAWS_HE_F";
				count = 3;
			};
			class _xx_rtg_MRAWS_HEAT_F
			{
				magazine = "rtg_MRAWS_HEAT_F";
				count = 3;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 24;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 24;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 12;
			};
			class _xx_ACE_M14
			{
				magazine = "ACE_M14";
				count = 12;
			};
			class _xx_rhsusf_m112_mag
			{
				magazine = "rhsusf_m112_mag";
				count = 8;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 10;
			};
		};
	};
	class BOX_NATO_WpsLaunch_F;
	class rtg_atSupply: BOX_NATO_WpsLaunch_F
	{
		displayName = "Anti Tank Crate";
		editorCategory = "Raider_Tactical";
		scope = 2;
		dlc = "raiderTactical";
		class TransportMagazines
		{
			class _xx_rtg_rpg_hedp_mag
			{
				magazine = "rtg_rpg_hedp_mag";
				count = 14;
			};
			class _xx_rtg_rpg_heat_mag
			{
				magazine = "rtg_rpg_heat_mag";
				count = 14;
			};
			class _xx_rtg_rpg_smk_mag
			{
				magazine = "rtg_rpg_smk_mag";
				count = 14;
			};
			class _xx_rtg_MRAWS_SMK_F
			{
				magazine = "rtg_MRAWS_SMK_F";
				count = 12;
			};
			class _xx_rtg_MRAWS_HE_F
			{
				magazine = "rtg_MRAWS_HE_F";
				count = 12;
			};
			class _xx_rtg_MRAWS_HEAT_F
			{
				magazine = "rtg_MRAWS_HEAT_F";
				count = 12;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 9;
			};
		};
	};
	class C_IDAP_supplyCrate_F;
	class rtg_medicalSupply: C_IDAP_supplyCrate_F
	{
		displayName = "Medical Crate";
		editorCategory = "Raider_Tactical";
		scope = 2;
		dlc = "raiderTactical";
		class TransportItems
		{
			class _xx_ACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 12;
			};
			class _xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 12;
			};
			class _xx_ACE_bloodIV
			{
				name = "ACE_bloodIV";
				count = 15;
			};
			class _xx_ACE_bloodIV_500
			{
				name = "ACE_bloodIV_500";
				count = 15;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 100;
			};
			class _xx_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 100;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 100;
			};
			class _xx_ACE_morphine
			{
				name = "ACE_morphine";
				count = 25;
			};
			class _xx_kat_PainkillerItem
			{
				name = "kat_PainkillerItem";
				count = 25;
			};
			class _xx_kat_PervitinItem
			{
				name = "kat_PervitinItem";
				count = 25;
			};
			class _xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 35;
			};
			class _xx_kat_guedel
			{
				name = "kat_guedel";
				count = 25;
			};
			class _xx_kat_naloxone
			{
				name = "kat_naloxone";
				count = 25;
			};
			class _xx_kat_TXA
			{
				name = "kat_TXA";
				count = 25;
			};
			class _xx_kat_atropine
			{
				name = "kat_atropine";
				count = 25;
			};
			class _xx_kat_fentanyl
			{
				name = "kat_fentanyl";
				count = 25;
			};
			class _xx_kat_BVM
			{
				name = "kat_BVM";
				count = 25;
			};
			class _xx_kat_larynx
			{
				name = "kat_larynx";
				count = 25;
			};
			class _xx_kat_Pulseoximeter
			{
				name = "kat_Pulseoximeter";
				count = 25;
			};
			class _xx_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 25;
			};
			class _xx_ACE_plasmaIV_500
			{
				name = "ACE_plasmaIV_500";
				count = 25;
			};
			class _xx_ACE_surgicalKit
			{
				name = "ACE_surgicalKit";
				count = 12;
			};
			class _xx_kat_chestSeal
			{
				name = "kat_chestSeal";
				count = 25;
			};
		};
	};
	class Box_NATO_AmmoVeh_F;
	class rtg_wheelsBox: Box_NATO_AmmoVeh_F
	{
		displayName = "Wheels Crate";
		editorCategory = "Raider_Tactical";
		scope = 2;
		dlc = "raiderTactical";
		ace_repair_spareWheels = 16;
	};
};
