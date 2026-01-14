// IFV
class B_APC_Wheeled_01_Cannon_v2_F;
class rtg_rush_ifv : B_APC_Wheeled_01_Cannon_v2_F
{
    displayNameShort = "RUSH IFV [2/9]";
    displayName = "RUSH IFV [2/9]";
    editorSubcategory = "RTG_GROUND_ASSETS";
    author = "Shrike";
    scope = 2;
    side = WEST;
    faction = "Raider_Tactical_F";
    ace_cargo_space = 16;
    mineDetectorRange = 50;
    canAccessMineDetector = 1;
    RTG_Vehicle_Gear
}

class rtg_rush_ifv_g : rtg_rush_ifv
{
    side = RESISTANCE;
    faction = "Raider_Tactical_G_F";
}

// MGS
class VVE_APC_Wheeled_01_mgs_up_QAV;
class rtg_rush_mgs : VVE_APC_Wheeled_01_mgs_up_QAV
{
    displayNameShort = "RUSH MGS [3/0]";
    displayName = "RUSH MGS [3/0]";
    editorSubcategory = "RTG_GROUND_ASSETS";
    author = "Shrike";
    scope = 2;
    side = WEST;
    faction = "Raider_Tactical_F";
    ace_cargo_space = 16;
    mineDetectorRange = 50;
    canAccessMineDetector = 1;
    RTG_Vehicle_Gear
}

class rtg_rush_mgs_g : rtg_rush_mgs
{
    side = RESISTANCE;
    faction = "Raider_Tactical_G_F";
}

// Command
class rtg_rush_cmd : rtg_rush_ifv
{
    displayNameShort = "RUSH COMMAND [1/10]";
    displayName = "RUSH COMMAND [1/10]";
    editorSubcategory = "RTG_GROUND_ASSETS";
    author = "Shrike";
    scope = 2;
    side = WEST;
    faction = "Raider_Tactical_F";
    ace_cargo_space = 16;
    mineDetectorRange = 50;
    canAccessMineDetector = 1;
    RTG_Vehicle_Gear
    enginePower=616.25;
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            weapons[] = {"HMG_127_APC"};
            magazines[] = {"500Rnd_127x99_mag_Tracer_Yellow"};
            soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.56234133,1,30};
            soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.56234133,1,30};
        };
    };
}

class rtg_rush_cmd_g : rtg_rush_cmd
{
    side = RESISTANCE;
    faction = "Raider_Tactical_G_F";
    dlc = "";
}