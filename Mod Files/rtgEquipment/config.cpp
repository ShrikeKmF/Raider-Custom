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
class asdg_OpticRail1913 : asdg_OpticRail {
    class compatibleItems
	{
        rtg_optic_MRCO = 1;
        rtg_optic_DMS = 1;
        rtg_night_sight = 1;
        rtg_ELCAN_3xSpectreDR = 1;
        rtg_ELCAN_3xSpectreDR_Tan = 1;
        rtg_ELCAN_3xSpectreDR_Green = 1;
        rtg_ELCAN_3xSpectreDR_RDS = 1;
        rtg_ELCAN_3xSpectreDR_Tan_RDS = 1;
        rtg_ELCAN_3xSpectreDR_Green_RDS = 1;
        rtg_shortdot = 1;
        rtg_acog2x = 1;
        rtg_torbs32 = 1;
        optic_ico_01_f = 1;
        optic_ico_01_black_f = 1;
        optic_ico_01_camo_f = 1;
        optic_ico_01_sand_f = 1;
    };
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot {
    class compatibleItems
	{
    };
};
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot {
    class compatibleItems
	{
    };
};
class asdg_UnderSlot;
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems;
};

class UnderBarrelSlot;
class rtgClearUnderBarrel: UnderBarrelSlot
{
	class compatibleItems{};
};

class rtgBipods: UnderBarrelSlot
{
	class compatibleItems
    {
        rhsusf_acc_saw_bipod = 1;
		rhsusf_acc_saw_lw_bipod = 1;
        hlc_bipod_utgshooters = 1;
        ACWP_harrisbipod = 1;
        bipod_01_F_blk = 1;
        bipod_02_F_blk = 1;
        bipod_03_F_blk = 1;
    };
};


#include "configs\CfgRecoils.hpp"
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

