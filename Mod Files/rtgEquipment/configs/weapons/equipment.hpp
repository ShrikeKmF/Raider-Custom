// Universal Base Classes
class ItemInfo;
class HeadgearItem;

// Jeans Base Class
// Shirt
// Blue Jeans
class Project_BJC_Shirt_Jean;
class Project_BJC_Shirt_Jean1;
class Project_BJC_Shirt_Jean2;
class Project_BJC_Shirt_Jean3;
class Project_BJC_Shirt_Cut_Jean;
class Project_BJC_Shirt_Cut_Jean1;
class Project_BJC_Shirt_Cut_Jean2;
class Project_BJC_Shirt_Cut_Jean3;

// Black Jeans
class Project_BJC_Shirt_Jean_blk;
class Project_BJC_Shirt_Jean_blk1;
class Project_BJC_Shirt_Jean_blk2;
class Project_BJC_Shirt_Jean_blk3;
class Project_BJC_Shirt_Cut_Jean_blk;
class Project_BJC_Shirt_Cut_Jean_blk1;
class Project_BJC_Shirt_Cut_Jean_blk2;
class Project_BJC_Shirt_Cut_Jean_blk3;

// Jacket
// Blue Jeans
class Project_BJC_PCU_Jean;
class Project_BJC_PCU_Jean1;
class Project_BJC_PCU_Jean2;
class Project_BJC_PCU_Jean3;
class Project_BJC_PCU_Jean4;
class Project_BJC_PCU_Jean5;

// Black Jeans
class Project_BJC_PCU_Jean_blk;
class Project_BJC_PCU_Jean_blk1;
class Project_BJC_PCU_Jean_blk2;
class Project_BJC_PCU_Jean_blk3;
class Project_BJC_PCU_Jean_blk4;
class Project_BJC_PCU_Jean_blk5;

// T-Shirt
// Blue Jeans
class Project_BJC;
class Project_BJC_1;
class Project_BJC_2;
class Project_BJC_3;

// Black Jeans
class Project_BJC_blk;
class Project_BJC_blk_1;
class Project_BJC_blk_2;
class Project_BJC_blk_3;

// Uniform Config
// Blue Jeans
// T-Shirt
class rtg_tshirt_blue_black : Project_BJC {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "tshirt";
        style =  "black";
	};
};
class rtg_tshirt_blue_white : Project_BJC_1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "tshirt";
        style =  "white";
	};
};
class rtg_tshirt_blue_od : Project_BJC_2 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "tshirt";
        style =  "od";
	};
};
class rtg_tshirt_blue_red : Project_BJC_3 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "tshirt";
        style =  "red";
	};
};

// Shirt
class rtg_shirt_blue_black : Project_BJC_Shirt_Jean {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "shirt";
        style =  "black";
	};
};
class rtg_shirt_blue_blue : Project_BJC_Shirt_Jean1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "shirt";
        style =  "blue";
	};
};
class rtg_shirt_blue_red : Project_BJC_Shirt_Jean2 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "shirt";
        style =  "red";
	};
};
class rtg_shirt_blue_white : Project_BJC_Shirt_Jean3 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "shirt";
        style =  "white";
	};
};

// Shirt Cut
class rtg_shirtcut_blue_black : Project_BJC_Shirt_Cut_Jean {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "shirtcut";
        style =  "black";
	};
};
class rtg_shirtcut_blue_blue : Project_BJC_Shirt_Cut_Jean1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "shirtcut";
        style =  "blue";
	};
};
class rtg_shirtcut_blue_red : Project_BJC_Shirt_Cut_Jean2 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "shirtcut";
        style =  "red";
	};
};
class rtg_shirtcut_blue_white : Project_BJC_Shirt_Cut_Jean3 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "shirtcut";
        style =  "white";
	};
};

// Jacket
class rtg_jacket_blue_black : Project_BJC_PCU_Jean {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "jacket";
        style =  "black";
	};
};
class rtg_jacket_blue_od : Project_BJC_PCU_Jean1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "jacket";
        style =  "od";
	};
};
class rtg_jacket_blue_tan : Project_BJC_PCU_Jean2 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "jacket";
        style =  "tan";
	};
};
class rtg_jacket_blue_gray : Project_BJC_PCU_Jean3 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "jacket";
        style =  "gray";
	};
};
class rtg_jacket_blue_mc : Project_BJC_PCU_Jean4 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "jacket";
        style =  "mc";
	};
};
class rtg_jacket_blue_mcb : Project_BJC_PCU_Jean5 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "blue";
        top =    "jacket";
        style =  "mcb";
	};
};

// Black Jeans
// T-Shirt
class rtg_tshirt_black_black : Project_BJC_blk {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "tshirt";
        style =  "black";
	};
};
class rtg_tshirt_black_white : Project_BJC_blk_1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "tshirt";
        style =  "white";
	};
};
class rtg_tshirt_black_od : Project_BJC_blk_2 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "tshirt";
        style =  "od";
	};
};
class rtg_tshirt_black_red : Project_BJC_blk_3 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "tshirt";
        style =  "red";
	};
};



