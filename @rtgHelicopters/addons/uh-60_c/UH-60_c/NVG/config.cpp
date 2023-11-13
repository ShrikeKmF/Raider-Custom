////////////////////////////////////////////////////////////////////
//DeRap: uh-60_c\NVG\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 08 18:52:16 2023 : 'file' last modified on Thu Jan 01 13:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class uh60_gear
	{
		units[] = {};
		weapons[] = {"ej_PVS15","ej_PVS15D"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","A3_Structures_F"};
	};
};
class cfgWeapons
{
	class NVGoggles;
	class ej_PVS15D: NVGoggles
	{
		scope = 2;
		displayName = "AN/PVS-15 Desert";
		model = "\uh-60_c\NVG\SOCOM_PVS15_F_ON_D";
		modelOptics = "\uh-60_c\NVG\S_PVS15_Optic2";
		picture = "\uh-60\Data\UI\SOCOM_PVS15_DES_UI_ca.paa";
		descriptionUse = "Night Vision Goggles";
		class Library
		{
			libTextDesc = "PVS-15";
		};
		descriptionShort = "PVS15 SOCOM Desert Night Vision Goggles";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "uh-60_c\NVG\SOCOM_PVS15_F_ON_D.p3d";
			modelOff = "uh-60_c\NVG\SOCOM_PVS15_F_OFF_D.p3d";
			mass = 12;
		};
	};
	class ej_PVS15: ej_PVS15D
	{
		scope = 2;
		displayName = "AN/PVS-15";
		model = "\uh-60_c\NVG\SOCOM_PVS15_F_ON";
		picture = "\uh-60\Data\UI\SOCOM_PVS15_UI_ca.paa";
		descriptionUse = "Night Vision Goggles";
		class Library
		{
			libTextDesc = "PVS-15";
		};
		descriptionShort = "PVS15 SOCOM Night Vision Goggles";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "uh-60_c\NVG\SOCOM_PVS15_F_ON.p3d";
			modelOff = "uh-60_c\NVG\SOCOM_PVS15_F_OFF.p3d";
			mass = 12;
		};
	};
};
class cfgMods
{
	author = "EricJ";
	timepacked = "1699000307";
};
