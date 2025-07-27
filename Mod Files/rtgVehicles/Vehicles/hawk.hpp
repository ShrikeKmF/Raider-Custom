class RHS_Mi24P_vdv;
class rtg_Hawk : RHS_Mi24P_vdv
{
	displayName = "Hawk (2/8)";
	editorSubcategory = "RTGHelicopters";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	maximumLoad = 20000;
	ace_cargo_space = 16;
	helmetMountedDisplay=1;
	HELICOPTER_FUEL_CONSUMPTION(2500)
	radarTargetSize = 1.25;
	RTG_Vehicle_Gear

	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"exhaust",
		"tail_decals",
		"n1",
		"n2",
		"moving_map"
	};
	hiddenSelectionsTextures[]=
	{
		"rtgVehicles\tex\hawk\mi24p_001_co.paa",
		"rtgVehicles\tex\hawk\mi24p_002_co.paa",
		"rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa",
	};
	class textureSources
	{
		class rtg_base
		{
			displayName="RTG Base";
			author = "Shrike";
			textures[]=
			{
				"rtgVehicles\tex\hawk\mi24p_001_co.paa",
				"rtgVehicles\tex\hawk\mi24p_002_co.paa",
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa",
			};
		};
	};
	textureList[]=
	{
		"rtg_base", 1
	};

	gunnerCanSee = __EVAL(1+2+4+16+32);
	driverCanSee = __EVAL(1+2+4+16+32);
	laserScanner=1;
	LockDetectionSystem = "8 + 4";
	incomingMissileDetectionSystem = "8 + 16";
	class Components : Components	{
		class SensorsManagerComponent		{
			class Components			{
				class PassiveRadarSensorComponent : SensorTemplatePassiveRadar {
					class AirTarget
					{
						minRange = 200;
						maxRange = 2000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 200;
						maxRange = 2000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					angleRangeHorizontal = 360;
					angleRangeVertical = 180;
				};

				class LaserSensorComponent : SensorTemplateLaser {
					class AirTarget
					{
						minRange = 800;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 800;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					angleRangeHorizontal = 360;
					angleRangeVertical = 90;
				};

				class DatalinkSensorComponent : SensorTemplatePassiveRadar {};
			};
		};
	};
};

/* Avalible weapons
 	HE Rocket Pods
	HEAT Rocket Pods
	APDS Gun Pods
	HE Gun Pods
	Cruser Missile
	ATGMs
*/