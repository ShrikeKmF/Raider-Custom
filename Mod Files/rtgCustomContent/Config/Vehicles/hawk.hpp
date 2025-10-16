// AH-64E Guardian
class Aegis_B_Heli_Attack_03_F;
// Blufor
class RTG_B_Hawk : Aegis_B_Heli_Attack_03_F
{
    displayNameShort = "HAWK [2/0]";
    displayName = "HAWK [2/0]";
    editorSubcategory = "RTG_LIGHT_ASSETS";
    author = "Shrike";
    scope = 2;
    side = WEST;
    faction = "Raider_Tactical_F";
    ace_cargo_space = 4;
    RTG_Vehicle_Gear_Rotary
}

// Greefor
class RTG_G_Hawk : RTG_B_Hawk
{
    editorSubcategory = "RTG_LIGHT_ASSETS";
    author = "Shrike";
    scope = 2;
    side = RESISTANCE;
    faction = "Raider_Tactical_G_F";
}