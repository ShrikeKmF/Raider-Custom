// Green Goggles
// AN/PVS 15 (Black) 
class ACE_NVG_Gen4_Black;
class rtg_pvs_15_black_gh : ACE_NVG_Gen4_Black
{
	scope = 2;
	displayName = "AN/PVS-15 (Black/Green)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.3,1.2,0.0,0.9},{6,1,1,0.0}};
	
};

// AN/PVS 15 (Green)
class ACE_NVG_Gen4_Green;
class rtg_pvs_15_green_gh : ACE_NVG_Gen4_Green
{
	scope = 2;
	displayName = "AN/PVS-15 (Green/Green)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.3,1.2,0.0,0.9},{6,1,1,0.0}};
	
};

// AN/PVS 15 (Brown)
class ACE_NVG_Gen4;
class rtg_pvs_15_brown_gh : ACE_NVG_Gen4
{
	scope = 2;
	displayName = "AN/PVS-15 (Brown/Green)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.3,1.2,0.0,0.9},{6,1,1,0.0}};
	
};

// AN/PVS-14 (Black)
class rhsusf_ANPVS_14;
class rtg_pvs_14_black_gh : rhsusf_ANPVS_14
{
	scope = 2;
	displayName = "AN/PVS-14 (Black/Green)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.3,1.2,0.0,0.9},{6,1,1,0.0}};
	ace_nightvision_generation = 4;
	modelOptics = "\z\ace\addons\nightvision\models\ACE_nvg_wide_optics";
	
};

// GPNVG-18 (Black)
class JAS_GPNVG18_blk;
class rtg_gpnvg_18_black_gh : JAS_GPNVG18_blk
{
	scope = 2;
	displayName = "GPNVG-18 (Black/Green)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.3,1.2,0.0,0.9},{6,1,1,0.0}};
	ace_nightvision_generation = 4;
	ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
	ace_nightvision_bluRadius = 0.26;
};

// GPNVG-18 (Tan)
class JAS_GPNVG18_tan;
class rtg_gpnvg_18_tab_gh : JAS_GPNVG18_tan
{
	scope = 2;
	displayName = "GPNVG-18 (Tan/Green)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.3,1.2,0.0,0.9},{6,1,1,0.0}};
	ace_nightvision_generation = 4;
	ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
	ace_nightvision_bluRadius = 0.26;
};

// WP goggles
// AN/PVS 15 (Black) 
class rtg_pvs_15_black_wh : ACE_NVG_Gen4_Black
{
	scope = 2;
	displayName = "AN/PVS-15 (Black/White)";
	ace_nightvision_colorPreset[] = {0.0,{0.0,0.0,0.0,0.0},{1.1,0.8,1.9,0.9},{1,1,6,0.0}};
	
};

// AN/PVS 15 (Green)
class rtg_pvs_15_green_wh : ACE_NVG_Gen4_Green
{
	scope = 2;
	displayName = "AN/PVS-15 (Green/White)";
	ace_nightvision_colorPreset[] = {0.0,{0.0,0.0,0.0,0.0},{1.1,0.8,1.9,0.9},{1,1,6,0.0}};
	
};

// AN/PVS 15 (Brown)
class rtg_pvs_15_brown_wh : ACE_NVG_Gen4
{
	scope = 2;
	displayName = "AN/PVS-15 (Brown/White)";
	ace_nightvision_colorPreset[] = {0.0,{0.0,0.0,0.0,0.0},{1.1,0.8,1.9,0.9},{1,1,6,0.0}};
	
};

// AN/PVS-14 (Black)
class rtg_pvs_14_black_wh : rhsusf_ANPVS_14
{
	scope = 2;
	displayName = "AN/PVS-14 (Black/White)";
	ace_nightvision_colorPreset[] = {0.0,{0.0,0.0,0.0,0.0},{1.1,0.8,1.9,0.9},{1,1,6,0.0}};
	ace_nightvision_generation = 4;
	modelOptics = "\z\ace\addons\nightvision\models\ACE_nvg_wide_optics";
};

// GPNVG-18 (Black)
class rtg_gpnvg_18_black_wh : JAS_GPNVG18_blk
{
	scope = 2;
	displayName = "GPNVG-18 (Black/White)";
	ace_nightvision_colorPreset[] = {0.0,{0.0,0.0,0.0,0.0},{1.1,0.8,1.9,0.9},{1,1,6,0.0}};
	ace_nightvision_generation = 4;
	ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
	ace_nightvision_bluRadius = 0.26;
};