// Shirt
class rtg_shirt_black_black : Project_BJC_Shirt_Jean_blk {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "shirt";
        style =  "black";
	};
};
class rtg_shirt_black_blue : Project_BJC_Shirt_Jean_blk1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "shirt";
        style =  "blue";
	};
};
class rtg_shirt_black_red : Project_BJC_Shirt_Jean_blk2 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "shirt";
        style =  "red";
	};
};
class rtg_shirt_black_white : Project_BJC_Shirt_Jean_blk3 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "shirt";
        style =  "white";
	};
};

// Shirt Cut
class rtg_shirtcut_black_black : Project_BJC_Shirt_Cut_Jean_blk {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "shirtcut";
        style =  "black";
	};
};
class rtg_shirtcut_black_blue : Project_BJC_Shirt_Cut_Jean_blk1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "shirtcut";
        style =  "blue";
	};
};
class rtg_shirtcut_black_red : Project_BJC_Shirt_Cut_Jean_blk2 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "shirtcut";
        style =  "red";
	};
};
class rtg_shirtcut_black_white : Project_BJC_Shirt_Cut_Jean_blk3 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "shirtcut";
        style =  "white";
	};
};

// Jacket
class rtg_jacket_black_black : Project_BJC_PCU_Jean_blk {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "jacket";
        style =  "black";
	};
};
class rtg_jacket_black_od : Project_BJC_PCU_Jean_blk1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "jacket";
        style =  "od";
	};
};
class rtg_jacket_black_tan : Project_BJC_PCU_Jean_blk2 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "jacket";
        style =  "tan";
	};
};
class rtg_jacket_black_gray : Project_BJC_PCU_Jean_blk3 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "jacket";
        style =  "gray";
	};
};
class rtg_jacket_black_mc : Project_BJC_PCU_Jean_blk4 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "jacket";
        style =  "mc";
	};
};
class rtg_jacket_black_mcb : Project_BJC_PCU_Jean_blk5 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_jeans";
		bottom = "black";
        top =    "jacket";
        style =  "mcb";
	};
};

// Combat Helmets
class H_HelmetSpecB;
class H_HelmetSpecB_blk;
class H_HelmetSpecB_paint1;
class H_HelmetSpecB_paint2;
class H_HelmetSpecB_sand;
class H_HelmetSpecB_snakeskin;
class H_HelmetSpecB_tna_F;
class H_HelmetSpecB_wdl;
class VSM_OGA_Helmet1;
class VSM_OGA_OD_Helmet1;
class rtg_ech_dfl : H_HelmetSpecB {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_ech";
		camo = "default";
	};
};
class rtg_ech_blk : H_HelmetSpecB_blk {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_ech";
		camo = "black";
	};
};
class rtg_ech_pt1 : H_HelmetSpecB_paint1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_ech";
		camo = "paint1";
	};
};
class rtg_ech_pt2 : H_HelmetSpecB_paint2 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_ech";
		camo = "paint2";
	};
};
class rtg_ech_snd : H_HelmetSpecB_sand {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_ech";
		camo = "sand";
	};
};
class rtg_ech_trp : H_HelmetSpecB_tna_F {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_ech";
		camo = "tropic";
	};
};
class rtg_ech_wd1 : H_HelmetSpecB_wdl {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_ech";
		camo = "woodland";
	};
};
class rtg_ech_oga : VSM_OGA_Helmet1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_ech";
		camo = "oga";
	};
};
class rtg_ech_od : VSM_OGA_OD_Helmet1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_ech";
		camo = "od";
	};
};

