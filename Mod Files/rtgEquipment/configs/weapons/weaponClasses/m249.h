// Para
// Long 5.56
class ptv_m249: Rifle_Long_Base_F
{
	RTG_RECOIL_SETUP(m249_L_556)
	dispersion = MOA_TO_DISPERSION(9.0);
	RTG_WEAPON_HANDLING(3.2)
	magazineWell[] = {"CBA_556x45_MINIMI", "CBA_556x45_STANAG"};
	magazines[] = {"rtg_200rnd_556_45"};
	DisplayName = "FN Minimi (Long/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "grn";
		barrel = "long";
		calibre = "N556";
		stock = "para";
	};
}
class ptv_m249_b: ptv_m249
{
	DisplayName = "FN Minimi (Long/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "blk";
		barrel = "long";
		calibre = "N556";
		stock = "para";
	};
}
class ptv_m249_t: ptv_m249
{
	DisplayName = "FN Minimi (Long/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "tan";
		barrel = "long";
		calibre = "N556";
		stock = "para";
	};
}
// Short 5.56
class ptv_m249p: ptv_m249
{
	RTG_RECOIL_SETUP(m249_S_556)
	RTG_WEAPON_HANDLING(3.0)
	dispersion = MOA_TO_DISPERSION(10.0);
	DisplayName = "FN Minimi (Short/Green)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "grn";
		barrel = "short";
		calibre = "N556";
		stock = "para";
	};
}
class ptv_m249p_b: ptv_m249p
{
	DisplayName = "FN Minimi (Short/Black)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "blk";
		barrel = "short";
		calibre = "N556";
		stock = "para";
	};
}
class ptv_m249p_t: ptv_m249p
{
	DisplayName = "FN Minimi (Short/Tan)";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "tan";
		barrel = "short";
		calibre = "N556";
		stock = "para";
	};
}

// RIS
class rtg_m249_ris: ptv_m249
{
	RTG_RECOIL_SETUP(m249_L_556)
	dispersion = MOA_TO_DISPERSION(9.0);
	RTG_WEAPON_HANDLING(3.2)
	magazineWell[] = {"CBA_556x45_MINIMI", "CBA_556x45_STANAG"};
	magazines[] = {"rtg_200rnd_556_45"};
	DisplayName = "FN Minimi (Long/Green/RIS)";
	baseWeapon = "rtg_m249_ris";
	model = "rtgEquipment\lods\Minimi\Minimi_F.p3d"
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "grn";
		barrel = "long";
		calibre = "N556";
		stock = "ris";
	};
}
class rtg_m249_b_ris: ptv_m249_b
{
	DisplayName = "FN Minimi (Long/Black/RIS)";
	baseWeapon = "rtg_m249_b_ris";
	model = "rtgEquipment\lods\Minimi\Minimi_F.p3d"
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "blk";
		barrel = "long";
		calibre = "N556";
		stock = "ris";
	};
}
class rtg_m249_t_ris: ptv_m249_t
{
	DisplayName = "FN Minimi (Long/Tan/RIS)";
	baseWeapon = "rtg_m249_t_ris";
	model = "rtgEquipment\lods\Minimi\Minimi_F.p3d"
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "tan";
		barrel = "long";
		calibre = "N556";
		stock = "ris";
	};
}
// Short 5.56
class rtg_m249p_ris: ptv_m249p
{
	RTG_RECOIL_SETUP(m249_S_556)
	RTG_WEAPON_HANDLING(3.0)
	dispersion = MOA_TO_DISPERSION(10.0);
	DisplayName = "FN Minimi (Short/Green/RIS)";
	baseWeapon = "rtg_m249p_ris";
	model = "rtgEquipment\lods\MinimiPara\MinimiPara_F.p3d"
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "grn";
		barrel = "short";
		calibre = "N556";
		stock = "ris";
	};
}
class rtg_m249p_b_ris: ptv_m249p_b
{
	DisplayName = "FN Minimi (Short/Black/RIS)";
	baseWeapon = "rtg_m249p_b_ris";
	model = "rtgEquipment\lods\MinimiPara\MinimiPara_F.p3d"
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "blk";
		barrel = "short";
		calibre = "N556";
		stock = "ris";
	};
}
class rtg_m249p_t_ris: ptv_m249p_t
{
	DisplayName = "FN Minimi (Short/Tan/RIS)";
	baseWeapon = "rtg_m249p_t_ris";
	model = "rtgEquipment\lods\MinimiPara\MinimiPara_F.p3d"
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "tan";
		barrel = "short";
		calibre = "N556";
		stock = "ris";
	};
}

