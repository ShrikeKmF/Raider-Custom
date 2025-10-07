class CfgPatches {
  class rtg_ai_overhaul {
    units[] = {};
    weapons[] = {};
    requiredVersion = 1.0;
    requiredAddons[] = {
        "A3_Functions_F",
        "A3_Weapons_F",
        "A3_Weapons_F_Exp",
        "A3_Weapons_F_Tank",
        "rhs_c_weapons"
    };
    version = "1.0";
    versionStr = "1.0";
    author = "Shrike";
  };
};

class PhysXParams
{
	ragdollHitDmgLimit = 0.6;
};

class CfgBrains {
    class DefaultSoldierBrain {
        class Components {
            class AIBrainSuppressionComponent {
                worstDecreaseTime = 35.0;   // in seconds for 0.0 skill
                bestDecreaseTime = 10.0;     // in seconds for 1.0 skill
                causeExplosionWeight = 1.5; //
            };
            class AIBrainAimingErrorComponent {
                worstDecreaseTime = 4.5; // how long (in seconds) it should take 0.0 skilled soldier to stabilize the aim completely
                bestDecreaseTime = 1.5; // how long (in seconds) it should take 1.0 skilled soldier to stabilize the aim completely
                turningInfluence = 1.35; // importance of turning in algorithm, multiplier
            };
        };
    };
};

class Mode_SemiAuto;
class CfgWeapons {
    class LauncherCore;
    class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };
    //class Launcher_Base_F;
    class Launch_RPG7_F : Launcher_Base_F {
        class Single : Mode_SemiAuto {
            dispersion = 0.018;
            aiDispersionCoefX = 1.8;
            aiDispersionCoefY = 2.4;
            aiRateOfFire = 5;
            aiRateOfFireDispersion = 5;
            aiRateOfFireDistance = 450;
            maxRange = 450;
            maxRangeProbab = 1.8;
            midRange = 200;
            midRangeProbab = 2.5;
            minRange = 5;
            minRangeProbab = 0.6;
            recoil = "recoil_single_law";
            sounds[] = {"StandardSound"};
        };
    };
    class launch_RPG32_F : Launcher_Base_F {
        class Single : Mode_SemiAuto {
            aiDispersionCoefX = 1.7;
            aiDispersionCoefY = 2.2;
            aiRateOfFire = 7;
            aiRateOfFireDispersion = 3;
            aiRateOfFireDistance = 400;
            maxRange = 600;
            maxRangeProbab = 1.5;
            midRange = 40;
            midRangeProbab = 1.1;
            minRange = 10;
            minRangeProbab = 0.2;
            recoil = "recoil_single_law";
            sounds[] = {"StandardSound"};
        };
    };
    class rhs_weap_rpg7 : Launcher_Base_F {
        class Single : Mode_SemiAuto {
            dispersion = 0.018;
            aiDispersionCoefX = 1.8;
            aiDispersionCoefY = 2.4;
            aiRateOfFire = 5;
            aiRateOfFireDispersion = 5;
            aiRateOfFireDistance = 300;
            maxRange = 200;
            maxRangeProbab = 1.3;
            midRange = 100;
            midRangeProbab = 2.5;
            minRange = 10;
            minRangeProbab = 0.5;
        };
    };
};

class CfgAmmo {
    class RocketCore;
    class RocketBase;
    class R_PG7_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 4;

        //thrust = 470;
        effectsMissile = "missile3";
        whistleDist = 30;
    };
    class M_SPG9_HEAT : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 512";
        allowAgainstInfantry = 1;
    };
    class R_PG32V_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 22;
    };
    class R_MRAAWS_HEAT_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 512";
        allowAgainstInfantry = 1;
        cost = 42;
    };
    class rhs_rpg26_rocket;
    class rhs_rpg7v2_pg7vl : rhs_rpg26_rocket {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 51;
    };
    class rhs_rpg7v2_og7v : rhs_rpg7v2_pg7vl {
        allowAgainstInfantry = 1;
        cost = 5;
    };
    class rhs_rpg7v2_type63_airburst : rhs_rpg7v2_og7v {
        cost = 5;
    };
    class rhs_rpg7v2_tbg7v : rhs_rpg7v2_pg7vl {
        cost = 5;
    };
};
