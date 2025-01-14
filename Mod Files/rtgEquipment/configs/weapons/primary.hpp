// Base Classes
class Rifle;
class Pistol;
class ItemCore;
class Launcher;
class PointerSlot_Rail;
class PointerSlot;
class UGL_F;
class WeaponSlotsInfo;
class asdg_SlotInfo;
class compatibleItems;
class MuzzleSlot_556;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class manual;
class Single;
class FullAuto;
class Burst;
class StandardSound;
class arifle_SPAR_01_blk_F;
class arifle_SPAR_01_khk_F;
class arifle_SPAR_01_snd_F;
class arifle_SPAR_02_blk_F;
class arifle_SPAR_02_khk_F;
class arifle_SPAR_02_snd_F;
class GM6_base_F;
class SMG_02_base_F;
class Rifle_Long_Base_F;

class Launcher_Base_F : Launcher
{
	RTG_STANDARD_ZOOM
};
class Pistol_Base_F : Pistol 
{
	RTG_STANDARD_ZOOM
};
class Rifle_Base_F : Rifle
{
	RTG_STANDARD_ZOOM
};
class SMG_03_TR_BASE: Rifle_Base_F
{
	class OpticsModes
	{
		class Kolimator
		{
			opticsID = 1;
			useModelOptics = 0;
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			opticsZoomMin= 0.50;
			opticsZoomMax = 0.75;
			opticsZoomInit = 0.75;
			memoryPointCamera = "opticView";
			opticsFlare = 0;
			opticsDisablePeripherialVision = 1;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			cameraDir = "";
		};
	};
};
class rhs_weap_M320_Base_F: Pistol_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_XM2010_Base_F: Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class arifle_MX_Base_F;
class rhs_weap_m4_Base : arifle_MX_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_saw_base : Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_M107_Base_F: GM6_base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_M590_5RD : Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_m32_Base_F: Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhsusf_weap_MP7A1_base_f: SMG_02_base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_SCAR_Base : arifle_MX_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_ak74m_Base_F: Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_an94_base: Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_orsis_Base_F: Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_vhs2_base: Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class acwp_rifle_base: Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class srifle_EBR_F;
class rhs_weap_m14_base : srifle_EBR_F
{
	RTG_STANDARD_ZOOM
};
class srifle_DMR_06_camo_F;
class ACWP_sr25: srifle_DMR_06_camo_F
{
	RTG_STANDARD_ZOOM
};

// M1 Garand
	class rhs_weap_m1garand_sa43;
	class rtg_M1M : rhs_weap_m1garand_sa43
	{
		RTG_WEAPON_BASE
		displayName="T35 Garand";
		baseWeapon = "rtg_M1M";
		model="rtgEquipment\lods\m1\M1M_F.p3d";
		ACE_barrelLength = 609.6;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913{};
			class PointerSlot: asdg_FrontSideRail{};
			class UnderBarrelSlot : rtgBipods{};
		};

		RTG_STANDARD_ZOOM
	}

// SVD
	class rhs_weap_svds;
	class rtg_svd : rhs_weap_svds 
	{
		RTG_WEAPON_BASE
		displayName="SVD";
		baseWeapon = "rtg_svd";
		model="rtgEquipment\lods\svd\SVD_F.p3d";
		magazineWell[] = {"CBA_762x51_M14"};
		magazines[] = {"rtg_20Rnd_762x51"};
		recoil = "rtg_762n_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913{};
		};
	}

// Famas
	class UK3CB_FAMAS_F1;
	class rtg_famas_f1_ris : UK3CB_FAMAS_F1 {
		RTG_WEAPON_BASE
		displayName="FAMAS F1";
		baseWeapon = "rtg_famas_f1_ris";
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_30rnd_556_45"};
		recoil = "rtg_556_rifle";
		ACE_barrelLength = 488;
		modes[] = {"Single", "FullAuto"};
		class Single: Single
		{
			reloadTime = 0.0625;
			dispersion = 0.00031;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.0625;
			dispersion = 0.00031;
		};
		RTG_STANDARD_ZOOM
	};

// VHS2
	class rhs_weap_vhsd2;
	class rtg_vhsd2 : rhs_weap_vhsd2 
	{
		RTG_WEAPON_BASE
		displayName="VHS-D2";
		baseWeapon = "rtg_vhsd2";
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_30rnd_556_45"};
		recoil = "rtg_556_rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot: rtgClearUnderBarrel{};
			class GripodSlot : rtgClearUnderBarrel{};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_vhs2";
			length = "long";
		};
	}
	class rhs_weap_vhsk2;
	class rtg_vhsk2 : rhs_weap_vhsk2 
	{
		RTG_WEAPON_BASE
		displayName="VHS-K2";
		baseWeapon = "rtg_vhsk2";
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_30rnd_556_45"};
		recoil = "rtg_556_carbine";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot: rtgClearUnderBarrel{};
			class GripodSlot : rtgClearUnderBarrel{};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_vhs2";
			length = "short";
		};
	}

// AK
	class arifle_AK12_F;
	class rtg_AK19_F : arifle_AK12_F
	{
		RTG_WEAPON_BASE
		displayName="AK-19";
		baseWeapon = "rtg_AK19_F";
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_30rnd_556_45"};
		recoil = "rtg_556_carbine";
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
		recoil = "rtg_762n_rifle";
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

	class rhs_weap_ak103_zenitco01_b33;
	class rtg_AK101_F : rhs_weap_ak103_zenitco01_b33
	{
		RTG_WEAPON_BASE
		displayName="AK-101";
		baseWeapon = "rtg_AK101_F";
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_30rnd_556_45"};
		recoil = "rtg_556_rifle";
		model="rtgEquipment\lods\AK101\AK101_F.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot{};
			class CowsSlot: asdg_OpticRail1913{};
			class PointerSlot: asdg_FrontSideRail{};
			class UnderBarrelSlot : rtgClearUnderBarrel{};
			class GripodSlot : rtgClearUnderBarrel{};
			mass=79;
		};
	}

	class rhs_weap_ak105_zenitco01_b33;
	class rtg_AK102_F : rhs_weap_ak105_zenitco01_b33
	{
		RTG_WEAPON_BASE
		displayName="AK-102";
		baseWeapon = "rtg_AK102_F";
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_30rnd_556_45"};
		recoil = "rtg_556_carbine";
		model="rtgEquipment\lods\AK102\AK102_F.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot{};
			class CowsSlot: asdg_OpticRail1913{};
			class PointerSlot: asdg_FrontSideRail{};
			class UnderBarrelSlot : rtgClearUnderBarrel{};
			class GripodSlot : rtgClearUnderBarrel{};
			mass=66;
		};
	}

	class rhs_weap_aks74u;
	class rtg_AKS102U_F : rhs_weap_aks74u
	{
		RTG_WEAPON_BASE
		displayName="AKS-102U";
		baseWeapon = "rtg_AKS102U_F";
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_30rnd_556_45"};
		recoil = "rtg_556_pdw";
		model="rtgEquipment\lods\AKS102U\AKS102U_F.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class CowsSlot: asdg_OpticRail1913{};
		};
	}

	class arifle_RPK12_F;
	class rtg_RPK19_F : arifle_RPK12_F
	{
		RTG_WEAPON_BASE
		displayName="RPK-19";
		baseWeapon = "rtg_RPK19_F";
		magazineWell[] = {"CBA_556x45_STANAG"};
		magazines[] = {"rtg_100rnd_556_45"};
		recoil = "rtg_556_lmg";
		model="rtgEquipment\lods\RPK19\RPK19_F.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot{};
			class CowsSlot: asdg_OpticRail1913{};
			class PointerSlot: asdg_FrontSideRail{};
		};
	}

	class rhs_weap_asval;
	class rtg_asval : rhs_weap_asval
	{
		RTG_WEAPON_BASE
		displayName="ASM-VAL";
		baseWeapon = "rtg_asval";
		magazineWell[] = {"CBA_300BLK_STANAG"};
		magazines[] = {"rtg_30rnd_300_blk"};
		recoil = "rtg_300_pdw";
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

	class rtg_vssm : rtg_asval
	{
		RTG_WEAPON_BASE
		displayName="VSSM Vintorez";
		baseWeapon = "rtg_vssm";
		magazineWell[] = {"CBA_762x51_M14"};
		magazines[] = {"rtg_20Rnd_762x51"};
		recoil = "rtg_762n_rifle";
		model = "rtgEquipment\lods\VSSM\VSSM_F.p3d";
		handAnim[]	= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval.rtm"};
		modes[] = {"Single"};
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound"
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
					"FAL_silencerShot_SoundSet",
					"FAL_silencerTail_SoundSet"
				};
			};
		};
	}

