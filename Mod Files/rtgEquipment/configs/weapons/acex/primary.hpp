// Ace Arsenal Expanded
// Minimi
class rtg_ace_expanded_minimi {
    label = "Minimi";
    
    options[] = {"camo", "barrel", "calibre", "stock"};
    class camo
    {
        label = "Camo";
        values[] = {"blk","tan", "grn"};
        class blk
        {
            label = "Black";
            description = "Black";
        };
        class tan
        {
            label = "Tan";
            description = "Tan";
        };
        class grn
        {
            label = "Green";
            description = "Green";
        };
    };
    class barrel
    {
        label = "Barrel";
        values[] = {"short", "long"};
        class short
        {
            label = "Short";
            description = "Short";
        }
        class long
        {
            label = "Long";
            description = "Long";
        }
    }
    class calibre
    {
        label = "Calibre";
        values[] = {"N556", "N300", "N762"};
        class N556
        {
            label = "5.56mm";
            description = "5.56mm";
        }
        class N300
        {
            label = ".300 BLK";
            description = ".300 BLK";
        }
        class N762
        {
            label = "7.62mm";
            description = "7.62mm";
        }
    }
    class stock
    {
        label = "Stock";
        values[] = {"para", "ris"};
        class para
        {
            label = "Para";
            description = "Para";
        };
        class ris
        {
            label = "RIS";
            description = "RIS";
        };
    };
};

// XM5
class rtg_ace_expanded_xm5
{
    label = "XM5";
    author = "Shrike";
    options[] = {"grip"};
    class grip
    {
        values[] = {"none","BCM"};
        class none
        {
            label = "Off";
        };
        class grip
        {
            label = "On";
        };
    };
};

// XM250
class rtg_ace_expanded_xm250
{
    label = "XM250";
    author = "Shrike";
    options[] = {"paint"};
    class paint
    {
        values[] = {"blk","tan"};
        class blk
        {
            label = "Blk";
        };
        class tan
        {
            label = "Tan";
        };
    };
};

// MP5
class rtg_ace_expanded_mp5 {
    label = "MP5";
    
    options[] = {"form", "calibre", "grip"};
    class form
    {
        label = "Form Factor";
        values[] = {"a2","a3", "a4", "a5", "sd5", "sd6"};
        class a2
        {
            label = "MP5A2";
            description = "MP5A2";
        };
        class a3
        {
            label = "MP5A3";
            description = "MP5A3";
        };
        class a4
        {
            label = "MP5A4";
            description = "MP5A4";
        };;
        class a5
        {
            label = "MP5A5";
            description = "MP5A5";
        };
        class sd5
        {
            label = "MP5SD5";
            description = "MP5SD5";
        };
        class sd6
        {
            label = "MP5SD6";
            description = "MP5SD6";
        };
    };
    class calibre
    {
        label = "Calibre";
        values[] = {"N50", "N9"};
        class N50
        {
            label = ".50 AE";
            description = ".50 Action Express";
        };
        class N9
        {
            label = "9mm";
            description = "9mm Nato";
        };
    };
    class grip
    {
        label = "Handguard";
        values[] = {"tac","std"};
        class tac
        {
            label = "Tac";
            description = "Tactical";
        };
        class std
        {
            label = "Std";
            description = "Standard";
        };
    };
    
};

// AUG
class rtg_ace_expanded_aug {
    label = "AUG";
    
    options[] = {"barrel", "camo", "gl"};
    class barrel
    {
        label = "Barrel";
        values[] = {"para", "rifle", "a1"};
        class para
        {
            label = "Para";
            description = "Para";
        };
        class rifle
        {
            label = "Rifle";
            description = "Rifle";
        };
        class a1
        {
            label = "A1";
            description = "A1";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"blue", "black", "sand", "khaki"};
        class blue
        {
            label = "Blue";
            description = "Blue";
        };
        class black
        {
            label = "Black";
            description = "Black";
        };
        class sand
        {
            label = "Sand";
            description = "Sand";
        };
        class khaki
        {
            label = "Khaki";
            description = "Khaki";
        };
    };
    class gl
    {
        label = "Underbarrel";
        values[] = {"no", "gl"};
        class no
        {
            label = "Rifle";
            description = "Rifle";
        };
        class gl
        {
            label = "GL";
            description = "GL";
        };
    };
};

