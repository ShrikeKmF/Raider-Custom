// Long
class rhs_weap_m249_pip;
class rhs_weap_m249_pip_ris : rhs_weap_m249_pip
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	recoil = "recoil_mp5a2";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "long";
		calibre = "N556";
		stock = "fixed";
	};
};
class rhs_weap_lmg_minimi_railed;
class rhs_weap_m249_pip_L : rhs_weap_lmg_minimi_railed
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	recoil = "recoil_mp5a2";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "long";
		calibre = "N556";
		stock = "pip";
	};
};
class rhs_weap_m249_pip_L_para : rhs_weap_m249_pip_L
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	recoil = "recoil_mp5a2";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "long";
		calibre = "N556";
		stock = "para";
	};
};
class rhs_weap_m249_light_L :rhs_weap_m249_pip_L
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	recoil = "recoil_mp5a2";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "long";
		calibre = "N556";
		stock = "light";
	};
};

// Short
class rhs_weap_m249_pip_S : rhs_weap_lmg_minimi_railed
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	recoil = "recoil_mp5a2";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "short";
		calibre = "N556";
		stock = "pip";
	};
};
class rhs_weap_m249_pip_S_para : rhs_weap_m249_pip_S
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	recoil = "recoil_mp5a2";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "short";
		calibre = "N556";
		stock = "para";
	};
};
class rhs_weap_m249_light_S :rhs_weap_m249_pip_S
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	recoil = "recoil_mp5a2";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "short";
		calibre = "N556";
		stock = "light";
	};
};

// 9mm
// Short
class rtg_weap_m249_pip_9 : rhs_weap_m249_pip_S
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	recoil = "recoil_mp5a2";
	magazineWell[] = {"RTG_LMG_9x19"};
	magazines[] = {"rtg_200Rnd_9mm"};
	baseWeapon = "rtg_weap_m249_pip_9";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class UnderBarrelSlot = {};
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "short";
		calibre = "N9";
		stock = "pip";
	};
	class FullAuto: FullAuto
	{
		reloadTime = 0.076;
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
};
class rtg_weap_m249_pip_9_para : rhs_weap_m249_pip_S_para
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	recoil = "recoil_mp5a2";
	magazineWell[] = {"RTG_LMG_9x19"};
	magazines[] = {"rtg_200Rnd_9mm"};
	baseWeapon = "rtg_weap_m249_pip_9_para";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class UnderBarrelSlot = {};
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "short";
		calibre = "N9";
		stock = "para";
	};
	class FullAuto: FullAuto
	{
		reloadTime = 0.076;
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
};
class rtg_weap_m249_light_9 : rhs_weap_m249_light_S
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	recoil = "recoil_mp5a2";
	magazineWell[] = {"RTG_LMG_9x19"};
	magazines[] = {"rtg_200Rnd_9mm"};
	baseWeapon = "rtg_weap_m249_light_9";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class UnderBarrelSlot = {};
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "short";
		calibre = "N9";
		stock = "light";
	};
	class FullAuto: FullAuto
	{
		reloadTime = 0.076;
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
};

// 7.62 Nato
class rtg_249_pip_s_762 : LMG_Mk200_black_F
{
	scope = 2;
    ACE_barrelTwist = 305;
    ACE_barrelLength = 465;
    AB_barrelTwist = 12;
    AB_barrelLength = 18.3;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_s_762";
	Author = "Shrike";
	displayName = "M249 PIP (762/Long/Savit)";
	magazineWell[] = {"CBA_762x51_LINKS"};
	magazines[] = {"rtg_200Rnd_762x51"};
	modes[] = {"FullAuto"};
	recoil = "rhs_recoil_mk18";
	picture = "\hlc_wp_saw\tex\ui\gear_mk48_ca";
	model = "\hlc_wp_saw\mesh\mk48\Mk48mod1.p3d";
	reloadaction = "HLC_GestureReloadM249";
	handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
	hiddenSelections[] = {"Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG","Rail","Bipod"};
    hiddenSelectionsTextures[] = {"hlc_wp_saw\tex\mk48\reciever_mk48_co.paa","hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa","hlc_wp_saw\tex\toadie_m249\barrel_co.paa","hlc_wp_saw\tex\toadie_m249\misc_co.paa","hlc_wp_saw\tex\toadie_m249\PIP_Foregrip_co.paa","hlc_wp_saw\tex\toadie_m249\stockmap_co.paa","hlc_wp_saw\tex\toadie_m249\rearsight_co.paa","hlc_wp_saw\tex\toadie_m249\pouch_auscam_co.paa","hlc_wp_saw\tex\melon_vfg\vgrip_co.paa","hlc_wp_saw\tex\mk48\mk48_quadrail_co.paa","hlc_wp_saw\tex\toadie_m249\pipbipod_co.paa"};
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
		reloadTime = 0.084;
		dispersion = 0.000261799;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "long";
		calibre = "N762";
		stock = "pip";
	};
};

class rtg_249_fixed_s_762 : LMG_Mk200_black_F
{
	scope = 2;
    ACE_barrelTwist = 305;
    ACE_barrelLength = 465;
    AB_barrelTwist = 12;
    AB_barrelLength = 18.3;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_fixed_s_762";
	Author = "Shrike";
	displayName = "M249 PIP (762/Long/Fixed)";
	magazineWell[] = {"CBA_762x51_LINKS"};
	magazines[] = {"rtg_200Rnd_762x51"};
	modes[] = {"FullAuto"};
	recoil = "rhs_recoil_mk18";
	picture = "\hlc_wp_saw\tex\ui\gear_mk48_ca";
	model = "\hlc_wp_saw\mesh\mk48\Mk48.p3d";
	reloadaction = "HLC_GestureReloadM249";
	handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
	hiddenSelections[] = {"Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG", "Rail", "Bipod"};
	hiddenSelectionsTextures[] = {"hlc_wp_saw\tex\mk48\reciever_mk48_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\PIP_Foregrip_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\pouch_auscam_co.paa", "hlc_wp_saw\tex\toadie_m249\vert_grip_co.paa", "hlc_wp_saw\tex\mk48\mk48_quadrail_co.paa", ""};
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
		reloadTime = 0.084;
		dispersion = 0.000261799;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "long";
		calibre = "N762";
		stock = "fixed";
	};
};
