class CfgAmmo
{   
    //
    // Includes
    //
    class ACE_762x51_Ball_M118LR;
    class B_556x45_Ball;
    class B_50BW_Ball_F;
    class Sh_155mm_AMOS;
    class Smoke_120mm_AMOS_White;
    class F_40mm_White;
    class SubmunitionBase;
    class SmokeShellArty;
    class PipeBombBase;
    class rhsusf_ammo_127x99_M33_Ball;
    class HLC_300Blackout_Ball;
    class ACE_9x19_Ball;
    class B_45ACP_Ball;
    class RH_50_AE_Ball;
    class RH_357mag_ball;
    class RH_44mag_ball;
    class rhs_ammo_12g_FRAG;
    class rhs_ammo_12g_slug;
    class rhs_ammo_12g_00buckshot_pellet;
    class rhs_ammo_12g_00buckshot;
    class B_570x28_Ball;
    class R_MRAAWS_HE_F;
    class rhs_rpg7v2_pg7vm;
    class rhs_rpg7v2_og7v;
    class SmokeShell;
    class B_30mm_HE;
    class B_20mm;
    class rhs_ammo_762x51_M80_Ball;

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
        ACE_caliber = 5.7;
        ACE_bulletLength = 44.7;
        ACE_bulletMass = 5.2176;
        ACE_ballisticCoefficients[]={0.353};
        ACE_muzzleVelocities[] = {819, 910, 991};
        ACE_barrelLengths[] = {450, 500, 550};
        
        // Arma 3 Bullet Config
        hit = 11;
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
        ACE_bulletMass = 26.64;
        ACE_ballisticCoefficients[]={0.211};
        ACE_muzzleVelocities[] = {532, 591, 650};
        ACE_barrelLengths[] = {450, 500, 550};
        
        // Arma 3 Bullet Config
        hit = 24.4;
    };

    // .300 Blackout
    // Rifle ammo
    // Non Explosive
    class rtg_300blk : rtg_50bw
    {
        RTG_AMMO_DEFAULTS

        // Ace 3 Bullet Config
        ACE_caliber = 7.823;
        ACE_bulletLength = 34.7;
        ACE_bulletMass = 14.5256;
        ACE_ballisticCoefficients[]={0.268};
        ACE_muzzleVelocities[] = {448, 509, 555};
        ACE_barrelLengths[] = {450, 500, 550};
        
        // Arma 3 Bullet Config
        hit = 13.8;
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
        ACE_ballisticCoefficients[]={0.542};
        ACE_muzzleVelocities[] = {886, 985, 1086};
        ACE_barrelLengths[] = {450, 500, 550};
        
        // Arma 3 Bullet Config
        hit = 19.2;
    };

    // 7.62 NATO
    // Battle Rifle AP ammo
    // Non Explosive
    class rtg_762_apds_nato : rtg_762_nato 
    {
        RTG_AMMO_DEFAULTS

        // Ace 3 Bullet Config
        ACE_caliber = 5.56;
        ACE_bulletLength = 42.2;
        ACE_bulletMass = 9.8;
        ACE_ballisticCoefficients[]={0.65};
        ACE_muzzleVelocities[] = {1200, 1450, 1605};
        ACE_barrelLengths[] = {450, 500, 550};
        
        // Arma 3 Bullet Config
        hit = 12.2;
        caliber = 3.5;
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
        ACE_ballisticCoefficients[]={0.500};
        ACE_muzzleVelocities[] = {819, 910, 1010};
        ACE_barrelLengths[] = {360, 400, 440};
        
        // Arma 3 Bullet Config
        hit = 14.8;
    };

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

    // 40mm
    // GL ammo
    class rhs_g_gdm40;
    class rtg_40mm_impact : rhs_g_gdm40
    {
        hit = 0;
        indirectHit = 0;
		indirectHitRange = 0;
        ypicalSpeed = 80;
        ACE_muzzleVelocities[] = {80, 80, 80};
    };

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
        hit = 150;
        indirectHit = 40;
		indirectHitRange = 4;
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

    

    // 
    // Vehicle ammo Types
    //

	class ej_B_20mm_AP: B_20mm
	{
		hit = 61.242485;
		indirectHit = 20;
		indirectHitRange = 3;
		visibleFire = 28;
		audibleFire = 28;
		visibleFireTime = 3;
		cost = 25;
		airLock = 1;
		explosive = 0.3;
		
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.000633942;
		caliber = 2.33;
	};
    
	class B_30x113mm_M789_HEDP: B_30mm_HE
	{
		hit = 82.39158;
		indirectHit = 24;
		indirectHitRange = 1;
		
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		explosive = 0.3;
		airFriction = -0.0010785541;
		caliber = 1.242236;
		allowAgainstInfantry = 1;
	};

    class rhs_ammo_762x51_M80A1EPR_Ball: rhs_ammo_762x51_M80_Ball
	{
        
		hit = 10.5;
		caliber = 0.55;
		airFriction = -0.0007114;
		typicalSpeed = 930;
	};
    

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


    class rtg_127x99 : rhsusf_ammo_127x99_M33_Ball {
        hit = 90;
        
        ACE_bulletMass = 49.2176;
        AB_ballisticCoefficients[] = { 0.692 };
        ACE_muzzleVelocities[] = { 1000, 1200, 1500 };
        ACE_barrelLengths[] = { 254.0, 393.7, 508.0 };
    }

    class Chemlight_base: SmokeShell
	{
		timeToLive = 1200;
		deflecting = 5;
		explosionTime = 1;
		grenadeFireSound[] = {};
		grenadeBurningSound[] = {};
		aiAmmoUsageFlags = "2 + 1";
	};
};
