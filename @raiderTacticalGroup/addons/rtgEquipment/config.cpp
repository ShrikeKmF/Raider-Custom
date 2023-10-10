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

class asdg_OpticRail;
class cfgRecoils
{
    class 700Nitro
    {
        muzzleOuter[]	= { 22.0,  28.0,  6,  0.2 };
        kickBack[]	= { 0.03, 0.12 };
        permanent	= 0.1;
        temporary	= 0.01;
    };
};

class asdg_OpticRail1913 : asdg_OpticRail {
    class compatibleItems
	{
        rtg_optic_MRCO = 1;
        rtg_optic_DMS = 1;
        rtg_night_sight = 1;
    };
};
class asdg_OpticRail1913RTG : asdg_OpticRail1913 {
    class compatibleItems
	{
        rtg_optic_MRCO = 1;
        rtg_optic_DMS = 1;
        rtg_night_sight = 1;
    };
};

#include "configs\CfgWeapons.hpp"
#include "configs\CfgMagazineWells.hpp"
#include "configs\CfgAmmo.hpp"
#include "configs\CfgGoggles.hpp"
#include "configs\CfgVehicles.hpp"
#include "configs\CfgMagazines.hpp"
#include "configs\XtdGearModels.hpp"

class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man_A3: Default
	{
		class WhiteHead_01;
		class brewHead: WhiteHead_01
		{
			displayname = "Brewsky";
			disabled = 0;
			author = "Shrike";
            identityTypes[] = {};
            texture = "Walker\data\drew_co.paa";
			head = "KerryHead_A3";
            material = "\A3\Characters_F\Heads\Data\m_White_06.rvmat";
            materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
            materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            textureHL = "rtgEquipment\tex\tattoo_Brew.paa";
            textureHL2 = "rtgEquipment\tex\tattoo_Brew.paa";
		};
        class fizzHead: brewHead
		{
			displayname = "Fizz";
			disabled = 0;
			author = "Shrike";
            identityTypes[] = {};
            texture = "Walker\data\drew_co.paa";
			head = "KerryHead_A3";
            material = "\A3\Characters_F\Heads\Data\m_White_06.rvmat";
            materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
            materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            textureHL = "rtgEquipment\tex\tattoo_Fizz.paa";
            textureHL2 = "rtgEquipment\tex\tattoo_Fizz.paa";
		};
    };
};