class CfgWeaponHandling
{
	// https://community.bistudio.com/wiki/Arma_3:_CfgRecoils
	class Recoil
	{
		kickVisual	= 0.25;	// multiplier for extra camera-only movement for weapon kickback
		impulseCoef	= 2.0;	// common coefficient for weapon-based recoil configuration values, increase to make all recoils stronger, decrease to make them all weaker
		prone		= 1.5;	// coefficient of recoil forces while in prone (this is further multiplied by weapon resting coefficients)
	};

	/*
	Base A3
	class Recoil
    {
        kickVisual  = 0.3;    // camera-only kickback multiplier
        impulseCoef = 1.0;    // global recoil strength multiplier
        prone       = 1.25;   // recoil multiplier when firing prone
    };
	*/
};