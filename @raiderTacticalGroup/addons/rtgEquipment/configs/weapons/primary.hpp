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
class StandardSound;

// AUG
class hlc_aug_base;
class hlc_rifle_aug : hlc_aug_base
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
};
class hlc_rifle_auga3 : hlc_aug_base
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "khaki";
	};
};
class hlc_rifle_auga3_bl : hlc_rifle_auga3
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "blue";
	};
};
class hlc_rifle_auga3_b : hlc_rifle_auga3
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "black";
	};
};
class hlc_rifle_auga3_GL : hlc_aug_base
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug_gl";
		camo = "khaki";
	};
};
class hlc_rifle_auga3_GL_BL : hlc_rifle_auga3_GL
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug_gl";
		camo = "blue";
	};
};
class hlc_rifle_auga3_GL_B : hlc_rifle_auga3_GL
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug_gl";
		camo = "black";
	};
};
class hlc_rifle_auga2para : hlc_aug_base
{
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "para";
		camo = "khaki";
	};
};
class hlc_rifle_auga2para_t : hlc_rifle_auga2para
{
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "para";
		camo = "sand";
	};
};
class hlc_rifle_auga2para_b : hlc_rifle_auga2para
{
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "para";
		camo = "black";
	};
};

// MSBS Grot
class arifle_MSBS65_F;
class arifle_MSBS65_black_F;
class arifle_MSBS65_camo_F;
class arifle_MSBS65_sand_F;
class rtg_MSBS65_F : arifle_MSBS65_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_F";
	Author = "Shrike";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_grot";
		camo = "khaki";
	};
};
class rtg_MSBS65_black_F : arifle_MSBS65_black_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_black_F";
	Author = "Shrike";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_grot";
		camo = "black";
	};
};
class rtg_MSBS65_camo_F : arifle_MSBS65_camo_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_camo_F";
	Author = "Shrike";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_grot";
		camo = "camo";
	};
};
class rtg_MSBS65_sand_F : arifle_MSBS65_sand_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_sand_F";
	Author = "Shrike";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_grot";
		camo = "sand";
	};
};

class arifle_MSBS65_GL_F;
class arifle_MSBS65_GL_black_F;
class arifle_MSBS65_GL_camo_F;
class arifle_MSBS65_GL_sand_F;
class rtg_MSBS65_GL_F : arifle_MSBS65_GL_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_GL_F";
	Author = "Shrike";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_grot_gl";
		gl = "gl";
		camo = "khaki";
	};
};
class rtg_MSBS65_GL_black_F : arifle_MSBS65_GL_black_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_GL_black_F";
	Author = "Shrike";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_grot_gl";
		gl = "gl";
		camo = "black";
	};
};
class rtg_MSBS65_GL_camo_F : arifle_MSBS65_GL_camo_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_GL_camo_F";
	Author = "Shrike";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_grot_gl";
		gl = "gl";
		camo = "camo";
	};
};
class rtg_MSBS65_GL_sand_F : arifle_MSBS65_GL_sand_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_GL_sand_F";
	Author = "Shrike";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_grot_gl";
		gl = "gl";
		camo = "sand";
	};
};

class arifle_MSBS65_UBS_F;
class arifle_MSBS65_UBS_black_F;
class arifle_MSBS65_UBS_camo_F;
class arifle_MSBS65_UBS_sand_F;
class rtg_MSBS65_UBS_F : arifle_MSBS65_UBS_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_UBS_F";
	Author = "Shrike";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_grot_gl";
		gl = "sg";
		camo = "khaki";
	};
};
class rtg_MSBS65_UBS_black_F : arifle_MSBS65_UBS_black_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_UBS_black_F";
	Author = "Shrike";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_grot_gl";
		gl = "sg";
		camo = "black";
	};
};
class rtg_MSBS65_UBS_camo_F : arifle_MSBS65_UBS_camo_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_UBS_camo_F";
	Author = "Shrike";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_grot_gl";
		gl = "sg";
		camo = "camo";
	};
};
class rtg_MSBS65_UBS_sand_F : arifle_MSBS65_UBS_sand_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_UBS_sand_F";
	Author = "Shrike";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_grot_gl";
		gl = "sg";
		camo = "sand";
	};
};

class arifle_SPAR_01_blk_F;
class arifle_SPAR_01_khk_F;
class arifle_SPAR_01_snd_F;
class arifle_SPAR_02_blk_F;
class arifle_SPAR_02_khk_F;
class arifle_SPAR_02_snd_F;
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

class rhs_weap_mk18;
class rhs_weap_mk18_bk;
class rhs_weap_mk18_KAC_bk;
class rhs_weap_mk18_d;
class rhs_weap_mk18_KAC_d;
class rhs_weap_mk18_KAC;
class rhs_weap_mk18_wd;
class rhs_weap_mk18_KAC_wd;
class rtg_mk18 : rhs_weap_mk18
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mk18";
		stock = "default";
		camo = "standard";
	};
};
class rtg_mk18_blk : rhs_weap_mk18_bk
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18_blk";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mk18";
		stock = "default";
		camo = "black";
	};
};
class rtg_mk18_bk_kac : rhs_weap_mk18_KAC_bk
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18_bk_kac";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mk18";
		stock = "sopmod";
		camo = "black";
	};
};
class rtg_mk18_d : rhs_weap_mk18_d
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18_d";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mk18";
		stock = "default";
		camo = "desert";
	};
};
class rtg_mk18_d_kac : rhs_weap_mk18_KAC_d
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18_d_kac";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mk18";
		stock = "sopmod";
		camo = "desert";
	};
};
class rtg_mk18_kac : rhs_weap_mk18_KAC
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18_kac";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mk18";
		stock = "sopmod";
		camo = "standard";
	};
};
class rtg_mk18_wd : rhs_weap_mk18_wd
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18_wd";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mk18";
		stock = "default";
		camo = "woodland";
	};
};
class rtg_mk18_wd_kac : rhs_weap_mk18_KAC_wd
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18_wd_kac";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mk18";
		stock = "sopmod";
		camo = "woodland";
	};
};