// HK-416
class rtg_ace_expanded_hk416 {
    label = "HK-416";
    
    options[] = {"barrel", "calibre", "camo"};
    class barrel
    {
        label = "Barrel";
        values[] = {"short","long"};
        class short
        {
            label = "Short";
            description = "Short Barrel";
        };
        class long
        {
            label = "Long";
            description = "Long Barrel";
        };
    };
    class calibre
    {
        label = "Calibre";
        values[] = {"N556","N300", "N9"};
        class N556
        {
            label = "5.56";
            description = "5.56 Nato";
        };
        class N300
        {
            label = ".300";
            description = ".300 Blackout";
        };
        class N9
        {
            label = "9mm";
            description = "9mm Nato";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"black","sand", "khaki"};
        class black
        {
            label = "Black";
            description = "Black";
        };
        class sand
        {
            label = "Sand";
            description = "Sand";
        };
        class khaki
        {
            label = "Khaki";
            description = "Khaki";
        };
    };
};

// HK-417
class rtg_ace_expanded_hk417 {
    label = "HK-417";
    
    options[] = {"camo"};
    class camo
    {
        label = "Camo";
        values[] = {"black","sand", "khaki"};
        class black
        {
            label = "Black";
            description = "Black";
        };
        class sand
        {
            label = "Sand";
            description = "Sand";
        };
        class khaki
        {
            label = "Khaki";
            description = "Khaki";
        };
    };
};

// M14
class rtg_ace_expanded_m14 {
    label = "M14";
    
    options[] = {"camo"};
    class camo
    {
        label = "Camo";
        values[] = {"white","desert", "fiberglass", "woodland", "black"};
        class white
        {
            label = "White";
            description = "White";
        };
        class desert
        {
            label = "Desert";
            description = "Desert";
        };
        class fiberglass
        {
            label = "Fiberglass";
            description = "Fiberglass";
        };
        class woodland
        {
            label = "Woodland";
            description = "Woodland";
        };
        class black
        {
            label = "Black";
            description = "Black";
        }
    };
};

// G3A3
class rtg_ace_expanded_g3a3 {
    label = "G3A3";
    
    options[] = {"grip"};
    class grip
    {
        label = "Handguard";
        values[] = {"ris","thin", "wide", "lmg"};
        class ris
        {
            label = "RIS";
            description = "RIS Grip";
        };
        class thin
        {
            label = "Thin";
            description = "Thin Grip";
        };
        class wide
        {
            label = "Wide";
            description = "Wide Grip";
        };
        class lmg 
        {
            label = "LMG";
            description = "Light Machine Gun";
        }
    };
};

class rtg_ace_expanded_hk51 {
    label = "HK51";
    
    options[] = {"variant"};
    class variant
    {
        label = "Variant";
        values[] = {"a3","a2", "a2gl"};
        class a3
        {
            label = "A3";
            description = "Para Stock";
        };
        class a2
        {
            label = "A2";
            description = "Full Stock";
        };
        class a2gl
        {
            label = "A2 GL";
            description = "Full Stock GL";
        };
    };
};

// SAMR2
class rtg_ace_expanded_samr {
    label = "LAR-15";
    
    options[] = {"calibre"};
    class calibre
    {
        label = "Calibre";
        values[] = {"N9", "N50", "N556", "N545", "N300", "N12"};
        class N9
        {
            label = "9mm";
            description = "9mm Nato";
        };
        class N50
        {
            label = ".50";
            description = ".50 Beowulf";
        };
        class N556
        {
            label = "5.56";
            description = "5.56 Nato";
        };
        class N545
        {
            label = "5.45";
            description = "5.45mm RU";
        };
        class N300
        {
            label = ".300";
            description = ".300 Blackout";
        };
        class N12
        {
            label = "12g";
            description = "12 Gauge";
        };
    };
};