// Cargo Base Classes
// BJCP
// PCU
class Project_BJC_PCU_Cargo22;
class Project_BJC_PCU_Cargo24;
class Project_BJC_PCU_Cargo23;
class Project_BJC_PCU_Cargo21;
class Project_BJC_PCU_Cargo20;
class Project_BJC_PCU_Cargo25;
// Shirt
class Project_BJC_Shirt_Cargo16;
class Project_BJC_Shirt_Cargo17;
class Project_BJC_Shirt_Cargo18;
class Project_BJC_Shirt_Cargo19;
// Shirtcut
class Project_BJC_Shirt_Cut_Cargo16;
class Project_BJC_Shirt_Cut_Cargo17;
class Project_BJC_Shirt_Cut_Cargo18;
class Project_BJC_Shirt_Cut_Cargo19;
//T-Shirt
class Project_BJC_Cargo16;
class Project_BJC_Cargo17;
class Project_BJC_Cargo19;
class Project_BJC_Cargo18;
// Black
// PCU
class Project_BJC_PCU_Cargo28;
class Project_BJC_PCU_Cargo2;
class Project_BJC_PCU_Cargo10;
class Project_BJC_PCU_Cargo14;
class Project_BJC_PCU_Cargo18;
class Project_BJC_PCU_Cargo6;
// Shirt
class Project_BJC_Shirt_Cargo2;
class Project_BJC_Shirt_Cargo6;
class Project_BJC_Shirt_Cargo10;
class Project_BJC_Shirt_Cargo14;
// Shirtcut
class Project_BJC_Shirt_Cut_Cargo2;
class Project_BJC_Shirt_Cut_Cargo6;
class Project_BJC_Shirt_Cut_Cargo10;
class Project_BJC_Shirt_Cut_Cargo14;
//T-Shirt
class Project_BJC_Cargo2;
class Project_BJC_Cargo14;
class Project_BJC_Cargo6;
class Project_BJC_Cargo10;
// Tan
// PCU
class Project_BJC_PCU_Cargo8;
class Project_BJC_PCU_Cargo4;
class Project_BJC_PCU_Cargo16;
class Project_BJC_PCU_Cargo12;
class Project_BJC_PCU_Cargo;
class Project_BJC_PCU_Cargo26;
// Shirt
class Project_BJC_Shirt_Cargo;
class Project_BJC_Shirt_Cargo4;
class Project_BJC_Shirt_Cargo8;
class Project_BJC_Shirt_Cargo12;
// Shirtcut
class Project_BJC_Shirt_Cut_Cargo;
class Project_BJC_Shirt_Cut_Cargo4;
class Project_BJC_Shirt_Cut_Cargo8;
class Project_BJC_Shirt_Cut_Cargo12;
//T-Shirt
class Project_BJC_Cargo;
class Project_BJC_Cargo4;
class Project_BJC_Cargo12;
class Project_BJC_Cargo8;
// MC
// PCU
class Project_BJC_PCU_Cargo7;
class Project_BJC_PCU_Cargo19;
class Project_BJC_PCU_Cargo11;
class Project_BJC_PCU_Cargo15;
class Project_BJC_PCU_Cargo3;
class Project_BJC_PCU_Cargo29;
// Shirt
class Project_BJC_Shirt_Cargo3;
class Project_BJC_Shirt_Cargo7;
class Project_BJC_Shirt_Cargo11;
class Project_BJC_Shirt_Cargo15;
// Shirtcut
class Project_BJC_Shirt_Cut_Cargo3;
class Project_BJC_Shirt_Cut_Cargo7;
class Project_BJC_Shirt_Cut_Cargo11;
class Project_BJC_Shirt_Cut_Cargo15;
//T-Shirt
class Project_BJC_Cargo3;
class Project_BJC_Cargo7;
class Project_BJC_Cargo15;
class Project_BJC_Cargo11;
// OD
// PCU
class Project_BJC_PCU_Cargo5;
class Project_BJC_PCU_Cargo17;
class Project_BJC_PCU_Cargo13;
class Project_BJC_PCU_Cargo9;
class Project_BJC_PCU_Cargo1;
class Project_BJC_PCU_Cargo27;
// Shirt
class Project_BJC_Shirt_Cargo1;
class Project_BJC_Shirt_Cargo5;
class Project_BJC_Shirt_Cargo9;
class Project_BJC_Shirt_Cargo13;
// Shirtcut
class Project_BJC_Shirt_Cut_Cargo1;
class Project_BJC_Shirt_Cut_Cargo5;
class Project_BJC_Shirt_Cut_Cargo9;
class Project_BJC_Shirt_Cut_Cargo13;
//T-Shirt
class Project_BJC_Cargo1;
class Project_BJC_Cargo5;
class Project_BJC_Cargo13;
class Project_BJC_Cargo9;

// Uniform Config
// MCB Cargo pants
// T-Shirt
class rtg_tshirt_cargo_mcb_black : Project_BJC_Cargo16 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "tshirt";
        style =  "black";
	};
};
class rtg_tshirt_cargo_mcb_white : Project_BJC_Cargo18 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "tshirt";
        style =  "white";
	};
};
class rtg_tshirt_cargo_mcb_od : Project_BJC_Cargo17 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "tshirt";
        style =  "od";
	};
};
class rtg_tshirt_cargo_mcb_red : Project_BJC_Cargo19 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "tshirt";
        style =  "red";
	};
};

// Shirt
class rtg_shirt_cargo_mcb_black : Project_BJC_Shirt_Cargo16 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "shirt";
        style =  "black";
	};
};
class rtg_shirt_cargo_mcb_blue : Project_BJC_Shirt_Cargo17 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "shirt";
        style =  "blue";
	};
};
class rtg_shirt_cargo_mcb_red : Project_BJC_Shirt_Cargo18 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "shirt";
        style =  "red";
	};
};
class rtg_shirt_cargo_mcb_white : Project_BJC_Shirt_Cargo19 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "shirt";
        style =  "white";
	};
};

