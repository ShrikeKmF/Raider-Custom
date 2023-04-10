// Base Classes
class Rifle_Base_F;
class WeaponSlotsInfo;
class asdg_OpticRail;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913;
class asdg_MuzzleSlot_556;
class asdg_FrontSideRail;
class MuzzleSlot_9mm;
class asdg_MuzzleSlot_9MM_SMG;
class PointerSlot_Rail;
class PointerSlot;
class asdg_UnderSlot;
class UGL_F;
class compatibleItems;

// AUG
class hlc_aug_base;
class hlc_rifle_aug : hlc_aug_base {
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
};
class hlc_rifle_auga1_t : hlc_rifle_aug {};
class hlc_rifle_auga1_B : hlc_rifle_aug {};
class hlc_rifle_auga3 : hlc_rifle_aug {};
class hlc_rifle_auga3_bl : hlc_rifle_aug {};
class hlc_rifle_auga3_b : hlc_rifle_aug {};
class hlc_rifle_auga2lsw : hlc_rifle_aug {};
class hlc_rifle_auga2lsw_t : hlc_rifle_aug {};
class hlc_rifle_auga2lsw_b : hlc_rifle_aug {};
class hlc_rifle_auga2  : hlc_rifle_aug {};
class hlc_rifle_auga2_b : hlc_rifle_aug {};
class hlc_rifle_auga2_t : hlc_rifle_aug {};
class hlc_rifle_auga3_GL : hlc_rifle_aug {};
class hlc_rifle_auga3_GL_BL : hlc_rifle_aug {};
class hlc_rifle_auga3_GL_B : hlc_rifle_aug {};

// G36
class hlc_g36_base;
class hlc_rifle_G36V  : hlc_g36_base {
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
};
class hlc_rifle_G36KV  : hlc_rifle_G36V {};
class hlc_rifle_G36CV  : hlc_rifle_G36V {};
class hlc_rifle_G36VTAC  : hlc_rifle_G36V {};
class hlc_rifle_G36KVTAC  : hlc_rifle_G36V {};
class hlc_rifle_G36CVTAC  : hlc_rifle_G36V {};
class hlc_rifle_G36VAG36  : hlc_rifle_G36V {};
class hlc_rifle_G36C  : hlc_rifle_G36V {};

// Grot
class arifle_MSBS65_base_F: Rifle_Base_F
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
};
class arifle_MSBS65_base_black_F: arifle_MSBS65_base_F{};
class arifle_MSBS65_base_camo_F: arifle_MSBS65_base_F{};
class arifle_MSBS65_base_sand_F: arifle_MSBS65_base_F{};
class arifle_MSBS65_F: arifle_MSBS65_base_F{};
class arifle_MSBS65_black_F: arifle_MSBS65_base_black_F{};
class arifle_MSBS65_camo_F: arifle_MSBS65_base_camo_F{};
class arifle_MSBS65_sand_F: arifle_MSBS65_base_sand_F{};
class arifle_MSBS65_GL_base_F: arifle_MSBS65_base_F{};
class arifle_MSBS65_GL_base_black_F: arifle_MSBS65_GL_base_F{};
class arifle_MSBS65_GL_base_camo_F: arifle_MSBS65_GL_base_F{};
class arifle_MSBS65_GL_base_sand_F: arifle_MSBS65_GL_base_F{};
class arifle_MSBS65_GL_F: arifle_MSBS65_GL_base_F{};
class arifle_MSBS65_GL_black_F: arifle_MSBS65_GL_base_black_F{};
class arifle_MSBS65_GL_camo_F: arifle_MSBS65_GL_base_camo_F{};
class arifle_MSBS65_GL_sand_F: arifle_MSBS65_GL_base_sand_F{};
class arifle_MSBS65_UBS_base_F: arifle_MSBS65_base_F{};
class arifle_MSBS65_UBS_base_black_F: arifle_MSBS65_UBS_base_F{};
class arifle_MSBS65_UBS_base_camo_F: arifle_MSBS65_UBS_base_F{};
class arifle_MSBS65_UBS_base_sand_F: arifle_MSBS65_UBS_base_F{};
class arifle_MSBS65_UBS_F: arifle_MSBS65_UBS_base_F{};
class arifle_MSBS65_UBS_black_F: arifle_MSBS65_UBS_base_black_F{};
class arifle_MSBS65_UBS_camo_F: arifle_MSBS65_UBS_base_camo_F{};
class arifle_MSBS65_UBS_sand_F: arifle_MSBS65_UBS_base_sand_F{};

