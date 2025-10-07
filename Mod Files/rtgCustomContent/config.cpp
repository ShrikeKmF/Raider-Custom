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
                "rtgModuleAISkill", "rtgModulePathing", "rtgDisableVcom",

                // Vehicles
                        "rtg_BasicSupply",
                        "rtg_wheelsBox",
                // Bluefor
                    // Light 
                        "rtg_bugy",
                        "rtg_sparrow",
                        "rtg_Hawk",
                        "rtg_Magpie",
                        "raider_fast_rhib",
                        "rtg_htc_l",
                    // Medium  
                        "rtg_sparrow_med",
                        "rtg_rush_shorad",
                        "rtg_rush_IS",
                        "rtg_lpb",
                        "rtg_htc_m",
                    // Heavy
                        "rtg_ravn",
                        "rtg_amp_m2",
                        "rtg_amp_m2jav",
                        "rtg_amp_shorad",
                        "rtg_htc_h",
                // Greenfor
                    // Light 
                        "rtg_bugy_g",
                        "rtg_sparrow_g",
                        "rtg_Hawk_g",
                        "rtg_Magpie_g",
                        "raider_fast_rhib_g",
                        "rtg_htc_l_g",
                    // Medium  
                        "rtg_sparrow_med_g",
                        "rtg_rush_shorad_g",
                        "rtg_rush_IS_g",
                        "rtg_lpb_g",
                        "rtg_htc_m_g",
                    // Heavy
                        "rtg_ravn_g",
                        "rtg_amp_m2_g",
                        "rtg_amp_m2jav_g",
                        "rtg_amp_shorad_g",
                        "rtg_htc_h_g"
            };
        weapons[] = {};
        magazines[] = {};
        requiredVersion = "1.0";
        requiredAddons[] = { "A3_Modules_F" };
        author = "Shrike";
        authors[] = {"Shrike"};
        authorUrl = "https://discord.gg/D55THJWxn4";
    };
};

// Mod Info Setup
class Mod_Base;
class raiderTactical: Mod_Base
{
    name = "[RTG] Custom Content";
    picture = "";
    dir = "@raiderTacticalGroup";
    hideName = 0;
    hidePicture = 1;
    action = "";
    author = "Shrike";
    
    logo = ""; // TODO SETUP RTG LOGOS
    logoOver = "";
    logoSmall = "";
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
#include "\rtgCustomContent\Config\cfgVehicles.hpp"
#include "\rtgCustomContent\Config\cfgWeapons.hpp"
#include "\rtgCustomContent\Config\cfgAmmo.hpp"
#include "\rtgCustomContent\Config\cfgMagazines.hpp"
#include "\rtgCustomContent\Config\cfgFactionClasses.hpp"
#include "\rtgCustomContent\Config\cfgEditorSubcategories.hpp"
#include "\rtgCustomContent\Config\cfgEditorcategories.hpp"

// AI
#include "\rtgCustomContent\Config\AI\cfgBrains.hpp"

// Modules
#include "\rtgCustomContent\Config\Modules\Editor Modules.hpp"

// ACEAX
#include "\rtgCustomContent\Config\ACEAX\XtdGearModels.hpp"