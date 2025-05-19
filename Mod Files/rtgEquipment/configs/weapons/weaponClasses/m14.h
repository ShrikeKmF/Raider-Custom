// M14
class ptv_m14: Rifle_Long_Base_F
{
    RTG_WEAPON_BASE
    RTG_ACEAX_EMPTY
    displayName = "M14";
    magazineWell[] = {"CBA_762x51_M14"};
    magazines[] = {"rtg_20Rnd_762x51"};
    RTG_RECOIL_SETUP(m14)
    RTG_WEAPON_HANDLING(2.8)
}
class ptv_m14_socom: Rifle_Long_Base_F
{
    class XtdGearInfo{model = "rtg_ace_expanded_m14";camo = "BLK";attachment="RIS";barrel="S";};
    RTG_WEAPON_BASE
    displayName = "M14 SOCOMD 16";
    magazineWell[] = {"CBA_762x51_M14"};
    magazines[] = {"rtg_20Rnd_762x51"};
    RTG_RECOIL_SETUP(m14_short)
    RTG_WEAPON_HANDLING(2.4)
}
class ptv_m14_socom_wdl: ptv_m14_socom
{
    class XtdGearInfo{model = "rtg_ace_expanded_m14";camo = "GRN";attachment="RIS";barrel="S";};
    RTG_WEAPON_BASE
    displayName = "M14 SOCOMD 16 (Green)";
    magazineWell[] = {"CBA_762x51_M14"};
    magazines[] = {"rtg_20Rnd_762x51"};
    RTG_RECOIL_SETUP(m14_short)
    RTG_WEAPON_HANDLING(2.4)
}
class ptv_m14tp: ptv_m14
{
    class XtdGearInfo{model = "rtg_ace_expanded_m14";camo = "BLK";attachment="PIC";barrel="L";};
    RTG_WEAPON_BASE
    displayName = "M14 TP";
    magazineWell[] = {"CBA_762x51_M14"};
    magazines[] = {"rtg_20Rnd_762x51"};
    RTG_RECOIL_SETUP(m14)
    RTG_WEAPON_HANDLING(2.8)
}
class ptv_m14tp_des: ptv_m14
{
    class XtdGearInfo{model = "rtg_ace_expanded_m14";camo = "CYT";attachment="PIC";barrel="L";};
    RTG_WEAPON_BASE
    displayName = "M14 TP (Tan)";
    magazineWell[] = {"CBA_762x51_M14"};
    magazines[] = {"rtg_20Rnd_762x51"};
    RTG_RECOIL_SETUP(m14)
    RTG_WEAPON_HANDLING(2.8)
}
class ptv_m14tp_wdl: ptv_m14
{
    class XtdGearInfo{model = "rtg_ace_expanded_m14";camo = "GRN";attachment="PIC";barrel="L";};
    RTG_WEAPON_BASE
    displayName = "M14 TP (Green)";
    magazineWell[] = {"CBA_762x51_M14"};
    magazines[] = {"rtg_20Rnd_762x51"};
    RTG_RECOIL_SETUP(m14)
    RTG_WEAPON_HANDLING(2.8)
}
class ptv_m14tp2: ptv_m14
{
    class XtdGearInfo{model = "rtg_ace_expanded_m14";camo = "BLK";attachment="RIS";barrel="L";};
    RTG_WEAPON_BASE
    displayName = "M14 TP2";
    magazineWell[] = {"CBA_762x51_M14"};
    magazines[] = {"rtg_20Rnd_762x51"};
    RTG_RECOIL_SETUP(m14)
    RTG_WEAPON_HANDLING(2.8)
}
class ptv_m14tp2_des: ptv_m14tp2
{
    class XtdGearInfo{model = "rtg_ace_expanded_m14";camo = "CYT";attachment="RIS";barrel="L";};
    RTG_WEAPON_BASE
    displayName = "M14 TP2 (Tan)";
    magazineWell[] = {"CBA_762x51_M14"};
    magazines[] = {"rtg_20Rnd_762x51"};
    RTG_RECOIL_SETUP(m14)
    RTG_WEAPON_HANDLING(2.8)
}
class ptv_m14tp2_wdl: ptv_m14tp2
{
    class XtdGearInfo{model = "rtg_ace_expanded_m14";camo = "GRN";attachment="RIS";barrel="L";};
    RTG_WEAPON_BASE
    displayName = "M14 TP2 (Green)";
    magazineWell[] = {"CBA_762x51_M14"};
    magazines[] = {"rtg_20Rnd_762x51"};
    RTG_RECOIL_SETUP(m14)
    RTG_WEAPON_HANDLING(2.8)
}

class rtg_m14_fizz : ptv_m14tp
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_m14_fizz";
	displayName = "M14 (Fizz)";
	hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\m14_Fizz.paa"};
	RTG_ACEAX_EMPTY 
};