class RHS_UH60M_ESSS2_D;
class rtg_UH60M_DAP_Magpie : RHS_UH60M_ESSS2_D
{
	displayName = "Magpie DAP (2/14)";
	editorSubcategory = "RTGHelicopters";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	maximumLoad = 20000;
	ace_cargo_space = 16;
	helmetMountedDisplay=1;
	RTG_Vehicle_Gear;
	weapons[] =
	{
		"rhsusf_weap_ANALQ144",
		"rhs_weap_mastersafe"
	};
	
	hiddenSelectionsTextures[]=
	{
		"\rtgVehicles\tex\Magpie\uh60m_fuselage_co.paa",
		"\rtgVehicles\tex\Magpie\uh60m_engine_co.paa",
		"\rtgVehicles\tex\Magpie\default_co.paa",
		"\rtgVehicles\tex\Magpie\uh60m_dust_filter_co.paa"
	};
	class textureSources
	{
		class raider
		{
			displayName="Raider";
			author = "Shrike";
			textures[]=
			{
				"\rtgVehicles\tex\Magpie\uh60m_fuselage_co.paa",
				"\rtgVehicles\tex\Magpie\uh60m_engine_co.paa",
				"\rtgVehicles\tex\Magpie\default_co.paa",
				"\rtgVehicles\tex\Magpie\uh60m_dust_filter_co.paa"
			};
			factions[]=
			{
				Raider_Tactical_F
			};
		};
	};
	textureList[]=
	{
		"raider", 1
	};

	class Components: Components
	{
		class TransportPylonsComponent
		{
			UIPicture = "\rhsusf\addons\rhsusf_a2port_air\data\loadouts\RHS_UH60_EWS_EDEN_CA.paa";
			class pylons
			{
				class pylon1
				{
					hardpoints[]		= {"RHS_HP_HELLFIRE_RACK","RHS_HP_FFAR_ARMY","RHS_HP_Fuel_ARMY","RHS_HP_ATAS"};
					priority			= 1;
					attachment			= "";
					maxweight			= 1200;
					UIposition[]		= {0.555,0.37};
					bay					= -1;
					hitpoint 			= HitPylon1;
				};
				class pylon2 : pylon1
				{
					UIposition[]		= {0.11,0.37};
					attachment			= "";
					mirroredMissilePos	= 1;
					hitpoint 			= HitPylon2;
				};
				class cmDispenser
				{
					hardpoints[]	= {"RHSUSF_cm_M130","RHSUSF_cm_M130_x2"};
					priority		= 1;
					attachment		= "rhsusf_M130_CMFlare_Chaff_Magazine_x2";
					maxweight		= 800;
					UIposition[]	= {0.33,0.0};
				};
			};
		};
	};
};

class RHS_UH60M;
class rtg_UH60M_Magpie : RHS_UH60M
{
	displayName = "Magpie (2/14)";
	editorSubcategory = "RTGHelicopters";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	maximumLoad = 20000;
	ace_cargo_space = 16;
	helmetMountedDisplay=1;
	RTG_Vehicle_Gear;
	
	hiddenSelectionsTextures[]=
	{
		"\rtgVehicles\tex\Magpie\uh60m_fuselage_co.paa",
		"\rtgVehicles\tex\Magpie\uh60m_engine_co.paa",
		"\rtgVehicles\tex\Magpie\default_co.paa",
		"\rtgVehicles\tex\Magpie\uh60m_dust_filter_co.paa"
	};
	class textureSources
	{
		class raider
		{
			displayName="Raider";
			author = "Shrike";
			textures[]=
			{
				"\rtgVehicles\tex\Magpie\uh60m_fuselage_co.paa",
				"\rtgVehicles\tex\Magpie\uh60m_engine_co.paa",
				"\rtgVehicles\tex\Magpie\default_co.paa",
				"\rtgVehicles\tex\Magpie\uh60m_dust_filter_co.paa"
			};
			factions[]=
			{
				Raider_Tactical_F
			};
		};
	};
	textureList[]=
	{
		"raider", 1
	};
};