// ACR Rifle
// .300 ACR
class hlc_acr_base;
class hlc_rifle_ACR68_SBR_tan : hlc_acr_base {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E .300 (Compact/Tan)";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "compact";
		calibre = "N300";
		camo = "sand";
	};
};
class hlc_rifle_ACR68_SBR_black : hlc_rifle_ACR68_SBR_tan {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E .300 (Compact/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "compact";
		calibre = "N300";
		camo = "black";
	};
};
class hlc_rifle_ACR68_SBR_green : hlc_rifle_ACR68_SBR_tan {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E .300 (Compact/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "compact";
		calibre = "N300";
		camo = "khaki";
	};
};
class hlc_rifle_ACR68_Carb_black : hlc_rifle_ACR68_SBR_tan {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E .300 (Carbine/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "carbine";
		calibre = "N300";
		camo = "black";
	};
};
class hlc_rifle_ACR68_Carb_tan : hlc_rifle_ACR68_Carb_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E .300 (Carbine/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "carbine";
		calibre = "N300";
		camo = "sand";
	};
};
class hlc_rifle_ACR68_Carb_green : hlc_rifle_ACR68_Carb_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E .300 (Carbine/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "carbine";
		calibre = "N300";
		camo = "khaki";
	};
};
class hlc_rifle_ACR68_MID_black : hlc_rifle_ACR68_SBR_tan {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E .300 (Rifle/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "rifle";
		calibre = "N300";
		camo = "black";
	};
};
class hlc_rifle_ACR68_MID_tan : hlc_rifle_ACR68_MID_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E .300 (Rifle/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "rifle";
		calibre = "N300";
		camo = "sand";
	};
};
class hlc_rifle_ACR68_MID_green : hlc_rifle_ACR68_MID_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E .300 (Rifle/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "rifle";
		calibre = "N300";
		camo = "khaki";
	};
};
class hlc_rifle_ACR68_full_black : hlc_rifle_ACR68_SBR_tan {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E .300 (Long/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "long";
		calibre = "N300";
		camo = "black";
	};
};
class hlc_rifle_ACR68_full_tan : hlc_rifle_ACR68_full_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E .300 (Long/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "long";
		calibre = "N300";
		camo = "sand";
	};
};
class hlc_rifle_ACR68_full_green : hlc_rifle_ACR68_full_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E .300 (Long/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "long";
		calibre = "N300";
		camo = "khaki";
	};
};

