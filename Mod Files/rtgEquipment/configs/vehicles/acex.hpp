class rtg_ace_expanded_backpack {
    label = "Backpack";
    
    options[] = {"style", "camo"};
    class style
    {
        label = "Backpack Style";
        values[] = {"carryall", "kitbag", "assault"};
        class carryall
        {
            label = "Carryall";
            description = "Carryall";
        };
        class kitbag
        {
            label = "Kitbag";
            description = "Kitbag";
        };
        class assault
        {
            label = "Assault Pack";
            description = "Assault Pack";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"alpine", "mca", "mcb", "mc", "mct", "tan", "od", "ph"};
        class alpine
        {
            label = "Alpine";
            description = "Alpine";
        };
        class mca
        {
            label = "Arid";
            description = "Arid";
        };
        class mcb
        {
            label = "Multicam Black";
            description = "Multicam Black";
        };
        class mc
        {
            label = "Multicam";
            description = "Multicam";
        };
        class mct
        {
            label = "Multicam Tropic";
            description = "Multicam Tropic";
        };
        class tan
        {
            label = "Tan";
            description = "Tan";
        };
        class od
        {
            label = "Olive Drab";
            description = "Olive Drab";
        };
        class ph
        {
            label = "Project Honour";
            description = "Project Honour";
        };
    };
};

class rtg_ace_expanded_radiopack {
    label = "RadioPack";
    options[] = {"camo"};
    class camo
    {
        label = "Camo";
        values[] = {"BLK", "GRN", "CYT"};
        class CYT
        {
            label = "Sand";
            description = "Sand Camo";
        };
        class GRN
        {
            label = "Olive";
            description = "Olive Camo";
        };
        class BLK
        {
            label = "Black";
            description = "Black Camo";
        };
    };
};

class rtg_ace_expanded_medpack {
    label     = "Medical Pack";
    options[] = { "camo" };
    class camo {
        label  = "Camouflage";
        values[] = { "Black", "Brown", "Desert", "Olive" };
        class Black  { label = "Black";  description = "Black medical pack"; }
        class Brown  { label = "Brown";  description = "Brown medical pack"; }
        class Desert { label = "Desert"; description = "Desert medical pack"; }
        class Olive  { label = "Olive";  description = "Olive medical pack"; }
    };
};