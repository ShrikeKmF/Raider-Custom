#define TRANSPORT_MAGAZINE(id,qty) class _xx_##id { magazine = #id; count = qty; };
#define TRANSPORT_ITEM(id,qty) class _xx_##id { name = #id; count = qty; };
#define TRANSPORT_WEAPON(id,qty) class _xx_##id { weapon = #id; count = qty; };
#define TRANSPORT_BACKPACK(id,qty) class _xx_##id { backpack = #id; count = qty; };

class CfgPatches 
{
    class rtgVehicles 
    {
        name = "rtgVehicles";
        version = "1";
        author = "Shrike";
        url="";
        requiredAddons[] = {"a3_characters_F","a3_characters_F_beta","A3_Characters_F_Common","a3_characters_f_beta","a3_characters_f_gamma","A3_Soft_F_epc","bma3_bushmaster", "uk3cb_factions_fia", "rhsusf_c_weapons"};
        units[] = {"rtg_artillery", "raider_strike_car", "raider_bushmaster_unarmed", "raider_bushmaster_armed", "rtg_loaf", "rtg_damper", "rtg_heavyLift_Cargo", "rtg_heavyLift_Transport", "rtg_cargoTransport", "raider_huey_transport", "raider_huey_armed", "rtg_rhic", "rtg_BasicSupply", "rtg_atSupply", "rtg_medicalSupply"};
    };
};

class cfgFactionClasses {
    class Raider_Tactical_F
    {
        displayName = "[RTG] Vehicles";
        priority = 0;
        side = 1;
        scope = 2;
    };
};

class cfgEditorCategories {
    class Raider_Tactical
    {
        displayName = "[RTG] Objects";
        scope = 2;
    };
};

class cfgEditorSubcategories {
    class RTGCars
    {
        displayName = "Cars";
        scope = 2;
    };

    class RTGBoats
    {
        displayName = "Boats";
        scope = 2;
    };

    class RTGHelicopters
    {
        displayName = "Helicopters";
        scope = 2;
    };

    class RTGArtillery
    {
        displayName = "Artillery";
        scope = 2;
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
    class Turrets;
    class CargoTurret;

 // Artillery
    class rtg_artillery : RHS_M119_D
    {
        displayName = "M119A3 [1/2]";
        editorSubcategory = "RTGArtillery";
        author = "Shrike";
        scope = 2;
        side = 1;
        faction = "Raider_Tactical_F";
    };

// Ground Vics
    class raider_strike_car: I_MRAP_03_F
    {
        displayName = "Hawkei Transport [1/3]";
        editorSubcategory = "RTGCars";
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
			"rtg_blk", 1.0,
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
            TRANSPORT_ITEM(rtg_pvs_15_black_gh, 8)
            TRANSPORT_ITEM(ACRE_PRC343, 2)
            TRANSPORT_ITEM(ACRE_PRC152, 2)
            TRANSPORT_ITEM(ACE_personalAidKit, 8)
            TRANSPORT_ITEM(ACE_Canteen, 5)
            TRANSPORT_ITEM(ACE_Can_Franta, 9)
            TRANSPORT_ITEM(ACE_MRE_BeefStew, 5)
            TRANSPORT_ITEM(ACE_bodyBag, 9)
        };
        class TransportBackpacks
        {
            TRANSPORT_BACKPACK(rtg_medical_grabpack, 1)
            TRANSPORT_BACKPACK(rtg_engineer_grabpack, 1)
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
        editorSubcategory = "RTGCars";
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
        weapons[] = {"SmokeLauncher", "TruckHorn"};
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
                displayName = "Alpine (Demon)";
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
                displayName = "Black (Demon)";
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
                displayName = "Tan (Demon)";
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
                displayName = "Dazzle (Demon)";
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
                displayName = "UCP (Demon)";
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
            TRANSPORT_ITEM(rtg_pvs_15_black_gh, 8)
            TRANSPORT_ITEM(ACRE_PRC343, 2)
            TRANSPORT_ITEM(ACRE_PRC152, 2)
            TRANSPORT_ITEM(ACE_personalAidKit, 8)
            TRANSPORT_ITEM(ACE_Canteen, 5)
            TRANSPORT_ITEM(ACE_Can_Franta, 9)
            TRANSPORT_ITEM(ACE_MRE_BeefStew, 5)
            TRANSPORT_ITEM(ACE_bodyBag, 9)
        };
        class TransportBackpacks
        {
            TRANSPORT_BACKPACK(rtg_medical_grabpack, 1)
            TRANSPORT_BACKPACK(rtg_engineer_grabpack, 1)
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
        editorSubcategory = "RTGCars";
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
            TRANSPORT_ITEM(rtg_pvs_15_black_gh, 8)
            TRANSPORT_ITEM(ACRE_PRC343, 2)
            TRANSPORT_ITEM(ACRE_PRC152, 2)
            TRANSPORT_ITEM(ACE_personalAidKit, 8)
            TRANSPORT_ITEM(ACE_Canteen, 5)
            TRANSPORT_ITEM(ACE_Can_Franta, 9)
            TRANSPORT_ITEM(ACE_MRE_BeefStew, 5)
            TRANSPORT_ITEM(ACE_bodyBag, 9)
        };
        class TransportBackpacks
        {
            TRANSPORT_BACKPACK(rtg_medical_grabpack, 1)
            TRANSPORT_BACKPACK(rtg_engineer_grabpack, 1)
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
                displayName = "Alpine (Demon)";
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
                displayName = "Black (Demon)";
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
                displayName = "Tan (Demon)";
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
                displayName = "Dazzle (Demon)";
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
                displayName = "UCP (Demon)";
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

// Helicopters
    class ej_UH92_NATO;
    class MainTurret;
    class rtg_loaf : ej_UH92_NATO
    {
        displayName = "Loaf (4/12)";
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

