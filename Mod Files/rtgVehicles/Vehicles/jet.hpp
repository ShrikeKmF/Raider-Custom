class Air;
class Plane: Air
{
	class HitPoints;
};
class Plane_Base_F: Plane
{
	class AnimationSources;
	class NewTurret;
	class HitPoints: HitPoints
	{
		class HitHull;
	};
	class Components;
	class Eventhandlers;
};
class sab_militaryaviation_baseplane: Plane_Base_F
{
	class AnimationSources;
	class NewTurret;
	class HitPoints;
	class Components;
	class Eventhandlers;
};
class sab_pc9base: sab_militaryaviation_baseplane
{
	class AnimationSources;
	class NewTurret;
	class HitPoints;
	class Components;
	class Eventhandlers;
};
class sab_pc9_b: sab_pc9base
{
	class AnimationSources;
	class NewTurret;
	class HitPoints;
	class Components;
	class Eventhandlers;
};
class RTG_Fixed_Wing : sab_pc9_b
{
	displayName = "Pequod (2/0)";
	editorSubcategory = "RTGAircraft";
	author = "Shrike";
	maximumLoad = 20000;
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	RTG_Vehicle_Gear

	lockDetectionSystem = "2 + 4 + 8";
	incomingMissileDetectionSystem = 16;	
	showAllTargets = 2 + 4;
	radarType = 4;
	allowTabLock = 1;
	countermeasureActivationRadius = 5000;	
	thrustCoef[] = {1.5,1.75,1.875,1.75,1.625,1.5625,1.5,1.4375,1.25,0.75,0.125,0,0,0};
	
	hiddenSelectionsTextures[] = {"rtgVehicles\tex\Pequod\pc9_co.paa"};
	class TextureSources
	{
		class rtg_Pequod
		{
			displayName = "Raider Tactical";
			author = "Shrike";
			textures[] = {"rtgVehicles\tex\Pequod\pc9_co.paa"};
			factions[] = {};
		};
	};

	class Components: Components
	{
		class TransportPylonsComponent
		{
			UIPicture = "";
			class Pylons
			{
				class Pylons1
				{
					hardpoints[] = {"RTG_FIXEDWING_Pylons"};
					attachment = "";
					priority = 5;
					maxweight = 650;
					UIposition[] = {0.1,0.15};
				};
				class Pylons2: Pylons1
				{
					hardpoints[] = {"RTG_FIXEDWING_Pylons"};
					priority = 4;
					attachment = "";
					maxweight = 650;
					UIposition[] = {0.15,0.2};
				};
				class Pylons3: Pylons1
				{
					hardpoints[] = {"RTG_FIXEDWING_Pylons"};
					UIposition[] = {0.2,0.25};
					maxweight = 650;
					attachment = "";
				};
				class Pylons4: Pylons3
				{
					UIposition[] = {0.45,0.25};
					mirroredMissilePos = 3;
				};
				class Pylons5: Pylons2
				{
					UIposition[] = {0.5,0.2};
					mirroredMissilePos = 2;
				};
				class Pylons6: Pylons1
				{
					UIposition[] = {0.55,0.15};
					mirroredMissilePos = 1;
				};
			};
			class Presets
			{
				class Empty
				{
					displayName = "$STR_empty";
					attachment[] = {};
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
		{
			class Components: components
			{
				class EmptyDisplay
				{
					componentType = "EmptyDisplayComponent";
				};
				class MinimapDisplay
				{
					componentType = "MinimapDisplayComponent";
					resource = "RscCustomInfoMiniMap";
				};
				class CrewDisplay
				{
					componentType = "CrewDisplayComponent";
					resource = "RscCustomInfoCrew";
				};
				class VehiclePrimaryGunnerDisplay
				{
					componentType = "TransportFeedDisplayComponent";
					source = "PrimaryGunner";
				};
				class SensorDisplay
				{
					componentType = "SensorsDisplayComponent";
					range[] = {8000,16000,25000,4000};
					resource = "RscCustomInfoSensors";
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
		{
			defaultDisplay = "SensorDisplay";
			class Components: components
			{
				class EmptyDisplay
				{
					componentType = "EmptyDisplayComponent";
				};
				class MinimapDisplay
				{
					componentType = "MinimapDisplayComponent";
					resource = "RscCustomInfoMiniMap";
				};
				class CrewDisplay
				{
					componentType = "CrewDisplayComponent";
					resource = "RscCustomInfoCrew";
				};
				class VehiclePrimaryGunnerDisplay
				{
					componentType = "TransportFeedDisplayComponent";
					source = "PrimaryGunner";
				};
				class SensorDisplay
				{
					componentType = "SensorsDisplayComponent";
					range[] = {8000,16000,25000,4000};
					resource = "RscCustomInfoSensors";
				};
			};
		};
		class TransportCountermeasuresComponent{};
	};
}