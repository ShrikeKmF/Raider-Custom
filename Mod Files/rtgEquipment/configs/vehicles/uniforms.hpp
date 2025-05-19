// Kim
class B_Soldier_F;
class rtg_kimUniform_soldier: B_Soldier_F
{
	_generalMacro = "B_soldier_F";
	scope = 2;
	displayName = "[RTG] Kim (Crye Tan Shirt)";
	model = "a3\characters_f\blufor\b_soldier_01.p3d";
	uniformClass = "rtg_kimUniform";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] ={"\rtgEquipment\tex\kimUniform.paa"};
	hiddenSelectionsMaterials[] = {"VSM_ProjectHonor\Data\VSM_ARD.RVMAT"};
};

class ptv_u_g3cw_serpwdl_brwgry;
class rtg_samUniform_soldier: ptv_u_g3cw_serpwdl_brwgry
{
	author = "Shrike";
	uniformClass = "samUniform";
	scope = 2;
	displayName = "[RTG] Sam (PTV Jacket)";
};

class VSM_Multicam_Crye_Uniform;
class amcu_uniform : VSM_Multicam_Crye_Uniform
{
	_generalMacro = "B_soldier_F";
	RTG_WEAPON_BASE
    uniformClass = "amcu_uniform";
    hiddenSelections[] = {"Camo","Insignia"};
    displayName = "[VSM] AMCU (Crye)";
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\amcu_uniform.paa"};
};