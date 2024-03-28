// Handguns
class RH_deagle;
class RH_deagles;
class RH_deagleg;
class RH_tec9;
class rtg_deagle_black : RH_deagle
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "Desert Eagle Black";
	baseWeapon = "rtg_deagle_black";
	magazineWell[] = {"RTG_50_AE"};
	magazines[] = {"rtg_50_ae_8rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_eagle";
		camo = "black";
	};
};
class rtg_deagle_gold : RH_deagleg
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "Desert Eagle Gold";
	baseWeapon = "rtg_deagle_gold";
	magazineWell[] = {"RTG_50_AE"};
	magazines[] = {"rtg_50_ae_8rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_eagle";
		camo = "gold";
	};
};
class rtg_deagle_silver : RH_deagles
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "Desert Eagle Silver";
	baseWeapon = "rtg_deagle_silver";
	magazineWell[] = {"RTG_50_AE"};
	magazines[] = {"rtg_50_ae_8rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_eagle";
		camo = "silver";
	};
};
class rtg_tec9 : RH_tec9
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "Tec9 Black";
	baseWeapon = "rtg_tec9";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	modes[] = {"Single"};
	class Single : Single
	{
		class StandardSound : StandardSound
		{
			sounds[] = {"StandardSound", "SilencedSound"};
		};
	};
};

class hgun_Pistol_heavy_01_F;
class hgun_Pistol_heavy_01_green_F;
class rhsusf_weap_m1911a1;
class hgun_ACPC2_F;
class rtg_hgun_heavy : hgun_Pistol_heavy_01_F
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "FNX-45 Tan";
	baseWeapon = "rtg_hgun_heavy";
	magazineWell[] = {"CBA_45ACP_1911"};
	magazines[] = {"rtg_8Rnd_45"};
	recoil = "recoil_pistol_acpc2";
	modes[] = {"Single"};
	class Single : Single
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			closure2[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_P226_NEW_Shot_SoundSet", "nia_p2269mm_tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"nia_p2269mm_silencerTail_SoundSet", "nia_p2269mm_silencerShot_SoundSet"};
		};
		reloadTime = 0.15;
		dispersion = 0.0029;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_fnx45";
		camo = "tan";
	};
};
class rtg_hgun_heavy_green : hgun_Pistol_heavy_01_green_F
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "FNX-45 Green";
	baseWeapon = "rtg_hgun_heavy_green";
	magazineWell[] = {"CBA_45ACP_1911"};
	magazines[] = {"rtg_8Rnd_45"};
	recoil = "recoil_pistol_acpc2";
	modes[] = {"Single"};
	class Single : Single
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			closure2[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_P226_NEW_Shot_SoundSet", "nia_p2269mm_tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"nia_p2269mm_silencerTail_SoundSet", "nia_p2269mm_silencerShot_SoundSet"};
		};
		reloadTime = 0.15;
		dispersion = 0.0029;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_fnx45";
		camo = "grn";
	};
};
class rtg_1911a1 : rhsusf_weap_m1911a1
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "M1911A1";
	baseWeapon = "rtg_1911a1";
	magazineWell[] = {"CBA_45ACP_1911"};
	magazines[] = {"rtg_8Rnd_45"};
	recoil = "recoil_pistol_acpc2";
	class Single : Single
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			closure2[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_P226_NEW_Shot_SoundSet", "nia_p2269mm_tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"nia_p2269mm_silencerTail_SoundSet", "nia_p2269mm_silencerShot_SoundSet"};
		};
		reloadTime = 0.15;
		dispersion = 0.0029;
	};
};
class RH_kimber;
class rtg_1911_modern : RH_kimber {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "M1911A3";
	baseWeapon = "rtg_1911_modern";
	magazineWell[] = {"CBA_45ACP_1911"};
	magazines[] = {"rtg_8Rnd_45"};
	recoil = "recoil_pistol_acpc2";
	modes[] = {"Single"};
	class Single : Single
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			closure2[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_P226_NEW_Shot_SoundSet", "nia_p2269mm_tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"nia_p2269mm_silencerTail_SoundSet", "nia_p2269mm_silencerShot_SoundSet"};
		};
		reloadTime = 0.15;
		dispersion = 0.0029;
	};
};

class RH_usp;
class rtg_hk_45 : RH_usp {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "USP .45";
	baseWeapon = "rtg_hk_45";
	magazineWell[] = {"CBA_45ACP_1911"};
	magazines[] = {"rtg_8Rnd_45"};
	recoil = "recoil_pistol_acpc2";
	modes[] = {"Single"};
	class Single : Single
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			closure2[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_P226_NEW_Shot_SoundSet", "nia_p2269mm_tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"nia_p2269mm_silencerTail_SoundSet", "nia_p2269mm_silencerShot_SoundSet"};
		};
		reloadTime = 0.15;
		dispersion = 0.0029;
	};
};

