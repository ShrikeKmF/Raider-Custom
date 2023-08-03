class CfgAmmo
{   
    class rhsusf_ammo_127x99_M33_Ball;
    class rtg_127x99 : rhsusf_ammo_127x99_M33_Ball {
        hit = 90;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        ACE_bulletMass = 49.2176;
        AB_ballisticCoefficients[] = { 0.692 };
        ACE_muzzleVelocities[] = { 1000, 1200, 1500 };
        ACE_barrelLengths[] = { 254.0, 393.7, 508.0 };
    }

    class B_556x45_Ball;
    class rtg_556x45 : B_556x45_Ball {
        hit = 10;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 0.684;
        AB_muzzleVelocities[] = { 820, 910, 1050 };
        AB_barrelLengths[] = { 280.0, 393.7, 508.0 };
        ACE_caliber = 5.69;
        ACE_bulletLength = 24.012;
        ACE_bulletMass = 5.2176;
        ACE_muzzleVelocities[] = { 820, 910, 1050 };
        ACE_barrelLengths[] = { 280.0, 393.7, 508.0 };
    };
	
    class B_50BW_Ball_F;
	class rtg_50bw : B_50BW_Ball_F {
        hit = 25;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };

    class ACE_762x51_Ball_M118LR;
    class rtg_nitro : ACE_762x51_Ball_M118LR {
        hit = 4000;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        indirectHit = 2000;
		indirectHitRange = 2;
        ACE_bulletMass = 90.2176;
        AB_ballisticCoefficients[] = { 0.8 };
        ACE_muzzleVelocities[] = { 2000, 3000, 4000 };
        ACE_barrelLengths[] = { 254.0, 393.7, 508.0 };
    };

    class rtg_762_nato : ACE_762x51_Ball_M118LR {
        hit = 19;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        ACE_bulletMass = 11.2176;
        AB_ballisticCoefficients[] = { 0.692 };
        ACE_muzzleVelocities[] = { 910, 1000, 1200 };
        ACE_barrelLengths[] = { 254.0, 393.7, 508.0 };
    };

    class B_545x39_Ball_F;
    class rtg_545 : B_545x39_Ball_F {
        hit = 9;
        ACE_muzzleVelocities[] = { 910, 1000, 1150 };
        ACE_barrelLengths[] = { 254.0, 393.7, 508.0 };
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    }

    class B_762x39_Ball_F;
    class rtg_762 : B_762x39_Ball_F {
        hit = 11;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        AB_muzzleVelocities[] = { 820, 910, 1050 };
        AB_barrelLengths[] = { 280.0, 393.7, 508.0 };
        ACE_muzzleVelocities[] = { 820, 910, 1050 };
        ACE_barrelLengths[] = { 280.0, 393.7, 508.0 };
    }

    class HLC_300Blackout_Ball;
    class rtg_300blk : HLC_300Blackout_Ball{
		hit = 12;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_bulletMass = 6.4176;
		AB_ballisticCoefficients[] = { 0.122 };
		ACE_muzzleVelocities[] = { 300, 400, 452 };
		ACE_barrelLengths[] = { 254.0, 393.7, 508.0 };
    };

    class B_580x42_Ball_F;
    class rtg_580 : B_580x42_Ball_F {
        hit = 9;
        ACE_muzzleVelocities[] = { 910, 1000, 1150 };
        ACE_barrelLengths[] = { 254.0, 393.7, 508.0 };
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };

    class ACE_9x19_Ball;
    class rtg_9mm : ACE_9x19_Ball {
        hit = 8;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };

    class B_45ACP_Ball;
    class rtg_45 : B_45ACP_Ball{
        hit = 12;
        ACE_muzzleVelocities[] = {200, 250, 300};
    };

    class rtg_40 : B_45ACP_Ball{
        hit = 10;
        ACE_muzzleVelocities[] = {220, 280, 320};
    };

    class RH_50_AE_Ball;
    class rtg_50_AE : RH_50_AE_Ball{
        hit = 14;
    };

    class rhs_ammo_12g_FRAG;
    class rtg_doomrounds : rhs_ammo_12g_FRAG
	{
		hit = 19;
		indirectHit = 2;
		indirectHitRange = 0.5;
        typicalSpeed = 450;
        caliber = 1.037;
        ACE_muzzleVelocities[] = {220, 280, 320};
	};

    class rtg_doomrounds_pump : rtg_doomrounds
	{
		hit = 28;
		indirectHit = 6;
		indirectHitRange = 1;
        typicalSpeed = 480;
        ACE_muzzleVelocities[] = {260, 300, 340};
	};
    
    class rhs_ammo_12g_00buckshot_pellet;
    class rtg_buckshot_sub : rhs_ammo_12g_00buckshot_pellet {
        hit = 8;
        typicalSpeed = 483.86;
        indirectHit = 0;
		indirectHitRange = 0;
        ACE_muzzleVelocities[] = {220, 280, 320};
    };

    class rhs_ammo_12g_00buckshot;
    class rtg_buckshot : rhs_ammo_12g_00buckshot {
        hit = 22;
        submunitionAmmo			= rtg_buckshot_sub;
        submunitionConeType[] = {"poissondisc", 9};
        submunitionConeAngle	= 0.98;
        typicalSpeed = 450;
        ACE_muzzleVelocities[] = {220, 280, 320};
    };

    class rtg_buckshot_sub_pump : rtg_buckshot_sub {
        hit = 17;
        typicalSpeed = 500.86;
        indirectHit = 0;
		indirectHitRange = 0;
        ACE_muzzleVelocities[] = {260, 300, 340};
    };
    class rtg_buckshot_pump : rtg_buckshot {
        hit = 40;
        submunitionAmmo			= rtg_buckshot_sub_pump;
        submunitionConeType[] = {"poissondisc", 9};
        submunitionConeAngle	= 0.99;
        typicalSpeed = 450;
        ACE_muzzleVelocities[] = {260, 300, 340};
    };

    class B_570x28_Ball;
    class rtg_57 : B_570x28_Ball {
        hit = 8;
    };

    class R_MRAAWS_HEAT_F;
    class rtg_heat_MRAAWS : R_MRAAWS_HEAT_F {
        hit = 380;
        indirectHit = 20;
		indirectHitRange = 4;
        airFriction = 0.05;
		sideAirFriction = 0;
		maxSpeed = 350;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
    };

    class R_MRAAWS_HE_F;
    class rtg_hedp_MRAAWS : R_MRAAWS_HE_F {
        hit = 220;
        indirectHit = 80;
		indirectHitRange = 10;
        airFriction = 0.05;
		sideAirFriction = 0;
		maxSpeed = 350;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
    };

    class rtg_heatg_MRAAWS : rtg_heat_MRAAWS {
        ace_frag_enabled = 1;
		ace_frag_classes[] = {"ace_frag_medium","ace_frag_medium_HD"};
		ace_frag_metal = 8000;
		ace_frag_charge = 2400;
		ace_frag_gurney_c = 2700;
		ace_frag_gurney_k = "1/2";
		manualControl = 0;
		maneuvrability = 33;
		effectsMissile = "missile2";
		hit = 420;
		indirectHit = 50;
		whistleDist = 4;
		airFriction = 0.085;
		sideAirFriction = 2;
		indirectHitRange = 4;
		explosive = 0.8;
		maxSpeed = 100;
		typicalSpeed = 80;
		thrustTime = 1.5;
		thrust = 45;
		timeToLive = 13;
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.0005;
			maxDeflection = 0.01;
			incDeflection = 0.0005;
			canVanillaLock = 0;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH","LIDAR","SARH","Optic","Thermal","GPS","SACLOS","MCLOS"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL","LOBL"};
			seekLastTargetPos = 1;
			seekerAngle = 70;
			seekerAccuracy = 1;
			seekerMinRange = 1;
			seekerMaxRange = 8000;
			defaultAttackProfile = "hellfire";
			attackProfiles[] = {"hellfire","hellfire_hi","hellfire_lo"};
		};
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
    };

    class SmokeShellArty;
	class aphx_maaws_SMOKE: SmokeShellArty
	{
		model = "";
		timeToLive = 120;
		deflectionSlowDown = 0;
	};
	class RocketBase;
    class rtg_smoke_MRAAWS : R_MRAAWS_HE_F {
        hit = 40;
        indirectHit = 30;
		indirectHitRange = 20;
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
};
