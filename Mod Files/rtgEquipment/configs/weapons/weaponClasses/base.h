class Rifle;
class Pistol;
class ItemCore;
class Launcher;
class PointerSlot_Rail;
class PointerSlot;
class UGL_F;
class WeaponSlotsInfo;
class asdg_SlotInfo;
class compatibleItems;
class MuzzleSlot_556;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class manual;
class Single;
class FullAuto;
class Burst;
class StandardSound;
class Rifle_Short_Base_F;
class Rifle_Long_Base_F;
class Launcher_Base_F : Launcher
{
	RTG_STANDARD_ZOOM
};
class Pistol_Base_F : Pistol 
{
	RTG_STANDARD_ZOOM
};
class Rifle_Base_F : Rifle
{
	RTG_STANDARD_ZOOM
};

class SMG_03_TR_BASE: Rifle_Base_F
{
	class OpticsModes
	{
		class Kolimator
		{
			opticsID = 1;
			useModelOptics = 0;
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			opticsZoomMin= 0.50;
			opticsZoomMax = 0.75;
			opticsZoomInit = 0.75;
			memoryPointCamera = "opticView";
			opticsFlare = 0;
			opticsDisablePeripherialVision = 1;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			cameraDir = "";
		};
	};
};
class rhs_weap_M320_Base_F: Pistol_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_XM2010_Base_F: Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class arifle_MX_Base_F;
class rhs_weap_m4_Base : arifle_MX_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_saw_base : Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class GM6_base_F;
class rhs_weap_M107_Base_F: GM6_base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_M590_5RD : Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_m32_Base_F: Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_SCAR_Base : arifle_MX_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_ak74m_Base_F: Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_an94_base: Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_orsis_Base_F: Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class rhs_weap_vhs2_base: Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class acwp_rifle_base: Rifle_Base_F
{
	RTG_STANDARD_ZOOM
};
class srifle_EBR_F;
class rhs_weap_m14_base : srifle_EBR_F
{
	RTG_STANDARD_ZOOM
};
class srifle_DMR_06_camo_F;
class ACWP_sr25: srifle_DMR_06_camo_F
{
	RTG_STANDARD_ZOOM
};