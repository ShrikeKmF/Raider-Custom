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
	mineDetectorRange = 50;
	canAccessMineDetector = 1;
	enginePower=395;
	weapons[] = {"SmokeLauncher","TruckHorn"};
	magazines[] = {"SmokeLauncherMag"};
	smokeLauncherGrenadeCount = 4;
	smokeLauncherVelocity = 14;
	smokeLauncherOnTurret = 0;
	smokeLauncherAngle = 160;
	
	RTG_Vehicle_Gear 

	LockDetectionSystem = "8 + 4";
	incomingMissileDetectionSystem = "8 + 16";
	class Components: Components
	{
		class TransportPylonsComponent
		{
			UIPicture="\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
			class pylons
			{
				class pylons1
				{
					turret[]={0};
					hardpoints[]=
					{
						"CUAS_pylon_left"
					};
					attachment="4Rnd_Stinger_AAM";
					priority=13;
					bay=-1;
					maxweight=500;
					UIposition[]={0.60000002,0.25};
				};
				class pylons2: pylons1
				{
					hardpoints[]=
					{
						"CUAS_pylon_right"
					};
					attachment="4Rnd_Stinger_AAM_rightside";
					priority=12;
					UIposition[]={0.15000001,0.25};
				};
			};
			class Presets
			{
				class Empty
				{
					displayName="$STR_empty";
					attachment[]={};
				};
				class AA
				{
					displayName="$STR_A3_cfgmagazines_titan_aa_dns";
					attachment[]=
					{
						"4Rnd_Stinger_AAM",
						"4Rnd_Stinger_AAM_rightside"
					};
				};
			};
		};
		class SensorsManagerComponent
		{
			class Components
			{
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					class AirTarget
					{
						maxRange = 5000;
						minRange = 5000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange=5000;
						maxRange=5000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					aimDown = -30;
					allowsMarking = 1;
					angleRangeHorizontal = 360;
					angleRangeVertical = 100;
					animDirection = "";
					color[] = {0,1,1,1};
					componentType = "ActiveRadarSensorComponent";
					groundNoiseDistanceCoef = 0.5;
					maxGroundNoiseDistance = 200;
					maxSpeedThreshold = 27.7778;
					maxTrackableATL = 1e+10;
					maxTrackableSpeed = 225;
					minSpeedThreshold = 20.8333;
					minTrackableATL = -1e+10;
					minTrackableSpeed = -1e+10;
					typeRecognitionDistance = 3000;
				};
				class IRSensorComponent: IRSensorComponent
				{
					class AirTarget
					{
						maxRange = 4000;
						minRange = 500;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget
					{
						maxRange = 3000;
						minRange = 500;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = 1;
					};
					aimDown = 0;
					allowsMarking = 1;
					angleRangeHorizontal = 46;
					angleRangeVertical = 34;
					animDirection = "hmg_gun";
					color[] = {1,0,0,1};
					componentType = "IRSensorComponent";
					groundNoiseDistanceCoef = -1;
					maxFogSeeThrough = 0.995;
					maxGroundNoiseDistance = -1;
					maxSpeedThreshold = 0;
					maxTrackableATL = 1e+10;
					maxTrackableSpeed = 70;
					minSpeedThreshold = 0;
					minTrackableATL = -1e+10;
					minTrackableSpeed = -1e+10;
					typeRecognitionDistance = 2000;
				};
				class LaserSensorComponent: LaserSensorComponent
				{
					class AirTarget
					{
						maxRange = 6000;
						minRange = 6000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						maxRange = 6000;
						minRange = 6000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					aimDown = 0;
					allowsMarking = 1;
					angleRangeHorizontal = 180;
					angleRangeVertical = 180;
					animDirection = "";
					color[] = {1,1,1,0};
					componentType = "LaserSensorComponent";
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					maxSpeedThreshold = 0;
					maxTrackableATL = 1e+10;
					maxTrackableSpeed = 1e+10;
					minSpeedThreshold = 0;
					minTrackableATL = -1e+10;
					minTrackableSpeed = -1e+10;
					typeRecognitionDistance = 0;
				};
				class VisualSensorComponent: VisualSensorComponent
				{
					class AirTarget
					{
						maxRange = 3000;
						minRange = 500;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget
					{
						maxRange = 2300;
						minRange = 500;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					aimDown = 0;
					allowsMarking = 1;
					angleRangeHorizontal = 46;
					angleRangeVertical = 34;
					animDirection = "hmg_gun";
					color[] = {1,1,0.5,0.8};
					componentType = "VisualSensorComponent";
					groundNoiseDistanceCoef = -1;
					maxFogSeeThrough = 0.94;
					maxGroundNoiseDistance = -1;
					maxSpeedThreshold = 0;
					maxTrackableATL = 1e+10;
					maxTrackableSpeed = 70;
					minSpeedThreshold = 0;
					minTrackableATL = -1e+10;
					minTrackableSpeed = -1e+10;
					nightRangeCoef = 0;
					typeRecognitionDistance = 2000;
				};
				class DataLinkSensorComponent: SensorTemplateDataLink
				{
				};
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
	enginePower=395;
	mineDetectorRange = 50;
	canAccessMineDetector = 1;
	ace_cargo_space = 16;
	weapons[] = {"SmokeLauncher","TruckHorn"};
	magazines[] = {"SmokeLauncherMag"};
	smokeLauncherGrenadeCount = 4;
	smokeLauncherVelocity = 14;
	smokeLauncherOnTurret = 0;
	smokeLauncherAngle = 160;
	
	RTG_Vehicle_Gear
};

class rtg_rush_IS_g : rtg_rush_IS
{
	side = 4;
	faction = "Raider_Tactical_G_F";
}

class rtg_rush_shorad_g : rtg_rush_shorad
{
	side = 4;
	faction = "Raider_Tactical_G_F";
}