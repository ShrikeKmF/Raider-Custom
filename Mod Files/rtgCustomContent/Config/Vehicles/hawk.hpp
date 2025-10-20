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
    radarTargetSize=0.9124;	
    canUseScanners = 1;
    commanderCanSee = "1 + 2 + 4 + 8 + 32";
    driverCanSee = "1 + 2 + 4 + 8 + 32";
    gunnerCanSee = "1 + 2 + 4 + 8 + 32";

    irScanGround = 1;
    irScanRangeMax = 10000;
    irScanRangeMin = 2000;
    irScanToEyeFactor = 2;
    irTarget = 1;
    irTargetSize = 0.95;
    incomingMissileDetectionSystem = 16;
    lockDetectionSystem = "8 + 4";
    laserScanner = 1;
    laserTarget = 0;
    radarType = 4;
    showAllTargets = 4;
    
}

// Greefor
class RTG_G_Hawk : RTG_B_Hawk
{
    editorSubcategory = "RTG_LIGHT_ASSETS";
    scope = 2;
    side = RESISTANCE;
    faction = "Raider_Tactical_G_F";
    
}