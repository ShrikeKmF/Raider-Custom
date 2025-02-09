// AUG
class hlc_aug_base;
class hlc_rifle_aug : hlc_aug_base
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_rifle";
	opticsZoomInit= 0.75;
	opticsZoomMax=0.75;
	opticsZoomMin=0.75;
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "a1";
		camo = "khaki";
		gl = "no";
	};
};
class hlc_rifle_auga1_b : hlc_rifle_aug
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "a1";
		camo = "black";
		gl = "no";
	};
};
class hlc_rifle_auga1_t : hlc_rifle_aug
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "a1";
		camo = "sand";
		gl = "no";
	};
};
class hlc_rifle_auga3 : hlc_aug_base
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "khaki";
		gl = "no";
	};
};
class hlc_rifle_auga3_bl : hlc_rifle_auga3
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "blue";
		gl = "no";
	};
};
class hlc_rifle_auga3_b : hlc_rifle_auga3
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "black";
		gl = "no";
	};
};
class hlc_rifle_auga3_GL : hlc_aug_base
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "khaki";
		gl = "gl";
	};
};
class hlc_rifle_auga3_GL_BL : hlc_rifle_auga3_GL
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "blue";
		gl = "gl";
	};
};
class hlc_rifle_auga3_GL_B : hlc_rifle_auga3_GL
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "black";
		gl = "gl";
	};
};
class hlc_rifle_auga2para : hlc_aug_base
{
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "para";
		camo = "khaki";
		gl = "no";
	};
};
class hlc_rifle_auga2para_t : hlc_rifle_auga2para
{
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "para";
		camo = "sand";
		gl = "no";
	};
};
class hlc_rifle_auga2para_b : hlc_rifle_auga2para
{
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "para";
		camo = "black";
		gl = "no";
	};
};
class hlc_rifle_auga1carb : hlc_rifle_aug
{
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_aughbar : hlc_rifle_aug
{
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_augpara : hlc_rifle_aug
{
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_auga2 : hlc_rifle_aug
{
	RTG_ACEAX_EMPTY 
};

class rtg_pat_aug : hlc_rifle_auga1_b
{
	RTG_WEAPON_BASE
	recoil = "rtg_556_rifle";
    displayName="AUG A1 - Pat";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rtgEquipment\tex\patAug.paa"};
	RTG_ACEAX_EMPTY 
};

class rtg_pat_aug_camo : rtg_pat_aug
{
	RTG_WEAPON_BASE
	recoil = "rtg_556_rifle";
	
    displayName="AUG A1 - Pat (Camo)";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rtgEquipment\tex\patAugCamo.paa"};
	RTG_ACEAX_EMPTY 
};