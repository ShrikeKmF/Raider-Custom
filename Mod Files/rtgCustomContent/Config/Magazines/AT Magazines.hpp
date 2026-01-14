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
    displayname = "[RTG] OG-7MVL HE";
    displaynameshort = "73mm HE";
    mass = 29.98;
    dlc="raiderTactical";
};

class PSRL1_AT_RF;
class RTG_RPG_HEAT : PSRL1_AT_RF 
{
    
    scope = 2;
    displayname = "[RTG] PG-7M HEAT";
    displaynameshort = "73mm HEAT";
    mass = 61.3;
    dlc="raiderTactical";
};

class PSRL1_FRAG_RF;
class RTG_RPG_Frag : PSRL1_FRAG_RF 
{
    
    scope = 2;
    displayname = "[RTG] OG-7VM FRAG";
    displaynameshort = "40mm FRAG";
    mass = 29.98;
    dlc="raiderTactical";
};
