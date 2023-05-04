class CfgPatches 
{
    class rtgVehicles 
    {
        name = "rtgVehicles";
        units[] = {"raider_bushmaster_armed", "raider_bushmaster_unarmed", "raider_huey_armed", "raider_huey_transport"};
        weapons[] = {};
        version = "1";
        requiredAddons[] = {"a3_characters_F","a3_characters_F_beta","A3_Characters_F_Common","a3_characters_f_beta","a3_characters_f_gamma","A3_Soft_F_epc","bma3_bushmaster", "uk3cb_factions_fia"};
        author = "Shrike";
        url="";
    };
};

class cfgFactionClasses {
    class Raider_Tactical_F
    {
        displayName = "Raider Tactical";
        priority = 0;
        side = 1;
    };
} 

class cfgEditorCategories {
    class Raider_Tactical // Category class, you point to it in editorCategory property
    {
        displayName = "Raider Tactical"; // Name visible in the list
    };
} 

class cfgEditorSubcategories {
    class Bushmasters
    {
        displayName = "Bushmasters";
    };

    class Helicopters
    {
        displayName = "Helicopters";
    };
} 

class CfgVehicles {
    class bma3_bushmaster_unarmed_F;
    class bma3_bushmaster_pws127mm_F;
    class I_MRAP_03_F;
    class UK3CB_I_G_UH1H_M240_FIA;
    class UK3CB_I_G_UH1H_GUNSHIP_FIA;
    class Components;
    class SensorTemplatePassiveRadar;
    class SensorTemplateActiveRadar;
    class ActiveRadarSensorComponent;

    class raider_strike_car: I_MRAP_03_F
    {
        displayName = "Hawkei Transport [1/4]";
        editorCategory = "Raider_Tactical";
        simulation="CarX";
        editorSubcategory = "Bushmasters";
        author = "Shrike";
        scope = 2;
        side = 1;
        faction = "Raider_Tactical_F";
        fuelConsumptionRate = 0.03;
        fuelCapacity = 84;
        // Armor
        armor = 350;
        armorEngine = 100;
        armorGun = 100;
        armorGlass = 100;
        armorFuel = 20;
        armorStructural = 400;
        armorLights = 0.5;

        damageResistance = 0.00719;
		crewVulnerable = 0;
		crewCrashProtection = 0.15;
		crewExplosionProtection = 0.9999;
		threat[] = {0.8,0.6,0.3};

        maxSpeed = 110;
        maximumLoad = 20000;
        ace_cargo_space = 16;
        ace_vehicles_engineStartDelay = 3;
        acre_hasInfantryPhone = 0;
        canFloat = 1;
        weapons[] = {"SmokeLauncher"};
        magazines[] = {"SmokeLauncherMag"};
        smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 160;

        class textureSources
        {
            // This texture source will be available for every defined factions
            class rtg_blk
            {
                // Display name of the texture
                displayName = "Black";
                // Author of the texture
                author = "shrike";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {"rtgVehicles\rtg_hawkei.paa"};
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_tan
            {
                // Display name of the texture
                displayName = "Tan";
                // Author of the texture
                author = "shrike";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {"rtgVehicles\rtg_hawkei_tan.paa"};
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
        };

