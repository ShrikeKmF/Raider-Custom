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
class hlc_rifle_aug : hlc_aug_base {
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
};
class hlc_rifle_auga3 : hlc_aug_base {
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "khaki";
	};
};
class hlc_rifle_auga3_bl : hlc_rifle_auga3 {
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "blue";
	};
};
class hlc_rifle_auga3_b : hlc_rifle_auga3 {
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "black";
	};
};
class hlc_rifle_auga3_GL : hlc_aug_base {
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_aug_gl";
		camo = "khaki";
	};
};
class hlc_rifle_auga3_GL_BL : hlc_rifle_auga3_GL {
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_aug_gl";
		camo = "blue";
	};
};
class hlc_rifle_auga3_GL_B : hlc_rifle_auga3_GL {
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_aug_gl";
		camo = "black";
	};
};
class hlc_rifle_auga2para : hlc_aug_base {
	magazineWell[] = { "RTG_9x19" };
	magazines[] = { "rtg_9mm_35Rnd_mag" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_aug";
		barrel = "para";
		camo = "khaki";
	};
};
class hlc_rifle_auga2para_t : hlc_rifle_auga2para {
	magazineWell[] = { "RTG_9x19" };
	magazines[] = { "rtg_9mm_35Rnd_mag" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_aug";
		barrel = "para";
		camo = "sand";
	};
};
class hlc_rifle_auga2para_b : hlc_rifle_auga2para {
	magazineWell[] = { "RTG_9x19" };
	magazines[] = { "rtg_9mm_35Rnd_mag" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_aug";
		barrel = "para";
		camo = "black";
	};
};

// G36
class hlc_g36_base;
class hlc_rifle_G36V : hlc_g36_base {
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
};
class hlc_rifle_G36KV : hlc_rifle_G36V {};
class hlc_rifle_G36CV : hlc_rifle_G36V {};
class hlc_rifle_G36VTAC : hlc_rifle_G36V {};
class hlc_rifle_G36KVTAC : hlc_rifle_G36V {};
class hlc_rifle_G36CVTAC : hlc_rifle_G36V {};
class hlc_rifle_G36VAG36 : hlc_rifle_G36V {};
class hlc_rifle_G36C : hlc_rifle_G36V {};
class hlc_rifle_MG36 : hlc_rifle_G36V {};

// MSBS Grot
class arifle_MSBS65_F;
class arifle_MSBS65_black_F;
class arifle_MSBS65_camo_F;
class arifle_MSBS65_sand_F;
class rtg_MSBS65_F : arifle_MSBS65_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_F";
	Author = "Shrike";
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_grot";
		camo = "khaki";
	};
};
class rtg_MSBS65_black_F : arifle_MSBS65_black_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_black_F";
	Author = "Shrike";
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_grot";
		camo = "black";
	};
};
class rtg_MSBS65_camo_F : arifle_MSBS65_camo_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_camo_F";
	Author = "Shrike";
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_grot";
		camo = "camo";
	};
};
class rtg_MSBS65_sand_F : arifle_MSBS65_sand_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_sand_F";
	Author = "Shrike";
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_grot";
		camo = "sand";
	};
};
class arifle_MSBS65_GL_F;
class arifle_MSBS65_GL_black_F;
class arifle_MSBS65_GL_camo_F;
class arifle_MSBS65_GL_sand_F;
class rtg_MSBS65_GL_F : arifle_MSBS65_GL_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_GL_F";
	Author = "Shrike";
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_grot_gl";
		gl = "gl";
		camo = "khaki";
	};
};
class rtg_MSBS65_GL_black_F : arifle_MSBS65_GL_black_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_GL_black_F";
	Author = "Shrike";
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_grot_gl";
		gl = "gl";
		camo = "black";
	};
};
class rtg_MSBS65_GL_camo_F : arifle_MSBS65_GL_camo_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_GL_camo_F";
	Author = "Shrike";
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_grot_gl";
		gl = "gl";
		camo = "camo";
	};
};
class rtg_MSBS65_GL_sand_F : arifle_MSBS65_GL_sand_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_GL_sand_F";
	Author = "Shrike";
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_grot_gl";
		gl = "gl";
		camo = "sand";
	};
};
class arifle_MSBS65_UBS_F;
class arifle_MSBS65_UBS_black_F;
class arifle_MSBS65_UBS_camo_F;
class arifle_MSBS65_UBS_sand_F;
class rtg_MSBS65_UBS_F : arifle_MSBS65_UBS_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_UBS_F";
	Author = "Shrike";
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_grot_gl";
		gl = "sg";
		camo = "khaki";
	};
};
class rtg_MSBS65_UBS_black_F : arifle_MSBS65_UBS_black_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_UBS_black_F";
	Author = "Shrike";
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_grot_gl";
		gl = "sg";
		camo = "black";
	};
};
class rtg_MSBS65_UBS_camo_F : arifle_MSBS65_UBS_camo_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_UBS_camo_F";
	Author = "Shrike";
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_grot_gl";
		gl = "sg";
		camo = "camo";
	};
};
class rtg_MSBS65_UBS_sand_F : arifle_MSBS65_UBS_sand_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_MSBS65_UBS_sand_F";
	Author = "Shrike";
	magazineWell[] = { "CBA_556x45_STANAG" };
	magazines[] = { "rtg_30rnd_556_45" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_grot_gl";
		gl = "sg";
		camo = "sand";
	};
};

class hlc_rifle_samr2;
class rhs_weap_mk18;
class rhs_weap_mk18_bk;
class rhs_weap_mk18_KAC_bk;
class rhs_weap_mk18_d;
class rhs_weap_mk18_KAC_d;
class rhs_weap_mk18_KAC;
class rhs_weap_mk18_wd;
class rhs_weap_mk18_KAC_wd;
class arifle_SPAR_01_blk_F;
class arifle_SPAR_01_khk_F;
class arifle_SPAR_01_snd_F;
class arifle_SPAR_02_blk_F;
class arifle_SPAR_02_khk_F;
class arifle_SPAR_02_snd_F;
class rtg_hk416_blk_s : arifle_SPAR_01_blk_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_s";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N556";
		camo = "black";
	};
};
class rtg_hk416_khk_s : arifle_SPAR_01_khk_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_khk_s";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N556";
		camo = "khaki";
	};
};
class rtg_hk416_snd_s : arifle_SPAR_01_snd_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_snd_s";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N556";
		camo = "sand";
	};
};
class rtg_hk416_blk_l : arifle_SPAR_02_blk_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_l";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "long";
		calibre = "N556";
		camo = "black";
	};
};
class rtg_hk416_khk_l : arifle_SPAR_02_khk_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_khk_l";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "long";
		calibre = "N556";
		camo = "khaki";
	};
};
class rtg_hk416_snd_l : arifle_SPAR_02_snd_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_snd_l";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "long";
		calibre = "N556";
		camo = "sand";
	};
};

class rtg_mk18 : rhs_weap_mk18 {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_mk18";
		stock = "default";
		camo = "standard";
	};
};
class rtg_mk18_blk : rhs_weap_mk18_bk {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18_blk";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_mk18";
		stock = "default";
		camo = "black";
	};
};
class rtg_mk18_bk_kac : rhs_weap_mk18_KAC_bk {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18_bk_kac";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_mk18";
		stock = "sopmod";
		camo = "black";
	};
};
class rtg_mk18_d : rhs_weap_mk18_d {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18_d";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_mk18";
		stock = "default";
		camo = "desert";
	};
};
class rtg_mk18_d_kac : rhs_weap_mk18_KAC_d {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18_d_kac";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_mk18";
		stock = "sopmod";
		camo = "desert";
	};
};
class rtg_mk18_kac : rhs_weap_mk18_KAC {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18_kac";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_mk18";
		stock = "sopmod";
		camo = "standard";
	};
};
class rtg_mk18_wd : rhs_weap_mk18_wd {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18_wd";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_mk18";
		stock = "default";
		camo = "woodland";
	};
};
class rtg_mk18_wd_kac : rhs_weap_mk18_KAC_wd {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk18_wd_kac";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_mk18";
		stock = "sopmod";
		camo = "woodland";
	};
};

