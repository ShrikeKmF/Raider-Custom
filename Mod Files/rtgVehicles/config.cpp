// Defines
	#define RTG_Vehicle_Gear \
	class TransportItems \
	{ \
		class _xx_rtg_pvs_15_black_gh \
		{ \
			name = "rtg_pvs_15_black_gh"; \
			count = 8; \
		}; \
		class _xx_ACRE_PRC343 \
		{ \
			name = "ACRE_PRC343"; \
			count = 2; \
		}; \
		class _xx_ACRE_PRC152 \
		{ \
			name = "ACRE_PRC152"; \
			count = 2; \
		}; \
		class _xx_ACE_personalAidKit \
		{ \
			name = "ACE_personalAidKit"; \
			count = 8; \
		}; \
		class _xx_ACE_Canteen \
		{ \
			name = "ACE_Canteen"; \
			count = 5; \
		}; \
		class _xx_ACE_Can_Franta \
		{ \
			name = "ACE_Can_Franta"; \
			count = 9; \
		}; \
		class _xx_ACE_MRE_BeefStew \
		{ \
			name = "ACE_MRE_BeefStew"; \
			count = 5; \
		}; \
		class _xx_ACE_bodyBag \
		{ \
			name = "ACE_bodyBag"; \
			count = 9; \
		}; \
	}; \
	class TransportBackpacks \
	{ \
		class _xx_rtg_medical_grabpack \
		{ \
			backpack = "rtg_medical_grabpack"; \
			count = 1; \
		}; \
		class _xx_rtg_engineer_grabpack \
		{ \
			backpack = "rtg_engineer_grabpack"; \
			count = 1; \
		}; \
	}; \
	class TransportWeapons \
	{ \
		class _xx_rhs_weap_m16a4_carryhandle \
		{ \
			weapon = "rhs_weap_m16a4_carryhandle"; \
			count = 2; \
		}; \
	}; \
	class TransportMagazines \
	{ \
		class _xx_rtg_30rnd_556_45 \
		{ \
			magazine = "rtg_30rnd_556_45"; \
			count = 10; \
		}; \
		class _xx_rtg_200Rnd_762x51 \
		{ \
			magazine = "rtg_200Rnd_762x51"; \
			count = 5; \
		}; \
	}; \
	class ace_cargo \
	{ \
		class Cargo \
		{ \
			class ACE_Wheel \
			{ \
				type = "ACE_Wheel"; \
				amount = 4; \
			}; \
		}; \
	}

	#define RTG_Vehicle_Radios \
	class AcreIntercoms \
	{ \
		class Intercom_1 \
		{ \
			displayName = "Crew Intercom"; \
			shortName = "Crew"; \
			allowedPositions[] = {"driver","commander",{"turret","all"}}; \
			limitedPositions[] = {}; \
			numLimitedPositions = 0; \
			masterPositions[] = {"driver"}; \
			connectedByDefault = 1; \
		}; \
	}; \
	class AcreRacks \
	{ \
		class Rack_1 \
		{ \
			allowedPositions[] = {"driver","commander",{"turret","all"}}; \
			componentName = "ACRE_PRC152"; \
			displayName = "Dash"; \
			mountedRadio = "ACRE_PRC152"; \
			shortName = "Dash"; \
		}; \
	}


class CfgPatches
{
	class rtgVehicles
	{
		name = "rtgVehicles";
		version = "1.1";
		author = "Shrike";
		url = "";
		requiredAddons[] = {"a3_characters_F","a3_characters_F_beta","A3_Characters_F_Common","a3_characters_f_beta","a3_characters_f_gamma","A3_Soft_F_epc","bma3_bushmaster","uk3cb_factions_fia","rhsusf_c_weapons"};
		units[] = {"rtg_UH60M_DAP_Magpie", "raider_undercover_vehicle", "raider_heavy_attack_boat", "raider_light_strike_vehicle", "rtg_wheelsBox","hitman_light_vehicle","raider_fast_rhib","raider_strike_car","raider_bushmaster_unarmed","rtg_UH60M_Magpie","rtg_AH1Z_Hawk","rtg_heavyLift_Cargo","rtg_heavyLift_Transport","rtg_BasicSupply","rtg_atSupply","rtg_medicalSupply"};
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
	class Components;
	class SensorTemplatePassiveRadar;
	class SensorTemplateActiveRadar;
	class ActiveRadarSensorComponent;
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
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplateActiveRadar;
	class SensorTemplatePassiveRadar;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class rhsusf_m1025_d_m2;

	class UK3CB_C_SUV;
	class raider_undercover_vehicle : UK3CB_C_SUV
	{
		displayName = "SUV [1/5]";
		editorSubcategory = "RTGCars";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";
		fuelConsumptionRate = 0.03;
		fuelCapacity = 55;
		ace_cargo_space = 28;
		ace_vehicles_engineStartDelay = 3;
		acre_hasInfantryPhone = 0;
		canFloat = 0;

