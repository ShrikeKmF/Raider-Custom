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

class VehicleMagazine;
class rhs_mag_M829A2;
class CfgMagazines
{
	class RTG_8Rnd_M900_APFSDS: VehicleMagazine
	{
		author="Shrike";
		displayName="M900 105mm APFSDS";
		displayNameShort="AP";
		ammo="rhs_ammo_M900";
		initSpeed=1575;
		count=12;
		maxLeadSpeed=25;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.5,4};
	};
	class RTG_4Rnd_m900a1_APFSDS: rhs_mag_M829A2
	{
		count = 4;
		initSpeed = 1700;
		author="Shrike";
		displayName="M900A1 105mm APFSDS";
		displayNameShort="AP";
        descriptionShort = "APFSDS-T M900A1";
		muzzleImpulseFactor[] = {0.5,4};
		tracersEvery = 1;
	};
	class RTG_16Rnd_M456A2_HEAT: VehicleMagazine
	{
		author="Shrike";
		scope=2;
		displayName="M456A2 105mm HEAT";
		displayNameShort="HEAT";
		ammo="rhs_ammo_M456A2";
		count=16;
		initSpeed=1000;
		maxLeadSpeed=25;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,6};
	};
	class RTG_24Rnd_M393A3_HE: VehicleMagazine
	{
		author="Shrike";
		scope=2;
		displayName="M393A3 105mm HE";
		displayNameShort="HE";
		ammo="rhs_ammo_M393A3";
		count=24;
		initSpeed=750;
		maxLeadSpeed=25;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,6};
	};
};