// SCAR
class hlc_WP_SCARH_CQC;
class hlc_WP_SCARH_CQC_Blk;
class hlc_WP_SCARH_CQC_camo;
class hlc_WP_SCARH_DMR;
class hlc_WP_SCARH_DMR_Blk;
class hlc_WP_SCARH_DMR_camo;
class hlc_WP_SCARH_STD;
class hlc_WP_SCARH_STD_Blk;
class hlc_WP_SCARH_STD_camo;
class rtg_scarh_cqc : hlc_WP_SCARH_CQC {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarh_cqc";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N762";
		camo = "tan";
	};
};
class rtg_scarh_cqc_blk : hlc_WP_SCARH_CQC_Blk {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarh_cqc_blk";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N762";
		camo = "black";
	};
};
class rtg_scarh_cqc_camo : hlc_WP_SCARH_CQC_camo {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarh_cqc_camo";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N762";
		camo = "camo";
	};
};
class rtg_scarh_lb : hlc_WP_SCARH_DMR {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarh_lb";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N762";
		camo = "tan";
	};
};
class rtg_scarh_lb_blk : hlc_WP_SCARH_DMR_Blk {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarh_lb_blk";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N762";
		camo = "black";
	};
};
class rtg_scarh_lb_camo : hlc_WP_SCARH_DMR_camo {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarh_lb_camo";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N762";
		camo = "camo";
	};
};
class rtg_scarh_std : hlc_WP_SCARH_STD {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarh_std";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N762";
		camo = "tan";
	};
};
class rtg_scarh_std_blk : hlc_WP_SCARH_STD_Blk {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarh_std_blk";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N762";
		camo = "black";
	};
};
class rtg_scarh_std_camo : hlc_WP_SCARH_STD_camo {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarh_std_camo";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N762";
		camo = "camo";
	};
};
class hlc_wp_SCARL_CQC_blk;
class hlc_wp_SCARL_CQC;
class hlc_wp_SCARL_CQC_camo;
class hlc_wp_SCARL_STD_blk;
class hlc_wp_SCARL_STD;
class hlc_wp_SCARL_STD_camo;
class hlc_wp_SCARL_DMR_blk;
class hlc_wp_SCARL_DMR;
class hlc_wp_SCARL_DMR_camo;
class hlc_wp_SCAR_PDW_blk;
class hlc_wp_SCAR_PDW;
class hlc_wp_SCAR_PDW_camo;
class rtg_scarl_pdw : hlc_wp_SCAR_PDW {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_pdw";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "sc";
		calibre = "N556";
		camo = "tan";
	};
};
class rtg_scarl_pdw_blk : hlc_wp_SCAR_PDW_blk {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_pdw_blk";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "sc";
		calibre = "N556";
		camo = "black";
	};
};
class rtg_scarl_pdw_camo : hlc_wp_SCAR_PDW_camo {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_pdw_camo";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "sc";
		calibre = "N556";
		camo = "camo";
	};
};
class rtg_scarl_cqc : hlc_wp_SCARL_CQC {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_cqc";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N556";
		camo = "tan";
	};
};
class rtg_scarl_cqc_blk : hlc_wp_SCARL_CQC_blk {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_cqc_blk";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N556";
		camo = "black";
	};
};
class rtg_scarl_cqc_camo : hlc_wp_SCARL_CQC_camo {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_cqc_camo";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N556";
		camo = "camo";
	};
};
class rtg_scarl_lb : hlc_wp_SCARL_DMR {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_lb";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N556";
		camo = "tan";
	};
};
class rtg_scarl_lb_blk : hlc_wp_SCARL_DMR_blk {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_lb_blk";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N556";
		camo = "black";
	};
};
class rtg_scarl_lb_camo : hlc_wp_SCARL_DMR_camo {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_lb_camo";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N556";
		camo = "camo";
	};
};
class rtg_scarl_std : hlc_wp_SCARL_STD {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_std";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N556";
		camo = "tan";
	};
};
class rtg_scarl_std_blk : hlc_wp_SCARL_STD_blk {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_std_blk";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N556";
		camo = "black";
	};
};
class rtg_scarl_std_camo : hlc_wp_SCARL_STD_camo {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_std_camo";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N556";
		camo = "camo";
	};
};

class hlc_WP_SCARL_CQC_300AAC_blk;
class hlc_WP_SCARL_CQC_300AAC;
class hlc_WP_SCARL_CQC_300AAC_camo;
class hlc_WP_SCARL_STD_300AAC_blk;
class hlc_WP_SCARL_STD_300AAC;
class hlc_WP_SCARL_STD_300AAC_camo;

class rtg_scarl_cqc_300 : hlc_WP_SCARL_CQC_300AAC {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_cqc_300";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N300";
		camo = "tan";
	};
};
class rtg_scarl_cqc_blk_300 : hlc_WP_SCARL_CQC_300AAC_blk {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_cqc_blk_300";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N300";
		camo = "black";
	};
};
class rtg_scarl_cqc_camo_300 : hlc_WP_SCARL_CQC_300AAC_camo {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_cqc_camo_300";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "cqb";
		calibre = "N300";
		camo = "camo";
	};
};
class rtg_scarl_std_300 : hlc_WP_SCARL_STD_300AAC {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_std_300";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N300";
		camo = "tan";
	};
};
class rtg_scarl_std_blk_300 : hlc_WP_SCARL_STD_300AAC_blk {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_std_blk_300";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N300";
		camo = "black";
	};
};
class rtg_scarl_std_camo_300 : hlc_WP_SCARL_STD_300AAC_camo {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_std_camo_300";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "std";
		calibre = "N300";
		camo = "camo";
	};
};
class rtg_scarl_lb_300 : hlc_wp_SCARL_DMR {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_lb_300";
	Author = "Shrike";
	displayName = "FN SCAR-L LB (.300 AAC)";
	magazineWell[] = { "CBA_300BLK_STANAG" };
	magazines[] = { "rtg_30rnd_300_blk" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N300";
		camo = "tan";
	};
};
class rtg_scarl_lb_blk_300 : hlc_wp_SCARL_DMR_blk {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_lb_blk_300";
	Author = "Shrike";
	displayName = "FN SCAR-L LB (.300 AAC/Black)";
	magazineWell[] = { "CBA_300BLK_STANAG" };
	magazines[] = { "rtg_30rnd_300_blk" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N300";
		camo = "black";
	};
};
class rtg_scarl_lb_camo_300 : hlc_wp_SCARL_DMR_camo {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_scarl_lb_camo_300";
	Author = "Shrike";
	displayName = "FN SCAR-L LB (.300 AAC/Camo)";
	magazineWell[] = { "CBA_300BLK_STANAG" };
	magazines[] = { "rtg_30rnd_300_blk" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_scar";
		barrel = "lb";
		calibre = "N300";
		camo = "camo";
	};
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
class rtg_m4a1_carryhandle : rhs_weap_m4a1_carryhandle {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_carryhandle";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "default";
		camo = "black";
	};
};
class rtg_m4a1_carryhandle_mstock : rhs_weap_m4a1_carryhandle_mstock {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_carryhandle_mstock";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "magpull";
		camo = "black";
	};
};

class rtg_m4a1_blockII : rhs_weap_m4a1_blockII {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "standard";
	};
};
class rtg_m4a1_blockII_bk : rhs_weap_m4a1_blockII_bk {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII_bk";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "black";
	};
};
class rtg_m4a1_blockII_d : rhs_weap_m4a1_blockII_d {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII_d";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "desert";
	};
};
class rtg_m4a1_blockII_wd : rhs_weap_m4a1_blockII_wd {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII_wd";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "woodland";
	};
};
class rtg_m4a1_blockII_KAC : rhs_weap_m4a1_blockII_KAC {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII_KAC";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "standard";
	};
};
class rtg_m4a1_blockII_KAC_bk : rhs_weap_m4a1_blockII_KAC_bk {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII_KAC_bk";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "black";
	};
};
class rtg_m4a1_blockII_KAC_d : rhs_weap_m4a1_blockII_KAC_d {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII_KAC_d";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "desert";
	};
};
class rtg_m4a1_blockII_KAC_wd : rhs_weap_m4a1_blockII_KAC_wd {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_blockII_KAC_wd";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "woodland";
	};
};

