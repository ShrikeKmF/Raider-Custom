// Ace Arsenal Expanded
// M249
class rtg_ace_expanded_m249 {
    label = "M249";
    author = "Shrike";
    options[] = {"barrel", "calibre", "stock"};
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
        values[] = {"N556", "N762", "N300"};
        class N556
        {
            label = "5.56";
            description = "5.56 Nato";
        };
        class N762
        {
            label = "7.62";
            description = "7.62 Nato";
        };
        class N300
        {
            label = ".300";
            description = ".300 Blackout";
        };
    };
    class stock
    {
        label = "Stock";
        values[] = {"fixed","para", "pip"};
        class fixed
        {
            label = "fixed";
            description = "fixed";
        };
        class para
        {
            label = "Para";
            description = "Para";
        };
        class pip
        {
            label = "Pip";
            description = "Colapsable";
        };
    };
};

// MP5
class rtg_ace_expanded_mp5 {
    label = "MP5";
    author = "Shrike";
    options[] = {"form"};
    class form
    {
        label = "Form Factor";
        values[] = {"short","long", "sd"};
        class short
        {
            label = "MP5K";
            description = "Short Barrel";
        };
        class long
        {
            label = "MP5A2";
            description = "Long Barrel";
        };
        class sd
        {
            label = "MP5SD6";
            description = "Suppressed Barrel";
        };
    };
};

