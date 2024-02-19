class CfgMagazines
{
    class MRAWS_HEAT_F;
    class rtg_MRAWS_HEAT_F : MRAWS_HEAT_F {
        author = "Shrike";
        ammo = "rtg_heat_MRAAWS";
        scope = 2;
        displayname = "[RTG] MAAWS HEAT";
        displaynameshort = "84mm HEAT";
        mass = 65;
    };

    class MRAWS_HE_F;
    class rtg_MRAWS_HE_F : MRAWS_HE_F {
        author = "Shrike";
        ammo = "rtg_hedp_MRAAWS";
        scope = 2;
        displayname = "[RTG] MAAWS HEDP";
        displaynameshort = "84mm HEDP";
        mass = 45;
    };

    class rtg_MRAWS_SMK_F : rtg_MRAWS_HE_F {
        author = "Shrike";
        ammo = "rtg_smoke_MRAAWS";
        scope = 2;
        displayname = "[RTG] MAAWS Smoke";
        displaynameshort = "84mm Smoke";
        mass = 15;
    };

    class rhs_rpg7_PG7VM_mag;
    class rtg_rpg_smk_mag : rhs_rpg7_PG7VM_mag
    {
        author = "Shrike";
        ammo = "rtg_rpg_smoke";
        scope = 2;
        displayname = "[RTG] SM-7VM Smoke";
        displaynameshort = "73mm Smoke";
        mass = 12;
    };

    class rtg_rpg_heat_mag : rhs_rpg7_PG7VM_mag
    {
        author = "Shrike";
        ammo = "rtg_rpg_heat";
        scope = 2;
        displayname = "[RTG] PG-7VM HEAT";
        displaynameshort = "73mm HEAT";
        mass = 50;
    };

    class rhs_rpg7_OG7V_mag;
    class rtg_rpg_hedp_mag : rhs_rpg7_OG7V_mag 
    {
        author = "Shrike";
        ammo = "rtg_rpg_hedp";
        scope = 2;
        displayname = "[RTG] OG-7VM HEDP";
        displaynameshort = "40mm HEDP";
        mass = 40;
    };

    class 32Rnd_155mm_Mo_shells;
	class RHS_mag_m1_he_12: 32Rnd_155mm_Mo_shells
	{
		scope = 2;
		count = 12;
		displayname = "HE-FRAG M1";
		displaynameshort = "HE-FRAG";
		nameSound = "heat";
		ammo = "rhs_ammo_m1_he";
		muzzleImpulseFactor[] = {0.1,0.1};
	};
	class rhs_mag_m314_ilum_4: RHS_mag_m1_he_12
	{
		count = 4;
		displayname = "Illumination M314";
		displaynameshort = "Illumination";
		ammo = "rhs_ammo_m314_ilum";
	};
    class rhs_mag_m60a2_smoke_4: RHS_mag_m1_he_12
	{
		count = 4;
		displayname = "Smoke M60A2";
		displaynameshort = "Smoke";
		ammo = "rhs_ammo_m60a2_smoke";
	};

	// References
    class ptv_30Rnd_556x45_L5awmc_pull;
	class ACE_20Rnd_762x51_M118LR_Mag;
	class rhsusf_50Rnd_762x51;
	class hlc_30Rnd_545x39_EP_ak_Black;
	class rhs_60Rnd_545X39_7N22_AK;
	class rhsusf_200Rnd_556x45_M855_soft_pouch_coyote;
	class rhs_mag_100Rnd_556x45_m855_cmag;
	class rhsusf_200Rnd_556x45_M855_soft_pouch_ucp;
	class ACWP_19Rnd_9x21_Mag_glock;
    class hlc_30Rnd_762x51_B_L4;
    class rhs_mag_20Rnd_556x45_M855_Stanag;
    class 30Rnd_580x42_Mag_F;
    class 100Rnd_580x42_Mag_F;
    class rhsusf_mag_10Rnd_STD_50BMG_M33;
    class 100Rnd_65x39_caseless_black_mag;
    
    // 50 BMG 
    class rtg_10Rnd_127x99 : rhsusf_mag_10Rnd_STD_50BMG_M33 {
        author = "Shrike";
        ammo = "rtg_127x99";
        count = 10;
        tracersevery = 1;
        descriptionshort = "Raider Tactical Standard Issue 12.7mm Ammo";
        displayname = "[RTG] 10rnd 12.7mm MAG";
        displaynameshort = "10Rnd 12.7x99";
        scope = 2;
    };

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

    class rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle;
    class rtg_8Rnd_762x51 : rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle {
        author = "Shrike";
        ammo = "rtg_762_nato";
        count = 8;
        tracersevery = 1;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 8rnd 7.62mm MAG";
        displaynameshort = "8Rnd 7.62x51";
        scope = 2;
    };

    class rtg_35Rnd_762x51 : hlc_30Rnd_762x51_B_L4 {
        author = "Shrike";
        ammo = "rtg_762_nato";
        count = 35;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 35rnd 7.62mm MAG";
        displaynameshort = "35Rnd 7.62x51";
        scope = 2;
        mass = 14;
    };
	
    class rtg_200Rnd_762x51 : rhsusf_50Rnd_762x51 {
        author = "Shrike";
        ammo = "rtg_762_nato";
        count = 100;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 100rnd 7.62mm MAG";
        displaynameshort = "100Rnd 7.62x51";
        scope = 2;
        mass = 47;
    };
	
	class rtg_200Rnd_762x51_t : rhsusf_50Rnd_762x51 {
        author = "Shrike";
        ammo = "rtg_762_nato";
        count = 100;
        tracersevery = 1;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 100rnd Tracer 7.62mm MAG";
        displaynameshort = "100Rnd Tracer 7.62x51";
        scope = 2;
        mass = 47;
    };

    // 5.8
    class rtg_30rnd_58x42 : 30Rnd_580x42_Mag_F {
        author = "Shrike";
        ammo = "rtg_580";
        count = 30;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.8mm Ammo";
        displayname = "[RTG] 30rnd 5.8mm PMAG";
        displaynameshort = "30Rnd 5.8x42";
        scope = 2;
    }

    class rtg_100rnd_58x42 : 100Rnd_580x42_Mag_F {
        author = "Shrike";
        ammo = "rtg_580";
        count = 100;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.8mm Ammo";
        displayname = "[RTG] 100rnd 5.8mm Mag";
        displaynameshort = "100Rnd 5.8x42";
        scope = 2;
    }

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
        count = 15;
        tracersevery = 1;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue .50 BW Ammo";
        displayname = "[RTG] 15rnd .50 BW PMAG";
        displaynameshort = "15Rnd .50 BW";
        scope = 2;

    };
	
	// 5.56
    class rtg_30rnd_556_45 : ptv_30Rnd_556x45_L5awmc_pull {
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
	
    class rtg_30rnd_300_blk : ptv_30Rnd_556x45_L5awmc_pull {
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

    class rtg_200Rnd_9mm : 100Rnd_65x39_caseless_black_mag {
        author = "Shrike";
        ammo = "rtg_9mm";
        count = 250;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 9mm Ammo";
        displayname = "[RTG] 250rnd 9mm MAG";
        displaynameshort = "250Rnd 9mm";
        scope = 2;
        mass = 45;
    };

    class rtg_200Rnd_9mm_T : 100Rnd_65x39_caseless_black_mag {
        author = "Shrike";
        ammo = "rtg_9mm";
        count = 250;
        tracersevery = 1;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue Tracer 9mm Ammo";
        displayname = "[RTG] 250rnd 9mm MAG Tracer";
        displaynameshort = "250Rnd 9mm Tracer";
        scope = 2;
        mass = 45;
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

    class rtg_50_ae_20rnd_mag : ACWP_19Rnd_9x21_Mag_glock {
        author = "Shrike";
        ammo = "rtg_50_AE";
        count = 20;
        tracersevery = 0;
        lastroundstracer = 2;
        descriptionshort = "Raider Tactical Standard Issue 50 AE Ammo";
        displayname = "[RTG] 20rnd 50 AE Mag";
        displaynameshort = "20Rnd 50AE";
        model = "\hlc_wp_aug\mesh\magazine\magazine2.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\25rnd_9x19mm_AUG.p3d";
        scope = 2;
    }

    class rhsusf_5Rnd_00Buck;
    class rtg_6Rnd_00Buck : rhsusf_5Rnd_00Buck {
        author = "Shrike";
        ammo = "rtg_buckshot_pump";
        count = 6;
        tracersevery = 0;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical Standard Issue Buckshot 12g Ammo";
        displayname = "[RTG] 6rnd Buckshot 12g Mag";
        displaynameshort = "6Rnd Buckshot 12g";
        scope = 2;
    };

    class rtg_6Rnd_Doom : rhsusf_5Rnd_00Buck {
        author = "Shrike";
        ammo = "rtg_doomrounds_pump";
        count = 6;
        tracersevery = 0;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical FRAG 12g Ammo";
        displayname = "[RTG] 6rnd FRAG 12g Mag";
        displaynameshort = "6Rnd FRAG 12g";
        scope = 2;
    };

    class rhsusf_mag_7x45acp_MHP;
    class rtg_8Rnd_45 : rhsusf_mag_7x45acp_MHP {
        author = "Shrike";
        ammo = "rtg_45";
        count = 9;
        tracersevery = 0;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical .45 Ammo";
        displayname = "[RTG] 9rnd .45 Mag";
        displaynameshort = "9Rnd .45";
        scope = 2;
    };

    class hlc_12Rnd_40SW_B_P226;
    class rtg_40SW : hlc_12Rnd_40SW_B_P226 {
        author = "Shrike";
        ammo = "rtg_40";
        count = 12;
        tracersevery = 0;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical .40 Ammo";
        displayname = "[RTG] 12rnd .40 Mag";
        displaynameshort = "12Rnd .40";
        scope = 2;
    };

    class 30Rnd_762x39_AK12_Mag_F;
    class rtg_12g_15Rnd : 30Rnd_762x39_AK12_Mag_F {
        author = "Shrike";
        ammo = "rtg_buckshot";
        count = 15;
        tracersevery = 0;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical Standard Issue Buckshot 12g Ammo";
        displayname = "[RTG] 15rnd Buckshot 12g Mag";
        displaynameshort = "15Rnd Buckshot 12g";
        scope = 2;
    };

    class rtg_12g_15Rnd_doom : rtg_12g_15Rnd {
        author = "Shrike";
        ammo = "rtg_doomrounds";
        count = 15;
        tracersevery = 0;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical FRAG 12g Ammo";
        displayname = "[RTG] 15rnd FRAG 12g Mag";
        displaynameshort = "15Rnd FRAG 12g";
        scope = 2;
    };

    class 2Rnd_12Gauge_Slug;
    class rtg_nitroSlug : 2Rnd_12Gauge_Slug {
        author = "Shrike";
        ammo = "rtg_nitro";
        count = 2;
        tracersevery = 1;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical 700 Nitro Express Ammo";
        displayname = "[RTG] 2Rnd 700 Nitro Express";
        displaynameshort = "2 Rnd 700 Nitro Express";
        scope = 2;
    };

    class 50Rnd_570x28_SMG_03;
    class rtg_p90 : 50Rnd_570x28_SMG_03 {
        author = "Shrike";
        ammo = "rtg_57";
        count = 50;
        tracersevery = 1;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical Standard Issue 5.7mm Ammo";
        displayname = "[RTG] 50rnd 5.7mm Mag";
        displaynameshort = "50Rnd 5.7x28";
        scope = 2;
    };

    class UK3CB_AUG_42Rnd_556x45_Magazine;
    class rtg_25mm_HE_Mag : UK3CB_AUG_42Rnd_556x45_Magazine
    {
        author = "Shrike";
        ammo = "rtg_25mm_hedp";
        count = 12;
        tracersevery = 1;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical Standard Issue 25mm Ammo";
        displayname = "[RTG] 12Rnd 25mm HEDP Mag";
        displaynameshort = "12Rnd 25mm";
        scope = 2;
    };

    class SmokeShell;
	class Chemlight_green: SmokeShell
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_CHEMLIGHT0";
		picture = "\A3\Weapons_F\Data\UI\M_chemlight_green_CA.paa";
		model = "\A3\Weapons_f\chemlight\chemlight_green";
		value = 2;
		initSpeed = 14;
		ammo = "Chemlight_green";
		nameSoundWeapon = "Chemlight";
		nameSound = "Chemlight";
		descriptionShort = "$STR_A3_CfgMagazines_Chemlight1";
		displayNameShort = "$STR_A3_CFGMAGAZINES_CHEMLIGHT_DNS";
		mass = 0.2;
	};
	class Chemlight_red: Chemlight_green
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_CHEMLIGHT_RED0";
		ammo = "Chemlight_red";
		descriptionShort = "$STR_A3_CfgMagazines_Chemlight_red1";
		model = "\A3\Weapons_f\chemlight\chemlight_red";
		displayNameShort = "$STR_A3_CFGMAGAZINES_CHEMLIGHTT_RED_DNS";
		picture = "\A3\Weapons_F\Data\UI\M_chemlight_red_CA.paa";
	};
	class Chemlight_yellow: Chemlight_green
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_CHEMLIGHT_YELLOW0";
		ammo = "Chemlight_yellow";
		descriptionShort = "$STR_A3_CfgMagazines_Chemlight_yellow1";
		model = "\A3\Weapons_f\chemlight\chemlight_yellow";
		displayNameShort = "$STR_A3_CFGMAGAZINES_CHEMLIGHTT_YELLOW_DNS";
		picture = "\A3\Weapons_F\Data\UI\M_chemlight_yellow_CA.paa";
	};
	class Chemlight_blue: Chemlight_green
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CFGMAGAZINES_CHEMLIGHT_BLUE0";
		ammo = "Chemlight_blue";
		descriptionShort = "$STR_A3_CfgMagazines_Chemlight_blue1";
		model = "\A3\Weapons_f\chemlight\chemlight_blue";
		displayNameShort = "$STR_A3_CFGMAGAZINES_CHEMLIGHTT_BLUE_DNS";
		picture = "\A3\Weapons_F\Data\UI\M_chemlight_blue_CA.paa";
	};

    class VehicleMagazine;
    class rhs_mag_1100Rnd_762x51_M240: VehicleMagazine
	{
		scope			= 2;
		ammo			= "rhs_ammo_762x51_M80A1EPR_Ball";
		displayname		= "7.62x51mm EPR";
		displaynameshort= "M80A1 EPR";
		namesound		= "mgun";
		initspeed		= 930;
		maxleadspeed	= 100;
		count			= 1100;
		tracersevery	= 1;
	};
};