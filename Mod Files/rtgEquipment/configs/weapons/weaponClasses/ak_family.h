// AK Family
// SVD
class srifle_DMR_01_F;
class rtg_vs121 : srifle_DMR_01_F
{
	RTG_WEAPON_BASE
	
	displayName = "VS-121 50BW";
	baseWeapon = "rtg_vs121";
    RTG_WEAPON_HANDLING(2.4)
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\a3\weapons_f_epa\longrangerifles\dmr_01\data\dmr_01_co.paa","rtgEquipment\tex\vs121.paa"};
	magazineWell[] = {"rtg_50_bw_STANAG"};
	RTG_RECOIL(vs121)
	magazines[] = {"rtg_10rnd_10bw"};
};

class rhs_weap_svds;
class rtg_svd : rhs_weap_svds 
{
    RTG_WEAPON_BASE
    displayName="SVD";
    baseWeapon = "rtg_svd";
    RTG_WEAPON_HANDLING(2.2)
    model="rtgEquipment\lods\svd\SVD_F.p3d";
    magazineWell[] = {"CBA_762x51_M14"};
    magazines[] = {"rtg_20Rnd_762x51"};
    RTG_RECOIL(svd)
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class CowsSlot: asdg_OpticRail1913{};
    };
}

// AK-12
class arifle_AK12_F;
class rtg_AK19_F : arifle_AK12_F
{
    RTG_WEAPON_BASE
    displayName="AK-19";
    baseWeapon = "rtg_AK19_F";
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(ak19)
    model="rtgEquipment\lods\AK19\AK19_F.p3d";
    picture="\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
    handAnim[]=
    {
        "OFP2_ManSkeleton",
        "\A3\Weapons_F_Exp\Rifles\AK12\Data\Anims\ak12.rtm"
    };
    reloadAction="GestureReloadAKM";
    hiddenSelectionsTextures[]=
    {
        "\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa",
        "\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556{};
        class CowsSlot: asdg_OpticRail1913{};
        class PointerSlot: asdg_FrontSideRail{};
        class UnderBarrelSlot : rtgBipods{};
        mass=77.2;
    };
}

class rtg_ak308 : rtg_AK19_F
{
    RTG_WEAPON_BASE
    displayName="AK-308";
    baseWeapon = "rtg_ak308";
    magazineWell[] = {"CBA_762x51_M14"};
    magazines[] = {"rtg_20Rnd_762x51"};
    RTG_RECOIL(ak308)
    RTG_WEAPON_HANDLING(2.8)
    model="rtgEquipment\lods\AK308\AK308_F.p3d";
    picture="\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
    handAnim[]=
    {
        "OFP2_ManSkeleton",
        "\A3\Weapons_F_Exp\Rifles\AK12\Data\Anims\ak12.rtm"
    };
    reloadAction="GestureReloadAKM";
    hiddenSelectionsTextures[]=
    {
        "\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa",
        "\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_762{};
        class CowsSlot: asdg_OpticRail1913{};
        class PointerSlot: asdg_FrontSideRail{};
        class UnderBarrelSlot : rtgBipods{};
        mass=83.8;
    };
    RTG_ACEAX_EMPTY 
    modes[]={"Single","Burst"};
    class Single: Single
    {
        sounds[]=
        {
            "StandardSound",
            "SilencedSound"
        };
        class BaseSoundModeType
        {
            weaponSoundEffect="DefaultRifle";
            closure1[]=
            {
                "\hlc_WP_FAL\snd\fal_first",
                1,
                1,
                10
            };
            closure2[]=
            {
                "\hlc_WP_FAL\snd\fal_first",
                1,
                1,
                10
            };
            soundClosure[]=
            {
                "closure1",
                0.5,
                "closure2",
                0.5
            };
        };
        class StandardSound: BaseSoundModeType
        {
            soundSetShot[]=
            {
                "NIA_FNFAL_NEW_Shot_SoundSet",
                "fal_Tail_SoundSet"
            };
        };
        class SilencedSound: BaseSoundModeType
        {
            soundSetShot[]=
            {
                "FAL_silencerShot_SoundSet",
                "FAL_silencerTail_SoundSet"
            };
        };
        reloadtime="(60/600)";
        dispersion=0.00062541;
        aiRateOfFire=1;
        aiRateOfFireDistance=250;
        aiRateOfFireDispersion=2;
        minRange=30;
        minRangeProbab=0.69999999;
        midRange=150;
        midRangeProbab=0.5;
        maxRange=500;
        maxRangeProbab=0.1;
    };
    class Burst: Burst
    {
        sounds[]=
        {
            "StandardSound",
            "SilencedSound"
        };
        class BaseSoundModeType
        {
            weaponSoundEffect="DefaultRifle";
            closure1[]=
            {
                "\hlc_WP_FAL\snd\fal_first",
                1,
                1,
                10
            };
            closure2[]=
            {
                "\hlc_WP_FAL\snd\fal_first",
                1,
                1,
                10
            };
            soundClosure[]=
            {
                "closure1",
                0.5,
                "closure2",
                0.5
            };
        };
        class StandardSound: BaseSoundModeType
        {
            soundSetShot[]=
            {
                "NIA_FNFAL_NEW_Shot_SoundSet",
                "fal_Tail_SoundSet"
            };
        };
        class SilencedSound: BaseSoundModeType
        {
            soundSetShot[]=
            {
                "FAL_silencerShot_SoundSet",
                "FAL_silencerTail_SoundSet"
            };
        };
        burst=2;
        textureType="dual";
        reloadtime="(60/1000)";
        dispersion=0.00062541;
        aiRateOfFire=1;
        aiRateOfFireDistance=100;
        aiRateOfFireDispersion=2;
        minRange=10;
        minRangeProbab=0.80000001;
        midRange=75;
        midRangeProbab=0.69999999;
        maxRange=200;
        maxRangeProbab=0.00050000002;
    };
}


