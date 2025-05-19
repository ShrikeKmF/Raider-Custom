// H&K UMP-50
// Base
class JCA_smg_UMP_base_F: Rifle_Short_Base_F
{
    RTG_STANDARD_ZOOM 
    RTG_ACEAX_EMPTY
    recoil = "rtg_50ae_primary";
	magazineWell[] = {"RTG_50_SMG_AE"};
	magazines[] = {"rtg_50_ae_20rnd_mag"};
};
class JCA_smg_UMP_AFG_base_F: JCA_smg_UMP_base_F{RTG_ACEAX_EMPTY};
class JCA_smg_UMP_VFG_base_F: JCA_smg_UMP_base_F{RTG_ACEAX_EMPTY};

// Black
class JCA_smg_UMP_black_F: JCA_smg_UMP_base_F
{
    RTG_WEAPON_BASE
    class XtdGearInfo{model = "rtg_ace_expanded_ump50";camo = "BLK";attachment="N";};
	
};
class JCA_smg_UMP_AFG_black_F: JCA_smg_UMP_AFG_base_F
{
    RTG_WEAPON_BASE
    class XtdGearInfo{model = "rtg_ace_expanded_ump50";camo = "BLK";attachment="AFG";};
};
class JCA_smg_UMP_VFG_black_F: JCA_smg_UMP_VFG_base_F
{
    RTG_WEAPON_BASE
    class XtdGearInfo{model = "rtg_ace_expanded_ump50";camo = "BLK";attachment="VFG";};
};
// Sand
class JCA_smg_UMP_sand_F: JCA_smg_UMP_base_F
{
    RTG_WEAPON_BASE
    class XtdGearInfo{model = "rtg_ace_expanded_ump50";camo = "CYT";attachment="N";};
    magazineWell[] = {"RTG_50_SMG_AE"};
	magazines[] = {"rtg_50_ae_20rnd_mag"};
}
class JCA_smg_UMP_AFG_sand_F: JCA_smg_UMP_AFG_base_F
{
    RTG_WEAPON_BASE
    class XtdGearInfo{model = "rtg_ace_expanded_ump50";camo = "CYT";attachment="AFG";};
    magazineWell[] = {"RTG_50_SMG_AE"};
	magazines[] = {"rtg_50_ae_20rnd_mag"};
};
class JCA_smg_UMP_VFG_sand_F: JCA_smg_UMP_VFG_base_F
{
    RTG_WEAPON_BASE
    class XtdGearInfo{model = "rtg_ace_expanded_ump50";camo = "CYT";attachment="VFG";};
    magazineWell[] = {"RTG_50_SMG_AE"};
	magazines[] = {"rtg_50_ae_20rnd_mag"};
};
// Olive
class JCA_smg_UMP_olive_F: JCA_smg_UMP_base_F
{
    RTG_WEAPON_BASE
    class XtdGearInfo{model = "rtg_ace_expanded_ump50";camo = "GRN";attachment="N";};
};
class JCA_smg_UMP_AFG_olive_F: JCA_smg_UMP_AFG_base_F
{
    RTG_WEAPON_BASE
    class XtdGearInfo{model = "rtg_ace_expanded_ump50";camo = "GRN";attachment="AFG";};
};
class JCA_smg_UMP_VFG_olive_F: JCA_smg_UMP_VFG_base_F
{
    RTG_WEAPON_BASE
    class XtdGearInfo{model = "rtg_ace_expanded_ump50";camo = "GRN";attachment="VFG";};
};