// SCAR
// SCAR-H 7.62
class hlc_SCARH_Base;
class hlc_wp_SCARH_STD : hlc_SCARH_Base
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N762";
		camo = "tan";
	};
};
class hlc_wp_SCARH_STD_Blk : hlc_wp_SCARH_STD
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N762";
		camo = "black";
	};
};
class hlc_wp_SCARH_STD_camo : hlc_wp_SCARH_STD
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N762";
		camo = "camo";
	};
};
class hlc_WP_SCARH_CQC : hlc_wp_SCARH_STD
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N762";
		camo = "tan";
	};
};
class hlc_wp_SCARH_CQC_Blk : hlc_WP_SCARH_CQC
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N762";
		camo = "black";
	};
};
class hlc_wp_SCARH_CQC_camo : hlc_WP_SCARH_CQC
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N762";
		camo = "camo";
	};
};
class hlc_WP_SCARH_DMR : hlc_SCARH_Base
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N762";
		camo = "tan";
	};
};
class hlc_wp_SCARH_DMR_Blk : hlc_WP_SCARH_DMR
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N762";
		camo = "black";
	};
};
class hlc_wp_SCARH_DMR_camo : hlc_WP_SCARH_DMR
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N762";
		camo = "camo";
	};
};

// SCAR-l 5.56
class hlc_SCARL_Base;
class hlc_wp_SCARL_STD : hlc_SCARL_Base
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N556";
		camo = "tan";
	};
};
class hlc_wp_SCARL_STD_Blk : hlc_wp_SCARL_STD
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_wp_SCARL_STD_camo : hlc_wp_SCARL_STD
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N556";
		camo = "camo";
	};
};
class hlc_wp_SCAR_PDW : hlc_SCARL_Base
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "sc";
		calibre = "N556";
		camo = "tan";
	};
};
class hlc_wp_SCAR_PDW_blk : hlc_wp_SCAR_PDW
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "sc";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_wp_SCAR_PDW_camo : hlc_wp_SCAR_PDW
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "sc";
		calibre = "N556";
		camo = "camo";
	};
};
class hlc_WP_SCARL_CQC : hlc_wp_SCARL_STD
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N556";
		camo = "tan";
	};
};
class hlc_wp_SCARL_CQC_Blk : hlc_WP_SCARL_CQC
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_wp_SCARL_CQC_camo : hlc_WP_SCARL_CQC
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N556";
		camo = "camo";
	};
};
class hlc_WP_SCARL_DMR : hlc_wp_SCARL_STD
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N556";
		camo = "tan";
	};
};
class hlc_wp_SCARL_DMR_Blk : hlc_WP_SCARL_DMR
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_wp_SCARL_DMR_camo : hlc_WP_SCARL_DMR
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N556";
		camo = "camo";
	};
};

// SCAR-l .300
class hlc_wp_SCARL_STD_300AAC : hlc_SCARL_Base
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N300";
		camo = "tan";
	};
};
class hlc_wp_SCARL_STD_300AAC_Blk : hlc_wp_SCARL_STD_300AAC
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N300";
		camo = "black";
	};
};
class hlc_wp_SCARL_STD_300AAC_camo : hlc_wp_SCARL_STD_300AAC
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N300";
		camo = "camo";
	};
};
class hlc_WP_SCARL_CQC_300AAC : hlc_wp_SCARL_STD_300AAC
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N300";
		camo = "tan";
	};
};
class hlc_wp_SCARL_CQC_300AAC_Blk : hlc_WP_SCARL_CQC_300AAC
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N300";
		camo = "black";
	};
};
class hlc_wp_SCARL_CQC_300AAC_camo : hlc_WP_SCARL_CQC_300AAC
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N300";
		camo = "camo";
	};
};

// SCAR-H 7.62 EGLM
class hlc_wp_SCARH_STD_EGLM : hlc_SCARH_Base
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "std";
		calibre = "N762";
		camo = "tan";
	};
};
class hlc_wp_SCARH_STD_EGLM_Blk : hlc_wp_SCARH_STD_EGLM
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "std";
		calibre = "N762";
		camo = "black";
	};
};
class hlc_wp_SCARH_STD_EGLM_camo : hlc_wp_SCARH_STD_EGLM
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "std";
		calibre = "N762";
		camo = "camo";
	};
};
class hlc_WP_SCARH_CQC_EGLM : hlc_SCARH_Base
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "cqb";
		calibre = "N762";
		camo = "tan";
	};
};
class hlc_wp_SCARH_CQC_EGLM_Blk : hlc_WP_SCARH_CQC_EGLM
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "cqb";
		calibre = "N762";
		camo = "black";
	};
};
class hlc_wp_SCARH_CQC_EGLM_camo : hlc_WP_SCARH_CQC_EGLM
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "cqb";
		calibre = "N762";
		camo = "camo";
	};
};

// SCAR-l 5.56 EGLM
class hlc_wp_SCARL_STD_EGLM : hlc_SCARL_Base
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "std";
		calibre = "N556";
		camo = "tan";
	};
};
class hlc_wp_SCARL_STD_EGLM_Blk : hlc_wp_SCARL_STD_EGLM
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "std";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_wp_SCARL_STD_EGLM_camo : hlc_wp_SCARL_STD_EGLM
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "std";
		calibre = "N556";
		camo = "camo";
	};
};
class hlc_WP_SCARL_CQC_EGLM : hlc_SCARL_Base
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "cqb";
		calibre = "N556";
		camo = "tan";
	};
};
class hlc_wp_SCARL_CQC_EGLM_Blk : hlc_WP_SCARL_CQC_EGLM
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "cqb";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_wp_SCARL_CQC_EGLM_camo : hlc_WP_SCARL_CQC_EGLM
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "cqb";
		calibre = "N556";
		camo = "camo";
	};
};