// AS Val
class rhs_weap_asval;
class rtg_asval : rhs_weap_asval
{
    RTG_WEAPON_BASE
    displayName="ASM-VAL";
    baseWeapon = "rtg_asval";
    magazineWell[] = {"CBA_300BLK_STANAG"};
    magazines[] = {"rtg_30rnd_300_blk"};
    RTG_RECOIL(asval)
    RTG_WEAPON_HANDLING(1.6)
    model="rtgEquipment\lods\ASVAL\ASVAL_F.p3d";
    handAnim[]	= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval_grip.rtm"};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot{};
        class CowsSlot: asdg_OpticRail1913{};
        class PointerSlot: asdg_FrontSideRail{};
        class GripodSlot : rtgClearUnderBarrel{};
    };
}

// .300blk
// AK103
class rhs_weap_ak103_zenitco01_b33;
class rtg_ak103 : rhs_weap_ak103_zenitco01_b33
{
    RTG_WEAPON_BASE
    displayName="AK103 (Zenitco)";
    baseWeapon = "rtg_ak103";
    magazineWell[] = {"CBA_300BLK_STANAG_AK"};
    magazines[] = {"rtg_30rnd_300_blk_ak"};
    RTG_RECOIL(ak103)
    RTG_WEAPON_HANDLING(2.4)
}

// AK104
class rhs_weap_ak104_zenitco01_b33;
class rtg_ak104 : rhs_weap_ak104_zenitco01_b33
{
    RTG_WEAPON_BASE
    displayName="AK104 (Zenitco)";
    baseWeapon = "rtg_ak104";
    magazineWell[] = {"CBA_300BLK_STANAG_AK"};
    magazines[] = {"rtg_30rnd_300_blk_ak"};
    RTG_RECOIL(ak104)
    RTG_WEAPON_HANDLING(2.2)
}

// AKM
class rhs_weap_akm_zenitco01_b33;
class rtg_akm : rhs_weap_akm_zenitco01_b33
{
    RTG_WEAPON_BASE
    displayName="AKM (Zenitco)";
    baseWeapon = "rtg_akm";
    magazineWell[] = {"CBA_300BLK_STANAG_AK"};
    magazines[] = {"rtg_30rnd_300_blk_ak"};
    RTG_RECOIL(akm)
    RTG_WEAPON_HANDLING(2.6)
}

// 5.56
// AK105
class rhs_weap_ak105_zenitco01_b33;
class rtg_ak105 : rhs_weap_ak105_zenitco01_b33
{
    RTG_WEAPON_BASE
    displayName="AK105 (Zenitco)";
    baseWeapon = "rtg_ak105";
    magazineWell[] = {"CBA_556x45_STANAG_AK"};
    magazines[] = {"rtg_30rnd_556_45_ak"};
    RTG_RECOIL(ak105)
    RTG_WEAPON_HANDLING(2.2)
}

// AK74M
class rhs_weap_ak74m_zenitco01_b33;
class rtg_ak74m : rhs_weap_ak74m_zenitco01_b33
{
    RTG_WEAPON_BASE
    displayName="AK74M (Zenitco)";
    baseWeapon = "rtg_ak74m";
    magazineWell[] = {"CBA_556x45_STANAG_AK"};
    magazines[] = {"rtg_30rnd_556_45_ak"};
    RTG_RECOIL(ak74m)
    RTG_WEAPON_HANDLING(2.6)
}

// AK74MR
class rhs_weap_ak74mr;
class rtg_ak74mr : rhs_weap_ak74mr
{
    RTG_WEAPON_BASE
    displayName="AK74MR (Zenitco)";
    baseWeapon = "rtg_ak74mr";
    magazineWell[] = {"CBA_556x45_STANAG_AK"};
    magazines[] = {"rtg_30rnd_556_45_ak"};
    RTG_RECOIL(ak74mr)
    RTG_WEAPON_HANDLING(2.6)
}

class rhs_weap_rpk74m_npz;
class rtg_rpk74m : rhs_weap_rpk74m_npz
{
    RTG_WEAPON_BASE
    displayName="RPK74M (Zenitco)";
    baseWeapon = "rtg_rpk74m";
    magazineWell[] = {"CBA_556x45_STANAG_HBAR_AK"};
    magazines[] = {"rtg_60rnd_556_45_ak"};
    RTG_RECOIL(rpk74m_556)
    RTG_WEAPON_HANDLING(2.9)
}

class rhs_weap_rpk74m_npz;
class rtg_rpk74m_300 : rhs_weap_rpk74m_npz
{
    RTG_WEAPON_BASE
    displayName="RPK74M (300BLK/Zenitco)";
    baseWeapon = "rtg_rpk74m_300";
    magazineWell[] = {"CBA_300BLK_STANAG_RPK"};
    magazines[] = {"rtg_80rnd_300_blk_ak"};
    RTG_RECOIL(rpk74m_300)
    RTG_WEAPON_HANDLING(2.9)
}


