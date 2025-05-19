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