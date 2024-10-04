// XM5
class isky_spear_tan;
class isky_spear_tan_bcm;
class rtg_xm5_tan : isky_spear_tan
{
	RTG_STANDARD_ZOOM
	RTG_WEAPON_BASE
	displayName="XM5 (Tan)";
	baseWeapon = "rtg_xm5_tan";
	magazineWell[] = {"RTG_68x51_MAGWELL"};
	magazines[] = {"rtg_20Rnd_68x51"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_xm5";
		grip = "none";
	};
};

class rtg_xm5_tan_grip : isky_spear_tan_bcm
{
	RTG_STANDARD_ZOOM
	RTG_WEAPON_BASE
	displayName="XM5 (Tan/Grip)";
	baseWeapon = "rtg_xm5_tan_grip";
	magazineWell[] = {"RTG_68x51_MAGWELL"};
	magazines[] = {"rtg_20Rnd_68x51"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_xm5";
		grip = "short";
	};
};

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
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_xm250";
		paint = "blk";
	};
};