		simulation = "carx";
		maxSpeed = 115;
		brakeIdleSpeed = 0.87;
		ace_refuel_fuelCargo = 80;
		armor = 25;
		armorStructural = 2;
		armorFuel = 1.4;
		armorGlass = 4;
		armorLights = 0.4;
		armorWheels = 0.05;
		armorHull = 1;
		armorEngine = 2;
		
		maximumLoad = 20000;
		RTG_Vehicle_Gear;
		RTG_Vehicle_Radios;
	}
	
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
		maxSpeed = 115; // Top speed remains the same
		brakeIdleSpeed = 0.87;
		switchTime = 0.5;
		latency = 1.0;
		changeGearType = "effective";
		changeGearOmegaRatios[] = {
			__EVAL(3400/3400), __EVAL(1000/3400),
			__EVAL(700/3400), __EVAL(500/3400),
			__EVAL(3150/3400), __EVAL(1600/3400),
			__EVAL(2600/3400), __EVAL(1200/3400),
			__EVAL(2900/3400), __EVAL(1700/3400),
			__EVAL(3400/3400), __EVAL(2200/3400)
		};      
		class complexGearbox
		{
			GearboxRatios[] = {
				"R1", -3.50, // Increased reverse ratio for better reverse speed
				"N", 0,
				"D1", 3.00, // Increased first gear ratio for better acceleration
				"D2", 1.80, // Adjusted second gear ratio for smoother transition
				"D3", 1.20, // Adjusted third gear ratio for a balanced performance
				"D4", 0.90  // Adjusted fourth gear ratio for high-speed driving
			};
			TransmissionRatios[] = {"High", 6.5}; // Increased to improve high-speed performance
			gearBoxMode = "manual"; // Changed to manual for direct control
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};

		differentialType = "all_limited";
		frontRearSplit = 0.55;
		frontBias = 2.5;
		rearBias = 2.0;
		centreBias = 1.6;
		clutchStrength = 85;
		transmissionLosses = 15;
		dampingRateFullThrottle = 0.12;
		dampingRateZeroThrottleClutchEngaged = 2.5;
		dampingRateZeroThrottleClutchDisengaged = 0.40;
		torqueCurve[] = {
			{__EVAL(650/3400), __EVAL(470/597)},
			{__EVAL(1000/3400), __EVAL(550/597)},
			{__EVAL(1400/3400), __EVAL(610/597)},
			{__EVAL(1800/3400), __EVAL(620/597)},
			{__EVAL(2400/3400), __EVAL(580/597)},
			{__EVAL(2600/3400), __EVAL(500/597)},
			{__EVAL(3200/3400), __EVAL(450/597)},
			{__EVAL(3603/3400), __EVAL(0/597)}
		};      

		enginePower = 200; // Increased for faster acceleration
		peakTorque = 620;
		minOmega = 41;
		maxOmega = 356.05;
		idleRPM = 650;
		redRPM = 3400;

		engineLosses = 10; // Reduced losses for better performance
		thrustDelay = 0.7;
		engineBrakeCoef = 0.6;

		antiRollbarForceCoef = 10; // Reduced for less aggressive stabilization
		antiRollbarForceLimit = 4.0; // Adjusted for improved balance
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 60;

		accelAidForceYOffset = 0;
		
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
				mass = 70; // Reduced for better handling
				MOI = 8.5; // Reduced for quicker response
				maxBrakeTorque = 12000;
				maxHandBrakeTorque = 0;
				longitudinalStiffnessPerUnitGravity = 2500;
				latStiffX = 35.0;
				latStiffY = 75.0;
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
		hiddenSelectionsTextures[] = {"rtgVehicles\tex\LSV\a_exterior_black.paa","rtgVehicles\tex\LSV\b_interior_black.paa","rtgVehicles\tex\LSV\c_a2_black.paa","rtgVehicles\tex\LSV\d_wheels_black.paa","rtgVehicles\tex\LSV\e_mainbody_black.paa","rtgVehicles\tex\LSV\f_gratting_black.paa","","rtgVehicles\tex\LSV\k_2drcargocomplete_black_with_logoshitman.paa","rtgVehicles\tex\LSV\i_unitdecals1.paa","rtgVehicles\tex\LSV\j_unitdecals2.paa"};
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
		switchTime = 0.5;
		latency = 1.0;
		changeGearType = "effective"; // condition for switching gears
		changeGearOmegaRatios[] = {
			__EVAL(3400/3400), __EVAL(1000/3400),
			__EVAL(700/3400), __EVAL(500/3400),
			__EVAL(3150/3400), __EVAL(1600/3400),
			__EVAL(2600/3400), __EVAL(1200/3400),
			__EVAL(2900/3400), __EVAL(1700/3400),
			__EVAL(3400/3400), __EVAL(2200/3400)
		};
		class complexGearbox
		{
			GearboxRatios[] = {
				"R1", -3.07,       // Reverse gear
				"N", 0,            // Neutral
				"D1", 4.00,        // 1st gear - adjusted for better low-speed acceleration
				"D2", 2.50,        // 2nd gear - adjusted for smooth transition from 1st
				"D3", 1.60,        // 3rd gear - balanced for mid-range speeds
				"D4", 1.00         // 4th gear - suitable for higher speeds
			};
			