class rtg_m4a1 : rhs_weap_m4a1 {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "pip";
		stock = "default";
		camo = "black";
	};
};
class rtg_m4a1_d : rhs_weap_m4a1_d {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_d";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "pip";
		stock = "default";
		camo = "desert";
	};
};
class rtg_m4a1_wd : rhs_weap_m4a1_wd {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_wd";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "pip";
		stock = "default";
		camo = "woodland";
	};
};
class rtg_m4a1_mstock : rhs_weap_m4a1_mstock {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_mstock";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "pip";
		stock = "magpull";
		camo = "black";
	};
};
class rtg_m4a1_d_mstock : rhs_weap_m4a1_d_mstock {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_d_mstock";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "pip";
		stock = "magpull";
		camo = "desert";
	};
};
class rtg_m4a1_wd_mstock : rhs_weap_m4a1_wd_mstock {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m4a1_wd_mstock";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m4a1";
		form = "pip";
		stock = "magpull";
		camo = "woodland";
	};
};

class rhs_weap_m16a4;
class rhs_weap_m16a4_carryhandle;
class rhs_weap_m16a4_imod;
class rtg_weap_m16a4 : rhs_weap_m16a4 {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_m16a4";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m16";
		form = "flattop";
	};
};
class rtg_weap_m16a4_carryhandle : rhs_weap_m16a4_carryhandle {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_m16a4_carryhandle";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m16";
		form = "carryhandle";
	};
};
class rtg_weap_m16a4_imod : rhs_weap_m16a4_imod {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_m16a4_imod";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_m16";
		form = "imod";
	};
};

class rtg_samr2 : arifle_SPAR_01_blk_F {
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
	discretedistance[] = { 100,200,300,400,500 };
	discretedistanceinitindex = 0;
	hiddenSelections[] = { "Upper", "Lower", "D-Ring", "Rails", "Panels", "VFG", "Harris", "Patch", "Stock" };
	hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\samr\upper_co.paa","hlc_wp_ar15\tex\samr\lower2_co.paa","hlc_wp_ar15\tex\samr\ras_co.paa","hlc_wp_ar15\tex\samr\risras_co.paa","hlc_wp_ar15\tex\samr\xtm2_co.paa","hlc_wp_ar15\tex\melon_cqbr\vgrip_co.paa","hlc_wp_ar15\tex\samr\hbipod_co.paa","","hlc_wp_ar15\tex\samr\stock_co.paa" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_samr";
		calibre = "N556";
	};
};

class rtg_samr2_300 : arifle_SPAR_01_blk_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_samr2_300";
	Author = "Shrike";
	displayName = "LAR-15 .300 Carbine";
	magazineWell[] = { "CBA_300BLK_STANAG" };
	magazines[] = { "rtg_30rnd_300_blk" };
	ACE_barrelTwist = 228.6;
	maxZeroing = 1600;
	ACE_barrelLength = 457.2;
	ace_railHeightAboveBore = 2.5;
	reloadAction = "NIA_GestureReload416";
	model = "hlc_wp_ar15\mesh\LAR15_samr\samr.p3d";
	picture = "\hlc_wp_ar15\tex\ui\gear_SAMR_ca";
	discretedistance[] = { 100,200,300,400,500 };
	discretedistanceinitindex = 0;
	hiddenSelections[] = { "Upper", "Lower", "D-Ring", "Rails", "Panels", "VFG", "Harris", "Patch", "Stock" };
	hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\samr\upper_co.paa","hlc_wp_ar15\tex\samr\lower2_co.paa","hlc_wp_ar15\tex\samr\ras_co.paa","hlc_wp_ar15\tex\samr\risras_co.paa","hlc_wp_ar15\tex\samr\xtm2_co.paa","hlc_wp_ar15\tex\melon_cqbr\vgrip_co.paa","hlc_wp_ar15\tex\samr\hbipod_co.paa","","hlc_wp_ar15\tex\samr\stock_co.paa" };
		class XtdGearInfo {
		model = "rtg_ace_expanded_samr";
		calibre = "N300";
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
class rhs_weap_ak74mmr;
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
class rtg_weap_ak103_npz : rhs_weap_ak103_npz {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak103_npz";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak103";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
};
class rtg_weap_ak103_zenitco01_b33 : rhs_weap_ak103_zenitco01_b33 {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak103_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak103";
		barrel = "default";
		stock = "b33";
		camo = "standard";
	};
}
class rtg_weap_ak104_npz : rhs_weap_ak104_npz {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak104_npz";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak104";
		barrel = "short";
		stock = "b13";
		camo = "standard";
	};
}
class rtg_weap_ak104_zenitco01_b33 : rhs_weap_ak104_zenitco01_b33 {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak104_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak104";
		barrel = "short";
		stock = "b33";
		camo = "standard";
	};
}
class rtg_weap_ak105_npz : rhs_weap_ak105_npz {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak105_npz";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak105";
		barrel = "short";
		stock = "b13";
		camo = "standard";
	};
}
class rtg_weap_ak105_zenitco01_b33 : rhs_weap_ak105_zenitco01_b33 {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak105_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak105";
		barrel = "short";
		stock = "b33";
		camo = "standard";
	};
}
class rtg_weap_ak74m_npz : rhs_weap_ak74m_npz{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_npz";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
}
class rtg_weap_ak74m_camo_npz : rhs_weap_ak74m_camo_npz{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_camo_npz";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b13";
		camo = "camo";
	};
}
class rtg_weap_ak74m_desert_npz : rhs_weap_ak74m_desert_npz{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_desert_npz";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b13";
		camo = "desert";
	};
}
class rtg_weap_ak74m_fullplum_npz : rhs_weap_ak74m_fullplum_npz{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_fullplum_npz";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b13";
		camo = "plum";
	};
}
class rtg_weap_ak74m_zenitco01_b33 : rhs_weap_ak74m_zenitco01_b33{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b33";
		camo = "standard";
	};
}
class rtg_weap_ak74mmr : rhs_weap_ak74mmr{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74mmr";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "mmr";
		camo = "standard";
	};
}
class rtg_weap_ak74n_npz : rhs_weap_ak74n_npz{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74n_npz";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak74n";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
}
class rtg_weap_ak74n_2_npz : rhs_weap_ak74n_2_npz{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74n_2_npz";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak74n";
		barrel = "default";
		stock = "b13";
		camo = "plum";
	};
}
class rtg_weap_akmn_npz : rhs_weap_akmn_npz{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_akmn_npz";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "akmn";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
}
class rtg_weap_akmn_zenitco01_b33 : rhs_weap_akmn_zenitco01_b33{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_akmn_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "akmn";
		barrel = "default";
		stock = "b33";
		camo = "standard";
	};
}
class rtg_weap_aks74n_npz : rhs_weap_aks74n_npz{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_aks74n_npz";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "aks74n";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
}
class rtg_weap_aks74n_2_npz : rhs_weap_aks74n_2_npz{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_aks74n_2_npz";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "aks74n";
		barrel = "default";
		stock = "b13";
		camo = "plum";
	};
}
class rtg_arifle_AK12_F : arifle_AK12_F{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12_F";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
}
class rtg_arifle_AK12_arid_F : arifle_AK12_arid_F{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12_arid_F";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "default";
		stock = "b13";
		camo = "desert";
	};
}
class rtg_arifle_AK12_lush_F : arifle_AK12_lush_F{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12_lush_F";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "default";
		stock = "b13";
		camo = "camo";
	};
}
class rtg_arifle_AK12U_F : arifle_AK12U_F{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12U_F";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "short";
		stock = "b13";
		camo = "standard";
	};
}
class rtg_arifle_AK12U_arid_F : arifle_AK12U_arid_F{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12U_arid_F";
	Author = "Shrike";
	class XtdGearInfo {
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "short";
		stock = "b13";
		camo = "desert";
	};
}
class rtg_arifle_AK12U_lush_F : arifle_AK12U_lush_F{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12U_lush_F";
	Author = "Shrike";
	class XtdGearInfo {
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
	magazineWell[] = { "RTG_9x19" };
	magazines[] = { "rtg_9mm_35Rnd_mag" };
};

class SMG_05_F;
class rtg_mp5k_9mm : SMG_05_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mp5k_9mm";
	Author = "Shrike";
	displayName = "MP5K 9mm SMG";
	recoil = "recoil_mp5a2";
	magazineWell[] = { "RTG_9x19" };
	magazines[] = { "rtg_9mm_35Rnd_mag" };
	class XtdGearInfo {
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
	magazineWell[] = { "RTG_9x19" };
	magazines[] = { "rtg_9mm_35Rnd_mag" };
	recoil = "recoil_mp5a2";
};

class rtg_rifle_samr2_9mm : arifle_SPAR_01_blk_F {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_rifle_samr2_9mm";
	displayName = "LAR-9 Carbine";
	magazineWell[] = { "RTG_9x19" };
	magazines[] = { "rtg_9mm_35Rnd_mag" };
	ACE_barrelTwist = 228.6;
	maxZeroing = 1600;
	ACE_barrelLength = 457.2;
	ace_railHeightAboveBore = 2.5;
	reloadAction = "NIA_GestureReload416";
	model = "hlc_wp_ar15\mesh\LAR15_samr\samr.p3d";
	picture = "\hlc_wp_ar15\tex\ui\gear_SAMR_ca";
	descriptionShort = "9mm Pistol Carbine";
	discretedistance[] = { 100,200,300,400,500 };
	discretedistanceinitindex = 0;
	hiddenSelections[] = { "Upper", "Lower", "D-Ring", "Rails", "Panels", "VFG", "Harris", "Patch", "Stock" };
	hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\samr\upper_co.paa","hlc_wp_ar15\tex\samr\lower2_co.paa","hlc_wp_ar15\tex\samr\ras_co.paa","hlc_wp_ar15\tex\samr\risras_co.paa","hlc_wp_ar15\tex\samr\xtm2_co.paa","hlc_wp_ar15\tex\melon_cqbr\vgrip_co.paa","hlc_wp_ar15\tex\samr\hbipod_co.paa","","hlc_wp_ar15\tex\samr\stock_co.paa" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_samr";
		calibre = "N9";
	};
};

