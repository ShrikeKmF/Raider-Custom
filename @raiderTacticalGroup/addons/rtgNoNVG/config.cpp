#define _ARMA_

class CfgPatches
{
	class NVGJammer
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Modules_F","zen_context_menu","zen_attributes","zen_custom_modules","cba_main"};
		author = "Shrike";
		version = "1.1.1";
		versionStr = "1.1.1";
		versionAr[] = {1,1,1};
	};
};
class CfgFunctions
{
	class NVGJammer
	{
		class BlockNVG
		{
			file = "\NVG_Jammer\functions";
			class utility_BlockNVGsInit
			{
				postInit = 1;
			};
			class utility_AddRemoteEventHandler{};
			class utility_RemoveRemoteEventHandler{};
		};
	};
};
class cfgMods
{
	author = "Shrike";
};