// SCAR-l .300 EGLM
class hlc_wp_SCARL_STD_300AAC_EGLM : hlc_wp_SCARL_STD_300AAC
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "std";
		calibre = "N300";
		camo = "tan";
	};
};
class hlc_wp_SCARL_STD_300AAC_EGLM_Blk : hlc_wp_SCARL_STD_300AAC_EGLM
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "std";
		calibre = "N300";
		camo = "black";
	};
};
class hlc_wp_SCARL_STD_300AAC_EGLM_camo : hlc_wp_SCARL_STD_300AAC_EGLM
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "std";
		calibre = "N300";
		camo = "camo";
	};
};
class hlc_WP_SCARL_CQC_300AAC_EGLM : hlc_wp_SCARL_STD_300AAC
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "cqb";
		calibre = "N300";
		camo = "tan";
	};
};
class hlc_wp_SCARL_CQC_300AAC_EGLM_Blk : hlc_WP_SCARL_CQC_300AAC_EGLM
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "cqb";
		calibre = "N300";
		camo = "black";
	};
};
class hlc_wp_SCARL_CQC_300AAC_EGLM_camo : hlc_WP_SCARL_CQC_300AAC_EGLM
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scar_gl";
		barrel = "cqb";
		calibre = "N300";
		camo = "camo";
	};
};

// SCAR SSR
class hlc_WP_SSR : hlc_wp_SCARH_STD
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scarssr";
		camo = "tan";
	};
};
class hlc_wp_SSR_Blk : hlc_WP_SSR
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scarssr";
		camo = "black";
	};
};
class hlc_wp_SSR_camo : hlc_WP_SSR
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_scarssr";
		camo = "camo";
	};
};

// SCAR Other
class hlc_wp_SCARH_STD_SRX : hlc_wp_SCARH_STD
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_SCARH_STD_SRX_Blk : hlc_wp_SCARH_STD_SRX
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_SCARH_CQC_SRX : hlc_wp_SCARH_STD
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_SCARH_CQC_SRX_Blk : hlc_wp_SCARH_CQC_SRX
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_SCARH_STD_SRX_camo : hlc_wp_SCARH_STD_SRX
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_SCARL_STD_SRX : hlc_wp_SCARL_STD
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_SCARL_STD_SRX_Blk : hlc_wp_SCARL_STD_SRX
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_SCARL_STD_SRX_camo : hlc_wp_SCARL_STD_SRX
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_SCARL_STD_300AAC_SRX : hlc_wp_SCARL_STD
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_SCARL_STD_300AAC_SRX_Blk : hlc_wp_SCARL_STD_300AAC_SRX
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_MK17 : hlc_wp_SCARH_STD
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_MK17_CQC : hlc_wp_MK17
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_MK17_CQC_AGC : hlc_wp_MK17_CQC
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_MK17_CQC_AGC_camo : hlc_wp_MK17_CQC_AGC
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_WP_Mk17IUR : hlc_wp_MK17
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_MK17IUR_AGC : hlc_WP_Mk17IUR
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_MK17IUR_AGC_blk : hlc_wp_MK17IUR_AGC
{
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_wp_MK17IUR_AGC_camo : hlc_wp_MK17IUR_AGC
{
	class XtdGearInfo
	{
		model = "";
	};
};

class rtg_g36_v_556 : arifle_SPAR_01_blk_F {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_g36_v_556";
    displayName="G36V 5.56mm";
	AB_barrelTwist = 12;
	AB_barrelLength = 18.25;
	ACE_barrelTwist = 178;
	ACE_barrelLength = 480;
	reloadAction = "NIA_GestureReloadG36V";
	reloadmagazinesound[] = {"hlc_wp_g36\snd\G36EV_reload",0.9,1,35};
	model = "hlc_wp_g36\mesh\G36V\G36.p3d";
	picture = "\hlc_wp_g36\tex\ui\gear_g36V_ca.paa";
	handanim[] = {"OFP2_ManSkeleton","hlc_wp_g36\anim\varient\gesture_g36V_STD.rtm"};
	memoryPointCamera = "eye";
	hiddenSelections[] = {"Reciever","Optics","Magwell","Stock"};
	hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_v_co.paa","hlc_wp_g36\tex\placeholder\g36_opticrails_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\g36_ag36_co.paa"};
	discretedistance[] = {200};
	discretedistanceinitindex = 0;
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "long";
		calibre = "N556";
		style = "full";
	};
};
class rtg_g36_cv_556 : rtg_g36_v_556 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="G36CV 5.56mm";
	baseWeapon = "rtg_g36_cv_556";
	AB_barrelTwist = 12;
	AB_barrelLength = 18.25;
	ACE_barrelTwist = 178;
	ACE_barrelLength = 318;
	reloadAction = "NIA_GestureReloadG36V";
	reloadmagazinesound[] = {"hlc_wp_g36\snd\G36EV_reload",0.9,1,35};
	model = "hlc_wp_g36\mesh\G36V\G36C.p3d";
	picture = "\hlc_wp_g36\tex\ui\gear_g36CV_ca.paa";
	hiddenSelections[] = {"Reciever","Optics","Magwell","Stock","AG36"};
	hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_cv_co.paa","hlc_wp_g36\tex\placeholder\g36_opticrails_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\g36_ag36_co.paa"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "short";
		calibre = "N556";
		style = "full";
	};
};
class rtg_g36_kv_556 : rtg_g36_v_556 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="G36KV 5.56mm";
	baseWeapon = "rtg_g36_kv_556";
	ACE_barrelTwist = 178;
	ACE_barrelLength = 318;
	reloadAction = "NIA_GestureReloadG36V";
	reloadmagazinesound[] = {"hlc_wp_g36\snd\G36EV_reload",0.9,1,35};
	model = "hlc_wp_g36\mesh\G36V\G36K.p3d";
	picture = "\hlc_wp_g36\tex\ui\gear_g36KV_ca.paa";
	hiddenSelections[] = {"Reciever","Optics","Magwell","Stock","AG36"};
	hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_kv_co.paa","hlc_wp_g36\tex\placeholder\g36_opticrails_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\g36_ag36_co.paa"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "carbine";
		calibre = "N556";
		style = "full";
	};
};
class rtg_g36_v_300 : rtg_g36_v_556 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="G36V .300";
	baseWeapon = "rtg_g36_v_300";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "long";
		calibre = "N300";
		style = "full";
	};
};
class rtg_g36_cv_300 : rtg_g36_cv_556 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="G36CV .300";
	baseWeapon = "rtg_g36_cv_300";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "short";
		calibre = "N300";
		style = "full";
	};
};
class rtg_g36_kv_300 : rtg_g36_kv_556 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="G36KV .300";
	baseWeapon = "rtg_g36_kv_300";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "carbine";
		calibre = "N300";
		style = "full";
	};
};
class rtg_g36_v_556_tac : rtg_g36_v_556 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="G36V 5.56mm Tac";
	baseWeapon = "rtg_g36_v_556_tac";
	model = "hlc_wp_g36\mesh\G36tactical\G36.p3d";
	handanim[] = {"OFP2_ManSkeleton","hlc_wp_g36\anim\MLI\gesture_g36TAC_STD.rtm"};
	hiddenSelections[] = {"Reciever","Optics","Magwell","Stock","Rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_v_co.paa","hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\G36_MountsrailsFin_co.paa"};	
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "long";
		calibre = "N556";
		style = "tac";
	};
};
class rtg_g36_cv_556_tac : rtg_g36_cv_556 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="G36CV 5.56mm Tac";
	baseWeapon = "rtg_g36_cv_556_tac";
	model = "hlc_wp_g36\mesh\G36tactical\G36C.p3d";
	handanim[] = {"OFP2_ManSkeleton","hlc_wp_g36\anim\MLI\gesture_g36TAC_STD.rtm"};
	hiddenSelections[] = {"Reciever","Optics","Magwell","Stock","Rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_cv_co.paa","hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\G36_MountsrailsFin_co.paa"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "short";
		calibre = "N556";
		style = "tac";
	};
};
class rtg_g36_kv_556_tac : rtg_g36_kv_556 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="G36KV 5.56mm Tac";
	baseWeapon = "rtg_g36_kv_556_tac";
	handanim[] = {"OFP2_ManSkeleton","hlc_wp_g36\anim\MLI\gesture_g36TAC_STD.rtm"};
	hiddenSelections[] = {"Reciever","Optics","Magwell","Stock","Rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_kv_co.paa","hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\G36_MountsrailsFin_co.paa"};
	model = "hlc_wp_g36\mesh\G36tactical\G36K.p3d";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "carbine";
		calibre = "N556";
		style = "tac";
	};
};
class rtg_g36_v_300_tac : rtg_g36_v_556_tac {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="G36V .300 Tac";
	baseWeapon = "rtg_g36_v_300_tac";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "long";
		calibre = "N300";
		style = "tac";
	};
};
class rtg_g36_cv_300_tac : rtg_g36_cv_556_tac {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="G36CV .300 Tac";
	baseWeapon = "rtg_g36_cv_300_tac";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "short";
		calibre = "N300";
		style = "tac";
	};
};
class rtg_g36_kv_300_tac : rtg_g36_kv_556_tac {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="G36KV .300 Tac";
	baseWeapon = "rtg_g36_kv_300_tac";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "carbine";
		calibre = "N300";
		style = "tac";
	};
};