// L85A2
	class SMA_L85RIS_BASE;
	class SMA_L85RIS: SMA_L85RIS_BASE 
	{
		recoil = "rtg_556_rifle";
		displayName="L85A2";
		RTG_STANDARD_ZOOM
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_L85";
			handguard = "panel";
			grip = "vfg";
		};
	}
	class SMA_L85RISNR: SMA_L85RIS_BASE 
	{
		recoil = "rtg_556_rifle";
		displayName="L85A2";
		RTG_STANDARD_ZOOM
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_L85";
			handguard = "bare";
			grip = "vfg";
		};
	}
	class SMA_L85RISafg: SMA_L85RIS_BASE 
	{
		recoil = "rtg_556_rifle";
		displayName="L85A2";
		RTG_STANDARD_ZOOM
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_L85";
			handguard = "panel";
			grip = "afg";
		};
	}
	class SMA_L85RISafgNR: SMA_L85RIS_BASE 
	{
		recoil = "rtg_556_rifle";
		displayName="L85A2";
		RTG_STANDARD_ZOOM
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_L85";
			handguard = "bare";
			grip = "afg";
		};
	}

// SAMR
	class rtg_samr2 : arifle_SPAR_01_blk_F
	{
		recoil = "rtg_556_rifle";
		RTG_WEAPON_BASE
		baseWeapon = "rtg_samr2";
		
		displayName = "LAR-15 5.56 Carbine";
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 457.2;
		ace_railHeightAboveBore = 2.5;
		reloadAction = "NIA_GestureReload416";
		model = "hlc_wp_ar15\mesh\LAR15_samr\samr.p3d";
		picture = "\hlc_wp_ar15\tex\ui\gear_SAMR_ca";
		discretedistance[] = {100, 200, 300, 400, 500};
		discretedistanceinitindex = 0;
		hiddenSelections[] = {"Upper", "Lower", "D-Ring", "Rails", "Panels", "VFG", "Harris", "Patch", "Stock"};
		hiddenSelectionsTextures[] = {"hlc_wp_ar15\tex\samr\upper_co.paa", "hlc_wp_ar15\tex\samr\lower2_co.paa", "hlc_wp_ar15\tex\samr\ras_co.paa", "hlc_wp_ar15\tex\samr\risras_co.paa", "hlc_wp_ar15\tex\samr\xtm2_co.paa", "hlc_wp_ar15\tex\melon_cqbr\vgrip_co.paa", "hlc_wp_ar15\tex\samr\hbipod_co.paa", "", "rtgEquipment\tex\rtgTesting.paa"};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_samr";
			calibre = "N556";
		};
	};

	class rtg_samr2_300 : arifle_SPAR_01_blk_F
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_samr2_300";
		
		displayName = "LAR-15 .300 Carbine";
		magazineWell[] = {"CBA_300BLK_STANAG"};
		recoil = "rtg_300_rifle";
		magazines[] = {"rtg_30rnd_300_blk"};
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 457.2;
		ace_railHeightAboveBore = 2.5;
		reloadAction = "NIA_GestureReload416";
		model = "hlc_wp_ar15\mesh\LAR15_samr\samr.p3d";
		picture = "\hlc_wp_ar15\tex\ui\gear_SAMR_ca";
		discretedistance[] = {100, 200, 300, 400, 500};
		discretedistanceinitindex = 0;
		hiddenSelections[] = {"Upper", "Lower", "D-Ring", "Rails", "Panels", "VFG", "Harris", "Patch", "Stock"};
		hiddenSelectionsTextures[] = {"hlc_wp_ar15\tex\samr\upper_co.paa", "hlc_wp_ar15\tex\samr\lower2_co.paa", "hlc_wp_ar15\tex\samr\ras_co.paa", "hlc_wp_ar15\tex\samr\risras_co.paa", "hlc_wp_ar15\tex\samr\xtm2_co.paa", "hlc_wp_ar15\tex\melon_cqbr\vgrip_co.paa", "hlc_wp_ar15\tex\samr\hbipod_co.paa", "", "rtgEquipment\tex\rtgTesting.paa"};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_samr";
			calibre = "N300";
		};
	};
// HK 416C
	class hlc_rifle_416D10;
	class hlc_rifle_416C: hlc_rifle_416D10
	{
		RTG_WEAPON_BASE
		baseWeapon = "hlc_rifle_416C";
		
		displayName = "HK416C";
		magazineWell[] = {"CBA_300BLK_STANAG"};
		recoil = "rtg_300_carbine";
		magazines[] = {"rtg_30rnd_300_blk"};
	};

// HK 416 20in
	class hlc_rifle_416D145;
	class hlc_rifle_416D20: hlc_rifle_416D145
	{
		RTG_WEAPON_BASE
		baseWeapon = "hlc_rifle_416C";
		displayName = "HK416 D20";
		recoil = "rtg_300_rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot{};
			class CowsSlot: asdg_OpticRail1913{};
			class PointerSlot: asdg_FrontSideRail{};
		};
	};

