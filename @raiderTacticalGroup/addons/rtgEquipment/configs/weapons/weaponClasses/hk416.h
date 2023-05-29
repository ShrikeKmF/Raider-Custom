class rtg_hk416_blk_s : arifle_SPAR_01_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_s";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N556";
		camo = "black";
	};
};
class rtg_hk416_khk_s : arifle_SPAR_01_khk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_khk_s";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N556";
		camo = "khaki";
	};
};
class rtg_hk416_snd_s : arifle_SPAR_01_snd_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_snd_s";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N556";
		camo = "sand";
	};
};
class rtg_hk416_blk_l : arifle_SPAR_02_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_l";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk416";
		barrel = "long";
		calibre = "N556";
		camo = "black";
	};
};
class rtg_hk416_khk_l : arifle_SPAR_02_khk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_khk_l";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk416";
		barrel = "long";
		calibre = "N556";
		camo = "khaki";
	};
};
class rtg_hk416_snd_l : arifle_SPAR_02_snd_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_snd_l";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk416";
		barrel = "long";
		calibre = "N556";
		camo = "sand";
	};
};

class rtg_hk416_blk_9 : arifle_SPAR_01_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_9";
	Author = "Shrike";
	displayName = "HK-416 9mm Black Carbine";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N9";
		camo = "black";
	};
};
class rtg_hk416_khk_9 : arifle_SPAR_01_khk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rth_hk416_khk_9";
	Author = "Shrike";
	displayName = "HK-416 9mm Khaki Carbine";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N9";
		camo = "khaki";
	};
};
class rtg_hk416_snd_9 : arifle_SPAR_01_snd_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rth_hk416_snd_9";
	Author = "Shrike";
	displayName = "HK-416 9mm Sand Carbine";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N9";
		camo = "sand";
	};
};

class rtg_hk416_blk_300_s : arifle_SPAR_01_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_300_s";
	Author = "Shrike";
	displayName = "HK-416 .300 BLK Black Short";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N300";
		camo = "black";
	};
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
class rtg_hk416_khk_300_s : arifle_SPAR_01_khk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_khk_300_s";
	Author = "Shrike";
	displayName = "HK-416 .300 BLK Khaki Short";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N300";
		camo = "khaki";
	};
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
class rtg_hk416_snd_300_s : arifle_SPAR_01_snd_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_snd_300_s";
	Author = "Shrike";
	displayName = "HK-416 .300 BLK Sand Short";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N300";
		camo = "sand";
	};
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
class rtg_hk416_blk_300 : arifle_SPAR_02_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_300";
	Author = "Shrike";
	displayName = "HK-416 .300 BLK Black Carbine";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	bg_bipod = 1;
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
		model = "rtg_ace_expanded_hk416";
		barrel = "long";
		calibre = "N300";
		camo = "black";
	};
};
class rtg_hk416_blk_300_khk : arifle_SPAR_02_khk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_300_khk";
	Author = "Shrike";
	displayName = "HK-416 .300 BLK Khaki Carbine";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	bg_bipod = 1;
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
		model = "rtg_ace_expanded_hk416";
		barrel = "long";
		calibre = "N300";
		camo = "khaki";
	};
};
class rtg_hk416_blk_300_snd : arifle_SPAR_02_snd_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_300_snd";
	Author = "Shrike";
	displayName = "HK-416 .300 BLK Sand Carbine";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	bg_bipod = 1;
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
		model = "rtg_ace_expanded_hk416";
		barrel = "long";
		calibre = "N300";
		camo = "sand";
	};
};