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
/*class hlc_12Rnd_40SW_B_P226;
class rtg_40SW : hlc_12Rnd_40SW_B_P226 {
    
    ammo = "rtg_40";
    count = 12;
    tracersevery = 0;
    lastroundstracer = 0;
    descriptionshort = "Raider Tactical .40 Ammo";
    displayname = "[RTG] 12rnd .40 Mag";
    displaynameshort = "12Rnd .40";
    scope = 2;
};*/

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

// 5.7 FN

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