// AUG
class rtg_ace_expanded_aug {
    label = "AUG";
    author = "Shrike";
    options[] = {"barrel", "camo"};
    class barrel
    {
        label = "Barrel";
        values[] = {"para", "rifle", "hbar"};
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
        class hbar
        {
            label = "HBAR";
            description = "HBAR";
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
};

// AUG GL
class rtg_ace_expanded_aug_gl {
    label = "AUG GL";
    author = "Shrike";
    options[] = {"camo"};
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
};

// HK-416
class rtg_ace_expanded_hk416 {
    label = "HK-416";
    author = "Shrike";
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
    author = "Shrike";
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
    author = "Shrike";
    options[] = {"camo"};
    class camo
    {
        label = "Camo";
        values[] = {"white","desert", "fiberglass", "woodland"};
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
    };
};

// G3A3
class rtg_ace_expanded_g3a3 {
    label = "G3A3";
    author = "Shrike";
    options[] = {"grip"};
    class grip
    {
        label = "Handguard";
        values[] = {"ris","thin", "wide"};
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
    };
};

// MK-18
class rtg_ace_expanded_mk18 {
    label = "MK-18";
    author = "Shrike";
    options[] = {"stock", "camo"};
    class stock
    {
        label = "Stock";
        values[] = {"default","sopmod"};
        class default
        {
            label = "Default";
            description = "Defualt Stock";
        };
        class sopmod
        {
            label = "SOPMOD";
            description = "SOPMOD Stock";
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

// SAMR2
class rtg_ace_expanded_samr {
    label = "LAR-15";
    author = "Shrike";
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
    author = "Shrike";
    options[] = {"camo"};
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
};

class rtg_ace_expanded_grot_gl {
    label = "Grot GL";
    author = "Shrike";
    options[] = {"gl", "camo"};
    class gl
    {
        label = "Grenade Launcher";
        values[] = {"gl","sg"};
        class gl
        {
            label = "GL";
            description = "Grenade Launcher";
        };
        class sg
        {
            label = "Shotgun";
            description = "Shotgun";
        };
    };
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
};

// Scar
class rtg_ace_expanded_scar {
    label = "SCAR";
    author = "Shrike";
    options[] = {"barrel", "calibre", "camo"};
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
};

// Scar SSR
class rtg_ace_expanded_scarssr {
    label = "SCAR SSR";
    author = "Shrike";
    options[] = {"camo"};
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
};

// Scar GL
class rtg_ace_expanded_scar_gl {
    label = "SCAR EGLM";
    author = "Shrike";
    options[] = {"barrel", "calibre", "camo"};
    class barrel
    {
        label = "Barrel";
        values[] = { "cqb", "std"};
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
};

// M4A1
class rtg_ace_expanded_m4a1 {
    label = "M4A1";
    author = "Shrike";
    options[] = {"form", "stock", "camo"};
    class form
    {
        label = "Form Factor";
        values[] = {"m4a1", "pip", "block2"};
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
    };
    class stock
    {
        label = "Stock";
        values[] = {"default","magpull"};
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

// M16A4
class rtg_ace_expanded_m16 {
    label = "M16A4";
    author = "Shrike";
    options[] = {"form"};
    class form
    {
        label = "Form Factor";
        values[] = {"flattop", "carryhandle", "imod"};
        class flattop
        {
            label = "Flattop";
            description = "M16A4 Flattop";
        };
        class carryhandle
        {
            label = "Carryhandle";
            description = "M16A4 Carryhandle";
        };
        class imod
        {
            label = "IMOD";
            description = "IMOD Stock";
        };
    };
};

// AK-47
class rtg_ace_expanded_ak47 {
    label = "AK47";
    author = "Shrike";
    options[] = {"form", "barrel", "stock", "camo"};
    class form
    {
        label = "Form Factor";
        values[] = {"ak103", "ak104", "ak105", "ak74m", "ak74n", "ak15", "akm", "aks74n"};
        class ak103
        {
            label = "AK-103";
            description = "AK-103";
        };
        class ak104
        {
            label = "AK-104";
            description = "AK-104";
        };
        class ak105
        {
            label = "AK-105";
            description = "AK-105";
        };
        class ak74m
        {
            label = "AK-74M";
            description = "AK-74M";
        };
        class ak74n
        {
            label = "AK-74N";
            description = "AK-74N";
        };
        class ak15
        {
            label = "AK-15";
            description = "AK-15";
        };
        class akm
        {
            label = "AKM";
            description = "AKM";
        };
        class aks74n
        {
            label = "AKS-74N";
            description = "AKS-74N";
        };
    };
    class barrel
    {
        label = "Barrel";
        values[] = {"default","short"};
        class default
        {
            label = "Default";
            description = "Defualt barrel";
        };
        class short
        {
            label = "Short";
            description = "Short barrel";
        };
    };
    class stock
    {
        label = "Stock";
        values[] = {"b13","b33", "mmr"};
        class b13
        {
            label = "B-13";
            description = "B-13";
        };
        class b33
        {
            label = "Zenitco";
            description = "Zenitco";
        };
        class mmr
        {
            label = "UUK";
            description = "UUK";
        };
    };
    class camo
    {
        label = "Camo";
        values[] = {"standard","plum", "desert", "camo"};
        class standard
        {
            label = "Standard";
            description = "Standard Camo";
        };
        class plum
        {
            label = "Plum";
            description = "Plum Camo";
        };
        class desert
        {
            label = "Desert";
            description = "Desert Camo";
        };
        class camo
        {
            label = "Camo";
            description = "Camo Camo";
        };
    };
};

// MP7A2
class rtg_ace_expanded_mp7 {
    label = "MP7A2";
    author = "Shrike";
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

// QBZ
class rtg_ace_expanded_qbz {
    label = "QBZ";
    author = "Shrike";
    options[] = {"camo"};
    class camo
    {
        label = "Camo";
        values[] = {"black", "green", "hex"};
        class black
        {
            label = "Black";
            description = "Black Camo";
        };
        class green
        {
            label = "Green Hex";
            description = "Green Hex Camo";
        };
        class hex
        {
            label = "Hex";
            description = "Hex Camo";
        };
    };
};

// QBZ  GL
class rtg_ace_expanded_qbz_gl {
    label = "QBZ GL";
    author = "Shrike";
    options[] = {"camo"};
    class camo
    {
        label = "Camo";
        values[] = {"black", "green", "hex"};
        class black
        {
            label = "Black";
            description = "Black Camo";
        };
        class green
        {
            label = "Green Hex";
            description = "Green Hex Camo";
        };
        class hex
        {
            label = "Hex";
            description = "Hex Camo";
        };
    };
};

// QBZ LSW
class rtg_ace_expanded_qbz_lsw {
    label = "QBZ LSW";
    author = "Shrike";
    options[] = {"camo"};
    class camo
    {
        label = "Camo";
        values[] = {"black", "green", "hex"};
        class black
        {
            label = "Black";
            description = "Black Camo";
        };
        class green
        {
            label = "Green Hex";
            description = "Green Hex Camo";
        };
        class hex
        {
            label = "Hex";
            description = "Hex Camo";
        };
    };
};

class rtg_ace_expanded_f2000 {
    label = "F2000";
    author = "Shrike";
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
    author = "Shrike";
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
    author = "Shrike";
    options[] = {"style", "camo"};
    class style
    {
        label = "Style";
        values[] = {"tac", "optic"};
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