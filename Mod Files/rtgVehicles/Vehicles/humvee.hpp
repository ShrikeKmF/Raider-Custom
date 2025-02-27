class rhsusf_m998_d_s_2dr_halftop;
class rtg_lv_pickup: rhsusf_m998_d_s_2dr_halftop
{
	displayName = "LV-Pickup [1/7]";
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

	// Movement Config
	simulation = "carx";
	maxSpeed = 130; 

	differentialType = "all_limited";
	frontRearSplit = 0.55;
	frontBias = 2.5;
	rearBias = 2.0;
	centreBias = 1.6;

	enginePower = 750;
	peakTorque = 950;
	
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
			mass = 90; // Reduced for better handling
			MOI = 8.9; // Reduced for quicker response
			maxBrakeTorque = 9800;
			maxHandBrakeTorque = 0;
			longitudinalStiffnessPerUnitGravity = 3200;
			latStiffX = 75.0;
			latStiffY = 110.0;
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