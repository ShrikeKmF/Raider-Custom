// MCX Virtus
// 5.56
class Tier1_SIG_MCX_115_Virtus: Tier1_HK416D10_LMT
{
	scope = 0;
	RTG_STANDARD_ZOOM
	RTG_ACEAX_EMPTY
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	RTG_RECOIL(m4a4_556)
	RTG_WEAPON_HANDLING(1.88)
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
	RTG_RECOIL(m4a4_556)
	RTG_WEAPON_HANDLING(1.88)
	RTG_WEAPON_BASE
	class XtdGearInfo {model="rtg_ace_expanded_mcx";camo="CYT";frame="Virtus"};
};
class Tier1_SIG_MCX_115_Virtus_Black: Tier1_SIG_MCX_115_Virtus
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	RTG_RECOIL(m4a4_556)
	RTG_WEAPON_HANDLING(1.88)
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
	RTG_RECOIL(mcx_300)
	RTG_WEAPON_HANDLING(1.88)
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	RTG_WEAPON_BASE
	class XtdGearInfo {model="rtg_ace_expanded_mcx";camo="CYT";frame="Virtus300"};
};
class Tier1_SIG_MCX_115_Virtus_300BLK_Black: Tier1_SIG_MCX_115_Virtus_Black
{
	RTG_RECOIL(mcx_300)
	RTG_WEAPON_HANDLING(1.88)
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	RTG_WEAPON_BASE
	class XtdGearInfo {model="rtg_ace_expanded_mcx";camo="BLK";frame="Virtus300"};
};