// Shirt Cut
class rtg_shirtcut_cargo_mcb_black : Project_BJC_Shirt_Cut_Cargo16 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "shirtcut";
        style =  "black";
	};
};
class rtg_shirtcut_cargo_mcb_blue : Project_BJC_Shirt_Cut_Cargo17 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "shirtcut";
        style =  "blue";
	};
};
class rtg_shirtcut_cargo_mcb_red : Project_BJC_Shirt_Cut_Cargo18 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "shirtcut";
        style =  "red";
	};
};
class rtg_shirtcut_cargo_mcb_white : Project_BJC_Shirt_Cut_Cargo19 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "shirtcut";
        style =  "white";
	};
};

// Jacket
class rtg_jacket_cargo_mcb_black : Project_BJC_PCU_Cargo20 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "jacket";
        style =  "black";
	};
};
class rtg_jacket_cargo_mcb_od : Project_BJC_PCU_Cargo22 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "jacket";
        style =  "od";
	};
};
class rtg_jacket_cargo_mcb_tan : Project_BJC_PCU_Cargo21 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "jacket";
        style =  "tan";
	};
};
class rtg_jacket_cargo_mcb_gray : Project_BJC_PCU_Cargo23 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "jacket";
        style =  "gray";
	};
};
class rtg_jacket_cargo_mcb_mc : Project_BJC_PCU_Cargo24 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "jacket";
        style =  "mc";
	};
};
class rtg_jacket_cargo_mcb_mcb : Project_BJC_PCU_Cargo25 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mcb";
        top =    "jacket";
        style =  "mcb";
	};
};

// Black Cargo pants
// T-Shirt
class rtg_tshirt_cargo_black_black : Project_BJC_Cargo2 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "tshirt";
        style =  "black";
	};
};
class rtg_tshirt_cargo_black_white : Project_BJC_Cargo14 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "tshirt";
        style =  "white";
	};
};
class rtg_tshirt_cargo_black_od : Project_BJC_Cargo6 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "tshirt";
        style =  "od";
	};
};
class rtg_tshirt_cargo_black_red : Project_BJC_Cargo19 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "tshirt";
        style =  "red";
	};
};

// Shirt
class rtg_shirt_cargo_black_black : Project_BJC_Shirt_Cargo2 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "shirt";
        style =  "black";
	};
};
class rtg_shirt_cargo_black_blue : Project_BJC_Shirt_Cargo6 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "shirt";
        style =  "blue";
	};
};
class rtg_shirt_cargo_black_red : Project_BJC_Shirt_Cargo10 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "shirt";
        style =  "red";
	};
};
class rtg_shirt_cargo_black_white : Project_BJC_Shirt_Cargo14 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "shirt";
        style =  "white";
	};
};

// Shirt Cut
class rtg_shirtcut_cargo_black_black : Project_BJC_Shirt_Cut_Cargo2 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "shirtcut";
        style =  "black";
	};
};
class rtg_shirtcut_cargo_black_blue : Project_BJC_Shirt_Cut_Cargo6 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "shirtcut";
        style =  "blue";
	};
};
class rtg_shirtcut_cargo_black_red : Project_BJC_Shirt_Cut_Cargo10 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "shirtcut";
        style =  "red";
	};
};
class rtg_shirtcut_cargo_black_white : Project_BJC_Shirt_Cut_Cargo14 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "shirtcut";
        style =  "white";
	};
};

// Jacket
class rtg_jacket_cargo_black_black : Project_BJC_PCU_Cargo2 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "jacket";
        style =  "black";
	};
};
class rtg_jacket_cargo_black_od : Project_BJC_PCU_Cargo6 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "jacket";
        style =  "od";
	};
};
class rtg_jacket_cargo_black_tan : Project_BJC_PCU_Cargo10 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "jacket";
        style =  "tan";
	};
};
class rtg_jacket_cargo_black_gray : Project_BJC_PCU_Cargo14 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "jacket";
        style =  "gray";
	};
};
class rtg_jacket_cargo_black_mc : Project_BJC_PCU_Cargo18 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "jacket";
        style =  "mc";
	};
};
class rtg_jacket_cargo_black_mcb : Project_BJC_PCU_Cargo28 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "black";
        top =    "jacket";
        style =  "mcb";
	};
};

// Tan Cargo pants
// T-Shirt
class rtg_tshirt_cargo_tan_black : Project_BJC_Cargo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "tshirt";
        style =  "black";
	};
};
class rtg_tshirt_cargo_tan_white : Project_BJC_Cargo8 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "tshirt";
        style =  "white";
	};
};
class rtg_tshirt_cargo_tan_od : Project_BJC_Cargo4 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "tshirt";
        style =  "od";
	};
};
class rtg_tshirt_cargo_tan_red : Project_BJC_Cargo12 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "tshirt";
        style =  "red";
	};
};