class rtg_mp4a2_tac : arifle_SPAR_01_blk_F {
	scope = 2;
	dlc = "raiderTactical";
	model = "\hlc_wp_Mp5\mesh\mp5a2\mp5_tac.p3d";
	baseWeapon = "rtg_mp4a2_tac";
	recoil = "recoil_mp5a2";
	reloadaction = "HLC_GestureReloadMP5";
	picture = "\hlc_wp_MP5\tex\ui\gear_mp5a2_x_ca";
	hiddenSelections[] = { "Reciever","FCG","Stock","Foregrip","Rail","Magazine" };
	hiddenSelectionsTextures[] = { "hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5ka1_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_parts2_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa" };
	AB_barrelTwist = 10;
	AB_barrelLength = 9;
	ACE_barrelTwist = 254.0;
	ACE_barrelLength = 228.6;
	discretedistance[] = { 50,100,150,200 };
	discretedistanceinitindex = 0;
	bg_bipod = 0;
	handanim[] = { "OFP2_ManSkeleton","\hlc_wp_mp5\gesture\newgest\mp5_handgesture.rtm" };
	Author = "Shrike";
	displayName = "MP5A2 9mm SMG";
	magazineWell[] = { "RTG_9x19" };
	magazines[] = { "rtg_9mm_35Rnd_mag" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_mp5";
		form = "long";
	};
};

class rtg_mp5sd6_tac : rtg_mp4a2_tac {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mp5sd6_tac";
	recoil = "recoil_mp5a2";
	model = "\hlc_wp_Mp5\mesh\mp5sd6\mp5.p3d";
	reloadaction = "HLC_GestureReloadMP5";
	handanim[] = { "OFP2_ManSkeleton","\hlc_wp_mp5\gesture\newgest\gesture_mp5sd.rtm" };
	picture = "\hlc_wp_MP5\tex\ui\gear_mp5sd6_x_ca";
	hiddenSelections[] = { "Reciever","FC","Stock","Rail" };
	hiddenSelectionsTextures[] = { "hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.paa" };
	AB_barrelTwist = 10;
	AB_barrelLength = 9;
	ACE_barrelTwist = 254.0;
	ACE_barrelLength = 228.6;
	discretedistance[] = { 50,100,150,200 };
	discretedistanceinitindex = 0;
	bg_bipod = 0;
	Author = "Shrike";
	displayName = "MPSD6 9mm SMG";
	magazineWell[] = { "RTG_9x19" };
	magazines[] = { "rtg_9mm_35Rnd_mag" };
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 67.579994;
		class PointerSlot : PointerSlot_Rail {};
		class MuzzleSlot {};
	};
	class FullAuto : FullAuto
	{
		sounds[] = { "StandardSound" };
		class StandardSound : StandardSound
		{
			soundSetShot[] = { "mp5sd_silencerShot_SoundSet","mp5sd_silencerTail_SoundSet" };
		};
	};
	class Single : Single
	{
		sounds[] = { "StandardSound" };
		class StandardSound : StandardSound
		{
			soundSetShot[] = { "mp5sd_silencerShot_SoundSet","mp5sd_silencerTail_SoundSet" };
		};
	};
	class XtdGearInfo {
		model = "rtg_ace_expanded_mp5";
		form = "sd";
	};
};

class rtg_hk416_blk_9 : arifle_SPAR_01_blk_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_9";
	Author = "Shrike";
	displayName = "HK-416 9mm Black Carbine";
	magazineWell[] = { "RTG_9x19" };
	magazines[] = { "rtg_9mm_35Rnd_mag" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N9";
		camo = "black";
	};
};
class rtg_hk416_khk_9 : arifle_SPAR_01_khk_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rth_hk416_khk_9";
	Author = "Shrike";
	displayName = "HK-416 9mm Khaki Carbine";
	magazineWell[] = { "RTG_9x19" };
	magazines[] = { "rtg_9mm_35Rnd_mag" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N9";
		camo = "khaki";
	};
};
class rtg_hk416_snd_9 : arifle_SPAR_01_snd_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rth_hk416_snd_9";
	Author = "Shrike";
	displayName = "HK-416 9mm Sand Carbine";
	magazineWell[] = { "RTG_9x19" };
	magazines[] = { "rtg_9mm_35Rnd_mag" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N9";
		camo = "sand";
	};
};

class SMG_02_F;
class rtg_smg_02 : SMG_02_F	{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_smg_02";
	Author = "Shrike";
	displayName = "CZ EVO 9mm SMG";
	magazineWell[] = { "RTG_9x19" };
	magazines[] = { "rtg_9mm_35Rnd_mag" };
};

