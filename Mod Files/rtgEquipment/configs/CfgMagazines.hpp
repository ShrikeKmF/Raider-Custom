class CfgMagazines
{
// MAAWS
    class MRAWS_HEAT_F;
    class rtg_MRAWS_HEAT_F : MRAWS_HEAT_F {
        
        ammo = "rtg_heat_MRAAWS";
        scope = 2;
        displayname = "[RTG] MAAWS HEAT";
        displaynameshort = "84mm HEAT";
        mass = 65;
    };

    class MRAWS_HE_F;
    class rtg_MRAWS_HE_F : MRAWS_HE_F {
        
        ammo = "rtg_hedp_MRAAWS";
        scope = 2;
        displayname = "[RTG] MAAWS HEDP";
        displaynameshort = "84mm HEDP";
        mass = 45;
    };

    class rtg_MRAWS_SMK_F : rtg_MRAWS_HE_F {
        
        ammo = "rtg_smoke_MRAAWS";
        scope = 2;
        displayname = "[RTG] MAAWS Smoke";
        displaynameshort = "84mm Smoke";
        mass = 15;
    };

// RPG
    class rhs_rpg7_PG7VM_mag;
    class rtg_rpg_smk_mag : rhs_rpg7_PG7VM_mag
    {
        
        ammo = "rtg_rpg_smoke";
        scope = 2;
        displayname = "[RTG] SM-7VM Smoke";
        displaynameshort = "73mm Smoke";
        mass = 12;
    };

    class rtg_rpg_heat_mag : rhs_rpg7_PG7VM_mag
    {
        
        ammo = "rtg_rpg_heat";
        scope = 2;
        displayname = "[RTG] PG-7VM HEAT";
        displaynameshort = "73mm HEAT";
        mass = 50;
    };

    class rhs_rpg7_OG7V_mag;
    class rtg_rpg_hedp_mag : rhs_rpg7_OG7V_mag 
    {
        
        ammo = "rtg_rpg_hedp";
        scope = 2;
        displayname = "[RTG] OG-7VM HEDP";
        displaynameshort = "40mm HEDP";
        mass = 40;
    };

    class rhs_m136_mag;
    class rtg_m136_mag : rhs_m136_mag
	{
		ammo = "rtg_mat";
        scope = 2;
	};

    class rhs_m136_hedp_mag;
    class rtg_m136_er_mag  : rhs_m136_hedp_mag
	{
		ammo = "rtg_mat_er";
        scope = 2;
	};

    class rhs_m72a7_mag;
    class rtg_m72a7_mag : rhs_m72a7_mag
	{
		ammo = "rtg_lat";
        scope = 2;
	};

    

// Artillery

// GL
    class rhs_GDM40;
    class RTG_40mm_Smoke_Impact : rhs_GDM40
    {
        scope = 2;
        displayname = "[RTG] M715 Impact Smoke";
        displaynameshort = "Impact Smoke";
        ammo="rtg_40mm_impact";
    };

// References
    class ptv_30Rnd_556x45_L5awmc_pull;
	class ACE_20Rnd_762x51_M118LR_Mag;
	class rhsusf_50Rnd_762x51;
	class rhsusf_200Rnd_556x45_M855_soft_pouch_coyote;
	class rhs_mag_100Rnd_556x45_m855_cmag;
	class rhsusf_200Rnd_556x45_M855_soft_pouch_ucp;
	class ACWP_19Rnd_9x21_Mag_glock;
    class hlc_30Rnd_762x51_B_L4;
    class rhs_mag_20Rnd_556x45_M855_Stanag;
    class rhsusf_mag_10Rnd_STD_50BMG_M33;
    
// 50 BMG 
    class rtg_10Rnd_127x99 : rhsusf_mag_10Rnd_STD_50BMG_M33 {
        
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
        
        ammo = "rtg_762_nato";
        count = 20;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 20rnd 7.62mm MAG";
        displaynameshort = "20Rnd 7.62x51";
        initSpeed=985;
        scope = 2;
    };

    class rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle;
    class rtg_8Rnd_762x51 : rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle {
        
        ammo = "rtg_762_nato";
        count = 8;
        tracersevery = 1;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 8rnd 7.62mm MAG";
        displaynameshort = "8Rnd 7.62x51";
        initSpeed=985;
        scope = 2;
    };

    class rtg_35Rnd_762x51 : hlc_30Rnd_762x51_B_L4 {
        
        ammo = "rtg_762_nato";
        count = 35;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 35rnd 7.62mm MAG";
        displaynameshort = "35Rnd 7.62x51";
        initSpeed=985;
        scope = 2;
        mass = 14;
    };
	
    class rtg_200Rnd_762x51 : rhsusf_50Rnd_762x51 {
        
        ammo = "rtg_762_nato";
        count = 100;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 100rnd 7.62mm MAG";
        displaynameshort = "100Rnd 7.62x51";
        initSpeed=985;
        scope = 2;
        mass = 44;
    };
	
	class rtg_200Rnd_762x51_t : rhsusf_50Rnd_762x51 {
        
        ammo = "rtg_762_nato";
        count = 100;
        tracersevery = 1;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 7.62mm Ammo";
        displayname = "[RTG] 100rnd Tracer 7.62mm MAG";
        displaynameshort = "100Rnd Tracer 7.62x51";
        initSpeed=985;
        scope = 2;
        mass = 44.1;
    };

    class rtg_80Rnd_762x51_apds : rhsusf_50Rnd_762x51 {
        
        ammo = "rtg_762_apds_nato";
        count = 80;
        tracersevery = 1;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical AP 7.62mm Ammo";
        displayname = "[RTG] 80rnd AP 7.62mm MAG";
        displaynameshort = "80Rnd AP 7.62x51";
        initSpeed=1100;
        scope = 2;
        mass = 44.1;
    };

// .277 Fury
    class rtg_20Rnd_68x51 : rtg_20Rnd_762x51 {
        
        ammo = "rtg_277";
        count = 25;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 6.8mm Ammo";
        displayname = "[RTG] 25rnd 6.8mm MAG";
        displaynameshort = "25Rnd 6.8x51";
        initSpeed=910;
        scope = 2;
    };

    class rtg_100Rnd_68x51 : rtg_200Rnd_762x51 {
        
        ammo = "rtg_277";
        count = 100;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 6.8mm Ammo";
        displayname = "[RTG] 100rnd 6.8mm MAG";
        displaynameshort = "100Rnd 6.8x51";
        initSpeed=910;
        scope = 2;
        mass = 41;
    };

    class rtg_100Rnd_68x51_t : rtg_200Rnd_762x51 {
        
        ammo = "rtg_277";
        count = 100;
        tracersevery = 1;
        descriptionshort = "Raider Tactical Standard Issue 6.8mm Tracer Ammo";
        displayname = "[RTG] 100rnd Tracer 6.8mm MAG";
        displaynameshort = "100Rnd Tracer 6.8x51";
        initSpeed=910;
        scope = 2;
        mass = 41.1;
    };
	
// .50 BW
	class rtg_10rnd_10bw : rhs_mag_20Rnd_556x45_M855_Stanag {
        
        ammo = "rtg_50bw";
        count = 15;
        tracersevery = 1;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue .50 BW Ammo";
        displayname = "[RTG] 15rnd .50 BW PMAG";
        displaynameshort = "15Rnd .50 BW";
        scope = 2;
        initSpeed=591;
    };
	
// 5.56
    class rtg_30rnd_556_45 : ptv_30Rnd_556x45_L5awmc_pull {
        
        ammo = "rtg_556x45";
        count = 30;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "[RTG] 30rnd 5.56mm PMAG";
        displaynameshort = "30Rnd 5.56x45";
        scope = 2;
        initSpeed=910;
    };

    class ptv_40rnd_556x45_Pmag;
    class rtg_50rnd_556 : ptv_40rnd_556x45_Pmag {
        
        ammo = "rtg_556x45";
        count = 50;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "[RTG] 50rnd 5.56mm PMAG";
        displaynameshort = "50Rnd 5.56x45";
        scope = 2;
        initSpeed=910;
    };
    

    class rhs_30Rnd_545x39_7N10_camo_AK;
    class rtg_30rnd_556_45_ak : rhs_30Rnd_545x39_7N10_camo_AK {
        
        ammo = "rtg_556x45";
        count = 30;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "[RTG] 30rnd 5.56mm AK";
        displaynameshort = "30Rnd 5.56x45";
        scope = 2;
        initSpeed=910;
    }; 

    class rhs_45Rnd_545x39_7N6M_AK;
    class rtg_60rnd_556_45_ak : rhs_45Rnd_545x39_7N6M_AK {
        
        ammo = "rtg_556x45";
        count = 60;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "[RTG] 60rnd 5.56mm AK";
        displaynameshort = "60Rnd 5.56x45";
        scope = 2;
        initSpeed=910;
    }; 

    class rtg_200rnd_556_45 : rhsusf_200Rnd_556x45_M855_soft_pouch_coyote {
        
        ammo = "rtg_556x45";
        count = 200;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "[RTG] 200rnd 5.56mm Pouch";
        displaynameshort = "200Rnd 5.56x45";
        scope = 2;
        initSpeed=910;
    };
	
	class rtg_200rnd_556_45_t : rhsusf_200Rnd_556x45_M855_soft_pouch_coyote {
        
        ammo = "rtg_556x45";
        count = 200;
        tracersevery = 1;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "[RTG] 200rnd Tracer 5.56mm Pouch";
        displaynameshort = "200Rnd Tracer 5.56x45";
        scope = 2;
        initSpeed=910;
    };

    class ptv_150Rnd_556x45_negev;
    class rtg_200rnd_556_45_negev : ptv_150Rnd_556x45_negev {
        
        ammo = "rtg_556x45";
        count = 200;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "[RTG] 200rnd 5.56mm Pouch";
        displaynameshort = "200Rnd 5.56x45";
        scope = 2;
        initSpeed=910;
    };
	
	class rtg_200rnd_556_45_t_negev : ptv_150Rnd_556x45_negev {
        
        ammo = "rtg_556x45";
        count = 200;
        tracersevery = 1;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
        displayname = "[RTG] 200rnd Tracer 5.56mm Pouch";
        displaynameshort = "200Rnd Tracer 5.56x45";
        scope = 2;
        initSpeed=910;
    };
	
// .300 Blackout
    class rtg_200rnd_300_blk : rhsusf_200Rnd_556x45_M855_soft_pouch_ucp {
        
        ammo = "rtg_300blk";
        count = 240;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue .300 BLK Ammo";
        displayname = "[RTG] 240rnd .300 BLK Pouch";
        displaynameshort = "240Rnd .300 BLK";
        scope = 2;
        initSpeed=609;
    };
	
	class rtg_200rnd_300_blk_t : rhsusf_200Rnd_556x45_M855_soft_pouch_ucp {
        
        ammo = "rtg_300blk";
        count = 240;
        tracersevery = 1;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue .300 BLK Ammo";
        displayname = "[RTG] 240rnd Tracer .300 BLK Pouch";
        displaynameshort = "240Rnd Tracer .300";
        scope = 2;
        initSpeed=609;
    };
	
    class rtg_30rnd_300_blk : ptv_40rnd_556x45_Pmag {
        
        ammo = "rtg_300blk";
        count = 40;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue .300 BLK Ammo";
        displayname = "[RTG] 40rnd .300 Blk PMAG";
        displaynameshort = "40Rnd .300 BLK";
        scope = 2;
        initSpeed=609;
    };

    class hlc_40Rnd_762x39_b_rpk;
    class rtg_30rnd_300_blk_ak : hlc_40Rnd_762x39_b_rpk
    {
       ammo = "rtg_300blk";
        count = 40;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue .300 BLK Ammo";
        displayname = "[RTG] 40rnd .300 Blk AK";
        displaynameshort = "40Rnd .300 BLK";
        scope = 2;
        initSpeed=609;
    };

    class hlc_75Rnd_762x39_b_rpk;
    class rtg_80rnd_300_blk_ak : hlc_75Rnd_762x39_b_rpk
    {
        ammo = "rtg_300blk";
        count = 80;
        tracersevery = 3;
        lastroundstracer = 4;
        descriptionshort = "Raider Tactical Standard Issue .300 BLK Ammo";
        displayname = "[RTG] 80rnd .300 Blk AK";
        displaynameshort = "80Rnd .300 BLK";
        scope = 2;
        initSpeed=609;
    };

// 9mm
    class rtg_9mm_35Rnd_mag : ACWP_19Rnd_9x21_Mag_glock {
        
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
        initSpeed=441;
    };

// 50AE
    class RH_7Rnd_50_AE;
    class rtg_50_ae_8rnd_mag : RH_7Rnd_50_AE {
        
        ammo = "rtg_50_AE";
        count = 8;
        tracersevery = 0;
        lastroundstracer = 2;
        descriptionshort = "Raider Tactical Standard Issue 50 AE Ammo";
        displayname = "[RTG] 8rnd 50 AE Mag";
        displaynameshort = "8Rnd 50AE";
        scope = 2;
    };

    class rtg_50_ae_5rnd_mag : rtg_50_ae_8rnd_mag {
        
        ammo = "rtg_50_AE";
        count = 5;
        descriptionshort = "Raider Tactical Standard Issue 50 AE Ammo";
        displayname = "[RTG] 5rnd 50 AE Mag";
        displaynameshort = "5Rnd 50AE";
        scope = 2;
    };

    class rtg_50_ae_20rnd_mag : ACWP_19Rnd_9x21_Mag_glock {
        
        ammo = "rtg_50_AE";
        count = 25;
        tracersevery = 0;
        lastroundstracer = 2;
        descriptionshort = "Raider Tactical Standard Issue 50 AE Ammo";
        displayname = "[RTG] 25rnd 50 AE Mag";
        displaynameshort = "25Rnd 50AE";
        model = "\hlc_wp_aug\mesh\magazine\magazine2.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\25rnd_9x19mm_AUG.p3d";
        scope = 2;
    };

// 12 Gauge
    class rhsusf_5Rnd_00Buck;
    class rtg_5Rnd_00Buck : rhsusf_5Rnd_00Buck {
        
        ammo = "rtg_buckshot";
        count = 5;
        tracersevery = 0;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical Standard Issue Buckshot 12g Ammo";
        displayname = "[RTG] 5rnd Buckshot 12g Mag";
        displaynameshort = "5Rnd Buckshot 12g";
        scope = 2;
    };

    class rtg_5Rnd_slug: rhsusf_5Rnd_00Buck {
        
        ammo = "rtg_slug";
        count = 5;
        tracersevery = 0;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical FRAG 12g Ammo";
        displayname = "[RTG] 5rnd Slug 12g Mag";
        displaynameshort = "5Rnd Slug 12g";
        scope = 2;
    };

    class rtg_5Rnd_Doom : rhsusf_5Rnd_00Buck {
        
        ammo = "rtg_doomrounds";
        count = 5;
        tracersevery = 0;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical FRAG 12g Ammo";
        displayname = "[RTG] 5rnd FRAG 12g Mag";
        displaynameshort = "5Rnd FRAG 12g";
        scope = 2;
    };

     class rtg_8Rnd_00Buck : rtg_5Rnd_00Buck {
        
        count = 8;
        displayname = "[RTG] 8rnd Buckshot 12g Mag";
        displaynameshort = "8Rnd Buckshot 12g";
        scope = 2;
    };

    class rtg_8Rnd_slug: rtg_5Rnd_slug {
        
        count = 8;
        displayname = "[RTG] 8rnd Slug 12g Mag";
        displaynameshort = "8Rnd Slug 12g";
        scope = 2;
    };

    class rtg_8Rnd_Doom : rtg_5Rnd_Doom {
        
        count = 8;
        displayname = "[RTG] 8rnd FRAG 12g Mag";
        displaynameshort = "8Rnd FRAG 12g";
        scope = 2;
    };

// 45 ACP
    class rhsusf_mag_7x45acp_MHP;
    class rtg_8Rnd_45 : rhsusf_mag_7x45acp_MHP {
        
        ammo = "rtg_45";
        count = 9;
        tracersevery = 0;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical .45 Ammo";
        displayname = "[RTG] 9rnd .45 Mag";
        displaynameshort = "9Rnd .45";
        scope = 2;
    };

// 40 SW
    class hlc_12Rnd_40SW_B_P226;
    class rtg_40SW : hlc_12Rnd_40SW_B_P226 {
        
        ammo = "rtg_40";
        count = 12;
        tracersevery = 0;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical .40 Ammo";
        displayname = "[RTG] 12rnd .40 Mag";
        displaynameshort = "12Rnd .40";
        scope = 2;
    };

// 5.7 FN
    class 50Rnd_570x28_SMG_03;
    class rtg_p90 : 50Rnd_570x28_SMG_03 {
        
        ammo = "rtg_57";
        count = 50;
        tracersevery = 1;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical Standard Issue 5.7mm Ammo";
        displayname = "[RTG] 50rnd 5.7mm Mag";
        displaynameshort = "50Rnd 5.7x28";
        scope = 2;
    };

    class RH_20Rnd_57x28_FN;
    class rtg_fn57_20Rnd : RH_20Rnd_57x28_FN
    {
        
        ammo = "rtg_57";
        count = 20;
        tracersevery = 1;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical Standard Issue 5.7mm Ammo";
        displayname = "[RTG] 20rnd 5.7mm Mag";
        displaynameshort = "20Rnd 5.7x28";
        scope = 2;
    };

// .357 Mag
    class RH_6Rnd_454_Mag;
    class rtg_357_6Rnd : RH_6Rnd_454_Mag
    {
        
        ammo = "rtg_357mag";
        count = 6;
        tracersevery = 1;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical Standard Issue .357 Ammo";
        displayname = "[RTG] 6rnd .357 Mag";
        displaynameshort = "6Rnd .357 Magnum";
        scope = 2;
    };

// .44 Mag
    class rtg_44_6Rnd : rtg_357_6Rnd
    {
        
        ammo = "rtg_44mag";
        count = 6;
        tracersevery = 1;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical Standard Issue .44 Ammo";
        displayname = "[RTG] 6rnd .44 Mag";
        displaynameshort = "6Rnd .44 Magnum";
        scope = 2;
    };

// 14 Gauge
    class rtg_1Rnd_14g : rtg_5Rnd_00Buck {
        
        ammo = "rtg_buckshot_pump_14g";
        count = 1;
        tracersevery = 0;
        lastroundstracer = 0;
        descriptionshort = "Raider Tactical Standard Issue Buckshot 14g Ammo";
        displayname = "[RTG] 1rnd Buckshot 14g Mag";
        displaynameshort = "1Rnd Buckshot 14g";
        scope = 2;
    };

// Misc
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
		ammo			= "rtg_762_nato";
		displayname		= "7.62x51mm";
		displaynameshort= "[RTG] 762x51";
		namesound		= "mgun";
		initspeed		= 930;
		maxleadspeed	= 100;
		count			= 1100;
		tracersevery	= 5;
	};
};