// Shirt
class rtg_shirt_cargo_tan_black : Project_BJC_Shirt_Cargo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "shirt";
        style =  "black";
	};
};
class rtg_shirt_cargo_tan_blue : Project_BJC_Shirt_Cargo4 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "shirt";
        style =  "blue";
	};
};
class rtg_shirt_cargo_tan_red : Project_BJC_Shirt_Cargo8 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "shirt";
        style =  "red";
	};
};
class rtg_shirt_cargo_tan_white : Project_BJC_Shirt_Cargo12 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "shirt";
        style =  "white";
	};
};

// Shirt Cut
class rtg_shirtcut_cargo_tan_black : Project_BJC_Shirt_Cut_Cargo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "shirtcut";
        style =  "black";
	};
};
class rtg_shirtcut_cargo_tan_blue : Project_BJC_Shirt_Cut_Cargo4 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "shirtcut";
        style =  "blue";
	};
};
class rtg_shirtcut_cargo_tan_red : Project_BJC_Shirt_Cut_Cargo8 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "shirtcut";
        style =  "red";
	};
};
class rtg_shirtcut_cargo_tan_white : Project_BJC_Shirt_Cut_Cargo12 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "shirtcut";
        style =  "white";
	};
};

// Jacket
class rtg_jacket_cargo_tan_black : Project_BJC_PCU_Cargo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "jacket";
        style =  "black";
	};
};
class rtg_jacket_cargo_tan_od : Project_BJC_PCU_Cargo4 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "jacket";
        style =  "od";
	};
};
class rtg_jacket_cargo_tan_tan : Project_BJC_PCU_Cargo8 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "jacket";
        style =  "tan";
	};
};
class rtg_jacket_cargo_tan_gray : Project_BJC_PCU_Cargo12 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "jacket";
        style =  "gray";
	};
};
class rtg_jacket_cargo_tan_mc : Project_BJC_PCU_Cargo16 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "jacket";
        style =  "mc";
	};
};
class rtg_jacket_cargo_tan_mcb : Project_BJC_PCU_Cargo20 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "tan";
        top =    "jacket";
        style =  "mcb";
	};
};

// MC Cargo pants
// T-Shirt
class rtg_tshirt_cargo_mc_black : Project_BJC_Cargo3 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "tshirt";
        style =  "black";
	};
};
class rtg_tshirt_cargo_mc_white : Project_BJC_Cargo11 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "tshirt";
        style =  "white";
	};
};
class rtg_tshirt_cargo_mc_od : Project_BJC_Cargo7 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "tshirt";
        style =  "od";
	};
};
class rtg_tshirt_cargo_mc_red : Project_BJC_Cargo15 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "tshirt";
        style =  "red";
	};
};

// Shirt
class rtg_shirt_cargo_mc_black : Project_BJC_Shirt_Cargo3 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "shirt";
        style =  "black";
	};
};
class rtg_shirt_cargo_mc_blue : Project_BJC_Shirt_Cargo7 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "shirt";
        style =  "blue";
	};
};
class rtg_shirt_cargo_mc_red : Project_BJC_Shirt_Cargo11 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "shirt";
        style =  "red";
	};
};
class rtg_shirt_cargo_mc_white : Project_BJC_Shirt_Cargo15 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "shirt";
        style =  "white";
	};
};

// Shirt Cut
class rtg_shirtcut_cargo_mc_black : Project_BJC_Shirt_Cut_Cargo3 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "shirtcut";
        style =  "black";
	};
};
class rtg_shirtcut_cargo_mc_blue : Project_BJC_Shirt_Cut_Cargo7 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "shirtcut";
        style =  "blue";
	};
};
class rtg_shirtcut_cargo_mc_red : Project_BJC_Shirt_Cut_Cargo11 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "shirtcut";
        style =  "red";
	};
};
class rtg_shirtcut_cargo_mc_white : Project_BJC_Shirt_Cut_Cargo15 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "shirtcut";
        style =  "white";
	};
};

// Jacket
class rtg_jacket_cargo_mc_black : Project_BJC_PCU_Cargo3 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "jacket";
        style =  "black";
	};
};
class rtg_jacket_cargo_mc_od : Project_BJC_PCU_Cargo7 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "jacket";
        style =  "od";
	};
};
class rtg_jacket_cargo_mc_tan : Project_BJC_PCU_Cargo11 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "jacket";
        style =  "tan";
	};
};
class rtg_jacket_cargo_mc_gray : Project_BJC_PCU_Cargo15 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "jacket";
        style =  "gray";
	};
};
class rtg_jacket_cargo_mc_mc : Project_BJC_PCU_Cargo19 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "jacket";
        style =  "mc";
	};
};
class rtg_jacket_cargo_mc_mcb : Project_BJC_PCU_Cargo29 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "mc";
        top =    "jacket";
        style =  "mcb";
	};
};