// M79
class rhs_weap_m79;
class rtg_weap_m79 : rhs_weap_m79 {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_m79";
	displayName="M79A2";
	Author = "Shrike";
};

/*
// XM25
class rtg_gl_xm25 : arifle_MSBS65_F {
	model = "a3\Weapons_F_Enoch\Rifles\MSBS\MSBS65_GL_F";
	dlc = "raiderTactical";
	handAnim[] = {"OFP2_ManSkeleton","\a3\Anims_F_Enoch\Data\Anim\handanims\MSBS65_UGL.rtm"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
	magazineWell[] = {"RTG_25x45_GL"};
	magazines[] = {"rtg_10Rnd_25_HEDP"};
	Author = "Shrike";
	displayName = "XM25";
	baseWeapon = "rtg_gl_xm25";
	scope = 2;
	descriptionShort="25mm Grenade Launcher";
	modes[] = {"Single"};
};*/

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
	class WeaponSlotsInfo : WeaponSlotsInfo {
		class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG
		{
			iconPinpoint = "center";
			iconPosition[] = {-0.07,0.389};
			iconScale = 0.2;
			class compatibleItems: compatibleItems
			{
				hlc_muzzle_Agendasix = 1;
				muzzle_snds_l = 1;
				ace_muzzle_mzls_smg_01 = 1;
			};
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
	class WeaponSlotsInfo : WeaponSlotsInfo {
		class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG
		{
			iconPinpoint = "center";
			iconPosition[] = {-0.07,0.389};
			iconScale = 0.2;
			class compatibleItems: compatibleItems
			{
				hlc_muzzle_Agendasix = 1;
				muzzle_snds_l = 1;
				ace_muzzle_mzls_smg_01 = 1;
			};
		};
			
	};
};

class arifle_SPAR_01_blk_F;
class arifle_SPAR_01_khk_F;
class arifle_SPAR_01_snd_F;
class rtg_rifle_samr2_9mm : arifle_SPAR_01_blk_F {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_rifle_samr2_9mm";
	displayName = "LAR-9 Carbine";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	ACE_barrelTwist = 228.6;
	maxZeroing = 1600;
	ACE_barrelLength = 457.2;
	ace_railHeightAboveBore = 2.5;
	reloadAction = "NIA_GestureReload416";
	model = "hlc_wp_ar15\mesh\LAR15_samr\samr.p3d";
	picture = "\hlc_wp_ar15\tex\ui\gear_SAMR_ca";
	initspeed = -1;
	descriptionShort = "9mm Pistol Carbine";
	discretedistance[] = {100,200,300,400,500};
	discretedistanceinitindex = 0;
	hiddenSelections[] = {"Upper","Lower","D-Ring","Rails","Panels","VFG","Harris","Patch","Stock"};
	hiddenSelectionsTextures[] = {"hlc_wp_ar15\tex\samr\upper_co.paa","hlc_wp_ar15\tex\samr\lower2_co.paa","hlc_wp_ar15\tex\samr\ras_co.paa","hlc_wp_ar15\tex\samr\risras_co.paa","hlc_wp_ar15\tex\samr\xtm2_co.paa","hlc_wp_ar15\tex\melon_cqbr\vgrip_co.paa","hlc_wp_ar15\tex\samr\hbipod_co.paa","","hlc_wp_ar15\tex\samr\stock_co.paa"};
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
	displayName = "HK-417 Black";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
};
class rtg_hk417_khk : arifle_SPAR_03_khk_f
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_hk417_khk";
	displayName = "HK-417 Khaki";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
};
class rtg_hk417_snd : arifle_SPAR_03_snd_f
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_hk417_snd";
	displayName = "HK-417 Sand";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
};

