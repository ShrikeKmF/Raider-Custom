// ACR Rifle
// .300 ACR
class hlc_acr_base;
class hlc_rifle_ACR68_SBR_tan : hlc_acr_base {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E .300 (Compact/Tan)";
	recoil = "rtg_300_pdw";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	opticsZoomInit= 0.75;
	opticsZoomMax=0.75;
	opticsZoomMin=0.75;
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "compact";
		calibre = "N300";
		camo = "sand";
	};
};
class hlc_rifle_ACR68_SBR_black : hlc_rifle_ACR68_SBR_tan {
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E .300 (Carbine/Black)";
	recoil = "rtg_300_carbine";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "carbine";
		calibre = "N300";
		camo = "black";
	};
};
class hlc_rifle_ACR68_Carb_tan : hlc_rifle_ACR68_Carb_black {
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E .300 (Rifle/Black)";
	recoil = "rtg_300_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "rifle";
		calibre = "N300";
		camo = "black";
	};
};
class hlc_rifle_ACR68_MID_tan : hlc_rifle_ACR68_MID_black {
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E .300 (Long/Black)";
	recoil = "rtg_300_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "long";
		calibre = "N300";
		camo = "black";
	};
};
class hlc_rifle_ACR68_full_tan : hlc_rifle_ACR68_full_black {
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E 5.56mm (Compact/Tan)";
	recoil = "rtg_556_pdw";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "compact";
		calibre = "N556";
		camo = "sand";
	};
};
class hlc_rifle_ACR_SBR_black : hlc_rifle_ACR_SBR_tan {
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E 5.56mm (Carbine/Black)";
	recoil = "rtg_556_carbine";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "carbine";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_rifle_ACR_Carb_tan : hlc_rifle_ACR_Carb_black {
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E 5.56mm (Rifle/Black)";
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "rifle";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_rifle_ACR_MID_tan : hlc_rifle_ACR_MID_black {
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E 5.56mm (Long/Black)";
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_acr";
		barrel = "long";
		calibre = "N556";
		camo = "black";
	};
};
class hlc_rifle_ACR_full_tan : hlc_rifle_ACR_full_black {
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
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
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL .300 (Compact/Black)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR68_GL_SBR_tan :  hlc_rifle_ACR68_GL_SBR_black{
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL .300 (Compact/Tan)";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR68_GL_SBR_green : hlc_rifle_ACR68_GL_SBR_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL .300 (Compact/Green)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR68_GL_Carb_black : hlc_rifle_ACR68_Carb_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL .300 (Carbine/Black)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR68_GL_Carb_tan : hlc_rifle_ACR68_GL_Carb_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL .300 (Carbine/Tan)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR68_GL_Carb_green : hlc_rifle_ACR68_GL_Carb_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL .300 (Carbine/Green)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR68_GL_MID_black : hlc_rifle_ACR68_mid_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL .300 (Rifle/Black)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR68_GL_MID_tan : hlc_rifle_ACR68_GL_MID_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL .300 (Rifle/Tan)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR68_GL_MID_green : hlc_rifle_ACR68_GL_MID_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL .300 (Rifle/Green)";
	RTG_ACEAX_EMPTY 
};

// 5.56 ACR GL
class hlc_rifle_ACR_GL_SBR_black : hlc_rifle_ACR_SBR_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL 5.56mm (Compact/Black)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR_GL_SBR_tan : hlc_rifle_ACR_GL_SBR_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL 5.56mm (Compact/Tan)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR_GL_SBR_green : hlc_rifle_ACR_GL_SBR_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL 5.56mm (Compact/Green)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR_GL_Carb_black : hlc_rifle_ACR_Carb_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL 5.56mm (Carbine/Black)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR_GL_Carb_tan : hlc_rifle_ACR_GL_Carb_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL 5.56mm (Carbine/Tan)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR_GL_Carb_green : hlc_rifle_ACR_GL_Carb_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL 5.56mm (Carbine/Green)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR_GL_MID_black : hlc_rifle_ACR_MID_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL 5.56mm (Rifle/Black)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR_GL_MID_tan : hlc_rifle_ACR_GL_MID_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL 5.56mm (Rifle/Tan)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR_GL_MID_green : hlc_rifle_ACR_GL_MID_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL 5.56mm (Rifle/Green)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR_GL_full_black : hlc_rifle_ACR_full_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL 5.56mm (Long/Black)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR_GL_full_tan : hlc_rifle_ACR_GL_full_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL 5.56mm (Long/Tan)";
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR_GL_full_green : hlc_rifle_ACR_GL_full_black {
	RTG_WEAPON_BASE
	displayName = "Remington ACR-E GL 5.56mm (Long/Green)";
	RTG_ACEAX_EMPTY 
};
// Other ACR
class hlc_rifle_ACR68_Squant : hlc_rifle_ACR68_SBR_tan {
    RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR_SBR_cliffhanger : hlc_rifle_ACR_SBR_tan {
    RTG_ACEAX_EMPTY 
};
class hlc_rifle_ACR_GL_SBR_cliffhanger : hlc_rifle_ACR_GL_SBR_black {
    RTG_ACEAX_EMPTY 
};