// 300 BLK
// Para
// Long
class ptv_m249_300 : ptv_m249
{
	RTG_RECOIL_SETUP(m249_l_300)
	RTG_WEAPON_HANDLING(3.2)
	dispersion = MOA_TO_DISPERSION(9.0);
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk_t"};
	DisplayName = "FN Minimi (Long/Green)";
	baseWeapon = "ptv_m249_300";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "grn";
		barrel = "long";
		calibre = "N300";
		stock = "para";
	};
}
class ptv_m249_b_300 : ptv_m249_b
{
	DisplayName = "FN Minimi (Long/Black)";
	RTG_RECOIL_SETUP(m249_l_300)
	RTG_WEAPON_HANDLING(3.2)
	dispersion = MOA_TO_DISPERSION(9.0);
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk_t"};
	baseWeapon = "ptv_m249_b_300";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "blk";
		barrel = "long";
		calibre = "N300";
		stock = "para";
	};
}
class ptv_m249_t_300: ptv_m249_t
{
	RTG_RECOIL_SETUP(m249_l_300)
	RTG_WEAPON_HANDLING(3.2)
	dispersion = MOA_TO_DISPERSION(9.0);
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk_t"};
	DisplayName = "FN Minimi (Long/Tan)";
	baseWeapon = "ptv_m249_t_300";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "tan";
		barrel = "long";
		calibre = "N300";
		stock = "para";
	};
}
// Short
class ptv_m249p_300: ptv_m249p
{
	RTG_RECOIL_SETUP(m249_S_300)
	RTG_WEAPON_HANDLING(3.0)
	dispersion = MOA_TO_DISPERSION(10.0);
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk_t"};
	DisplayName = "FN Minimi (Short/Green)";
	baseWeapon = "ptv_m249p_300";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "grn";
		barrel = "short";
		calibre = "N300";
		stock = "para";
	};
}
class ptv_m249p_b_300: ptv_m249p_b
{
	RTG_RECOIL_SETUP(m249_s_300)
	RTG_WEAPON_HANDLING(3.0)
	dispersion = MOA_TO_DISPERSION(10.0);
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk_t"};
	DisplayName = "FN Minimi (Short/Black)";
	baseWeapon = "ptv_m249p_b_300";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "blk";
		barrel = "short";
		calibre = "N300";
		stock = "para";
	};
}
class ptv_m249p_t_300: ptv_m249p_t
{
	RTG_RECOIL_SETUP(m249_s_300)
	RTG_WEAPON_HANDLING(3.0)
	dispersion = MOA_TO_DISPERSION(10.0);
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk_t"};
	DisplayName = "FN Minimi (Short/Tan)";
	baseWeapon = "ptv_m249p_t_300";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "tan";
		barrel = "short";
		calibre = "N300";
		stock = "para";
	};
}