// .300 Blk Carbines
class rtg_hk416_blk_300_s : arifle_SPAR_01_blk_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_300_s";
	Author = "Shrike";
	displayName = "HK-416 .300 BLK Black Short";
	magazineWell[] = { "CBA_300BLK_STANAG" };
	magazines[] = { "rtg_30rnd_300_blk" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N300";
		camo = "black";
	};
	class Single : Single {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
	};
	class FullAuto : FullAuto {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
	};
};
class rtg_hk416_khk_300_s : arifle_SPAR_01_khk_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_khk_300_s";
	Author = "Shrike";
	displayName = "HK-416 .300 BLK Khaki Short";
	magazineWell[] = { "CBA_300BLK_STANAG" };
	magazines[] = { "rtg_30rnd_300_blk" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N300";
		camo = "khaki";
	};
	class Single : Single {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
	};
	class FullAuto : FullAuto {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
	};
};
class rtg_hk416_snd_300_s : arifle_SPAR_01_snd_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_snd_300_s";
	Author = "Shrike";
	displayName = "HK-416 .300 BLK Sand Short";
	magazineWell[] = { "CBA_300BLK_STANAG" };
	magazines[] = { "rtg_30rnd_300_blk" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "short";
		calibre = "N300";
		camo = "sand";
	};
	class Single : Single {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
	};
	class FullAuto : FullAuto {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
	};
};
class rtg_hk416_blk_300 : arifle_SPAR_02_blk_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_300";
	Author = "Shrike";
	displayName = "HK-416 .300 BLK Black Carbine";
	magazineWell[] = { "CBA_300BLK_STANAG" };
	magazines[] = { "rtg_30rnd_300_blk" };
	bg_bipod = 1;
	class Single : Single {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
	};
	class FullAuto : FullAuto {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
	};
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "long";
		calibre = "N300";
		camo = "black";
	};
};
class rtg_hk416_blk_300_khk : arifle_SPAR_02_khk_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_300_khk";
	Author = "Shrike";
	displayName = "HK-416 .300 BLK Khaki Carbine";
	magazineWell[] = { "CBA_300BLK_STANAG" };
	magazines[] = { "rtg_30rnd_300_blk" };
	bg_bipod = 1;
	class Single : Single {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
	};
	class FullAuto : FullAuto {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
	};
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "long";
		calibre = "N300";
		camo = "khaki";
	};
};
class rtg_hk416_blk_300_snd : arifle_SPAR_02_snd_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_hk416_blk_300_snd";
	Author = "Shrike";
	displayName = "HK-416 .300 BLK Sand Carbine";
	magazineWell[] = { "CBA_300BLK_STANAG" };
	magazines[] = { "rtg_30rnd_300_blk" };
	bg_bipod = 1;
	class Single : Single {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
	};
	class FullAuto : FullAuto {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
	};
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk416";
		barrel = "long";
		calibre = "N300";
		camo = "sand";
	};
};

class hlc_rifle_aek971;
class rtg_aek971 : hlc_rifle_aek971 {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_aek971";
	Author = "Shrike";
	displayName = "AEK-971";
	modes[] = {"Single", "FullAuto"};
	class FullAuto : FullAuto {
		reloadTime = 0.058;
	};
	class Single : Single {
		reloadTime = 0.08;
	};
};

// Battle Rifles
class rtg_rifle_samr2_50bw : arifle_SPAR_01_blk_F {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_rifle_samr2_50bw";
	displayName = "LAR-50 DMR";
	magazineWell[] = { "rtg_50_bw_STANAG" };
	magazines[] = { "rtg_10rnd_10bw" };
	ACE_barrelTwist = 228.6;
	maxZeroing = 1600;
	ACE_barrelLength = 457.2;
	ace_railHeightAboveBore = 2.5;
	reloadAction = "NIA_GestureReload416";
	model = "hlc_wp_ar15\mesh\LAR15_samr\samr.p3d";
	picture = "\hlc_wp_ar15\tex\ui\gear_SAMR_ca";
	descriptionShort = ".50 BW DMR";
	discretedistance[] = { 100,200,300,400,500 };
	discretedistanceinitindex = 0;
	hiddenSelections[] = { "Upper", "Lower", "D-Ring", "Rails", "Panels", "VFG", "Harris", "Patch", "Stock" };
	hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\samr\upper_co.paa","hlc_wp_ar15\tex\samr\lower2_co.paa","hlc_wp_ar15\tex\samr\ras_co.paa","hlc_wp_ar15\tex\samr\risras_co.paa","hlc_wp_ar15\tex\samr\xtm2_co.paa","hlc_wp_ar15\tex\melon_cqbr\vgrip_co.paa","hlc_wp_ar15\tex\samr\hbipod_co.paa","","hlc_wp_ar15\tex\samr\stock_co.paa" };
	modes[] = {"Single"};
	recoil = "rhs_recoil_mk18";
	class Single : Single {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
	};
	class XtdGearInfo {
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
	magazineWell[] = { "CBA_762x51_M14" };
	magazines[] = { "rtg_20Rnd_762x51" };
	class XtdGearInfo {
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
	magazineWell[] = { "CBA_762x51_M14" };
	magazines[] = { "rtg_20Rnd_762x51" };
	class XtdGearInfo {
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
	magazineWell[] = { "CBA_762x51_M14" };
	magazines[] = { "rtg_20Rnd_762x51" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_hk417";
		camo = "sand";
	};
};

class rtg_G3KA4_RAS : arifle_SPAR_03_blk_f {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	model = "\hlc_wp_g3\mesh\g3_rails\g3ka4.p3d";
	picture = "\hlc_wp_g3\tex\ui\gear_g3ka4_x_ca";
	hiddenSelections[] = { "Main","Rail","Stock" };
	handAnim[] = { "OFP2_ManSkeleton","hlc_wp_g3\anim\handgesture_G3_STD_thin.rtm" };
	hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_2_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa","hlc_wp_g3\tex\arby_mp5n\mp5_co.paa" };
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 314.96;
	baseWeapon = "rtg_G3KA4_RAS";
	displayName = "G3KA4 RAS";
	magazineWell[] = { "CBA_762x51_M14" };
	magazines[] = { "rtg_20Rnd_762x51" };
	class FullAuto : FullAuto {
		class StandardSound : StandardSound { 
			soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
		};
	};
	class Single : Single {
		class StandardSound : StandardSound { 
			soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
		};
	};
	class XtdGearInfo {
		model = "rtg_ace_expanded_g3";
		grip = "ris";
	};
};

class rtg_G3A3_RIS : arifle_SPAR_03_blk_f {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_G3A3_RIS";
	displayName = "G3A3 RIS";
	magazineWell[] = { "CBA_762x51_M14" };
	magazines[] = { "rtg_20Rnd_762x51" };
	handAnim[] = { "OFP2_ManSkeleton","hlc_wp_g3\anim\handgesture_G3_STD_thin.rtm" };
	model = "\hlc_wp_g3\mesh\g3a3\g3a3_railed.p3d";
	hiddenSelections[] = { "Main","Reciever","Rec2","Grip","rail" };
	hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_co.paa","hlc_wp_g3\tex\sg1\g3sg2_co.paa","hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.paa","hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa" };
	class FullAuto : FullAuto {
		class StandardSound : StandardSound { 
			soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
		};
	};
	class Single : Single {
		class StandardSound : StandardSound { 
			soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
		};
	};
	class XtdGearInfo {
		model = "rtg_ace_expanded_g3";
		grip = "thin";
	};
};

class rtg_G3A3_wide_RIS : arifle_SPAR_03_blk_f {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_G3A3_wide_RIS";
	displayName = "G3A3 Wide RIS";
	magazineWell[] = { "CBA_762x51_M14" };
	magazines[] = { "rtg_20Rnd_762x51" };
	model = "\hlc_wp_g3\mesh\g3a3\g3a3_Modern_railed.p3d";
	handAnim[] = { "OFP2_ManSkeleton","hlc_wp_g3\anim\handgesture_G3_STD_wide.rtm" };
	hiddenSelections[] = { "Main","Reciever","Rec2","Grip","rail" };
	hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_co.paa","hlc_wp_g3\tex\sg1\g3sg2_co.paa","hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.paa","hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa" };
	class FullAuto : FullAuto {
		class StandardSound : StandardSound { 
			soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
		};
	};
	class Single : Single {
		class StandardSound : StandardSound { 
			soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
		};
	};
	class XtdGearInfo {
		model = "rtg_ace_expanded_g3";
		grip = "wide";
	};
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
	Author = "Shrike";
	baseWeapon = "rtg_dsa_fal_tac";
	displayName = "FAL RIS";
	magazineWell[] = { "CBA_762x51_M14" };
	magazines[] = { "rtg_20Rnd_762x51" };
	handAnim[] = { "OFP2_ManSkeleton","\hlc_wp_fal\gesture\newgesture\gesture_OSW_STD.rtm" };
	model = "\hlc_wp_FAL\mesh\sa58\osw.p3d";
	picture = "\hlc_wp_FAL\tex\ui\gear_osw_x_ca";
	hiddenSelections[] = { "Reciever","Barrel","Frontsight","Foregrip","Grip","Rearsight","Stock","Magazine","Rails","VFG" };
	hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.paa","hlc_wp_fal\tex\sa58\barrel-match_co.paa","hlc_wp_fal\tex\fsight_co.paa","hlc_wp_fal\tex\sa58\foregrip-dsa_co.paa","hlc_wp_fal\tex\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\sa58\foldingstock_co.paa","hlc_wp_fal\tex\mag-20_co.paa","hlc_wp_fal\tex\dsatoprails_co.paa","hlc_wp_fal\tex\sa58\verticalgrip_co.paa" };
	discretedistance[] = { 200,300,400,500,600,700 };
	discretedistanceinitindex = 0;
	cameradir = "look";
	discreteDistanceCameraPoint[] = { "eye2","eye3","eye4","eye5","eye6","eye7" };
};

class srifle_EBR_F;
class rtg_m14_dmr : srifle_EBR_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m14_dmr";
	Author = "Shrike";
	displayName = "M14 Mod 1 EBR";
	modes[] = { "Single", "FullAuto" };
};

// Machine Guns
class LMG_Zafir_F;
class rtg_negev : LMG_Zafir_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_negev";
	Author = "Shrike";
	displayName = "Negev RIS";
	magazineWell[] = { "CBA_556x45_MINIMI" };
	magazines[] = { "rtg_200rnd_556_45" };
	recoil = "recoil_mp5a2";
	modes[] = { "FullAuto"};
};

class LMG_Mk200_F;
class LMG_Mk200_black_F;
class rtg_mk200 : LMG_Mk200_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk200";
	Author = "Shrike";
	displayName = "Stoner 99 Tan .300 BLK";
	magazineWell[] = { "CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = { "rtg_200rnd_300_blk" };
	recoil = "rhs_recoil_mk18";
	modes[] = { "FullAuto" };
	class FullAuto : manual {
		sounds[] = { "StandardSound", "SilencedSound" };

		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";
		};

		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "mk48_Shot_SoundSet", "mk48_Tail_SoundSet" };
		};

		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "mk48_silencerShot_SoundSet", "mk48_silencerTail_SoundSet" };
		};
		reloadTime = 0.084;
		dispersion = 0.000261799;
	}; 
};

