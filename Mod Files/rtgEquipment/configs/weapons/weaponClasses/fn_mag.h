// Machine Guns
class rhs_weap_m240G;
class rtg_mag60_20 : rhs_weap_m240G
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_mag60_20";
	
	displayName = "FN M240B";
	magazineWell[] = {"CBA_762x51_LINKS"};
	magazines[] = {"rtg_200Rnd_762x51"};
	RTG_RECOIL(fn_mag_762)
	RTG_WEAPON_HANDLING(3.6)
	modes[] = {"FullAuto"};
	AB_barrelTwist = 12;
	AB_barrelLength = 17;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 630.8;
	RTG_STANDARD_ZOOM
	mass = 260.1;
	bg_bipod = 1;
	cse_bipod = 1;
	tmr_autorest_deployable = 1;
	TMR_acc_bipod = 1;
	class FullAuto : manual
	{
		reloadTime = 0.070588;
		dispersion = 0.000421799;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 10;
		midRangeProbab = 0.7;
		maxRange = 20;
		maxRangeProbab = 0.1;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mag60";
		furniture = "metal";
		calibre = "N762";
	};
};
class rhs_weap_fnmag;
class rtg_mag60_20_t3 : rhs_weap_fnmag
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_mag60_20_t3";
	
	displayName = "FN MAG 60-20";
	magazineWell[] = {"CBA_762x51_LINKS"};
	magazines[] = {"rtg_200Rnd_762x51"};
	RTG_RECOIL(fn_mag_762)
	RTG_WEAPON_HANDLING(3.6)
	modes[] = {"FullAuto"};
	AB_barrelTwist = 12;
	AB_barrelLength = 17;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 630.8;
	RTG_STANDARD_ZOOM
	mass = 285.1;
	bg_bipod = 1;
	cse_bipod = 1;
	tmr_autorest_deployable = 1;
	TMR_acc_bipod = 1;
	class FullAuto : manual
	{
		reloadTime = 0.070588;
		dispersion = 0.000421799;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 10;
		midRangeProbab = 0.7;
		maxRange = 20;
		maxRangeProbab = 0.1;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mag60";
		furniture = "wood";
		calibre = "N762";
	};
};

class rtg_mag10_10 : rtg_mag60_20
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_mag10_10";
	
	displayName = "FN MAG 10-10";
	RTG_RECOIL(fn_mag_762_short)
	RTG_WEAPON_HANDLING(2.9)
	model = "rtgEquipment\lods\MAG\MAG_F";
	modes[] = {"FullAuto"};
	AB_barrelTwist = 12;
	AB_barrelLength = 15;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 481.2;
	RTG_STANDARD_ZOOM
	mass = 172.3;
	bg_bipod = 0;
	cse_bipod = 0;
	tmr_autorest_deployable = 1;
	TMR_acc_bipod = 0;
	class FullAuto : manual
	{
		reloadTime = 0.1;
		dispersion = 0.000421799;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 10;
		midRangeProbab = 0.7;
		maxRange = 20;
		maxRangeProbab = 0.1;
	};
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\ptv_weapons\machineguns\negev\Anim\ptv_negev.rtm"
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 172.3;
		class PointerSlot: asdg_FrontSideRail{};
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mag60";
		furniture = "short";
		calibre = "N762";
	};
}

// 277 Fury M240
class rtg_mag10_10_277 : rtg_mag10_10
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_mag10_10_277";
	displayName = "FN MAG 10-10 (.277)";
	RTG_RECOIL(fn_mag_277_short)
	RTG_WEAPON_HANDLING(2.9)
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mag60";
		furniture = "short";
		calibre = "N277";
	};
	magazineWell[] = {"RTG_68x51_BELT_MAGWELL"};
	magazines[] = {"rtg_100Rnd_68x51"};
	modes[] = {"FullAuto"};
	class FullAuto : FullAuto
	{
		reloadTime = 0.065;
	};
}

class rtg_m240B_277 : rtg_mag60_20
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_mag60_20_277";
	displayName = "FN M240B (.277)";
	RTG_RECOIL(fn_mag_277)
	RTG_WEAPON_HANDLING(3.6)
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mag60";
		furniture = "metal";
		calibre = "N277";
	}; 
	magazineWell[] = {"RTG_68x51_BELT_MAGWELL"};
	magazines[] = {"rtg_100Rnd_68x51"};
	class FullAuto : FullAuto
	{
		reloadTime = 0.065;
	};
}

class rtg_mag60_20_t3_277 : rtg_mag60_20_t3
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_mag60_20_t3_277";
	displayName = "FN MAG 60-20 (.277)";
	RTG_RECOIL(fn_mag_277)
	RTG_WEAPON_HANDLING(3.6)
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mag60";
		furniture = "wood";
		calibre = "N277";
	}; 
	magazineWell[] = {"RTG_68x51_BELT_MAGWELL"};
	magazines[] = {"rtg_100Rnd_68x51"};
	class FullAuto : FullAuto
	{
		reloadTime = 0.065;
	};
}