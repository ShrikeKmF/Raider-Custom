class rtg_ace_expanded_beanie_ranger {
    label   = "Beanies";
    author  = "RTG";
    options[] = { "camo" };

    class camo {
        label = "Camouflage";
        values[] = { "black", "od", "tan" };
        class black { label = "Black"; }
        class od    { label = "OD Green"; }
        class tan   { label = "Tan"; }
    };
};

class rtg_ace_expanded_boonie_ranger {
    label   = "Boonie Hats";
    author  = "RTG";
    options[] = { "camo" };

    class camo {
        label = "Camouflage";
        values[] = {
            "khk", "oli", "tan",
            "aoru", "tiger",
            "m81", "multicam", "multicamtropic", "projecthonor"
        };
        class khk             { label = "Khaki";               }
        class oli             { label = "Olive";               }
        class tan             { label = "Tan";                 }
        class aoru            { label = "AORU";                }
        class tiger           { label = "Tiger";               }
        class m81             { label = "M81";                 }
        class multicam        { label = "Multicam";            }
        class multicamtropic  { label = "Multicam Tropic";     }
        class projecthonor    { label = "Project Honor";       }
    };
};

class rtg_ace_expanded_cap_ranger {
    label   = "Caps";
    author  = "RTG";
    options[] = { "camo" };

    class camo {
        label = "Camouflage";
        values[] = { 
            "headphones", "blk", "oli_hs", "tan", 
            "aoru", "tiger", "projecthonor" 
        };
        class headphones     { label = "Headphones"; }
        class blk             { label = "Black";       }
        class oli_hs          { label = "Olive HS";    }
        class tan             { label = "Tan";         }
        class aoru            { label = "AORU";        }
        class tiger           { label = "Tiger";       }
        class projecthonor    { label = "Project Honor";}
    };
};

class rtg_ace_expanded_helmet_mich {
    label = "MICH 2000 Helmets";
    author = "RTG";
    options[] = { "camo" };

    class camo {
        label = "Camo";
        values[] = { "multicam", "multicamtropic", "od", "oga", "projecthonor", "odspray", "tanspray" };
        class multicam        { label = "Multicam"; };
        class multicamtropic  { label = "Multicam Tropic"; };
        class od              { label = "OD Green"; };
        class oga             { label = "OGA"; };
        class projecthonor    { label = "Project Honor"; };
        class odspray         { label = "OD Camo Spray"; };
        class tanspray        { label = "Tan Camo Spray"; };
    };
};

class rtg_ace_expanded_helmet_fast {
    label = "FAST Helmets";
    author = "RTG";
    options[] = { "camo" };

    class camo {
        label = "Camo";
        values[] = { "black", "mcblack", "multicam", "od", "tan", "tropic" };
        class black   { label = "Black"; };
        class mcblack { label = "Multicam Black"; };
        class multicam{ label = "Multicam"; };
        class od      { label = "OD Green"; };
        class tan     { label = "Tan"; };
        class tropic  { label = "Tropic"; };
    };
};


class rtg_ace_expanded_helmet_viper {
    label   = "Viper Helmets";
    author  = "RTG";
    options[] = { "camo", "style" };

    class camo {
        label = "Camouflage";
        values[] = { "blk", "grn", "tan" };
        class blk { label = "Black"; }
        class grn { label = "Green"; }
        class tan { label = "Tan"; }
    };

    class style {
        label = "Style";
        values[] = { "base", "hc", "rails" };
        class base  { label = "Base"; }
        class hc    { label = "Hard Cover"; }
        class rails { label = "Rails"; }
    };
};

 class rtg_ace_expanded_helmet_viper_cover {
    label = "Viper Helmet Covers";
    author = "RTG";
    options[] = { "style", "terrain", "scrim" };

    class style {
        label = "Camo Style";
        values[] = { "serp", "ts"};
        class serp { label = "Serpent"; };
        class ts   { label = "Trollskin"; };

    };

    class terrain {
        label = "Terrain";
        values[] = { "desert", "woodland" };
        class desert   { label = "Desert"; };
        class woodland { label = "Woodland"; };
    };

    class scrim {
        label = "Scrim";
        values[] = { "yes", "no" };
        class yes { label = "Yes"; };
        class no  { label = "No"; };
    };
};


