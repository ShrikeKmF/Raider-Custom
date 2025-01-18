

// XM250
class KAR_XM250;
class KAR_XM250_BLK;
class rtg_XM250 : KAR_XM250 
{
	RTG_STANDARD_ZOOM
	RTG_WEAPON_BASE
	displayName="XM250 (Tan)";
	baseWeapon = "rtg_XM250";
	magazineWell[] = {"RTG_68x51_BELT_MAGWELL"};
	magazines[] = {"rtg_100Rnd_68x51"};
	recoil = "rtg_68_mmg";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_xm250";
		paint = "tan";
	};
};

class rtg_XM250_BLK : KAR_XM250_BLK 
{
	RTG_STANDARD_ZOOM
	RTG_WEAPON_BASE
	displayName="XM250 (Blk)";
	baseWeapon = "rtg_XM250_BLK";
	magazineWell[] = {"RTG_68x51_BELT_MAGWELL"};
	magazines[] = {"rtg_100Rnd_68x51"};
	recoil = "rtg_68_mmg";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_xm250";
		paint = "blk";
	};
};