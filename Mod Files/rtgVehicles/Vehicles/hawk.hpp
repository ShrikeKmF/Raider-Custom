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
