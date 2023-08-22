// Base Classes
class Rifle;
class Rifle_Base_F;
class PointerSlot_Rail;
class PointerSlot;
class asdg_UnderSlot;
class UGL_F;
class asdg_MuzzleSlot;
class WeaponSlotsInfo;
class asdg_SlotInfo;
class compatibleItems;
class asdg_OpticRail;
class MuzzleSlot_556;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913;
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
class UK3CB_FAMAS_F1;
class UK3CB_FAMAS_F1_GLM203;

class rtg_famas_f1_ris : UK3CB_FAMAS_F1 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="FAMAS (Nato)";
	baseWeapon = "rtg_famas_f1_ris";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "recoil_mp5a2";
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
};

class rtg_famas_f1_ris_GL : UK3CB_FAMAS_F1_GLM203 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="FAMAS (Nato/GL)";
	baseWeapon = "rtg_famas_f1_ris_GL";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "recoil_mp5a2";
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
};

class rtg_samr2 : arifle_SPAR_01_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_samr2";
	Author = "Shrike";
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

class rtg_samr2_545 : arifle_SPAR_01_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_samr2_545";
	Author = "Shrike";
	displayName = "LAR-45 5.45 Mutant";
	magazineWell[] = {"AK_545x39"};
	magazines[] = {"rtg_30rnd_545_49"};
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
		calibre = "N545";
	};
};

class rtg_samr2_300 : arifle_SPAR_01_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_samr2_300";
	Author = "Shrike";
	displayName = "LAR-15 .300 Carbine";
	magazineWell[] = {"CBA_300BLK_STANAG"};
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

// F-2000
class arifle_Mk20_plain_F;
class arifle_Mk20_F;
class arifle_Mk20C_plain_F;
class arifle_Mk20C_F;
class rtg_f2000_tan : arifle_Mk20_plain_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_f2000_tan";
	Author = "Shrike";
	displayName = "F2000 Tan";
	modes[] = {"Single","FullAuto"};
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
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_f2000_camo";
	Author = "Shrike";
	displayName = "F2000 Camo";
	modes[] = {"Single","FullAuto"};
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
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_f2000C_tan";
	Author = "Shrike";
	displayName = "F2000 Carbine Tan";
	modes[] = {"Single","FullAuto"};
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
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_f2000C_camo";
	Author = "Shrike";
	displayName = "F2000 Carbine Camo";
	modes[] = {"Single","FullAuto"};
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
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_vector_9mm";
	Author = "Shrike";
	displayName = "Vector 9mm SMG";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
};

class KA_UMP9;
class rtg_ump9 : KA_UMP9
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_ump9";
	Author = "Shrike";
	displayName = "UMP9 SMG";
	recoil = "recoil_mp5a2";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	modes[] = {"Single","FullAuto"};
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
	};
}

class KA_UMP45;
class rtg_ump50 : KA_UMP45
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_ump50";
	Author = "Shrike";
	displayName = "UMP50 SMG";
	recoil = "recoil_mk200";
	magazineWell[] = {"rtg_50_ae_20rnd_mag"};
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
}

class rtg_vector_50ae : SMG_01_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_vector_50ae";
	Author = "Shrike";
	displayName = "Vector .50 SMG";
	recoil = "recoil_mk200";
	magazineWell[] = {"rtg_50_ae_20rnd_mag"};
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
};

