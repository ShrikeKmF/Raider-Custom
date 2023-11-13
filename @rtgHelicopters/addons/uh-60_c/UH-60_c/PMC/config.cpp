////////////////////////////////////////////////////////////////////
//DeRap: uh-60_c\PMC\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 08 18:52:16 2023 : 'file' last modified on Thu Jan 01 13:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Ej_Units_PMC
	{
		units[] = {"RWG_Helipilot_F","BRPMC_Pilot","RWG_Repair_F"};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};
class CfgVehicles
{
	class B_Gen_soldier_F;
	class BRPMC_Pilot: B_Gen_soldier_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";
		author = "EricJ";
		_generalMacro = "BRPMC_Soldier";
		scope = 2;
		side = 0;
		faction = "BRPMC";
		role = "Rifleman";
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName = "Black River PMC Heli Pilot";
		linkedItems[] = {"V_TacVest_blk_POLICE","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_TacVest_blk_POLICE","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"SMG_05_F","Throw","Put"};
		respawnWeapons[] = {"SMG_05_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","SmokeShell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","SmokeShell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 160000;
		camouflage = 2;
		modelSides[] = {3,1};
		uniformClass = "U_B_GEN_Commander_F";
		backpack = "B_ViperLightHarness_blk_F";
	};
	class I_helipilot_F;
	class RWG_Helipilot_F: I_helipilot_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";
		author = "EricJ";
		faction = "RWG";
		_generalMacro = "RWG_Helipilot_F";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		modelSides[] = {3,1};
		uniformClass = "U_B_RWGPilotCoveralls";
		displayName = "Raven Helicopter Pilot";
		linkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		weapons[] = {"SMG_01_Holo_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		cost = 160000;
		camouflage = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\uh-60\Data\Uniforms\coveralls_sand_rwg_co.paa"};
		role = "Crewman";
	};
	class I_Soldier_repair_F;
	class RWG_repair_F: I_Soldier_repair_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";
		author = "EricJ";
		faction = "RWG";
		_generalMacro = "RWG_Helipilot_F";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		modelSides[] = {3,1};
		uniformClass = "U_B_RWGPilotCoveralls";
		displayName = "Raven Repair Tech";
		linkedItems[] = {"V_TacVest_blk","H_HelmetSpecB_paint2","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetSpecB_paint2","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		weapons[] = {"SMG_01_Holo_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		cost = 160000;
		camouflage = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\uh-60\Data\Uniforms\coveralls_sand_rwg_co.paa"};
		role = "Crewman";
	};
	class C_Offroad_01_repair_F;
	class Raven_Offroad_01_F: C_Offroad_01_repair_F
	{
		dlc = "u100";
		scope = 2;
		side = 2;
		Displayname = "Raven PMC Repair Truck";
		faction = "RWG";
		forceInGarage = 1;
		crew = "RWG_Repair_F";
		author = "EricJ";
		class textureSources
		{
			class Raven
			{
				displayName = "Raven";
				author = "EricJ";
				textures[] = {"\UH-60\data\offroad_Raven_co.paa","\UH-60\data\offroad_Raven_co.paa"};
				factions[] = {"RWG"};
			};
		};
		textureList[] = {"Raven",1};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
	};
};
class cfgMods
{
	author = "EricJ";
	timepacked = "1699000307";
};