// OD Cargo pants
// T-Shirt
class rtg_tshirt_cargo_od_black : Project_BJC_Cargo1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "tshirt";
        style =  "black";
	};
};
class rtg_tshirt_cargo_od_white : Project_BJC_Cargo9 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "tshirt";
        style =  "white";
	};
};
class rtg_tshirt_cargo_od_od : Project_BJC_Cargo5 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "tshirt";
        style =  "od";
	};
};
class rtg_tshirt_cargo_od_red : Project_BJC_Cargo13 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "tshirt";
        style =  "red";
	};
};

// Shirt
class rtg_shirt_cargo_od_black : Project_BJC_Shirt_Cargo1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "shirt";
        style =  "black";
	};
};
class rtg_shirt_cargo_od_blue : Project_BJC_Shirt_Cargo5 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "shirt";
        style =  "blue";
	};
};
class rtg_shirt_cargo_od_red : Project_BJC_Shirt_Cargo9 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "shirt";
        style =  "red";
	};
};
class rtg_shirt_cargo_od_white : Project_BJC_Shirt_Cargo13 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "shirt";
        style =  "white";
	};
};

// Shirt Cut
class rtg_shirtcut_cargo_od_black : Project_BJC_Shirt_Cut_Cargo1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "shirtcut";
        style =  "black";
	};
};
class rtg_shirtcut_cargo_od_blue : Project_BJC_Shirt_Cut_Cargo5 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "shirtcut";
        style =  "blue";
	};
};
class rtg_shirtcut_cargo_od_red : Project_BJC_Shirt_Cut_Cargo9 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "shirtcut";
        style =  "red";
	};
};
class rtg_shirtcut_cargo_od_white : Project_BJC_Shirt_Cut_Cargo13 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "shirtcut";
        style =  "white";
	};
};

// Jacket
class rtg_jacket_cargo_od_black : Project_BJC_PCU_Cargo1 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "jacket";
        style =  "black";
	};
};
class rtg_jacket_cargo_od_od : Project_BJC_PCU_Cargo5 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "jacket";
        style =  "od";
	};
};
class rtg_jacket_cargo_od_tan : Project_BJC_PCU_Cargo9 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "jacket";
        style =  "tan";
	};
};
class rtg_jacket_cargo_od_gray : Project_BJC_PCU_Cargo13 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "jacket";
        style =  "gray";
	};
};
class rtg_jacket_cargo_od_mc : Project_BJC_PCU_Cargo17 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "jacket";
        style =  "mc";
	};
};
class rtg_jacket_cargo_od_mcb : Project_BJC_PCU_Cargo27 {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_cargo";
		bottom = "od";
        top =    "jacket";
        style =  "mcb";
	};
};

// G3 Base Classes
// Base
class Alpine_Crye_Camo;
class Arid_Crye_Camo;
class VSM_M81_Crye_Camo;
class black_Crye_Camo;
class VSM_Multicam_Crye_Camo;
class VSM_MulticamTropic_Crye_Camo;
class VSM_OGA_Crye_Camo;
class VSM_OGA_Crye_grey_Camo;
class VSM_OGA_Crye_od_Camo;
class VSM_ProjectHonor_Crye_Camo;
class UK3CB_ADM_B_U_CombatUniform_01_CC;

// Rolled
class Alpine_Crye_SS_Camo;
class Arid_Crye_SS_Camo;
class VSM_M81_Crye_SS_Camo;
class black_Crye_SS_Camo;
class VSM_Multicam_Crye_SS_Camo;
class VSM_MulticamTropic_Crye_SS_Camo;
class VSM_OGA_Crye_SS_Camo;
class VSM_OGA_Crye_SS_grey_Camo;
class VSM_OGA_Crye_SS_od_Camo;
class VSM_ProjectHonor_Crye_SS_Camo;
class UK3CB_ADM_B_U_CombatUniform_ShortSleeve_01_CC;

// T-Shirt
class Multicam_Alpine_casual_Camo;
class Multicam_Arid_casual_Camo;
class VSM_M81_casual_Camo;
class Multicam_black_casual_Camo;
class VSM_Multicam_casual_Camo;
class VSM_MulticamTropic_casual_Camo;
class VSM_OGA_tan_casual_Camo;
class VSM_OGA_grey_casual_Camo;
class VSM_OGA_od_casual_Camo;
class VSM_ProjectHonor_casual_Camo;
class UK3CB_ADM_B_U_Shirt_Pants_01_CC;

// G3 Uniform Config
// Shirt
class rtg_g3_alpine : Alpine_Crye_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "shirt";
        camo =    "alpine";
	};
};
class rtg_g3_arid : Arid_Crye_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "shirt";
        camo =    "arid";
	};
};
class rtg_g3_m81 : VSM_M81_Crye_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "shirt";
        camo =    "m81";
	};
};
class rtg_g3_mcb : black_Crye_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "shirt";
        camo =    "mcb";
	};
};
class rtg_g3_mc : VSM_Multicam_Crye_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "shirt";
        camo =    "mc";
	};
};
class rtg_g3_amcu : VSM_Multicam_Crye_Camo {
    RTG_WEAPON_BASE
	displayName = "[VSM] Crye G3 (AMCU)";
	 
