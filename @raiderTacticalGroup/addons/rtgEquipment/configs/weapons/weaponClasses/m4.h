// M416A4
// 5.56
class rhs_weap_m4_Base;
class rhs_weap_m16a4 : rhs_weap_m4_Base
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m16";
		stock = "default";
		camo = "black";
		ugl = "none";
	};
};
class rhs_weap_m16a4_carryhandle : rhs_weap_m16a4
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m16";
		stock = "carry";
		camo = "black";
		ugl = "none";
	};
};
class rhs_weap_m16a4_imod : rhs_weap_m16a4
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m16";
		stock = "magpull";
		camo = "black";
		ugl = "none";
	};
};

class rhs_weap_m16a4_carryhandle_M203 : rhs_weap_m16a4
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m16";
		stock = "carry";
		camo = "black";
		ugl = "gl";
	};
};
class rhs_weap_m16a4_imod_M203 : rhs_weap_m16a4_carryhandle_M203
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m16";
		stock = "magpull";
		camo = "black";
		ugl = "gl";
	};
};
// M4A1
class rhs_weap_m4a1 : rhs_weap_m4_Base
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "default";
		camo = "black";
		ugl = "none";
	};
};
class rhs_weap_m4a1_d : rhs_weap_m4a1
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "default";
		camo = "desert";
		ugl = "none";
	};
};
class rhs_weap_m4a1_wd : rhs_weap_m4a1
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "default";
		camo = "woodland";
		ugl = "none";
	};
};
class rhs_weap_m4a1_mstock : rhs_weap_m4a1
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "magpull";
		camo = "black";
		ugl = "none";
	};
};
class rhs_weap_m4a1_d_mstock : rhs_weap_m4a1_d
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "magpull";
		camo = "desert";
		ugl = "none";
	};
};
class rhs_weap_m4a1_wd_mstock : rhs_weap_m4a1_wd
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "magpull";
		camo = "woodland";
		ugl = "none";
	};
};
// M4A1 Carry Handle
class rhs_weap_m4a1_carryhandle : rhs_weap_m4a1
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "carry";
		camo = "black";
		ugl = "none";
	};
};
class rhs_weap_m4a1_carryhandle_mstock : rhs_weap_m4a1_carryhandle
{
	class XtdGearInfo
	{
		model = "";
	};
};
class rhs_weap_m4a1_m203 : rhs_weap_m4a1 
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "default";
		camo = "black";
		ugl = "gl";
	};
};
class rhs_weap_m4a1_m203s : rhs_weap_m4a1_m203
{
	class XtdGearInfo
	{
		model = "";
	};
};
class rhs_weap_m4a1_m203s_wd : rhs_weap_m4a1_m203s
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "default";
		camo = "woodland";
		ugl = "gl";
	};
};
class rhs_weap_m4a1_m203s_d : rhs_weap_m4a1_m203s
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "default";
		camo = "desert";
		ugl = "gl";
	};
};
class rhs_weap_m4a1_carryhandle_m203 : rhs_weap_m4a1_m203
{
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "carry";
		camo = "black";
		ugl = "gl";
	};
};
class rhs_weap_m4a1_carryhandle_m203S : rhs_weap_m4a1_carryhandle_m203
{
	class XtdGearInfo
	{
		model = "";
	};
};
class rhs_weap_m4a1_m203s_sa : rhs_weap_m4a1_m203s
{
	class XtdGearInfo
	{
		model = "";
	};
};
class rhs_weap_m4a1_m320 : rhs_weap_m4a1
{
	class XtdGearInfo
	{
		model = "";
	};
};
// M4A1 Block 2
class rhs_weap_m4a1_blockII : rhs_weap_m4a1
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "standard";
		ugl = "none";
	};
};
class rhs_weap_m4a1_blockII_bk : rhs_weap_m4a1_blockII
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "black";
		ugl = "none";
	};
};
class rhs_weap_m4a1_blockII_d : rhs_weap_m4a1_blockII
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "desert";
		ugl = "none";
	};
};
class rhs_weap_m4a1_blockII_wd : rhs_weap_m4a1_blockII
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "woodland";
		ugl = "none";
	};
};
class rhs_weap_m4a1_blockII_KAC : rhs_weap_m4a1_blockII
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "standard";
		ugl = "none";
	};
};
class rhs_weap_m4a1_blockII_KAC_bk : rhs_weap_m4a1_blockII_KAC
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "black";
		ugl = "none";
	};
};
class rhs_weap_m4a1_blockII_KAC_d : rhs_weap_m4a1_blockII_KAC
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "desert";
		ugl = "none";
	};
};
class rhs_weap_m4a1_blockII_KAC_wd : rhs_weap_m4a1_blockII_KAC
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "woodland";
		ugl = "none";
	};
};

class rhs_weap_m4a1_blockII_M203 : rhs_weap_m4a1_blockII
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "default";
		ugl = "gl";
	};
};
class rhs_weap_m4a1_blockII_M203_bk : rhs_weap_m4a1_blockII_M203
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "black";
		ugl = "gl";
	};
};
class rhs_weap_m4a1_blockII_M203_d : rhs_weap_m4a1_blockII_M203
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "desert";
		ugl = "gl";
	};
};
class rhs_weap_m4a1_blockII_M203_wd : rhs_weap_m4a1_blockII_M203
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "woodland";
		ugl = "gl";
	};
};
// Mk18
class rhs_weap_mk18 : rhs_weap_m4a1_blockII
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "default";
		camo = "default";
		ugl = "none";
	};
};
class rhs_weap_mk18_bk : rhs_weap_mk18
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "default";
		camo = "black";
		ugl = "none";
	};
};
class rhs_weap_mk18_KAC : rhs_weap_mk18
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "magpull";
		camo = "default";
		ugl = "none";
	};
}
class rhs_weap_mk18_KAC_bk : rhs_weap_mk18_KAC
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "magpull";
		camo = "black";
		ugl = "none";
	};
};
class rhs_weap_mk18_d : rhs_weap_mk18
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "default";
		camo = "desert";
		ugl = "none";
	};
};
class rhs_weap_mk18_KAC_d : rhs_weap_mk18_KAC
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "magpull";
		camo = "desert";
		ugl = "none";
	};
};
class rhs_weap_mk18_wd : rhs_weap_mk18
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "default";
		camo = "woodland";
		ugl = "none";
	};
};
class rhs_weap_mk18_KAC_wd : rhs_weap_mk18_KAC
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "magpull";
		camo = "woodland";
		ugl = "none";
	};
};

class rhs_weap_mk18_m320 : rhs_weap_mk18
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "default";
		camo = "black";
		ugl = "gl";
	};
};

class rhs_weap_hk416d10 : rhs_weap_m4a1
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "";
	};
};
class rhs_weap_m27iar: rhs_weap_m4a1
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "";
	};
};

class UK3CB_M16A2_UGL : rhs_weap_m16a4_carryhandle_M203
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "";
	};
};

class UK3CB_M163 : rhs_weap_m16a4_carryhandle
{
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "";
	};
};