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

// shotguns
class rtg_shotgun : rhs_weap_M590_5RD {
	RTG_WEAPON_BASE
	
	displayName = "Mossberg 590";
	baseWeapon = "rtg_shotgun";
	magazineWell[] = {"CBA_12g_6rnds"};
	magazines[] = {"rtg_6Rnd_00Buck"};
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

class RTG_M16A4_GL_Shrike : JCA_arifle_M16A4_GL_olive_F
{
	baseWeapon = "RTG_M16A4_GL_Shrike";
	displayName = "M16A4 5.56mm GL (Shrike)";
	magazineWell[] = {"CBA_300BLK_STANAG"};
    magazines[] = {"rtg_30rnd_300_blk"};
    recoil = "rtg_300_rifle";
	RTG_ACEAX_EMPTY
	RTG_WEAPON_BASE
	hiddenSelectionsTextures[] = {"weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_01_olive_CO.paa","weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_02_olive_CO.paa","weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_03_olive_CO.paa","weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_04_black_CO.paa"};
}

class RTG_M4A5_145_Tex : ACWP_M4A5_145_troy_base_BLK {
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