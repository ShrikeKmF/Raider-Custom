//
// Shotgun Ammo Types
//
// 12g
// Shotgun ammo
// Non Explosive
class rtg_slug : rhs_ammo_12g_slug
{
    hit = 40;
    typicalSpeed = 480;
    ACE_muzzleVelocities[] = {260, 300, 340};
};


// 12g
// Shotgun ammo
// Explosive
class rtg_doomrounds : rhs_ammo_12g_frag
{
    hit = 28;
    indirectHit = 8;
    indirectHitRange = 3.1;
    typicalSpeed = 480;
    ACE_muzzleVelocities[] = {260, 300, 340};
};
    
// 12g
// Shotgun Sub ammo
// Non Explosive
class rtg_buckshot_sub : rhs_ammo_12g_00buckshot_pellet {
    hit = 8.5;
    typicalSpeed = 483.86;
    indirectHit = 0;
    indirectHitRange = 0;
    ACE_muzzleVelocities[] = {220, 280, 320};
};

// 12g
// Shotgun ammo
// Non Explosive
class rtg_buckshot : rhs_ammo_12g_00buckshot {
    hit = 1;
    submunitionAmmo			= rtg_buckshot_sub;
    submunitionConeType[] = {"poissondisc", 9};
    submunitionConeAngle	= 0.98;
    typicalSpeed = 450;
    ACE_muzzleVelocities[] = {220, 280, 320};
};

// 14g
// Shotgun Sub ammo
// Non Explosive
class rtg_buckshot_sub_14g : rtg_buckshot_sub {
    hit = 14;
    typicalSpeed = 500.86;
    indirectHit = 0;
    indirectHitRange = 0;
    ACE_muzzleVelocities[] = {260, 300, 340};
};

// 14g
// Shotgun ammo
// Non Explosive
class rtg_buckshot_pump_14g : rtg_buckshot
{
    hit = 35;
    submunitionAmmo			= rtg_buckshot_sub_14g;
    submunitionConeType[] = {"poissondisc", 6};
    submunitionConeAngle	= 0.99;
    typicalSpeed = 450;
    ACE_muzzleVelocities[] = {260, 300, 340};
}