// MSBS Grot
class rtg_ace_expanded_grot {
    label = "Grot";
    
    options[] = {"camo", "calibre"};
    class camo
    {
        label = "Camo";
        values[] = {"camo", "black", "sand", "khaki"};
        class camo
        {
            label = "Camo";
            description = "Camo";
        };
        class black
        {
            label = "Black";
            description = "Black";
        };
        class sand
        {
            label = "Sand";
            description = "Sand";
        };
        class khaki
        {
            label = "Khaki";
            description = "Khaki";
        };
    };
    class calibre
    {
        label = "Calibre";
        values[] = {"N9", "N50", "N556", "N300"};
        class N9
        {
            label = "9mm";
            description = "9mm Nato";
        };
        class N50
        {
            label = ".50";
            description = ".50 Beowulf";
        };
        class N556
        {
            label = "5.56";
            description = "5.56 Nato";
        };
        class N300
        {
            label = ".300";
            description = ".300 Blackout";
        };
    };
};

// Scar
class rtg_ace_expanded_scar {
    label = "SCAR";
    
    options[] = {"barrel", "calibre", "camo", "variant"};
    class barrel
    {
        label = "Barrel";
        values[] = {"sc", "cqb", "std", "lb"};
        class sc
        {
            label = "SC";
            description = "PDW Barrel";
        };
        class cqb
        {
            label = "CQB";
            description = "CQB Barrel";
        };
        class std
        {
            label = "STD";
            description = "Standard Barrel";
        };
        class lb
        {
            label = "LB";
            description = "Long Barrel";
        };
    };
    class calibre
    {
        label = "Calibre";
        values[] = {"N556", "N300", "N762"};
        class N556
        {
            label = "5.56";
            description = "5.56 Nato";
        };
        class N300
        {
            label = ".300";
            description = ".300 Blackout";
        };
        class N762
        {
            label = "7.62";
            description = "7.62 Nato";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"black", "tan", "camo"};
        class black
        {
            label = "Black";
            description = "Black Camo";
        };
        class tan
        {
            label = "Tan";
            description = "Tan Camo";
        };
        class camo
        {
            label = "Camo";
            description = "Camo Extreme";
        };
    };
    class variant
    {
        label = "Variant";
        values[] = {"base", "ugl", "dmr"};
        class base
        {
            label = "Rifle";
            description = "Rifle";
        };
        class ugl
        {
            label = "UGL";
            description = "Grenade Launcher";
        };
        class dmr
        {
            label = "DMR";
            description = "DMR";
        };
    };
};

// M4
class rtg_ace_expanded_m4a1 {
    label = "M4";
    
    options[] = {"form", "stock", "camo"};
    class form
    {
        label = "Form Factor";
        values[] = {"m4a1", "pip", "block2", "mk18", "m16"};
        class m4a1
        {
            label = "M4A1";
            description = "Carryhandle";
        };
        class pip
        {
            label = "M4A1 PIP";
            description = "Flat Top";
        };
        class block2
        {
            label = "Block2";
            description = "Modernized M4A1";
        };
        class mk18
        {
            label = "MK-18";
            description = "Modernized M4A1";
        };
        class m16
        {
            label = "M16";
            description = "M16A4";
        };
    };
    class stock
    {
        label = "Stock";
        values[] = {"default","magpull", "carry"};
        class default
        {
            label = "Default";
            description = "Defualt Stock";
        };
        class magpull
        {
            label = "Magpull";
            description = "Magpull Stock";
        };
        class carry
        {
            label = "Carryhandle";
            description = "Carryhandle";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"standard","black", "desert", "woodland"};
        class standard
        {
            label = "Standard";
            description = "Standard Camo";
        };
        class black
        {
            label = "Black";
            description = "Black Camo";
        };
        class desert
        {
            label = "Desert";
            description = "Desert Camo";
        };
        class woodland
        {
            label = "Woodland";
            description = "Woodland Camo";
        };
    };
};