        // Fast Ropping
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {"ropeOriginLeft","ropeOriginRight"};

        // Water Source
        acex_field_rations_waterSupply = 50;
        // Extra Fuel (Jerry Cans on Vehicles)
        ace_refuel_fuelCargo = 80;

        class Turrets: Turrets
		{
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev = -60;
				maxElev = 18;
				initElev = -45;
				minTurn = -160;
				maxTurn = 5;
				initTurn = -90;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				weapons[]=
				{
					"rhs_weap_m134_minigun_1"
				};
				magazines[]=
				{
					"rhs_mag_762x51_m80a1_4000"
				};
				gunnerName = "Right M134 Gunner";
				memoryPointGun = "machinegun_1";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				primaryGunner = 0;
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				hasGunner = 1;
				hasCrew = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -60;
				maxElev = 18;
				initElev = -30;
				minTurn = -5;
				maxTurn = 160;
				initTurn = 90;
				soundServo[] = {"",0.01,1};
				animationSourceHatch = "";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex = 5;
				weapons[]=
				{
					"rhs_weap_m134_minigun_1"
				};
				magazines[]=
				{
					"rhs_mag_762x51_m80a1_4000"
				};
				gunnerName = "Left M134 Gunner";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\uh-60\Misc\optika_empty";
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				commanding = -2;
				primaryGunner = 0;
				gunnerCompartments = "Compartment2";
			};
			class CoPilotObs: MainTurret
			{
				ace_laser_selfdesignate_Enabled = 1;
				isCopilot = 1;
				body = "ObsTurret";
				gun = "ObsGun";
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Light_03_Enter";
				memoryPointsGetInGunner = "pos copilot";
				memoryPointsGetInGunnerDir = "pos copilot dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				minElev = -80;
				maxElev = 25;
				initElev = 0;
				minTurn = -190;
				maxTurn = 190;
				initTurn = 180;
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				memoryPointGunnerOptics = "commanderview";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				showHMD = 1;
				CanEject = 1;
				startEngine = 0;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				gunnerCompartments = "Compartment2";
				commanding = -1;
				primaryGunner = 1;
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {"TankCommanderOptics1"};
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor = 1;
				turretInfoType = "Rsc_HMDs_Kimi_Helo_UI_Turret";
				showAllTargets = 2;
				copilotHasFlares = 1;
				weapons[] = {"ej_master_arms_safe","Laserdesignator_mounted","EricJ_CMFlareLauncherDAP"};
				magazines[] = {"Laserbatteries","168Rnd_CMFlare_Chaff_Magazine"};
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "Co-Pilot";
				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						directionStabilized = 0;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 10;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
						gunnerOpticsEffect[] = {"TankCommanderOptics1"};
					};
					class WideL: Wide
					{
						opticsDisplayName = "WL";
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
						gunnerOpticsColor[] = {0,0,0,1};
						directionStabilized = 1;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						directionStabilized = 1;
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.02;
						minFov = 0.02;
						maxFov = 0.02;
					};
					class Narrower: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {0,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						initFov = 0.01;
						minFov = 0.01;
						maxFov = 0.01;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 40;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.4;
					minFov = 0.3;
					maxFov = 1;
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos side";
				memoryPointsGetInGunnerDir = "pos side dir";
				gunnerName = "Left Side FFV Position";
				proxyIndex = 11;
				maxElev = 15;
				minElev = -80;
				maxTurn = 0;
				minTurn = -75;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "LDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos side 4";
				memoryPointsGetInGunnerDir = "pos side dir 4";
				gunnerName = "Left Side FFV Position 2";
				proxyIndex = 12;
				maxElev = 10;
				minElev = -80;
				maxTurn = 65;
				minTurn = 0;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "LDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos side 2";
				memoryPointsGetInGunnerDir = "pos side dir 2";
				gunnerName = "Right Side FFV Position";
				proxyIndex = 10;
				maxElev = 15;
				minElev = -80;
				maxTurn = 75;
				minTurn = -1;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "RDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_04: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos side 3";
				memoryPointsGetInGunnerDir = "pos side dir 3";
				gunnerName = "Right Side FFV Position 2";
				proxyIndex = 9;
				maxElev = 15;
				minElev = -80;
				maxTurn = 0;
				minTurn = -54;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "RDoor";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
		};

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

