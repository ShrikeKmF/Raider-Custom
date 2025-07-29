class rhsusf_stryker_m1126ms_wd;
class rtg_rush_shorad: rhsusf_stryker_m1126ms_wd
{
	displayNameShort = "RUSH SHORAD [2/9]";
	displayName = "RUSH SHORAD [2/9]";
	editorSubcategory = "RTG_MEDIUM_ASSETS";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	ace_cargo_space = 16;
	RTG_Vehicle_Gear 

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

class rhsusf_stryker_m1296_wd;
class rtg_rush_IS: rhsusf_stryker_m1296_wd
{
	displayNameShort = "RUSH IS [2/9]";
	displayName = "RUSH IS [2/9]";
	editorSubcategory = "RTG_MEDIUM_ASSETS";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	ace_cargo_space = 16;
	RTG_Vehicle_Gear
};