class hgun_PDW2000_F;
class rtg_pdw2000_9mm : hgun_PDW2000_F
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_pdw2000_9mm";
	displayName = "CPW 9mm SMG";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "recoil_mp5a2";
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
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_SMG_03C_black";
	magazines[] = {"rtg_p90"};
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
		model = "rtg_ace_expanded_p90";
		style = "optic";
		camo = "black";
	};
};
class rtg_SMG_03C_camo : SMG_03C_camo {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_SMG_03C_camo";
	magazines[] = {"rtg_p90"};
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
		model = "rtg_ace_expanded_p90";
		style = "optic";
		camo = "camo";
	};
};
class rtg_SMG_03C_hex : SMG_03C_hex {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_SMG_03C_hex";
	magazines[] = {"rtg_p90"};
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
		model = "rtg_ace_expanded_p90";
		style = "optic";
		camo = "hex";
	};
};
class rtg_SMG_03C_khaki : SMG_03C_khaki {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_SMG_03C_khaki";
	magazines[] = {"rtg_p90"};
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
		model = "rtg_ace_expanded_p90";
		style = "optic";
		camo = "khaki";
	};
};
class rtg_SMG_03C_TR_black : SMG_03C_TR_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_SMG_03C_TR_black";
	magazines[] = {"rtg_p90"};
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
		model = "rtg_ace_expanded_p90";
		style = "tac";
		camo = "black";
	};
};
class rtg_SMG_03C_TR_camo : SMG_03C_TR_camo {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_SMG_03C_TR_camo";
	magazines[] = {"rtg_p90"};
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
		model = "rtg_ace_expanded_p90";
		style = "tac";
		camo = "camo";
	};
};
class rtg_SMG_03C_TR_hex : SMG_03C_TR_hex {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_SMG_03C_TR_hex";
	magazines[] = {"rtg_p90"};
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
		model = "rtg_ace_expanded_p90";
		style = "tac";
		camo = "hex";
	};
};
class rtg_SMG_03C_TR_khaki : SMG_03C_TR_khaki {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_SMG_03C_TR_khaki";
	magazines[] = {"rtg_p90"};
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
		model = "rtg_ace_expanded_p90";
		style = "tac";
		camo = "khaki";
	};
};

class rtg_rifle_samr2_9mm : arifle_SPAR_01_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
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

class rhs_weap_m3a1_specops;
class rtg_greese_gun : rhs_weap_m3a1_specops 
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_greese_gun";
	Author = "Shrike";
	displayName = "M3A1 SD Specops";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "recoil_ktb";
};

class rhsusf_weap_MP7A2;
class rhsusf_weap_MP7A2_aor1;
class rhsusf_weap_MP7A2_desert;
class rhsusf_weap_MP7A2_winter;
class rtg_weap_mp7a2 : rhsusf_weap_MP7A2
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_mp7a2";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp7";
		camo = "black";
	};
};
class rtg_weap_mp7a2_aor1 : rhsusf_weap_MP7A2_aor1
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_mp7a2_aor1";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp7";
		camo = "aor1";
	};
};
class rtg_weap_mp7a2_desert : rhsusf_weap_MP7A2_desert
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_mp7a2_desert";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp7";
		camo = "desert";
	};
};
class rtg_weap_mp7a2_winter : rhsusf_weap_MP7A2_winter
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_mp7a2_winter";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp7";
		camo = "winter";
	};
};

class SMG_02_F;
class rtg_smg_02 : SMG_02_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_smg_02";
	Author = "Shrike";
	displayName = "CZ EVO 9mm SMG";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
};

// Battle Rifles
class rtg_rifle_samr2_50bw : arifle_SPAR_01_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
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
	recoil = "rhs_weap_scarl_folded_recoil";
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

class arifle_SPAR_03_blk_f;
class arifle_SPAR_03_khk_f;
class arifle_SPAR_03_snd_f;
class rtg_hk417_blk : arifle_SPAR_03_blk_f
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_hk417_blk";
	ACE_barrelLength = 508;
	displayName = "HK-417 Black";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
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
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_hk417_khk";
	ACE_barrelLength = 508;
	displayName = "HK-417 Khaki";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk417";
		camo = "khaki";
	};
};
class rtg_hk417_snd : arifle_SPAR_03_snd_f
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_hk417_snd";
	ACE_barrelLength = 508;
	displayName = "HK-417 Sand";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk417";
		camo = "sand";
	};
};