// F-2000
	class arifle_Mk20_plain_F;
	class arifle_Mk20_F;
	class arifle_Mk20C_plain_F;
	class arifle_Mk20C_F;
	class rtg_f2000_tan : arifle_Mk20_plain_F
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_f2000_tan";
		
		displayName = "F2000 Tan";
		modes[] = {"Single","FullAuto"};
		recoil = "rtg_556_rifle";
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.06741;
			dispersion = 0.0019;
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.06741;
			dispersion = 0.0019;
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_f2000";
			barrel = "long";
			camo = "tan";
		};
	};
	class rtg_f2000_camo : arifle_Mk20_F {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_f2000_camo";
		
		displayName = "F2000 Camo";
		modes[] = {"Single","FullAuto"};
		recoil = "rtg_556_rifle";
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.06741;
			dispersion = 0.0019;
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.06741;
			dispersion = 0.0019;
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_f2000";
			barrel = "long";
			camo = "green";
		};
	};
	class rtg_f2000C_tan : arifle_Mk20C_plain_F {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_f2000C_tan";
		
		displayName = "F2000 Carbine Tan";
		modes[] = {"Single","FullAuto"};
		recoil = "rtg_556_carbine";
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.06741;
			dispersion = 0.0019;
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.06741;
			dispersion = 0.0019;
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_f2000";
			barrel = "short";
			camo = "tan";
		};
	};
	class rtg_f2000C_camo : arifle_Mk20C_F {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_f2000C_camo";
		
		displayName = "F2000 Carbine Camo";
		modes[] = {"Single","FullAuto"};
		recoil = "rtg_556_carbine";
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.06741;
			dispersion = 0.0019;
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.06741;
			dispersion = 0.0019;
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_f2000";
			barrel = "short";
			camo = "green";
		};
	};

// SMGs
class SMG_01_F;
class rtg_vector_9mm : SMG_01_F
{
	RTG_WEAPON_BASE
	recoil = "rtg_9mm_primary";
	baseWeapon = "rtg_vector_9mm";
	
	displayName = "Vector 9mm SMG";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_vector";
		calibre = "N9";
	};
};
class rtg_vector_9mm_carbon : rtg_vector_9mm
{
	RTG_WEAPON_BASE
	recoil = "rtg_9mm_primary";
	baseWeapon = "rtg_vector_9mm_carbon";
	
	displayName = "Vector 9mm SMG (Carbon)";
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\vectorSkin.paa","\a3\weapons_f\data\vectoratt_co.paa","\a3\weapons_f\acc\data\battlesight_co.paa"};
	RTG_ACEAX_EMPTY 
};

class rtg_vector_9mm_fish : rtg_vector_9mm
{
	RTG_WEAPON_BASE
	recoil = "rtg_9mm_primary";
	baseWeapon = "rtg_vector_9mm_fish";
	
	displayName = "Vector 9mm SMG (Fish)";
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\fishvectorSkin.paa","\a3\weapons_f\data\vectoratt_co.paa","\a3\weapons_f\acc\data\battlesight_co.paa"};
	RTG_ACEAX_EMPTY 
};

class rtg_vector_50ae : SMG_01_F
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_vector_50ae";
	
	displayName = "Vector .50 SMG";
	recoil = "rtg_50ae_primary";
	magazineWell[] = {"RTG_50_AE"};
	magazines[] = {"rtg_50_ae_20rnd_mag"};
	mode[] = {"Single", "FullAuto"};
	class Single : Single
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";

			closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
			closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
			soundClosure[] = {closure1, 0.5, closure2, 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
		};
	};
	class FullAuto : FullAuto
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";

			closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
			closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
			soundClosure[] = {closure1, 0.5, closure2, 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
		};
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_vector";
		calibre = "N50";
	};
};

class hgun_PDW2000_F;
class rtg_pdw2000_9mm : hgun_PDW2000_F
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_pdw2000_9mm";
	displayName = "CPW 9mm SMG";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
};

// P90
	class SMG_03C_black;
	class SMG_03C_camo;
	class SMG_03C_hex;
	class SMG_03C_khaki;
	class SMG_03C_TR_black;
	class SMG_03C_TR_camo;
	class SMG_03C_TR_hex;
	class SMG_03C_TR_khaki;
	class rtg_SMG_03C_black : SMG_03C_black {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03C_black";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "optic";
			camo = "black";
		};
	};
	class rtg_SMG_03C_camo : SMG_03C_camo {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03C_camo";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "optic";
			camo = "camo";
		};
	};
	class rtg_SMG_03C_hex : SMG_03C_hex {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03C_hex";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "optic";
			camo = "hex";
		};
	};
	class rtg_SMG_03C_khaki : SMG_03C_khaki {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03C_khaki";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "optic";
			camo = "khaki";
		};
	};
	class rtg_SMG_03C_TR_black : SMG_03C_TR_black {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03C_TR_black";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "tac";
			camo = "black";
		};
	};
	class rtg_SMG_03C_TR_camo : SMG_03C_TR_camo {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03C_TR_camo";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "tac";
			camo = "camo";
		};
	};
	class rtg_SMG_03C_TR_hex : SMG_03C_TR_hex {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03C_TR_hex";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "tac";
			camo = "hex";
		};
	};
	class rtg_SMG_03C_TR_khaki : SMG_03C_TR_khaki {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03C_TR_khaki";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "tac";
			camo = "khaki";
		};
	};
	// Long Barrel
	class UK3CB_P90_black;
	class UK3CB_P90_camo;
	class UK3CB_P90_hex;
	class UK3CB_P90_khaki;
	class UK3CB_P90_TR_black;
	class UK3CB_P90_TR_camo;
	class UK3CB_P90_TR_hex;
	class UK3CB_P90_TR_khaki;
	class rtg_SMG_03_black : UK3CB_P90_black {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03_black";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "Loptic";
			camo = "black";
		};
	};
	class rtg_SMG_03_camo : UK3CB_P90_camo {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03_camo";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "Loptic";
			camo = "camo";
		};
	};
	class rtg_SMG_03_hex : UK3CB_P90_hex {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03_hex";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "Loptic";
			camo = "hex";
		};
	};
	class rtg_SMG_03_khaki : UK3CB_P90_khaki {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03_khaki";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "Loptic";
			camo = "khaki";
		};
	};
	class rtg_SMG_03_TR_black : UK3CB_P90_TR_black {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03_TR_black";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "Ltac";
			camo = "black";
		};
	};
	class rtg_SMG_03_TR_camo : UK3CB_P90_TR_camo {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03_TR_camo";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "Ltac";
			camo = "camo";
		};
	};
	class rtg_SMG_03_TR_hex : UK3CB_P90_TR_hex {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03_TR_hex";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "Ltac";
			camo = "hex";
		};
	};
	class rtg_SMG_03_TR_khaki : UK3CB_P90_TR_khaki {
		RTG_WEAPON_BASE
		baseWeapon = "rtg_SMG_03_TR_khaki";
		magazines[] = {"rtg_p90"};
		mode[] = {"Single", "FullAuto"};
		recoil = "rtg_9mm_primary";
		class Single : Single
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_p90";
			style = "Ltac";
			camo = "khaki";
		};
	};

