// Ace Arsenal Expanded
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

class rtg_ace_expanded_xm250
{
    label = "XM250";
    author = "Shrike";
    options[] = {"camo"};
    class camo
    {
        values[] = {"blk","tan"};
        class blk
        {
            label = "Black";
        };
        class tan
        {
            label = "Tan";
        };
    };
};

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
            label = "FN M240B";
            description = "FN M240B";
        };
        class wood
        {
            label = "FN Mag";
            description = "FN MAG 60-20";
        };
        class short
        {
            label = "Shorty";
            description = "FN MAG 10-10";
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

// M16A4
class rtg_ace_expanded_m16a4 {
    label = "M16A4";
    options[] = {"camo", "attachment"};
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
    class attachment
    {
        label = "Attachment";
        values[] = {"N", "FG", "GL"};
        class N
        {
            label = "None";
            description = "None";
        };
        class FG
        {
            label = "FG";
            description = "Grip";
        };
        class GL
        {
            label = "GL";
            description = "Grenade Launcher";
        };
    };
};

// M4A1
class rtg_ace_expanded_m4a1 {
    label = "M4A1";
    options[] = {"camo", "attachment", "barrel"};
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
    class attachment
    {
        label = "Attachment";
        values[] = {"N", "FG", "GL"};
        class N
        {
            label = "None";
            description = "None";
        };
        class GL
        {
            label = "GL";
            description = "Grenade Launcher";
        };
    };
    class barrel
    {
        label = "Barrel";
        values[] = {"S", "L"};
        class S
        {
            label = "CQB";
            description = "Close-Quarter Battle";
        };
        class L
        {
            label = "MR";
            description = "Mid Range";
        };
    };
};

class rtg_ace_expanded_m4a1_9 {
    label = "M4A1 9mm";
    options[] = {"camo", "attachment", "barrel"};
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
    class attachment
    {
        label = "Attachment";
        values[] = {"N", "FG", "GL"};
        class N
        {
            label = "None";
            description = "None";
        };
        class GL
        {
            label = "GL";
            description = "Grenade Launcher";
        };
    };
    class barrel
    {
        label = "Barrel";
        values[] = {"S", "L"};
        class S
        {
            label = "CQB";
            description = "Close-Quarter Battle";
        };
        class L
        {
            label = "MR";
            description = "Mid Range";
        };
    };
};

// M4A4
class rtg_ace_expanded_m4a4 {
    label = "M4A4";
    options[] = {"camo", "attachment"};
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
    class attachment
    {
        label = "Attachment";
        values[] = {"AFG", "VFG", "GL"};
        class GL
        {
            label = "GL";
            description = "Grenade Launcher";
        };
        class AFG
        {
            label = "AFG";
            description = "Angled Foregrip";
        };
        class VFG
        {
            label = "VFG";
            description = "Vertical Foregrip";
        };
    };
};

// UMP-50
class rtg_ace_expanded_ump50 {
    label = "UMP50";
    options[] = {"camo", "attachment"};
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
    class attachment
    {
        label = "Attachment";
        values[] = {"AFG", "VFG", "N"};
        class N
        {
            label = "None";
            description = "None";
        };
        class AFG
        {
            label = "AFG";
            description = "Angled Foregrip";
        };
        class VFG
        {
            label = "VFG";
            description = "Vertical Foregrip";
        };
    };
};

// MP5
class rtg_ace_expanded_mp5 {
    label = "MP5";
    options[] = {"camo", "attachment"};
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
    class attachment
    {
        label = "Attachment";
        values[] = {"AFG", "VFG", "N"};
        class n
        {
            label = "None";
            description = "None";
        };
        class AFG
        {
            label = "AFG";
            description = "Angled Foregrip";
        };
        class VFG
        {
            label = "VFG";
            description = "Vertical Foregrip";
        };
    };
};

// ACWP
class ACWP_416_105
{
    label = "HK416 D10 10.5";
    author = "SWGCOM";
    options[] = {"camo","grip","stock"};
    class camo
    {
        label = "Camo";
        values[] = {"black","don","tan"};
        changeingame = 0;
        class black
        {
            label = "Black";
            description = "Black Camo";
        };
        class don
        {
            label = "Don";
            description = "Don Camo";
        };
        class tan
        {
            label = "Tan";
            description = "Tan Camo";
        };
    };
    class grip
    {
        label = "Grip";
        author = "SWGCOM";
        values[] = {"none","afg"};
        class none
        {
            label = "None";
            description = "No Grip";
        };
        class afg
        {
            label = "AFG";
            description = "Angled Foregrip";
        };
    };
    class stock
    {
        label = "Stock";
        author = "SWGCOM";
        values[] = {"standard","ctr"};
        class standard
        {
            label = "Standard";
            description = "Standard";
        };
        class ctr
        {
            label = "CTR";
            description = "CTR";
        };
    };
};
class ACWP_SR25
{
    label = "SR-25";
    author = "SWGCOM";
    options[] = {"camo","grip","stock"};
    class camo
    {
        label = "Camo";
        values[] = {"black","camo"};
        changeingame = 0;
        class black
        {
            label = "Black";
            description = "Black Camo";
        };
        class camo
        {
            label = "Camo";
            description = "Camo";
        };
    };
    class grip
    {
        label = "Grip";
        author = "SWGCOM";
        values[] = {"none","vfg"};
        class none
        {
            label = "None";
            description = "No Grip";
        };
        class vfg
        {
            label = "VFG";
            description = "Vertical Foregrip";
        };
    };
    class stock
    {
        label = "Stock";
        author = "SWGCOM";
        values[] = {"standard","ec"};
        class standard
        {
            label = "Standard";
            description = "Standard";
        };
        class ec
        {
            label = "EC";
            description = "EC";
        };
    };
};
class ACWP_M4A1_105
{
    label = "M4A1 10.5";
    author = "SWGCOM";
    options[] = {"camo","grip"};
    class camo
    {
        label = "Camo";
        values[] = {"black","don","net","tan","blk","blk_don","blk_net","blk_tan"};
        changeingame = 0;
        class black
        {
            label = "Black";
            description = "Black Camo";
        };
        class don
        {
            label = "Don";
            description = "Don Camo";
        };
        class net
        {
            label = "Net";
            description = "Net Camo";
        };
        class tan
        {
            label = "Tan";
            description = "Tan Camo";
        };
        class blk
        {
            label = "Black (BLK)";
            description = "Black Camo";
        };
        class blk_don
        {
            label = "Don (BLK)";
            description = "Don Camo";
        };
        class blk_net
        {
            label = "Net (BLK)";
            description = "Net Camo";
        };
        class blk_tan
        {
            label = "Tan (BLK)";
            description = "Tan Camo";
        };
    };
    class grip
    {
        label = "Grip";
        author = "SWGCOM";
        values[] = {"none","afg","kag","mod3","roe","tango"};
        class none
        {
            label = "None";
            description = "No Grip";
        };
        class afg
        {
            label = "AFG";
            description = "Angled Foregrip";
        };
        class kag
        {
            label = "KAG";
            description = "Kinesthetic Angled Grip";
        };
        class mod3
        {
            label = "MOD3";
            description = "BCM Gunfighter MOD3";
        };
        class roe
        {
            label = "ROE";
            description = "ROE Grip";
        };
        class tango
        {
            label = "Tango";
            description = "Tango Grip";
        };
    };
};
class ACWP_M4A1_145
{
    label = "M4A1 14.5";
    author = "SWGCOM";
    options[] = {"camo","grip","rail"};
    class camo
    {
        label = "Camo";
        values[] = {"black","don","net","tan","blk","blk_don","blk_net","blk_tan"};
        changeingame = 0;
        class black
        {
            label = "Black";
            description = "Black Camo";
        };
        class don
        {
            label = "Don";
            description = "Don Camo";
        };
        class net
        {
            label = "Net";
            description = "Net Camo";
        };
        class tan
        {
            label = "Tan";
            description = "Tan Camo";
        };
        class blk
        {
            label = "Black (BLK)";
            description = "Black Camo";
        };
        class blk_don
        {
            label = "Don (BLK)";
            description = "Don Camo";
        };
        class blk_net
        {
            label = "Net (BLK)";
            description = "Net Camo";
        };
        class blk_tan
        {
            label = "Tan (BLK)";
            description = "Tan Camo";
        };
    };
    class grip
    {
        label = "Grip";
        author = "SWGCOM";
        values[] = {"none","afg","kag","mod3","roe","tango"};
        class none
        {
            label = "None";
            description = "No Grip";
        };
        class afg
        {
            label = "AFG";
            description = "Angled Foregrip";
        };
        class kag
        {
            label = "KAG";
            description = "Kinesthetic Angled Grip";
        };
        class mod3
        {
            label = "MOD3";
            description = "BCM Gunfighter MOD3";
        };
        class roe
        {
            label = "ROE";
            description = "ROE Grip";
        };
        class tango
        {
            label = "Tango";
            description = "Tango Grip";
        };
    };
    class rail
    {
        label = "Rail";
        author = "SWGCOM";
        values[] = {"ris","troy"};
        class ris
        {
            label = "RIS";
            description = "Rail Interface System";
        };
        class troy
        {
            label = "Troy";
            description = "Troy Rail";
        };
    };
};
class ACWP_M4A5_145_GL
{
    label = "M4A5 14.5 GL";
    author = "SWGCOM";
    options[] = {"camo","grip"};
    class camo
    {
        label = "Camo";
        values[] = {"black","don","net","tan"};
        changeingame = 0;
        class black
        {
            label = "Black";
            description = "Black Camo";
        };
        class don
        {
            label = "Don";
            description = "Don Camo";
        };
        class net
        {
            label = "Net";
            description = "Net Camo";
        };
        class tan
        {
            label = "Tan";
            description = "Tan Camo";
        };
    };
    class grip
    {
        label = "Grip";
        author = "SWGCOM";
        values[] = {"none","vfg"};
        class none
        {
            label = "None";
            description = "No Grip";
        };
        class vfg
        {
            label = "VFG";
            description = "Vertical Foregrip";
        };
    };
};
class ACWP_HP
{
    label = "High Power";
    author = "SWGCOM";
    options[] = {"camo"};
    class camo
    {
        label = "Camo";
        values[] = {"silver","black","wood"};
        changeingame = 0;
        class silver
        {
            label = "Silver";
            description = "Silver Finish";
        };
        class black
        {
            label = "Black";
            description = "Black Camo";
        };
        class wood
        {
            label = "Wood";
            description = "Black & Wood Finish";
        };
    };
};
class ACWP_Glock
{
    label = "Glock 17/19";
    author = "SWGCOM";
    options[] = {"camo"};
    class camo
    {
        label = "Camo";
        values[] = {"black","hlmnd","sim"};
        changeingame = 0;
        class black
        {
            label = "Black";
            description = "Black Camo";
        };
        class hlmnd
        {
            label = "HLMND";
            description = "HLMND";
        };
        class sim
        {
            label = "Simunition";
            description = "Simunition";
        };
    };
};
class ACWP_USP
{
    label = "HK USP";
    author = "SWGCOM";
    options[] = {"camo"};
    class camo
    {
        label = "Camo";
        values[] = {"black","tan","tbrk"};
        changeingame = 0;
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
        class tbrk
        {
            label = "TBRK";
            description = "TBRK Camo";
        };
    };
};

// SR-16
class rtg_ace_expanded_sr16 {
    label = "SR-16";
    options[] = {"camo", "stock", "barrel"};
    class camo
    {
        label = "Camo";
        values[] = {"BLK", "CYT"};
        class CYT
        {
            label = "Sand";
            description = "Sand Camo";
        };
        class BLK
        {
            label = "Black";
            description = "Black Camo";
        };
    };
    class stock
    {
        label = "Stock";
        values[] = {"CTR", "IMOD", "LMT", "MFT"};
        class CTR
        {
            label = "CTR";
            description = "CTR";
        };
        class IMOD
        {
            label = "IMOD";
            description = "IMOD";
        };
        class LMT
        {
            label = "LMT";
            description = "LMT";
        };
        class MFT
        {
            label = "MFT";
            description = "MFT";
        };
    };
    class barrel
    {
        label = "Barrel";
        values[] = {"MR", "CQB"};
        class MR
        {
            label = "MR";
            description = "Mid Range";
        };
        class CQB
        {
            label = "CQB";
            description = "Close-Quarter Battle";
        };
    };
};

// MCX
class rtg_ace_expanded_mcx {
    label = "MCX";
    options[] = {"camo", "frame"};
    class camo
    {
        label = "Camo";
        values[] = {"BLK", "CYT"};
        class CYT
        {
            label = "Sand";
            description = "Sand Camo";
        };
        class BLK
        {
            label = "Black";
            description = "Black Camo";
        };
    };
    class frame
    {
        label = "Model";
        values[] = {"Virtus", "Spear", "Virtus300"};
        class Virtus
        {
            label = "Virtus";
            description = "Virtus 5.56mm";
        };
        class Spear
        {
            label = "Spear";
            description = "MCX Spear";
        };
        class Virtus300
        {
            label = "Virtus .300";
            description = "Virtus .300 BLK";
        };
    };
};

// SCAR H
class rtg_ace_expanded_scar_h {
    label = "SCAR H";
    options[] = {"camo", "attachment", "barrel"};
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
    class attachment
    {
        label = "Attachment";
        values[] = {"N", "FG", "GL"};
        class N
        {
            label = "None";
            description = "None";
        };
        class GL
        {
            label = "GL";
            description = "Grenade Launcher";
        };
    };
    class barrel
    {
        label = "Barrel";
        values[] = {"S", "L"};
        class S
        {
            label = "CQB";
            description = "Close-Quarter Battle";
        };
        class L
        {
            label = "MR";
            description = "Mid Range";
        };
    };
};

// SCAR L
class rtg_ace_expanded_scar_l {
    label = "SCAR L";
    options[] = {"camo", "attachment", "barrel"};
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
    class attachment
    {
        label = "Attachment";
        values[] = {"N", "FG", "GL"};
        class N
        {
            label = "None";
            description = "None";
        };
        class GL
        {
            label = "GL";
            description = "Grenade Launcher";
        };
    };
    class barrel
    {
        label = "Barrel";
        values[] = {"S", "L"};
        class S
        {
            label = "CQB";
            description = "Close-Quarter Battle";
        };
        class L
        {
            label = "MR";
            description = "Mid Range";
        };
    };
};

// M14
class rtg_ace_expanded_m14 {
    label = "M14";
    options[] = {"camo", "attachment", "barrel"};
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
    class attachment
    {
        label = "Attachment";
        values[] = {"RIS", "PIC"};
        class RIS
        {
            label = "RIS";
            description = "RIS Handguard";
        };
        class PIC
        {
            label = "Picatinny";
            description = "Picatinny Rail";
        };
    };
    class barrel
    {
        label = "Barrel";
        values[] = {"S", "L"};
        class S
        {
            label = "CQB";
            description = "Close-Quarter Battle";
        };
        class L
        {
            label = "MR";
            description = "Mid Range";
        };
    };
};

// GROT
class rtg_ace_expanded_msbs {
    label = "MSBS";
    options[] = {"camo", "attachment", "barrel"};
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
    class attachment
    {
        label = "Attachment";
        values[] = {"N", "FG", "GL"};
        class N
        {
            label = "None";
            description = "None";
        };
        class GL
        {
            label = "GL";
            description = "Grenade Launcher";
        };
    };
    class barrel
    {
        label = "Barrel";
        values[] = {"S", "L"};
        class S
        {
            label = "CQB";
            description = "Close-Quarter Battle";
        };
        class L
        {
            label = "MR";
            description = "Mid Range";
        };
    };
};

// HK416
class rtg_ace_expanded_hk416 {
    label = "HK-416";
    options[] = {"camo", "stock", "handguard", "barrel"};
    class camo
    {
        label = "Camo";
        values[] = {"BLK", "CYT", "BLKDES"};
        class CYT
        {
            label = "Sand";
            description = "Sand Camo";
        };
        class BLK
        {
            label = "Black";
            description = "Black Camo";
        };
        class BLKDES : BLK
        {
            label = "Black Desert";
            description = "Black Desert Camo";
        };
    };
    class stock
    {
        label = "Stock";
        values[] = {"CTR", "IMOD", "LMT", "MFT"};
        class CTR
        {
            label = "CTR";
            description = "CTR";
        };
        class IMOD
        {
            label = "IMOD";
            description = "IMOD";
        };
        class LMT
        {
            label = "LMT";
            description = "LMT";
        };
        class MFT
        {
            label = "MFT";
            description = "MFT";
        };
    };
    class handguard
    {
        label = "Handguard";
        values[] = {"RIS", "MW", "RAHG", "SMR"};
        class RIS
        {
            label = "RIS";
            description = "RIS";
        };
        class MW
        {
            label = "Midwest";
            description = "Midwest";
        };
        class RAHG
        {
            label = "RAHG";
            description = "RAHG";
        };
        class SMR
        {
            label = "SMR";
            description = "SMR";
        };
    };
    class barrel
    {
        label = "Barrel";
        values[] = {"MR", "CQB"};
        class MR
        {
            label = "MR";
            description = "Mid Range";
        };
        class CQB
        {
            label = "CQB";
            description = "Close-Quarter Battle";
        };
    };
};