class rtg_g36_cv_9 : rtg_g36_cv_556 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="G36KV 9mm";
	baseWeapon = "rtg_g36_cv_9";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "short";
		calibre = "N9";
		style = "full";
	};
};
class rtg_g36_cv_9_tac : rtg_g36_cv_556_tac {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="G36KV 9mm Tac";
	baseWeapon = "rtg_g36_cv_9_tac";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "short";
		calibre = "N9";
		style = "tac";
	};
};

class UK3CB_FAMAS_F1;
class rtg_famas_f1_ris : UK3CB_FAMAS_F1 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName="FAMAS 5.56 Nato";
	baseWeapon = "rtg_famas_f1_ris";
	magazineWell[] = {};
	magazines[] = {"rtg_30rnd_556_45"};
};

class rhs_weap_m4a1_carryhandle;
class rhs_weap_m4a1_carryhandle_mstock;
class rhs_weap_m4a1_blockII;
class rhs_weap_m4a1_blockII_bk;
class rhs_weap_m4a1_blockII_d;
class rhs_weap_m4a1_blockII_wd;
class rhs_weap_m4a1_blockII_KAC;
class rhs_weap_m4a1_blockII_KAC_bk;
class rhs_weap_m4a1_blockII_KAC_d;
class rhs_weap_m4a1_blockII_KAC_wd;
class rhs_weap_m4a1;
class rhs_weap_m4a1_d;
class rhs_weap_m4a1_wd;
class rhs_weap_m4a1_mstock;
class rhs_weap_m4a1_d_mstock;
class rhs_weap_m4a1_wd_mstock;
class rtg_m4a1_carryhandle : rhs_weap_m4a1_carryhandle
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_carryhandle";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "default";
		camo = "black";
	};
};
class rtg_m4a1_carryhandle_mstock : rhs_weap_m4a1_carryhandle_mstock
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_carryhandle_mstock";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "magpull";
		camo = "black";
	};
};

class rtg_m4a1_blockII : rhs_weap_m4a1_blockII
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "standard";
	};
};
class rtg_m4a1_blockII_bk : rhs_weap_m4a1_blockII_bk
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII_bk";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "black";
	};
};
class rtg_m4a1_blockII_d : rhs_weap_m4a1_blockII_d
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII_d";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "desert";
	};
};
class rtg_m4a1_blockII_wd : rhs_weap_m4a1_blockII_wd
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII_wd";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "woodland";
	};
};
class rtg_m4a1_blockII_KAC : rhs_weap_m4a1_blockII_KAC
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII_KAC";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "standard";
	};
};
class rtg_m4a1_blockII_KAC_bk : rhs_weap_m4a1_blockII_KAC_bk
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII_KAC_bk";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "black";
	};
};
class rtg_m4a1_blockII_KAC_d : rhs_weap_m4a1_blockII_KAC_d
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII_KAC_d";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "desert";
	};
};
class rtg_m4a1_blockII_KAC_wd : rhs_weap_m4a1_blockII_KAC_wd
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII_KAC_wd";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "woodland";
	};
};