// MP7A2
class rtg_ace_expanded_mp7 {
    label = "MP7A2";
    
    options[] = {"camo"};
    class camo
    {
        label = "Camo";
        values[] = {"black", "aor1", "desert", "winter"};
        class black
        {
            label = "Black";
            description = "Black Camo";
        };
        class aor1
        {
            label = "AOR1";
            description = "AOR1 Camo";
        };
        class desert
        {
            label = "Desert";
            description = "Desert Camo";
        };
        class winter
        {
            label = "Winter";
            description = "Winter Camo";
        };
    };
};

class rtg_ace_expanded_f2000 {
    label = "F2000";
    
    options[] = {"barrel", "camo"};
    class barrel
    {
        label = "Barrel";
        values[] = {"short", "long"};
        class short
        {
            label = "Short";
            description = "Short";
        };
        class long
        {
            label = "Long";
            description = "Long";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"tan", "green"};
        class tan
        {
            label = "Tan";
            description = "Tan Camo";
        };
        class green
        {
            label = "Green";
            description = "Green Camo";
        };
    };
};

class rtg_ace_expanded_g36 {
    label = "G36";
    
    options[] = {"barrel", "calibre", "style"};
    class barrel
    {
        label = "Camo";
        values[] = {"short", "carbine", "long"};
        class short
        {
            label = "Short";
            description = "Short";
        };
        class carbine
        {
            label = "Carbine";
            description = "Carbine";
        };
        class long
        {
            label = "Long";
            description = "Long";
        };
    };
    class calibre
    {
        label = "Calibre";
        values[] = {"N556", "N300", "N9"};
        class N556
        {
            label = "5.56";
            description = "5.56 Nato";
        };
        class N300
        {
            label = ".300";
            description = ".300 Blackout";
        };
        class N9
        {
            label = "9mm";
            description = "9mm Nato";
        };
    };
    class style
    {
        label = "Style";
        values[] = {"tac", "full"};
        class tac
        {
            label = "Tactical";
            description = "";
        };
        class full
        {
            label = "Full";
            description = "Full Length Carry Handle";
        };
    };
};

class rtg_ace_expanded_p90 {
    label = "P90";
    
    options[] = {"style", "camo"};
    class style
    {
        label = "Style";
        values[] = {"tac", "optic", "Ltac", "Loptic"};
        class tac
        {
            label = "Rail";
            description = "Picatinny Rail";
        };
        class optic
        {
            label = "Optic";
            description = "Inbuilt Rail";
        };
        class Ltac
        {
            label = "Long Rail";
            description = "Picatinny Rail";
        };
        class Loptic
        {
            label = "Long Optic";
            description = "Inbuilt Rail";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"black", "camo", "hex", "khaki"};
        class black
        {
            label = "Black";
            description = "Black";
        };
        class camo
        {
            label = "Camo";
            description = "Camo";
        };
        class hex
        {
            label = "Hex";
            description = "Hex";
        };
        class khaki
        {
            label = "Khaki";
            description = "Khaki";
        };
    };
};

class rtg_ace_expanded_acr {
    label = "ACR";
    
    options[] = {"barrel", "calibre", "camo"};
    class barrel
    {
        label = "Barrel";
        values[] = {"compact", "carbine", "rifle", "long"};
        class compact
        {
            label = "Compact";
            description = "Compact";
        };
        class carbine
        {
            label = "Carbine";
            description = "Carbine";
        };
        class rifle
        {
            label = "Rifle";
            description = "Rifle";
        };
        class long
        {
            label = "Long";
            description = "Long";
        };
    };
    class calibre
    {
        label = "Calibre";
        values[] = {"N9", "N50", "N556", "N300"};
        class N9
        {
            label = "9mm";
            description = "9mm Nato";
        };
        class N50
        {
            label = ".50";
            description = ".50 Beowulf";
        };
        class N556
        {
            label = "5.56";
            description = "5.56 Nato";
        };
        class N300
        {
            label = ".300";
            description = ".300 Blackout";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"black", "sand", "khaki"};
        class black
        {
            label = "Black";
            description = "Black";
        };
        class sand
        {
            label = "Sand";
            description = "Sand";
        };
        class khaki
        {
            label = "Khaki";
            description = "Khaki";
        };
    };
};

