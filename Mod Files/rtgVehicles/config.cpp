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
			// Boats
			"raider_fast_rhib",
			// Cars
			"rtg_ltv",
			"rtg_lsv",
			"rtg_htc",
			// Heli
			"rtg_Magpie",
			"rtg_Hawk",
			"rtg_sparrow",
			// Crates
			"rtg_BasicSupply",
			"rtg_atSupply",
			"rtg_wheelsBox"
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
	class RTGCars
	{
		displayName = "Cars";
		scope = 2;
	};
	class RTGBoats
	{
		displayName = "Boats";
		scope = 2;
	};
	class RTGHelicopters
	{
		displayName = "Helicopters";
		scope = 2;
	};
	class RTGAircraft
	{
		displayName = "Planes";
		scope = 2;
	};
	class RTGArtillery
	{
		displayName = "Artillery";
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
	class AnimationSources;
	class DefaultVehicleSystemsDisplayManagerLeft;
	class DefaultVehicleSystemsDisplayManagerRight;
	class Eventhandlers;

	// Include Vehicle Files
	#include "Vehicles/magpie.hpp"
	#include "Vehicles/humvee.hpp"
	#include "Vehicles/hawk.hpp"
	#include "Vehicles/sparrow.hpp"
	#include "Vehicles/boats.hpp"
	#include "Vehicles/crates.hpp"
	#include "Vehicles/trucks.hpp"
};