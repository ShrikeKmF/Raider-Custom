/*
Raider Tacical Group Custom Content
rtgEquipment
Author: Shrike

Repo:
https://github.com/ShrikeKmF/Raider-Custom

Discord:
https://discord.gg/D55THJWxn4
*/

class CfgPatches {
    class rtgCustomContent {
        name = "[RTG] Custom Content";
        units[] = 
            {
                // Editor Modules
                "rtgModuleAISkill", 
                "rtgModulePathing",
                // Vehicles
                "rtg_BasicSupply",
                "rtg_wheelsBox",
                "rtg_magpie",
                "rtg_magpie_g",
                "rtg_rush_ifv",
                "rtg_rush_ifv_g",
                "rtg_rush_mgs",
                "rtg_rush_mgs_g",
                "rtg_rush_cmd",
                "rtg_rush_cmd_g",
                "rtg_rush_aa",
                "rtg_rush_aa_g"
            };
        weapons[] = {};
        magazines[] = {};
        requiredVersion = "1.0";
        requiredAddons[] = { 
            "A3_Modules_F", 
            "A3_Weapons_F",
            "A3_Aegis_Weapons_F_Aegis",
            "A3_Atlas_Weapons_F_Atlas", 
            "vests_f_JCA_IE",
            "CTRGMILGP_Config",
            "CTRGHEAD_cfg",
            "A3_Atlas_Characters_F_Atlas",
            "A3_Data_F",
            "A3_Functions_F",
            "A3_UiFonts_F",
            "A3_Data_F_Enoch_Loadorder",
            "A3_Ui_F",
            "a3_map_altis_scenes",
            "a3_map_vr_scenes",
            "a3_map_stratis_scenes",
            "ace_csw"
        };
        author = "Shrike";
        authors[] = {"Shrike"};
        authorUrl = "https://discord.gg/D55THJWxn4";
    };
};

// RTG Function library
// https://community.bistudio.com/wiki/Arma_3:_Functions_Library#Adding_a_Function

class CfgFunctions {
    class RTG {
        tag = "RTG";
        class Functions {
            file = "rtgCustomContent\functions";

            class initPouch {};
            class useResupply {};
            class finishResupply {};
            class checkPouchUses {};
            class unconIcon {};
        };
    };
};


// File Includes
// Base
#include "\rtgCustomContent\Config\Base\cfgDefines.hpp"

// Character
#include "\rtgCustomContent\Config\Character\Ladder Speed.hpp"
#include "\rtgCustomContent\Config\Character\Sway Config.hpp"
#include "\rtgCustomContent\Config\Character\Weight Config.hpp"
#include "\rtgCustomContent\Config\Character\Stamina Config.hpp"
#include "\rtgCustomContent\Config\Character\cfgFaces.hpp"

// UI
#include "\rtgCustomContent\Config\UI\Main Menu Join Button.hpp"
#include "\rtgCustomContent\Config\UI\Map Markers.hpp"
#include "\rtgCustomContent\Config\UI\Intro Video.hpp"

// General
#include "\rtgCustomContent\Config\cfgAmmo.hpp"
#include "\rtgCustomContent\Config\cfgMagazines.hpp"
#include "\rtgCustomContent\Config\cfgVehicles.hpp"
#include "\rtgCustomContent\Config\cfgWeapons.hpp"
#include "\rtgCustomContent\Config\cfgMagazineWells.hpp"
#include "\rtgCustomContent\Config\cfgFactionClasses.hpp"
#include "\rtgCustomContent\Config\cfgEditorSubcategories.hpp"
#include "\rtgCustomContent\Config\cfgEditorcategories.hpp"
#include "\rtgCustomContent\Config\postInit_EventHandlers.hpp"

// AI
#include "\rtgCustomContent\Config\AI\cfgBrains.hpp"

// ACEAX
#include "\rtgCustomContent\Config\ACEAX\XtdGearModels.hpp"