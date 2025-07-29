class usarmy_M1283_M2_WD;
class rtg_amp_m2: usarmy_M1283_M2_WD
{
	displayNameShort = "AMP M2 [2/9]";
	displayName = "AMP M2 [2/9]";
	editorSubcategory = "RTG_HEAVY_ASSETS";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	ace_cargo_space = 12;
	RTG_Vehicle_Gear_Tracked 
};

class usarmy_M1283RWS_WD;
class rtg_amp_m2jav: usarmy_M1283RWS_WD
{
	displayNameShort = "AMP M2/JAV [2/9]";
	displayName = "AMP M2/JAV [2/9]";
	editorSubcategory = "RTG_HEAVY_ASSETS";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	ace_cargo_space = 12;
	RTG_Vehicle_Gear_Tracked
};

class usarmy_M1283CUAS_WD;
class rtg_amp_shorad: usarmy_M1283CUAS_WD
{
	displayNameShort = "AMP SHORAD [2/9]";
	displayName = "AMP SHORAD [2/9]";
	editorSubcategory = "RTG_HEAVY_ASSETS";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	ace_cargo_space = 12;
	RTG_Vehicle_Gear_Tracked

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