// RIS
class rtg_m249_ris_300: rtg_m249_ris
{
	RTG_RECOIL_SETUP(m249_l_300)
	RTG_WEAPON_HANDLING(3.2)
	dispersion = MOA_TO_DISPERSION(9.0);
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk_t"};
	DisplayName = "FN Minimi (Long/Green/RIS)";
	baseWeapon = "rtg_m249_ris_300";
	model = "rtgEquipment\lods\Minimi\Minimi_F.p3d"
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "grn";
		barrel = "long";
		calibre = "N300";
		stock = "ris";
	};
}
class rtg_m249_b_ris_300: rtg_m249_b_ris
{
	RTG_RECOIL_SETUP(m249_l_300)
	RTG_WEAPON_HANDLING(3.2)
	dispersion = MOA_TO_DISPERSION(9.0);
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk_t"};
	DisplayName = "FN Minimi (Long/Black/RIS)";
	baseWeapon = "rtg_m249_b_ris_300";
	model = "rtgEquipment\lods\Minimi\Minimi_F.p3d"
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "blk";
		barrel = "long";
		calibre = "N300";
		stock = "ris";
	};
}
class rtg_m249_t_ris_300: rtg_m249_t_ris
{
	RTG_RECOIL_SETUP(m249_l_300)
	RTG_WEAPON_HANDLING(3.2)
	dispersion = MOA_TO_DISPERSION(9.0);
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk_t"};
	DisplayName = "FN Minimi (Long/Tan/RIS)";
	baseWeapon = "rtg_m249_t_ris";
	model = "rtgEquipment\lods\Minimi\Minimi_F.p3d"
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "tan";
		barrel = "long";
		calibre = "N300";
		stock = "ris";
	};
}
// Short
class rtg_m249p_ris_300: rtg_m249p_ris
{
	RTG_RECOIL_SETUP(m249_s_300)
	RTG_WEAPON_HANDLING(3.0)
	dispersion = MOA_TO_DISPERSION(10.0);
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk_t"};
	DisplayName = "FN Minimi (Short/Green/RIS)";
	baseWeapon = "rtg_m249p_ris_300";
	model = "rtgEquipment\lods\MinimiPara\MinimiPara_F.p3d"
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "grn";
		barrel = "short";
		calibre = "N300";
		stock = "ris";
	};
}
class rtg_m249p_b_ris_300: rtg_m249p_b_ris
{
	RTG_RECOIL_SETUP(m249_s_300)
	RTG_WEAPON_HANDLING(3.0)
	dispersion = MOA_TO_DISPERSION(10.0);
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk_t"};
	DisplayName = "FN Minimi (Short/Black/RIS)";
	baseWeapon = "rtg_m249p_b_ris_300";
	model = "rtgEquipment\lods\MinimiPara\MinimiPara_F.p3d"
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "blk";
		barrel = "short";
		calibre = "N300";
		stock = "ris";
	};
}
class rtg_m249p_t_ris_300: rtg_m249p_t_ris
{
	RTG_RECOIL_SETUP(m249_s_300)
	RTG_WEAPON_HANDLING(3.0)
	dispersion = MOA_TO_DISPERSION(10.0);
	magazineWell[] = {"CBA_300_blk_MINIMI", "CBA_300BLK_STANAG"};
	magazines[] = {"rtg_200rnd_300_blk_t"};
	DisplayName = "FN Minimi (Short/Tan/RIS)";
	baseWeapon = "rtg_m249p_t_ris_300";
	model = "rtgEquipment\lods\MinimiPara\MinimiPara_F.p3d"
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "tan";
		barrel = "short";
		calibre = "N300";
		stock = "ris";
	};
}

// 7.62
class Tier1_SAW_Base;
class Tier1_MK48_Mod0: Tier1_SAW_Base
{
	RTG_STANDARD_ZOOM
	RTG_ACEAX_EMPTY
	RTG_RECOIL_SETUP(m249_762)
	RTG_WEAPON_HANDLING(3.5)
	dispersion = MOA_TO_DISPERSION(8.0);
	magazineWell[] = {"CBA_762x51_LINKS"};
	magazines[] = {"rtg_200Rnd_762x51"};
};
class Tier1_MK48_Mod0_Para: Tier1_MK48_Mod0
{
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "blk";
		barrel = "long";
		calibre = "N762";
		stock = "para";
	};
};
class Tier1_MK48_Mod0_Para_Desert: Tier1_MK48_Mod0
{
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "tan";
		barrel = "long";
		calibre = "N762";
		stock = "para";
	};
};
class Tier1_MK48_Mod1: Tier1_MK48_Mod0
{
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "blk";
		barrel = "long";
		calibre = "N762";
		stock = "ris";
	};
};
class Tier1_MK48_Mod1_Desert: Tier1_MK48_Mod0
{
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_minimi";
		camo = "tan";
		barrel = "long";
		calibre = "N762";
		stock = "ris";
	};
};