class rtg_ace_expanded_helmet_cvc {
    label = "RTG CVC Helmet";
    author = "Shrike";
    options[] = { "variant" };

    class variant {
        label = "Color";
        values[] = { "green", "tan" };
        class green { label = "Green"; };
        class tan { label = "Tan"; };
    };
};

class rtg_ace_expanded_helmet_altyn {
    label = "RTG Altyn Helmet";
    author = "Shrike";
    options[] = { "variant" };

    class variant {
        label = "Configuration";
        values[] = { "novisor", "open", "closed" };
        class novisor { label = "No Visor"; };
        class open    { label = "Visor Up"; };
        class closed  { label = "Visor Down"; };
    };
};

class rtg_ace_expanded_cbrn {
    label = "CBRN Suit";
    options[] = { "camo" };
    class camo {
        label = "Pattern";
        values[] = { "M81", "MTP", "EAF", "Tropic" };
        class M81    { label = "M81";     description = "Woodland CBRN Suit"; };
        class MTP    { label = "MTP";     description = "Temperate Camo CBRN Suit"; };
        class EAF    { label = "EAF";     description = "EAF CBRN Suit"; };
        class Tropic { label = "Tropic";  description = "Tropical CBRN Suit"; };
    };
};

class rtg_ace_expanded_formal {
    label = "Formal Suit";
    options[] = { "camo" };
    class camo {
        label = "Style";
        values[] = { "Black", "Blue", "Grey", "Khaki", "TShirtBlack", "TShirtGrey" };
        class Black       { label = "Black";        description = "Black Formal Suit"; };
        class Blue        { label = "Blue";         description = "Blue Formal Suit"; };
        class Grey        { label = "Grey";         description = "Grey Formal Suit"; };
        class Khaki       { label = "Khaki";        description = "Khaki Formal Suit"; };
        class TShirtBlack { label = "TShirt Black";description = "Black T‑Shirt Formal"; };
        class TShirtGrey  { label = "TShirt Grey"; description = "Grey T‑Shirt Formal"; };
    };
};

class rtg_ace_expanded_jeans {
    label = "Jeans";
    
    options[] = {"bottom", "top", "style"};
    class bottom
    {
        label = "Jean Colour";
        values[] = {"black", "blue"};
        class black
        {
            label = "Black";
            description = "Black Jeans";
        };
        class blue
        {
            label = "Blue";
            description = "Blue Jeans";
        };
    };
    class top
    {
        label = "Top Type";
        values[] = {"jacket", "shirt", "shirtcut", "tshirt"};
        class jacket
        {
            label = "Jacket";
            description = "Jacket";
        };
        class shirt
        {
            label = "Shirt";
            description = "Shirt";
        };
        class shirtcut
        {
            label = "Rolled Shirt";
            description = "Rolled Shirt";
        };
        class tshirt
        {
            label = "T-Shirt";
            description = "T-Shirt";
        };
    };
    class style
    {
        label = "Colour";
        values[] = {"black", "od", "red", "blue", "white", "tan", "mc", "gray", "mcb"};
        class black
        {
            label = "Black";
            description = "Black";
        };
        class od
        {
            label = "Olive Drab";
            description = "Olive Drab";
        };
        class red
        {
            label = "Red";
            description = "Red";
        };
        class blue
        {
            label = "Blue";
            description = "Blue";
        };
        class white
        {
            label = "White";
            description = "White";
        };
        class tan
        {
            label = "Tan";
            description = "Tan";
        };
        class mc
        {
            label = "Multicam";
            description = "MC";
        };
        class gray
        {
            label = "Gray";
            description = "Gray";
        };
        class mcb
        {
            label = "PJCP";
            description = "PJCP";
        };
    };
};

class rtg_ace_expanded_ech {
    label = "ECH";
    
