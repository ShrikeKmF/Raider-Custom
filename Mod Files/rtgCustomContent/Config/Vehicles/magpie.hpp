// Hellcat
class B_A_Heli_Light_03_DynamicLoadout_F;
class rtg_magpie : B_A_Heli_Light_03_DynamicLoadout_F
{
    displayNameShort = "Magpie [1/8]";
    displayName = "Magpie [1/8]";
    editorSubcategory = "RTG_AIR_ASSETS";
    author = "Shrike";
    scope = 2;
    side = WEST;
    faction = "Raider_Tactical_F";
    ace_cargo_space = 4;
    RTG_Vehicle_Gear_Rotary
}

class rtg_magpie_g : rtg_magpie
{
    author = "Shrike";
    scope = 2;
    side = RESISTANCE;
    faction = "Raider_Tactical_G_F";
}