// M416A4
// 5.56
class rhs_weap_m16a4 : rhs_weap_m4_Base
{
	RTG_WEAPON_BASE
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m16";
		stock = "default";
		camo = "black"
	};
};
class rhs_weap_m16a4_carryhandle : rhs_weap_m16a4
{
	RTG_WEAPON_BASE
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m16";
		stock = "carry";
		camo = "black";
	};
};
class rhs_weap_m16a4_imod : rhs_weap_m16a4
{
	RTG_WEAPON_BASE
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m16";
		stock = "magpull";
		camo = "black";
	};
};

class rhs_weap_m16a4_carryhandle_M203 : rhs_weap_m16a4
{
	RTG_ACEAX_EMPTY 
};
class rhs_weap_m16a4_imod_M203 : rhs_weap_m16a4_carryhandle_M203
{
	recoil = "rtg_556_rifle";
	RTG_ACEAX_EMPTY 
};
// M4A1
class rhs_weap_m4a1 : rhs_weap_m4_Base
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "default";
		camo = "black";
	};
};
class rhs_weap_m4a1_d : rhs_weap_m4a1
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "default";
		camo = "desert";
	};
};
class rhs_weap_m4a1_wd : rhs_weap_m4a1
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "default";
		camo = "woodland";
	};
};
class rhs_weap_m4a1_mstock : rhs_weap_m4a1
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "magpull";
		camo = "black";
	};
};
class rhs_weap_m4a1_d_mstock : rhs_weap_m4a1_d
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "magpull";
		camo = "desert";
	};
};
class rhs_weap_m4a1_wd_mstock : rhs_weap_m4a1_wd
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "magpull";
		camo = "woodland";
	};
};
// M4A1 Carry Handle
class rhs_weap_m4a1_carryhandle : rhs_weap_m4a1
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "m4a1";
		stock = "carry";
		camo = "black";
	};
};
class rhs_weap_m4a1_carryhandle_mstock : rhs_weap_m4a1_carryhandle
{
	recoil = "rtg_556_carbine";
	RTG_ACEAX_EMPTY 
};
class rhs_weap_m4a1_m203 : rhs_weap_m4a1 
{
	recoil = "rtg_556_carbine";
	RTG_ACEAX_EMPTY 
};
class rhs_weap_m4a1_m203s : rhs_weap_m4a1_m203
{
	recoil = "rtg_556_carbine";
	RTG_ACEAX_EMPTY 
};
class rhs_weap_m4a1_m203s_wd : rhs_weap_m4a1_m203s
{
	recoil = "rtg_556_carbine";
	RTG_ACEAX_EMPTY 
};
class rhs_weap_m4a1_m203s_d : rhs_weap_m4a1_m203s
{
	recoil = "rtg_556_carbine";
	RTG_ACEAX_EMPTY 
};
class rhs_weap_m4a1_carryhandle_m203 : rhs_weap_m4a1_m203
{
	recoil = "rtg_556_carbine";
	RTG_ACEAX_EMPTY 
};
class rhs_weap_m4a1_carryhandle_m203S : rhs_weap_m4a1_carryhandle_m203
{
	recoil = "rtg_556_carbine";
	RTG_ACEAX_EMPTY 
};
class rhs_weap_m4a1_m203s_sa : rhs_weap_m4a1_m203s
{
	recoil = "rtg_556_carbine";
	RTG_ACEAX_EMPTY 
};
class rhs_weap_m4a1_m320 : rhs_weap_m4a1
{
	recoil = "rtg_556_carbine";
	RTG_ACEAX_EMPTY 
};
// M4A1 Block 2
class rhs_weap_m4a1_blockII : rhs_weap_m4a1
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "standard";
		
	};
};
class rhs_weap_m4a1_blockII_bk : rhs_weap_m4a1_blockII
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "black";
		
	};
};
class rhs_weap_m4a1_blockII_d : rhs_weap_m4a1_blockII
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "desert";
		
	};
};
class rhs_weap_m4a1_blockII_wd : rhs_weap_m4a1_blockII
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "magpull";
		camo = "woodland";
		
	};
};
class rhs_weap_m4a1_blockII_KAC : rhs_weap_m4a1_blockII
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "standard";
		
	};
};
class rhs_weap_m4a1_blockII_KAC_bk : rhs_weap_m4a1_blockII_KAC
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "black";
		
	};
};
class rhs_weap_m4a1_blockII_KAC_d : rhs_weap_m4a1_blockII_KAC
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "desert";
		
	};
};
class rhs_weap_m4a1_blockII_KAC_wd : rhs_weap_m4a1_blockII_KAC
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "block2";
		stock = "default";
		camo = "woodland";
		
	};
};

