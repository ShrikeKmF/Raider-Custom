class Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F;
class rtg_100Rnd_68x51 : Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F {
    ammo = "rtg_277";
    count = 100;
    tracersevery = 1;
    lastroundstracer = 4;
    descriptionshort = "Raider Tactical Standard Issue 6.8mm Ammo";
    displayname = "[RTG] 100rnd 6.8mm MAG";
    displaynameshort = "100Rnd 6.8x51";
    initSpeed=910;
    scope = 2;
}

class 100Rnd_65x39_caseless_black_mag;
class rtg_120Rnd_65x35 : 100Rnd_65x39_caseless_black_mag {
        
    ammo = "rtg_65x35";
    count = 120;
    tracersevery = 1;
    lastroundstracer = 4;
    descriptionshort = "Raider Tactical Standard Issue 6.5mm Caseless Ammo";
    displayname = "[RTG] 100rnd 6.5mm Caseless MAG";
    displaynameshort = "100Rnd 6.5x35";
    initSpeed=800;
    scope = 2;
    mass = 41;
};

class 200Rnd_65x39_cased_Box;
class rtg_200Rnd_65x35 : 200Rnd_65x39_cased_Box
{
    ammo = "rtg_65x35";
    count = 200;
    tracersevery = 1;
    lastroundstracer = 4;
    descriptionshort = "Raider Tactical Standard Issue 6.5mm Caseless Ammo";
    displayname = "[RTG] 200rnd 6.5mm Caseless MAG";
    displaynameshort = "200Rnd 6.5x35";
};

class rtg_50rnd_556 : ptv_40rnd_556x45_Pmag {
        
    ammo = "rtg_556x45";
    count = 50;
    tracersevery = 1;
    lastroundstracer = 4;
    descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
    displayname = "[RTG] 50rnd 5.56mm PMAG";
    displaynameshort = "50Rnd 5.56x45";
    scope = 2;
    initSpeed=910;
};

class rtg_200rnd_556_45 : rhsusf_200Rnd_556x45_M855_soft_pouch_coyote {
        
    ammo = "rtg_556x45";
    count = 200;
    tracersevery = 1;
    lastroundstracer = 4;
    descriptionshort = "Raider Tactical Standard Issue 5.56mm Ammo";
    displayname = "[RTG] 200rnd 5.56mm Pouch";
    displaynameshort = "200Rnd 5.56x45";
    scope = 2;
    initSpeed=910;
};

// 338 NM
class 130Rnd_338_Mag;
class rtg_100Rnd_338 : 130Rnd_338_Mag
{
    ammo = "rtg_338";
    count = 100;
    tracersevery = 1;
    lastroundstracer = 4;
    scope = 2;

    descriptionshort = "Raider Tactical Standard Issue .338 Ammo";
    displayname = "[RTG] 100rnd .338 belt";
    displaynameshort = "100Rnd .338";
};