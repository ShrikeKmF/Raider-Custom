class RHS_UH60M;
class rtg_Magpie : RHS_UH60M
{
	displayName = "Magpie (2/14)";
	editorSubcategory = "RTGHelicopters";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	HELICOPTER_FUEL_CONSUMPTION(2500)
	maximumLoad = 20000;
	ace_cargo_space = 16;
	helmetMountedDisplay=1;
	RTG_Vehicle_Gear
	
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