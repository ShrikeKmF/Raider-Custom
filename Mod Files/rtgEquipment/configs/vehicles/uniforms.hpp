// Kim
class VSM_Scorpion_Crye_SS_grey_shirt_Uniform;
class rtg_kimUniform_soldier: VSM_Scorpion_Crye_SS_grey_shirt_Uniform
{
	scope = 1;
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
	scope = 1;
	displayName = "[RTG] Sam (Crye G3/Jacket)";
	identityTypes[] = {"Head_NATO","G_NATO_default"};
	genericNames = "NATOMen";
	faction = "NATO";
	hiddenSelections[] = {"Camo1","Camo2"};
  	hiddenSelectionsTextures[] = {"\rtgEquipment\tex\ptv_jacket_gry_co.paa","\ptv_characters\uniforms\data\G3_PANT_SERP_CO.paa"};
};

class VSM_Multicam_Crye_Uniform;
class rtg_Crye_G3_Soldier_AMCU : VSM_Multicam_Crye_Uniform
{
	_generalMacro = "B_soldier_F";
	scope = 1;
    uniformClass = "rtg_Crye_G3_AMCU";
    hiddenSelections[] = {"Camo","Insignia"};
    displayName = "[VSM] AMCU (Crye)";
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\amcu\AMCU G3 UNIFORM.paa"};
};

class rtg_Crye_G3_Soldier_Broadsword : VSM_Multicam_Crye_Uniform
{
	_generalMacro = "B_soldier_F";
	scope = 1;
    uniformClass = "rtg_Crye_G3_Broadsword";
    hiddenSelections[] = {"Camo","Insignia"};
    displayName = "[VSM] Broadsword (Crye)";
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\Broadsword\Broadsword_G3_Uniform.paa"};
};

class VSM_Scorpion_Crye_SS_Uniform;
class rtg_Crye_G3_Soldier_AMCU_R : VSM_Scorpion_Crye_SS_Uniform
{
	_generalMacro = "B_soldier_F";
	scope = 1;
    uniformClass = "rtg_Crye_G3_AMCU_R";
    hiddenSelections[] = {"Camo","Insignia"};
    displayName = "[VSM] AMCU (Crye/Rolled)";
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\amcu\AMCU G3 UNIFORM.paa"};
};

class rtg_Crye_G3_Soldier_Broadsword_R : VSM_Scorpion_Crye_SS_Uniform
{
	_generalMacro = "B_soldier_F";
	scope = 1;
    uniformClass = "rtg_Crye_G3_Broadsword_R";
    hiddenSelections[] = {"Camo","Insignia"};
    displayName = "[VSM] Broadsword (Crye/Rolled)";
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\Broadsword\Broadsword_G3_Uniform.paa"};
};