// GPNVG-18 (Tan)
class rtg_gpnvg_18_tab_wh : JAS_GPNVG18_tan
{
	scope = 2;
	displayName = "GPNVG-18 (Tan/White)";
	ace_nightvision_colorPreset[] = {0.0,{0.0,0.0,0.0,0.0},{1.1,0.8,1.9,0.9},{1,1,6,0.0}};
	ace_nightvision_generation = 4;
	ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
	ace_nightvision_bluRadius = 0.26;
};

// Amber Goggles
// AN/PVS 15 (Black) 
class rtg_pvs_15_black_ah : ACE_NVG_Gen4_Black
{
	scope = 2;
	displayName = "AN/PVS-15 (Black/Amber)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.9,0.8,0.0,0.9},{6,1,1,0.0}};
	
};

// AN/PVS 15 (Green)
class rtg_pvs_15_green_ah : ACE_NVG_Gen4_Green
{
	scope = 2;
	displayName = "AN/PVS-15 (Green/Amber)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.9,0.8,0.0,0.9},{6,1,1,0.0}};
	
};

// AN/PVS 15 (Brown)
class rtg_pvs_15_brown_ah : ACE_NVG_Gen4
{
	scope = 2;
	displayName = "AN/PVS-15 (Brown/Amber)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.9,0.8,0.0,0.9},{6,1,1,0.0}};
	
};

// AN/PVS-14 (Black)
class rtg_pvs_14_black_ah : rhsusf_ANPVS_14
{
	scope = 2;
	displayName = "AN/PVS-14 (Black/Amber)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.9,0.8,0.0,0.9},{6,1,1,0.0}};
	ace_nightvision_generation = 4;
	modelOptics = "\z\ace\addons\nightvision\models\ACE_nvg_wide_optics";
};

// GPNVG-18 (Black)
class rtg_gpnvg_18_black_ah : JAS_GPNVG18_blk
{
	scope = 2;
	displayName = "GPNVG-18 (Black/Amber)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.9,0.8,0.0,0.9},{6,1,1,0.0}};
	ace_nightvision_generation = 4;
	ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
	ace_nightvision_bluRadius = 0.26;
	
};

// GPNVG-18 (Tan)
class rtg_gpnvg_18_tab_ah : JAS_GPNVG18_tan
{
	scope = 2;
	displayName = "GPNVG-18 (Tan/Amber)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.9,0.8,0.0,0.9},{6,1,1,0.0}};
	ace_nightvision_generation = 4;
	ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
	ace_nightvision_bluRadius = 0.26;
	
};

// Laser Designator
// Green 
class Laserdesignator;
class Laserdesignator_03;
class rtg_laserDesignator_tan_gh : Laserdesignator
{
	scope = 2;
	displayName = "Laser Designator (Tan/Green)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.3,1.2,0.0,0.9},{6,1,1,0.0}};
}
class rtg_laserDesignator_green_gh : Laserdesignator_03
{
	scope = 2;
	displayName = "Laser Designator (Green/Green)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.3,1.2,0.0,0.9},{6,1,1,0.0}};
}

// White 
class rtg_laserDesignator_tan_wh : Laserdesignator
{
	scope = 2;
	displayName = "Laser Designator (Tan/White)";
	ace_nightvision_colorPreset[] = {0.0,{0.0,0.0,0.0,0.0},{1.1,0.8,1.9,0.9},{1,1,6,0.0}};
}
class rtg_laserDesignator_green_wh : Laserdesignator_03
{
	scope = 2;
	displayName = "Laser Designator (Green/White)";
	ace_nightvision_colorPreset[] = {0.0,{0.0,0.0,0.0,0.0},{1.1,0.8,1.9,0.9},{1,1,6,0.0}};
}

// Amber
class rtg_laserDesignator_tan_ah : Laserdesignator
{
	scope = 2;
	displayName = "Laser Designator (Tan/Amber)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.9,0.8,0.0,0.9},{6,1,1,0.0}};
}
class rtg_laserDesignator_green_ah : Laserdesignator_03
{
	scope = 2;
	displayName = "Laser Designator (Green/Amber)";
	ace_nightvision_colorPreset[] = {0,{0.0,0.0,0.0,0.0},{1.9,0.8,0.0,0.9},{6,1,1,0.0}};
}

// Thermal
class ACE_MX2A;
class rtg_thermalSighting_System : ACE_MX2A
{
	scope = 2;
	displayName = "MX-2A (Tan/Thermal)";
}