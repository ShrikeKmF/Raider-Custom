// class RHS_Mi24V_vdv;
// class rtg_Hawk : RHS_Mi24V_vdv
// {
// 	displayName = "Hawk (2/8)";
// 	editorSubcategory = "RTG_LIGHT_ASSETS";
// 	author = "Shrike";
// 	scope = 2;
// 	side = 1;
// 	faction = "Raider_Tactical_F";
// 	maximumLoad = 20000;
// 	ace_cargo_space = 16;
// 	helmetMountedDisplay=1;
// 	HELICOPTER_FUEL_CONSUMPTION(2500)
// 	radarTargetSize = 1.25;
// 	RTG_Vehicle_Gear_Rotary

// 	hiddenSelections[]=
// 	{
// 		"camo1",
// 		"camo2",
// 		"exhaust",
// 		"tail_decals",
// 		"n1",
// 		"n2",
// 		"moving_map"
// 	};
// 	hiddenSelectionsTextures[]=
// 	{
// 		"rtgVehicles\tex\hawk\mi24p_001_co.paa",
// 		"rtgVehicles\tex\hawk\mi24p_002_co.paa",
// 		"rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa",
// 	};
// 	class textureSources
// 	{
// 		class rtg_base
// 		{
// 			displayName="RTG Base";
// 			author = "Shrike";
// 			textures[]=
// 			{
// 				"rtgVehicles\tex\hawk\mi24p_001_co.paa",
// 				"rtgVehicles\tex\hawk\mi24p_002_co.paa",
// 				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa",
// 			};
// 		};
// 	};
// 	textureList[]=
// 	{
// 		"rtg_base", 1
// 	};

// 	gunnerCanSee = __EVAL(1+2+4+16+32);
// 	driverCanSee = __EVAL(1+2+4+16+32);
// 	laserScanner=1;
// 	LockDetectionSystem = "8 + 4";
// 	incomingMissileDetectionSystem = "8 + 16";
// 	class Components : Components	{
// 		class SensorsManagerComponent		{
// 			class Components			{
// 				class PassiveRadarSensorComponent : SensorTemplatePassiveRadar {
// 					class AirTarget
// 					{
// 						minRange = 200;
// 						maxRange = 2000;
// 						objectDistanceLimitCoef = -1;
// 						viewDistanceLimitCoef = -1;
// 					};
// 					class GroundTarget
// 					{
// 						minRange = 200;
// 						maxRange = 2000;
// 						objectDistanceLimitCoef = -1;
// 						viewDistanceLimitCoef = -1;
// 					};
// 					angleRangeHorizontal = 360;
// 					angleRangeVertical = 180;
// 				};
// 				class ActiveRadarSensorComponent : SensorTemplateActiveRadar {
// 					class AirTarget
// 					{
// 						minRange = 200;
// 						maxRange = 2000;
// 						objectDistanceLimitCoef = -1;
// 						viewDistanceLimitCoef = -1;
// 					};
// 					class GroundTarget
// 					{
// 						minRange = 200;
// 						maxRange = 2000;
// 						objectDistanceLimitCoef = -1;
// 						viewDistanceLimitCoef = -1;
// 					};
// 					angleRangeHorizontal = 360;
// 					angleRangeVertical = 180;
// 				};

// 				class LaserSensorComponent : SensorTemplateLaser {
// 					class AirTarget
// 					{
// 						minRange = 800;
// 						maxRange = 8000;
// 						objectDistanceLimitCoef = -1;
// 						viewDistanceLimitCoef = -1;
// 					};
// 					class GroundTarget
// 					{
// 						minRange = 800;
// 						maxRange = 8000;
// 						objectDistanceLimitCoef = -1;
// 						viewDistanceLimitCoef = -1;
// 					};
// 					angleRangeHorizontal = 360;
// 					angleRangeVertical = 90;
// 				};

// 				class DatalinkSensorComponent : SensorTemplatePassiveRadar {};
// 			};
// 		};
// 		class TransportPylonsComponent
// 		{
// 			UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi24_EDEN_CA.paa";
// 			class pylons
// 			{
// 				// max total weight - 1500kg
// 				class pylon1
// 				{
// 					hardpoints[]	= {
// 						"RHS_HP_FAB250","RHS_HP_FAB500","RHS_HP_KMGU2",
// 						"RHS_HP_APU68M3_S24","RHS_HP_B13L1","RHS_HP_B8V20","RHS_HP_UB16","RHS_HP_UB32",
// 						"RHS_HP_UPK23"
// 					};
// 					priority		= 1;
// 					attachment		= "rhs_mag_upk23_mixed";
// 					maxweight		= 550;
// 					UIposition[]	= {0.503,0.30};
// 					turret[]		= {};
// 				};
// 				class pylon2: pylon1 {UIposition[]	= {0.165,0.30}; mirroredMissilePos = 1;};

