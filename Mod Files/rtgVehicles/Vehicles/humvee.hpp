class rhsusf_m1025_d_m2;	
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

	RTG_Vehicle_Gear
	RTG_Vehicle_Radios

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

	RTG_Vehicle_Gear
	RTG_Vehicle_Radios

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
		class rtg_Hitman
		{
			displayName = "Hitman";
			author = "Fish & Shrike";
			textures[] = {"rtgVehicles\tex\LSV\a_exterior_black.paa","rtgVehicles\tex\LSV\b_interior_black.paa","rtgVehicles\tex\LSV\c_a2_black.paa","rtgVehicles\tex\LSV\d_wheels_black.paa","rtgVehicles\tex\LSV\e_mainbody_black.paa","rtgVehicles\tex\LSV\f_gratting_black.paa","rtgVehicles\tex\LSV\g_camo1_tile_black.paa","rtgVehicles\tex\LSV\h_camo2_m1025_black_with_logosHitman.paa","rtgVehicles\tex\LSV\i_unitdecals1.paa","rtgVehicles\tex\LSV\j_unitdecals2.paa"};
		};
		class rtg_Ares
		{
			displayName = "Ares";
			author = "Fish & Shrike";
			textures[] = {"rtgVehicles\tex\LSV\a_exterior_black.paa","rtgVehicles\tex\LSV\b_interior_black.paa","rtgVehicles\tex\LSV\c_a2_black.paa","rtgVehicles\tex\LSV\d_wheels_black.paa","rtgVehicles\tex\LSV\e_mainbody_black.paa","rtgVehicles\tex\LSV\f_gratting_black.paa","rtgVehicles\tex\LSV\g_camo1_tile_black.paa","rtgVehicles\tex\LSV\h_camo2_m1025_black_with_logosAres.paa","rtgVehicles\tex\LSV\i_unitdecals1.paa","rtgVehicles\tex\LSV\j_unitdecals2.paa"};
		};
		class rtg_Demon
		{
			displayName = "Demon";
			author = "Fish & Shrike";
			textures[] = {"rtgVehicles\tex\LSV\a_exterior_black.paa","rtgVehicles\tex\LSV\b_interior_black.paa","rtgVehicles\tex\LSV\c_a2_black.paa","rtgVehicles\tex\LSV\d_wheels_black.paa","rtgVehicles\tex\LSV\e_mainbody_black.paa","rtgVehicles\tex\LSV\f_gratting_black.paa","rtgVehicles\tex\LSV\g_camo1_tile_black.paa","rtgVehicles\tex\LSV\h_camo2_m1025_black_with_logosDemon.paa","rtgVehicles\tex\LSV\i_unitdecals1.paa","rtgVehicles\tex\LSV\j_unitdecals2.paa"};
		};
		class rtg_Sabre
		{
			displayName = "Sabre";
			author = "Fish & Shrike";
			textures[] = {"rtgVehicles\tex\LSV\a_exterior_black.paa","rtgVehicles\tex\LSV\b_interior_black.paa","rtgVehicles\tex\LSV\c_a2_black.paa","rtgVehicles\tex\LSV\d_wheels_black.paa","rtgVehicles\tex\LSV\e_mainbody_black.paa","rtgVehicles\tex\LSV\f_gratting_black.paa","rtgVehicles\tex\LSV\g_camo1_tile_black.paa","rtgVehicles\tex\LSV\h_camo2_m1025_black_with_logosSabre.paa","rtgVehicles\tex\LSV\i_unitdecals1.paa","rtgVehicles\tex\LSV\j_unitdecals2.paa"};
		};
		class rtg_Firebrand
		{
			displayName = "Firebrand";
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
			maxVerticalRotSpeed  = 0.68;
			maxHorizontalRotSpeed  = 1.921282;
		};
		class CargoTurret_01: CargoTurret_01{};
		class CargoTurret_02: CargoTurret_02{};
		class CargoTurret_03: CargoTurret_03{};
	};
};