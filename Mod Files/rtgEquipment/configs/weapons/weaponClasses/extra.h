// M1 Garand
class rhs_weap_m1garand_sa43;
class rtg_M1M : rhs_weap_m1garand_sa43
{
	RTG_WEAPON_BASE
	displayName="T35 Garand";
	baseWeapon = "rtg_M1M";
	model="rtgEquipment\lods\m1\M1M_F.p3d";
	ACE_barrelLength = 609.6;
	RTG_WEAPON_HANDLING(2.4)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: asdg_OpticRail1913{};
		class PointerSlot: asdg_FrontSideRail{};
		class UnderBarrelSlot : rtgBipods{};
	};

	RTG_STANDARD_ZOOM
}

class LMG_Zafir_F;
class rtg_mg3 : LMG_Zafir_F {
	RTG_WEAPON_BASE
	baseWeapon = "rtg_mg3_funny";
	RTG_RECOIL(mg3)
	RTG_WEAPON_HANDLING(3.5)
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
	RTG_RECOIL(ameli)
	RTG_WEAPON_HANDLING(2.9)
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

class rhs_weap_pkp;
class rtg_UKM2000_F : rhs_weap_pkp
{
	RTG_WEAPON_BASE
	displayName="UKM2000";
	baseWeapon = "rtg_UKM2000_F";
	RTG_WEAPON_HANDLING(3.4)
	magazineWell[] = {"CBA_556x45_MINIMI"};
	magazines[] = {"rtg_200rnd_556_45"};
	RTG_RECOIL(pkp)
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

// shotguns
class rtg_shotgun : rhs_weap_M590_5RD {
	RTG_WEAPON_BASE
	RTG_RECOIL(m850)
	displayName = "Mossberg 590";
	baseWeapon = "rtg_shotgun";
	RTG_WEAPON_HANDLING(1.8)
	magazineWell[] = {"CBA_12g_5rnds"};
	magazines[] = {"rtg_5Rnd_00Buck"};
};

// Custom
class RTG_M4A4_AFG_Nugg : JCA_arifle_M4A4_AFG_olive_F
{
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\M4A4_01_Nugg.paa","rtgEquipment\tex\M4A4_02_Nugg.paa","rtgEquipment\tex\M4A4_02_Nugg.paa"};
	baseWeapon = "RTG_M4A4_AFG_Nugg";
	displayName = "M4A4 5.56mm AFG (Bob the Builder)";
	RTG_ACEAX_EMPTY
	RTG_WEAPON_BASE
}

class RTG_M16A3 : JCA_arifle_M4A4_base_F
{
	model = "weapons_f_JCA_IA\Rifles\M16A4\M16A4_F.p3d";
	UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
	picture = "\weapons_f_JCA_IA\Rifles\M16A4\data\UI\Icon_arifle_M16A4_black_F_CA.paa";
	descriptionShort = "$STR_A3_CfgWeapons_arifle_SPAR_01_base_F1";
	class Library
	{
		libTextDesc = "$STR_A3_A_CfgWeapons_arifle_M16A4_base_F_Library0";
	};
	hiddenSelections[] = {"camo1","camo2"};
	handAnim[] = {"OFP2_ManSkeleton","weapons_f_JCA_IA\Rifles\M16A4\data\anim\M16A4.rtm"};
	reloadAction = "JCA_GestureReloadM16A4";

	baseWeapon = "RTG_M16A3";
	displayName = "M16A3 5.56";
	RTG_ACEAX_EMPTY
	RTG_WEAPON_BASE
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\arifle_M16A4_01_black_CO.paa","rtgEquipment\tex\arifle_M16A4_02_black_CO.paa"};
	modes[] = {"Single","FullAuto"};
	class Single: Single
	{
		reloadTime = 0.08;
		dispersion = 0.00058;
		minRange = 2;
		minRangeProbab = 0.5;
		midRange = 150;
		midRangeProbab = 0.7;
		maxRange = 250;
		maxRangeProbab = 0.2;
	};
	class FullAuto: FullAuto
	{
		reloadTime = 0.08;
		dispersion = 0.00058;
		minRange = 2;
		minRangeProbab = 0.9;
		midRange = 15;
		midRangeProbab = 0.7;
		maxRange = 30;
		maxRangeProbab = 0.05;
		aiRateOfFire = 1e-06;
	};
}

class RTG_M4A5_145_Tex : ACWP_M4A5_145_troy_base_BLK {
	RTG_WEAPON_BASE
    displayName="M4A5 .50 BW (Tex)";
	magazineWell[] = {"rtg_50_bw_STANAG"};
	RTG_RECOIL(m4a5_145_50)
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