    options[] = {"camo"};
    class camo
    {
        label = "Jean Colour";
        values[] = {"default", "black", "desert", "grass", "sand", "snakeskin", "tropic", "woodland", "oga", "od"};
        class default
        {
            label = "Default";
            description = "Default";
        };
        class black
        {
            label = "Black";
            description = "Black";
        };
        class desert
        {
            label = "Desert";
            description = "Desert";
        };
        class grass
        {
            label = "Grass";
            description = "Grass";
        };
        class sand
        {
            label = "Sand";
            description = "Sand";
        };
        class snakeskin
        {
            label = "Snake Skin";
            description = "Snake Skin";
        };
        class tropic
        {
            label = "Tropic";
            description = "Tropic";
        };
        class woodland
        {
            label = "Woodland";
            description = "Woodland";
        };
        class oga
        {
            label = "OGA";
            description = "OGA";
        };
        class od
        {
            label = "Olive Drab";
            description = "Olive Drab";
        };
    };
};

class rtg_ace_expanded_cargo {
    label = "Cargo";
    
    options[] = {"bottom", "top", "style"};
    class bottom
    {
        label = "Cargo Colour";
        values[] = {"mcb", "black", "tan", "mc", "od"};
        class mcb
        {
            label = "BJCP";
            description = "BJCP Cargo";
        };
        class black
        {
            label = "Black";
            description = "Black Cargo";
        };
        class tan
        {
            label = "Tan";
            description = "Tan Cargo";
        };
        class mc
        {
            label = "Multicam";
            description = "MC Cargo";
        };
        class od
        {
            label = "Olive Drab";
            description = "OD Cargo";
        };
    };
    class top
    {
        label = "Top Type";
        values[] = {"jacket", "shirt", "shirtcut", "tshirt"};
        class jacket
        {
            label = "Jacket";
            description = "Jacket";
        };
        class shirt
        {
            label = "Shirt";
            description = "Shirt";
        };
        class shirtcut
        {
            label = "Rolled Shirt";
            description = "Rolled Shirt";
        };
        class tshirt
        {
            label = "T-Shirt";
            description = "T-Shirt";
        };
    };
    class style
    {
        label = "Colour";
        values[] = {"black", "od", "red", "blue", "white", "tan", "mc", "gray", "mcb"};
        class black
        {
            label = "Black";
            description = "Black";
        };
        class od
        {
            label = "Olive Drab";
            description = "Olive Drab";
        };
        class red
        {
            label = "Red";
            description = "Red";
        };
        class blue
        {
            label = "Blue";
            description = "Blue";
        };
        class white
        {
            label = "White";
            description = "White";
        };
        class tan
        {
            label = "Tan";
            description = "Tan";
        };
        class mc
        {
            label = "Multicam";
            description = "MC";
        };
        class gray
        {
            label = "Gray";
            description = "Gray";
        };
        class mcb
        {
            label = "BJCP";
            description = "BJCP";
        };
    };
};

class rtg_ace_expanded_g3 {
    label = "G3";
    
    options[] = {"top", "camo"};
    class top
    {
        label = "Shirt Type";
        values[] = {"shirt", "rolled", "tshirt"};
        class shirt
        {
            label = "Shirt";
            description = "Shirt";
        };
        class rolled
        {
            label = "Rolled Shirt";
            description = "Rolled Shirt";
        };
        class tshirt
        {
            label = "T-Shirt";
            description = "T-Shirt";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"alpine", "arid", "m81", "mcb", "mc", "mct", "tan", "grey", "od", "ph", "choco", "amcu"};
        class alpine
        {
            label = "Alpine";
            description = "Alpine";
        };
        class arid
        {
            label = "Arid";
            description = "Arid";
        };
        class m81
        {
            label = "M81";
            description = "M81";
        };
        class mcb
       {
            label = "Multicam Black";
            description = "MCB";
        };
        class mc
        {
            label = "Multicam";
            description = "MC";
        };
        class mct
        {
            label = "Multicam Tropic";
            description = "MCT";
        };
        class tan
        {
            label = "Tan";
            description = "Tan";
        };
        class grey
        {
            label = "Gray";
            description = "Gray";
        };
        class od
        {
            label = "Olive Drab";
            description = "Olive Drab";
        };
        class ph
        {
            label = "Project Honor";
            description = "Project Honor";
        };
        class choco
        {
            label = "Choc-Chip";
            description = "Choculate Chip";
        };
        class amcu
        {
            label = "AMCU";
            description = "AMCU";
        };
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