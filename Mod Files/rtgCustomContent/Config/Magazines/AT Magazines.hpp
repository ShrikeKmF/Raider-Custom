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

// RPG
class PSRL1_HE_RF;
class RTG_RPG_HE : PSRL1_HE_RF 
{
    
    scope = 2;
    displayname = "[RTG] PG-7M HE";
    displaynameshort = "73mm HE";
    mass = 30;
    dlc="raiderTactical";
};

class PSRL1_FRAG_RF;
class RTG_RPG_Frag : PSRL1_FRAG_RF 
{
    
    ammo = "rtg_rpg_frag";
    scope = 2;
    displayname = "[RTG] OG-7VM FRAG";
    displaynameshort = "40mm FRAG";
    mass = 30;
    dlc="raiderTactical";
};


// ATGM
class ace_compat_rhs_usf3_mag_TOW2A;
class RTG_TOW3A_CSW : ace_compat_rhs_usf3_mag_TOW2A
{
    scope = 2;
    author = "Shrike";
    ammo = "RTG_TOW3A";
    displayName = "[CSW] TOW-3A";
    descriptionShort = "HEAT Wire Guided ATGM";
    displaynameshort = "TOW-3A";
    mass = 100;
}

class ace_compat_rhs_usf3_mag_TOW2BB;
class RTG_TOW3BB_CSW : ace_compat_rhs_usf3_mag_TOW2BB
{
    scope = 2;
    author = "Shrike";
    ammo = "RTG_TOW3BB";
    displayName = "[CSW] TOW-3BB";
    descriptionShort = "HE Wire Guided Missile";
    displaynameshort = "TOW-3B";
    mass = 50;
}
