//
// Rifle Ammo Types
//

// 5.56mm
// Rifle ammo
// Non Explosive
class rtg_556x45 : B_556x45_Ball 
{
	RTG_AMMO_DEFAULTS

	// Ace 3 Bullet Config
	ACE_caliber = 5.7; // Bullet Width
	ACE_bulletLength = 44.7; // Bullet Length
	ACE_bulletMass = 4.0; // Mass of Round
	ACE_ballisticCoefficients[]={0.353}; // Friction
	ACE_muzzleVelocities[] = {830, 850, 870}; // Speed per Length
	ACE_barrelLengths[] = {450, 500, 550};
	
	// Arma 3 Bullet Config
	hit = 9; // Base Damage
	calibre = 0.8; // Pen Multiplyer
	typicalSpeed = 850; // Base Speed

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
class rtg_300blk : B_556x45_Ball
{
	RTG_AMMO_DEFAULTS

	// Ace 3 Bullet Config
	ACE_caliber = 7.823;
	ACE_bulletLength = 34.7;
	ACE_bulletMass = 14.5256;
	ACE_ballisticCoefficients[]={0.268};
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
class rtg_762_nato : ACE_762x51_Ball_M118LR 
{
	RTG_AMMO_DEFAULTS

	// Ace 3 Bullet Config
	ACE_caliber = 7.823;
	ACE_bulletLength = 51.2;
	ACE_bulletMass = 11.2176;
	ACE_ballisticCoefficients[]={0.2};
	ACE_muzzleVelocities[] = {920};
	ACE_barrelLengths[] = {500};
	
	// Arma 3 Bullet Config
	hit = 13; // Base Damage
	calibre = 1.8; // Pen Multiplyer
	typicalSpeed = 920; // Base Speed

};

// .277 Fury
// Battle Rifle ammo
// Non Explosive
class rtg_277 : rtg_762_nato 
{
	RTG_AMMO_DEFAULTS

	// Ace 3 Bullet Config
	ACE_caliber = 7.06;
	ACE_bulletLength = 51.2;
	ACE_bulletMass = 9.2176;
	ACE_ballisticCoefficients[]={0.243};
	ACE_muzzleVelocities[] = {880};
	ACE_barrelLengths[] = {304};
	
	// Arma 3 Bullet Config
	hit = 10; // Base Damage
	calibre = 1.2; // Pen Multiplyer
	typicalSpeed = 880; // Base Speed

};

// .338 Lupua Magnum
// MMG ammo
// Non Explosive
class rtg_338 : rtg_762_nato 
{
	RTG_AMMO_DEFAULTS

	// Ace 3 Bullet Config
	ACE_caliber = 7.06;
	ACE_bulletLength = 51.2;
	ACE_bulletMass = 9.2176;
	ACE_ballisticCoefficients[]={0.243};
	ACE_muzzleVelocities[] = {880};
	ACE_barrelLengths[] = {304};
	
	// Arma 3 Bullet Config
	hit = 10; // Base Damage
	calibre = 1.2; // Pen Multiplyer
	typicalSpeed = 880; // Base Speed

};