class CfgAmmo
{   
    // Artillery Ammo
    class Sh_155mm_AMOS;
    class Smoke_120mm_AMOS_White;
    class F_40mm_White;
    class SubmunitionBase;
    class SmokeShellArty;


	class aphx_maaws_SMOKE: SmokeShellArty
	{
		model = "";
		timeToLive = 120;
		deflectionSlowDown = 0;
	};


    class rhs_ammo_m1_he : Sh_155mm_AMOS
	{
		cost = 100;
		artilleryLock = 1;
		hit = 250;
		indirectHit = 170;
		indirectHitRange = 38;
		timetolive = 220;
		class CamShakeExplode
		{
			power = "(105*0.2)*10";
			duration = "((round (105^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((30 + 105^0.5))";
		};
		class CamShakeHit
		{
			power = 105 * 10;
			duration = "((round (105^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(105^0.25)*10";
			duration = "((round (105^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((105^0.5))";
		};
	};
	class rhs_ammo_m314_ilum : SubmunitionBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = { "", 0, 1 };
		CraterEffects = "";
		whistleDist = 0;
		timeToLive = 100;
		aimAboveTarget[] = {300, 360, 400, 500, 640, 720, 800};
		aimAboveDefault = 3;

		submunitionAmmo[] = {"rhs_ammo_flare_m314",1};
	};
	class rhs_ammo_flare_M314: F_40mm_White
	{
		triggerTime					= 0;
		model						= "rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_r_m257_drogue";
		brightness					= 4000;
		lightColor[]				= {100, 100, 100, 100};
		timeToLive					= 120;
		intensity					= 40000;
		flareSize					= 60;
		flareMaxDistance			= 3000;
		affectedByWind				= 1;
	};

	class rhs_ammo_m60a2_smoke : Smoke_120mm_AMOS_White
	{
        submunitionAmmo = "aphx_maaws_SMOKE";
		submunitionConeType[] = {"poissondisc",8};
		submunitionConeAngle = 35;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects = "";
		soundHit[] = { "", 0, 1 };
		CraterEffects = "";
		whistleDist = 0;
	};

    class PipeBombBase;
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
        hit = 26;
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
		ACE_muzzleVelocities[] = { 500, 600, 700 };
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

    class rtg_25mm_hedp : rhs_ammo_12g_FRAG
    {
        ACE_bulletMass = 130.2176;
        AB_ballisticCoefficients[] = { 0.87};
        ACE_muzzleVelocities[] = {60 , 70, 80 };
        ACE_barrelLengths[] = {254.0, 393.7, 508.0 };
        typicalSpeed = 0;
        ACE_caliber = 25.12;
        hit = 30;
        indirectHit = 35;
		indirectHitRange = 10;
        triggerOnImpact	 = 1;
        explosive = 0.6;
        explosionTime = -1;
        fuseDistance = 35;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };

    class B_570x28_Ball;
    class rtg_57 : B_570x28_Ball {
        hit = 8;
    };

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

    class R_MRAAWS_HE_F;
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

    class rhs_rpg7v2_pg7vm;
    class rtg_rpg_heat : rhs_rpg7v2_pg7vm
    {
        hit = 150;
        indirectHit = 35;
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

    class rhs_rpg7v2_og7v;
    class rtg_rpg_hedp : rhs_rpg7v2_og7v
    {
        hit = 90;
        indirectHit = 45;
		indirectHitRange = 9;
    }
};
