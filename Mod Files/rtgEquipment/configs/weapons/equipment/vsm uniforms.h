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