// Base class declarations
class VSM_Mich2000_MulticamTropic;
class VSM_Mich2000_CamoSprayOD;
class VSM_Mich2000_Multicam;
class VSM_Mich2000_OGA_OD;
class VSM_Mich2000_OGA;
class VSM_Mich2000_ProjectHonor;
class VSM_Mich2000_CamoSprayTAN;
class VSM_fasthelmet_black;
class VSM_fast_helmet_covermcblack;
class VSM_fasthelmet_covermulticam;
class VSM_fasthelmet_od;
class VSM_fasthelmet_tan;
class VSM_fast_helmet_covertropic;

// MICH 2000 Helmets
class rtg_mich_multicamtropic  : VSM_Mich2000_MulticamTropic   {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_helmet_mich"; camo = "multicamtropic"; };
};
class rtg_mich_odspray         : VSM_Mich2000_CamoSprayOD      {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_helmet_mich"; camo = "odspray"; };
};
class rtg_mich_multicam        : VSM_Mich2000_Multicam         {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_helmet_mich"; camo = "multicam"; };
};
class rtg_mich_oga_od          : VSM_Mich2000_OGA_OD           {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_helmet_mich"; camo = "od"; };
};
class rtg_mich_oga             : VSM_Mich2000_OGA              {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_helmet_mich"; camo = "oga"; };
};
class rtg_mich_projecthonor    : VSM_Mich2000_ProjectHonor     {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_helmet_mich"; camo = "projecthonor"; };
};
class rtg_mich_tanspray        : VSM_Mich2000_CamoSprayTAN     {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_helmet_mich"; camo = "tanspray"; };
};

// FAST Helmets
class rtg_fast_black           : VSM_fasthelmet_black          {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_helmet_fast"; camo = "black"; };
};
class rtg_fast_mcblack         : VSM_fast_helmet_covermcblack  {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_helmet_fast"; camo = "mcblack"; };
};
class rtg_fast_multicam        : VSM_fasthelmet_covermulticam  {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_helmet_fast"; camo = "multicam"; };
};
class rtg_fast_od              : VSM_fasthelmet_od             {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_helmet_fast"; camo = "od"; };
};
class rtg_fast_tan             : VSM_fasthelmet_tan            {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_helmet_fast"; camo = "tan"; };
};
class rtg_fast_tropic          : VSM_fast_helmet_covertropic   {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_helmet_fast"; camo = "tropic"; };
};
