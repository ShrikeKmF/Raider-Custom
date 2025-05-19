class RHS_Mi24P_vdv;
class rtg_Hawk : RHS_Mi24P_vdv
{
	displayName = "Hawk (2/8)";
	editorSubcategory = "RTGHelicopters";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	maximumLoad = 20000;
	ace_cargo_space = 16;
	helmetMountedDisplay=1;
	HELICOPTER_FUEL_CONSUMPTION(2500)
	RTG_Vehicle_Gear

	hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"exhaust",
			"tail_decals",
			"n1",
			"n2",
			"moving_map"
		};
	hiddenSelectionsTextures[]=
	{
		"rtgVehicles\tex\hawk\mi24p_001_co.paa",
		"rtgVehicles\tex\hawk\mi24p_002_co.paa",
		"rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa",
	};
	class textureSources
	{
		class rtg_base
		{
			displayName="RTG Base";
			author = "Shrike";
			textures[]=
			{
				"rtgVehicles\tex\hawk\mi24p_001_co.paa",
				"rtgVehicles\tex\hawk\mi24p_002_co.paa",
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa",
			};
		};
	};
}