    class ItemInfo: ItemInfo
    {
		uniformClass = "amcu_uniform";
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "shirt";
        camo = "amcu";
	};
};
class rtg_g3_mct : VSM_MulticamTropic_Crye_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "shirt";
        camo =    "mct";
	};
};
class rtg_g3_tan : VSM_OGA_Crye_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "shirt";
        camo =    "tan";
	};
};
class rtg_g3_grey : VSM_OGA_Crye_grey_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "shirt";
        camo =    "grey";
	};
};
class rtg_g3_od : VSM_OGA_Crye_od_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "shirt";
        camo =    "od";
	};
};
class rtg_g3_ph : VSM_ProjectHonor_Crye_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "shirt";
        camo =    "ph";
	};
};
class rtg_g3_choco : UK3CB_ADM_B_U_CombatUniform_01_CC {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "shirt";
        camo =    "choco";
	};
};

// Rolled
class rtg_g3_alpine_SS : Alpine_Crye_SS_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "rolled";
        camo =    "alpine";
	};
};
class rtg_g3_arid_SS : Arid_Crye_SS_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "rolled";
        camo =    "arid";
	};
};
class rtg_g3_m81_SS : VSM_M81_Crye_SS_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "rolled";
        camo =    "m81";
	};
};
class rtg_g3_mcb_SS : black_Crye_SS_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "rolled";
        camo =    "mcb";
	};
};
class rtg_g3_mc_SS : VSM_Multicam_Crye_SS_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "rolled";
        camo =    "mc";
	};
};
class rtg_g3_mct_SS : VSM_MulticamTropic_Crye_SS_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "rolled";
        camo =    "mct";
	};
};
class rtg_g3_tan_SS : VSM_OGA_Crye_SS_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "rolled";
        camo =    "tan";
	};
};
class rtg_g3_grey_SS : VSM_OGA_Crye_SS_grey_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "rolled";
        camo =    "grey";
	};
};
class rtg_g3_od_SS : VSM_OGA_Crye_SS_od_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "rolled";
        camo =    "od";
	};
};
class rtg_g3_ph_SS : VSM_ProjectHonor_Crye_SS_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "rolled";
        camo =    "ph";
	};
};
class rtg_g3_choco_SS : UK3CB_ADM_B_U_CombatUniform_ShortSleeve_01_CC {
 	RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "rolled";
        camo =    "choco";
	};
};

// T-Shirt
class rtg_g3_casual_alpine : Multicam_Alpine_casual_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "tshirt";
        camo =    "alpine";
	};
};
class rtg_g3_casual_arid : Multicam_Arid_casual_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "tshirt";
        camo =    "arid";
	};
};
class rtg_g3_casual_m81 : VSM_M81_casual_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "tshirt";
        camo =    "m81";
	};
};
class rtg_g3_casual_mcb : Multicam_black_casual_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "tshirt";
        camo =    "mcb";
	};
};
class rtg_g3_casual_mc : VSM_Multicam_casual_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "tshirt";
        camo =    "mc";
	};
};
class rtg_g3_casual_mct : VSM_MulticamTropic_casual_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "tshirt";
        camo =    "mct";
	};
};
class rtg_g3_casual_tan : VSM_OGA_tan_casual_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "tshirt";
        camo =    "tan";
	};
};
class rtg_g3_casual_grey : VSM_OGA_grey_casual_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "tshirt";
        camo =    "grey";
	};
};
class rtg_g3_casual_od : VSM_OGA_od_casual_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "tshirt";
        camo =    "od";
	};
};
class rtg_g3_casual_ph : VSM_ProjectHonor_casual_Camo {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "tshirt";
        camo =    "ph";
	};
};
class rtg_g3_casual_choco : UK3CB_ADM_B_U_Shirt_Pants_01_CC {
    RTG_WEAPON_BASE 
    class ItemInfo: ItemInfo
    {
		containerClass = "Supply70";
    };
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g3";
		top =  "tshirt";
        camo =    "choco";
	};
};

// Custom Equipment

class rhsusf_hgu56p_visor_black;
class rhsusf_hgu56p_visor_mask_black;
class shrikeHat : rhsusf_hgu56p_visor_black
{
	RTG_WEAPON_BASE 
    displayName="Pilot Helmet - Shrike";
    mass = 3.5;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\shrikePilotHat.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=8;
                PassThrough=0.30000001;
            };
        };
    };
};

class cakeHat2 : rhsusf_hgu56p_visor_black
{
	RTG_WEAPON_BASE 
    displayName="Pilot Helmet - Cake";
    mass = 3.5;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\cakePilotHat.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=8;
                PassThrough=0.30000001;
            };
        };
    };
};

// Cake
class H_StrawHat;
class cakeStrawHat : H_StrawHat {
    RTG_WEAPON_BASE 
    displayName="Straw Hat - Cake";
    mass = 2;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\cakeHat.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
};