class rtg_G3KA4_RAS : arifle_SPAR_03_blk_f {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	model = "\hlc_wp_g3\mesh\g3_rails\g3ka4.p3d";
	picture = "\hlc_wp_g3\tex\ui\gear_g3ka4_x_ca";
	hiddenSelections[] = {"Main","Rail","Stock"};
	handAnim[] = {"OFP2_ManSkeleton","hlc_wp_g3\anim\handgesture_G3_STD_thin.rtm"};
	hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_2_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa","hlc_wp_g3\tex\arby_mp5n\mp5_co.paa"};
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 314.96;
	baseWeapon = "rtg_G3KA4_RAS";
	displayName = "G3KA4 RAS";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
};
/*
class rtg_G3KA4_GL_RAS : arifle_SPAR_03_blk_f {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_G3KA4_GL_RAS";
	model = "\hlc_wp_g3\mesh\g3_railsGL\g3kgl.p3d";
	picture = "\hlc_wp_g3\tex\ui\gear_g3ka4gl_x_ca";
	handanim[] = {"OFP2_ManSkeleton","hlc_wp_g3\anim\handgesture_G3KA4_GL_STD.rtm"};
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 314.96;
	displayName = "G3KA4 GL RAS";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	hiddenSelections[] = {"Main","Rail","Stock","M203"};
	hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_2_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa","hlc_wp_g3\tex\arby_mp5n\mp5_co.paa","hlc_wp_g3\tex\tigg_m203\m203_co.paa"};
	class UGL_F
	{
		cameradir = "gl_look";
		discreteDistance[] = {50,100,150,200,250,300,350};
		discreteDistanceCameraPoint[] = {"gl_eye_50m","gl_eye_100m","gl_eye_150m","gl_eye_200m","gl_eye_250m","gl_eye_300m","gl_eye_350m"};
		discreteDistanceInitIndex = 1;
		displayname = "M203-2003";
		useModelOptics = 0;
		useExternalOptic = 0;
		optics = 1;
		cursoraim = "gl";
		magazinereloadtime = 0;
		reloadtime = 0.1;
		reloadAction = "HLC_GestureReloadGL5040";
		reloadMagazineSound[] = {"hlc_core\sound\GL\M203_reload",1.0,1,10};
		drySound[] = {"hlc_core\sound\GL\GL_drystrike",1,1,10};
		modes[] = {"Single"};
	};
};*/

class rtg_G3A3_RIS : arifle_SPAR_03_blk_f {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_G3A3_RIS";
	displayName = "G3A3 RIS";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	handAnim[] = {"OFP2_ManSkeleton","hlc_wp_g3\anim\handgesture_G3_STD_thin.rtm"};
	model = "\hlc_wp_g3\mesh\g3a3\g3a3_railed.p3d";
	hiddenSelections[] = {"Main","Reciever","Rec2","Grip","rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_co.paa","hlc_wp_g3\tex\sg1\g3sg2_co.paa","hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.paa","hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa"};
};

class rtg_G3A3_wide_RIS : arifle_SPAR_03_blk_f {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_G3A3_wide_RIS";
	displayName = "G3A3 Wide RIS";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	model = "\hlc_wp_g3\mesh\g3a3\g3a3_Modern_railed.p3d";
	handAnim[] = {"OFP2_ManSkeleton","hlc_wp_g3\anim\handgesture_G3_STD_wide.rtm"};
	hiddenSelections[] = {"Main","Reciever","Rec2","Grip","rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_co.paa","hlc_wp_g3\tex\sg1\g3sg2_co.paa","hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.paa","hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa"};
};

class rtg_mp4a2_tac : arifle_SPAR_01_blk_F {
	scope = 2;
	dlc = "raiderTactical";
	model = "\hlc_wp_Mp5\mesh\mp5a2\mp5_tac.p3d";
	baseWeapon = "rtg_mp4a2_tac";
	recoil = "recoil_mp5a2";
	reloadaction = "HLC_GestureReloadMP5";
	picture = "\hlc_wp_MP5\tex\ui\gear_mp5a2_x_ca";
	hiddenSelections[] = {"Reciever","FCG","Stock","Foregrip","Rail","Magazine"};
	hiddenSelectionsTextures[] = {"hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5ka1_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_parts2_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa"};
	AB_barrelTwist = 10;
	AB_barrelLength = 9;
	ACE_barrelTwist = 254.0;
	ACE_barrelLength = 228.6;
	discretedistance[] = {50,100,150,200};
	discretedistanceinitindex = 0;
	bg_bipod = 0;
	handanim[] = {"OFP2_ManSkeleton","\hlc_wp_mp5\gesture\newgest\mp5_handgesture.rtm"};
	Author = "Shrike";
	displayName = "MP5A2 9mm SMG";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class WeaponSlotsInfo : WeaponSlotsInfo {
		class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG
		{
			iconPinpoint = "center";
			iconPosition[] = {-0.07,0.389};
			iconScale = 0.2;
			class compatibleItems: compatibleItems
			{
				hlc_muzzle_Agendasix = 1;
				muzzle_snds_l = 1;
				ace_muzzle_mzls_smg_01 = 1;
			};
		};
			
	};
};

