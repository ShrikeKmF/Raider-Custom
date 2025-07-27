class ptv_u_g3cw_serpwdl_brwgry;
class rtg_samUniform : ptv_u_g3cw_serpwdl_brwgry
{
  	hiddenSelections[] = {"Camo1","Camo2"};
  	hiddenSelectionsTextures[] = {"\rtgEquipment\tex\ptv_jacket_gry_co.paa","\ptv_characters\uniforms\data\G3_PANT_SERP_CO.paa"};
  	scope = 2;
	displayName = "[RTG] Sam (PTV)";
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