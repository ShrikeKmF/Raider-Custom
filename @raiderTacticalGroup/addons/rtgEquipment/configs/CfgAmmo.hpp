class CfgAmmo
{
    class rhsusf_40mm_white;
    class rtg_flare_ammo : rhsusf_40mm_white {
        initSpeed = 0;
    };

    class rhs_40mm_m715_green;
    class rtg_smoke_ammo : rhs_40mm_m715_green {
        initSpeed = 0;
    };

    class R_MRAAWS_HEAT_F;
    class rtg_heat_MRAAWS : R_MRAAWS_HEAT_F {
        hit = 220;
        indirectHit = 20;
		indirectHitRange = 4;
    };

    class R_MRAAWS_HE_F;
    class rtg_hedp_MRAAWS : R_MRAAWS_HE_F {
        hit = 220;
        indirectHit = 80;
		indirectHitRange = 10;
    };
    
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
	
	class rtg_50bw : B_556x45_Ball {
        hit = 25;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 0.684;
        AB_muzzleVelocities[] = { 820, 910, 1050 };
        AB_barrelLengths[] = { 280.0, 393.7, 508.0 };
        ACE_caliber = 5.69;
        ACE_bulletLength = 24.012;
        ACE_bulletMass = 21.2176;
		AB_ballisticCoefficients[] = { 0.292 };
        ACE_muzzleVelocities[] = { 700, 850, 950 };
        ACE_barrelLengths[] = { 280.0, 393.7, 508.0 };
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

    class FH_545x39_Ball;
    class rtg_545 : FH_545x39_Ball {
        hit = 9;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 0.684;
        AB_muzzleVelocities[] = { 820, 910, 1050 };
        AB_barrelLengths[] = { 280.0, 393.7, 508.0 };
        ACE_bulletLength = 24.012;
        ACE_bulletMass = 3.8176;
        ACE_muzzleVelocities[] = { 900, 980, 1000 };
        ACE_barrelLengths[] = { 280.0, 393.7, 508.0 };
    }

    class HLC_762x39_Tracer;
    class rtg_762 : HLC_762x39_Tracer {
        hit = 11;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 0.684;
        AB_muzzleVelocities[] = { 820, 910, 1050 };
        AB_barrelLengths[] = { 280.0, 393.7, 508.0 };
        ACE_bulletLength = 24.012;
        ACE_bulletMass = 4.5176;
        ACE_muzzleVelocities[] = { 820, 920, 990 };
        ACE_barrelLengths[] = { 280.0, 393.7, 508.0 };
    }

    class S_9x19_Ball;
    class rtg_9mm : S_9x19_Ball {
        hit = 8;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        ACE_bulletMass = 8.2176;
        AB_ballisticCoefficients[] = { 0.122 };
        ACE_muzzleVelocities[] = { 300, 400, 452 };
        ACE_barrelLengths[] = { 254.0, 393.7, 508.0 };
    };

    class HLC_300Blackout_Ball;
    class rtg_300blk : HLC_300Blackout_Ball{
		hit = 12;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_bulletMass = 6.4176;
		AB_ballisticCoefficients[] = { 0.122 };
		ACE_muzzleVelocities[] = { 300, 400, 452 };
		ACE_barrelLengths[] = { 254.0, 393.7, 508.0 };
    };

    class rhs_ammo_45ACP_MHP;
    class rtg_45 : rhs_ammo_45ACP_MHP{
        hit = 12;
        ACE_muzzleVelocities[] = {200, 250, 300};
    };

    class rtg_40 : rhs_ammo_45ACP_MHP{
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
		hit = 20;
		indirectHit = 2;
		indirectHitRange = 0.5;
        typicalSpeed = 450;
        ACE_muzzleVelocities[] = {220, 280, 320};
	};

    class rtg_doomrounds_pump : rtg_doomrounds
	{
		hit = 32;
		indirectHit = 6;
		indirectHitRange = 1;
        typicalSpeed = 480;
        ACE_muzzleVelocities[] = {260, 300, 340};
	};
    
    class rhs_ammo_12g_00buckshot_pellet;
    class rtg_buckshot_sub : rhs_ammo_12g_00buckshot_pellet {
        hit = 10;
        typicalSpeed = 483.86;
        indirectHit = 0;
		indirectHitRange = 0;
        ACE_muzzleVelocities[] = {220, 280, 320};
    };

    class rhs_ammo_12g_00buckshot;
    class rtg_buckshot : rhs_ammo_12g_00buckshot {
        hit = 22;
        submunitionAmmo			= rtg_buckshot_sub;
        submunitionConeAngle	= 0.98;
        typicalSpeed = 450;
        ACE_muzzleVelocities[] = {220, 280, 320};
    };

    class rtg_buckshot_sub_pump : rtg_buckshot_sub {
        hit = 25;
        typicalSpeed = 500.86;
        indirectHit = 0;
		indirectHitRange = 0;
        ACE_muzzleVelocities[] = {260, 300, 340};
    };
    class rtg_buckshot_pump : rtg_buckshot {
        hit = 40;
        submunitionAmmo			= rtg_buckshot_sub_pump;
        submunitionConeAngle	= 0.99;
        typicalSpeed = 450;
        ACE_muzzleVelocities[] = {260, 300, 340};
    };

    class B_570x28_Ball;
    class rtg_57 : B_570x28_Ball {
        hit = 8;
    };
};
