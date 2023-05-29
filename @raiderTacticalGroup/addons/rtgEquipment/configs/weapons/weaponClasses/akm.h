class hlc_rifle_aek971;
class rtg_aek971 : hlc_rifle_aek971
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_aek971";
	Author = "Shrike";
	displayName = "AEK-971";
	modes[] = {"Single", "FullAuto"};
	class FullAuto : FullAuto
	{
		reloadTime = 0.058;
	};
	class Single : Single
	{
		reloadTime = 0.08;
	};
};

// AK-47
class rhs_weap_ak103_npz;
class rhs_weap_ak103_zenitco01_b33;
class rhs_weap_ak104_npz;
class rhs_weap_ak104_zenitco01_b33;
class rhs_weap_ak105_npz;
class rhs_weap_ak105_zenitco01_b33;
class rhs_weap_ak74m_npz;
class rhs_weap_ak74m_camo_npz;
class rhs_weap_ak74m_desert_npz;
class rhs_weap_ak74m_fullplum_npz;
class rhs_weap_ak74m_zenitco01_b33;
class rhs_weap_ak74mr;
class rhs_weap_ak74n_npz;
class rhs_weap_ak74n_2_npz;
class rhs_weap_akmn_npz;
class rhs_weap_akmn_zenitco01_b33;
class rhs_weap_aks74n_npz;
class rhs_weap_aks74n_2_npz;
class arifle_AK12_F;
class arifle_AK12_arid_F;
class arifle_AK12_lush_F;
class arifle_AK12U_F;
class arifle_AK12U_arid_F;
class arifle_AK12U_lush_F;
class rtg_weap_ak103_npz : rhs_weap_ak103_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak103_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak103";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
};
class rtg_weap_ak103_zenitco01_b33 : rhs_weap_ak103_zenitco01_b33
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak103_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak103";
		barrel = "default";
		stock = "b33";
		camo = "standard";
	};
} class rtg_weap_ak104_npz : rhs_weap_ak104_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak104_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak104";
		barrel = "short";
		stock = "b13";
		camo = "standard";
	};
} class rtg_weap_ak104_zenitco01_b33 : rhs_weap_ak104_zenitco01_b33
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak104_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak104";
		barrel = "short";
		stock = "b33";
		camo = "standard";
	};
} class rtg_weap_ak105_npz : rhs_weap_ak105_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak105_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak105";
		barrel = "short";
		stock = "b13";
		camo = "standard";
	};
} class rtg_weap_ak105_zenitco01_b33 : rhs_weap_ak105_zenitco01_b33
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak105_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak105";
		barrel = "short";
		stock = "b33";
		camo = "standard";
	};
} class rtg_weap_ak74m_npz : rhs_weap_ak74m_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
} class rtg_weap_ak74m_camo_npz : rhs_weap_ak74m_camo_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_camo_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b13";
		camo = "camo";
	};
} class rtg_weap_ak74m_desert_npz : rhs_weap_ak74m_desert_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_desert_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b13";
		camo = "desert";
	};
} class rtg_weap_ak74m_fullplum_npz : rhs_weap_ak74m_fullplum_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_fullplum_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b13";
		camo = "plum";
	};
} class rtg_weap_ak74m_zenitco01_b33 : rhs_weap_ak74m_zenitco01_b33
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74m_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "b33";
		camo = "standard";
	};
} class rtg_weap_ak74mmr : rhs_weap_ak74mr
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74mmr";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74m";
		barrel = "default";
		stock = "mmr";
		camo = "standard";
	};
} class rtg_weap_ak74n_npz : rhs_weap_ak74n_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74n_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74n";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
} class rtg_weap_ak74n_2_npz : rhs_weap_ak74n_2_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_ak74n_2_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak74n";
		barrel = "default";
		stock = "b13";
		camo = "plum";
	};
} class rtg_weap_akmn_npz : rhs_weap_akmn_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_akmn_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "akmn";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
} class rtg_weap_akmn_zenitco01_b33 : rhs_weap_akmn_zenitco01_b33
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_akmn_zenitco01_b33";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "akmn";
		barrel = "default";
		stock = "b33";
		camo = "standard";
	};
} class rtg_weap_aks74n_npz : rhs_weap_aks74n_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_aks74n_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "aks74n";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
} class rtg_weap_aks74n_2_npz : rhs_weap_aks74n_2_npz
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_weap_aks74n_2_npz";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "aks74n";
		barrel = "default";
		stock = "b13";
		camo = "plum";
	};
} class rtg_arifle_AK12_F : arifle_AK12_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "default";
		stock = "b13";
		camo = "standard";
	};
} class rtg_arifle_AK12_arid_F : arifle_AK12_arid_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12_arid_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "default";
		stock = "b13";
		camo = "desert";
	};
} class rtg_arifle_AK12_lush_F : arifle_AK12_lush_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12_lush_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "default";
		stock = "b13";
		camo = "camo";
	};
} class rtg_arifle_AK12U_F : arifle_AK12U_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12U_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "short";
		stock = "b13";
		camo = "standard";
	};
} class rtg_arifle_AK12U_arid_F : arifle_AK12U_arid_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12U_arid_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "short";
		stock = "b13";
		camo = "desert";
	};
} class rtg_arifle_AK12U_lush_F : arifle_AK12U_lush_F
{
	scope = 2;
	dlc = "raiderTactical";
	baseWeapon = "rtg_arifle_AK12U_lush_F";
	Author = "Shrike";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ak47";
		form = "ak15";
		barrel = "short";
		stock = "b13";
		camo = "camo";
	};
}