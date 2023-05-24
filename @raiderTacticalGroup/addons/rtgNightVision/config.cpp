#define _ARMA_

class CfgPatches
{
	class rtgNightVision
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"cba_main","ace_main","ace_common","ace_interaction"};
		version = "0.1";
		author = "Shrike";
	};
};
class CfgFunctions
{
	class rtg
	{
		class rtgFunctions
		{
			class WP
			{
				file = "rtgNightVision\functions\WP.sqf";
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class My_pre_init_event2
	{
		init = "call compile preprocessFileLineNumbers 'rtgNightVision\XEH_preInit.sqf'";
	};
};
class Extended_Init_EventHandlers
{
	class CAManBase
	{
		class WP_init
		{
			init = "[] spawn rtg_fnc_WP";
		};
	};
};