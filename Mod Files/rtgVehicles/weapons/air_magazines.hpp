
// Pequod
	class sab_milavi_pod_mauser_mag;
	class rtg_27mm_mauser: sab_milavi_pod_mauser_mag
	{
		displayName = "[RTG] Mauser POD 27mm";
		displayNameShort = "Mauser 27mm";
		ammo = "sab_milavi_27mm_he_ammo";
		scope = 2;
		initSpeed = 1150;
		maxLeadSpeed = 85;
		count = 600;
		tracersEvery = 1;
		nameSound = "cannon";
		muzzleImpulseFactor[] = {-0.01,0.01};
		hardpoints[] += {"RTG_FIXEDWING_Gunpod_Center"};
		model = "\sab_militaryaviation\pods\sab_milavi_pod_mauser.p3d";
		pylonWeapon = "sab_milavi_pod_mauser_weapon";
		mass = 300;
	};

	class sab_milavi_1rnd_mk82_mag;
	class sab_milavi_2rnd_mk82_mag: sab_milavi_1rnd_mk82_mag
	{
		scope = 2;
		count = 2;
		displayName = "230kg Mk82 x2";
		displayNameShort = "Mk82";
		mass = 500;
		hardpoints[] += {"RTG_FIXEDWING_Pylons"};
		model = "\sab_militaryaviation\pods\sab_milavi_mag_mk82x2.p3d";
	};

	class 2Rnd_AAA_missiles;
	class sab_milavi_1rnd_aim9x_mag: 2Rnd_AAA_missiles
	{
		ammo = "sab_milavi_msl_aimx_ammo";
		count = 1;
		displayName = "AIM-9X x1";
		displayNameShort = "AIM-9";
		hardpoints[] += {"RTG_FIXEDWING_Pylons"};
		model = "\sab_militaryaviation\pods\sab_milavi_mag_aimx.p3d";
		pylonWeapon = "sab_milavi_aam_weapon";
		mass = 100;
	};

	class VehicleMagazine;
	class sab_milavi_1rnd_gbu_mag: VehicleMagazine
	{
		scope = 2;
		count = 1;
		displayName = "230kg GBU-12 Paveway II x1";
		displayNameShort = "GBU-12";
		ammo = "sab_milavi_bmb_gbu_ammo";
		initSpeed = 0;
		maxLeadSpeed = 0;
		nameSound = "missiles";
		pylonWeapon = "sab_milavi_gbu_weapon";
		hardpoints[] += {"RTG_FIXEDWING_Pylons"};
		model = "\sab_militaryaviation\pods\sab_milavi_mag_mk82x1.p3d";
		mass = 500;
	};

	class sab_milavi_1rnd_droptank_3_mag: sab_milavi_1rnd_mk82_mag
	{
		displayName = "Droptank";
		displayNameShort = "Droptank";
		ammo = "sab_milavi_bmb_droptank_3_ammo";
		pylonWeapon = "sab_milavi_droptank_weapon";
		model = "\sab_militaryaviation\pods\sab_milavi_mag_mk82x1.p3d";
		hardpoints[] += {"RTG_FIXEDWING_Pylons"};
		mass = 500;
	};

	class 2Rnd_LG_scalpel;
	class sab_milavi_1rnd_maverick_mag: 2Rnd_LG_scalpel
	{
		ammo = "sab_milavi_msl_maverick_ammo";
		count = 1;
		displayName = "AGM 65 x1";
		displayNameShort = "AGM 65";
		pylonWeapon = "sab_milavi_agm_maverick_weapon";
		hardpoints[] += {"RTG_FIXEDWING_Pylons"};
		model = "\sab_militaryaviation\pods\sab_milavi_mag_maverick.p3d";
		mass = 250;
	};

	class sab_milavi_1rnd_hellfire_mag: sab_milavi_1rnd_maverick_mag
	{
		ammo = "sab_milavi_msl_hellfire_ammo";
		count = 1;
		displayName = "AGM 114 x1";
		displayNameShort = "AGM 114";
		model = "\sab_militaryaviation\pods\sab_milavi_mag_hfx1.p3d";
		hardpoints[] = {"SAB_MILAVI","SAB_MILAVI_AGMMISSILE"};
		pylonWeapon = "sab_milavi_agm_hellfire_weapon";
		mass = 100;
	};

// Hawk
	class rhs_mag_M151_19;
	class rhs_mag_M151_19_green: rhs_mag_M151_19
	{
		hardpoints[]	+= {"RTG_HELI_Pylons"};
	};

	
	class PylonRack_4Rnd_ACE_Hellfire_AGM114N;
	class RTG_Hellfire_AGM114N_pylon: PylonRack_4Rnd_ACE_Hellfire_AGM114N
	{
		hardpoints[]	+= {"RTG_HELI_Pylons"};
	};
	class PylonRack_4Rnd_ACE_Hellfire_AGM114K;
	class RTG_Hellfire_AGM114K_pylon: PylonRack_4Rnd_ACE_Hellfire_AGM114K
	{
		hardpoints[]	+= {"RTG_HELI_Pylons"};
	};


// Mixed
	class PylonWeapon_300Rnd_20mm_shells;
	class RTG_Pylon_20mm_Gunpod: PylonWeapon_300Rnd_20mm_shells
	{
		count = 600;
		displayName = "Twin Mauser 27mm";
		displayNameShort = "Mauser 27mm";
		ammo = "sab_milavi_27mm_he_ammo";
		hardpoints[] += {"RTG_HELI_Pylons","RTG_FIXEDWING_Pylons"};
		mass = 300;
		scope = 2;
		initSpeed = 1150;
		maxLeadSpeed = 85;
	};