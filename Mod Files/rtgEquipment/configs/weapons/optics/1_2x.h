class rtg_shorterdot: rtg_shortdot
{
	scope=2;
	displayName="1.2x20 Shortdot III";
	class ItemInfo: ItemInfo
	{
		class OpticsModes : OpticsModes
		{
			class Cqb : Cqb
			{
				opticsZoomMin = "1.3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomMax = "1.0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomInit = "1.0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
			};
		};
	};
}

class JCA_optic_AICO_base: ItemCore
{
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		class OpticsModes
		{
			class MRO
			{
				opticsZoomMin = "1.1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomMax = "1.0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomInit = "1.0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
			};
			class AICO
			{
				opticsZoomMin = "1.3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomMax = "1.1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomInit = "1.1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
			};
		};
	};
};

class ptv_ta02led: ItemCore
{
	MRT_SwitchItemNextClass = "ptv_ta02led";
	MRT_SwitchItemPrevClass = "ptv_ta02led";
	MRT_switchItemHintText = "3D";
	displayName = "TA02LED 1.2x";
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		class OpticsModes
		{
			class scope
			{
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
				opticsZoomMin = "1.3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomMax = "1.1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomInit = "1.1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
			};
			class Cqb
			{
				opticsZoomMin = "1.1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomMax = "1.0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomInit = "1.0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
			};
		};
	};
};