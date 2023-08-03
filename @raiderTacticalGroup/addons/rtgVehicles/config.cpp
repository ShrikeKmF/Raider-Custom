#define TRANSPORT_MAGAZINE(id,qty) class _xx_##id { magazine = #id; count = qty; };
#define TRANSPORT_ITEM(id,qty) class _xx_##id { name = #id; count = qty; };
#define TRANSPORT_WEAPON(id,qty) class _xx_##id { weapon = #id; count = qty; };
#define TRANSPORT_BACKPACK(id,qty) class _xx_##id { backpack = #id; count = qty; };

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
};

class cfgEditorCategories {
    class Raider_Tactical
    {
        displayName = "Raider Tactical";
    };
};

class cfgEditorSubcategories {
    class Cars
    {
        displayName = "Cars";
    };

    class Helicopters
    {
        displayName = "Helicopters";
    };

    class Artillery
    {
        displayName = "Artillery";
    };
};

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
    class RHS_M119_D;

    class rtg_artillery : RHS_M119_D
    {
        displayName = "M119A3 [1/2]";
        editorCategory = "Raider_Tactical"; 
        editorSubcategory = "Artillery";
        author = "Shrike";
        scope = 2;
        side = 1;
        faction = "Raider_Tactical_F";
    }

    class raider_strike_car: I_MRAP_03_F
    {
        displayName = "Hawkei Transport [1/4]";
        editorCategory = "Raider_Tactical";
        simulation="CarX";
        editorSubcategory = "Cars";
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
        armorGlass = 250;
        armorFuel = 20;
        armorStructural = 400;
        armorLights = 0.5;

        damageResistance = 0.00719;
		crewVulnerable = 0;
		crewCrashProtection = 0.15;
		crewExplosionProtection = 0.9999;
		threat[] = {0.8,0.6,0.3};

        maxSpeed = 125;
        maximumLoad = 20000;
        ace_cargo_space = 16;
        ace_vehicles_engineStartDelay = 3;
        acre_hasInfantryPhone = 0;
        canFloat = 1;
        waterSpeedFactor = 1;
        waterResistanceCoef = 0.11;
        weapons[] = {"SmokeLauncher", "TruckHorn"};
        magazines[] = {"SmokeLauncherMag"};
        smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 30;

        // Water Source
        acex_field_rations_waterSupply = 50;
        // Extra Fuel (Jerry Cans on Vehicles)
        ace_refuel_fuelCargo = 80;

        textureList[] = 
		{
			"rtg", 1.0,
		};

        class textureSources
        {
            // This texture source will be available for every defined factions
            class rtg_blk
            {
                // Display name of the texture
                displayName = "Black";
                // Author of the texture
                author = "Shrike";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = 
                {
                    "rtgVehicles\tex\hawkei\rtg_hawkei.paa"
                };
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
                author = "Shrike";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = 
                {
                    "rtgVehicles\tex\hawkei\rtg_hawkei_tan.paa"
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_ucp
            {
                // Display name of the texture
                displayName = "UCP";
                // Author of the texture
                author = "Shrike";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = 
                {
                    "rtgVehicles\tex\hawkei\rtg_hawkei_ucp.paa"
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            }
            class rtg_alpine
            {
                // Display name of the texture
                displayName = "Alpine";
                // Author of the texture
                author = "Shrike";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = 
                {
                    "rtgVehicles\tex\hawkei\rtg_hawkei_alpine.paa"
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_dazzle
            {
                // Display name of the texture
                displayName = "Dazzle";
                // Author of the texture
                author = "Shrike";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = 
                {
                    "rtgVehicles\tex\hawkei\rtg_hawkei_dazzle.paa"
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
        };

        // Vehicle Inventorys
        class TransportItems
        {
            TRANSPORT_ITEM(ACE_NVG_Gen4_black, 8)
            TRANSPORT_ITEM(ToolKit, 2)
            TRANSPORT_ITEM(ACRE_PRC343, 2)
            TRANSPORT_ITEM(ACRE_PRC152, 2)
            TRANSPORT_ITEM(ACE_personalAidKit, 8)
            TRANSPORT_ITEM(ACE_wirecutter, 1)
            TRANSPORT_ITEM(ACE_rope12, 4)
            TRANSPORT_ITEM(ACE_Canteen, 5)
            TRANSPORT_ITEM(ACE_Can_Franta, 9)
            TRANSPORT_ITEM(ACE_MRE_BeefStew, 5)
            TRANSPORT_ITEM(ACE_bodyBag, 9)
        };
        class TransportBackpacks
        {
            TRANSPORT_BACKPACK(rtg_medical_grabpack, 2)
        };
        class TransportWeapons
        {
            TRANSPORT_WEAPON(rhs_weap_m16a4_carryhandle, 2)
            TRANSPORT_WEAPON(rhs_weap_m72a7, 2)
        };
        class TransportMagazines 
        {
            TRANSPORT_MAGAZINE(rtg_30rnd_556_45, 10)
            TRANSPORT_MAGAZINE(rtg_200Rnd_762x51, 5)
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
                componentName = "ACRE_PRC152";
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
        editorSubcategory = "Cars";
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
        waterSpeedFactor = 1;
        waterResistanceCoef = 0.11;
        weapons[] = {"SmokeLauncher"};
        magazines[] = {"SmokeLauncherMag"};
        smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 160;

        // Water Source
        acex_field_rations_waterSupply = 50;
        // Extra Fuel (Jerry Cans on Vehicles)
        ace_refuel_fuelCargo = 80;

        textureList[] = 
		{
			"rtg", 1.0,
		};

        class textureSources
        {
            class rtg_alpine1
            {
                // Display name of the texture
                displayName = "Alpine (Sabre)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_AE_S.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_alpine2
            {
                // Display name of the texture
                displayName = "Alpine (Ares)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_AE_A.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_alpine3
            {
                // Display name of the texture
                displayName = "Alpine (Cypher)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_AE_C.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_black1
            {
                // Display name of the texture
                displayName = "Black (Sabre)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_S.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_black2
            {
                // Display name of the texture
                displayName = "Black (Ares)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_A.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_black3
            {
                // Display name of the texture
                displayName = "Black (Cypher)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_C.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_tan1
            {
                // Display name of the texture
                displayName = "Tan (Sabre)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_TN_S.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_tan2
            {
                // Display name of the texture
                displayName = "Tan (Ares)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_TN_A.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_tan3
            {
                // Display name of the texture
                displayName = "Tan (Cypher)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_TN_C.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_dazzle1
            {
                // Display name of the texture
                displayName = "Dazzle (Sabre)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_DE_S.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_dazzle2
            {
                // Display name of the texture
                displayName = "Dazzle (Ares)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_DE_A.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_dazzle3
            {
                // Display name of the texture
                displayName = "Dazzle (Cypher)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_DE_C.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_ucp1
            {
                // Display name of the texture
                displayName = "UCP (Sabre)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_UCP_S.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_ucp2
            {
                // Display name of the texture
                displayName = "UCP (Ares)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_UCP_A.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_ucp3
            {
                // Display name of the texture
                displayName = "UCP (Cypher)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_UCP_C.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
        };

        // Vehicle Inventorys
        class TransportItems
        {
            TRANSPORT_ITEM(ACE_NVG_Gen4_black, 8)
            TRANSPORT_ITEM(ToolKit, 2)
            TRANSPORT_ITEM(ACRE_PRC343, 2)
            TRANSPORT_ITEM(ACRE_PRC152, 2)
            TRANSPORT_ITEM(ACE_personalAidKit, 8)
            TRANSPORT_ITEM(ACE_wirecutter, 1)
            TRANSPORT_ITEM(ACE_rope12, 4)
            TRANSPORT_ITEM(ACE_Canteen, 5)
            TRANSPORT_ITEM(ACE_Can_Franta, 9)
            TRANSPORT_ITEM(ACE_MRE_BeefStew, 5)
            TRANSPORT_ITEM(ACE_bodyBag, 9)
        };
        class TransportBackpacks
        {
            TRANSPORT_BACKPACK(rtg_medical_grabpack, 2)
        };
        class TransportWeapons
        {
            TRANSPORT_WEAPON(rhs_weap_m16a4_carryhandle, 2)
            TRANSPORT_WEAPON(rhs_weap_m72a7, 2)
        };
        class TransportMagazines 
        {
            TRANSPORT_MAGAZINE(rtg_30rnd_556_45, 10)
            TRANSPORT_MAGAZINE(rtg_200Rnd_762x51, 5)
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
                componentName = "ACRE_PRC152";
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
        editorSubcategory = "Cars";
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
        waterSpeedFactor = 1;
        waterResistanceCoef = 0.11;
        weapons[] = {"SmokeLauncher"};
        magazines[] = {"SmokeLauncherMag"};
        smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 160;

        // Water Source
        acex_field_rations_waterSupply = 50;
        // Extra Fuel (Jerry Cans on Vehicles)
        ace_refuel_fuelCargo = 80;

        // Vehicle Inventorys
        class TransportItems
        {
            TRANSPORT_ITEM(ACE_NVG_Gen4_black, 8)
            TRANSPORT_ITEM(ToolKit, 2)
            TRANSPORT_ITEM(ACRE_PRC343, 2)
            TRANSPORT_ITEM(ACRE_PRC152, 2)
            TRANSPORT_ITEM(ACE_personalAidKit, 8)
            TRANSPORT_ITEM(ACE_wirecutter, 1)
            TRANSPORT_ITEM(ACE_rope12, 4)
            TRANSPORT_ITEM(ACE_Canteen, 5)
            TRANSPORT_ITEM(ACE_Can_Franta, 9)
            TRANSPORT_ITEM(ACE_MRE_BeefStew, 5)
            TRANSPORT_ITEM(ACE_bodyBag, 9)
        };
        class TransportBackpacks
        {
            TRANSPORT_BACKPACK(rtg_medical_grabpack, 2)
        };
        class TransportWeapons
        {
            TRANSPORT_WEAPON(rhs_weap_m16a4_carryhandle, 2)
            TRANSPORT_WEAPON(rhs_weap_m72a7, 2)
        };
        class TransportMagazines 
        {
            TRANSPORT_MAGAZINE(rtg_30rnd_556_45, 10)
            TRANSPORT_MAGAZINE(rtg_200Rnd_762x51, 5)
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
                componentName = "ACRE_PRC152";
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
        class textureSources
        {
            class rtg_alpine1
            {
                // Display name of the texture
                displayName = "Alpine (Sabre)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_AE_S.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_alpine2
            {
                // Display name of the texture
                displayName = "Alpine (Ares)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_AE_A.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_alpine3
            {
                // Display name of the texture
                displayName = "Alpine (Cypher)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_AE_C.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_black1
            {
                // Display name of the texture
                displayName = "Black (Sabre)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_S.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_black2
            {
                // Display name of the texture
                displayName = "Black (Ares)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_A.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_black3
            {
                // Display name of the texture
                displayName = "Black (Cypher)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_C.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_tan1
            {
                // Display name of the texture
                displayName = "Tan (Sabre)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_TN_S.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_tan2
            {
                // Display name of the texture
                displayName = "Tan (Ares)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_TN_A.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_tan3
            {
                // Display name of the texture
                displayName = "Tan (Cypher)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_TN_C.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_dazzle1
            {
                // Display name of the texture
                displayName = "Dazzle (Sabre)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_DE_S.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_dazzle2
            {
                // Display name of the texture
                displayName = "Dazzle (Ares)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_DE_A.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_dazzle3
            {
                // Display name of the texture
                displayName = "Dazzle (Cypher)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_DE_C.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_ucp1
            {
                // Display name of the texture
                displayName = "UCP (Sabre)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_UCP_S.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_ucp2
            {
                // Display name of the texture
                displayName = "UCP (Ares)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_UCP_A.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_ucp3
            {
                // Display name of the texture
                displayName = "UCP (Cypher)";
                // Author of the texture
                author = "Fish";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = {
                    "rtgVehicles\tex\bushmaster\bm2_UCP_C.paa",
                    "",
					"",
					""
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
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
        armor = 80;
        weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};

        // Fast Ropping
        ace_fastroping_enabled = 1;

        // Water Source
        acex_field_rations_waterSupply = 50;
        // Extra Fuel (Jerry Cans on Vehicles)
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

        class textureSources
        {
            // This texture source will be available for every defined factions
            class rtg_huey1
            {
                // Display name of the texture
                displayName = "Damper 1";
                // Author of the texture
                author = "shrike";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = 
                {
                    "rtgVehicles\tex\huey\rtg_huey.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_black_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_huey2
            {
                // Display name of the texture
                displayName = "Damper 2";
                // Author of the texture
                author = "shrike";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = 
                {
                    "rtgVehicles\tex\huey\rtg_huey2.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_black_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_huey3
            {
                // Display name of the texture
                displayName = "Damper 3";
                // Author of the texture
                author = "shrike";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = 
                {
                    "rtgVehicles\tex\huey\rtg_huey3.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_black_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
        };

        // Vehicle Inventorys
        class TransportItems
        {
            TRANSPORT_ITEM(ACE_NVG_Gen4_black, 8)
            TRANSPORT_ITEM(ToolKit, 2)
            TRANSPORT_ITEM(ACRE_PRC343, 2)
            TRANSPORT_ITEM(ACRE_PRC152, 2)
            TRANSPORT_ITEM(ACE_personalAidKit, 8)
            TRANSPORT_ITEM(ACE_wirecutter, 1)
            TRANSPORT_ITEM(ACE_rope12, 4)
            TRANSPORT_ITEM(ACE_Canteen, 5)
            TRANSPORT_ITEM(ACE_Can_Franta, 9)
            TRANSPORT_ITEM(ACE_MRE_BeefStew, 5)
            TRANSPORT_ITEM(ACE_bodyBag, 9)
        };
        class TransportBackpacks
        {
            TRANSPORT_BACKPACK(rtg_medical_grabpack, 2)
        };
        class TransportWeapons
        {
            TRANSPORT_WEAPON(rhs_weap_m16a4_carryhandle, 2)
            TRANSPORT_WEAPON(rhs_weap_m72a7, 2)
        };
        class TransportMagazines 
        {
            TRANSPORT_MAGAZINE(rtg_30rnd_556_45, 10)
            TRANSPORT_MAGAZINE(rtg_200Rnd_762x51, 5)
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
                componentName = "ACRE_PRC152"; 
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
        armor = 80;
        weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};

        // Fast Ropping
        ace_fastroping_enabled = 1;

        // Water Source
        acex_field_rations_waterSupply = 50;
        // Extra Fuel (Jerry Cans on Vehicles)
        ace_refuel_fuelCargo = 80;

        class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_melb\data\loadouts\RHS_AH6M_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON_HELI","UNI_SCALPEL","20MM_TWIN_CANNON","LK_MISSILE_X4","RHS_HP_MELB", "RHS_HP_MELB_L"};
                        maxweight = 2200;
                        UIposition[] = {0.06,0.4};
					};
					class pylon2: pylon1
					{
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON_HELI","UNI_SCALPEL","20MM_TWIN_CANNON","LK_MISSILE_X4","RHS_HP_MELB", "RHS_HP_MELB_R"};
                        maxweight = 2200;
                        UIposition[] = {0.48,0.4};
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
        
        class textureSources
        {
            // This texture source will be available for every defined factions
            class rtg_huey1
            {
                // Display name of the texture
                displayName = "Damper 1";
                // Author of the texture
                author = "shrike";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = 
                {
                    "rtgVehicles\tex\huey\rtg_huey.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_black_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_huey2
            {
                // Display name of the texture
                displayName = "Damper 2";
                // Author of the texture
                author = "shrike";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = 
                {
                    "rtgVehicles\tex\huey\rtg_huey2.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_black_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
            class rtg_huey3
            {
                // Display name of the texture
                displayName = "Damper 3";
                // Author of the texture
                author = "shrike";
                // Paths to the texture files, in the same order as the hidden selections
                textures[] = 
                {
                    "rtgVehicles\tex\huey\rtg_huey3.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_black_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
                // This source should be available for the following factions
                factions[] =
                {
                    "Raider_Tactical_F"
                };
            };
        };

        // Vehicle Inventorys
        class TransportItems
        {
            TRANSPORT_ITEM(ACE_NVG_Gen4_black, 8)
            TRANSPORT_ITEM(ToolKit, 2)
            TRANSPORT_ITEM(ACRE_PRC343, 2)
            TRANSPORT_ITEM(ACRE_PRC152, 2)
            TRANSPORT_ITEM(ACE_personalAidKit, 8)
            TRANSPORT_ITEM(ACE_wirecutter, 1)
            TRANSPORT_ITEM(ACE_rope12, 4)
            TRANSPORT_ITEM(ACE_Canteen, 5)
            TRANSPORT_ITEM(ACE_Can_Franta, 9)
            TRANSPORT_ITEM(ACE_MRE_BeefStew, 5)
            TRANSPORT_ITEM(ACE_bodyBag, 9)
        };
        class TransportBackpacks
        {
            TRANSPORT_BACKPACK(rtg_medical_grabpack, 2)
        };
        class TransportWeapons
        {
            TRANSPORT_WEAPON(rhs_weap_m16a4_carryhandle, 2)
            TRANSPORT_WEAPON(rhs_weap_m72a7, 2)
        };
        class TransportMagazines 
        {
            TRANSPORT_MAGAZINE(rtg_30rnd_556_45, 10)
            TRANSPORT_MAGAZINE(rtg_200Rnd_762x51, 5)
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
                componentName = "ACRE_PRC152"; 
                displayName = "Dash"; 
                mountedRadio = "ACRE_PRC152"; 
                shortName = "Dash"; 
            }; 
        }; 
    };
};