    class ej_AH96_NATO;
    class rtg_damper : ej_AH96_NATO
    {
        displayName = "Damper (2/0)";
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

        bodyFrictionCoef = 0.7;
        liftForceCoef = 1.1;
        minMainRotorDive = -12;
        maxMainRotorDive = 16;

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
				uiPicture = "\UH-60\Data\UI\Heli_attack_AH_96.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonRack_12Rnd_PG_missiles";
						priority = 5;
						bay = 1;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL","DAR","DAGR", "RHS_weap_m134_pylon"};
						turret[] = {0};
						maxweight = 800;
						UIposition[] = {0.06,0.4};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = "PylonRack_12Rnd_PG_missiles";
						priority = 4;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL","DAR","DAGR", "RHS_weap_m134_pylon"};
						maxweight = 800;
						UIposition[] = {0.08,0.35};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment = "PylonRack_12Rnd_PG_missiles";
						priority = 3;
						hardpoints[] = {"B_MISSILE_PYLON","UNI_SCALPEL","DAR","DAGR", "RHS_weap_m134_pylon"};
						maxweight = 800;
						UIposition[] = {0.1,0.3};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos = 3;
						UIposition[] = {0.55,0.3};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.57,0.35};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.59,0.4};
					};
				};
			};
        };
    };

    class FP_GLD_Taru_S0;
    class rtg_heavyLift_Cargo : FP_GLD_Taru_S0
    {
        displayName = "Crumpet Cargo [3/0]";
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
        // Vehicle Inventorys
        class TransportItems
        {
            TRANSPORT_ITEM(rtg_pvs_15_black_gh, 8)
            TRANSPORT_ITEM(ACRE_PRC343, 2)
            TRANSPORT_ITEM(ACRE_PRC152, 2)
            TRANSPORT_ITEM(ACE_personalAidKit, 8)
            TRANSPORT_ITEM(ACE_Canteen, 5)
            TRANSPORT_ITEM(ACE_Can_Franta, 9)
            TRANSPORT_ITEM(ACE_MRE_BeefStew, 5)
            TRANSPORT_ITEM(ACE_bodyBag, 9)
        };
        class TransportBackpacks
        {
            TRANSPORT_BACKPACK(rtg_medical_grabpack, 1)
            TRANSPORT_BACKPACK(rtg_engineer_grabpack, 1)
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
    };

    class FP_GLD_TaruTransport_S0;
    class rtg_heavyLift_Transport : FP_GLD_TaruTransport_S0
    {
        displayName = "Crumpet Transport [3/16]";
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

        // Vehicle Inventorys
        class TransportItems
        {
            TRANSPORT_ITEM(rtg_pvs_15_black_gh, 8)
            TRANSPORT_ITEM(ACRE_PRC343, 2)
            TRANSPORT_ITEM(ACRE_PRC152, 2)
            TRANSPORT_ITEM(ACE_personalAidKit, 8)
            TRANSPORT_ITEM(ACE_Canteen, 5)
            TRANSPORT_ITEM(ACE_Can_Franta, 9)
            TRANSPORT_ITEM(ACE_MRE_BeefStew, 5)
            TRANSPORT_ITEM(ACE_bodyBag, 9)
        };
        class TransportBackpacks
        {
            TRANSPORT_BACKPACK(rtg_medical_grabpack, 1)
            TRANSPORT_BACKPACK(rtg_engineer_grabpack, 1)
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

    class ej_MQ17C;
    class rtg_cargoTransport : ej_MQ17C
    {
        displayName = "Mohawk (Cargo/Drone)";
        editorSubcategory = "RTGHelicopters";
        side = 1;
        author = "Shrike";
        scope = 2;
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
    };

    class raider_huey_transport: UK3CB_I_G_UH1H_M240_FIA 
    {
        displayName = "Huey Transport [4/8]";
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

        // Vehicle Inventorys
        class TransportItems
        {
            TRANSPORT_ITEM(rtg_pvs_15_black_gh, 8)
            TRANSPORT_ITEM(ACRE_PRC343, 2)
            TRANSPORT_ITEM(ACRE_PRC152, 2)
            TRANSPORT_ITEM(ACE_personalAidKit, 8)
            TRANSPORT_ITEM(ACE_Canteen, 5)
            TRANSPORT_ITEM(ACE_Can_Franta, 9)
            TRANSPORT_ITEM(ACE_MRE_BeefStew, 5)
            TRANSPORT_ITEM(ACE_bodyBag, 9)
        };
        class TransportBackpacks
        {
            TRANSPORT_BACKPACK(rtg_medical_grabpack, 1)
            TRANSPORT_BACKPACK(rtg_engineer_grabpack, 1)
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

        // Fast Ropping
        ace_fastroping_enabled = 1;

        // Extra Fuel (Jerry Cans on Vehicles)
        ace_refuel_fuelCargo = 80;
        
        class Components : Components {
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

        // Vehicle Inventorys
        class TransportItems
        {
            TRANSPORT_ITEM(rtg_pvs_15_black_gh, 8)
            TRANSPORT_ITEM(ACRE_PRC343, 2)
            TRANSPORT_ITEM(ACRE_PRC152, 2)
            TRANSPORT_ITEM(ACE_personalAidKit, 8)
            TRANSPORT_ITEM(ACE_Canteen, 5)
            TRANSPORT_ITEM(ACE_Can_Franta, 9)
            TRANSPORT_ITEM(ACE_MRE_BeefStew, 5)
            TRANSPORT_ITEM(ACE_bodyBag, 9)
        };
        class TransportBackpacks
        {
            TRANSPORT_BACKPACK(rtg_medical_grabpack, 1)
            TRANSPORT_BACKPACK(rtg_engineer_grabpack, 1)
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

// Boats
    class RHICC_GREY;
    class rtg_rhic : RHICC_GREY
    {
        displayName = "Rhib Armed [7/10]";
        editorSubcategory = "RTGBoats";
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

        // Extra Fuel (Jerry Cans on Vehicles)
        ace_refuel_fuelCargo = 80;
        canPush = 2;
        // Vehicle Inventorys
        class TransportItems
        {
            TRANSPORT_ITEM(rtg_pvs_15_black_gh, 8)
            TRANSPORT_ITEM(ACRE_PRC343, 2)
            TRANSPORT_ITEM(ACRE_PRC152, 2)
            TRANSPORT_ITEM(ACE_personalAidKit, 8)
            TRANSPORT_ITEM(ACE_Canteen, 5)
            TRANSPORT_ITEM(ACE_Can_Franta, 9)
            TRANSPORT_ITEM(ACE_MRE_BeefStew, 5)
            TRANSPORT_ITEM(ACE_bodyBag, 9)
        };
        class TransportBackpacks
        {
            TRANSPORT_BACKPACK(rtg_medical_grabpack, 1)
            TRANSPORT_BACKPACK(rtg_engineer_grabpack, 1)
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
    };


// Supply Crates
    class B_CargoNet_01_ammo_F;
    class rtg_BasicSupply : B_CargoNet_01_ammo_F 
    {
        displayName = "[RTG] Basic Supply Crate";
        editorCategory = "Raider_Tactical";
        scope = 2;
        dlc = "raiderTactical";

        // Extra Fuel (Jerry Cans on Crate)
        ace_refuel_fuelCargo = 80;

        class TransportItems
        {
            TRANSPORT_ITEM(rtg_pvs_15_black_gh, 8)
            TRANSPORT_ITEM(ToolKit, 2)
            TRANSPORT_ITEM(ACRE_PRC343, 6)
            TRANSPORT_ITEM(ACE_personalAidKit, 12)
            TRANSPORT_ITEM(ACE_Canteen, 14)
            TRANSPORT_ITEM(ACE_MRE_BeefStew, 14)
            TRANSPORT_ITEM(ACE_bloodIV, 8)
            TRANSPORT_ITEM(ACE_bloodIV_500, 8)
            TRANSPORT_ITEM(ACE_elasticBandage, 60)
            TRANSPORT_ITEM(ACE_packingBandage, 60)
            TRANSPORT_ITEM(ACE_bodyBag, 8)
            TRANSPORT_ITEM(ACE_quikclot, 60)
            TRANSPORT_ITEM(ACE_morphine, 15)
            TRANSPORT_ITEM(kat_PainkillerItem, 15)
            TRANSPORT_ITEM(kat_PervitinItem, 25)
            TRANSPORT_ITEM(ACE_tourniquet, 30)
            TRANSPORT_ITEM(kat_guedel, 25)
        };
        class TransportWeapons
        {
            TRANSPORT_WEAPON(rhs_weap_m16a4_carryhandle, 6)
            TRANSPORT_WEAPON(rhs_weap_m72a7, 6)
            TRANSPORT_WEAPON(rhs_weap_M136_hedp, 6)
        };
        class TransportMagazines 
        {
            //Rifle
            TRANSPORT_MAGAZINE(rtg_30rnd_556_45, 40)
            TRANSPORT_MAGAZINE(rtg_30rnd_545_49, 35)
            TRANSPORT_MAGAZINE(rtg_30rnd_762_39, 35)
            TRANSPORT_MAGAZINE(rtg_30rnd_300_blk, 35)
            TRANSPORT_MAGAZINE(rtg_20Rnd_762x51, 35)
            TRANSPORT_MAGAZINE(rtg_30rnd_58x42, 25)
            TRANSPORT_MAGAZINE(rtg_10rnd_10bw, 25)
            TRANSPORT_MAGAZINE(rtg_10Rnd_127x99, 15)
            TRANSPORT_MAGAZINE(rtg_p90, 18)
            TRANSPORT_MAGAZINE(rtg_9mm_35Rnd_mag, 30)
            TRANSPORT_MAGAZINE(rtg_12g_15Rnd, 18)
            //GL
            TRANSPORT_MAGAZINE(rhs_mag_M433_HEDP, 40)
            TRANSPORT_MAGAZINE(ACE_HuntIR_M203, 12)
            TRANSPORT_MAGAZINE(1Rnd_SmokeRed_Grenade_shell, 15)
            TRANSPORT_MAGAZINE(1Rnd_Smoke_Grenade_shell, 35)
            //MG
            TRANSPORT_MAGAZINE(rtg_200rnd_556_45_t, 25)
            TRANSPORT_MAGAZINE(rtg_200Rnd_762x51_t, 25)
            TRANSPORT_MAGAZINE(rtg_200rnd_300_blk_t, 25)
            TRANSPORT_MAGAZINE(rtg_200Rnd_9mm_T, 25)
            //AT
            TRANSPORT_MAGAZINE(rtg_rpg_hedp_mag, 6)
            TRANSPORT_MAGAZINE(rtg_rpg_heat_mag, 6)
            TRANSPORT_MAGAZINE(rtg_rpg_smk_mag, 6)
            TRANSPORT_MAGAZINE(rtg_MRAWS_SMK_F, 4)
            TRANSPORT_MAGAZINE(rtg_MRAWS_HE_F, 4)
            TRANSPORT_MAGAZINE(rtg_MRAWS_HEAT_F, 4)
            TRANSPORT_MAGAZINE(Titan_AT, 2)
            //Grenades
            TRANSPORT_MAGAZINE(HandGrenade, 24)
            TRANSPORT_MAGAZINE(SmokeShellGreen, 12)
            TRANSPORT_MAGAZINE(SmokeShell, 24)
            TRANSPORT_MAGAZINE(ACE_M84, 12)
            TRANSPORT_MAGAZINE(ACE_M14, 12)
            //Misc
            TRANSPORT_MAGAZINE(rhsusf_m112_mag, 5)
            TRANSPORT_MAGAZINE(Laserbatteries, 24)
        };
    };

    class rtg_atSupply : B_CargoNet_01_ammo_F 
    {
        displayName = "[RTG] Anti Tank Crate";
        editorCategory = "Raider_Tactical";
        scope = 2;
        dlc = "raiderTactical";

        class TransportWeapons
        {
            TRANSPORT_WEAPON(rhs_weap_m72a7, 12)
            TRANSPORT_WEAPON(rhs_weap_M136_hedp, 12)
        };
        class TransportMagazines 
        {
            //AT
            TRANSPORT_MAGAZINE(rtg_rpg_hedp_mag, 14)
            TRANSPORT_MAGAZINE(rtg_rpg_heat_mag, 14)
            TRANSPORT_MAGAZINE(rtg_rpg_smk_mag, 14)
            TRANSPORT_MAGAZINE(rtg_MRAWS_SMK_F, 12)
            TRANSPORT_MAGAZINE(rtg_MRAWS_HE_F, 12)
            TRANSPORT_MAGAZINE(rtg_MRAWS_HEAT_F, 12)
            TRANSPORT_MAGAZINE(Titan_AT, 9)
        };
    };

    class C_IDAP_supplyCrate_F;
    class rtg_medicalSupply : C_IDAP_supplyCrate_F
    {
        displayName = "[RTG] Medical Crate";
        editorCategory = "Raider_Tactical";
        scope = 2;
        dlc = "raiderTactical";

        class TransportItems
        {
            TRANSPORT_ITEM(ACE_personalAidKit, 12)
            TRANSPORT_ITEM(ACE_bodyBag, 12)
            TRANSPORT_ITEM(ACE_bloodIV, 15)
            TRANSPORT_ITEM(ACE_bloodIV_500, 15)
            TRANSPORT_ITEM(ACE_elasticBandage, 100)
            TRANSPORT_ITEM(ACE_packingBandage, 100)
            TRANSPORT_ITEM(ACE_quikclot, 100)
            TRANSPORT_ITEM(ACE_morphine, 25)
            TRANSPORT_ITEM(kat_PainkillerItem, 25)
            TRANSPORT_ITEM(kat_PervitinItem, 25)
            TRANSPORT_ITEM(ACE_tourniquet, 35)
            TRANSPORT_ITEM(kat_guedel, 25)
            TRANSPORT_ITEM(kat_naloxone, 25)
            TRANSPORT_ITEM(kat_TXA, 25)
            TRANSPORT_ITEM(kat_atropine, 25)
            TRANSPORT_ITEM(kat_fentanyl, 25)
            TRANSPORT_ITEM(kat_BVM, 25)
            TRANSPORT_ITEM(kat_larynx, 25)
            TRANSPORT_ITEM(kat_Pulseoximeter, 25)
            TRANSPORT_ITEM(ACE_epinephrine, 25)
            TRANSPORT_ITEM(ACE_plasmaIV_500, 25)
            TRANSPORT_ITEM(ACE_surgicalKit, 12)
            TRANSPORT_ITEM(kat_chestSeal, 25)
        };
    };
};