class rtg_m4a1 : rhs_weap_m4a1
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "pip";
		stock = "default";
		camo = "black";
	};
};
class rtg_m4a1_d : rhs_weap_m4a1_d
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_d";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "pip";
		stock = "default";
		camo = "desert";
	};
};
class rtg_m4a1_wd : rhs_weap_m4a1_wd
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_wd";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "pip";
		stock = "default";
		camo = "woodland";
	};
};
class rtg_m4a1_mstock : rhs_weap_m4a1_mstock
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_mstock";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "pip";
		stock = "magpull";
		camo = "black";
	};
};
class rtg_m4a1_d_mstock : rhs_weap_m4a1_d_mstock
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_d_mstock";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "pip";
		stock = "magpull";
		camo = "desert";
	};
};
class rtg_m4a1_wd_mstock : rhs_weap_m4a1_wd_mstock
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_wd_mstock";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "pip";
		stock = "magpull";
		camo = "woodland";
	};
};

class rhs_weap_m16a4;
class rhs_weap_m16a4_carryhandle;
class rhs_weap_m16a4_imod;
class rtg_weap_m16a4 : rhs_weap_m16a4
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_m16a4";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m16";
		form = "flattop";
	};
};
class rtg_weap_m16a4_50 : rhs_weap_m16a4
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_m16a4_50";
	Author = "Shrike";
	displayName = "M16A4-50 DMR";
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
};
class rtg_weap_m16a4_carryhandle : rhs_weap_m16a4_carryhandle
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_m16a4_carryhandle";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m16";
		form = "carryhandle";
	};
};
class rtg_weap_m16a4_imod : rhs_weap_m16a4_imod
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_m16a4_imod";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m16";
		form = "imod";
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
	maxZeroing = 1600;
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
	maxZeroing = 1600;
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
	maxZeroing = 1600;
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
		reloadTime = 0.058;
		dispersion = 0.00029;
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
		reloadTime = 0.058;
		dispersion = 0.00029;
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
		reloadTime = 0.058;
		dispersion = 0.00029;
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
		reloadTime = 0.058;
		dispersion = 0.00029;
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
		reloadTime = 0.058;
		dispersion = 0.00029;
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
		reloadTime = 0.058;
		dispersion = 0.00029;
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
		reloadTime = 0.058;
		dispersion = 0.00029;
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
		reloadTime = 0.058;
		dispersion = 0.00029;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_f2000";
		barrel = "short";
		camo = "green";
	};
};

// QBZ-95
class arifle_CTAR_blk_F;
class arifle_CTAR_ghex_F;
class arifle_CTAR_hex_F;
class rtg_qbz_blk_F : arifle_CTAR_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_qbz_blk_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_qbz";
		camo = "black";
	};
};
class rtg_qbz_ghex_F : arifle_CTAR_ghex_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_qbz_ghex_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_qbz";
		camo = "green";
	};
};
class rtg_qbz_hex_F : arifle_CTAR_hex_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_qbz_hex_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_qbz";
		camo = "hex";
	};
};

// QBZ-95 GL
class arifle_CTAR_GL_blk_F;
class arifle_CTAR_GL_ghex_F;
class arifle_CTAR_GL_hex_F;
class rtg_qbz_GL_blk_F : arifle_CTAR_GL_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_qbz_GL_blk_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_qbz_gl";
		camo = "black";
	};
};
class rtg_qbz_GL_ghex_F : arifle_CTAR_GL_ghex_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_qbz_GL_ghex_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_qbz_gl";
		camo = "green";
	};
};
class rtg_qbz_GL_hex_F : arifle_CTAR_GL_hex_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_qbz_GL_hex_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_qbz_gl";
		camo = "hex";
	};
};

// QBZ-95 LSW
class arifle_CTARS_blk_F;
class arifle_CTARS_ghex_F;
class arifle_CTARS_hex_F;
class rtg_qbz_lsw_blk_F : arifle_CTARS_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_qbz_lsw_blk_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_qbz_lsw";
		camo = "black";
	};
};
class rtg_qbz_lsw_ghex_F : arifle_CTARS_ghex_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_qbz_lsw_ghex_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_qbz_lsw";
		camo = "green";
	};
};
class rtg_qbz_lsw_hex_F : arifle_CTARS_hex_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_qbz_lsw_hex_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_qbz_lsw";
		camo = "hex";
	};
};

