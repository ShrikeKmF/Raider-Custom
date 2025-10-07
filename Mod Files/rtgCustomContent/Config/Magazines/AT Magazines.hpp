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
    mass = 20;
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
    mass = 30;
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