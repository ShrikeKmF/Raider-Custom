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
    class rtgEquipment {
        name = "rtgEquipment";
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredVersion = "1.5";
        requiredAddons[] = {"ace_ballistics"};
        author = "Shrike";
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

#include "configs\CfgDefines.hpp"
#include "configs\CfgSlotSetup.hpp"
#include "configs\CfgFaces.hpp"
#include "configs\CfgRecoils.hpp"
#include "configs\CfgWeaponHandling.hpp"
#include "configs\CfgWeapons.hpp"
#include "configs\CfgMagazineWells.hpp"
#include "configs\CfgAmmo.hpp"
#include "configs\CfgGoggles.hpp"
#include "configs\CfgVehicles.hpp"
#include "configs\CfgMagazines.hpp"
#include "configs\CfgACEX.hpp"