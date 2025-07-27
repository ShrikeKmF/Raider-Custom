// Kim
class VSM_Scorpion_Crye_SS_grey_shirt_Uniform;
class rtg_kimUniform_soldier: VSM_Scorpion_Crye_SS_grey_shirt_Uniform
{
	scope = 2;
	displayName = "[RTG] Kim (Crye Tan Shirt)";
	uniformClass = "rtg_kimUniform";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] ={"\rtgEquipment\tex\kimUniform.paa"};
	identityTypes[] = {"Head_NATO","G_NATO_default"};
	genericNames = "NATOMen";
	faction = "NATO";
};

class ptv_s_g3cw_serpwdl_brwgry;
class rtg_samUniform_soldier: ptv_s_g3cw_serpwdl_brwgry
{
	author = "Shrike";
	uniformClass = "rtg_samUniform";
	scope = 2;
	displayName = "[RTG] Sam (PTV Jacket)";
	identityTypes[] = {"Head_NATO","G_NATO_default"};
	genericNames = "NATOMen";
	faction = "NATO";
	hiddenSelections[] = {"Camo1","Camo2"};
  	hiddenSelectionsTextures[] = {"\rtgEquipment\tex\ptv_jacket_gry_co.paa","\ptv_characters\uniforms\data\G3_PANT_SERP_CO.paa"};
};

class VSM_Multicam_Crye_Uniform;
class amcu_uniform : VSM_Multicam_Crye_Uniform
{
	_generalMacro = "B_soldier_F";
	scope = 2;
    uniformClass = "amcu_uniform";
    hiddenSelections[] = {"Camo","Insignia"};
    displayName = "[VSM] AMCU (Crye)";
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\amcu_uniform.paa"};
};