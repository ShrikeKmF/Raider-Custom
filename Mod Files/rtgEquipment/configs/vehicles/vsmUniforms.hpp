// Kim
class B_Soldier_F;
class rtg_kimUniform_soldier: B_Soldier_F
{
	author = "Shrike";
	_generalMacro = "B_soldier_F";
	scope = 1;
	displayName = "[RTG] Kim (Crye Tan Shirt)";
	identityTypes[] = {"Head_NATO","G_NATO_default"};
	genericNames = "NATOMen";
	model = "a3\characters_f\blufor\b_soldier_01.p3d";
	uniformClass = "rtg_kimUniform";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] ={"\rtgEquipment\tex\kimUniform.paa"};
	hiddenSelectionsMaterials[] = {"VSM_ProjectHonor\Data\VSM_ARD.RVMAT"};
	weapons[] = {"Throw","Put"};
	respawnWeapons[] = {"Throw","Put"};
	magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};