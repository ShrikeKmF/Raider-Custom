// H&K MP5A5
	// 9mm
	//Base
	class JCA_smg_MP5_base_F: Rifle_Short_Base_F
	{
		RTG_ACEAX_EMPTY
		RTG_STANDARD_ZOOM
		RTG_RECOIL(mp5)
		RTG_WEAPON_HANDLING(1.5)
		magazineWell[] = {"RTG_9x19"};
		magazines[] = {"rtg_9mm_35Rnd_mag"};
	};
	class JCA_smg_MP5_AFG_base_F: JCA_smg_MP5_base_F{RTG_ACEAX_EMPTY};
	class JCA_smg_MP5_VFG_base_F: JCA_smg_MP5_base_F{RTG_ACEAX_EMPTY};
	class JCA_smg_MP5_FL_base_F: JCA_smg_MP5_base_F{RTG_ACEAX_EMPTY};
	// Black
	class JCA_smg_MP5_AFG_black_F: JCA_smg_MP5_AFG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_mp5";camo = "BLK";attachment="AFG";};
	};
	class JCA_smg_MP5_VFG_black_F: JCA_smg_MP5_VFG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_mp5";camo = "BLK";attachment="VFG";};
	};
	class JCA_smg_MP5_FL_black_F: JCA_smg_MP5_FL_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_mp5";camo = "BLK";attachment="N";};
	};
	// Sand
	class JCA_smg_MP5_AFG_sand_F: JCA_smg_MP5_AFG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_mp5";camo = "CYT";attachment="AFG";};
	};
	class JCA_smg_MP5_VFG_sand_F: JCA_smg_MP5_VFG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_mp5";camo = "CYT";attachment="VFG";};
	};
	class JCA_smg_MP5_FL_sand_F: JCA_smg_MP5_FL_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_mp5";camo = "CYT";attachment="N";};
	};
	// Olive
	class JCA_smg_MP5_AFG_olive_F: JCA_smg_MP5_AFG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_mp5";camo = "GRN";attachment="AFG";};
	};
	class JCA_smg_MP5_VFG_olive_F: JCA_smg_MP5_VFG_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_mp5";camo = "GRN";attachment="VFG";};
	};
	class JCA_smg_MP5_FL_olive_F: JCA_smg_MP5_FL_base_F
	{
		RTG_WEAPON_BASE
		class XtdGearInfo{model = "rtg_ace_expanded_mp5";camo = "GRN";attachment="N";};
	};