// AK-47
class rhs_weap_ak103_npz;
class rhs_weap_ak103_zenitco01_b33;
class rhs_weap_ak104_npz;
class rhs_weap_ak104_zenitco01_b33;
class rhs_weap_ak105_npz;
class rhs_weap_ak105_zenitco01_b33;
class rhs_weap_ak74m_npz;
class rhs_weap_ak74m_camo_npz;
class rhs_weap_ak74m_desert_npz;
class rhs_weap_ak74m_fullplum_npz;
class rhs_weap_ak74m_zenitco01_b33;
class rhs_weap_ak74mr;
class rhs_weap_ak74n_npz;
class rhs_weap_ak74n_2_npz;
class rhs_weap_akmn_npz;
class rhs_weap_akmn_zenitco01_b33;
class rhs_weap_aks74n_npz;
class rhs_weap_aks74n_2_npz;
class arifle_AK12_F;
class arifle_AK12_arid_F;
class arifle_AK12_lush_F;
class arifle_AK12U_F;
class arifle_AK12U_arid_F;
class arifle_AK12U_lush_F;
class rtg_weap_ak103_npz : rhs_weap_ak103_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak103_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak103";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
};
class rtg_weap_ak103_zenitco01_b33 : rhs_weap_ak103_zenitco01_b33
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak103_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak103";
		barrel = "default";
		stock = "b33";
		camo = "standard";
	};
} class rtg_weap_ak104_npz : rhs_weap_ak104_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak104_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak104";
		barrel = "short";
		stock = "b13";
		camo = "standard";
	};
} class rtg_weap_ak104_zenitco01_b33 : rhs_weap_ak104_zenitco01_b33
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak104_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak104";
		barrel = "short";
		stock = "b33";
		camo = "standard";
	};
} class rtg_weap_ak105_npz : rhs_weap_ak105_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak105_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak105";
		barrel = "short";
		stock = "b13";
		camo = "standard";
	};
} class rtg_weap_ak105_zenitco01_b33 : rhs_weap_ak105_zenitco01_b33
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak105_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak105";
		barrel = "short";
		stock = "b33";
		camo = "standard";
	};
} class rtg_weap_ak74m_npz : rhs_weap_ak74m_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
} class rtg_weap_ak74m_camo_npz : rhs_weap_ak74m_camo_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_camo_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b13";
		camo = "camo";
	};
} class rtg_weap_ak74m_desert_npz : rhs_weap_ak74m_desert_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_desert_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b13";
		camo = "desert";
	};
} class rtg_weap_ak74m_fullplum_npz : rhs_weap_ak74m_fullplum_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_fullplum_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b13";
		camo = "plum";
	};
} class rtg_weap_ak74m_zenitco01_b33 : rhs_weap_ak74m_zenitco01_b33
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b33";
		camo = "standard";
	};
} class rtg_weap_ak74mmr : rhs_weap_ak74mr
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74mmr";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "mmr";
		camo = "standard";
	};
} class rtg_weap_ak74n_npz : rhs_weap_ak74n_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74n_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74n";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
} class rtg_weap_ak74n_2_npz : rhs_weap_ak74n_2_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74n_2_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74n";
		barrel = "default";
		stock = "b13";
		camo = "plum";
	};
} class rtg_weap_akmn_npz : rhs_weap_akmn_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_akmn_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "akmn";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
} class rtg_weap_akmn_zenitco01_b33 : rhs_weap_akmn_zenitco01_b33
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_akmn_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "akmn";
		barrel = "default";
		stock = "b33";
		camo = "standard";
	};
} class rtg_weap_aks74n_npz : rhs_weap_aks74n_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_aks74n_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "aks74n";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
} class rtg_weap_aks74n_2_npz : rhs_weap_aks74n_2_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_aks74n_2_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "aks74n";
		barrel = "default";
		stock = "b13";
		camo = "plum";
	};
} class rtg_arifle_AK12_F : arifle_AK12_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
} class rtg_arifle_AK12_arid_F : arifle_AK12_arid_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12_arid_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "default";
		stock = "b13";
		camo = "desert";
	};
} class rtg_arifle_AK12_lush_F : arifle_AK12_lush_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12_lush_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "default";
		stock = "b13";
		camo = "camo";
	};
} class rtg_arifle_AK12U_F : arifle_AK12U_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12U_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "short";
		stock = "b13";
		camo = "standard";
	};
} class rtg_arifle_AK12U_arid_F : arifle_AK12U_arid_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12U_arid_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "short";
		stock = "b13";
		camo = "desert";
	};
} class rtg_arifle_AK12U_lush_F : arifle_AK12U_lush_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12U_lush_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "short";
		stock = "b13";
		camo = "camo";
	};
}

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

class rtg_vector_50ae : SMG_01_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_vector_50ae";
	Author = "Shrike";
	displayName = "Vector .50 SMG";
	recoil = "rhs_recoil_mp7_folded";
	magazineWell[] = {"rtg_50_ae_20rnd_mag"};
	magazines[] = {"rtg_50_ae_20rnd_mag"};
};

class SMG_05_F;
class rtg_mp5k_9mm : SMG_05_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mp5k_9mm";
	Author = "Shrike";
	displayName = "MP5K 9mm SMG";
	recoil = "recoil_mp5a2";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "short";
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
	maxZeroing = 1600;
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

class rtg_mp4a2_tac : arifle_SPAR_01_blk_F
{
	scope = 2;
	dlc = "raiderTactical";
	model = "\hlc_wp_Mp5\mesh\mp5a2\mp5_tac.p3d";
	modelMagazine = "\hlc_wp_aug\mesh\magazine\magazine2.p3d";
	baseWeapon = "rtg_mp4a2_tac";
	recoil = "recoil_mp5a2";
	reloadaction = "HLC_GestureReloadMP5";
	picture = "\hlc_wp_MP5\tex\ui\gear_mp5a2_x_ca";
	hiddenSelections[] = {"Reciever", "FCG", "Stock", "Foregrip", "Rail", "Magazine"};
	hiddenSelectionsTextures[] = {"hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa", "hlc_wp_mp5\tex\krycek_mp5\mp5ka1_co.paa", "hlc_wp_mp5\tex\krycek_mp5\mp5_parts2_co.paa", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa", "hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.paa", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa"};
	AB_barrelTwist = 10;
	AB_barrelLength = 9;
	ACE_barrelTwist = 254.0;
	ACE_barrelLength = 228.6;
	discretedistance[] = {50, 100, 150, 200};
	discretedistanceinitindex = 0;
	bg_bipod = 0;
	handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\mp5_handgesture.rtm"};
	Author = "Shrike";
	displayName = "MP5A2 9mm SMG";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "long";
	};
};

class rtg_mp5sd6_tac : rtg_mp4a2_tac
{
	scope = 2;
	dlc = "raiderTactical";
	modelMagazine = "\hlc_wp_aug\mesh\magazine\magazine2.p3d";
	baseWeapon = "rtg_mp5sd6_tac";
	recoil = "recoil_mp5a2";
	model = "\hlc_wp_Mp5\mesh\mp5sd6\mp5.p3d";
	reloadaction = "HLC_GestureReloadMP5";
	handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5sd.rtm"};
	picture = "\hlc_wp_MP5\tex\ui\gear_mp5sd6_x_ca";
	hiddenSelections[] = {"Reciever", "FC", "Stock", "Rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa", "hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.paa"};
	AB_barrelTwist = 10;
	AB_barrelLength = 9;
	ACE_barrelTwist = 254.0;
	ACE_barrelLength = 228.6;
	discretedistance[] = {50, 100, 150, 200};
	discretedistanceinitindex = 0;
	bg_bipod = 0;
	Author = "Shrike";
	displayName = "MPSD6 9mm SMG";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 67.579994;
		class PointerSlot : PointerSlot_Rail
		{
		};
		class MuzzleSlot
		{
		};
	};
	class FullAuto : FullAuto
	{
		sounds[] = {"StandardSound"};
		class StandardSound : StandardSound
		{
			soundSetShot[] = {"mp5sd_silencerShot_SoundSet", "mp5sd_silencerTail_SoundSet"};
		};
	};
	class Single : Single
	{
		sounds[] = {"StandardSound"};
		class StandardSound : StandardSound
		{
			soundSetShot[] = {"mp5sd_silencerShot_SoundSet", "mp5sd_silencerTail_SoundSet"};
		};
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "sd";
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

// .300 Blk Carbines
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

class hlc_rifle_aek971;
class rtg_aek971 : hlc_rifle_aek971
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_aek971";
	Author = "Shrike";
	displayName = "AEK-971";
	modes[] = {"Single", "FullAuto"};
	class FullAuto : FullAuto
	{
		reloadTime = 0.058;
	};
	class Single : Single
	{
		reloadTime = 0.08;
	};
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
	maxZeroing = 1600;
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
	displayName = "HK-417 Black";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_hk417";
		camo = "black";
	};
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
	picture = "\hlc_wp_g3\tex\ui\gear_g3ka4_x_ca";
	hiddenSelections[] = {"Main", "Rail", "Stock"};
	handAnim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_STD_thin.rtm"};
	hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_2_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa", "hlc_wp_g3\tex\arby_mp5n\mp5_co.paa"};
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 314.96;
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