class rtg_mk200_blk : LMG_Mk200_black_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_mk200_blk";
	Author = "Shrike";
	displayName = "Stoner 99 Black .300 BLK";
	magazineWell[] = { "CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = { "rtg_200rnd_300_blk" };
	recoil = "rhs_recoil_mk18";
	ACE_barrelTwist = 305;
	ACE_barrelLength = 465;
	AB_barrelTwist = 12;
	AB_barrelLength = 18.3;
	modes[] = { "FullAuto" };
	class FullAuto : manual {
		sounds[] = { "StandardSound", "SilencedSound" };

		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";
		};

		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "mk48_Shot_SoundSet", "mk48_Tail_SoundSet" };
		};

		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "mk48_silencerShot_SoundSet", "mk48_silencerTail_SoundSet" };
		};
		reloadTime = 0.084;
		dispersion = 0.000261799;
	}; 
};

class rtg_249_pip_L : LMG_Mk200_black_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_L";
	Author = "Shrike";
	displayName = "M249 Long RIS";
	model = "\hlc_wp_saw\mesh\minimi_para\minimi_para_longer_railed.p3d";
	reloadaction = "HLC_GestureReloadM249";
	picture = "\hlc_wp_saw\tex\ui\gear_minimipara_x_ca";
	hiddenSelections[] = {"Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG"};
	hiddenSelectionsTextures[] = {"hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa","hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa","hlc_wp_saw\tex\toadie_m249\barrel_co.paa","hlc_wp_saw\tex\toadie_m249\misc_co.paa","hlc_wp_saw\tex\toadie_m249\fore_co.paa","hlc_wp_saw\tex\toadie_m249\stockmap_co.paa","hlc_wp_saw\tex\toadie_m249\rearsight_co.paa","hlc_wp_saw\tex\toadie_m249\pouch_auscam_co.paa",""};
	handanim[] = {"OFP2_ManSkeleton","\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
	magazineWell[] = { "CBA_556x45_MINIMI"};
	magazines[] = { "rtg_200rnd_556_45" };
	modelMagazine="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy"
	recoil = "recoil_mp5a2";
	ACE_barrelTwist = 228.6;
	maxZeroing = 1600;
	ACE_barrelLength = 457.2;
	ace_railHeightAboveBore = 2.5;
	modes[] = {"FullAuto"};
	class FullAuto : manual {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
		reloadTime = 0.084;
		dispersion = 0.000261799;
	}; 
	class XtdGearInfo {
		model = "rtg_ace_expanded_m249";
		barrel = "long";
		calibre = "N556";
		stock = "para";
	};
};

