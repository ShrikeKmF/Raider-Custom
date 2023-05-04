#include "configs\CfgWeapons.hpp"
#include "configs\CfgMagazineWells.hpp"
#include "configs\CfgAmmo.hpp"
#include "configs\CfgMagazines.hpp"
#include "configs\XtdGearModels.hpp"

class CfgPatches {
    class rtgEquipment {
        name = "rtgEquipment";
        units[] = {};
        weapons[] = {"rtg_gl_xm25", "rtg_weap_m79", "rtg_rifle_samr2_9mm", "rtg_vector_9mm", "rtg_pdw2000_9mm"};
        magazines[] = {"rtg_10Rnd_25_HEDP", "rtg_30rnd_556_45", "rtg_100rnd_556_45", "rtg_9mm_35Rnd_mag", "rtg_9mm_35Rnd_mag", "rtg_9mm_21Rnd_mag"};
        requiredVersion = "1.5";
        requiredAddons[] = {"ace_ballistics"};
        author = "";
        authors[] = {"Shrike"};
        authorUrl = "";
    };
};

class Mod_Base;
class raiderTactical: Mod_Base
{
    name = "Raider Tactical";
    picture = "";
    dir = "@raiderTacticalGroup";
    hideName = 1;
    hidePicture = 0;
    action = "";
    author = "Shrike";
    logo = "";
    logoOver = "";
    logoSmall = "";
};
/*
Raider Tacical Group Custom Content
rtgEquipment
Author: Shrike

Repo:
https://github.com/ShrikeKmF/Raider-Custom

Discord:
https://discord.gg/D55THJWxn4
*/