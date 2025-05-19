// Base class declarations
class VSM_Beanie_Black;
class VSM_Beanie_OD;
class VSM_Beanie_Tan;

// Ranger Beanies – single camo group
class rtg_ranger_beanie_black : VSM_Beanie_Black {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_beanie_ranger"; camo = "black"; };
};
class rtg_ranger_beanie_od    : VSM_Beanie_OD    {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_beanie_ranger"; camo = "od";    };
};
class rtg_ranger_beanie_tan   : VSM_Beanie_Tan   {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo { model = "rtg_ace_expanded_beanie_ranger"; camo = "tan";   };
};