// 				class pylon3: pylon1
// 				{
// 					hardpoints[]	= {
// 						"RHS_HP_FAB250",
// 						"RHS_HP_APU68M3_S24","RHS_HP_B8V20","RHS_HP_UB16","RHS_HP_UB32",
// 						"RHS_HP_UPK23",
// 						"RHS_HP_9m17_Mi24","RHS_HP_9m114_Mi24","RHS_HP_9m120_Mi24"
// 					};
// 					attachment		= "rhs_mag_b8v20a_s8kom";
// 					maxweight		= 400;
// 					priority		= 2;
// 					UIposition[]	= {0.583,0.35};
// 					turret[]		= {};
// 				};
// 				class pylon4: pylon3 {UIposition[]	= {0.085,0.35}; mirroredMissilePos = 3;};

// 				class pylon5: pylon1
// 				{
// 					hardpoints[]	= {
// 						"RHS_HP_9m17_Mi24","RHS_HP_9m114_Mi24","RHS_HP_9m120_Mi24","RHS_HP_Empty_Mi24"
// 					};
// 					priority		= 4;
// 					bay 			= 1;
// 					attachment		= "rhs_mag_9M120M_Mi24_2x";		
// 					maxweight		= 150;					
// 					UIposition[]	= {0.628,0.40};
// 					turret[]		= {0};
// 				};
// 				class pylon6: pylon5 {UIposition[] = {0.04,0.40}; mirroredMissilePos = 5; };
// 				class cmDispenser
// 				{
// 					hardpoints[]	= {"RHS_cm_ASO2","RHS_cm_ASO2_x2","RHS_cm_ASO2_x4"};
// 					priority		= 1;
// 					attachment		= "rhs_ASO2_CMFlare_Chaff_Magazine_x4";
// 					maxweight		= 800;
// 					UIposition[]	= {0.33,0.0};
// 					turret[]		= {};
// 				};
// 			};
// 			class Bays
// 			{
// 				// Missile can be also mounted on 3 & 4 so it's quite tricky to get it working this way
// 				class 9S475_Hatch
// 				{
// 					bayOpenTime               = 1;
// 					openBayWhenWeaponSelected = 1.0;   
// 					autoCloseWhenEmptyDelay   = -1;
// 				};
// 			};
// 			class Presets
// 			{
// 				class Bomb
// 				{
// 					attachment[] =
// 					{
// 						"rhs_mag_fab250",
// 						"rhs_mag_fab250",
// 						"rhs_mag_b8v20a_s8kom",
// 						"rhs_mag_b8v20a_s8kom",
// 						"rhs_mag_9M120M_Mi24_2x",
// 						"rhs_mag_9M120M_Mi24_2x",
// 						"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
// 					};
// 					displayname = "Bomb";
// 				};
// 				class UPK
// 				{
// 					attachment[] =
// 					{
// 						"rhs_mag_upk23_mixed",
// 						"rhs_mag_upk23_mixed",
// 						"rhs_mag_b8v20a_s8kom",
// 						"rhs_mag_b8v20a_s8kom",
// 						"rhs_mag_9M120M_Mi24_2x",
// 						"rhs_mag_9M120M_Mi24_2x",
// 						"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
// 					};
// 					displayname = "UPK-23-250";
// 				};
// 				class AT
// 				{
// 					attachment[] =
// 					{
// 						"rhs_mag_b8v20a_s8kom",
// 						"rhs_mag_b8v20a_s8kom",
// 						"rhs_mag_9M120M_Mi24_2x",
// 						"rhs_mag_9M120M_Mi24_2x",
// 						"rhs_mag_9M120M_Mi24_2x",
// 						"rhs_mag_9M120M_Mi24_2x",
// 						"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
// 					};
// 					displayname = "Anti Tank";
// 				};
// 				class CAS
// 				{
// 					attachment[] =
// 					{
// 						"rhs_mag_b8v20a_s8df",
// 						"rhs_mag_b8v20a_s8df",
// 						"rhs_mag_b8v20a_s8kom",
// 						"rhs_mag_b8v20a_s8kom",
// 						"rhs_mag_9M120M_Mi24_2x",
// 						"rhs_mag_9M120M_Mi24_2x",
// 						"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
// 					};
// 					displayname = "Close Air Support";
// 				};
// 			};
// 		};
// 	};
// };