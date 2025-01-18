// MCX Virtus
// 5.56
class Tier1_SIG_MCX_115_Virtus: Tier1_HK416D10_LMT
{
	scope = 0;
	RTG_STANDARD_ZOOM
	RTG_ACEAX_EMPTY
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_carbine";
};
class Tier1_SIG_MCX_115_Virtus_Desert: Tier1_SIG_MCX_115_Virtus
{
	scope = 0;
	RTG_ACEAX_EMPTY
};
class Tier1_SIG_MCX_115_Virtus_FDE: Tier1_SIG_MCX_115_Virtus
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo {model="rtg_ace_expanded_mcx";camo="CYT";frame="Virtus"};
};
class Tier1_SIG_MCX_115_Virtus_Black: Tier1_SIG_MCX_115_Virtus
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo {model="rtg_ace_expanded_mcx";camo="BLK";frame="Virtus"};
};

// .300
class Tier1_SIG_MCX_115_Virtus_300BLK: Tier1_SIG_MCX_115_Virtus
{
	scope = 0;
	RTG_ACEAX_EMPTY
};
class Tier1_SIG_MCX_115_Virtus_300BLK_Desert: Tier1_SIG_MCX_115_Virtus_Desert
{
	scope = 0;
	RTG_ACEAX_EMPTY
};
class Tier1_SIG_MCX_115_Virtus_300BLK_FDE: Tier1_SIG_MCX_115_Virtus_FDE
{
	recoil = "rtg_300_carbine";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	RTG_WEAPON_BASE
	class XtdGearInfo {model="rtg_ace_expanded_mcx";camo="CYT";frame="Virtus300"};
};
class Tier1_SIG_MCX_115_Virtus_300BLK_Black: Tier1_SIG_MCX_115_Virtus_Black
{
	recoil = "rtg_300_carbine";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	RTG_WEAPON_BASE
	class XtdGearInfo {model="rtg_ace_expanded_mcx";camo="BLK";frame="Virtus300"};
};


// 6.5
class isky_spear_tan;
class rtg_xm5_tan : isky_spear_tan
{
	RTG_STANDARD_ZOOM
	RTG_WEAPON_BASE
	displayName="MCX Spear (6.8 Fury) (FDE)";
	baseWeapon = "rtg_xm5_tan";
	magazineWell[] = {"RTG_68x51_MAGWELL"};
	magazines[] = {"rtg_20Rnd_68x51"};
	recoil = "rtg_68_rifle";
	class XtdGearInfo {model="rtg_ace_expanded_mcx";camo="CYT";frame="Spear"};
};