class Single;
class FullAuto;
class StandardSound;
class rtg_mp5sd6_tac : rtg_mp4a2_tac {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mp5sd6_tac";
	recoil = "recoil_mp5a2";
	model = "\hlc_wp_Mp5\mesh\mp5sd6\mp5.p3d";
	reloadaction = "HLC_GestureReloadMP5";
	handanim[] = {"OFP2_ManSkeleton","\hlc_wp_mp5\gesture\newgest\gesture_mp5sd.rtm"};
	picture = "\hlc_wp_MP5\tex\ui\gear_mp5sd6_x_ca";
	hiddenSelections[] = {"Reciever","FC","Stock","Rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.paa"};
	AB_barrelTwist = 10;
	AB_barrelLength = 9;
	ACE_barrelTwist = 254.0;
	ACE_barrelLength = 228.6;
	discretedistance[] = {50,100,150,200};
	discretedistanceinitindex = 0;
	bg_bipod = 0;
	Author = "Shrike";
	displayName = "MPSD6 9mm SMG";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 67.579994;
		class PointerSlot : PointerSlot_Rail{};
		class MuzzleSlot{};
	};
	class FullAuto: FullAuto
	{
		sounds[] = {"StandardSound"};
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"mp5sd_silencerShot_SoundSet","mp5sd_silencerTail_SoundSet"};
		};
	};
	class Single: Single
	{
		sounds[] = {"StandardSound"};
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"mp5sd_silencerShot_SoundSet","mp5sd_silencerTail_SoundSet"};
		};
	};
};


class rtg_hk416_blk_9 : arifle_SPAR_01_blk_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_9";
	Author = "Shrike";
	displayName = "HK-416 Black 9mm Carbine";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
};
class rth_hk416_khk_9 : arifle_SPAR_01_khk_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rth_hk416_khk_9";
	Author = "Shrike";
	displayName = "HK-416 Khaki 9mm Carbine";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
};
class rth_hk416_snd_9 : arifle_SPAR_01_snd_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rth_hk416_snd_9";
	Author = "Shrike";
	displayName = "HK-416 Sand 9mm Carbine";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
};

class rhs_weap_SCARH_CQC;
class rtg_dsa_fal_tac : rhs_weap_SCARH_CQC {
	scope = 2;
	dlc = "raiderTactical";
	AB_barrelTwist = 12;
	AB_barrelLength = 13;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 280;
	ace_railHeightAboveBore = 3.2;
	initspeed = -0.868;
	Author = "Shrike";
	baseWeapon = "rtg_dsa_fal_tac";
	displayName = "FAL RIS";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	handAnim[] = {"OFP2_ManSkeleton","\hlc_wp_fal\gesture\newgesture\gesture_OSW_STD.rtm"};
	model = "\hlc_wp_FAL\mesh\sa58\osw.p3d";
	picture = "\hlc_wp_FAL\tex\ui\gear_osw_x_ca";
	hiddenSelections[] = {"Reciever","Barrel","Frontsight","Foregrip","Grip","Rearsight","Stock","Magazine","Rails","VFG"};
	hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\israeli\rec_sanitary_co.paa","hlc_wp_fal\tex\sa58\barrel-match_co.paa","hlc_wp_fal\tex\fsight_co.paa","hlc_wp_fal\tex\sa58\foregrip-dsa_co.paa","hlc_wp_fal\tex\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\sa58\foldingstock_co.paa","hlc_wp_fal\tex\mag-20_co.paa","hlc_wp_fal\tex\dsatoprails_co.paa","hlc_wp_fal\tex\sa58\verticalgrip_co.paa"};
	discretedistance[] = {200,300,400,500,600,700};
	discretedistanceinitindex = 0;
	cameradir = "look";
	discreteDistanceCameraPoint[] = {"eye2","eye3","eye4","eye5","eye6","eye7"};
};

