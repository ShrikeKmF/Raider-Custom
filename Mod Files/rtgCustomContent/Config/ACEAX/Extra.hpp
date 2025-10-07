class ACEAX_Armband {
    label   = "Armbands";
    author  = "RTG";
    options[] = { "size" };

    class size {
        label = "Size";
        values[] = { "small", "large" };
        class small { label = "Small"; }
        class large    { label = "Large"; }
    };
};

class rtg_pvs_15 {
    label = "AN/PVS 15";
    options[] = {"filter", "camo"};
    class filter
    {
        label = "Filter";
        values[] = {"wht", "grn", "amb"};
        class wht
        {
            label = "White";
            description = "White Filter";
            image="#(rgb,8,8,3)color(1,1,1,1)";
        };
        class grn
        {
            label = "Green";
            description = "Green Filter";
            image="#(rgb,8,8,3)color(0.12,0.6,0.0,1)";
        };
        class amb
        {
            label = "Amber";
            description = "Amber Filter";
            image="#(rgb,8,8,3)color(1,0.45,0.25,1)";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"BLK", "GRN", "CYT"};
        class BLK{};
        class GRN{};
        class CYT{};
    };
};
class rtg_pvs_14 {
    label = "AN/PVS 14";
    options[] = {"filter", "camo"};
    class filter
    {
        label = "Filter";
        values[] = {"wht", "grn", "amb"};
        class wht
        {
            label = "White";
            description = "White Filter";
            image="#(rgb,8,8,3)color(1,1,1,1)";
        };
        class grn
        {
            label = "Green";
            description = "Green Filter";
            image="#(rgb,8,8,3)color(0.12,0.6,0.0,1)";
        };
        class amb
        {
            label = "Amber";
            description = "Amber Filter";
            image="#(rgb,8,8,3)color(1,0.45,0.25,1)";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"BLK", "GRN", "CYT"};
        class BLK{};
        class GRN{};
        class CYT{};
    };
};
class rtg_gpnvg_18 {
    label = "GPNVG 18";
    options[] = {"filter", "camo"};
    class filter
    {
        label = "Filter";
        values[] = {"wht", "grn", "amb"};
        class wht
        {
            label = "White";
            description = "White Filter";
            image="#(rgb,8,8,3)color(1,1,1,1)";
        };
        class grn
        {
            label = "Green";
            description = "Green Filter";
            image="#(rgb,8,8,3)color(0.12,0.6,0.0,1)";
        };
        class amb
        {
            label = "Amber";
            description = "Amber Filter";
            image="#(rgb,8,8,3)color(1,0.45,0.25,1)";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"BLK", "GRN", "CYT"};
        class BLK{};
        class GRN{};
        class CYT{};
    };
};

class rtg_laser_desginator {
    label = "Laser Designator;
    options[] = {"filter", "camo"};
    class filter
    {
        label = "Filter";
        values[] = {"wht", "grn", "amb"};
        class wht
        {
            label = "White";
            description = "White Filter";
            image="#(rgb,8,8,3)color(1,1,1,1)";
        };
        class grn
        {
            label = "Green";
            description = "Green Filter";
            image="#(rgb,8,8,3)color(0.12,0.6,0.0,1)";
        };
        class amb
        {
            label = "Amber";
            description = "Amber Filter";
            image="#(rgb,8,8,3)color(1,0.45,0.25,1)";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"BLK", "GRN", "CYT"};
        class BLK{};
        class GRN{};
        class CYT{};
    };
};