class rtg_rifle_samr2_9mm : arifle_SPAR_01_blk_F
{
	RTG_WEAPON_BASE
	recoil = "rtg_9mm_primary";
	baseWeapon = "rtg_rifle_samr2_9mm";
	displayName = "LAR-9 Carbine";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	ACE_barrelTwist = 228.6;
	ACE_barrelLength = 457.2;
	ace_railHeightAboveBore = 2.5;
	reloadAction = "NIA_GestureReload416";
	model = "hlc_wp_ar15\mesh\LAR15_samr\samr.p3d";
	picture = "\hlc_wp_ar15\tex\ui\gear_SAMR_ca";
	descriptionShort = "9mm Pistol Carbine";
	discretedistance[] = {100, 200, 300, 400, 500};
	discretedistanceinitindex = 0;
	hiddenSelections[] = {"Upper", "Lower", "D-Ring", "Rails", "Panels", "VFG", "Harris", "Patch", "Stock"};
	hiddenSelectionsTextures[] = {"hlc_wp_ar15\tex\samr\upper_co.paa", "hlc_wp_ar15\tex\samr\lower2_co.paa", "hlc_wp_ar15\tex\samr\ras_co.paa", "hlc_wp_ar15\tex\samr\risras_co.paa", "hlc_wp_ar15\tex\samr\xtm2_co.paa", "hlc_wp_ar15\tex\melon_cqbr\vgrip_co.paa", "hlc_wp_ar15\tex\samr\hbipod_co.paa", "", "rtgEquipment\tex\rtgTesting.paa"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_samr";
		calibre = "N9";
	};
};

// MP7
	class rhsusf_weap_MP7A2;
	class rhsusf_weap_MP7A2_aor1;
	class rhsusf_weap_MP7A2_desert;
	class rhsusf_weap_MP7A2_winter;
	class rtg_weap_mp7a2 : rhsusf_weap_MP7A2
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_weap_mp7a2";
		
		recoil = "rtg_9mm_primary";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_mp7";
			camo = "black";
		};
	};
	class rtg_weap_mp7a2_aor1 : rhsusf_weap_MP7A2_aor1
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_weap_mp7a2_aor1";
		
		recoil = "rtg_9mm_primary";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_mp7";
			camo = "aor1";
		};
	};
	class rtg_weap_mp7a2_desert : rhsusf_weap_MP7A2_desert
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_weap_mp7a2_desert";
		
		recoil = "rtg_9mm_primary";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_mp7";
			camo = "desert";
		};
	};
	class rtg_weap_mp7a2_winter : rhsusf_weap_MP7A2_winter
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_weap_mp7a2_winter";
		
		recoil = "rtg_9mm_primary";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_mp7";
			camo = "winter";
		};
	};

class SMG_02_F;
class rtg_smg_02 : SMG_02_F
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_smg_02";
	
	recoil = "rtg_9mm_primary";
	displayName = "CZ EVO 9mm SMG";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
};

// Battle Rifles
class rtg_rifle_samr2_50bw : arifle_SPAR_01_blk_F
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_rifle_samr2_50bw";
	displayName = "LAR-50 DMR";
	magazineWell[] = {"rtg_50_bw_STANAG"};
	magazines[] = {"rtg_10rnd_10bw"};
	ACE_barrelTwist = 228.6;
	ACE_barrelLength = 457.2;
	ace_railHeightAboveBore = 2.5;
	reloadAction = "NIA_GestureReload416";
	model = "hlc_wp_ar15\mesh\LAR15_samr\samr.p3d";
	picture = "\hlc_wp_ar15\tex\ui\gear_SAMR_ca";
	descriptionShort = ".50 BW DMR";
	discretedistance[] = {100, 200, 300, 400, 500};
	discretedistanceinitindex = 0;
	hiddenSelections[] = {"Upper", "Lower", "D-Ring", "Rails", "Panels", "VFG", "Harris", "Patch", "Stock"};
	hiddenSelectionsTextures[] = {"hlc_wp_ar15\tex\samr\upper_co.paa", "hlc_wp_ar15\tex\samr\lower2_co.paa", "hlc_wp_ar15\tex\samr\ras_co.paa", "hlc_wp_ar15\tex\samr\risras_co.paa", "hlc_wp_ar15\tex\samr\xtm2_co.paa", "hlc_wp_ar15\tex\melon_cqbr\vgrip_co.paa", "hlc_wp_ar15\tex\samr\hbipod_co.paa", "", "rtgEquipment\tex\rtgTesting.paa"};
	modes[] = {"Single"};
	recoil = "rtg_50bw_rifle";
	class Single : Single
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";

			closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
			closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
			soundClosure[] = {closure1, 0.5, closure2, 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
		};
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_samr";
		calibre = "N50";
	};
};

// HK417
	class arifle_SPAR_03_blk_f;
	class arifle_SPAR_03_khk_f;
	class arifle_SPAR_03_snd_f;
	class rtg_hk417_blk : arifle_SPAR_03_blk_f
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_hk417_blk";
		ACE_barrelLength = 508;
		displayName = "HK-417 (BLK)";
		magazineWell[] = {"CBA_762x51_M14"};
		magazines[] = {"rtg_20Rnd_762x51"};
		recoil = "rtg_762n_rifle";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_hk417";
			camo = "black";
		};
		modes[] = {"Single", "FullAuto"};
		class Single: Single
		{
			reloadTime = 0.088235;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.088235;
		};
	};
	class rtg_hk417_khk : arifle_SPAR_03_khk_f
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_hk417_khk";
		ACE_barrelLength = 508;
		displayName = "HK-417 (KHK)";
		magazineWell[] = {"CBA_762x51_M14"};
		magazines[] = {"rtg_20Rnd_762x51"};
		recoil = "rtg_762n_rifle";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_hk417";
			camo = "khaki";
		};
	};
	class rtg_hk417_snd : arifle_SPAR_03_snd_f
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_hk417_snd";
		ACE_barrelLength = 508;
		displayName = "HK-417 (SND)";
		magazineWell[] = {"CBA_762x51_M14"};
		magazines[] = {"rtg_20Rnd_762x51"};
		recoil = "rtg_762n_rifle";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_hk417";
			camo = "sand";
		};
	};

