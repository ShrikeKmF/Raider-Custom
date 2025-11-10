//
// Equipment
//

class rhsusf_m112_ammo: PipeBombBase
{
    hit = 2000;
    indirectHit = 2000;
    indirectHitRange = 9;
    model = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x1_e";
    mineModelDisabled = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x1_d";
    soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_5",3.1622777,1,1500};
    defaultMagazine = "rhsusf_m112_mag";
    ExplosionEffects = "MineNondirectionalExplosionSmall";
    CraterEffects = "MineNondirectionalCraterSmall";
    whistleDist = 32;
    mineInconspicuousness = 5;
    mineTrigger = "RemoteTrigger";
};
class rhsusf_m112_ammo_scripted: rhsusf_m112_ammo{};

class Chemlight_base: SmokeShell
{
    timeToLive = 1200;
    deflecting = 5;
    explosionTime = 1;
    grenadeFireSound[] = {};
    grenadeBurningSound[] = {};
    aiAmmoUsageFlags = "2 + 1";
};

// Gau-21
class B_127x99_Ball_Tracer_Yellow;
class RTG_127x99_SLAP : B_127x99_Ball_Tracer_Yellow
{
    hit = 50;
    caliber = 4.3;
    model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
};

// TOW 3
class rhs_ammo_TOW2A_AT;
class RTG_TOW3A: rhs_ammo_TOW2A_AT
{

}

class rhs_ammo_TOW2_BB;
class RTG_TOW3BB: rhs_ammo_TOW2_BB
{

}