class rtg_249_pip_S : LMG_Mk200_black_F {
	scope = 2;
	dlc = "raiderTactical";
	model = "\hlc_wp_saw\mesh\minimi_para\minimi_railed.p3d";
	reloadaction = "HLC_GestureReloadM249";
	picture = "\hlc_wp_saw\tex\ui\gear_minimipara_x_ca";
	hiddenSelections[] = {"Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG"};
	hiddenSelectionsTextures[] = {"hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa","hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa","hlc_wp_saw\tex\toadie_m249\barrel_co.paa","hlc_wp_saw\tex\toadie_m249\misc_co.paa","hlc_wp_saw\tex\toadie_m249\fore_co.paa","hlc_wp_saw\tex\toadie_m249\stockmap_co.paa","hlc_wp_saw\tex\toadie_m249\rearsight_co.paa","hlc_wp_saw\tex\toadie_m249\pouch_auscam_co.paa",""};
	handanim[] = {"OFP2_ManSkeleton","\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
	baseWeapon = "rtg_249_pip_S";
	Author = "Shrike";
	displayName = "M249 Short RIS";
	magazineWell[] = { "CBA_556x45_MINIMI"};
	magazines[] = { "rtg_200rnd_556_45" };
	modelMagazine="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy"
	recoil = "recoil_mp5a2";
	AB_barrelTwist = 7;
	AB_barrelLength = 13.7;
	agm_bipod = 1;
	ACE_barrelTwist = 178;
	ACE_barrelLength = 349;
	modes[] = {"FullAuto"};
	class FullAuto : manual {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
		reloadTime = 0.084;
		dispersion = 0.000261799;
	}; 
	class XtdGearInfo {
		model = "rtg_ace_expanded_m249";
		barrel = "short";
		calibre = "N556";
		stock = "para";
	};
};

class rtg_249_pip_colap_S : LMG_Mk200_black_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_colap_S";
	Author = "Shrike";
	displayName = "M249 Short RIS PIP";
	model = "\hlc_wp_saw\mesh\m249\m249e2_pip3.p3d";
	reloadaction = "HLC_GestureReloadM249";
	picture = "\hlc_wp_saw\tex\ui\gear_m249e2parapip2_x_ca";
	hiddenSelections[] = {"Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG"};
	hiddenSelectionsTextures[] = {"hlc_wp_saw\tex\toadie_m249\reciever_249_co.paa","hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa","hlc_wp_saw\tex\toadie_m249\barrel_co.paa","hlc_wp_saw\tex\toadie_m249\misc_co.paa","hlc_wp_saw\tex\toadie_m249\fore_co.paa","hlc_wp_saw\tex\toadie_m249\stockmap_co.paa","hlc_wp_saw\tex\toadie_m249\rearsight_co.paa","hlc_wp_saw\tex\toadie_m249\amoobox_co.paa","hlc_wp_saw\tex\toadie_m249\vert_grip_co.paa"};
	handanim[] = {"OFP2_ManSkeleton","\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
	magazineWell[] = { "CBA_556x45_MINIMI"};
	magazines[] = { "rtg_200rnd_556_45" };
	modelMagazine="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy"
	recoil = "recoil_mp5a2";
	AB_barrelTwist = 7;
	AB_barrelLength = 13.7;
	agm_bipod = 1;
	ACE_barrelTwist = 178;
	ACE_barrelLength = 349;
	modes[] = {"FullAuto"};
	class FullAuto : manual {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
		reloadTime = 0.084;
		dispersion = 0.000261799;
	}; 
	class XtdGearInfo {
		model = "rtg_ace_expanded_m249";
		barrel = "short";
		calibre = "N556";
		stock = "pip";
	};
};

class rtg_249_pip_colap_L : LMG_Mk200_black_F {
	scope = 2;
	dlc = "raiderTactical";
	model = "\hlc_wp_saw\mesh\m249\m249e2_pip4.p3d";
	reloadaction = "HLC_GestureReloadM249";
	handanim[] = {"OFP2_ManSkeleton","\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
	picture = "\hlc_wp_saw\tex\ui\gear_m249e2pip2_x_ca";
	hiddenSelections[] = {"Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG"};
	hiddenSelectionsTextures[] = {"hlc_wp_saw\tex\toadie_m249\reciever_249_co.paa","hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa","hlc_wp_saw\tex\toadie_m249\barrel_co.paa","hlc_wp_saw\tex\toadie_m249\misc_co.paa","hlc_wp_saw\tex\toadie_m249\PIP_Foregrip_co.paa","hlc_wp_saw\tex\toadie_m249\stockmap_co.paa","hlc_wp_saw\tex\toadie_m249\rearsight_co.paa","hlc_wp_saw\tex\toadie_m249\amoobox_co.paa","hlc_wp_saw\tex\toadie_m249\vert_grip_co.paa"};
	baseWeapon = "rtg_249_pip_colap_L";
	Author = "Shrike";
	displayName = "M249 Long RIS PIP";
	magazineWell[] = { "CBA_556x45_MINIMI"};
	magazines[] = { "rtg_200rnd_556_45" };
	modelMagazine="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy"
	recoil = "recoil_mp5a2";
	ACE_barrelTwist = 228.6;
	maxZeroing = 1600;
	ACE_barrelLength = 457.2;
	ace_railHeightAboveBore = 2.5;
	modes[] = {"FullAuto"};
	class FullAuto : manual {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
		reloadTime = 0.084;
		dispersion = 0.000261799;
	}; 
	class XtdGearInfo {
		model = "rtg_ace_expanded_m249";
		barrel = "long";
		calibre = "N556";
		stock = "pip";
	};
};

class rtg_249_pip_S_300 : LMG_Mk200_black_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_S_300";
	Author = "Shrike";
	recoil = "recoil_mp5a2";
	displayName = "M249 300 Blk Short RIS";
	magazineWell[] = { "CBA_300_blk_MINIMI"};
	magazines[] = { "rtg_200rnd_300_blk" };
	modes[] = {"FullAuto"};
	picture = "\hlc_wp_saw\tex\ui\gear_mk48_ca";
	model = "\hlc_wp_saw\mesh\mk48\Mk48.p3d";
	reloadaction = "HLC_GestureReloadM249";
	handanim[] = {"OFP2_ManSkeleton","\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
	hiddenSelections[] = {"Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG","Rail","Bipod"};
	hiddenSelectionsTextures[] = {"hlc_wp_saw\tex\mk48\reciever_mk48_co.paa","hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa","hlc_wp_saw\tex\toadie_m249\barrel_co.paa","hlc_wp_saw\tex\toadie_m249\misc_co.paa","hlc_wp_saw\tex\toadie_m249\PIP_Foregrip_co.paa","hlc_wp_saw\tex\toadie_m249\stockmap_co.paa","hlc_wp_saw\tex\toadie_m249\rearsight_co.paa","hlc_wp_saw\tex\toadie_m249\pouch_auscam_co.paa","hlc_wp_saw\tex\toadie_m249\vert_grip_co.paa","hlc_wp_saw\tex\mk48\mk48_quadrail_co.paa",""};
	class FullAuto : manual {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "mk48_Shot_SoundSet", "mk48_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "mk48_silencerShot_SoundSet", "mk48_silencerTail_SoundSet" };
		};
		reloadTime = 0.084;
		dispersion = 0.000261799;
	}; 
	class XtdGearInfo {
		model = "rtg_ace_expanded_m249";
		barrel = "long";
		calibre = "N300";
		stock = "fixed";
	};
};

class rtg_249_pip_s_762 : LMG_Mk200_black_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_s_762";
	Author = "Shrike";
	displayName = "M249 7.62 Short RIS";
	magazineWell[] = { "CBA_762x51_LINKS"};
	magazines[] = { "rtg_200Rnd_762x51" };
	modes[] = {"FullAuto"};
	picture = "\hlc_wp_saw\tex\ui\gear_mk48_ca";
	model = "\hlc_wp_saw\mesh\mk48\Mk48.p3d";
	reloadaction = "HLC_GestureReloadM249";
	handanim[] = {"OFP2_ManSkeleton","\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
	hiddenSelections[] = {"Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG","Rail","Bipod"};
	hiddenSelectionsTextures[] = {"hlc_wp_saw\tex\mk48\reciever_mk48_co.paa","hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa","hlc_wp_saw\tex\toadie_m249\barrel_co.paa","hlc_wp_saw\tex\toadie_m249\misc_co.paa","hlc_wp_saw\tex\toadie_m249\PIP_Foregrip_co.paa","hlc_wp_saw\tex\toadie_m249\stockmap_co.paa","hlc_wp_saw\tex\toadie_m249\rearsight_co.paa","hlc_wp_saw\tex\toadie_m249\pouch_auscam_co.paa","hlc_wp_saw\tex\toadie_m249\vert_grip_co.paa","hlc_wp_saw\tex\mk48\mk48_quadrail_co.paa",""};
	class FullAuto : manual {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "mk48_Shot_SoundSet", "mk48_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "mk48_silencerShot_SoundSet", "mk48_silencerTail_SoundSet" };
		};
		reloadTime = 0.084;
		dispersion = 0.000261799;
	}; 
	class XtdGearInfo {
		model = "rtg_ace_expanded_m249";
		barrel = "long";
		calibre = "N762";
		stock = "fixed";
	};
};

class rtg_249_pip_ris : LMG_Mk200_black_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_249_pip_ris";
	Author = "Shrike";
	displayName = "M249 Solid RIS";
	magazineWell[] = { "CBA_556x45_MINIMI"};
	magazines[] = { "rtg_200rnd_556_45" };
	modelMagazine="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy"
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
	hiddenSelections[] = {"Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG"};
	hiddenSelectionsTextures[] = {"hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa","hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa","hlc_wp_saw\tex\toadie_m249\barrel_co.paa","hlc_wp_saw\tex\toadie_m249\misc_co.paa","hlc_wp_saw\tex\toadie_m249\fore_co.paa","hlc_wp_saw\tex\toadie_m249\stockmap_co.paa","hlc_wp_saw\tex\toadie_m249\rearsight_co.paa","hlc_wp_saw\tex\toadie_m249\pouch_auscam_co.paa",""};
	handanim[] = {"OFP2_ManSkeleton","\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
	modes[] = {"FullAuto"};
	class FullAuto : manual {
		sounds[] = { "StandardSound", "SilencedSound" };
		class BaseSoundModeType { 
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};
		class StandardSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
		};
		class SilencedSound : BaseSoundModeType { 
			soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
		};
		reloadTime = 0.084;
		dispersion = 0.000261799;
	}; 
	class XtdGearInfo {
		model = "rtg_ace_expanded_m249";
		barrel = "long";
		calibre = "N556";
		stock = "fixed";
	};
};

