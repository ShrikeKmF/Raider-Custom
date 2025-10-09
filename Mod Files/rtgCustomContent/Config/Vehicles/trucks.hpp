class rhsusf_M1084A1R_SOV_M2_D_fmtv_socom;
class rtg_htc_base : rhsusf_M1084A1R_SOV_M2_D_fmtv_socom
{
	editorSubcategory = "RTG_MEDIUM_ASSETS";
	displayName = "HTC [2/1]";
	author = "Shrike";
	scope = 0;
	side = WEST;
	faction = "Raider_Tactical_F";
	ace_cargo_space = 25;
	ace_vehicles_engineStartDelay = 3;
	acre_hasInfantryPhone = 0;
	canFloat = 0;
	RTG_Vehicle_Gear
	armor = 25;
	armorStructural = 2;
	armorFuel = 1.4;
	armorGlass = 4;
	armorLights = 0.4;
	armorWheels = 0.05;
	armorHull = 1;
	armorEngine = 2;
	mineDetectorRange = 50;
	canAccessMineDetector = 1;
}
class rtg_htc_h : rtg_htc_base
{
	editorSubcategory = "RTG_HEAVY_ASSETS";
	author = "Shrike";
	scope = 2;
};

class rtg_htc_m : rtg_htc_base
{
	editorSubcategory = "RTG_MEDIUM_ASSETS";
	author = "Shrike";
	scope = 2;
};

class rtg_htc_l : rtg_htc_base
{
	editorSubcategory = "RTG_LIGHT_ASSETS";
	author = "Shrike";
	scope = 2;
};


class rtg_htc_h_g : rtg_htc_h
{
	side = RESISTANCE;
	faction = "Raider_Tactical_G_F";
}
class rtg_htc_m_g : rtg_htc_m
{
	side = RESISTANCE;
	faction = "Raider_Tactical_G_F";
}
class rtg_htc_l_g : rtg_htc_l
{
	side = RESISTANCE;
	faction = "Raider_Tactical_G_F";
}