class CfgPatches
{
	class rtgVehicles
	{
		name = "rtgVehicles";
		version = "2.0";
		author = "Shrike";
		url = "";
		requiredAddons[] = {"a3_characters_F","a3_characters_F_beta","A3_Characters_F_Common","a3_characters_f_beta","a3_characters_f_gamma","A3_Soft_F_epc","rhsusf_c_weapons"};
		units[] = {
			// Base
				"rtg_BasicSupply",
				"rtg_wheelsBox",
			// Light 
				"rtg_bugy",
				"rtg_sparrow",
				"rtg_Hawk",
				"rtg_Magpie",
				"raider_fast_rhib",
				"rtg_htc_l",
			// Medium  
				"rtg_sparrow_med",
				"rtg_rush_shorad",
				"rtg_rush_IS",
				"rtg_lpb",
				"rtg_htc_m",
			// Heavy
				"rtg_ravn",
				"rtg_amp_m2",
				"rtg_amp_m2jav",
				"rtg_amp_shorad",
				"rtg_htc_h",
		};
	};
};
class cfgFactionClasses
{
	class Raider_Tactical_F
	{
		displayName = "[RTG] Vehicles";
		priority = 0;
		side = 1;
		scope = 2;
	};
};
class cfgEditorCategories
{
	class Raider_Tactical
	{
		displayName = "[RTG] Objects";
		scope = 2;
	};
};
class cfgEditorSubcategories
{
	class RTG_LIGHT_ASSETS
	{
		displayName = "[A] Light";
		scope = 2;
	};
	class RTG_MEDIUM_ASSETS
	{
		displayName = "[B] Medium";
		scope = 2;
	};
	class RTG_HEAVY_ASSETS
	{
		displayName = "[C] Heavy";
		scope = 2;
	};
};

#include "defines.hpp"

class CfgVehicles
{
	class Components;
	class SensorTemplatePassiveRadar;
	class SensorTemplateAntiRadiation;
	class SensorTemplateActiveRadar;
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplateMan;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class SensorTemplateDataLink;
	class IRSensorComponent;
	class LaserSensorComponent;
	class VisualSensorComponent;
	class Turrets;
	class HitPoints;
	class hitwindshield_1;
	class hitwindshield_2;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	class CargoTurret;
	class CargoTurret_01;
	class CargoTurret_02;
	class CargoTurret_03;
	class MainTurret;
	class ViewOptics;
	class ViewGunner;
	class AnimationSources;
	class DefaultVehicleSystemsDisplayManagerLeft;
	class DefaultVehicleSystemsDisplayManagerRight;
	class Eventhandlers;

	// Include Vehicle Files
	#include "Vehicles/magpie.hpp"
	#include "Vehicles/hawk.hpp"
	#include "Vehicles/sparrow.hpp"
	#include "Vehicles/boats.hpp"
	#include "Vehicles/crates.hpp"
	#include "Vehicles/striker.hpp"
	#include "Vehicles/booker.hpp"
	#include "Vehicles/pickup.hpp"
	#include "Vehicles/ampv.hpp"
	#include "Vehicles/buggy.hpp"
	#include "Vehicles/trucks.hpp"
};