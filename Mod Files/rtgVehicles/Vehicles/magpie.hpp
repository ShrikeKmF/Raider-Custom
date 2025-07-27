class RHS_UH60M;
class rtg_Magpie : RHS_UH60M
{
	displayName = "Magpie (2/14)";
	editorSubcategory = "RTGHelicopters";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	HELICOPTER_FUEL_CONSUMPTION(2500)
	maximumLoad = 20000;
	ace_cargo_space = 16;
	helmetMountedDisplay=1;
	radarTargetSize = 1.1;
	RTG_Vehicle_Gear
	
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

	gunnerCanSee = __EVAL(1+2+4+16+32);
	driverCanSee = __EVAL(1+2+4+16+32);
	laserScanner=1;
	LockDetectionSystem = "8 + 4";
	incomingMissileDetectionSystem = "8 + 16";
	class Components : Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
				{
					class AirTarget
					{
						minRange = 2000;
						maxRange = 2000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 2000;
						maxRange = 2000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					angleRangeHorizontal = 360;
					angleRangeVertical = 180;
				};

				class LaserSensorComponent : SensorTemplateLaser
				{
					class AirTarget
					{
						minRange = 4000;
						maxRange = 4000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 4000;
						maxRange = 4000;
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