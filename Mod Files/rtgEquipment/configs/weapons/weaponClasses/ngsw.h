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
	recoil = "rtg_68_rifle";
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
	recoil = "rtg_68_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_xm5";
		grip = "ON";
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

// M110A3
class rtg_m110a3_blk : rtg_hk417_blk
{
	RTG_STANDARD_ZOOM
	RTG_WEAPON_BASE
	displayName="H&K M110A3 (Blk)";
	baseWeapon = "rtg_m110a3_blk";
	magazineWell[] = {"RTG_68x51_MAGWELL"};
	magazines[] = {"rtg_20Rnd_68x51"};
	recoil = "rtg_68_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m110a3";
		camo = "black";
	};
};
class rtg_m110a3_khk : rtg_hk417_khk
{
	RTG_STANDARD_ZOOM
	RTG_WEAPON_BASE
	displayName="H&K M110A3 (KHK)";
	baseWeapon = "rtg_m110a3_khk";
	magazineWell[] = {"RTG_68x51_MAGWELL"};
	magazines[] = {"rtg_20Rnd_68x51"};
	recoil = "rtg_68_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m110a3";
		camo = "khaki";
	};
};
class rtg_m110a3_snd : rtg_hk417_snd
{
	RTG_STANDARD_ZOOM
	RTG_WEAPON_BASE
	displayName="H&K M110A3 (SND)";
	baseWeapon = "rtg_m110a3_snd";
	magazineWell[] = {"RTG_68x51_MAGWELL"};
	magazines[] = {"rtg_20Rnd_68x51"};
	recoil = "rtg_68_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m110a3";
		camo = "sand";
	};
};