class acwp_glock17_black;
class rtg_g17_40 : acwp_glock17_black {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "Glock 17 .40 SW";
	baseWeapon = "rtg_g17_40";
	magazineWell[] = {"CBA_40SW_P229"};
	magazines[] = {"rtg_40SW"};
	recoil = "recoil_pistol_acpc2";
	modes[] = {"Single"};
	class Single : Single
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			closure2[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_P226_NEW_Shot_SoundSet", "nia_p2269mm_tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"nia_p2269mm_silencerTail_SoundSet", "nia_p2269mm_silencerShot_SoundSet"};
		};
		reloadTime = 0.15;
		dispersion = 0.0029;
	};
};

class rhsusf_weap_m9;
class rtg_m93R : rhsusf_weap_m9
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	baseWeapon = "rtg_m93R";
	displayName = "M93R Barreta";
	modes[] = {"Burst", "Single1"};
	class Single1 : Single
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			closure2[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_P226_NEW_Shot_SoundSet", "nia_p2269mm_tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"nia_p2269mm_silencerTail_SoundSet", "nia_p2269mm_silencerShot_SoundSet"};
		};
		reloadTime = 0.070588235;
		dispersion = 0.0029;
	};
	class Burst : Single1
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			closure2[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_P226_NEW_Shot_SoundSet", "nia_p2269mm_tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"nia_p2269mm_silencerTail_SoundSet", "nia_p2269mm_silencerShot_SoundSet"};
		};
		reloadTime = 0.070588235;
		dispersion = 0.0029;
		burst = 3;
		textureType = "burst";
	};
};

class rhs_weap_M320;
class rtg_weap_m79 : rhs_weap_M320 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	baseWeapon = "rtg_weap_m79";
	displayName = "M79 Grenade Launcher";
	model = "\rhsgref\addons\rhsgref_weapons2\m79\rhs_M79";
	reloadMagazineSound[] = {"\rhsgref\addons\rhsgref_weapon_sounds\reloads\m79_reload", 0.794328, 1, 20};
	handAnim[] = {"OFP2_ManSkeleton", "\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_M79.rtm"};
};

class RH_fn57;
class rtg_fn57 : RH_fn57
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	magazineWell[] = {"rtg_fn57_20Rnd"};
	magazines[] = {"rtg_fn57_20Rnd"};
	baseWeapon = "rtg_fn57";
	modes[] = {"Single"};
	class Single : Single
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			closure2[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_P226_NEW_Shot_SoundSet", "nia_p2269mm_tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"nia_p2269mm_silencerTail_SoundSet", "nia_p2269mm_silencerShot_SoundSet"};
		};
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_fn57";
		camo = "blk";
	};
}

class RH_fn57_t;
class rtg_fn57_t : RH_fn57_t
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	magazineWell[] = {"rtg_fn57_20Rnd"};
	magazines[] = {"rtg_fn57_20Rnd"};
	baseWeapon = "rtg_fn57_t";
	modes[] = {"Single"};
	class Single : Single
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			closure2[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_P226_NEW_Shot_SoundSet", "nia_p2269mm_tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"nia_p2269mm_silencerTail_SoundSet", "nia_p2269mm_silencerShot_SoundSet"};
		};
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_fn57";
		camo = "fde";
	};
}

class RH_fn57_g;
class rtg_fn57_g : RH_fn57_g
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	magazineWell[] = {"rtg_fn57_20Rnd"};
	magazines[] = {"rtg_fn57_20Rnd"};
	baseWeapon = "rtg_fn57_g";
	modes[] = {"Single"};
	class Single : Single
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			closure2[] = {"\hlc_wp_p226\snd\p226_dryfire", 0.75, 1, 10};
			soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"NIA_P226_NEW_Shot_SoundSet", "nia_p2269mm_tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"nia_p2269mm_silencerTail_SoundSet", "nia_p2269mm_silencerShot_SoundSet"};
		};
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_fn57";
		camo = "odg";
	};
}

class RH_python;
class rtg_coltPython : RH_python
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	magazineWell[] = {"rtg_357_6Rnd"};
	magazines[] = {"rtg_357_6Rnd"};
	baseWeapon = "rtg_coltPython";
};

class RH_mateba;
class rtg_mateba : RH_mateba
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	magazineWell[] = {"rtg_44_6Rnd"};
	magazines[] = {"rtg_44_6Rnd"};
	baseWeapon = "rtg_mateba";
};