class rtg_G3KA4_RAS : arifle_SPAR_03_blk_f
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
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
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_G3A3_RIS";
	displayName = "G3A3 RIS";
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
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_G3A3_wide_RIS";
	displayName = "G3A3 Wide RIS";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	ACE_barrelLength = 450;
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

class srifle_DMR_01_F;
class rtg_vs121 : srifle_DMR_01_F
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "VS-121 50BW";
	baseWeapon = "rtg_vs121";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\a3\weapons_f_epa\longrangerifles\dmr_01\data\dmr_01_co.paa","rtgEquipment\tex\vs121.paa"};
	magazineWell[] = {"rtg_50_bw_STANAG"};
	recoil = "rhs_weap_scarl_folded_recoil";
	magazines[] = {"rtg_10rnd_10bw"};
};

class srifle_EBR_F;
class rhs_weap_m14ebrri;
class rhs_weap_m14_ris_d;
class rhs_weap_m14_ris_fiberglass;
class rhs_weap_m14_ris_wd;
class rtg_m14_dmr : srifle_EBR_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m14_dmr";
	Author = "Shrike";
	displayName = "M14 Mod 1 EBR";
	modes[] = {"Single", "FullAuto"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m14";
		camo = "white";
	};
};
class rtg_m14_dmr_blk : rhs_weap_m14ebrri
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m14_dmr_blk";
	Author = "Shrike";
	displayName = "M14 Mod 1 EBR Black";
	modes[] = {"Single", "FullAuto"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m14";
		camo = "black";
	};
};
class rtg_m14_dmr_d : rhs_weap_m14_ris_d
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m14_dmr_d";
	Author = "Shrike";
	displayName = "M14 Desert";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m14";
		camo = "desert";
	};
};
class rtg_m14_dmr_gs : rhs_weap_m14_ris_fiberglass
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m14_dmr_gs";
	Author = "Shrike";
	displayName = "M14 Fiberglass";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m14";
		camo = "fiberglass";
	};
};
class rtg_m14_dmr_wd : rhs_weap_m14_ris_wd
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m14_dmr_wd";
	Author = "Shrike";
	displayName = "M14 Woodland";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m14";
		camo = "woodland";
	};
};

class hlc_fal_base;
class hlc_rifle_FAL5061Rail : hlc_fal_base {
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_fal";
		form = "short";
	};
};
class hlc_rifle_FAL5000Rail : hlc_rifle_FAL5061Rail {
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_fal";
		form = "full";
	};
};
class hlc_rifle_falosw : hlc_fal_base {
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_fal";
		form = "ris";
	};
};
class hlc_rifle_SLR : hlc_fal_base {
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_fal";
		form = "slr";
	};
};
class hlc_rifle_FAL5061;
class hlc_rifle_SLRchopmod : hlc_rifle_FAL5061 {
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_fal";
		form = "chop";
	};
};
class hlc_rifle_osw_gl : hlc_rifle_falosw {
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_rifle_c1a1 : hlc_rifle_SLR {
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "";
	};
};

// Machine Guns
class LMG_Zafir_F;
class rtg_negev : LMG_Zafir_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_negev";
	Author = "Shrike";
	displayName = "Negev RIS";
	magazineWell[] = {"CBA_556x45_MINIMI"};
	magazines[] = {"rtg_200rnd_556_45"};
	recoil = "recoil_mp5a2";
	modes[] = {"FullAuto"};
};

class LMG_Mk200_F;
class LMG_Mk200_black_F;
class rtg_mk200 : LMG_Mk200_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk200";
	Author = "Shrike";
	displayName = "Stoner 99 Tan .300 BLK";
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk"};
	recoil = "rhs_recoil_mk18";
	modes[] = {"FullAuto"};
	class FullAuto : manual
	{
		sounds[] = {"StandardSound", "SilencedSound"};

		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};

		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"mk48_Shot_SoundSet", "mk48_Tail_SoundSet"};
		};

		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"mk48_silencerShot_SoundSet", "mk48_silencerTail_SoundSet"};
		};
		reloadTime = 0.09677;
		dispersion = 0.000261799;
	};
};

