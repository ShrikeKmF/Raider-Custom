class O_Heli_Transport_04_F;
class rtg_heavyLift_Cargo: O_Heli_Transport_04_F
{
	displayName = "Pelican Cargo [3/0]";
	editorSubcategory = "RTGHelicopters";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	maximumLoad = 20000;
	ace_cargo_space = 16;
	acre_hasInfantryPhone = 0;
	camouflage = 3;
	canFloat = 1;
	irTarget = 1;
	irTargetSize = 0.5;
	visualTarget = 1;
	visualTargetSize = 1;
	radarTarget = 1;
	radarTargetSize = 0.3;
	radarType = 4;
	LockDetectionSystem = 8;
	incomingMissileDetectionSystem = 16;
	receiveRemoteTargets = 1;
	reportRemoteTargets = 1;
	reportOwnPosition = 1;
	laserScanner = 1;
	armor = 80;
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
	hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa"};
	class TextureSources
	{
		class Black
		{
			displayName = "Raider";
			author = "Shrike";
			textures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa"};
			factions[] = {"Raider_Tactical_F"};
		};
	};
	RTG_Vehicle_Gear;
	ace_fastroping_enabled = 1;
	ace_refuel_fuelCargo = 80;
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
				{
					class AirTarget
					{
						minRange = 2500;
						maxRange = 2500;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 2500;
						maxRange = 2500;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
				};
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					class AirTarget
					{
						minRange = 3500;
						maxRange = 3500;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 2500;
						maxRange = 2500;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					groundNoiseDistanceCoef = 0.0005;
					maxGroundNoiseDistance = 50;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					angleRangeHorizontal = 60;
					angleRangeVertical = 60;
					typeRecognitionDistance = 20000;
					maxFogSeeThrough = 1;
					maxTrackableSpeed = 830;
				};
				class ActiveRadarSensorComponent_Wide: ActiveRadarSensorComponent
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
					groundNoiseDistanceCoef = 0.0005;
					maxGroundNoiseDistance = 50;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					angleRangeHorizontal = 110;
					angleRangeVertical = 110;
					typeRecognitionDistance = 10000;
					maxFogSeeThrough = 1;
					maxTrackableSpeed = 830;
				};
			};
		};
	};
};
class O_Heli_Transport_04_covered_F;
class rtg_heavyLift_Transport: O_Heli_Transport_04_covered_F
{
	displayName = "Pelican Transport [3/16]";
	editorSubcategory = "RTGHelicopters";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	maximumLoad = 20000;
	ace_cargo_space = 16;
	acre_hasInfantryPhone = 0;
	camouflage = 3;
	canFloat = 1;
	irTarget = 1;
	irTargetSize = 0.5;
	visualTarget = 1;
	visualTargetSize = 1;
	radarTarget = 1;
	radarTargetSize = 0.3;
	radarType = 4;
	LockDetectionSystem = 8;
	incomingMissileDetectionSystem = 16;
	receiveRemoteTargets = 1;
	reportRemoteTargets = 1;
	reportOwnPosition = 1;
	laserScanner = 1;
	armor = 45;
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
	ace_fastroping_enabled = 1;
	ace_refuel_fuelCargo = 80;
	hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa"};
	class TextureSources
	{
		class Black
		{
			displayName = "Raider";
			author = "Shrike";
			textures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa"};
			factions[] = {"Raider_Tactical_F"};
		};
	};
	textureList[] = {"Opfor",1};
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
				{
					class AirTarget
					{
						minRange = 2500;
						maxRange = 2500;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 2500;
						maxRange = 2500;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
				};
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					class AirTarget
					{
						minRange = 3500;
						maxRange = 3500;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 2500;
						maxRange = 2500;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					groundNoiseDistanceCoef = 0.0005;
					maxGroundNoiseDistance = 50;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					angleRangeHorizontal = 60;
					angleRangeVertical = 60;
					typeRecognitionDistance = 20000;
					maxFogSeeThrough = 1;
					maxTrackableSpeed = 830;
				};
				class ActiveRadarSensorComponent_Wide: ActiveRadarSensorComponent
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
					groundNoiseDistanceCoef = 0.0005;
					maxGroundNoiseDistance = 50;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					angleRangeHorizontal = 110;
					angleRangeVertical = 110;
					typeRecognitionDistance = 10000;
					maxFogSeeThrough = 1;
					maxTrackableSpeed = 830;
				};
			};
		};
	};
	RTG_Vehicle_Gear;
	RTG_Vehicle_Radios;
};
