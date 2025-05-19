class rhsusf_m998_d_s_2dr_halftop;
class rtg_ltv: rhsusf_m998_d_s_2dr_halftop
{
	displayName = "Light Transport Vehicle (LTV) [1/7]";
	editorSubcategory = "RTGCars";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	fuelConsumptionRate = 0.03;
	fuelCapacity = 84;
	ace_cargo_space = 12;
	ace_vehicles_engineStartDelay = 3;
	acre_hasInfantryPhone = 0;
	canFloat = 0;
	weapons[] = {"SmokeLauncher","TruckHorn"};
	magazines[] = {"SmokeLauncherMag"};

	RTG_Vehicle_Gear

	// Movement Config
	simulation = "carx";
	maxSpeed = 90; 

	enginePower = 550;
	peakTorque = 750;

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

class rhsusf_m1025_d_m2;
class rtg_lsv: rhsusf_m1025_d_m2
{
	displayName = "Light Strike Vehicle (LSV) [2/3]";
	editorSubcategory = "RTGCars";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	fuelConsumptionRate = 0.03;
	fuelCapacity = 84;
	ace_cargo_space = 8;
	ace_vehicles_engineStartDelay = 3;
	acre_hasInfantryPhone = 0;
	canFloat = 0;
	weapons[] = {"SmokeLauncher","TruckHorn"};
	magazines[] = {"SmokeLauncherMag"};

	RTG_Vehicle_Gear

	// Movement Config
	simulation = "carx";
	maxSpeed = 90; 

	enginePower = 550;
	peakTorque = 750;

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
}