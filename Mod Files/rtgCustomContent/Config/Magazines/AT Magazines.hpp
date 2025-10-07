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
class PSLR1_HE_RF;
class rtg_rpg_smk_mag : PSLR1_HE_RF
{
    
    ammo = "rtg_rpg_smoke";
    scope = 2;
    displayname = "[RTG] SM-7VM Smoke";
    displaynameshort = "73mm Smoke";
    mass = 20;
};

class PSLR1_FRAG_RF;
class rtg_rpg_frag_mag : PSLR1_FRAG_RF 
{
    
    ammo = "rtg_rpg_frag";
    scope = 2;
    displayname = "[RTG] OG-7VM FRAG";
    displaynameshort = "40mm FRAG";
    mass = 30;
};

// LAT Sticks

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