// G3A3
	class rtg_G3KA4_RAS : arifle_SPAR_03_blk_f
	{
		RTG_WEAPON_BASE
		model = "\hlc_wp_g3\mesh\g3_rails\g3ka4.p3d";
		ACE_barrelLength = 450;
		picture = "\hlc_wp_g3\tex\ui\gear_g3ka4_x_ca";
		hiddenSelections[] = {"Main", "Rail", "Stock"};
		handAnim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_STD_thin.rtm"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_2_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa", "hlc_wp_g3\tex\arby_mp5n\mp5_co.paa"};
		ACE_barrelTwist = 304.8;
		baseWeapon = "rtg_G3KA4_RAS";
		displayName = "G3KA4 RAS";
		magazineWell[] = {"CBA_762x51_M14"};
		magazines[] = {"rtg_20Rnd_762x51"};
		recoil = "rtg_762n_carbine";
		class FullAuto : FullAuto
		{
			class StandardSound : StandardSound
			{
				soundSetShot[] = {"g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet"};
			};
		};
		class Single : Single
		{
			class StandardSound : StandardSound
			{
				soundSetShot[] = {"g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_g3a3";
			grip = "ris";
		};
	};

	class rtg_G3A3_RIS : arifle_SPAR_03_blk_f
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_G3A3_RIS";
		displayName = "G3A3 RIS";
		recoil = "rtg_762n_rifle";
		magazineWell[] = {"CBA_762x51_M14"};
		ACE_barrelLength = 450;
		magazines[] = {"rtg_20Rnd_762x51"};
		handAnim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_STD_thin.rtm"};
		model = "\hlc_wp_g3\mesh\g3a3\g3a3_railed.p3d";
		hiddenSelections[] = {"Main", "Reciever", "Rec2", "Grip", "rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_co.paa", "hlc_wp_g3\tex\sg1\g3sg2_co.paa", "hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.paa", "hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa"};
		class FullAuto : FullAuto
		{
			class StandardSound : StandardSound
			{
				soundSetShot[] = {"g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet"};
			};
		};
		class Single : Single
		{
			class StandardSound : StandardSound
			{
				soundSetShot[] = {"g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_g3a3";
			grip = "thin";
		};
	};

	class rtg_G3A3_wide_RIS : arifle_SPAR_03_blk_f
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_G3A3_wide_RIS";
		displayName = "G3A3 Wide RIS";
		magazineWell[] = {"CBA_762x51_M14"};
		magazines[] = {"rtg_20Rnd_762x51"};
		ACE_barrelLength = 450;
		recoil = "rtg_762n_rifle";
		model = "\hlc_wp_g3\mesh\g3a3\g3a3_Modern_railed.p3d";
		handAnim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_STD_wide.rtm"};
		hiddenSelections[] = {"Main", "Reciever", "Rec2", "Grip", "rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_co.paa", "hlc_wp_g3\tex\sg1\g3sg2_co.paa", "hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.paa", "hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa"};
		class FullAuto : FullAuto
		{
			class StandardSound : StandardSound
			{
				soundSetShot[] = {"g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet"};
			};
		};
		class Single : Single
		{
			class StandardSound : StandardSound
			{
				soundSetShot[] = {"g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet"};
			};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_g3a3";
			grip = "wide";
		};
	};

	class hlc_rifle_hk53RAS;
	class rtg_hk51a3 : hlc_rifle_hk53RAS
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_hk51a1";
		displayName = "HK51A3 (RIS)";
		magazineWell[] = {"CBA_762x51_M14"};
		magazines[] = {"rtg_20Rnd_762x51"};
		modes[] = {"Single", "FullAuto"};
		recoil = "rtg_762n_pdw";
		class Single: Single
		{
			reloadTime = 0.0625;
			dispersion = 0.000261799;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.0625;
			dispersion = 0.000261799;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot : rtgBipods{};
			class GripodSlot: rtgBipods {};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_hk51";
			variant = "a3";
		};
	};
	class hlc_rifle_hk33a2RIS;
	class rtg_hk51a2 : hlc_rifle_hk33a2RIS
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_hk51a2";
		displayName = "HK51A2 (RIS)";
		magazineWell[] = {"CBA_762x51_M14"};
		magazines[] = {"rtg_20Rnd_762x51"};
		modes[] = {"Single", "FullAuto"};
		recoil = "rtg_762n_pdw";
		class Single: Single
		{
			reloadTime = 0.0625;
			dispersion = 0.000261799;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.0625;
			dispersion = 0.000261799;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot : rtgBipods{};
			class GripodSlot: rtgBipods {};
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_hk51";
			variant = "a2";
		};
	};
	class hlc_rifle_hk33a2RIS_GL;
	class rtg_hk41a2_gl : hlc_rifle_hk33a2RIS_GL
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_hk41a2_gl";
		displayName = "HK51A2 (RIS/GL)";
		modes[] = {"Single", "FullAuto"};
		magazineWell[] = {"CBA_762x51_M14"};
		magazines[] = {"rtg_20Rnd_762x51"};
		recoil = "rtg_762n_pdw";
		class Single: Single
		{
			reloadTime = 0.0625;
			dispersion = 0.000261799;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.0625;
			dispersion = 0.000261799;
		};
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_hk51";
			variant = "a2gl";
		};
	};

class srifle_DMR_01_F;
class rtg_vs121 : srifle_DMR_01_F
{
	RTG_WEAPON_BASE
	
	displayName = "VS-121 50BW";
	baseWeapon = "rtg_vs121";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\a3\weapons_f_epa\longrangerifles\dmr_01\data\dmr_01_co.paa","rtgEquipment\tex\vs121.paa"};
	magazineWell[] = {"rtg_50_bw_STANAG"};
	recoil = "rtg_50bw_rifle";
	magazines[] = {"rtg_10rnd_10bw"};
};

// M14
	class rhs_weap_m14_ris_fiberglass;
	class rhs_weap_m14ebrri;
	class rhs_weap_m14_ris_d;
	class rhs_weap_m14_ris_wd;
	class rtg_m14_dmr : srifle_EBR_F
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_m14_dmr";
		
		displayName = "M14 Mod 1 EBR";
		modes[] = {"Single", "FullAuto"};
		recoil = "rtg_762n_carbine";
		RTG_STANDARD_ZOOM
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m14";
			camo = "white";
		};
	};
	class rtg_m14_dmr_blk : rhs_weap_m14ebrri
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_m14_dmr_blk";
		
		displayName = "M14 Mod 1 EBR Black";
		modes[] = {"Single", "FullAuto"};
		recoil = "rtg_762n_rifle";
		RTG_STANDARD_ZOOM
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m14";
			camo = "black";
		};
	};
	class rtg_m14_dmr_d : rhs_weap_m14_ris_d
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_m14_dmr_d";
		
		displayName = "M14 Desert";
		recoil = "rtg_762n_rifle";
		RTG_STANDARD_ZOOM
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m14";
			camo = "desert";
		};
	};
	class rtg_m14_dmr_gs : rhs_weap_m14_ris_fiberglass
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_m14_dmr_gs";
		
		displayName = "M14 Fiberglass";
		recoil = "rtg_762n_rifle";
		RTG_STANDARD_ZOOM
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m14";
			camo = "fiberglass";
		};
	};
	class rtg_m14_dmr_wd : rhs_weap_m14_ris_wd
	{
		RTG_WEAPON_BASE
		baseWeapon = "rtg_m14_dmr_wd";
		
		displayName = "M14 Woodland";
		recoil = "rtg_762n_rifle";
		RTG_STANDARD_ZOOM
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_m14";
			camo = "woodland";
		};
	};

