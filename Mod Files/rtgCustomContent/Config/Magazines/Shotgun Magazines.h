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