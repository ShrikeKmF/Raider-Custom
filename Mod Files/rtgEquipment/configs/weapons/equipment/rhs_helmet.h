class rhsusf_cvc_green_helmet;
class rhsusf_cvc_helmet;

class rhs_altyn_novisor;
class rhs_altyn;
class rhs_altyn_visordown;

// CVC Helmets
class rtg_cvc_green : rhsusf_cvc_green_helmet {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model = "rtg_ace_expanded_helmet_cvc";
        variant = "green";
    };
};

class rtg_cvc_black : rhsusf_cvc_helmet {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model = "rtg_ace_expanded_helmet_cvc";
        variant = "tan";
    };
};

// Altyn Helmets
class rtg_altyn_novisor : rhs_altyn_novisor {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model = "rtg_ace_expanded_helmet_altyn";
        variant = "novisor";
    };
};

class rtg_altyn_open : rhs_altyn {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model = "rtg_ace_expanded_helmet_altyn";
        variant = "open";
    };
};

class rtg_altyn_closed : rhs_altyn_visordown {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model = "rtg_ace_expanded_helmet_altyn";
        variant = "closed";
    };
};