class rtg_mk200_blk : LMG_Mk200_black_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk200_blk";
	Author = "Shrike";
	displayName = "Stoner 99 Black .300 BLK";
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk"};
	recoil = "rhs_recoil_mk18";
	ACE_barrelTwist = 305;
	ACE_barrelLength = 465;
	AB_barrelTwist = 12;
	AB_barrelLength = 18.3;
	modes[] = {"FullAuto"};
	class FullAuto : manual
	{
		sounds[] = {"StandardSound", "SilencedSound"};

		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};

		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"mk48_Shot_SoundSet", "mk48_Tail_SoundSet"};
		};

		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"mk48_silencerShot_SoundSet", "mk48_silencerTail_SoundSet"};
		};
		reloadTime = 0.09677;
		dispersion = 0.000261799;
	};
};

class rtg_m60e4 : LMG_Mk200_black_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m60e4";
	Author = "Shrike";
	displayName = "M60E4 RIS";
	magazineWell[] = {"CBA_762x51_LINKS"};
	magazines[] = {"rtg_200Rnd_762x51"};
	recoil = "recoil_mp5a2";
	modes[] = {"FullAuto"};
	model = "\hlc_wp_M60E4\mesh\M60e4.p3d";
	hiddenSelections[] = {"Main", "rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_m60e4\tex\m60e4_co.paa", "hlc_wp_m60e4\tex\m249_para_co.paa"};
	reloadaction = "HLC_GestureReloadM60";
	picture = "\hlc_wp_M60E4\tex\ui\gear_m60e4_x_ca";
	handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_m60e4\gesture\m60e4.rtm"};
	AB_barrelTwist = 12;
	AB_barrelLength = 17;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 431.8;
	discretedistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100};
	cameradir = "aim_point";
	discreteDistanceCameraPoint[] = {"eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9", "eye10", "eye11"}; /// the angle of gun changes with zeroing
	distanceZoomMin = 100;
	distanceZoomMax = 1100;
	bg_bipod = 1;
	cse_bipod = 1;
	tmr_autorest_deployable = 1;
	TMR_acc_bipod = 1;
	class FullAuto : manual
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_M60E4\snd\m60_first", 1, 1, 10};
			closure2[] = {"\hlc_wp_M60E4\snd\m60_first", 1, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_M60E4_NEW_Shot_SoundSet", "M60E4_Tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"M60e4_silencerShot_SoundSet", "M60e4_silencerTail_SoundSet"};
		};
		reloadTime = 0.12;
		dispersion = 0.000261799;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 10;
		midRangeProbab = 0.7;
		maxRange = 20;
		maxRangeProbab = 0.1;
	};
};
class rtg_brrrt : rtg_m60e4
{
	cope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_brrrt";
	Author = "Shrike";
	displayName = "Brrt M60";
	magazineWell[] = {"CBA_762x51_LINKS"};
	magazines[] = {"rtg_200Rnd_762x51"};
	modes[] = {"FullAuto"};
	model = "\hlc_wp_M60E4\mesh\M60e4.p3d";
	hiddenSelections[] = {"Main", "rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_m60e4\tex\m60e4_co.paa", "hlc_wp_m60e4\tex\m249_para_co.paa"};
	reloadaction = "HLC_GestureReloadM60";
	picture = "\hlc_wp_M60E4\tex\ui\gear_m60e4_x_ca";
	handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_m60e4\gesture\m60e4.rtm"};
	AB_barrelTwist = 12;
	AB_barrelLength = 17;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 431.8;
	discretedistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100};
	cameradir = "aim_point";
	discreteDistanceCameraPoint[] = {"eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9", "eye10", "eye11"}; /// the angle of gun changes with zeroing
	distanceZoomMin = 100;
	distanceZoomMax = 1100;
	bg_bipod = 1;
	cse_bipod = 1;
	tmr_autorest_deployable = 1;
	TMR_acc_bipod = 1;
	class FullAuto : manual
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_M60E4\snd\m60_first", 1, 1, 10};
			closure2[] = {"\hlc_wp_M60E4\snd\m60_first", 1, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_M60E4_NEW_Shot_SoundSet", "M60E4_Tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"M60e4_silencerShot_SoundSet", "M60e4_silencerTail_SoundSet"};
		};
		reloadTime = 0.001;
		dispersion = 0.000261799;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 10;
		midRangeProbab = 0.7;
		maxRange = 20;
		maxRangeProbab = 0.1;
	};
};