// FAL
class rtg_ace_expanded_fal {
    label = "FAL";
    
    options[] = {"form"};
    class form
    {
        label = "Form";
        values[] = {"full", "short", "ris", "slr", "chop"};
        class full
        {
            label = "Full";
            description = "Full";
        };
        class short
        {
            label = "Short";
            description = "Short";
        };
        class ris
        {
            label = "SA-58 OSW";
            description = "SA-58 OSW";
        };
    };
};

class rtg_ace_expanded_ar15 {
    label = "AR 15";
    
    options[] = {"form", "calibre"};
    class form
    {
        label = "Form";
        values[] = {"jack", "ru556", "cqbr", "bush", "honeybadger", "dissipator", "mk18", "C7", "C8"};
        class jack
        {
            label = "Jack ";
            description = "Jack Carbine";
        };
        class ru556
        {
            label = "RU556";
            description = "RU556";
        };
        class cqbr
        {
            label = "M4LE";
            description = "M4LE";
        };
        class bush
        {
            label = "Busmaster";
            description = "Bushmaster Carbine";
        };
        class honeybadger
        {
            label = "Honeybadger";
            description = "Honeybadger";
        };
        class dissipator
        {
            label = "Dissipator";
            description = "Dissipator Carbine";
        };
        class C7
        {
            label = "C7";
            description = "Colt Canada C7";
        };
        class C8
        {
            label = "C8";
            description = "Colt Canada C8";
        };
    };
    class calibre
    {
        label = "Calibre";
        values[] = {"N556", "N9", "N300"};
        class N556
        {
            label = "5.56";
            description = "5.56 Nato";
        };
        class N9
        {
            label = "9mm";
            description = "9mm Nato";
        };
        class N300
        {
            label = ".300";
            description = ".300 Blackout";
        };
    };
};

class rtg_ace_expanded_xm8 {
    label = "XM8";
    
    options[] = {"barrel", "camo", "calibre"};
    class barrel
    {
        label = "Barrel";
        values[] = {"compact", "carbine", "long"};
        class compact
        {
            label = "Compact";
            description = "Compact";
        };
        class carbine
        {
            label = "Carbine";
            description = "Carbine";
        };
        class long
        {
            label = "Long";
            description = "Long";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"black", "sand", "green", "khaki"};
        class black
        {
            label = "Black";
            description = "Black";
        };
        class sand
        {
            label = "Sand";
            description = "Sand";
        };
        class green
        {
            label = "Green";
            description = "Green";
        };
        class khaki
        {
            label = "Khaki";
            description = "Khaki";
        };
    };
    class calibre
    {
        label = "Calibre";
        values[] = {"N9", "N50", "N556", "N300"};
        class N9
        {
            label = "9mm";
            description = "9mm Nato";
        };
        class N50
        {
            label = ".50";
            description = ".50 Beowulf";
        };
        class N556
        {
            label = "5.56";
            description = "5.56 Nato";
        };
        class N300
        {
            label = ".300";
            description = ".300 Blackout";
        };
    };
};

class rtg_ace_expanded_xm8_gl {
    label = "XM8 GL";
    
    options[] = {"camo", "calibre"};
    class camo
    {
        label = "Camo";
        values[] = {"black", "sand", "green", "khaki"};
        class black
        {
            label = "Black";
            description = "Black";
        };
        class sand
        {
            label = "Sand";
            description = "Sand";
        };
        class green
        {
            label = "Green";
            description = "Green";
        };
        class khaki
        {
            label = "Khaki";
            description = "Khaki";
        };
    };
    class calibre
    {
        label = "Calibre";
        values[] = {"N556", "N300"};
        class N556
        {
            label = "5.56";
            description = "5.56 Nato";
        };
        class N300
        {
            label = ".300";
            description = ".300 Blackout";
        };
    };
};

