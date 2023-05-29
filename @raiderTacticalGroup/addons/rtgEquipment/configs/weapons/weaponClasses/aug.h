// AUG
class hlc_aug_base;
class hlc_rifle_aug : hlc_aug_base
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
};
class hlc_rifle_auga3 : hlc_aug_base
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "khaki";
	};
};
class hlc_rifle_auga3_bl : hlc_rifle_auga3
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "blue";
	};
};
class hlc_rifle_auga3_b : hlc_rifle_auga3
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "rifle";
		camo = "black";
	};
};
class hlc_rifle_auga3_GL : hlc_aug_base
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug_gl";
		camo = "khaki";
	};
};
class hlc_rifle_auga3_GL_BL : hlc_rifle_auga3_GL
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug_gl";
		camo = "blue";
	};
};
class hlc_rifle_auga3_GL_B : hlc_rifle_auga3_GL
{
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug_gl";
		camo = "black";
	};
};
class hlc_rifle_auga2para : hlc_aug_base
{
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "para";
		camo = "khaki";
	};
};
class hlc_rifle_auga2para_t : hlc_rifle_auga2para
{
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "para";
		camo = "sand";
	};
};
class hlc_rifle_auga2para_b : hlc_rifle_auga2para
{
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_aug";
		barrel = "para";
		camo = "black";
	};
};