class GunParticles;
class rtg_L4 : LMG_Mk200_black_F {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_L4";
	recoil = "rhs_recoil_mp7";
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 410.1;
	deployedPivot = "deploypivot";
	hasBipod = 1;
	soundBipodDown[] = {"NIA_wp_Bren\snd\Bren_Bipod_down",1,1,5};
	soundBipodUp[] = {"NIA_wp_Bren\snd\Bren_Bipod_up",1,1,5};
	reloadAction = "HLC_GestureReload_L4A3";
	handAnim[] = {"OFP2_ManSkeleton","NIA_wp_Bren\anim\Handgesture_L4A3.rtm"};
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	displayName = "L4 'Bren' 7.62 Nato";
	model = "NIA_wp_Bren\mesh\Bren\L4A3.p3d";
	drysound[] = {"\hlc_core\sound\empty_machineguns",1,1,10};
	reloadMagazineSound[] = {"NIA_wp_Bren\Snd\NIA_L4A3_Bren_reload.wav",0.85,1,15};
	changeFiremodeSound[] = {"NIA_wp_Bren\snd\AMTswitch",1,1,5};
	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	maxZeroing = 2000;
	discretedistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
	discreteDistanceCameraPoint[] = {"eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000","eye_1100","eye_1200","eye_1300","eye_1400","eye_1500","eye_1600","eye_1700","eye_1800","eye_1900","eye_2000"};
	discretedistanceinitindex = 0;
	cameraDir = "eye_look";
	opticszoominit = 0.75;
	opticszoommax = 1.1;
	opticszoommin = 0.25;
	inertia = 0.953;
	picture = "\NIA_wp_Bren\tex\ui\gear_L4A3LMG_ca.paa";
	modes[] = {"FullAuto","Single"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 207.75398;
		class UnderBarrelSlot{};
		class CowsSlot{};
		class PointerSlot{};
		class MuzzleSlot{};
	};
	class GunParticles: GunParticles
	{
		class SecondEffect
		{
			positionName = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName = "CaselessAmmoCloud";
		};
	};
	class Single: Single
	{
		sounds[] = {"StandardSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"NIA_L4A3_Shot_SoundSet","NIA_L4A3_tail_SoundSet"};
		};
		reloadtime = "(60/500)";
		dispersion = 0.00075634;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 350;
		aiRateOfFireDispersion = 2;
		minRange = 20;
		minRangeProbab = 0.7;
		midRange = 150;
		midRangeProbab = 0.5;
		maxRange = 500;
		maxRangeProbab = 0.1;
	};
	class FullAuto : manual
	{
		sounds[] = {"StandardSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"NIA_L4A3_Shot_SoundSet","NIA_L4A3_tail_SoundSet"};
		};
		reloadtime = "(60/530)";
		dispersion = 0.00090179;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 1;
		midRangeProbab = 0.8;
		maxRange = 5;
		maxRangeProbab = 0.1;
	};
};

class rtg_mg3 : LMG_Zafir_F {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_mg3";
	recoil = "rhs_recoil_mk18";
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
	modes[] = {"FullAuto1"};
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
		dispersion = 0.000261799;
	};
};

class rtg_mg3_funny : rtg_mg3
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_mg3_funny";
	recoil = "rhs_recoil_mk18";
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
		dispersion = 0.000261799;
	};
	class FullAuto2 : FullAuto1
	{
		reloadTime = 0.0521739;
		textureType = "fastAuto";
	};
};