        class TransportItems
        {
            class _xx_kat_accuvac 
            {
                name = "kat_accuvac";
                count = 1;
            };
            class _xx_ACE_NVG_Gen4_black 
            {
                name = "ACE_NVG_Gen4_black";
                count = 8;
            };
            class _xx_ToolKit
            {
                name = "ToolKit";
                count = 2;
            };
            class _xx_ACE_bloodIV_500
            {
                name = "ACE_bloodIV_500";
                count = 8;
            };
            class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 8;
            };
            class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 40;
            };
            class _xx_ACE_packingBandage
            {
                name = "ACE_packingBandage";
                count = 10;
            };
            class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 10;
            };
            class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 6;
            };
            class _xx_ACE_tourniquet 
            {
                name = "ACE_tourniquet";
                count = 6;
            };
            class _xx_ACE_rope6
            {
                name = "ACE_rope6";
                count = 4;
            };
            class _xx_ACE_Canteen
            {
                name = "ACE_Canteen";
                count = 5;
            };
            class _xx_ACE_Can_Franta
            {
                name = "ACE_Can_Franta";
                count = 10;
            };
            class _xx_ACE_MRE_BeefStew 
            {
                name = "ACE_MRE_BeefStew";
                count = 5;
            };
        };
        class TransportWeapons
        {
            class _xx_hlc_wp_SCARL_CQC_Blk 
            {
                weapon = "hlc_wp_SCARL_CQC_Blk";
                count = 2;
            };
            class _xx_rhs_weap_m72a7
            {
                weapon = "rhs_weap_m72a7";
                count = 2;
            };
        };
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Intercom";
                shortName = "Intercom";
                allowedPositions[] = {"driver", "commander", "gunner"};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                masterPositions[] = {"driver"};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"driver", "commander", "gunner"};
                componentName = "ACRE_VRC110";
                displayName = "Dash";
                mountedRadio = "ACRE_PRC152";
                shortName = "Dash";
            };
        };
        class ace_cargo {       
            class Cargo {
                class ACE_Wheel {
                    type = "ACE_Wheel";
                    amount = 4;
                };
            }; 
        };
    };

    class raider_bushmaster_unarmed: bma3_bushmaster_unarmed_F
    {
        displayName = "Bushmaster Transport [1/7]";
        editorCategory = "Raider_Tactical";
        simulation="CarX";
        editorSubcategory = "Bushmasters";
        author = "Shrike";
        scope = 2;
        side = 1;
        faction = "Raider_Tactical_F";
        fuelConsumptionRate = 0.03;
        fuelCapacity = 84;
        armor = 300;
        maxSpeed = 110;
        maximumLoad = 20000;
        ace_cargo_space = 16;
        ace_vehicles_engineStartDelay = 3;
        acre_hasInfantryPhone = 0;
        canFloat = 1;
        weapons[] = {"SmokeLauncher"};
        magazines[] = {"SmokeLauncherMag"};
        smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 160;

        textureList[] = 
		{
			"rtg", 1.0,
		};

        class textureSources
        {
            // This texture source will be available for every defined factions
            class rtg_black
            {
                // Display name of the texture
                displayName = "Black";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = { "rtgVehicles\rtg_bushmaster.paa" };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_tan
            {
                // Display name of the texture
                displayName = "Tan";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = { "rtgVehicles\rtg_bushmaster_tan.paa" };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
        };

        class TransportItems
        {
            class _xx_kat_accuvac 
            {
                name = "kat_accuvac";
                count = 1;
            };
            class _xx_ACE_NVG_Gen4_black 
            {
                name = "ACE_NVG_Gen4_black";
                count = 8;
            };
            class _xx_ToolKit
            {
                name = "ToolKit";
                count = 2;
            };
            class _xx_ACE_bloodIV_500
            {
                name = "ACE_bloodIV_500";
                count = 8;
            };
            class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 8;
            };
            class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 40;
            };
            class _xx_ACE_packingBandage
            {
                name = "ACE_packingBandage";
                count = 10;
            };
            class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 10;
            };
            class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 6;
            };
            class _xx_ACE_tourniquet 
            {
                name = "ACE_tourniquet";
                count = 6;
            };
            class _xx_ACE_rope6
            {
                name = "ACE_rope6";
                count = 4;
            };
            class _xx_ACE_Canteen
            {
                name = "ACE_Canteen";
                count = 5;
            };
            class _xx_ACE_Can_Franta
            {
                name = "ACE_Can_Franta";
                count = 10;
            };
            class _xx_ACE_MRE_BeefStew 
            {
                name = "ACE_MRE_BeefStew";
                count = 5;
            };
        };
        class TransportWeapons
        {
            class _xx_hlc_wp_SCARL_CQC_Blk 
            {
                weapon = "hlc_wp_SCARL_CQC_Blk";
                count = 2;
            };
            class _xx_rhs_weap_m72a7
            {
                weapon = "rhs_weap_m72a7";
                count = 2;
            };
        };
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Intercom";
                shortName = "Intercom";
                allowedPositions[] = {"driver", "commander", "gunner"};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                masterPositions[] = {"driver"};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"driver", "commander", "gunner"};
                componentName = "ACRE_VRC110";
                displayName = "Dash";
                mountedRadio = "ACRE_PRC152";
                shortName = "Dash";
            };
        };
        class ace_cargo {       
            class Cargo {
                class ACE_Wheel {
                    type = "ACE_Wheel";
                    amount = 4;
                };
            }; 
        };
    };
        
    class raider_bushmaster_armed: bma3_bushmaster_pws127mm_F
    {
        displayName = "Bushmaster Armed .50 [2/6]";
        editorCategory = "Raider_Tactical";
        editorSubcategory = "Bushmasters";
        author = "Shrike";
        scope = 2;
        faction = "Raider_Tactical_F";
        fuelConsumptionRate = 0.03;
        fuelCapacity = 84;
        armor = 300;
        maxSpeed = 110;
        maximumLoad = 20000;
        ace_cargo_space = 16;
        ace_vehicles_engineStartDelay = 3;
        acre_hasInfantryPhone = 0;
        canFloat = 1;
        weapons[] = {"SmokeLauncher"};
        magazines[] = {"SmokeLauncherMag"};
        smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 160;

        class TransportItems
        {
            class _xx_kat_accuvac 
            {
                name = "kat_accuvac";
                count = 1;
            };
            class _xx_ACE_NVG_Gen4_black 
            {
                name = "ACE_NVG_Gen4_black";
                count = 8;
            };
            class _xx_ToolKit
            {
                name = "ToolKit";
                count = 2;
            };
            class _xx_ACE_bloodIV_500
            {
                name = "ACE_bloodIV_500";
                count = 8;
            };
            class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 8;
            };
            class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 40;
            };
            class _xx_ACE_packingBandage
            {
                name = "ACE_packingBandage";
                count = 10;
            };
            class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 10;
            };
            class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 6;
            };
            class _xx_ACE_tourniquet 
            {
                name = "ACE_tourniquet";
                count = 6;
            };
            class _xx_ACE_rope6
            {
                name = "ACE_rope6";
                count = 4;
            };
            class _xx_ACE_Canteen
            {
                name = "ACE_Canteen";
                count = 5;
            };
            class _xx_ACE_Can_Franta
            {
                name = "ACE_Can_Franta";
                count = 10;
            };
            class _xx_ACE_MRE_BeefStew 
            {
                name = "ACE_MRE_BeefStew";
                count = 5;
            };

        };
        class TransportWeapons
        {
            class _xx_hlc_wp_SCARL_CQC_Blk 
            {
                weapon = "hlc_wp_SCARL_CQC_Blk";
                count = 2;
            };
            class _xx_rhs_weap_m72a7
            {
                weapon = "rhs_weap_m72a7";
                count = 2;
            };
        };
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Intercom";
                shortName = "Intercom";
                allowedPositions[] = {"driver", "commander", "gunner"};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                masterPositions[] = {"driver"};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"driver", "commander", "gunner"};
                componentName = "ACRE_VRC110";
                displayName = "Dash";
                mountedRadio = "ACRE_PRC152";
                shortName = "Dash";
            };
        };
        class ace_cargo {       
            class Cargo {
                class ACE_Wheel {
                    type = "ACE_Wheel";
                    amount = 4;
                };
            }; 
        };
    };

    class raider_huey_transport: UK3CB_I_G_UH1H_M240_FIA 
    {
        displayName = "Huey Transport [4/8]";
        editorCategory = "Raider_Tactical";
        editorSubcategory = "Helicopters";
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
        weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
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

        class TransportItems
        {
            class _xx_kat_accuvac 
            {
                name = "kat_accuvac";
                count = 1;
            };
            class _xx_ACE_NVG_Gen4_black 
            {
                name = "ACE_NVG_Gen4_black";
                count = 8;
            };
            class _xx_ToolKit
            {
                name = "ToolKit";
                count = 2;
            };
            class _xx_ACE_bloodIV_500
            {
                name = "ACE_bloodIV_500";
                count = 8;
            };
            class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 8;
            };
            class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 40;
            };
            class _xx_ACE_packingBandage
            {
                name = "ACE_packingBandage";
                count = 10;
            };
            class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 10;
            };
            class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 6;
            };
            class _xx_ACE_tourniquet 
            {
                name = "ACE_tourniquet";
                count = 6;
            };
            class _xx_ACE_rope6
            {
                name = "ACE_rope6";
                count = 4;
            };
            class _xx_ACE_Canteen
            {
                name = "ACE_Canteen";
                count = 5;
            };
            class _xx_ACE_Can_Franta
            {
                name = "ACE_Can_Franta";
                count = 10;
            };
            class _xx_ACE_MRE_BeefStew 
            {
                name = "ACE_MRE_BeefStew";
                count = 5;
            };

        };
        class TransportWeapons
        {
            class _xx_hlc_wp_SCARL_CQC_Blk 
            {
                weapon = "hlc_wp_SCARL_CQC_Blk";
                count = 2;
            };
            class _xx_rhs_weap_m72a7
            {
                weapon = "rhs_weap_m72a7";
                count = 2;
            };
        };
        class AcreIntercoms {
            class Intercom_1 { 
                displayName = "Crew Intercom"; 
                shortName = "Crew"; 
                allowedPositions[] = {"driver", "commander", {"turret", "all"}}; 
                limitedPositions[] = {}; 
                numLimitedPositions = 0; 
                masterPositions[] = {"driver"}; 
                connectedByDefault = 1; 
            }; 
        }; 
        class AcreRacks { 
            class Rack_1 { 
                allowedPositions[] = {"driver", "commander", {"turret", "all"}}; 
                componentName = "ACRE_VRC110"; 
                displayName = "Dash"; 
                mountedRadio = "ACRE_PRC152"; 
                shortName = "Dash"; 
            }; 
        }; 
    };

    class raider_huey_armed: UK3CB_I_G_UH1H_GUNSHIP_FIA 
    {
        displayName = "Huey Gunship [4/8]";
        editorCategory = "Raider_Tactical";
        editorSubcategory = "Helicopters";
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
        weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
        class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_melb\data\loadouts\RHS_AH6M_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON_HELI","UNI_SCALPEL","20MM_TWIN_CANNON","LK_MISSILE_X4"};
                        maxweight = 1200;
                        UIposition[] = {0.06,0.4};
					};
					class pylon2: pylon1
					{
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON_HELI","UNI_SCALPEL","20MM_TWIN_CANNON","LK_MISSILE_X4"};
                        maxweight = 1200;
                        UIposition[] = {0.08,0.35};
					};
                };
            };
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

        class TransportItems
        {
            class _xx_kat_accuvac 
            {
                name = "kat_accuvac";
                count = 1;
            };
            class _xx_ACE_NVG_Gen4_black 
            {
                name = "ACE_NVG_Gen4_black";
                count = 8;
            };
            class _xx_ToolKit
            {
                name = "ToolKit";
                count = 2;
            };
            class _xx_ACE_bloodIV_500
            {
                name = "ACE_bloodIV_500";
                count = 8;
            };
            class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 8;
            };
            class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 40;
            };
            class _xx_ACE_packingBandage
            {
                name = "ACE_packingBandage";
                count = 10;
            };
            class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 10;
            };
            class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 6;
            };
            class _xx_ACE_tourniquet 
            {
                name = "ACE_tourniquet";
                count = 6;
            };
            class _xx_ACE_rope6
            {
                name = "ACE_rope6";
                count = 4;
            };
            class _xx_ACE_Canteen
            {
                name = "ACE_Canteen";
                count = 5;
            };
            class _xx_ACE_Can_Franta
            {
                name = "ACE_Can_Franta";
                count = 10;
            };
            class _xx_ACE_MRE_BeefStew 
            {
                name = "ACE_MRE_BeefStew";
                count = 5;
            };

        };
        class TransportWeapons
        {
            class _xx_hlc_wp_SCARL_CQC_Blk 
            {
                weapon = "hlc_wp_SCARL_CQC_Blk";
                count = 2;
            };
            class _xx_rhs_weap_m72a7
            {
                weapon = "rhs_weap_m72a7";
                count = 2;
            };
        };
        class AcreIntercoms { 
            class Intercom_1 { 
                displayName = "Crew Intercom"; 
                shortName = "Crew"; 
                allowedPositions[] = {"driver", "commander", {"turret", "all"}}; 
                limitedPositions[] = {}; 
                numLimitedPositions = 0; 
                masterPositions[] = {"driver"}; 
                connectedByDefault = 1; 
            }; 
        }; 
        class AcreRacks { 
            class Rack_1 { 
                allowedPositions[] = {"driver", "commander", {"turret", "all"}}; 
                componentName = "ACRE_VRC110"; 
                displayName = "Dash"; 
                mountedRadio = "ACRE_PRC152"; 
                shortName = "Dash"; 
            }; 
        }; 
    };
};