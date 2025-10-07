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

class 30Rnd_65x39_caseless_black_mag;
class rtg_35Rnd_65x35 : 30Rnd_65x39_caseless_black_mag {
        
    ammo = "rtg_65x35";
    count = 35;
    tracersevery = 3;
    lastroundstracer = 4;
    descriptionshort = "Raider Tactical Standard Issue 6.5mm Caseless Ammo";
    displayname = "[RTG] 35rnd 6.5mm Caseless MAG";
    displaynameshort = "35Rnd 6.5x35";
    initSpeed=800;
    scope = 2;
};

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

class rtg_40rnd_300_blk : ptv_40rnd_556x45_Pmag {
        
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

// TODO REDO SMG MAGS
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