class rhs_weap_m249_pip_L;
class rhs_weap_m249_pip_S;
class rhs_weap_m249_pip_ris;
class rtg_249_pip_L : rhs_weap_m249_pip_L {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_L";
	Author = "Shrike";
	displayName = "M249 Long RIS";
	magazineWell[] = {"CBA_556x45_MINIMI", "CBA_556x45_STANAG"};
	magazines[] = {"rtg_200rnd_556_45"};
	recoil = "recoil_mp5a2";
	ACE_barrelTwist = 228.6;
	maxZeroing = 1600;
	ACE_barrelLength = 457.2;
	ace_railHeightAboveBore = 2.5;
};
/*class rtg_249_pip_L_762 : rhs_weap_m249_pip_L {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_L_762";
	Author = "Shrike";
	displayName = "M249 7.62 Long RIS";
	magazineWell[] = {"CBA_762x51_LINKS", "CBA_762x51_M14"};
	magazines[] = {"rtg_200Rnd_762x51"};
};*/
class rtg_249_pip_S : rhs_weap_m249_pip_S {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_S";
	Author = "Shrike";
	displayName = "M249 Short RIS";
	magazineWell[] = {"CBA_556x45_MINIMI", "CBA_556x45_STANAG"};
	magazines[] = {"rtg_200rnd_556_45"};
	recoil = "recoil_mp5a2";
};
class rtg_249_pip_S_300 : rhs_weap_m249_pip_S {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_S_300";
	Author = "Shrike";
	displayName = "M249 300 Blk Short RIS";
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk"};
	recoil = "recoil_mp5a2";
};
class rtg_249_pip_ris : rhs_weap_m249_pip_ris {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_ris";
	Author = "Shrike";
	displayName = "M249 Solid RIS";
	magazineWell[] = {"CBA_556x45_MINIMI", "CBA_556x45_STANAG"};
	magazines[] = {"rtg_200rnd_556_45"};
	recoil = "recoil_mp5a2";
	ACE_barrelTwist = 228.6;
	maxZeroing = 1600;
	ACE_barrelLength = 457.2;
	ace_railHeightAboveBore = 2.5;
};

class LMG_Zafir_F;
class rtg_negev : LMG_Zafir_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_negev";
	Author = "Shrike";
	displayName = "Negev RIS";
	magazineWell[] = {"CBA_556x45_MINIMI"};
	magazines[] = {"rtg_200rnd_556_45"};
	recoil = "recoil_mp5a2";
	modes[] = {"FullAuto"};
	class WeaponSlotsInfo : WeaponSlotsInfo {
		class MuzzleSlot: asdg_MuzzleSlot_556_minimi
		{
			iconPinpoint = "center";
			iconPosition[] = {-0.07,0.389};
			iconScale = 0.2;
		};
	};
};

class LMG_Mk200_F;
class LMG_Mk200_black_F;
class manual;
class rtg_mk200 : LMG_Mk200_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk200";
	Author = "Shrike";
	displayName = "Stoner 99 Tan 5.56";
	magazineWell[] = {"CBA_556x45_MINIMI"};
	magazines[] = {"rtg_200rnd_556_45"};
	recoil = "recoil_mp5a2";
	modes[] = {"FullAuto"};
	class FullAuto : manual {
		reloadTime = 0.078;
		dispersion = 0.00102;
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"NIA_M249_NEW_Shot_SoundSet","saw_Tail_SoundSet"};
		};
	};
	class WeaponSlotsInfo : WeaponSlotsInfo {
		class MuzzleSlot: asdg_MuzzleSlot_556_minimi
		{
			iconPinpoint = "center";
			iconPosition[] = {-0.07,0.389};
			iconScale = 0.2;
		};
	};
};

class rtg_mk200_blk : LMG_Mk200_black_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk200_blk";
	Author = "Shrike";
	displayName = "Stoner 99 Black 5.56";
	magazineWell[] = {"CBA_556x45_MINIMI",};
	magazines[] = {"rtg_200rnd_556_45"};
	recoil = "recoil_mp5a2";
	modes[] = {"FullAuto"};
	class FullAuto : manual {
		reloadTime = 0.078;
		dispersion = 0.00102;
		class StandardSound: StandardSound
		{
			soundSetShot[] = {"NIA_G3_NEW_Shot_SoundSet","g3_Tail_SoundSet"};
		};
	};
	class WeaponSlotsInfo : WeaponSlotsInfo {
		class MuzzleSlot: asdg_MuzzleSlot_556_minimi
		{
			iconPinpoint = "center";
			iconPosition[] = {-0.07,0.389};
			iconScale = 0.2;
		};
	};
};

class srifle_EBR_F;
class rtg_m14_dmr : srifle_EBR_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m14_dmr";
	Author = "Shrike";
	displayName = "M14 Mod 1 EBR";
	modes[] = {"Single", "FullAuto"};
};
