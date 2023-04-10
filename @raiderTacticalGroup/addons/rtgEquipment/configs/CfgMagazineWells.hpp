class CfgAmmo
{
    class B_556x45_Ball;
    class rtg_556x45 : B_556x45_Ball {
        hit = 9;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 0.684;
        AB_muzzleVelocities[] = { 820, 910, 1050 };
        AB_barrelLengths[] = { 280.0, 393.7, 508.0 };
        ACE_caliber = 5.69;
        ACE_bulletLength = 24.012;
        ACE_bulletMass = 5.2176;
        ACE_muzzleVelocities[] = { 820, 910, 1050 };
        ACE_barrelLengths[] = { 280.0, 393.7, 508.0 };
    };

    class ACE_762x51_Ball_M118LR;
    class rtg_762_nato : ACE_762x51_Ball_M118LR {
        hit = 14;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        ACE_bulletMass = 11.2176;
        AB_ballisticCoefficients[] = { 0.492 };
        ACE_muzzleVelocities[] = { 910, 1000, 1200 };
        ACE_barrelLengths[] = { 254.0, 393.7, 508.0 };
    };

    class FH_545x39_Ball;
    class rtg_545 : FH_545x39_Ball {
        hit = 7;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 0.684;
        AB_muzzleVelocities[] = { 820, 910, 1050 };
        AB_barrelLengths[] = { 280.0, 393.7, 508.0 };
        ACE_bulletLength = 24.012;
        ACE_bulletMass = 3.8176;
        ACE_muzzleVelocities[] = { 900, 980, 1000 };
        ACE_barrelLengths[] = { 280.0, 393.7, 508.0 };
    }

    class HLC_762x39_Tracer;
    class rtg_762 : HLC_762x39_Tracer {
        hit = 10;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 0.684;
        AB_muzzleVelocities[] = { 820, 910, 1050 };
        AB_barrelLengths[] = { 280.0, 393.7, 508.0 };
        ACE_bulletLength = 24.012;
        ACE_bulletMass = 4.5176;
        ACE_muzzleVelocities[] = { 820, 920, 990 };
        ACE_barrelLengths[] = { 280.0, 393.7, 508.0 };
    }

    class S_9x19_Ball;
    class rtg_9mm : S_9x19_Ball {
        hit = 6;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        ACE_bulletMass = 8.2176;
        AB_ballisticCoefficients[] = { 0.122 };
        ACE_muzzleVelocities[] = { 300, 400, 452 };
        ACE_barrelLengths[] = { 254.0, 393.7, 508.0 };
    };

    class HLC_300Blackout_Ball;
    class rtg_300blk : HLC_300Blackout_Ball{
    hit = 11;
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    ACE_bulletMass = 6.4176;
    AB_ballisticCoefficients[] = { 0.122 };
    ACE_muzzleVelocities[] = { 300, 400, 452 };
    ACE_barrelLengths[] = { 254.0, 393.7, 508.0 };
    };
};

class CfgMagazines
{
    class rhsusf_40mm_HEDP;
    class hlc_30rnd_556x45_SOST_PMAG;
    class rtg_10Rnd_25_HEDP : hlc_30rnd_556x45_SOST_PMAG {
        ammo = "rhsusf_40mm_HEDP";
        modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_65x39c_msbs_30rnd.p3d";
        picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_CA.paa";
        displayName = "10rnd 25mm HEDP Grenades";
        author = "Shrike";
        descriptionshort = "Raider Tactical Standard Issue 25mm HEDP ammo";
        displaynameshort = "10Rnd 25mm";
        count = 10;
        mass = 150;
        scope = 2;
    };

    class ACE_20Rnd_762x51_M118LR_Mag;
    class rtg_20Rnd_762x51 : ACE_20Rnd_762x51_M118LR_Mag {
        author = "Shrike";
        ammo = "rtg_762_nato";
        count = 20;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "20rnd RTG 7.62mm MAG";
        displaynameshort = "20Rnd 7.62x51";
        scope = 2;
    };

    class hlc_200Rnd_762x51_T_M60E4;
    class rtg_200Rnd_762x51 : hlc_200Rnd_762x51_T_M60E4 {
        author = "Shrike";
        ammo = "rtg_762_nato";
        count = 200;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "200rnd RTG 7.62mm MAG";
        displaynameshort = "200Rnd 7.62x51";
        scope = 2;
        mass = 98;
    };

    class hlc_30Rnd_545x39_EP_ak_Black;
    class rtg_30rnd_545_49 : hlc_30Rnd_545x39_EP_ak_Black {
        author = "Shrike";
        ammo = "rtg_545";
        count = 30;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.45mm Ammo";
        displayname = "30rnd RTG 5.45mm PMAG";
        displaynameshort = "30Rnd 5.45x39";
        scope = 2;
    };

    class rhs_60Rnd_545X39_7N22_AK;
    class rtg_60rnd_545_49 : rhs_60Rnd_545X39_7N22_AK {
        author = "Shrike";
        ammo = "rtg_545";
        count = 60;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.45mm Ammo";
        displayname = "60rnd RTG 5.45mm PMAG";
        displaynameshort = "60Rnd 5.45x39";
        scope = 2;
    };

    class 30Rnd_762x39_AK12_Mag_F;
    class rtg_30rnd_762_39 : 30Rnd_762x39_AK12_Mag_F {
        author = "Shrike";
        ammo = "rtg_762";
        count = 30;
        initspeed = 954.4;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "30rnd RTG 7.62mm MAG";
        displaynameshort = "30Rnd 7.62x39";
        scope = 2;
    };