class rtg_ameli : rtg_mg3 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_ameli";
	magazineWell[] = {"CBA_556x45_MINIMI"};
	magazines[] = {"rtg_200rnd_556_45"};
	recoil = "recoil_mp5a2";
	reloadaction = "HLC_GestureReloadMG3";
	displayName = "CETME Ameli";
	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
	hiddenSelectionsTextures[] = {"\hlc_wp_mg3\tex\Standard\mg3recieverkws_green_co.paa","\hlc_wp_mg3\tex\Standard\partsmap1kws_green_co.paa","\hlc_wp_mg3\tex\Standard\partsmap2kws_green_co.paa","\hlc_wp_mg3\tex\Standard\partsmap3_green_co.paa","\hlc_wp_mg3\tex\standard\MG3_drum_co.paa"};
	handanim[] = {"OFP2_ManSkeleton","\hlc_wp_MG3\anim\handpose_MG3kws.rtm"};
	model = "\hlc_wp_MG3\mesh\mg3\mg3kws.p3d";
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
		mass = 184.7;
	};
	class FullAuto1 : FullAuto
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_saw\snd\saw_first",0.7,1,10};
			closure2[] = {"\hlc_wp_saw\snd\saw_first",0.7,1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"NIA_M249_NEW_Shot_SoundSet","saw_Tail_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[] = {"saw_silencerShot_SoundSet","saw_silencerTail_SoundSet"};
		};
		reloadTime = 0.0521739;
		dispersion = 0.000261799;
	};
};

class rtg_G8A1 : arifle_SPAR_03_blk_f
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_G8A1";
	reloadAction = "HLC_GestureReloadG3SG1";
	handAnim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_STD_Wide.rtm"};
	displayName = "G8A1 RIS";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	deployedpivot = "deploypivot";
	hasBipod = true;
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
};

class MMG_02_black_f;
class MMG_02_sand_f;
class rtg_hmg_black : MMG_02_black_f
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "LWMMG Black";
	baseWeapon = "rtg_hmg_black";
	magazineWell[] = {"CBA_762x51_LINKS"};
	magazines[] = {"rtg_200Rnd_762x51"};
	modes[] = {"FullAuto"};
	recoil = "rhs_recoil_mk18";
	class FullAuto : manual
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_M60E4\snd\m60_first", 1, 1, 10};
			closure2[] = {"\hlc_wp_M60E4\snd\m60_first", 1, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_M60E4_NEW_Shot_SoundSet", "M60E4_Tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"M60e4_silencerShot_SoundSet", "M60e4_silencerTail_SoundSet"};
		};
		reloadTime = 0.091;
		dispersion = 0.000261799;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 10;
		midRangeProbab = 0.7;
		maxRange = 20;
		maxRangeProbab = 0.1;
	};
};
class rtg_hmg_sand : MMG_02_sand_f
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "LWMMG Sand";
	baseWeapon = "rtg_hmg_sand";
	magazineWell[] = {"CBA_762x51_LINKS"};
	magazines[] = {"rtg_200Rnd_762x51"};
	modes[] = {"FullAuto"};
	recoil = "rhs_recoil_mk18";
	class FullAuto : manual
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_M60E4\snd\m60_first", 1, 1, 10};
			closure2[] = {"\hlc_wp_M60E4\snd\m60_first", 1, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_M60E4_NEW_Shot_SoundSet", "M60E4_Tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"M60e4_silencerShot_SoundSet", "M60e4_silencerTail_SoundSet"};
		};
		reloadTime = 0.091;
		dispersion = 0.000261799;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 10;
		midRangeProbab = 0.7;
		maxRange = 20;
		maxRangeProbab = 0.1;
	};
};

