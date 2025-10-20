//
// Pistol Ammo Types
//

// 9mm
// Pistol ammo
// Non Explosive
class rtg_9mm : ACE_9x19_Ball 
{
    RTG_PISTOL_AMMO_DEFAULTS

    // Ace 3 Bullet Config
    ACE_caliber = 9.017;
    ACE_bulletLength = 15.494;
    ACE_bulletMass = 9.1269;
    ACE_ballisticCoefficients[]={0.205};
    ACE_muzzleVelocities[] = {397, 441, 471};
    ACE_barrelLengths[] = {135, 150, 165};
    
    // Arma 3 Bullet Config
    hit = 7.5;
};

// .45 ACP
// Pistol ammo
// Non Explosive
class rtg_45 : rtg_9mm
{
    RTG_PISTOL_AMMO_DEFAULTS

    // Ace 3 Bullet Config
    ACE_caliber = 11.481;
    ACE_bulletLength = 17.272;
    ACE_bulletMass = 14.904;
    ACE_ballisticCoefficients[]={0.175};
    ACE_muzzleVelocities[] = {279, 310, 332};
    ACE_barrelLengths[] = {135, 150, 165};
    
    // Arma 3 Bullet Config
    hit = 10.5;
};

// .40
// Pistol ammo
// Non Explosive
class rtg_40 : rtg_9mm
{
    RTG_PISTOL_AMMO_DEFAULTS

    // Ace 3 Bullet Config
    ACE_caliber = 10.16;
    ACE_bulletLength = 11.354;
    ACE_bulletMass = 8.748;
    ACE_ballisticCoefficients[]={0.195};
    ACE_muzzleVelocities[] = {297, 330, 351};
    ACE_barrelLengths[] = {135, 150, 165};
    
    // Arma 3 Bullet Config
    hit = 9;
};

// .50
// Pistol ammo
// Non Explosive
class rtg_50_AE : rtg_9mm
{
    RTG_PISTOL_AMMO_DEFAULTS

    // Ace 3 Bullet Config
    ACE_caliber = 12.7;
    ACE_bulletLength = 28.194;
    ACE_bulletMass = 21.06;
    ACE_ballisticCoefficients[]={0.125};
    ACE_muzzleVelocities[] = {414, 460, 491};
    ACE_barrelLengths[] = {135, 150, 165};
    
    // Arma 3 Bullet Config
    hit = 17.8;
};

// .357
// Pistol ammo
// Non Explosive
class rtg_357mag : rtg_9mm
{
    RTG_PISTOL_AMMO_DEFAULTS

    // Ace 3 Bullet Config
    ACE_caliber = 9.068;
    ACE_bulletLength = 13.741;
    ACE_bulletMass = 8.1;
    ACE_ballisticCoefficients[]={0.155};
    ACE_muzzleVelocities[] = {397, 441, 462};
    ACE_barrelLengths[] = {135, 150, 165};
    
    // Arma 3 Bullet Config
    hit = 12;
}

// .44
// Pistol ammo
// Non Explosive
class rtg_44mag : rtg_9mm
{
    RTG_PISTOL_AMMO_DEFAULTS

    // Ace 3 Bullet Config
    ACE_caliber = 10.897;
    ACE_bulletLength = 20.422;
    ACE_bulletMass = 12.96;
    ACE_ballisticCoefficients[]={0.135};
    ACE_muzzleVelocities[] = {378, 420, 448};
    ACE_barrelLengths[] = {135, 150, 165};
    
    // Arma 3 Bullet Config
    hit = 16.5;
}

// 5.7mm
// Pistol ammo
// Non Explosive
class rtg_57 : rtg_9mm {
RTG_PISTOL_AMMO_DEFAULTS

    // Ace 3 Bullet Config
    ACE_caliber = 5.78;
    ACE_bulletLength = 29.173;
    ACE_bulletMass = 1.8144;
    ACE_ballisticCoefficients[]={0.335};
    ACE_muzzleVelocities[] = {581, 625, 668};
    ACE_barrelLengths[] = {135, 150, 165};
    
    // Arma 3 Bullet Config
    hit = 6.5;
};