// FAL
	class hlc_fal_base;
	class hlc_rifle_FAL5061Rail : hlc_fal_base {
		magazineWell[] = {"CBA_762x51_M14"};
		magazines[] = {"rtg_20Rnd_762x51"};
		RTG_WEAPON_BASE
		recoil = "rtg_762n_rifle";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_fal";
			form = "short";
		};
	};
	class hlc_rifle_FAL5000Rail : hlc_rifle_FAL5061Rail {
		magazineWell[] = {"CBA_762x51_M14"};
		magazines[] = {"rtg_20Rnd_762x51"};
		RTG_WEAPON_BASE
		recoil = "rtg_762n_rifle";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_fal";
			form = "full";
		};
	};
	class hlc_rifle_falosw : hlc_fal_base {
		magazineWell[] = {"CBA_762x51_M14"};
		magazines[] = {"rtg_20Rnd_762x51"};
		RTG_WEAPON_BASE
		recoil = "rtg_762n_pdw";
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_fal";
			form = "ris";
		};
	};
	class hlc_rifle_osw_gl : hlc_rifle_falosw {
		magazineWell[] = {"CBA_762x51_M14"};
		magazines[] = {"rtg_20Rnd_762x51"};
		RTG_WEAPON_BASE
		RTG_ACEAX_EMPTY 
	};

// Machine Guns
class rhs_weap_m240G;
class rtg_mag60_20 : rhs_weap_m240G
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_mag60_20";
	
	displayName = "FN M240B";
	magazineWell[] = {"CBA_762x51_LINKS"};
	magazines[] = {"rtg_200Rnd_762x51"};
	recoil = "rtg_762n_mmg";
	modes[] = {"FullAuto"};
	AB_barrelTwist = 12;
	AB_barrelLength = 17;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 630.8;
	RTG_STANDARD_ZOOM
	mass = 260.1;
	bg_bipod = 1;
	cse_bipod = 1;
	tmr_autorest_deployable = 1;
	TMR_acc_bipod = 1;
	inertia = 0.92;
	class FullAuto : manual
	{
		reloadTime = 0.070588;
		dispersion = 0.000421799;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 10;
		midRangeProbab = 0.7;
		maxRange = 20;
		maxRangeProbab = 0.1;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mag60";
		furniture = "metal";
		calibre = "N762";
	};
};
class rhs_weap_fnmag;
class rtg_mag60_20_t3 : rhs_weap_fnmag
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_mag60_20_t3";
	
	displayName = "FN MAG 60-20";
	magazineWell[] = {"CBA_762x51_LINKS"};
	magazines[] = {"rtg_200Rnd_762x51"};
	recoil = "rtg_762n_mmg";
	modes[] = {"FullAuto"};
	AB_barrelTwist = 12;
	AB_barrelLength = 17;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 630.8;
	RTG_STANDARD_ZOOM
	mass = 285.1;
	bg_bipod = 1;
	cse_bipod = 1;
	tmr_autorest_deployable = 1;
	TMR_acc_bipod = 1;
	inertia = 0.95;
	class FullAuto : manual
	{
		reloadTime = 0.070588;
		dispersion = 0.000421799;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 10;
		midRangeProbab = 0.7;
		maxRange = 20;
		maxRangeProbab = 0.1;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mag60";
		furniture = "wood";
		calibre = "N762";
	};
};

class rtg_mag10_10 : rtg_mag60_20
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_mag10_10";
	
	displayName = "FN MAG 10-10";
	recoil = "rtg_762n_lmg";
	model = "rtgEquipment\lods\MAG\MAG_F";
	modes[] = {"FullAuto"};
	AB_barrelTwist = 12;
	AB_barrelLength = 15;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 481.2;
	RTG_STANDARD_ZOOM
	mass = 172.3;
	bg_bipod = 0;
	cse_bipod = 0;
	tmr_autorest_deployable = 1;
	TMR_acc_bipod = 0;
	inertia = 0.85;
	class FullAuto : manual
	{
		reloadTime = 0.1;
		dispersion = 0.000421799;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 10;
		midRangeProbab = 0.7;
		maxRange = 20;
		maxRangeProbab = 0.1;
	};
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\ptv_weapons\machineguns\negev\Anim\ptv_negev.rtm"
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 172.3;
		class PointerSlot: asdg_FrontSideRail{};
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mag60";
		furniture = "short";
		calibre = "N762";
	};
}

// 277 Fury M240
class rtg_mag10_10_277 : rtg_mag10_10
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_mag10_10_277";
	displayName = "FN MAG 10-10 (.277)";
	recoil = "rtg_68_mmg";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mag60";
		furniture = "short";
		calibre = "N277";
	};
	magazineWell[] = {"RTG_68x51_BELT_MAGWELL"};
	magazines[] = {"rtg_100Rnd_68x51"};
	modes[] = {"FullAuto"};
	class FullAuto : FullAuto
	{
		reloadTime = 0.065;
	};
}

class rtg_m240B_277 : rtg_mag60_20
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_mag60_20_277";
	displayName = "FN M240B (.277)";
	recoil = "rtg_68_mmg";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mag60";
		furniture = "metal";
		calibre = "N277";
	}; 
	magazineWell[] = {"RTG_68x51_BELT_MAGWELL"};
	magazines[] = {"rtg_100Rnd_68x51"};
	class FullAuto : FullAuto
	{
		reloadTime = 0.065;
	};
}

class rtg_mag60_20_t3_277 : rtg_mag60_20_t3
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_mag60_20_t3_277";
	displayName = "FN MAG 60-20 (.277)";
	recoil = "rtg_68_mmg";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mag60";
		furniture = "wood";
		calibre = "N277";
	}; 
	magazineWell[] = {"RTG_68x51_BELT_MAGWELL"};
	magazines[] = {"rtg_100Rnd_68x51"};
	class FullAuto : FullAuto
	{
		reloadTime = 0.065;
	};
}

class LMG_Zafir_F;
class rtg_mg3 : LMG_Zafir_F {
	RTG_WEAPON_BASE
	baseWeapon = "rtg_mg3_funny";
	recoil = "rtg_762n_mmg";
	magazineWell[] = {"CBA_762x51_LINKS"};
	magazines[] = {"rtg_200Rnd_762x51"};
	reloadaction = "HLC_GestureReloadMG3";
	displayName = "MG3 RIS";
	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
	hiddenSelectionsTextures[] = {"\hlc_wp_mg3\tex\Standard\mg3recieverkws_black_co.paa","\hlc_wp_mg3\tex\Standard\partsmap1kws_black_co.paa","\hlc_wp_mg3\tex\Standard\partsmap2kws_black_co.paa","\hlc_wp_mg3\tex\Standard\partsmap3_black_co.paa","\hlc_wp_mg3\tex\standard\MG3_drum_co.paa"};
	handanim[] = {"OFP2_ManSkeleton","\hlc_wp_MG3\anim\handpose_MG3kws.rtm"};
	model = "\hlc_wp_MG3\mesh\mg3\mg3kws.p3d";
	picture = "\hlc_wp_mg3\tex\ui\gear_mg3kws_ca";
	discretedistance[] = {200,300,400,500,600,700,800,900,1000,1100};
	distanceZoomMin = 100;
	distanceZoomMax = 1100;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 431.8;
	maxZeroing = 1100;
	modes[] = {"FullAuto1", "FullAuto2"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 250.7;
	};
	class FullAuto1 : FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"NIA_MG3_NEW_Shot_SoundSet","MG3_Tail_SoundSet"};
		};
		reloadTime = 0.085714;
		dispersion = 0.002;
	};
	class FullAuto2 : FullAuto1
	{
		reloadTime = 0.0521739;
		textureType = "fastAuto";
	};
};

