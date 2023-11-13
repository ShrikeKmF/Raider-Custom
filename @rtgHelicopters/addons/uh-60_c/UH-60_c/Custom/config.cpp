////////////////////////////////////////////////////////////////////
//DeRap: uh-60_c\Custom\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 08 18:52:16 2023 : 'file' last modified on Thu Jan 01 13:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Ej_Units
	{
		units[] = {"B_T_LSV_01_repair_F","ej_speedball","ej_skram","ej_skram_SOAR","160th_SOAR_Pilot","RWG_Helipilot_F","BRPMC_Pilot"};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};
class CfgWeapons
{
	class SMG_05_F;
	class SMG_05_F_Mk17B: SMG_05_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight_smg_blk_F";
			};
		};
	};
	class ej_hk41610_160th;
	class ej_hk41610_ERCO_IR: ej_hk41610_160th
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "asdg_OpticRail1913_IAR";
				item = "optic_ERCO_blk_F";
			};
			class LinkedItemsAcc
			{
				slot = "asdg_FrontSideRail_IAR";
				item = "acc_pointer_IR";
			};
		};
	};
};
class CfgVehicles
{
	class B_Kitbag_mcamo;
	class ej_skram: B_Kitbag_mcamo
	{
		dlc = "uh60";
		scope = 2;
		displayname = "SKRAM Bag";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\uh-60\data\uniforms\backpack_fast_mcamej_co.paa"};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				count = 6;
				magazine = "30Rnd_45ACP_Mag_SMG_01";
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 2;
			};
		};
	};
	class I_Assault_Diver;
	class ej_survivalbag: I_Assault_Diver
	{
		dlc = "uh60";
		scope = 2;
		displayname = "Survival Bag";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 2;
			};
		};
	};
	class B_Carryall_mcamo;
	class ej_Speedball: B_Carryall_mcamo
	{
		dlc = "uh60";
		scope = 2;
		displayname = "Speedball";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 20;
			};
			class _xx_Handgrenade
			{
				magazine = "Handgrenade";
				count = 20;
			};
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 2;
			};
		};
	};
};
class cfgMods
{
	author = "EricJ";
	timepacked = "1699000307";
};
