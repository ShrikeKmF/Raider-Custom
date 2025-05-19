// CBRN Suits
class U_B_CBRN_Suit_01_Wdl_F;
class U_B_CBRN_Suit_01_MTP_F;
class U_I_E_CBRN_Suit_01_EAF_F;
class U_B_CBRN_Suit_01_Tropic_F;


class rtg_CBRN_Suit_01_wdl : U_B_CBRN_Suit_01_Wdl_F {
    RTG_WEAPON_BASE
    class ItemInfo: ItemInfo {
        containerClass = "Supply70";
    };
    class XtdGearInfo {
        model = "rtg_ace_expanded_cbrn";
        camo  = "M81";
    };
};
class rtg_CBRN_Suit_01_mtp : U_B_CBRN_Suit_01_MTP_F {
    RTG_WEAPON_BASE
    class ItemInfo: ItemInfo {
        containerClass = "Supply70";
    };
    class XtdGearInfo {
        model = "rtg_ace_expanded_cbrn";
        camo  = "MTP";
    };
};
class rtg_CBRN_Suit_01_eaf : U_I_E_CBRN_Suit_01_EAF_F {
    RTG_WEAPON_BASE
    class ItemInfo: ItemInfo {
        containerClass = "Supply70";
    };
    class XtdGearInfo {
        model = "rtg_ace_expanded_cbrn";
        camo  = "EAF";
    };
};
class rtg_CBRN_Suit_01_tropic : U_B_CBRN_Suit_01_Tropic_F {
    RTG_WEAPON_BASE
    class ItemInfo: ItemInfo {
        containerClass = "Supply70";
    };
    class XtdGearInfo {
        model = "rtg_ace_expanded_cbrn";
        camo  = "Tropic";
    };
};