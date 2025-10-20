// UH-88 Ghosthawk
class B_Heli_Transport_01_F;
// Blufor
class RTG_B_Magpie : B_Heli_Transport_01_F
{
    displayNameShort = "Magpie [4/8]";
    displayName = "Magpie [4/8]";
    editorSubcategory = "RTG_LIGHT_ASSETS";
    author = "Shrike";
    scope = 2;
    side = WEST;
    faction = "Raider_Tactical_F";
    ace_cargo_space = 4;
    RTG_Vehicle_Gear_Rotary
    radarTargetSize=0.6421;	
}

// Greefor
class RTG_G_Magpie : RTG_B_Magpie
{
    author = "Shrike";
    scope = 2;
    side = RESISTANCE;
    faction = "Raider_Tactical_G_F";
}

class B_Heli_Transport_01_pylons_F;
class RTG_B_Magpie_DAP : B_Heli_Transport_01_pylons_F
{
    displayNameShort = "Magpie DAP [4/8]";
    displayName = "Magpie DAP [4/8]";
    editorSubcategory = "RTG_LIGHT_ASSETS";
    author = "Shrike";
    scope = 2;
    side = WEST;
    faction = "Raider_Tactical_F";
    ace_cargo_space = 4;
    RTG_Vehicle_Gear_Rotary
    radarTargetSize=0.8421;	
}

// Greefor
class RTG_G_Magpie_DAP : RTG_B_Magpie_DAP
{
    author = "Shrike";
    scope = 2;
    side = RESISTANCE;
    faction = "Raider_Tactical_G_F";
}