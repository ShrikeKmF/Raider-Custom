class CfgPatches
{
	class rtgVehicles
	{
		name = "rtgVehicles";
		version = "1.2";
		author = "Shrike";
		url = "";
		requiredAddons[] = {"a3_characters_F","a3_characters_F_beta","A3_Characters_F_Common","a3_characters_f_beta","a3_characters_f_gamma","A3_Soft_F_epc","bma3_bushmaster","rhsusf_c_weapons"};
		units[] = {"rtg_UH60M_DAP_Magpie", "raider_heavy_attack_boat", "raider_light_strike_vehicle", "rtg_wheelsBox","hitman_light_vehicle","raider_fast_rhib","raider_strike_car","raider_bushmaster_unarmed","rtg_UH60M_Magpie","rtg_AH1Z_Hawk","rtg_heavyLift_Cargo","rtg_heavyLift_Transport","rtg_BasicSupply","rtg_atSupply","rtg_medicalSupply"};
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
	class SensorTemplateActiveRadar;
	class ActiveRadarSensorComponent;
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
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplateActiveRadar;
	class SensorTemplatePassiveRadar;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class AnimationSources;

	// Include Vehicle Files
	#include "Vehicles/humvee.hpp"
	#include "Vehicles/bushmaster.hpp"
	#include "Vehicles/magpie.hpp"
	#include "Vehicles/hawk.hpp"
	#include "Vehicles/pelican.hpp"
	#include "Vehicles/boats.hpp"
	#include "Vehicles/crates.hpp"
};