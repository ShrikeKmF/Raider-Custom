//
// Rocket Ammo Types
//

class R_MRAAWS_HEAT_F;
class rtg_heat_MRAAWS : R_MRAAWS_HEAT_F {
    hit = 380;
    indirectHit = 35;
	indirectHitRange = 5;
    airFriction = 0.05;
	sideAirFriction = 0;
	maxSpeed = 350;
	initTime = 0;
	thrustTime = 0.1;
	thrust = 0.1;
};

class rtg_hedp_MRAAWS : R_MRAAWS_HE_F {
    hit = 160;
    indirectHit = 75;
	indirectHitRange = 12;
    airFriction = 0.05;
	sideAirFriction = 0;
	maxSpeed = 350;
	initTime = 0;
	thrustTime = 0.1;
	thrust = 0.1;
};

class rtg_smoke_MRAAWS : R_MRAAWS_HE_F {
    hit = 35;
    indirectHit = 30;
	indirectHitRange = 8;
    explosionEffects = "RHS_GDM40Effect";
	submunitionAmmo = "aphx_maaws_SMOKE";
	submunitionDirectionType = "SubmunitionModelDirection";
	submunitionConeType[] = {"randomupcone",4};
	submunitionConeAngle = 120;
	submunitionConeAngleHorizontal = 30;
	triggerDistance = 40;
	deleteParentWhenTriggered = 0;
	submunitionInitialOffset[] = {0,2,4};
	submunitionInitSpeed = 0;
	triggerSpeedCoef = 0.25;
	submunitionParentSpeedCoef = 0.25;
	simulation = "shotRocket";
};

class rtg_rpg_heat : rhs_rpg7v2_pg7vm
{
    hit = 60;
    indirectHit = 19;
	indirectHitRange = 6.1;
};

class rtg_rpg_hedp : rtg_rpg_heat
{
    hit = 40;
    indirectHit = 40;
	indirectHitRange = 12;
    submunitionAmmo = "";
};

class rtg_rpg_smoke : rtg_rpg_heat
{
    hit = 28;
    indirectHit = 22;
	indirectHitRange = 6;
    explosionEffects = "RHS_GDM40Effect";
	submunitionAmmo = "aphx_maaws_SMOKE";
	submunitionDirectionType = "SubmunitionModelDirection";
	submunitionConeType[] = {"randomupcone",4};
	submunitionConeAngle = 120;
	submunitionConeAngleHorizontal = 30;
	triggerDistance = 40;
    submunitionInitialOffset[] = {0,2,4};
	submunitionInitSpeed = 0;
	triggerSpeedCoef = 0.25;
    simulation = "shotRocket";
};

// LAT
class rhs_ammo_m72a7_rocket;
class rtg_lat : rhs_ammo_m72a7_rocket
{
    submunitionAmmo = "rtg_lat_penetrator";
	submunitionDirectionType = "SubmunitionModelDirection";
	submunitionInitialOffset[] = {0,0,-0.1};
	submunitionParentSpeedCoef = 0;
	submunitionInitSpeed = 1053;
    InitSpeed = 320;
	triggerOnImpact = 1;
	deleteParentWhenTriggered = 0;
	hit = 60;
	indirectHit = 19;
	indirectHitRange = 6.1;
	cost = 190;
	explosive = 0.65;
};
class rhs_ammo_M136_penetrator;
class rtg_lat_penetrator: rhs_ammo_M136_penetrator
{
	hit = 60;
	caliber = 6.6;
};

// MAT
class rtg_mat : rtg_lat
{
    submunitionAmmo = "rtg_mat_penetrator";
	submunitionDirectionType = "SubmunitionModelDirection";
	submunitionInitialOffset[] = {0,0,-0.1};
	submunitionParentSpeedCoef = 0;
	submunitionInitSpeed = 1053;
	triggerOnImpact = 1;
    InitSpeed = 280;
	deleteParentWhenTriggered = 0;
	hit = 310;
	indirectHit = 31;
	indirectHitRange = 6.1;
	cost = 210;
	explosive = 0.65;
};
class rtg_mat_penetrator: rtg_lat_penetrator
{
	hit = 310;
	caliber = 8.8;
};

// ER
class rtg_mat_er : rtg_lat
{
    submunitionAmmo = "rtg_mat_er_penetrator";
	submunitionDirectionType = "SubmunitionModelDirection";
	submunitionInitialOffset[] = {0,0,-0.1};
	submunitionParentSpeedCoef = 0;
	submunitionInitSpeed = 1500;
    InitSpeed = 400;
	triggerOnImpact = 1;
	deleteParentWhenTriggered = 0;
	hit = 105;
	indirectHit = 31;
	indirectHitRange = 6.1;
	cost = 210;
	explosive = 0.65;
};
class rtg_mat_er_penetrator: rtg_lat_penetrator
{
	hit = 105;
	caliber = 8.8;
};