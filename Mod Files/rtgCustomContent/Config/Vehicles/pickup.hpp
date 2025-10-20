class Arlit_TOYOTA_LC_HZJ79_M240;
class rtg_lpb: Arlit_TOYOTA_LC_HZJ79_M240
{
	displayNameShort = "LPB [2/3]";
	displayName = "LPB [2/3]";
	editorSubcategory = "RTG_MEDIUM_ASSETS";
	author = "Shrike";
	scope = 2;
	side = WEST;
	faction = "Raider_Tactical_F";
	mineDetectorRange = 50;
	canAccessMineDetector = 1;
	ace_cargo_space = 8;
	RTG_Vehicle_Gear

    animationList[] =
	{
	    "Rear_1", 0,
        "Rear_2", 1,
        "satcom_x", 1,
        "small_antennas", 1,
        "Commo", 1,
        "antenna", 0,
        "bumper", 0,
        "Flag", 1,
	    "Flag2", 1,
	    "Flag3", 1
    };
}

class rtg_lpb_g : rtg_lpb
{
	side = RESISTANCE;
	faction = "Raider_Tactical_G_F";

    animationList[] =
    {
        "Rear_1", 0,
        "Rear_2", 1,
        "satcom_x", 1,
        "small_antennas", 1,
        "Commo", 1,
        "antenna", 0,
        "bumper", 0,
        "Flag", 1,
        "Flag2", 1,
        "Flag3", 1
    };
}