// 5.56 ACR
class hlc_acr556_base;
class hlc_rifle_ACR_SBR_tan : hlc_acr556_base {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E 5.56mm (Compact/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "compact";
		calibre = "N556";
		camo = "sand";
	};
};
class hlc_rifle_ACR_SBR_black : hlc_rifle_ACR_SBR_tan {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E 5.56mm (Compact/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "compact";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_rifle_ACR_SBR_green : hlc_rifle_ACR_SBR_tan {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E 5.56mm (Compact/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "compact";
		calibre = "N556";
		camo = "khaki";
	};
};
class hlc_rifle_ACR_Carb_black : hlc_rifle_ACR_SBR_tan {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E 5.56mm (Carbine/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "carbine";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_rifle_ACR_Carb_tan : hlc_rifle_ACR_Carb_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E 5.56mm (Carbine/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "carbine";
		calibre = "N556";
		camo = "sand";
	};
};
class hlc_rifle_ACR_Carb_green : hlc_rifle_ACR_Carb_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E 5.56mm (Carbine/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "carbine";
		calibre = "N556";
		camo = "khaki";
	};
};
class hlc_rifle_ACR_MID_black : hlc_rifle_ACR_SBR_tan {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E 5.56mm (Rifle/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "rifle";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_rifle_ACR_MID_tan : hlc_rifle_ACR_MID_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E 5.56mm (Rifle/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "rifle";
		calibre = "N556";
		camo = "sand";
	};
};
class hlc_rifle_ACR_MID_green : hlc_rifle_ACR_MID_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E 5.56mm (Rifle/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "rifle";
		calibre = "N556";
		camo = "khaki";
	};
};
class hlc_rifle_ACR_full_black : hlc_rifle_ACR_SBR_tan {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E 5.56mm (Long/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "long";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_rifle_ACR_full_tan : hlc_rifle_ACR_full_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E 5.56mm (Long/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "long";
		calibre = "N556";
		camo = "sand";
	};
};
class hlc_rifle_ACR_full_green : hlc_rifle_ACR_full_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E 5.56mm (Long/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "long";
		calibre = "N556";
		camo = "khaki";
	};
};

// ACR GL
// .300 ACR GL
class hlc_rifle_ACR68_GL_SBR_black : hlc_rifle_ACR68_SBR_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL .300 (Compact/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "compact";
		calibre = "N300";
		camo = "black";
	};
};
class hlc_rifle_ACR68_GL_SBR_tan :  hlc_rifle_ACR68_GL_SBR_black{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL .300 (Compact/Tan)";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "compact";
		calibre = "N300";
		camo = "sand";
	};
};
class hlc_rifle_ACR68_GL_SBR_green : hlc_rifle_ACR68_GL_SBR_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL .300 (Compact/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "compact";
		calibre = "N300";
		camo = "khaki";
	};
};
class hlc_rifle_ACR68_GL_Carb_black : hlc_rifle_ACR68_Carb_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL .300 (Carbine/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "carbine";
		calibre = "N300";
		camo = "black";
	};
};
class hlc_rifle_ACR68_GL_Carb_tan : hlc_rifle_ACR68_GL_Carb_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL .300 (Carbine/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "carbine";
		calibre = "N300";
		camo = "sand";
	};
};
class hlc_rifle_ACR68_GL_Carb_green : hlc_rifle_ACR68_GL_Carb_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL .300 (Carbine/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "carbine";
		calibre = "N300";
		camo = "khaki";
	};
};
class hlc_rifle_ACR68_GL_MID_black : hlc_rifle_ACR68_mid_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL .300 (Rifle/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "rifle";
		calibre = "N300";
		camo = "black";
	};
};
class hlc_rifle_ACR68_GL_MID_tan : hlc_rifle_ACR68_GL_MID_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL .300 (Rifle/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "rifle";
		calibre = "N300";
		camo = "sand";
	};
};
class hlc_rifle_ACR68_GL_MID_green : hlc_rifle_ACR68_GL_MID_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL .300 (Rifle/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "rifle";
		calibre = "N300";
		camo = "khaki";
	};
};

// 5.56 ACR GL
class hlc_rifle_ACR_GL_SBR_black : hlc_rifle_ACR_SBR_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL 5.56mm (Compact/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "compact";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_rifle_ACR_GL_SBR_tan : hlc_rifle_ACR_GL_SBR_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL 5.56mm (Compact/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "compact";
		calibre = "N556";
		camo = "sand";
	};
};
class hlc_rifle_ACR_GL_SBR_green : hlc_rifle_ACR_GL_SBR_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL 5.56mm (Compact/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "compact";
		calibre = "N556";
		camo = "khaki";
	};
};
class hlc_rifle_ACR_GL_Carb_black : hlc_rifle_ACR_Carb_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL 5.56mm (Carbine/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "carbine";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_rifle_ACR_GL_Carb_tan : hlc_rifle_ACR_GL_Carb_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL 5.56mm (Carbine/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "carbine";
		calibre = "N556";
		camo = "sand";
	};
};
class hlc_rifle_ACR_GL_Carb_green : hlc_rifle_ACR_GL_Carb_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL 5.56mm (Carbine/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "carbine";
		calibre = "N556";
		camo = "khaki";
	};
};
class hlc_rifle_ACR_GL_MID_black : hlc_rifle_ACR_MID_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL 5.56mm (Rifle/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "rifle";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_rifle_ACR_GL_MID_tan : hlc_rifle_ACR_GL_MID_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL 5.56mm (Rifle/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "rifle";
		calibre = "N556";
		camo = "sand";
	};
};
class hlc_rifle_ACR_GL_MID_green : hlc_rifle_ACR_GL_MID_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL 5.56mm (Rifle/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "rifle";
		calibre = "N556";
		camo = "khaki";
	};
};
class hlc_rifle_ACR_GL_full_black : hlc_rifle_ACR_full_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL 5.56mm (Long/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "long";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_rifle_ACR_GL_full_tan : hlc_rifle_ACR_GL_full_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL 5.56mm (Long/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "long";
		calibre = "N556";
		camo = "sand";
	};
};
class hlc_rifle_ACR_GL_full_green : hlc_rifle_ACR_GL_full_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	displayName = "Remington ACR-E GL 5.56mm (Long/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr_gl";
		barrel = "long";
		calibre = "N556";
		camo = "khaki";
	};
};
// Other ACR
class hlc_rifle_ACR68_Squant : hlc_rifle_ACR68_SBR_tan {
    class XtdGearInfo
	{
		model = "";
	};
};
class hlc_rifle_ACR_SBR_cliffhanger : hlc_rifle_ACR_SBR_tan {
    class XtdGearInfo
	{
		model = "";
	};
};
class hlc_rifle_ACR_GL_SBR_cliffhanger : hlc_rifle_ACR_GL_SBR_black {
    class XtdGearInfo
	{
		model = "";
	};
};

