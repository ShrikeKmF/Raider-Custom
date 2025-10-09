class rhsusf_mrzr4_d;
class rtg_bugy: rhsusf_mrzr4_d
{
	displayNameShort = "BUGY [1/5]";
	displayName = "BUGY [1/5]";
	editorSubcategory = "RTG_LIGHT_ASSETS";
	author = "Shrike";
	scope = 2;
	side = WEST;
	faction = "Raider_Tactical_F";
	ace_cargo_space = 4;
	RTG_Vehicle_Gear
	maxSpeed = 70; 
	mineDetectorRange = 50;
	canAccessMineDetector = 1;
};

class rtg_bugy_g : rtg_bugy
{
	side = RESISTANCE;
	faction = "Raider_Tactical_G_F";
}