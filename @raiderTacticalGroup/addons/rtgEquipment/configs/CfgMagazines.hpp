class CfgMagazines
{
	// References
    class hlc_30rnd_556x45_SOST_PMAG;
	class ACE_20Rnd_762x51_M118LR_Mag;
	class hlc_200Rnd_762x51_T_M60E4;
	class hlc_30Rnd_545x39_EP_ak_Black;
	class rhs_60Rnd_545X39_7N22_AK;
	class rhsusf_200Rnd_556x45_M855_soft_pouch_coyote;
	class rhs_mag_100Rnd_556x45_m855_cmag;
	class rhsusf_200Rnd_556x45_M855_soft_pouch_ucp;
	class ACWP_19Rnd_9x21_Mag_glock;
    class hlc_30Rnd_762x51_B_fal;
    class rhs_mag_20Rnd_556x45_M855_Stanag;
    class 130Rnd_338_Mag;

	// 7.62 Nato
    class rtg_20Rnd_762x51 : ACE_20Rnd_762x51_M118LR_Mag {
        author = "Shrike";
        ammo = "rtg_762_nato";
        count = 20;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 20rnd 7.62mm MAG";
        displaynameshort = "20Rnd 7.62x51";
        scope = 2;
    };

    class rtg_35Rnd_762x51 : hlc_30Rnd_762x51_B_fal {
        author = "Shrike";
        ammo = "rtg_762_nato";
        count = 35;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 35rnd 7.62mm MAG";
        displaynameshort = "35Rnd 7.62x51";
        scope = 2;
    };
	
    class rtg_200Rnd_762x51 : hlc_200Rnd_762x51_T_M60E4 {
        author = "Shrike";
        ammo = "rtg_762_nato";
        count = 200;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 200rnd 7.62mm MAG";
        displaynameshort = "200Rnd 7.62x51";
        scope = 2;
        mass = 98;
    };
	
	class rtg_200Rnd_762x51_t : hlc_200Rnd_762x51_T_M60E4 {
        author = "Shrike";
        ammo = "rtg_762_nato";
        count = 200;
        tracersevery = 1;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 200rnd Tracer 7.62mm MAG";
        displaynameshort = "200Rnd Tracer 7.62x51";
        scope = 2;
        mass = 98;
    };

	// 5.45
    class rtg_30rnd_545_49 : hlc_30Rnd_545x39_EP_ak_Black {
        author = "Shrike";
        ammo = "rtg_545";
        count = 30;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.45mm Ammo";
        displayname = "[RTG] 30rnd 5.45mm PMAG";
        displaynameshort = "30Rnd 5.45x39";
        scope = 2;
    };

    class rtg_60rnd_545_49 : rhs_60Rnd_545X39_7N22_AK {
        author = "Shrike";
        ammo = "rtg_545";
        count = 60;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.45mm Ammo";
        displayname = "[RTG] 60rnd 5.45mm PMAG";
        displaynameshort = "60Rnd 5.45x39";
        scope = 2;
    };

	// 7.62 AK
    class rtg_30rnd_762_39 : hlc_30Rnd_545x39_EP_ak_Black {
        author = "Shrike";
        ammo = "rtg_762";
        count = 30;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 30rnd 7.62mm MAG";
        displaynameshort = "30Rnd 7.62x39";
        scope = 2;
    };
	
	class rtg_60rnd_762_39 : rhs_60Rnd_545X39_7N22_AK {
		author = "Shrike";
        ammo = "rtg_762";
        count = 60;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 60rnd 7.62mm MAG";
        displaynameshort = "60Rnd 7.62x39";
        scope = 2;
	};
	
	// .50 BW
	class rtg_10rnd_10bw : rhs_mag_20Rnd_556x45_M855_Stanag {
        author = "Shrike";
        ammo = "rtg_50bw";
        count = 10;
        tracersevery = 1;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue .50 BW Ammo";
        displayname = "[RTG] 10rnd .50 BW PMAG";
        displaynameshort = "10Rnd .50 BW";
        scope = 2;
    };
	
	// 5.56
    class rtg_30rnd_556_45 : hlc_30rnd_556x45_SOST_PMAG {
        author = "Shrike";
        ammo = "rtg_556x45";
        count = 30;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "[RTG] 30rnd 5.56mm PMAG";
        displaynameshort = "30Rnd 5.56x45";
        scope = 2;
    };

    class rtg_200rnd_556_45 : rhsusf_200Rnd_556x45_M855_soft_pouch_coyote {
        author = "Shrike";
        ammo = "rtg_556x45";
        count = 200;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "[RTG] 200rnd 5.56mm Pouch";
        displaynameshort = "200Rnd 5.56x45";
        scope = 2;
    };
	
	class rtg_200rnd_556_45_t : rhsusf_200Rnd_556x45_M855_soft_pouch_coyote {
        author = "Shrike";
        ammo = "rtg_556x45";
        count = 200;
        tracersevery = 1;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "[RTG] 200rnd Tracer 5.56mm Pouch";
        displaynameshort = "200Rnd Tracer 5.56x45";
        scope = 2;
    };

    class rtg_100rnd_556_45 : rhs_mag_100Rnd_556x45_m855_cmag {
        author = "Shrike";
        ammo = "rtg_556x45";
        count = 100;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "[RTG] 100rnd 5.56mm CMAG";
        displaynameshort = "100Rnd 5.56x45";
        scope = 2;
    };
	
	// .300 Blackout
    class rtg_200rnd_300_blk : rhsusf_200Rnd_556x45_M855_soft_pouch_ucp {
        author = "Shrike";
        ammo = "rtg_300blk";
        count = 200;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue .300 BLK Ammo";
        displayname = "[RTG] 200rnd .300 BLK Pouch";
        displaynameshort = "200Rnd .300 BLK";
        scope = 2;
    };
	
	class rtg_200rnd_300_blk_t : rhsusf_200Rnd_556x45_M855_soft_pouch_ucp {
        author = "Shrike";
        ammo = "rtg_300blk";
        count = 200;
        tracersevery = 1;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue .300 BLK Ammo";
        displayname = "[RTG] 200rnd Tracer .300 BLK Pouch";
        displaynameshort = "200Rnd Tracer .300";
        scope = 2;
    };
	
    class rtg_30rnd_300_blk : hlc_30rnd_556x45_SOST_PMAG {
        author = "Shrike";
        ammo = "rtg_300blk";
        count = 30;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue .300 BLK Ammo";
        displayname = "[RTG] 30rnd .300 Blk PMAG";
        displaynameshort = "30Rnd .300 BLK";
        scope = 2;
    };

    class rtg_100rnd_300_blk : rhs_mag_100Rnd_556x45_m855_cmag {
        author = "Shrike";
        ammo = "rtg_300blk";
        count = 100;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue .300 BLK Ammo";
        displayname = "[RTG] 100rnd .300 Blk PMAG";
        displaynameshort = "100Rnd .300 BLK";
        scope = 2;
    };

	// 9mm
    class rtg_9mm_35Rnd_mag : ACWP_19Rnd_9x21_Mag_glock {
        author = "Shrike";
        ammo = "rtg_9mm";
        count = 35;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 9mm Ammo";
        displayname = "[RTG] 35rnd 9mm Mag";
        model = "\hlc_wp_aug\mesh\magazine\magazine2.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\25rnd_9x19mm_AUG.p3d";
        displaynameshort = "35Rnd 9x21";
        scope = 2;
    };

    class rtg_9mm_21Rnd_mag : ACWP_19Rnd_9x21_Mag_glock {
        author = "Shrike";
        ammo = "rtg_9mm";
        count = 21;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 9mm Ammo";
        displayname = "[RTG] 21rnd 9mm Mag";
        displaynameshort = "21Rnd 9x21";
        scope = 2;
    };

    class RH_7Rnd_50_AE;
    class rtg_50_ae_8rnd_mag : RH_7Rnd_50_AE {
        author = "Shrike";
        ammo = "rtg_50_AE";
        count = 8;
        tracersevery = 0;
        lastroundstracer = 2;
        descriptionshort = "Raider Tactical Standard Issue 50 AE Ammo";
        displayname = "[RTG] 8rnd 50 AE Mag";
        displaynameshort = "8Rnd 50AE";
        scope = 2;
    };

    class rhsusf_5Rnd_00Buck;
    class rtg_6Rnd_00Buck : rhsusf_5Rnd_00Buck {
        author = "Shrike";
        ammo = "rtg_buckshot";
        count = 6;
        tracersevery = 0;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical Standard Issue 12 GA Ammo";
        displayname = "[RTG] 6rnd 12 GA Mag";
        displaynameshort = "6Rnd 12 GA";
        scope = 2;
    };

    class rtg_6Rnd_Doom : rhsusf_5Rnd_00Buck {
        author = "Shrike";
        ammo = "rtg_doomrounds";
        count = 6;
        tracersevery = 0;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical Doom 12 GA Ammo";
        displayname = "[RTG] 6rnd Doom 12 GA Mag";
        displaynameshort = "6Rnd 12 GA";
        scope = 2;
    };
};