class rhs_weap_m4a1_blockII_M203 : rhs_weap_m4a1_blockII
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	RTG_ACEAX_EMPTY 
};
class rhs_weap_m4a1_blockII_M203_bk : rhs_weap_m4a1_blockII_M203
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	RTG_ACEAX_EMPTY 
};
class rhs_weap_m4a1_blockII_M203_d : rhs_weap_m4a1_blockII_M203
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	RTG_ACEAX_EMPTY 
};
class rhs_weap_m4a1_blockII_M203_wd : rhs_weap_m4a1_blockII_M203
{
	recoil = "rtg_556_carbine";
	RTG_WEAPON_BASE
	RTG_ACEAX_EMPTY 
};
// Mk18
class rhs_weap_mk18 : rhs_weap_m4a1_blockII
{
	recoil = "rtg_556_pdw";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "default";
		camo = "default";
		
	};
};
class rhs_weap_mk18_bk : rhs_weap_mk18
{
	recoil = "rtg_556_pdw";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "default";
		camo = "black";
		
	};
};
class rhs_weap_mk18_KAC : rhs_weap_mk18
{
	recoil = "rtg_556_pdw";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "magpull";
		camo = "default";
		
	};
}
class rhs_weap_mk18_KAC_bk : rhs_weap_mk18_KAC
{
	recoil = "rtg_556_pdw";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "magpull";
		camo = "black";
		
	};
};
class rhs_weap_mk18_d : rhs_weap_mk18
{
	recoil = "rtg_556_pdw";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "default";
		camo = "desert";
		
	};
};
class rhs_weap_mk18_KAC_d : rhs_weap_mk18_KAC
{
	recoil = "rtg_556_pdw";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "magpull";
		camo = "desert";
		
	};
};
class rhs_weap_mk18_wd : rhs_weap_mk18
{
	recoil = "rtg_556_pdw";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "default";
		camo = "woodland";
		
	};
};
class rhs_weap_mk18_KAC_wd : rhs_weap_mk18_KAC
{
	recoil = "rtg_556_pdw";
	RTG_WEAPON_BASE
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_m4a1";
		form = "mk18";
		stock = "magpull";
		camo = "woodland";
		
	};
};

class rhs_weap_mk18_m320 : rhs_weap_mk18
{
	recoil = "rtg_556_pdw";
	RTG_WEAPON_BASE
	RTG_ACEAX_EMPTY 
};

class rhs_weap_hk416d10 : rhs_weap_m4a1
{
	RTG_WEAPON_BASE
	RTG_ACEAX_EMPTY 
};
class rhs_weap_m27iar: rhs_weap_m4a1
{
	recoil = "rtg_556_rifle";
	RTG_WEAPON_BASE
	RTG_ACEAX_EMPTY 
};

class UK3CB_M16A2_UGL : rhs_weap_m16a4_carryhandle_M203
{
	recoil = "rtg_556_rifle";
	RTG_WEAPON_BASE
	RTG_ACEAX_EMPTY 
};

class UK3CB_M16A2 : rhs_weap_m16a4_carryhandle
{
	recoil = "rtg_556_rifle";
	RTG_WEAPON_BASE
	RTG_ACEAX_EMPTY 
};

class UK3CB_M16A3 : UK3CB_M16A2
{
	recoil = "rtg_556_rifle";
	RTG_WEAPON_BASE
	RTG_ACEAX_EMPTY 
};

class UK3CB_M16_Carbine : rhs_weap_m16a4_carryhandle
{
	recoil = "rtg_556_rifle";
	RTG_WEAPON_BASE
	RTG_ACEAX_EMPTY 
};

class UK3CB_M16A1_LSW : rhs_weap_m16a4_carryhandle
{
	recoil = "rtg_556_rifle";
	RTG_WEAPON_BASE
	RTG_ACEAX_EMPTY 
};


class UK3CB_M16A1 : rhs_weap_m16a4_carryhandle
{
	recoil = "rtg_556_rifle";
	RTG_WEAPON_BASE
	RTG_ACEAX_EMPTY 
};

class UK3CB_AR10_Porto_Sup_ALU : rhs_weap_m16a4_carryhandle
{
	recoil = "rtg_556_rifle";
	RTG_WEAPON_BASE
	RTG_ACEAX_EMPTY 
};

// Nugg's Gun 
class rtg_nugg : rhs_weap_m4a1_blockII
{
	recoil = "rtg_556_rifle";
	displayName = "M4 Block II [Nugg]";
	RTG_WEAPON_BASE
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_block2rail_t_co.paa",
		"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"
	};
	RTG_ACEAX_EMPTY 
	rhs_grip1_change = "rtg_nugg";
	rhs_grip2_change = "rtg_nugg";
	rhs_grip3_change = "rtg_nugg";

	baseWeapon = "rtg_nugg";
};

// m16a4
class rtg_shrike_m16a4 : rhs_weap_m16a4
{
	RTG_WEAPON_BASE
	
	recoil = "rtg_556_rifle";
	RTG_ACEAX_EMPTY 
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	rhs_grip1_change = "rtg_shrike_m16a4";
	rhs_grip2_change = "rtg_shrike_m16a4";
	rhs_grip3_change = "rtg_shrike_m16a4";
	baseWeapon = "rtg_shrike_m16a4";
	modes[] = {"Single","FullAuto"};
	class Single: Single
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
		};
		weaponSoundEffect = "DefaultRifle";
		reloadTime = 0.06741;
		dispersion = 0.0019;
	};
	class FullAuto: FullAuto
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
		};
		weaponSoundEffect = "DefaultRifle";
		reloadTime = 0.06741;
		dispersion = 0.0019;
	};
};