// 50 BW
/*
Defaults back to original weapon in game

class rtg_50_ACR_full_black : hlc_rifle_ACR_full_black {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_50_ACR_full_black";
	Author = "Shrike";
	displayName = "Remington ACR-E .50BW (Long/Black)";
	magazineWell[] = {"rtg_50_bw_STANAG"};
	magazines[] = {"rtg_10rnd_10bw"};
	modes[] = {"Single"};
	recoil = "rhs_recoil_mk18";
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
		model = "rtg_ace_expanded_acr";
		barrel = "long";
		calibre = "N50";
		camo = "black";
	};
};
class rtg_50_ACR_full_tan : hlc_rifle_ACR_full_tan {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_50_ACR_full_tan";
	Author = "Shrike";
	displayName = "Remington ACR-E .50BW (Long/Tan)";
	magazineWell[] = {"rtg_50_bw_STANAG"};
	magazines[] = {"rtg_10rnd_10bw"};
	modes[] = {"Single"};
	recoil = "rhs_recoil_mk18";
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
		model = "rtg_ace_expanded_acr";
		barrel = "long";
		calibre = "N50";
		camo = "sand";
	};
};
class rtg_50_ACR_full_green : hlc_rifle_ACR_full_green {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_50_ACR_full_green";
	Author = "Shrike";
	displayName = "Remington ACR-E .50BW (Long/Green)";
	magazineWell[] = {"rtg_50_bw_STANAG"};
	magazines[] = {"rtg_10rnd_10bw"};
	modes[] = {"Single"};
	recoil = "rhs_recoil_mk18";
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
		model = "rtg_ace_expanded_acr";
		barrel = "long";
		calibre = "N50";
		camo = "khaki";
	};
};

// 9mm
class rtg_9_ACR_SBR_tan : hlc_rifle_ACR_SBR_tan {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_9_ACR_SBR_tan";
	displayName = "Remington ACR-E 9mm (Compact/Tan)";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "compact";
		calibre = "N9";
		camo = "sand";
	};
};
class rtg_9_ACR_SBR_black : hlc_rifle_ACR_SBR_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_9_ACR_SBR_black";
	displayName = "Remington ACR-E 9mm (Compact/Black)";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "compact";
		calibre = "N9";
		camo = "black";
	};
};
class rtg_9_ACR_SBR_green : hlc_rifle_ACR_SBR_green {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_9_ACR_SBR_green";
	displayName = "Remington ACR-E 9mm (Compact/Green)";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "compact";
		calibre = "N9";
		camo = "khaki";
	};
};*/