// Blade
class H_Construction_headset_black_F;
class bladeHat : H_Construction_headset_black_F {
    RTG_WEAPON_BASE 
    displayName="Hard Hat - Blade";
    mass = 2;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\bladeHat.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
};

// Patrick
class H_HelmetCrew_B;
class patHat : H_HelmetCrew_B {
    RTG_WEAPON_BASE 
    displayName="Crew Helmet - Pat";
    mass = 2;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\patHat.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
};

class rhsusf_cvc_alt_helmet;
class samHat : rhsusf_cvc_alt_helmet {
    RTG_WEAPON_BASE 
    displayName="CVC Helmet - Sam";
    mass = 2;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\samHat.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
};

class H_PilotHelmetHeli_B;
class samPilotHat: H_PilotHelmetHeli_B
{
  scope = 2;
  dlc = "raiderTactical";
  author = "Shrike";
  initSpeed = 0;
  displayName = "Pilot Helmet - Sam";
  mass = 3.5;
  hiddenSelectionsTextures[] = {"rtgEquipment\tex\samPilot.paa"};
  class ItemInfo: ItemInfo
  {
    class HitpointsProtectionInfo
    {
      class head
      {
        HitpointName = "HitHead";
        armor = 8;
        PassThrough = 0.3;
      };
    };
  };
};
// Beems
class beemsHat: rhsusf_hgu56p_visor_mask_black
{
  scope = 2;
  dlc = "raiderTactical";
  author = "Shrike";
  initSpeed = 0;
  displayName = "Pilot Helmet - Beems";
  mass = 3.5;
  hiddenSelectionsTextures[] = {"rtgEquipment\tex\beemsHGU.paa"};
  class ItemInfo: ItemInfo
  {
    class HitpointsProtectionInfo
    {
      class head
      {
        HitpointName = "HitHead";
        armor = 8;
        PassThrough = 0.3;
      };
    };
  };
};

// Tex
class rhsusf_opscore_ut_pelt_nsw_cam;
class texHat : rhsusf_opscore_ut_pelt_nsw_cam {
	RTG_WEAPON_BASE 
    displayName="Fast Helmet - Tex";
    mass = 2;
    hiddenSelectionsTextures[] =
	{
		"\rtgEquipment\tex\texHat.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
};

// Soresp 
class rhsgref_helmet_pasgt_altis_lizard;
class sorespHat : rhsgref_helmet_pasgt_altis_lizard
{
	RTG_WEAPON_BASE 
    displayName="Pasgt - Soresp";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\sore_hat.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
};
class sorespHat2 : sorespHat
{
	RTG_WEAPON_BASE 
    displayName="Pasgt - Soresp (2)";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\sore_hat2.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
};

// Rorey
class badgerHat : rhsgref_helmet_pasgt_altis_lizard
{
	RTG_WEAPON_BASE 
    displayName="Pasgt - Rorey";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\badgerHat.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
}; 
class roreyHat : rhsusf_hgu56p_visor_mask_black
{
	RTG_WEAPON_BASE 
    displayName="HGU56p - Rorey";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\roreyHatPilot.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
}; 

// Kim
class VSM_Scorpion_Crye_SS_grey_shirt_Camo;
class rtg_kimUniform : VSM_Scorpion_Crye_SS_grey_shirt_Camo
{
	
	scope = 2;
	displayName = "[RTG] Kim (Crye)";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] ={"\rtgEquipment\tex\kimUniform.paa"};
	class ItemInfo : ItemInfo
	{
		uniformClass = rtg_kimUniform_soldier;
	};
};

// meep
class CADPAT_Helmet1;
class meepHat  : CADPAT_Helmet1
{
	RTG_WEAPON_BASE 
    displayName="ECH - Meep";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\meepHat.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
};

class Alpine_opscore;
class kebaHat_Alpine : Alpine_opscore {
	RTG_WEAPON_BASE 
    displayName="Ops Alpine - Keba";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\alpine_ops_KEBAergo.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
};
class kebaHat_Black : Alpine_opscore {
	RTG_WEAPON_BASE 
    displayName="Ops Black - Keba";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\Ops_black_KEBAergo.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
};

class blueHat : vsm_oga_helmet1  {
	RTG_WEAPON_BASE 
    displayName="Ops OGA - Blue";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\blueHat.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
};

// Damian
class DamianHat : rtg_ech_blk {
    RTG_WEAPON_BASE 
    displayName="ECH BLK - Damian";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\Damian_equip1_black_co.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
    RTG_ACEAX_EMPTY
};

// RTG Beret
class idk;
class rtg_beret : idk
{
  RTG_WEAPON_BASE 
    displayName="[RTG] Beret";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\rhssaf_beret_red_co_RTG.paa"};
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo
        {
            class head
            {
                HitpointName="HitHead";
                armor=4.7;
                PassThrough=0.30000001;
            };
        };
    };
    RTG_ACEAX_EMPTY
}