class RH_bull;
class rtg_bull : RH_bull
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	magazineWell[] = {"rtg_44_6Rnd"};
	magazines[] = {"rtg_44_6Rnd"};
	baseWeapon = "rtg_bull";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ragbull";
		camo = "slv";
	};
};
class RH_bullb;
class rtg_bull_b : RH_bullb
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	magazineWell[] = {"rtg_44_6Rnd"};
	magazines[] = {"rtg_44_6Rnd"};
	baseWeapon = "rtg_bull_b";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ragbull";
		camo = "blk";
	};
};

class RH_ttracker;
class rtg_tracker : RH_ttracker
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	magazineWell[] = {"rtg_357_6Rnd"};
	magazines[] = {"rtg_357_6Rnd"};
	baseWeapon = "rtg_tracker";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_track";
		camo = "slv";
	};
};
class RH_ttracker_g;
class rtg_tracker_g : RH_ttracker_g
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	magazineWell[] = {"rtg_357_6Rnd"};
	magazines[] = {"rtg_357_6Rnd"};
	baseWeapon = "rtg_tracker_g";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_track";
		camo = "gld";
	};
};

class RH_mp412;
class rtg_rex : RH_mp412
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	magazineWell[] = {"rtg_357_6Rnd"};
	magazines[] = {"rtg_357_6Rnd"};
	baseWeapon = "rtg_rex";
};

class hgun_Pistol_Signal_F;
class rtg_pellet_handgun : hgun_Pistol_Signal_F
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	magazineWell[] = {"rtg_1Rnd_14g"};
	magazines[] = {"rtg_1Rnd_14g"};
	baseWeapon = "rtg_pellet_handgun";
};

class hgun_Pistol_heavy_02_F;
class rtg_rhino : hgun_Pistol_heavy_02_F 
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "Chiappa Rhino";
	magazineWell[] = {"rtg_44_6Rnd"};
	magazines[] = {"rtg_44_6Rnd"};
	baseWeapon = "rtg_rhino";
	modes[] = {"Single"};
	class Single : Single
	{
	sounds[]={"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect="DefaultHandgun";
			closure1[]={"A3\sounds_f\weapons\closure\closure_handgun_6",1.0351422,1,30};
			closure2[]={"A3\sounds_f\weapons\closure\closure_handgun_6",1.0351422,1.1,30};
			soundClosure[]={"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[]={"\RH_de\sound\desert_eagle_shot.wss",1,1,700};
			soundBegin[]={"begin1",1};
			class SoundTails
			{
				class TailInterior
				{
					sound[]={"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_interior",1.4125376,1,1400};
					frequency=1;
					volume="interior";
				};
				class TailTrees
				{
					sound[]={"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_trees",1,1,1400};
					frequency=1;
					volume="(1-interior/1.4)*trees";
				};
				class TailForest
				{
					sound[]={"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_forest",1,1,1400};
					frequency=1;
					volume="(1-interior/1.4)*forest";
				};
				class TailMeadows
				{
					sound[]={"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_meadows",1,1,1400};
					frequency=1;
					volume="(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				class TailHouses
				{
					sound[]={"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_houses",1,1,1400};
					frequency=1;
					volume="(1-interior/1.4)*houses";
				};
			};
		};
		class SilencedSound: BaseSoundModeType{};
		recoil="RH_deagleBase";
		recoilProne="RH_deagleBase";
		reloadTime=0.2;
		dispersion=0.0085000005;
	};
};

class MWB_RSH12;
class rtg_RSH12 : MWB_RSH12
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	magazineWell[] = {"RTG_50_Small_AE"};
	magazines[] = {"rtg_50_ae_5rnd_mag"};
	baseWeapon = "rtg_RSH12";
	modes[] = {"Single"};
	class Single : Single
	{
	sounds[]={"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect="DefaultHandgun";
			closure1[]={"A3\sounds_f\weapons\closure\closure_handgun_6",1.0351422,1,30};
			closure2[]={"A3\sounds_f\weapons\closure\closure_handgun_6",1.0351422,1.1,30};
			soundClosure[]={"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[]={"\RH_de\sound\desert_eagle_shot.wss",1,1,700};
			soundBegin[]={"begin1",1};
			class SoundTails
			{
				class TailInterior
				{
					sound[]={"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_interior",1.4125376,1,1400};
					frequency=1;
					volume="interior";
				};
				class TailTrees
				{
					sound[]={"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_trees",1,1,1400};
					frequency=1;
					volume="(1-interior/1.4)*trees";
				};
				class TailForest
				{
					sound[]={"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_forest",1,1,1400};
					frequency=1;
					volume="(1-interior/1.4)*forest";
				};
				class TailMeadows
				{
					sound[]={"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_meadows",1,1,1400};
					frequency=1;
					volume="(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				class TailHouses
				{
					sound[]={"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_houses",1,1,1400};
					frequency=1;
					volume="(1-interior/1.4)*houses";
				};
			};
		};
	};
};