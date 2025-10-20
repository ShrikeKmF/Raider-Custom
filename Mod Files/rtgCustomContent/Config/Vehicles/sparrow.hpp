// AH-66 Comanche
class B_Heli_Attack_01_dynamicLoadout_F;
// Blufor
// Light
class RTG_B_SPARROW_L : B_Heli_Attack_01_dynamicLoadout_F
{
    displayNameShort = "Sparrow [2/0]";
    displayName = "Sparrow [2/0]";
    editorSubcategory = "RTG_LIGHT_ASSETS";
    author = "Shrike";
    scope = 2;
    side = WEST;
    faction = "Raider_Tactical_F";
    RTG_Vehicle_Gear_Rotary
    radarTargetSize=0.5742;
};

// Medium
class RTG_B_SPARROW_M : RTG_B_SPARROW_L
{
    editorSubcategory = "RTG_MEDIUM_ASSETS";
    author = "Shrike";
    scope = 2;
    side = WEST;
    faction = "Raider_Tactical_F";
};

// Greefor
// Light
class RTG_G_SPARROW_L : RTG_B_SPARROW_L
{
    author = "Shrike";
    scope = 2;
    side = RESISTANCE;
    faction = "Raider_Tactical_G_F";
};

// Medium
class RTG_G_SPARROW_M : RTG_B_SPARROW_M
{
    author = "Shrike";
    scope = 2;
    side = RESISTANCE;
    faction = "Raider_Tactical_G_F";
};