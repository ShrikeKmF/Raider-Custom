class RHS_MELB_AH6M;
class CopilotTurret;
class rtg_sparrow : RHS_MELB_AH6M
{
	displayName = "Sparrow (2/1)";
	editorSubcategory = "RTG_LIGHT_ASSETS";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	maximumLoad = 20000;
	ace_cargo_space = 8;
	helmetMountedDisplay=1;
	HELICOPTER_FUEL_CONSUMPTION(1800)
	RTG_Vehicle_Gear_Rotary
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"192Rnd_CMFlare_Chaff_Magazine"};

	hiddenSelections[] = {"camo1","d_SN"};
	hiddenSelectionsTextures[] = {
			"rtgVehicles\tex\Sparrow\melb_ext_co.paa",
			"rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
		};

	gunnerCanSee = __EVAL(1+2+4+16+32);
	driverCanSee = __EVAL(1+2+4+16+32);
	laserScanner=1;
	LockDetectionSystem = "8 + 4";
	incomingMissileDetectionSystem = "8 + 16";
	radarTargetSize = 0.7;

	class pilotCamera {
		class OpticsIn {
			class Wide {
				opticsDisplayName = "WFOV";
				initAngleX = 0;
				minAngleX = 0;
				maxAngleX = 0;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				initFov = "(30 / 120)";
				minFov = "(30 / 120)";
				maxFov = "(30 / 120)";
				directionStabilized = 1;
				visionMode[] = {"Normal", "NVG", "Ti"};
				thermalMode[] = {0, 1};
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
			};
			class Medium {
				opticsDisplayName = "MFOV";
				initFov = "(6 / 120)";
				minFov = "(6 / 120)";
				maxFov = "(6 / 120)";
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				initAngleX = 0;
				minAngleX = 0;
				maxAngleX = 0;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				directionStabilized = 1;
				visionMode[] = {"Normal", "NVG", "Ti"};
				thermalMode[] = {0, 1};
			};
			class Narrow {
				opticsDisplayName = "NFOV";
				initFov = "(2 / 120)";
				minFov = "(2 / 120)";
				maxFov = "(2 / 120)";
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				initAngleX = 0;
				minAngleX = 0;
				maxAngleX = 0;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				directionStabilized = 1;
				visionMode[] = {"Normal", "NVG", "Ti"};
				thermalMode[] = {0, 1};
			};
		};
		minTurn = -360;
		maxTurn = 360;
		initTurn = 0;
		minElev = -90;
		maxElev = 60;
		initElev = 0;
		maxXRotSpeed = 1;
		maxYRotSpeed = 1;
		maxMouseXRotSpeed = 0.5;
		maxMouseYRotSpeed = 0.5;
		pilotOpticsShowCursor = 1;
		controllable = 1;
	};

	class Components: Components
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
		class TransportPylonsComponent
		{
			UIPicture = "\rhsusf\addons\rhsusf_melb\data\loadouts\RHS_AH6M_EDEN_CA.paa";
			class pylons
			{
				class pylon1
				{
					hardpoints[] = {"RHS_HP_MELB","RHS_HP_MELB_L"};
					priority = 2;
					attachment = "rhsusf_mag_gau19_melb_left";
					maxweight = 1200;
					UIposition[] = {0.625,0.2};
					bay = -1;
					turret[] = {};
					hitpoint = "HitPylon1";
				};
				class pylon2: pylon1
				{
					hardpoints[] = {"RHS_HP_MELB_M134"};
					UIposition[] = {0.562,0.3};
					priority = 1;
					attachment = "rhs_mag_m134_pylon_3000";
					turret[] = {};
					hitpoint = "HitPylon2";
				};
				class pylon3: pylon2
				{
					UIposition[] = {0.103,0.3};
					mirroredMissilePos = 2;
					attachment = "rhs_mag_m134_pylon_3000";
					turret[] = {};
					hitpoint = "HitPylon3";
				};
				class pylon4: pylon1
				{
					hardpoints[] = {"RHS_HP_MELB","RHS_HP_MELB_R"};
					UIposition[] = {0.04,0.2};
					attachment = "rhsusf_mag_gau19_melb_right";
					mirroredMissilePos = 1;
					turret[] = {};
					hitpoint = "HitPylon4";
				};
			};
			class Presets
			{
				class sparrow
				{
					attachment[] = {"rhsusf_mag_gau19_melb_left","rhs_mag_m134_pylon_3000","rhs_mag_m134_pylon_3000","rhsusf_mag_gau19_melb_right"};
					displayname = "Sparrow";
				};
			};
		};
	};
};

class rtg_sparrow_med : rtg_sparrow
{
	editorSubcategory = "RTG_MEDIUM_ASSETS";
}