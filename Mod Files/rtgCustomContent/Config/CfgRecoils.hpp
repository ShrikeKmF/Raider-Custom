class cfgRecoils
{
	// https://community.bistudio.com/wiki/Arma_3:_CfgRecoils
	/*
		would you like your weapon to kick more to the right? Increase Horizontal Axis Position value of muzzleOuter.
		would you like your weapon to kick more upwards? Increase Vertical Axis Position value of muzzleOuter.
		would you like your weapon to jump left and right more randomly? Increase Horizontal Magnitude value of muzzleOuter.
		would you like your weapon to jump up and down more randomly? Increase Vertical Magnitude value of muzzleOuter.
		would you like your weapon to climb up more? Increase permanent.
		would you like your weapon to shake more in your hands? Increase temporary.
		would you like your weapon to kick back more? Increase kickBack.
	*/

	/* 
		Strength Calculation
		Use the calibre and the Velocity to figure out the recoil

		bullpup = -0.02

		5.56 = 0.4 ± 0.05
		50bw = 0.998 ± 0.111
		300blk = 0.565 ± 0.063
		7.62 = 0.785 ± 0.087
		.277 = 0.605 ± 0.067
		9mm = 0.307 ± 0.034
		.45 = 0.43 ± 0.048
		.40 = 0.368 ± 0.041
		.50 = 0.728 ± 0.081
		5.7x28mm = 0.266 ± 0.03

		RTG_RECOIL_SETUP(name, leftRightPercentage, upDownPercentage, strength, shake)
*/

	class recoil_default;

	#include "weapons/recoils/ak_family.h"
	#include "weapons/recoils/aug.h"
	#include "weapons/recoils/extra.h"
	#include "weapons/recoils/f2000.h"
	#include "weapons/recoils/fn_mag.h"
	#include "weapons/recoils/g36.h"
	#include "weapons/recoils/grot.h"
	#include "weapons/recoils/hk416.h"
	#include "weapons/recoils/hk417.h"
	#include "weapons/recoils/l85A2.h"
	#include "weapons/recoils/m4_family.h"
	#include "weapons/recoils/m14.h"
	#include "weapons/recoils/m249.h"
	#include "weapons/recoils/m416.h"
	#include "weapons/recoils/mcx.h"
	#include "weapons/recoils/mp5.h"
	#include "weapons/recoils/ngsw.h"
	#include "weapons/recoils/p90.h"
	#include "weapons/recoils/viking.h"


// 5.56mm
	// Rifle 
	class rtg_556_rifle : recoil_default
	{
		muzzleOuter[] = {0.3,0.8,0.4,0.2};
		kickBack[] = {0.02,0.05};
		permanent = 0.005;
		temporary = 0.005;
	};

	// Carbine 
	class rtg_556_carbine: recoil_default
	{
		muzzleOuter[] = {0.3,0.8,0.4,0.3};
		kickBack[] = {0.02,0.05};
		permanent = 0.005;
		temporary = 0.005;
	};

	// PDW
	class rtg_556_pdw: recoil_default
	{
		muzzleOuter[] = {0.3,1.0,0.5,0.4};
		kickBack[] = {0.03,0.05};
		permanent = 0.005;
		temporary = 0.005;
	};

	// LMG
	class rtg_556_lmg: recoil_default
	{
		muzzleOuter[] = {0.3,0.8,0.5,0.4};
		kickBack[] = {0.03,0.05};
		permanent = 0.005;
		temporary = 0.005;
	};

	// MMG
	class rtg_556_mmg: recoil_default
	{
		muzzleOuter[] = {0.3,0.7,0.3,0.3};
		kickBack[] = {0.02,0.05};
		permanent = 0.005;
		temporary = 0.005;
	};
// .300 BLk 
	// Rifle 
	class rtg_300_rifle : recoil_default
	{
		muzzleOuter[] = {0.35,0.85,0.5,0.2};
		kickBack[] = {0.025,0.06};
		permanent = 0.005;
		temporary = 0.005;
	};

	// Carbine 
	class rtg_300_carbine: recoil_default
	{
		muzzleOuter[] = {0.35,0.85,0.55,0.3};
		kickBack[] = {0.025,0.06};
		permanent = 0.005;
		temporary = 0.005;
	};

	// PDW
	class rtg_300_pdw: recoil_default
	{
		muzzleOuter[] = {0.35,1.04,0.6,0.4};
		kickBack[] = {0.035,0.06};
		permanent = 0.005;
		temporary = 0.006;
	};

	// LMG
	class rtg_300_lmg: recoil_default
	{
		muzzleOuter[] = {0.35,0.85,0.6,0.4};
		kickBack[] = {0.035,0.06};
		permanent = 0.005;
		temporary = 0.006;
	};

	// MMG
	class rtg_300_mmg: recoil_default
	{
		muzzleOuter[] = {0.35,0.75,0.35,0.3};
		kickBack[] = {0.025,0.06};
		permanent = 0.005;
		temporary = 0.005;
	};
// 7.62 Nato 
	// Rifle 
	class rtg_762n_rifle : recoil_default
	{
		muzzleOuter[] = {0.3,1.0,0.3,0.65};
		kickBack[] = {0.03,0.06};
		permanent = 0.01;
		temporary = 0.010;
	};

	// Carbine 
	class rtg_762n_carbine: recoil_default
	{
		muzzleOuter[] = {0.3,1.1,0.4,0.75};
		kickBack[] = {0.03,0.07};
		permanent = 0.01;
		temporary = 0.011;
	};

	// PDW
	class rtg_762n_pdw: recoil_default
	{
		muzzleOuter[] = {0.4,1.2,0.5,0.85};
		kickBack[] = {0.03,0.08};
		permanent = 0.01;
		temporary = 0.012;
	};

	// LMG
	class rtg_762n_lmg: recoil_default
	{
		muzzleOuter[] = {0.3,1.1,0.4,0.75};
		kickBack[] = {0.03,0.07};
		permanent = 0.01;
		temporary = 0.012;
	};

	// MMG
	class rtg_762n_mmg: recoil_default
	{
		muzzleOuter[] = {0.3,1.0,0.3,0.65};
		kickBack[] = {0.03,0.06};
		permanent = 0.01;
		temporary = 0.010;
	};
// 6.8 Fury 
	// Rifle 
	class rtg_68_rifle : recoil_default
	{
		muzzleOuter[] = {0.3, 1.1, 0.3, 0.65};
		kickBack[] = {0.03, 0.06};
		permanent = 0.01;
		temporary = 0.010;
	};

	// Carbine 
	class rtg_68_carbine: recoil_default
	{
		muzzleOuter[] = {0.3, 1.21, 0.4, 0.75};
		kickBack[] = {0.03, 0.07};
		permanent = 0.01;
		temporary = 0.011;
	};

	// MMG
	class rtg_68_mmg: recoil_default
	{
		muzzleOuter[] = {0.3, 1.1, 0.3, 0.65};
		kickBack[] = {0.03, 0.06};
		permanent = 0.01;
		temporary = 0.010;
	};

// .50BW
	class rtg_50bw_rifle : recoil_default
	{
		muzzleOuter[] = {0.3, 1.0, 0.5, 0.4};
		kickBack[] = {0.03, 0.045};
		permanent = 0.1;
		temporary = 0.05;
	}
// 9mm
	class rtg_9mm_primary : recoil_default
	{
		muzzleOuter[] = {0.1, 0.4, 0.2, 0.2};
		kickBack[] = {0.01, 0.02};
		permanent = 0.002;
		temporary = 0.01;
	}
	
// .50 AE 
	class rtg_50ae_primary: recoil_default
	{
		muzzleOuter[] = {0.2, 0.6, 0.2, 0.3};
		kickBack[] = {0.02, 0.03};
		permanent = 0.007;
		temporary = 0.0095;
	};

// 7.62 Rus 
	// Rifle 
	class rtg_762_rifle : recoil_default
	{
		muzzleOuter[] = {0.35,0.85,0.5,0.2};
		kickBack[] = {0.025,0.06};
		permanent = 0.005;
		temporary = 0.005;
	};

	// Carbine 
	class rtg_762_carbine: recoil_default
	{
		muzzleOuter[] = {0.35,0.85,0.55,0.3};
		kickBack[] = {0.025,0.06};
		permanent = 0.005;
		temporary = 0.005;
	};

	// PDW
	class rtg_762_pdw: recoil_default
	{
		muzzleOuter[] = {0.35,1.04,0.6,0.4};
		kickBack[] = {0.035,0.06};
		permanent = 0.005;
		temporary = 0.006;
	};

	// LMG
	class rtg_762_lmg: recoil_default
	{
		muzzleOuter[] = {0.35,0.85,0.6,0.4};
		kickBack[] = {0.035,0.06};
		permanent = 0.005;
		temporary = 0.006;
	};
// 5.45
	// Rifle 
	class rtg_545_rifle : recoil_default
	{
		muzzleOuter[] = {0.3,0.8,0.4,0.2};
		kickBack[] = {0.02,0.05};
		permanent = 0.005;
		temporary = 0.005;
	};

	// Carbine 
	class rtg_545_carbine: recoil_default
	{
		muzzleOuter[] = {0.3,0.8,0.4,0.3};
		kickBack[] = {0.02,0.05};
		permanent = 0.004;
		temporary = 0.005;
	};

	// PDW
	class rtg_545_pdw: recoil_default
	{
		muzzleOuter[] = {0.3,1.0,0.5,0.4};
		kickBack[] = {0.03,0.05};
		permanent = 0.005;
		temporary = 0.005;
	};

	// LMG
	class rtg_545_lmg: recoil_default
	{
		muzzleOuter[] = {0.3,0.8,0.5,0.4};
		kickBack[] = {0.03,0.05};
		permanent = 0.004;
		temporary = 0.005;
	};
// Special
	class 700Nitro : recoil_default
    {
        muzzleOuter[]	= { 22.0,  28.0,  6,  0.2 };
        kickBack[]	= { 0.03, 0.12 };
        permanent	= 0.1;
        temporary	= 0.01;
    };
};
	
	