class rhs_weap_SCARH_CQC;
class rtg_dsa_fal_tac : rhs_weap_SCARH_CQC
{
	scope = 2;
	dlc = "raiderTactical";
	AB_barrelTwist = 12;
	AB_barrelLength = 13;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 280;
	ace_railHeightAboveBore = 3.2;
	Author = "Shrike";
	baseWeapon = "rtg_dsa_fal_tac";
	displayName = "FAL RIS";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	handAnim[] = {"OFP2_ManSkeleton", "\hlc_wp_fal\gesture\newgesture\gesture_OSW_STD.rtm"};
	model = "\hlc_wp_FAL\mesh\sa58\osw.p3d";
	picture = "\hlc_wp_FAL\tex\ui\gear_osw_x_ca";
	hiddenSelections[] = {"Reciever", "Barrel", "Frontsight", "Foregrip", "Grip", "Rearsight", "Stock", "Magazine", "Rails", "VFG"};
	hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\israeli\rec_sanitary_co.paa", "hlc_wp_fal\tex\sa58\barrel-match_co.paa", "hlc_wp_fal\tex\fsight_co.paa", "hlc_wp_fal\tex\sa58\foregrip-dsa_co.paa", "hlc_wp_fal\tex\grip-enfield_co.paa", "hlc_wp_fal\tex\israeli\rearsight-slr_co.paa", "hlc_wp_fal\tex\sa58\foldingstock_co.paa", "hlc_wp_fal\tex\mag-20_co.paa", "hlc_wp_fal\tex\dsatoprails_co.paa", "hlc_wp_fal\tex\sa58\verticalgrip_co.paa"};
	discretedistance[] = {200, 300, 400, 500, 600, 700};
	discretedistanceinitindex = 0;
	cameradir = "look";
	discreteDistanceCameraPoint[] = {"eye2", "eye3", "eye4", "eye5", "eye6", "eye7"};
};

class srifle_EBR_F;
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
		reloadTime = 0.084;
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
		reloadTime = 0.084;
		dispersion = 0.000261799;
	};
};