// M23
class rtg_ace_expanded_m23 {
    label = "G/M23";
    
    options[] = {"camo", "barrel", "launcher"};
    class camo
    {
        label = "Camo";
        values[] = {"blk", "tan", "grn"};
        class blk
        {
            label = "Black";
            description = "Black Camo";
        };
        class tan
        {
            label = "Tan";
            description = "Tan Camo";
        };
        class grn
        {
            label = "Green";
            description = "Green Camo";
        };
    };
    class barrel 
    {
        label = "Barrel";
        values[] = {"short", "long"};
        class short
        {
            label = "Carbine";
            description = "14' Barrel";
        };
        class long
        {
            label = "Rifle";
            description = "18' Barrel";
        };
    }
    class launcher 
    {
        label = "Launcher";
        values[] = {"gl", "no"};
        class gl
        {
            label = "GL";
            description = "Grenade Launcher";
        };
        class no
        {
            label = "Rifle";
            description = "No Launcher";
        };
    }
};

// HK433
class rtg_ace_expanded_hk433 {
    label = "HK-433";
    
    options[] = {"camo", "barrel", "launcher"};
    class camo
    {
        label = "Camo";
        values[] = {"blk", "tan", "grn"};
        class blk
        {
            label = "Black";
            description = "Black Camo";
        };
        class tan
        {
            label = "Tan";
            description = "Tan Camo";
        };
        class grn
        {
            label = "Green";
            description = "Green Camo";
        };
    };
    class barrel 
    {
        label = "Barrel";
        values[] = {"short", "long"};
        class short
        {
            label = "Carbine";
            description = "14' Barrel";
        };
        class long
        {
            label = "Rifle";
            description = "18' Barrel";
        };
    };
};

// M90
class rtg_ace_expanded_m90 {
    label = "G/M90";
    
    options[] = {"modern", "camo", "barrel", "launcher"};
    class modern
    {
        label = "Furniture";
        values[] = {"r", "r2", "mr", "m"};
        class r
        {
            label = "R";
            description = "";
        };
        class r2
        {
            label = "R2";
            description = "";
        };
        class mr
        {
            label = "MR";
            description = "";
        };
        class m
        {
            label = "M";
            description = "";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"blk", "grn"};
        class blk
        {
            label = "Black";
            description = "Black Camo";
        };
        class grn
        {
            label = "Green";
            description = "Green Camo";
        };
    };
    class barrel 
    {
        label = "Barrel";
        values[] = {"short", "long", "pdw"};
        class short
        {
            label = "Carbine";
            description = "14' Barrel";
        };
        class long
        {
            label = "Rifle";
            description = "18' Barrel";
        };
        class pdw
        {
            label = "PDW";
            description = "10' Barrel";
        };
    }
    class launcher 
    {
        label = "Launcher";
        values[] = {"gl", "no"};
        class gl
        {
            label = "GL";
            description = "Grenade Launcher";
        };
        class no
        {
            label = "Rifle";
            description = "No Launcher";
        };
    }
};

// Negev
class rtg_ace_expanded_negev {
    label = "Negev";
    
    options[] = {"camo", "barrel"};
    class camo
    {
        label = "Camo";
        values[] = {"blk", "grn"};
        class blk
        {
            label = "Black";
            description = "Black";
        };
        class grn
        {
            label = "Green";
            description = "Green";
        };
    };
    class barrel
    {
        label = "barrel";
        values[] = {"short", "long"};
        class short
        {
            label = "SF";
            description = "SF Barrel";
        };
        class long
        {
            label = "STD";
            description = "Standard Barrel";
        };
    };
};

// Mag60
class rtg_ace_expanded_mag60 {
    label = "FN MAG";
    