class rtg_ameli : rtg_mg3 {
	RTG_WEAPON_BASE
	baseWeapon = "rtg_ameli";
	magazineWell[] = {"CBA_556x45_MINIMI"};
	magazines[] = {"rtg_200rnd_556_45"};
	recoil = "rtg_556_lmg";
	reloadaction = "HLC_GestureReloadMG3";
	displayName = "CETME Ameli";
	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\mg3recieverkws_green_co.paa","\rtgEquipment\tex\partsmap1kws_green_co.paa","\rtgEquipment\tex\partsmap2kws_green_co.paa","\hlc_wp_mg3\tex\Standard\partsmap3_green_co.paa","\hlc_wp_mg3\tex\standard\MG3_drum_co.paa"};
	handanim[] = {"OFP2_ManSkeleton","\hlc_wp_MG3\anim\handpose_MG3kws.rtm"};
	model = "rtgEquipment\lods\CETME\CETME_F";
	picture = "\hlc_wp_mg3\tex\ui\gear_mg3kws_ca";
	discretedistance[] = {200,300,400,500,600,700,800,900,1000,1100};
	distanceZoomMin = 100;
	distanceZoomMax = 1100;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 431.8;
	maxZeroing = 1100;
	modes[] = {"FullAuto1"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class UnderBarrelSlot : rtgBipods{};
		mass = 184.7;
	};
	class FullAuto1 : FullAuto
	{
		sounds[]=
		{
			"StandardSound",
			"SilencedSound"
		};
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[]=
			{
				"SyndikatLMG_Shot_SoundSet",
				"SyndikatLMG_Tail_SoundSet",
				"SyndikatLMG_InteriorTail_SoundSet"
			};
		};
		class SilencedSound: BaseSoundModeType
		{
			SoundSetShot[]=
			{
				"SyndikatLMG_silencerShot_SoundSet",
				"SyndikatLMG_silencerTail_SoundSet",
				"SyndikatLMG_silencerInteriorTail_SoundSet"
			};
		};
		reloadTime = 0.0521739;
		dispersion = 0.002;
		textureType = "fastAuto";
	};
};

class rtg_G8A1 : arifle_SPAR_03_blk_f
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_G8A1";
	reloadAction = "HLC_GestureReloadG3SG1";
	handAnim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_STD_Wide.rtm"};
	displayName = "G8A1 RIS";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	deployedpivot = "deploypivot";
	hasBipod = true;
	recoil = "rtg_762n_lmg";
	soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20};
	soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20};
	AB_barrelTwist = 12;
	AB_barrelLength = 17.7;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 449.58;
	agm_bipod = 1;
	cse_bipod = 1;
	bg_bipod = 1;
	model = "\hlc_wp_g3\mesh\g3sg1\g3sg1_railed.p3d";
	hiddenSelections[] = {"Main", "rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3sg1\g3sg1_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa"};
	class FullAuto : FullAuto
	{
		class StandardSound : StandardSound
		{
			soundSetShot[] = {"g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet"};
		};
	};
	class Single : Single
	{
		class StandardSound : StandardSound
		{
			soundSetShot[] = {"g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet"};
		};
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3a3";
		grip = "lmg";
	};
};

class rhs_weap_pkp;
class rtg_UKM2000_F : rhs_weap_pkp
{
	RTG_WEAPON_BASE
	displayName="UKM2000";
	baseWeapon = "rtg_UKM2000_F";
	magazineWell[] = {"CBA_556x45_MINIMI"};
	magazines[] = {"rtg_200rnd_556_45"};
	recoil = "rtg_556_lmg";
	model="rtgEquipment\lods\UKM2000\UKM2000_F.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\pkm.rtm"};
	RTG_STANDARD_ZOOM
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: asdg_OpticRail1913{};
		class UnderBarrelSlot : rtgBipods{};
	};
	modes[] = {"FullAuto1"};
	class FullAuto1: FullAuto
	{
		reloadTime			= 0.078947;
		dispersion			= DISPERSION_MOA(5.5);
		soundContinuous		= 0;
		soundBurst			= 0;
		minRange			= 0;
		minRangeProbab		= 0.9;
		midRange			= 15;
		midRangeProbab		= 0.7;
		maxRange			= 30;
		maxRangeProbab		= 0.1;
		aiBurstTerminable	= 1;
		aiRateOfFire		= 1e-006;
		showToPlayer		= 1;
	};
};

// Launchers
class launch_MRAWS_olive_rail_F;
class launch_MRAWS_sand_rail_F;
class rtg_MRAWS_olive : launch_MRAWS_olive_rail_F
{
	RTG_WEAPON_BASE
	
	displayName = "M3 MAAWS (Olive)";
	baseWeapon = "rtg_MRAWS_olive";
	magazineWell[] = {"CBA_Carl_Gustaf"};
	magazines[] = {"rtg_MRAWS_HEAT_F"};
	ace_reloadlaunchers_enabled = 1;
	class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
};
class rtg_MRAWS_sand : launch_MRAWS_sand_rail_F
{
	RTG_WEAPON_BASE
	
	displayName = "M3 MAAWS (Sand)";
	baseWeapon = "rtg_MRAWS_sand";
	magazineWell[] = {"CBA_Carl_Gustaf"};
	magazines[] = {"rtg_MRAWS_HEAT_F"};
	ace_reloadlaunchers_enabled = 1;
	class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
};
class rtg_sal_Launcher : launch_MRAWS_olive_rail_F
{
	RTG_WEAPON_BASE
	
	displayName = "M3 MAAWS (Black/Sal)";
	baseWeapon = "rtg_sal_Launcher";
	magazineWell[] = {"CBA_Carl_Gustaf"};
	magazines[] = {"rtg_MRAWS_HEAT_F"};
	ace_reloadlaunchers_enabled = 1;
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\salLauncher.paa","\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"};
	class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
};

class launch_Titan_short_base;
class launch_I_Titan_short_F : launch_Titan_short_base
{
	RTG_WEAPON_BASE
	
	displayName = "M6E2 MPRL (Olive)";
	baseWeapon = "rtg_MPRL_olive";
	mass = 225;
	ace_reloadlaunchers_enabled = 1;
};

class launch_B_Titan_short_F : launch_Titan_short_base
{
	RTG_WEAPON_BASE
	
	displayName = "M6E2 MPRL (Sand)";
	baseWeapon = "rtg_MPRL_sand";
	mass = 225;
	ace_reloadlaunchers_enabled = 1;
};

