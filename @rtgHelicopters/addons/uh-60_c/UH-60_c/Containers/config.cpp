////////////////////////////////////////////////////////////////////
//DeRap: uh-60_c\Containers\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 08 18:52:16 2023 : 'file' last modified on Thu Jan 01 13:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Ej_containers
	{
		requiredAddons[] = {"A3_Supplies_F_Heli_Slingload","A3_Data_F","A3_Weapons_F","A3_Weapons_F_Ammoboxes","A3_UI_F","A3_Characters_F_Common","A3_Characters_F_Proxies","A3_Supplies_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"ej_CheroContainer","ej_CheroContainerFuel","ej_CheroContainerMedevac"};
		weapons[] = {};
	};
};
class CfgVehicleClasses
{
	class Ericj_container
	{
		displayName = "EricJ Containers (Cherokee)";
		mapbuilder_filter = "EricJ containers";
	};
};
class CfgVehicles
{
	class ReammoBox;
	class ThingX;
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class House_Small_F;
	class ReammoBox_F;
	class ej_CheroContainer: ReammoBox_F
	{
		author = "EricJ";
		_generalMacro = "ej_CheroContainer";
		scope = 2;
		class SimpleObject
		{
			animate[] = {{"Ammo_hide",0},{"AmmoOrd_hide",1},{"Grenades_hide",1},{"Support_hide",1}};
			hide[] = {};
			verticalOffset = 0;
		};
		scopeCurator = 2;
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_Storage";
		vehicleClass = "EricJ_Container";
		maximumLoad = 2000;
		transportMaxWeapons = 100;
		transportMaxMagazines = 4000;
		transportMaxBackpacks = 100;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		icon = "iconObject_circle";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\uh-60\data\Container_MilCommon_co.paa"};
		hiddenSelectionsMaterials[] = {"\uh-60\data\Mat\Container.rvmat"};
		displayName = "Cherokee Supply Container";
		model = "\UH-60\Misc\Containers\Container_Base.p3d";
		DLC = "uh-60";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 100;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 5;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 5;
			};
		};
	};
	class ej_CheroContainerFuel: ej_CheroContainer
	{
		author = "EricJ";
		_generalMacro = "ej_CheroContainerFuel";
		scope = 2;
		class SimpleObject
		{
			animate[] = {{"Ammo_hide",0},{"AmmoOrd_hide",1},{"Grenades_hide",1},{"Support_hide",1}};
			hide[] = {};
			verticalOffset = 0;
		};
		scopeCurator = 2;
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_Storage";
		maximumLoad = 2000;
		transportMaxWeapons = 0;
		transportMaxMagazines = 0;
		transportMaxBackpacks = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 1000;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\uh-60\data\Container_Fuel_co.paa"};
		hiddenSelectionsMaterials[] = {"\uh-60\data\Mat\Container.rvmat"};
		displayName = "Cherokee Fuel Container";
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 10;
			};
		};
	};
	class ej_CheroContainerMedevac: ej_CheroContainer
	{
		author = "EricJ";
		_generalMacro = "ej_CheroContainerMedevac";
		scope = 2;
		scopeCurator = 2;
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_Storage";
		maximumLoad = 2000;
		transportMaxWeapons = 0;
		transportMaxMagazines = 0;
		transportMaxBackpacks = 0;
		supplyRadius = 10;
		attendant = 1;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\uh-60\data\Container_Medic_co.paa"};
		hiddenSelectionsMaterials[] = {"\uh-60\data\Mat\Container.rvmat"};
		displayName = "Cherokee Medic Container";
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class Medical_Menu
				{
					displayName = "CSTRING(OpenMenu)";
					runOnHover = 0;
					exceptions[] = {"isNotInside"};
					condition = "QUOTE([ARR_2(ACE_player,_target)] call FUNC(canOpenMenu))";
					statement = "QUOTE([_target] call DFUNC(openMenu))";
					icon = "PATHTOEF(medical,UI\icons\medical_cross.paa)";
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 200;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 20;
			};
		};
	};
	class ej_CheroContainerBlue: ej_CheroContainer
	{
		author = "EricJ";
		_generalMacro = "ej_CheroContainerBlue";
		scope = 2;
		class SimpleObject
		{
			animate[] = {{"Ammo_hide",0},{"AmmoOrd_hide",1},{"Grenades_hide",1},{"Support_hide",1}};
			hide[] = {};
			verticalOffset = 0;
		};
		scopeCurator = 2;
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_Storage";
		maximumLoad = 2000;
		transportMaxWeapons = 0;
		transportMaxMagazines = 0;
		transportMaxBackpacks = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\uh-60\data\Container_Blue_co.paa"};
		hiddenSelectionsMaterials[] = {"\uh-60\data\Mat\Container.rvmat"};
		displayName = "Cherokee Container (Blue)";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 100;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 5;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 5;
			};
		};
	};
	class ej_CheroContainerGreen: ej_CheroContainerBlue
	{
		author = "EricJ";
		_generalMacro = "ej_CheroContainerBlue";
		scope = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\uh-60\data\Container_Green_co.paa"};
		hiddenSelectionsMaterials[] = {"\uh-60\data\Mat\Container.rvmat"};
		displayName = "Cherokee Container (Green)";
	};
	class ej_CheroContainerTan: ej_CheroContainerBlue
	{
		author = "EricJ";
		_generalMacro = "ej_CheroContainerBlue";
		scope = 2;
		scopeCurator = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\uh-60\data\Container_Tan_co.paa"};
		hiddenSelectionsMaterials[] = {"\uh-60\data\Mat\Container.rvmat"};
		displayName = "Cherokee Container (Tan)";
	};
	class B_Slingload_01_Repair_F;
	class ej_CheroContainerRepair: B_Slingload_01_Repair_F
	{
		author = "EricJ";
		_generalMacro = "ej_CheroContainerRepair";
		scope = 2;
		scopeCurator = 2;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		hiddenSelections[] = {"camo"};
		model = "\UH-60\Misc\Containers\Container_Base.p3d";
		hiddenSelectionsTextures[] = {"\uh-60\data\Container_repair_co.paa"};
		hiddenSelectionsMaterials[] = {"\uh-60\data\Mat\Container.rvmat"};
		displayName = "Cherokee Repair Container";
	};
};
class cfgMods
{
	author = "EricJ";
	timepacked = "1699000307";
};