    options[] = {"furniture", "calibre"};
    class furniture
    {
        label = "Furniture";
        values[] = {"metal", "wood", "short"};
        class metal
        {
            label = "Metal";
            description = "Metal Furniture";
        };
        class wood
        {
            label = "Wood";
            description = "Wood Furniture";
        };
        class short
        {
            label = "Cut";
            description = "Cut Furniture";
        };
    };
    class calibre
    {
        label = "Calibre";
        values[] = {"N762", "N277"};
        class N762
        {
            label = "7.62";
            description = "7.62 Nato";
        };
        class N277
        {
            label = ".277";
            description = ".277 Fury";
        };
    };
};

// Benelli
class rtg_ace_expanded_benelli {
    label = "Benelli";
    
    options[] = {"length"};
    class length
    {
        label = "Length";
        values[] = {"short", "long"};
        class short
        {
            label = "Short";
            description = "Short";
        };
        class long
        {
            label = "Long";
            description = "Long";
        };
    };
};

// M60E4
class rtg_ace_expanded_m60 {
    label = "M60";
    
    options[] = {"camo", "barrel", "sight"};
    class camo
    {
        label = "Camo";
        values[] = {"blk", "tan", "grn"};
        class blk
        {
            label = "Black";
            description = "Black";
        };
        class tan
        {
            label = "Tan";
            description = "Tan";
        };
        class grn
        {
            label = "Green";
            description = "Green";
        };
    };
    class barrel
    {
        label = "Barrel";
        values[] = {"short", "long"};
        class short
        {
            label = "Short";
            description = "Short Barrel";
        };
        class long
        {
            label = "Long";
            description = "Long Barrel";
        };
    };
    class sight 
    {
        label = "Iron Sight";
        values[] = {"static", "flip"};
        class static
        {
            label = "Static";
            description = "Static Sight";
        };
        class flip
        {
            label = "Flip Up";
            description = "Flip Up Sight";
        };
    }
};

// L85
class rtg_ace_expanded_L85 {
    label = "L85A2";
    
    options[] = {"handguard", "grip"};
    class handguard
    {
        label = "Hanguard";
        values[] = {"panel", "bare"};
        class panel
        {
            label = "Panels";
            description = "Rail Panels";
        };
        class bare
        {
            label = "Bare";
            description = "Bare Hanguard";
        };
    };
    class grip
    {
        label = "Grip";
        values[] = {"vfg", "afg"};
        class vfg
        {
            label = "VFG";
            description = "VFG";
        };
        class afg
        {
            label = "AFG";
            description = "AFG";
        };
    };
};

// Vector 
class rtg_ace_expanded_vector {
    label = "Vector";
    
    options[] = {"calibre"};
    class calibre
    {
        label = "Calibre";
        values[] = {"N9", "N50"};
        class N9
        {
            label = "9mm";
            description = "9mm Nato";
        };
        class N50
        {
            label = "50 AE";
            description = "50 AE";
        };
    };
};

// CBJ
class rtg_ace_expanded_cbj {
    label = "CBJ-MS";
    
    options[] = {"camo"};
    class camo
    {
        label = "Camo";
        values[] = {"grn", "blk"};
        class grn
        {
            label = "Green";
            description = "Green Camo";
        };
        class blk
        {
            label = "Black";
            description = "Black Camo";
        };
    };
};

class rtg_ace_expanded_hcar {
    label = "HCAR";
    
    options[] = {"camo"};
    class camo
    {
        label = "Camo";
        values[] = {"grn", "blk"};
        class grn
        {
            label = "Green";
            description = "Green Camo";
        };
        class blk
        {
            label = "Black";
            description = "Black Camo";
        };
    };
};

// VHS2 
class rtg_ace_expanded_vhs2 {
    label = "VHS-2";
    
    options[] = {"length"};
    class length
    {
        label = "Length";
        values[] = {"short", "long"};
        class short
        {
            label = "Short";
            description = "Short";
        };
        class long
        {
            label = "Long";
            description = "Long";
        };
    };
};