class rtg_249_pip_L : LMG_Mk200_black_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_L";
	Author = "Shrike";
	displayName = "M249 Long RIS";
	model = "\hlc_wp_saw\mesh\minimi_para\minimi_para_longer_railed.p3d";
	reloadaction = "HLC_GestureReloadM249";
	picture = "\hlc_wp_saw\tex\ui\gear_minimipara_x_ca";
	hiddenSelections[] = {"Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG"};
	hiddenSelectionsTextures[] = {"hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\fore_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\pouch_auscam_co.paa", ""};
	handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
	magazineWell[] = {"CBA_556x45_MINIMI"};
	magazines[] = {"rtg_200rnd_556_45"};
	modelMagazine = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy" recoil = "recoil_mp5a2";
	ACE_barrelTwist = 228.6;
	maxZeroing = 1600;
	ACE_barrelLength = 457.2;
	ace_railHeightAboveBore = 2.5;
	modes[] = {"FullAuto"};
	class FullAuto : manual
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
		reloadTime = 0.084;
		dispersion = 0.000261799;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "long";
		calibre = "N556";
		stock = "para";
	};
};
class rtg_249_pip_S : LMG_Mk200_black_F
{
	scope = 2;
	dlc = "raiderTactical";
	model = "\hlc_wp_saw\mesh\minimi_para\minimi_railed.p3d";
	reloadaction = "HLC_GestureReloadM249";
	picture = "\hlc_wp_saw\tex\ui\gear_minimipara_x_ca";
	hiddenSelections[] = {"Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG"};
	hiddenSelectionsTextures[] = {"hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\fore_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\pouch_auscam_co.paa", ""};
	handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
	baseWeapon = "rtg_249_pip_S";
	Author = "Shrike";
	displayName = "M249 Short RIS";
	magazineWell[] = {"CBA_556x45_MINIMI"};
	magazines[] = {"rtg_200rnd_556_45"};
	modelMagazine = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy" recoil = "recoil_mp5a2";
	AB_barrelTwist = 7;
	AB_barrelLength = 13.7;
	agm_bipod = 1;
	ACE_barrelTwist = 178;
	ACE_barrelLength = 349;
	modes[] = {"FullAuto"};
	class FullAuto : manual
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
		reloadTime = 0.084;
		dispersion = 0.000261799;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "short";
		calibre = "N556";
		stock = "para";
	};
};
class rtg_249_pip_colap_S : LMG_Mk200_black_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_colap_S";
	Author = "Shrike";
	displayName = "M249 Short RIS PIP";
	model = "\hlc_wp_saw\mesh\m249\m249e2_pip3.p3d";
	reloadaction = "HLC_GestureReloadM249";
	picture = "\hlc_wp_saw\tex\ui\gear_m249e2parapip2_x_ca";
	hiddenSelections[] = {"Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG"};
	hiddenSelectionsTextures[] = {"hlc_wp_saw\tex\toadie_m249\reciever_249_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\fore_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\amoobox_co.paa", "hlc_wp_saw\tex\toadie_m249\vert_grip_co.paa"};
	handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
	magazineWell[] = {"CBA_556x45_MINIMI"};
	magazines[] = {"rtg_200rnd_556_45"};
	modelMagazine = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy" recoil = "recoil_mp5a2";
	AB_barrelTwist = 7;
	AB_barrelLength = 13.7;
	agm_bipod = 1;
	ACE_barrelTwist = 178;
	ACE_barrelLength = 349;
	modes[] = {"FullAuto"};
	class FullAuto : manual
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
		reloadTime = 0.084;
		dispersion = 0.000261799;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "short";
		calibre = "N556";
		stock = "pip";
	};
};
class rtg_249_pip_colap_L : LMG_Mk200_black_F
{
	scope = 2;
	dlc = "raiderTactical";
	model = "\hlc_wp_saw\mesh\m249\m249e2_pip4.p3d";
	reloadaction = "HLC_GestureReloadM249";
	handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
	picture = "\hlc_wp_saw\tex\ui\gear_m249e2pip2_x_ca";
	hiddenSelections[] = {"Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG"};
	hiddenSelectionsTextures[] = {"hlc_wp_saw\tex\toadie_m249\reciever_249_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\PIP_Foregrip_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\amoobox_co.paa", "hlc_wp_saw\tex\toadie_m249\vert_grip_co.paa"};
	baseWeapon = "rtg_249_pip_colap_L";
	Author = "Shrike";
	displayName = "M249 Long RIS PIP";
	magazineWell[] = {"CBA_556x45_MINIMI"};
	magazines[] = {"rtg_200rnd_556_45"};
	modelMagazine = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy" recoil = "recoil_mp5a2";
	ACE_barrelTwist = 228.6;
	maxZeroing = 1600;
	ACE_barrelLength = 457.2;
	ace_railHeightAboveBore = 2.5;
	modes[] = {"FullAuto"};
	class FullAuto : manual
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
		reloadTime = 0.084;
		dispersion = 0.000261799;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "long";
		calibre = "N556";
		stock = "pip";
	};
};
class rtg_249_pip_S_300 : LMG_Mk200_black_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_S_300";
	Author = "Shrike";
	recoil = "recoil_mp5a2";
	displayName = "M249 300 Blk Short RIS";
	magazineWell[] = {"CBA_300_blk_MINIMI"};
	magazines[] = {"rtg_200rnd_300_blk"};
	modes[] = {"FullAuto"};
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
		calibre = "N300";
		stock = "fixed";
	};
};
class rtg_249_pip_s_762 : LMG_Mk200_black_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_s_762";
	Author = "Shrike";
	displayName = "M249 7.62 Short RIS";
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
class rtg_249_pip_ris : LMG_Mk200_black_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_ris";
	Author = "Shrike";
	displayName = "M249 Solid RIS";
	magazineWell[] = {"CBA_556x45_MINIMI"};
	magazines[] = {"rtg_200rnd_556_45"};
	modelMagazine = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy" 
	recoil = "recoil_mp5a2";
	maxZeroing = 1600;
	ACE_barrelTwist = 305;
	ACE_barrelLength = 465;
	AB_barrelTwist = 12;
	AB_barrelLength = 18.3;
	ace_railHeightAboveBore = 2.5;
	model = "\hlc_wp_saw\mesh\minimi_para\minimi_longer_railed.p3d";
	reloadaction = "HLC_GestureReloadM249";
	picture = "\hlc_wp_saw\tex\ui\gear_minimipara_x_ca";
	hiddenSelections[] = {"Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG"};
	hiddenSelectionsTextures[] = {"hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\fore_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\pouch_auscam_co.paa", ""};
	handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
	modes[] = {"FullAuto"};
	class FullAuto : manual
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
		reloadTime = 0.084;
		dispersion = 0.000261799;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m249";
		barrel = "long";
		calibre = "N556";
		stock = "fixed";
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
	modes[] = {"FullAuto"};
	recoil = "rhs_recoil_mk18";
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
		reloadTime = 0.105;
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

class UK3CB_Bren;
class rtg_L4 : UK3CB_Bren {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_L4";
	recoil = "rhs_recoil_mp7";
	magazineWell[] = {"CBA_762x51_M14"};
	magazines[] = {"rtg_20Rnd_762x51"};
	displayName = "L4 'Bren' 7.62 Nato";
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
	modes[] = {"FullAuto"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 250.7;
	};
	class FullAuto : FullAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"NIA_MG3_NEW_Shot_SoundSet","MG3_Tail_SoundSet"};
		};
		reloadTime = 0.08;
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
	displayName = "MRAWS Olive";
	baseWeapon = "rtg_MRAWS_olive";
	magazineWell[] = {"CBA_Carl_Gustaf"};
	magazines[] = {"rtg_MRAWS_HEAT_F"};
};
class rtg_MRAWS_sand : launch_MRAWS_sand_F
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "MRAWS Sand";
	baseWeapon = "rtg_MRAWS_sand";
	magazineWell[] = {"CBA_Carl_Gustaf"};
	magazines[] = {"rtg_MRAWS_HEAT_F"};
};

class rhs_weap_maaws;
class rtg_MRAWS : rhs_weap_maaws {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "MRAWS";
	baseWeapon = "rtg_MRAWS";
	magazineWell[] = {"CBA_Carl_Gustaf"};
	magazines[] = {"rtg_MRAWS_HEAT_F"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		allowedslots[] = {901};
		mass = 187,4;
		class CowsSlot {
			access = 1;
			compatibleitems[] = {"rtg_maaws_option"};
			displayname = "Optics Slot";
			linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
			scope = 2;
		};
	};
};

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
	maxZeroing = 1600;
	ACE_barrelLength = 457.2;
	ace_railHeightAboveBore = 2.5;
	reloadAction = "NIA_GestureReload416";
	model = "hlc_wp_ar15\mesh\LAR15_samr\samr.p3d";
	picture = "\hlc_wp_ar15\tex\ui\gear_SAMR_ca";
	descriptionShort = "12g Shotgun AR";
	discretedistance[] = {100, 200, 300, 400, 500};
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