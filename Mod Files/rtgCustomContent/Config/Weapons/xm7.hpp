// XM7 ACEAX setup & Magwell

class ICM_XM7_Base_F : Rifle_Base_F
{
	magazines[]               = { "rtg_20Rnd_68x51" };
	magazineWell[]            = { "CBA_68x51" };
	RTG_ACEAX_EMPTY
}

class ICM_XM7_F : ICM_XM7_Base_F {
	magazines[]               = { "rtg_20Rnd_68x51" };
	magazineWell[]            = { "CBA_68x51" };
	class XtdGearInfo
	{
		model = "ACEAX_XM7";
		camo = "BLK";
	};
};

class ICM_XM7_F_Khaki : ICM_XM7_F {
	magazines[]               = { "rtg_20Rnd_68x51" };
	magazineWell[]            = { "CBA_68x51" };
	class XtdGearInfo
	{
		model = "ACEAX_XM7";
		camo = "OLI";
	};
};

class ICM_XM7_F_Arid : ICM_XM7_F_Khaki {
	magazines[]               = { "rtg_20Rnd_68x51" };
	magazineWell[]            = { "CBA_68x51" };
	class XtdGearInfo
	{
		model = "ACEAX_XM7";
		camo = "CYT";
	};
};

class ICM_XM7_F_Marpat_Hex : ICM_XM7_F_Khaki { // IGNORED
	magazines[]               = { "rtg_20Rnd_68x51" };
	magazineWell[]            = { "CBA_68x51" };
	RTG_ACEAX_EMPTY
};

class ICM_XM7_F_Marpat_Hex_Arid : ICM_XM7_F_Khaki { // IGNORED
	magazines[]               = { "rtg_20Rnd_68x51" };
	magazineWell[]            = { "CBA_68x51" };
	RTG_ACEAX_EMPTY
};

class ICM_XM7_F_CTRG_Tropic : ICM_XM7_F_Khaki {
	magazines[]               = { "rtg_20Rnd_68x51" };
	magazineWell[]            = { "CBA_68x51" };
	class XtdGearInfo
	{
		model = "ACEAX_XM7";
		camo = "CTRG_TROP";
	};
};

class ICM_XM7_F_CTRG_Arid : ICM_XM7_F_Khaki {
	magazines[]               = { "rtg_20Rnd_68x51" };
	magazineWell[]            = { "CBA_68x51" };
	class XtdGearInfo
	{
		model = "ACEAX_XM7";
		camo = "CTRG_ARID";
	};
};