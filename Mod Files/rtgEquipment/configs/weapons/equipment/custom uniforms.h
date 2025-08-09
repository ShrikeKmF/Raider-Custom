class ptv_u_g3cw_serpwdl_brwgry;
class rtg_samUniform : ptv_u_g3cw_serpwdl_brwgry
{
  	hiddenSelections[] = {"Camo1","Camo2"};
  	hiddenSelectionsTextures[] = {"\rtgEquipment\tex\ptv_jacket_gry_co.paa","\ptv_characters\uniforms\data\G3_PANT_SERP_CO.paa"};
  	scope = 2;
	displayName = "[RTG] Sam (Crye G3/Jacket)";
	class ItemInfo : ItemInfo
	{
		uniformClass = "rtg_samUniform_soldier";
	};
	RTG_ACEAX_EMPTY
};


// Kim
class VSM_Scorpion_Crye_SS_grey_shirt_Camo;
class rtg_kimUniform : VSM_Scorpion_Crye_SS_grey_shirt_Camo
{
	
	scope = 2;
	displayName = "[RTG] Kim (Crye)";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] ={"\rtgEquipment\tex\kimUniform.paa"};
	class ItemInfo : ItemInfo
	{
		uniformClass = "rtg_kimUniform_soldier";
	};
	RTG_ACEAX_EMPTY
};

class VSM_OGA_Crye_Camo;
class rtg_Crye_G3_AMCU : VSM_OGA_Crye_Camo
{
	
	scope = 2;
	displayName = "[RTG] AMCU (Crye)";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\amcu\AMCU G3 UNIFORM.paa"};
	class ItemInfo : ItemInfo
	{
		uniformClass = "rtg_Crye_G3_Soldier_AMCU";
	};
	RTG_ACEAX_EMPTY
};

class VSM_OGA_Crye_SS_Camo;
class rtg_Crye_G3_AMCU_R : VSM_OGA_Crye_SS_Camo
{
	
	scope = 2;
	displayName = "[RTG] AMCU (Crye/Rolled)";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\amcu\AMCU G3 UNIFORM.paa"};
	class ItemInfo : ItemInfo
	{
		uniformClass = "rtg_Crye_G3_Soldier_AMCU_R";
	};
	RTG_ACEAX_EMPTY
};

class rtg_Crye_G3_Broadsword : VSM_OGA_Crye_Camo
{
	
	scope = 2;
	displayName = "[RTG] Broadsword (Crye)";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\Broadsword\Broadsword_G3_Uniform.paa"};
	class ItemInfo : ItemInfo
	{
		uniformClass = "rtg_Crye_G3_Soldier_Broadsword";
	};
	RTG_ACEAX_EMPTY
};

class rtg_Crye_G3_Broadsword_R : VSM_OGA_Crye_SS_Camo
{
	
	scope = 2;
	displayName = "[RTG] Broadsword (Crye/Rolled)";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\Broadsword\Broadsword_G3_Uniform.paa"};
	class ItemInfo : ItemInfo
	{
		uniformClass = "rtg_Crye_G3_Soldier_Broadsword_R";
	};
	RTG_ACEAX_EMPTY
};