class rtg_m60e4 : LMG_Mk200_black_F {
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_m60e4";
	Author = "Shrike";
	displayName = "M60E4 RIS";
	magazineWell[] = { "CBA_762x51_LINKS"};
	magazines[] = { "rtg_200Rnd_762x51" };
	modes[] = { "FullAuto" };
	model = "\hlc_wp_M60E4\mesh\M60e4.p3d";
	hiddenSelections[] = {"Main","rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_m60e4\tex\m60e4_co.paa","hlc_wp_m60e4\tex\m249_para_co.paa"};
	reloadaction = "HLC_GestureReloadM60";
	picture = "\hlc_wp_M60E4\tex\ui\gear_m60e4_x_ca";
	handanim[] = {"OFP2_ManSkeleton","\hlc_wp_m60e4\gesture\m60e4.rtm"};
	AB_barrelTwist=12;
	AB_barrelLength=17;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 431.8;
	discretedistance[] = {300, 400, 500,600,700,800,900,1000,1100};
	cameradir = "aim_point";
	discreteDistanceCameraPoint[] = { "eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9", "eye10", "eye11" }; /// the angle of gun changes with zeroing
	distanceZoomMin = 100;
	distanceZoomMax = 1100;
	bg_bipod = 1; 
	cse_bipod = 1;
	tmr_autorest_deployable = 1; 
	TMR_acc_bipod = 1;
	class FullAuto: manual
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_M60E4\snd\m60_first",1,1,10};
			closure2[] = {"\hlc_wp_M60E4\snd\m60_first",1,1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"NIA_M60E4_NEW_Shot_SoundSet","M60E4_Tail_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[] = {"M60e4_silencerShot_SoundSet","M60e4_silencerTail_SoundSet"};
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

class rtg_brrrt : rtg_m60e4 {
	cope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_brrrt";
	Author = "Shrike";
	displayName = "Brrt M60";
	magazineWell[] = { "CBA_762x51_LINKS"};
	magazines[] = { "rtg_200Rnd_762x51" };
	modes[] = { "FullAuto" };
	model = "\hlc_wp_M60E4\mesh\M60e4.p3d";
	hiddenSelections[] = {"Main","rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_m60e4\tex\m60e4_co.paa","hlc_wp_m60e4\tex\m249_para_co.paa"};
	reloadaction = "HLC_GestureReloadM60";
	picture = "\hlc_wp_M60E4\tex\ui\gear_m60e4_x_ca";
	handanim[] = {"OFP2_ManSkeleton","\hlc_wp_m60e4\gesture\m60e4.rtm"};
	AB_barrelTwist=12;
	AB_barrelLength=17;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 431.8;
	discretedistance[] = {300, 400, 500,600,700,800,900,1000,1100};
	cameradir = "aim_point";
	discreteDistanceCameraPoint[] = { "eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9", "eye10", "eye11" }; /// the angle of gun changes with zeroing
	distanceZoomMin = 100;
	distanceZoomMax = 1100;
	bg_bipod = 1; 
	cse_bipod = 1;
	tmr_autorest_deployable = 1; 
	TMR_acc_bipod = 1;
	class FullAuto: manual
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_M60E4\snd\m60_first",1,1,10};
			closure2[] = {"\hlc_wp_M60E4\snd\m60_first",1,1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"NIA_M60E4_NEW_Shot_SoundSet","M60E4_Tail_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[] = {"M60e4_silencerShot_SoundSet","M60e4_silencerTail_SoundSet"};
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

class rtg_G8A1 : arifle_SPAR_03_blk_f {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	baseWeapon = "rtg_G8A1";
	reloadAction = "HLC_GestureReloadG3SG1";
	handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_STD_Wide.rtm" };
	displayName = "G8A1 RIS";
	magazineWell[] = { "CBA_762x51_M14" };
	magazines[] = { "rtg_20Rnd_762x51" };
	deployedpivot = "deploypivot";
	hasBipod = true;
	soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 };
	soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 };
	AB_barrelTwist = 12;
	AB_barrelLength = 17.7;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 449.58;
	agm_bipod = 1;
	cse_bipod = 1;
	bg_bipod = 1;
	model = "\hlc_wp_g3\mesh\g3sg1\g3sg1_railed.p3d";
	hiddenSelections[] = { "Main", "rail"};
	hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3sg1\g3sg1_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa" };
	class FullAuto : FullAuto {
		class StandardSound : StandardSound { 
			soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
		};
	};
	class Single : Single {
		class StandardSound : StandardSound { 
			soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
		};
	};
};

class MMG_02_black_f;
class MMG_02_sand_f;
class rtg_hmg_black : MMG_02_black_f {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "LWMMG Black";
	baseWeapon = "rtg_hmg_black";
	magazineWell[] = { "CBA_762x51_LINKS"};
	magazines[] = { "rtg_200Rnd_762x51" };
	modes[] = { "FullAuto" };
	recoil = "rhs_recoil_mk18";
	class FullAuto: manual
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_M60E4\snd\m60_first",1,1,10};
			closure2[] = {"\hlc_wp_M60E4\snd\m60_first",1,1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"NIA_M60E4_NEW_Shot_SoundSet","M60E4_Tail_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[] = {"M60e4_silencerShot_SoundSet","M60e4_silencerTail_SoundSet"};
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
class rtg_hmg_sand : MMG_02_sand_f {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "LWMMG Sand";
	baseWeapon = "rtg_hmg_sand";
	magazineWell[] = { "CBA_762x51_LINKS"};
	magazines[] = { "rtg_200Rnd_762x51" };
	modes[] = { "FullAuto" };
	recoil = "rhs_recoil_mk18";
	class FullAuto: manual
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"\hlc_wp_M60E4\snd\m60_first",1,1,10};
			closure2[] = {"\hlc_wp_M60E4\snd\m60_first",1,1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"NIA_M60E4_NEW_Shot_SoundSet","M60E4_Tail_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[] = {"M60e4_silencerShot_SoundSet","M60e4_silencerTail_SoundSet"};
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
class rhs_weap_m72a7;
class rtg_lauch_m72a7 : rhs_weap_m72a7 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "M72A7 LAW";
	baseWeapon = "rtg_lauch_m72a7";
};

class rhs_weap_M136_hedp;
class rtg_lauch_m136 : rhs_weap_M136_hedp {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "M136 LAW";
	baseWeapon = "rtg_lauch_m136";
};

class launch_MRAWS_olive_F;
class launch_MRAWS_sand_F;
class rtg_MRAWS_olive : launch_MRAWS_olive_F {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "MRAWS Olive";
	baseWeapon = "rtg_MRAWS_olive";
};
class rtg_MRAWS_sand : launch_MRAWS_sand_F {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "MRAWS Sand";
	baseWeapon = "rtg_MRAWS_sand";
};

// Handguns
class RH_deagle;
class RH_deagles;
class RH_deagleg;
class RH_tec9;
class rtg_deagle_black : RH_deagle {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "Desert Eagle Black";
	baseWeapon = "rtg_deagle_black";
	magazineWell[] = { "RTG_50_AE"};
	magazines[] = { "rtg_50_ae_8rnd_mag" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_eagle";
		camo = "black";
	};
};
class rtg_deagle_gold : RH_deagleg {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "Desert Eagle Gold";
	baseWeapon = "rtg_deagle_gold";
	magazineWell[] = { "RTG_50_AE"};
	magazines[] = { "rtg_50_ae_8rnd_mag" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_eagle";
		camo = "gold";
	};
};
class rtg_deagle_silver : RH_deagles {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "Desert Eagle Silver";
	baseWeapon = "rtg_deagle_silver";
	magazineWell[] = { "RTG_50_AE"};
	magazines[] = { "rtg_50_ae_8rnd_mag" };
	class XtdGearInfo {
		model = "rtg_ace_expanded_eagle";
		camo = "silver";
	};
};
class rtg_tec9 : RH_tec9 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shike";
	displayName = "Tec9 Black";
	baseWeapon = "rtg_tec9";
	magazineWell[] = { "RTG_9x19" };
	magazines[] = { "rtg_9mm_35Rnd_mag" };
	modes[] = {"Single"};
	class Single : Single {
		class StandardSound : StandardSound { 
			soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet"};
		};
	};
};

class rhs_weap_M320;/*
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
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_M79.rtm"};
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