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
class rtg_1911_modern : hgun_ACPC2_F {
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

class rhs_weap_M320;
/*
 class rtg_xm25 : RH_deagle {
	 scope = 2;
	 dlc = "raiderTactical";
	 Author = "Shike";
	 baseWeapon = "rtg_xm25";
	 displayName = "XM 245";
	 magazines[] = {"30Rnd_65x39_caseless_msbs_mag"};
	 magazineWell[] = {"MX_65x39_MSBS"};
	 magazineReloadSwitchPhase = 0.48;
	 recoil = "recoil_MSBS65";
	 model = "a3\Weapons_F_Enoch\Rifles\MSBS\MSBS65_F";
	 hiddenSelections[] = {"Camo1","Camo2","Camo3"};
	 hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
	 handAnim[] = {"OFP2_ManSkeleton","\a3\Anims_F_Enoch\Data\Anim\handanims\MSBS65.rtm"};
	 initSpeed = -1.05;
	 inertia = 0.48;
	 dexterity = 1.5;
	 aimTransitionSpeed = 1.1;
	 maxZeroing = 500;
	 discreteDistance[] = {100,150,200,300,400,500};
	 discreteDistanceInitIndex = 1;
	 modes[] = {"Single"};
	 class Single: Single
	 {
		 reloadTime = 0.075;
		 dispersion = 0.00073;
		 minRange = 2;
		 minRangeProbab = 0.5;
		 midRange = 150;
		 midRangeProbab = 0.7;
		 maxRange = 250;
		 maxRangeProbab = 0.2;
	 };
 };*/

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