class launch_RPG7_F;
class rtg_pslr1_rpg7 : launch_RPG7_F
{
	RTG_WEAPON_BASE
	
	displayName = "PSLR-1";
	baseWeapon = "rtg_pslr1";
	mass = 95.5;
	ace_reloadlaunchers_enabled = 1;
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\PSLR-1.paa"};
	magazines[] = {"RPG7_F"};
	magazineWell[] = {"RPG7"};
	RTG_STANDARD_ZOOM
}

// shotguns
class rtg_shotgun : rhs_weap_M590_5RD {
	RTG_WEAPON_BASE
	
	displayName = "Mossberg 590";
	baseWeapon = "rtg_shotgun";
	magazineWell[] = {"CBA_12g_6rnds"};
	magazines[] = {"rtg_6Rnd_00Buck"};
};

class ACWP_M4A5_145_troy_base_BLK;
class rtg_rifle_samr2_12g : arifle_SPAR_01_blk_F
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_rifle_samr2_12g";
	displayName = "LAR-12 Shotgun";
	ACE_barrelTwist = 228.6;
	ACE_barrelLength = 457.2;
	ace_railHeightAboveBore = 2.5;
	reloadAction = "NIA_GestureReload416";
	model = "hlc_wp_ar15\mesh\LAR15_samr\samr.p3d";
	picture = "\hlc_wp_ar15\tex\ui\gear_SAMR_ca";
	descriptionShort = "12g Shotgun AR";
	discretedistance[] = {100};
	discretedistanceinitindex = 0;
	hiddenSelections[] = {"Upper", "Lower", "D-Ring", "Rails", "Panels", "VFG", "Harris", "Patch", "Stock"};
	hiddenSelectionsTextures[] = {"hlc_wp_ar15\tex\samr\upper_co.paa", "hlc_wp_ar15\tex\samr\lower2_co.paa", "hlc_wp_ar15\tex\samr\ras_co.paa", "hlc_wp_ar15\tex\samr\risras_co.paa", "hlc_wp_ar15\tex\samr\xtm2_co.paa", "hlc_wp_ar15\tex\melon_cqbr\vgrip_co.paa", "hlc_wp_ar15\tex\samr\hbipod_co.paa", "", "rtgEquipment\tex\rtgTesting.paa"};
	magazineWell[] = {"rtg_12g_15"};
	magazines[] = {"rtg_12g_15Rnd"};
	modes[] = {"Single"};
	recoil = "rhs_weap_scarl_folded_recoil";
	class Single: Single
	{
		reloadTime = 0.18;
		dispersion = 0.001666789;
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"NIA_Saiga12K_NEW_Shot_SoundSet","Nia_saiga_tail_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[] = {"Nia_rpk_Shot_Silenced_SoundSet","Nia_rpk_ShotTail_Silenced_SoundSet"};
		};
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_samr";
		calibre = "N12";
	};
};

class rtg_12g_m4a5 : ACWP_M4A5_145_troy_base_BLK {
	RTG_WEAPON_BASE
    displayName="M4A5 12g Auto";
	magazineWell[] = {"rtg_12g_15"};
	magazines[] = {"rtg_12g_15Rnd"};
	modes[] = {"Single"};
	recoil = "rhs_weap_scarl_folded_recoil";
	hiddenSelectionsTextures[] = 
	{
		"m4A5_troy\tex\m4A5\barrel_co.paa",
		"rtgEquipment\tex\shrikeReceiver.paa",
		"M4A5_Troy\tex\troy_cut_black_co.paa",
		"ACWP_Core\tex\ctr\ctr_co.paa",
		"m4A5_troy\tex\m4A5\mlok_co.paa",
		"m4A5_troy\tex\m4A5\mloklong_co.paa",
		"",
		"rtgEquipment\tex\shrikeStock.paa",
		"","","","",
		"acwp_core\tex\roe_co.paa"
	};
	RTG_ACEAX_EMPTY 
	class Single: Single
	{
		reloadTime = 0.2;
		dispersion = 0.001666789;
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"NIA_Saiga12K_NEW_Shot_SoundSet","Nia_saiga_tail_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[] = {"Nia_rpk_Shot_Silenced_SoundSet","Nia_rpk_ShotTail_Silenced_SoundSet"};
		};
	};
};
// Custom
class texRifle : ACWP_M4A5_145_troy_base_BLK {
	RTG_WEAPON_BASE
    displayName="M4A5 .50 BW (Tex)";
	magazineWell[] = {"rtg_50_bw_STANAG"};
	recoil = "rtg_50bw_rifle";
	magazines[] = {"rtg_10rnd_10bw"};
	hiddenSelectionsTextures[] = 
	{
		"m4A5_troy\tex\m4A5\barrel_co.paa",
		"rtgEquipment\tex\texRifle.paa",
		"M4A5_Troy\tex\troy_cut_black_co.paa",
		"ACWP_Core\tex\ctr\ctr_co.paa",
		"m4A5_troy\tex\m4A5\mlok_co.paa",
		"m4A5_troy\tex\m4A5\mloklong_co.paa",
		"",
		"",
		"","","","",
		""
	};
	RTG_ACEAX_EMPTY 

	modes[] = {"Single"};
	class Single : Single
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";

			closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
			closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
			soundClosure[] = {closure1, 0.5, closure2, 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
		};
	};
};

class rtg_f2000_Shrike : rtg_f2000_tan
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_f2000_Shrike";
	
	displayName = "F2000 [Shrike]";
	modes[] = {"Single","FullAuto"};
	recoil = "rtg_300_rifle";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\f2000_shrike.paa"};
	RTG_ACEAX_EMPTY 
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: asdg_MuzzleSlot{};
		class CowsSlot: asdg_OpticRail1913{};
		class PointerSlot: asdg_FrontSideRail{};
	};
};

class sgun_HunterShotgun_01_F;
class rtg_nitro : sgun_HunterShotgun_01_F {
	RTG_WEAPON_BASE
    displayName=".700 Nitro Express";
	magazines[] = {"rtg_nitroSlug"};
	recoil = "700Nitro";
	reloadTime = 0.1;
};

class mortar_155mm_AMOS;
class RHS_weap_M119: mortar_155mm_AMOS
{
	magazines[] =
	{
		"RHS_mag_m1_he_12",
		"rhs_mag_m314_ilum_4",
		"rhs_mag_m60a2_smoke_4"
	};
}

#include "weaponClasses\acr.h"
#include "weaponClasses\scar.h"
#include "weaponClasses\hk416.h"
#include "weaponClasses\m4.h"
#include "weaponClasses\mp5.h"
#include "weaponClasses\m249.h"
#include "weaponClasses\ar15.h"
#include "weaponClasses\aug.h"
#include "weaponClasses\g36.h"
#include "weaponClasses\grot.h"
#include "weaponClasses\xm8.h"
#include "weaponClasses\viking.h"
#include "weaponClasses\ngsw.h"