			TransmissionRatios[] = {
				"High", 5.0       // Adjusted to match gearbox ratios
			};
			
			gearBoxMode = "auto";  // Automatic transmission mode
			moveOffGear = 1;       // Gear to start moving in
			driveString = "D";     // Drive mode string
			neutralString = "N";   // Neutral mode string
			reverseString = "R";   // Reverse mode string
		};


		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 2.7;
		rearBias = 1.9;
		centreBias = 1.5;
		clutchStrength = 85;
		transmissionLosses = 20;
		dampingRateFullThrottle = 0.15;
		dampingRateZeroThrottleClutchEngaged = 2.5; 
		dampingRateZeroThrottleClutchDisengaged = 0.4;
		torqueCurve[] = {
			{__EVAL(650/3400), __EVAL(420/597)},
			{__EVAL(1000/3400), __EVAL(465/597)},
			{__EVAL(1400/3400), __EVAL(544/597)},
			{__EVAL(1800/3400), __EVAL(597/597)},
			{__EVAL(2400/3400), __EVAL(583/597)},
			{__EVAL(2600/3400), __EVAL(499/597)},
			{__EVAL(3200/3400), __EVAL(472/597)},
			{__EVAL(3603/3400), __EVAL(0/597)}
		};

		enginePower = 191;
		peakTorque = 597;
		minOmega = 41;
		maxOmega = 356.05;
		idleRPM = 650;
		redRPM = 3400;

		engineLosses = 12;
		thrustDelay = 0.8;
		engineBrakeCoef = 0.8;

		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 5.5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 80;

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
				mass = 90; // Increased mass
				MOI = 12.0; // Increased Moment of Inertia
				maxBrakeTorque = 7500;
				maxHandBrakeTorque = 0;
				longitudinalStiffnessPerUnitGravity = 3000; // Increased stiffness
				latStiffX = 50.0; // Increased stiffness
				latStiffY = 90.0; // Increased stiffness
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
				magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red"};
				minElev = -11;
				maxElev = 41;
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
				stabilizedInAxes = 1;
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
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewGunner: ViewOptics{};
				maxVerticalRotSpeed  = 0.75;
        		maxHorizontalRotSpeed  = 2.051282;
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
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
		maxSpeed = 120;
		enginePower = 600;
		differentialType = "all_limited";
		
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
				MOI = 10.9;
				dampingRate = 0.15;
				maxBrakeTorque = 8000;
				longitudinalStiffnessPerUnitGravity = 2700;
				latStiffX = 90.8;
				latStiffY = 70.0;
				frictionVsSlipGraph[] = {{0,0.25},{0.5,0.85},{0.8,0.65},{1,0.55}};
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
		RTG_Vehicle_Gear;
		RTG_Vehicle_Radios;
	};

	class RHS_UH60M_ESSS2_D;
	class rtg_UH60M_DAP_Magpie : RHS_UH60M_ESSS2_D
	{
		displayName = "Magpie DAP (2/14)";
		editorSubcategory = "RTGHelicopters";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";
		maximumLoad = 20000;
		ace_cargo_space = 16;
		helmetMountedDisplay=1;
		RTG_Vehicle_Gear;
		
