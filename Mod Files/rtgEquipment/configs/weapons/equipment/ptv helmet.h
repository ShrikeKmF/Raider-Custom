class ptv_viper;
class ptv_viper_g;
class ptv_viper_t;
class ptv_viperhc;
class ptv_viperhc_g;
class ptv_viperhc_t;
class ptv_viper_r;
class ptv_viper_r_g;
class ptv_viper_r_t;

class ptv_viper_serpd_cover;
class ptv_viper_serpd_cover2;
class ptv_viper_tsd_cover;
class ptv_viper_tsd_cover2;
class ptv_viper_ts_cover;
class ptv_viper_ts_cover2;
class ptv_viper_serp_cover;
class ptv_viper_serp_cover2;

// Viper Helmets
class rtg_viper_blk : ptv_viper {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model = "rtg_ace_expanded_helmet_viper";
        camo  = "blk";
        style = "base";
    };
};
class rtg_viper_grn : ptv_viper_g {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model = "rtg_ace_expanded_helmet_viper";
        camo  = "grn";
        style = "base";
    };
};
class rtg_viper_tan : ptv_viper_t {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model = "rtg_ace_expanded_helmet_viper";
        camo  = "tan";
        style = "base";
    };
};

class rtg_viperhc_blk : ptv_viperhc {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model = "rtg_ace_expanded_helmet_viper";
        camo  = "blk";
        style = "hc";
    };
};
class rtg_viperhc_grn : ptv_viperhc_g {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model = "rtg_ace_expanded_helmet_viper";
        camo  = "grn";
        style = "hc";
    };
};
class rtg_viperhc_tan : ptv_viperhc_t {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model = "rtg_ace_expanded_helmet_viper";
        camo  = "tan";
        style = "hc";
    };
};

class rtg_viper_r_blk : ptv_viper_r {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model = "rtg_ace_expanded_helmet_viper";
        camo  = "blk";
        style = "rails";
    };
};
class rtg_viper_r_grn : ptv_viper_r_g {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model = "rtg_ace_expanded_helmet_viper";
        camo  = "grn";
        style = "rails";
    };
};
class rtg_viper_r_tan : ptv_viper_r_t {
    RTG_WEAPON_BASE
    RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model = "rtg_ace_expanded_helmet_viper";
        camo  = "tan";
        style = "rails";
    };
};

// Viper Helmets with Covers
class rtg_viper_cover_serpd      : ptv_viper_serpd_cover  {
    RTG_WEAPON_BASE RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model   = "rtg_ace_expanded_helmet_viper_cover";
        style   = "serp";
        terrain = "desert";
        scrim   = "no";
    };
};
class rtg_viper_cover_serpd2     : ptv_viper_serpd_cover2 {
    RTG_WEAPON_BASE RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model   = "rtg_ace_expanded_helmet_viper_cover";
        style   = "serp";
        terrain = "desert";
        scrim   = "yes";
    };
};

class rtg_viper_cover_tsd        : ptv_viper_tsd_cover    {
    RTG_WEAPON_BASE RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model   = "rtg_ace_expanded_helmet_viper_cover";
        style   = "ts";
        terrain = "desert";
        scrim   = "no";
    };
};
class rtg_viper_cover_tsd2       : ptv_viper_tsd_cover2   {
    RTG_WEAPON_BASE RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model   = "rtg_ace_expanded_helmet_viper_cover";
        style   = "ts";
        terrain = "desert";
        scrim   = "yes";
    };
};

class rtg_viper_cover_ts         : ptv_viper_ts_cover     {
    RTG_WEAPON_BASE RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model   = "rtg_ace_expanded_helmet_viper_cover";
        style   = "ts";
        terrain = "woodland";
        scrim   = "no";
    };
};
class rtg_viper_cover_ts2        : ptv_viper_ts_cover2    {
    RTG_WEAPON_BASE RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model   = "rtg_ace_expanded_helmet_viper_cover";
        style   = "ts";
        terrain = "woodland";
        scrim   = "yes";
    };
};

class rtg_viper_cover_serp       : ptv_viper_serp_cover   {
    RTG_WEAPON_BASE RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model   = "rtg_ace_expanded_helmet_viper_cover";
        style   = "serp";
        terrain = "woodland";
        scrim   = "no";
    };
};
class rtg_viper_cover_serp2      : ptv_viper_serp_cover2  {
    RTG_WEAPON_BASE RTG_HELMET_ARMOUR
    class XtdGearInfo {
        model   = "rtg_ace_expanded_helmet_viper_cover";
        style   = "serp";
        terrain = "woodland";
        scrim   = "yes";
    };
};