// Launchers
class launch_MRAWS_olive_F;
class launch_MRAWS_sand_F;
class rtg_MRAWS_olive : launch_MRAWS_olive_F
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "M3E1 MAAWS (Olive)";
	baseWeapon = "rtg_MRAWS_olive";
	magazineWell[] = {"CBA_Carl_Gustaf"};
	magazines[] = {"rtg_MRAWS_HEAT_F"};
	ace_reloadlaunchers_enabled = 1;
};
class rtg_MRAWS_sand : launch_MRAWS_sand_F
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "M3E1 MAAWS (Sand)";
	baseWeapon = "rtg_MRAWS_sand";
	magazineWell[] = {"CBA_Carl_Gustaf"};
	magazines[] = {"rtg_MRAWS_HEAT_F"};
	ace_reloadlaunchers_enabled = 1;
};

class launch_Titan_short_base;
class launch_I_Titan_short_F : launch_Titan_short_base
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "M6E2 MPRL (Olive)";
	baseWeapon = "rtg_MPRL_olive";
	mass = 225;
	ace_reloadlaunchers_enabled = 1;
};

class launch_B_Titan_short_F : launch_Titan_short_base
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "M6E2 MPRL (Sand)";
	baseWeapon = "rtg_MPRL_sand";
	mass = 225;
	ace_reloadlaunchers_enabled = 1;
};

class launch_RPG7_F;
class rtg_pslr1_rpg7 : launch_RPG7_F
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "PSLR-1 LAT (Black)";
	baseWeapon = "rtg_pslr1";
	mass = 95.5;
	ace_reloadlaunchers_enabled = 1;
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\PSLR-1.paa"};
	magazines[] = {"RPG7_F"};
	magazineWell[] = {"RPG7"};
}

// shotguns
class rhs_weap_M590_5RD;
class rtg_shotgun : rhs_weap_M590_5RD {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "Mossberg 590";
	baseWeapon = "rtg_shotgun";
	magazineWell[] = {"CBA_12g_6rnds"};
	magazines[] = {"rtg_6Rnd_00Buck"};
};

class ACWP_M4A5_145_troy_base_BLK;
class rtg_rifle_samr2_12g : arifle_SPAR_01_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
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
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
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
	class XtdGearInfo
	{
		model = "";
	};
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

class srifle_DMR_02_F;
class rtg_50DMR_1 : srifle_DMR_02_F {
	cope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="M108 ULR (Black)";
	hasBipod = 1;
	soundBipodDown[] = {"NIA_wp_Bren\snd\Bren_Bipod_down",1,1,5};
	soundBipodUp[] = {"NIA_wp_Bren\snd\Bren_Bipod_up",1,1,5};
	magazineWell[] = {"CBA_50BMG_M107"};
	magazines[] = {"rtg_10Rnd_127x99"};
}

// Custom
class shrikeRifle : ACWP_M4A5_145_troy_base_BLK {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="M4A5 Custom .300 - Shrike";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
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
	class XtdGearInfo
	{
		model = "";
	};
};

class sgun_HunterShotgun_01_F;
class rtg_nitro : sgun_HunterShotgun_01_F {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName=".700 Nitro Express";
	magazines[] = {"rtg_nitroSlug"};
	recoil = "700Nitro";
	reloadTime = 0.1;
};

class GMG_20mm;
class raider_transport_smoke : GMG_20mm {
	scope = 1;
	dlc = "raiderTactical";
	baseWeapon = "raider_transport_smoke";
	Author = "Shrike";
	displayName = "Smoke Launcher";
	magazineWell[] = {"smokeGrenade"};
	magazines[] = {"rtg_greensmoke"};
};

#include "weaponClasses\acr.h"
#include "weaponClasses\scar.h"
#include "weaponClasses\akm.h"
#include "weaponClasses\hk416.h"
#include "weaponClasses\m4.h"
#include "weaponClasses\mp5.h"
#include "weaponClasses\m249.h"
#include "weaponClasses\ar15.h"
#include "weaponClasses\aug.h"
#include "weaponClasses\g36.h"
#include "weaponClasses\grot.h"
#include "weaponClasses\xm8.h"
#include "weaponClasses\qbz.h"