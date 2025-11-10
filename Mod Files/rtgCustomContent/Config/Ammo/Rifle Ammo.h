//
// Rifle Ammo Types
//

// 5.56mm
// Rifle ammo
// Non Explosive
class JCA_B_556x45_Ball_Mk318;
class rtg_556x45 : JCA_B_556x45_Ball_Mk318 
{
	RTG_AMMO_DEFAULTS
    calibre = 0.8; // Pen Multiplyer
};

// 6.5 Caseless
// Rifle ammo
// Non Explosive
class rtg_65x35 : B_65x39_Caseless 
{
	RTG_AMMO_DEFAULTS

	// Ace 3 Bullet Config
	ACE_caliber = 6.5; // Bullet Width
	ACE_bulletLength = 35.1; // Bullet Length
	ACE_bulletMass = 4.0; // Mass of Round
	ACE_ballisticCoefficients[]={0.263}; // Friction
	ACE_muzzleVelocities[] = {780, 800, 820}; // Speed per Length
	ACE_barrelLengths[] = {450, 500, 550};
	
	// Arma 3 Bullet Config
	hit = 9.2; // Base Damage
	calibre = 1.2; // Pen Multiplyer
	typicalSpeed = 800; // Base Speed
	airFriction = -0.00077363; // Friction non Ace

};

// .50 Beowolf
// Battle Rifle ammo
// Non Explosive
class rtg_50bw : B_50BW_Ball_F 
{
	RTG_AMMO_DEFAULTS

	// Ace 3 Bullet Config
	ACE_caliber = 12.979;
	ACE_bulletLength = 44.7;
	ACE_bulletMass = 21.64;
	ACE_ballisticCoefficients[]={0.211};
	ACE_muzzleVelocities[] = {550};
	ACE_barrelLengths[] = {304.8};
	
	// Arma 3 Bullet Config
	hit = 22; // Base Damage
	calibre = 4.2; // Pen Multiplyer
	typicalSpeed = 550; // Base Speed
	airFriction = -0.002098; // Friction non Ace
};

// .300 Blackout
// Rifle ammo
// Non Explosive
class rtg_300blk : JCA_B_556x45_Ball_Mk318
{
	RTG_AMMO_DEFAULTS

	// Ace 3 Bullet Config
	ACE_bulletMass = 14.5256;
	ACE_muzzleVelocities[] = {330};
	ACE_barrelLengths[] = {304};
	
	// Arma 3 Bullet Config
	hit = 13; // Base Damage
	calibre = 4.2; // Pen Multiplyer
	typicalSpeed = 330; // Base Speed

};

// 7.62 NATO
// Battle Rifle ammo
// Non Explosive
class JCA_B_762x51_M993AP;
class rtg_762_nato : JCA_B_762x51_M993AP 
{
	RTG_AMMO_DEFAULTS
};

// .277 Fury
// Battle Rifle ammo
// Non Explosive
class rtg_277 : JCA_B_762x51_M993AP 
{
	RTG_AMMO_DEFAULTS

	ACE_caliber = 7.06;
	ACE_bulletLength = 51.2;
	ACE_bulletMass = 9.2176;
	calibre = 1.2; // Pen Multiplyer

};

// .338 NM
// MMG ammo
// Non Explosive
class B_338_NM_Ball;
class rtg_338 : B_338_NM_Ball 
{
	RTG_AMMO_DEFAULTS

	// Ace 3 Bullet Config
	ACE_bulletMass = 21.8;
	ACE_muzzleVelocities[] = {800};
	ACE_barrelLengths[] = {304};
	
	// Arma 3 Bullet Config
	hit = 10; // Base Damage
	calibre = 2.0; // Pen Multiplyer
	typicalSpeed = 800; // Base Speed

};