		hiddenSelectionsTextures[]=
		{
			"\rtgVehicles\tex\Magpie\uh60m_fuselage_co.paa",
			"\rtgVehicles\tex\Magpie\uh60m_engine_co.paa",
			"\rtgVehicles\tex\Magpie\default_co.paa",
			"\rtgVehicles\tex\Magpie\uh60m_dust_filter_co.paa"
		};
		class textureSources
		{
			class raider
			{
				displayName="Raider";
				author = "Shrike";
				textures[]=
				{
					"\rtgVehicles\tex\Magpie\uh60m_fuselage_co.paa",
					"\rtgVehicles\tex\Magpie\uh60m_engine_co.paa",
					"\rtgVehicles\tex\Magpie\default_co.paa",
					"\rtgVehicles\tex\Magpie\uh60m_dust_filter_co.paa"
				};
				factions[]=
				{
					Raider_Tactical_F
				};
			};
		};
		textureList[]=
		{
			"raider", 1
		};

		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_a2port_air\data\loadouts\RHS_UH60_EWS_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]		= {"RHS_HP_HELLFIRE_RACK","RHS_HP_FFAR_ARMY","RHS_HP_Fuel_ARMY","RHS_HP_ATAS", "20MM_TWIN_CANNON"};
						priority			= 1;
						attachment			= "20MM_TWIN_CANNON";
						maxweight			= 1200;
						UIposition[]		= {0.555,0.37};
						bay					= -1;
						hitpoint 			= HitPylon1;
					};
					class pylon2 : pylon1
					{
						UIposition[]		= {0.11,0.37};
						attachment			= "20MM_TWIN_CANNON";
						mirroredMissilePos	= 1;
						hitpoint 			= HitPylon2;
					};
					class cmDispenser
					{
						hardpoints[]	= {"RHSUSF_cm_M130","RHSUSF_cm_M130_x2"};
						priority		= 1;
						attachment		= "rhsusf_M130_CMFlare_Chaff_Magazine_x2";
						maxweight		= 800;
						UIposition[]	= {0.33,0.0};
					};
				};
			};
		};
	};

	class RHS_UH60M;
	class rtg_UH60M_Magpie : RHS_UH60M
	{
		displayName = "Magpie (2/14)";
		editorSubcategory = "RTGHelicopters";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";
		maximumLoad = 20000;
		ace_cargo_space = 16;
		helmetMountedDisplay=1;
		RTG_Vehicle_Gear;
		
		hiddenSelectionsTextures[]=
		{
			"\rtgVehicles\tex\Magpie\uh60m_fuselage_co.paa",
			"\rtgVehicles\tex\Magpie\uh60m_engine_co.paa",
			"\rtgVehicles\tex\Magpie\default_co.paa",
			"\rtgVehicles\tex\Magpie\uh60m_dust_filter_co.paa"
		};
		class textureSources
		{
			class raider
			{
				displayName="Raider";
				author = "Shrike";
				textures[]=
				{
					"\rtgVehicles\tex\Magpie\uh60m_fuselage_co.paa",
					"\rtgVehicles\tex\Magpie\uh60m_engine_co.paa",
					"\rtgVehicles\tex\Magpie\default_co.paa",
					"\rtgVehicles\tex\Magpie\uh60m_dust_filter_co.paa"
				};
				factions[]=
				{
					Raider_Tactical_F
				};
			};
		};
		textureList[]=
		{
			"raider", 1
		};
	};

	class RHS_AH1Z;
	class ViewPilot;
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

		RTG_Vehicle_Gear;
		lockDetectionSystem = "2 + 8";
		incomingMissileDetectionSystem = "2 + 16";
		laserScanner = 1;
		showAllTargets = 4;

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
	};

	class O_Heli_Transport_04_F;
	class rtg_heavyLift_Cargo: O_Heli_Transport_04_F
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
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa"};
		class TextureSources
		{
			class Black
			{
				displayName = "Raider";
				author = "Shrike";
				textures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa"};
				factions[] = {"Raider_Tactical_F"};
			};
		};
		RTG_Vehicle_Gear;
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
	class O_Heli_Transport_04_covered_F;
	class rtg_heavyLift_Transport: O_Heli_Transport_04_covered_F
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
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa"};
		class TextureSources
		{
			class Black
			{
				displayName = "Raider";
				author = "Shrike";
				textures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa"};
				factions[] = {"Raider_Tactical_F"};
			};
		};
		textureList[] = {"Opfor",1};
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
		RTG_Vehicle_Gear;
		RTG_Vehicle_Radios;
	};
	class BAE_FIC;
	class raider_heavy_attack_boat : BAE_FIC
	{
		displayName = "Heavy Attack Boat [4/8]";
		editorSubcategory = "RTGBoats";
		author = "Shrike";
		scope = 2;
		side = 1;
		faction = "Raider_Tactical_F";
		ace_cargo_space = 16;
		ace_vehicles_engineStartDelay = 3;
		acre_hasInfantryPhone = 0;
		canPush = 1;
		RTG_Vehicle_Gear;
	}
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
		maxSpeed = 110;
		maximumLoad = 20000;
		ace_cargo_space = 16;
		ace_vehicles_engineStartDelay = 3;
		acre_hasInfantryPhone = 0;
		ace_refuel_fuelCargo = 80;
		canPush = 1;
		RTG_Vehicle_Gear;
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
		ace_cargo_space = 16;
		class ace_cargo
		{
			class Cargo
			{
				class ACE_Wheel
				{
					type = "ACE_Wheel"; 
					amount = 16;
				};
			};
		};
	};
};