    class hlc_45Rnd_762x39_t_rpk;
    class rtg_45rnd_762_39 : hlc_45Rnd_762x39_t_rpk {
        author = "Shrike";
        ammo = "rtg_762";
        count = 45;
        initspeed = 954.4;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "45rnd RTG 7.62mm MAG";
        displaynameshort = "45Rnd 7.62x39";
        scope = 2;
    };

    class hlc_30Rnd_300BLK_PMAG;
    class rtg_30rnd_300_blk : hlc_30Rnd_300BLK_PMAG {
        author = "Shrike";
        ammo = "rtg_300blk";
        count = 30;
        initspeed = 954.4;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue .300 BLK Ammo";
        displayname = "30rnd RTG .300 Blk PMAG";
        displaynameshort = "30Rnd .300 BLK";
        scope = 2;
    };

    class rtg_30rnd_556_45 : hlc_30rnd_556x45_SOST_PMAG {
        author = "Shrike";
        ammo = "rtg_556x45";
        count = 30;
        initspeed = 954.4;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "30rnd RTG 5.56mm PMAG";
        displaynameshort = "30Rnd 5.56x45";
        scope = 2;
    };

    class rhsusf_200Rnd_556x45_M855_soft_pouch_coyote;
    class rtg_200rnd_556_45 : rhsusf_200Rnd_556x45_M855_soft_pouch_coyote {
        author = "Shrike";
        ammo = "rtg_556x45";
        count = 200;
        initspeed = 954.4;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "200rnd RTG 5.56mm Pouch";
        displaynameshort = "100Rnd 5.56x45";
        scope = 2;
    };

    class rhsusf_200Rnd_556x45_M855_soft_pouch_ucp;
    class rtg_200rnd_300_blk : rhsusf_200Rnd_556x45_M855_soft_pouch_ucp {
        author = "Shrike";
        ammo = "rtg_300blk";
        count = 200;
        initspeed = 954.4;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 300 BLK Ammo";
        displayname = "200rnd RTG 300 BLK Pouch";
        displaynameshort = "100Rnd 300 BLK";
        scope = 2;
    };

    class rhs_mag_100Rnd_556x45_m855_cmag;
    class rtg_100rnd_556_45 : rhs_mag_100Rnd_556x45_m855_cmag {
        author = "Shrike";
        ammo = "rtg_556x45";
        count = 100;
        initspeed = 954.4;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "100rnd RTG 5.56mm CMAG";
        displaynameshort = "100Rnd 5.56x45";
        scope = 2;
    };

    class rtg_100rnd_300_blk : rhs_mag_100Rnd_556x45_m855_cmag {
        author = "Shrike";
        ammo = "rtg_300blk";
        count = 100;
        initspeed = 954.4;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue .300 BLK Ammo";
        displayname = "100rnd RTG .300 Blk PMAG";
        displaynameshort = "100Rnd .300 BLK";
        scope = 2;
    };

    class ACWP_19Rnd_9x21_Mag_glock;
    class rtg_9mm_35Rnd_mag : ACWP_19Rnd_9x21_Mag_glock {
        author = "Shrike";
        ammo = "rtg_9mm";
        count = 35;
        initspeed = 954.4;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 9mm Ammo";
        displayname = "35rnd RTG 9mm Mag";
        model = "\hlc_wp_aug\mesh\magazine\magazine2.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\25rnd_9x19mm_AUG.p3d";
        displaynameshort = "35Rnd 9x21";
        scope = 2;
    };

    class rtg_9mm_21Rnd_mag : ACWP_19Rnd_9x21_Mag_glock {
        author = "Shrike";
        ammo = "rtg_9mm";
        count = 21;
        initspeed = 954.4;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 9mm Ammo";
        displayname = "21rnd RTG 9mm Mag";
        displaynameshort = "21Rnd 9x21";
        scope = 2;
    };
};

class CfgMagazineWells
{
    class RTG_25x45_GL {
        RHS_Magazines[] =
		{
			"rtg_10Rnd_25_HEDP";
        };
	};

    class CBA_762x51_M14 
    {
        RHS_Magazines[] =
		{
			"rtg_20Rnd_762x51";
		};
    };

    class CBA_762x51_LINKS
    {
        RHS_Magazines[] =
		{
			"rtg_200Rnd_762x51";
		};
    };

    class CBA_556x45_MINIMI
    {
        RHS_Magazines[] =
		{
			"rtg_200rnd_556_45";
		};
    };

    class CBA_300_blk_MINIMI
    {
        RHS_Magazines[] =
		{
			"rtg_200rnd_300_blk";
		};
    };

    class CBA_762x51_SCAR
    {
        RHS_Magazines[] =
		{
			"rtg_20Rnd_762x51";
		};
    };

    class CBA_545x39_AK	
	{
		RHS_Magazines[] =
		{
			"rtg_30rnd_545_49";
			"rtg_60rnd_545_49";
		};
	};

    class CBA_762x39_AK
	{
		RHS_Magazines[] =
		{
			"rtg_30rnd_762_39";
            "rtg_45rnd_762_39";
		};
	};

    class CBA_762x39_RPK
	{
		RHS_Magazines[] =
		{
			"rtg_30rnd_762_39";
            "rtg_45rnd_762_39";
		};
	};	

    class CBA_556x45_STANAG {
        RHS_Magazines[] =
		{
			"rtg_30rnd_556_45";
            "rtg_100rnd_556_45";
        };
	};

    class CBA_300BLK_STANAG {
        RHS_Magazines[] =
		{
			"rtg_30rnd_300_blk";
            "rtg_100rnd_300_blk";
        };
    };

    class RTG_9x19 {
		ACWP_Magazines[] = 
        {
            "rtg_9mm_35Rnd_mag";
            "rtg_9mm_21Rnd_mag";
        };
	};
};