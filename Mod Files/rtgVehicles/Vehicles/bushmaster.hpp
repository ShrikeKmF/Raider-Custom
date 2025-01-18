class bma3_bushmaster_unarmed_F;
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
	maxSpeed = 125;
	enginePower = 650;
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
			maxBrakeTorque = 8500;
			longitudinalStiffnessPerUnitGravity = 3500;
			latStiffX = 200.8;
			latStiffY = 180.0;
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
			maxHandBrakeTorque = 12000;
			latStiffX = 140.8;
			latStiffY = 110.0;
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
			maxHandBrakeTorque = 12000;
			latStiffX = 140.8;
			latStiffY = 110.0;
		};
	};

	weapons[] = {"SmokeLauncher","TruckHorn"};
	magazines[] = {"SmokeLauncherMag"};
	smokeLauncherGrenadeCount = 4;
	smokeLauncherVelocity = 14;
	smokeLauncherOnTurret = 0;
	smokeLauncherAngle = 160;
	ace_refuel_fuelCargo = 80;
	textureList[] = {"rtg_Base", 1,  "rtg_hitman",1, "rtg_sabre",1, "rtg_ares",1, "rtg_demon", 1};
	class textureSources
	{
		class rtg_Base
		{
			displayName = "Base";
			author = "Fish";
			textures[] = {"rtgVehicles\tex\bushmaster\bm2.paa","rtgVehicles\tex\bushmaster\rtg_co.paa","bma3\bma3_bushmaster_data\camo3\camo3_co.paa",""};
			factions[] = {"Raider_Tactical_F"};
		};
		class rtg_hitman
		{
			displayName = "Hitman";
			author = "Fish";
			textures[] = {"rtgVehicles\tex\bushmaster\bm2_H.paa","rtgVehicles\tex\bushmaster\rtg_co.paa","bma3\bma3_bushmaster_data\camo3\camo3_co.paa",""};
			factions[] = {"Raider_Tactical_F"};
		};
		class rtg_sabre
		{
			displayName = "Sabre";
			author = "Fish";
			textures[] = {"rtgVehicles\tex\bushmaster\bm2_S.paa","rtgVehicles\tex\bushmaster\rtg_co.paa","bma3\bma3_bushmaster_data\camo3\camo3_co.paa",""};
			factions[] = {"Raider_Tactical_F"};
		};
		class rtg_ares
		{
			displayName = "Ares";
			author = "Fish";
			textures[] = {"rtgVehicles\tex\bushmaster\bm2_A.paa","rtgVehicles\tex\bushmaster\rtg_co.paa","bma3\bma3_bushmaster_data\camo3\camo3_co.paa",""};
			factions[] = {"Raider_Tactical_F"};
		};
		class rtg_demon
		{
			displayName = "Demon";
			author = "Fish";
			textures[] = {"rtgVehicles\tex\bushmaster\bm2_C.paa","rtgVehicles\tex\bushmaster\rtg_co.paa","bma3\bma3_bushmaster_data\camo3\camo3_co.paa",""};
			factions[] = {"Raider_Tactical_F"};
		};
	};
	RTG_Vehicle_Gear;
	RTG_Vehicle_Radios;
};