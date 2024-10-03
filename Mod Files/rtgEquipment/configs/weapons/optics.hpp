// "Zoom Level call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')"

class optic_MRCO;
class InventoryOpticsItem_Base_F;
class rtg_optic_MRCO: optic_MRCO
{
	
	_generalMacro = "optic_MRCO";
	scope = 2;
	displayName = "IOR Pitbull 3";
	picture = "\a3\Weapons_F\acc\Data\UI\icon_optic_MRCO_ca.paa";
	model = "\A3\weapons_f_beta\acc\acco_MRCO_F";
	descriptionShort = "IOR Pitbull 3 2x";
	weaponInfoType = "RscOptics_sos";
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass = 8;
		opticType = 1;
		optics = 1;
		modelOptics = "\A3\Weapons_f_beta\acc\reticle_MRCO_F";
		class OpticsModes
		{
			class MRCOcq
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {"Default"};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin= 0.50;
				opticsZoomMax = 0.75;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
			class MRCOscope
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsRadialBlur1","OpticsBlur1"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				opticsZoomMin = "1.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomMax = 0.25;
				opticsZoomInit = 0.25;
				memoryPointCamera = "opticView";
				visionMode[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
		};
	};
	inertia = 0.1;
};

class optic_DMS;
class rtg_optic_DMS: optic_DMS
{
    
    _generalMacro = "optic_DMS";
    scope = 2;
    displayName = "Burris XTR III";
    picture = "\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
    model = "\A3\Weapons_F_EPA\Acc\acco_marksman_F.p3d";
    descriptionShort = "LPVO";
    class ItemInfo: InventoryOpticsItem_Base_F
    {
        mass = 12;
        opticType = 2;
        optics = 1;
        modelOptics = "\A3\Weapons_f\acc\reticle_marksman_F";
        class OpticsModes
        {
            class Snip
            {
                opticsID = 2;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera2"};
                opticsZoomMin = "1.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                opticsZoomMax = 0.25;
                opticsZoomInit = 0.25;
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
                discreteDistanceInitIndex = 0;
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                memoryPointCamera = "opticView";
                modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F","\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
                visionMode[] = {"Normal"};
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "";
            };
            class Iron: Snip
            {
                opticsID = 3;
                useModelOptics = 0;
                opticsPPEffects[] = {"",""};
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                opticsZoomMin= 0.50;
                opticsZoomMax = 0.75;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                discretefov[] = {};
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
    inertia = 0.2;
};
class rtg_torbs32: rtg_optic_DMS
{
    
    _generalMacro = "optic_DMS";
    scope = 2;
    displayName = "Burris XTR III (80x)";
    picture = "\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
    model = "\A3\Weapons_F_EPA\Acc\acco_marksman_F.p3d";
    descriptionShort = "LPVO";
    class ItemInfo: InventoryOpticsItem_Base_F
    {
        mass = 20;
        opticType = 2;
        optics = 1;
        modelOptics = "\A3\Weapons_f\acc\reticle_marksman_F";
        class OpticsModes
        {
            class Snip
            {
                opticsID = 2;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera2"};
                opticsZoomMin = "80 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                opticsZoomMax = "80 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                opticsZoomInit = "80 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
                discreteDistanceInitIndex = 0;
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                memoryPointCamera = "opticView";
                modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F","\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
                visionMode[] = {"Normal"};
                opticsFlare = 1;
                opticsDisablePeripherialVision = 0;
                cameraDir = "";
            };
            class Iron: Snip
            {
                opticsID = 3;
                useModelOptics = 0;
                opticsPPEffects[] = {"",""};
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                opticsZoomMin= 0.50;
                opticsZoomMax = 0.75;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                discretefov[] = {};
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
            };
        };
    };
    inertia = 0.2;
};

class optic_tws;
class rtg_night_sight: optic_tws
{
    
    _generalMacro = "optic_tws";
    scope = 2;
    displayName = "Night Vision Sight";
    descriptionShort = "Night Vision Sight";
    class ItemInfo: InventoryOpticsItem_Base_F
    {
        mass = 14;
        optics = 1;
        modelOptics = "\A3\Weapons_f\acc\reticle_marksman_F";
        class OpticsModes
        {
            class NWS
            {
                opticsID = 2;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera2"};
                opticsZoomMin = "1.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                opticsZoomMax = 0.25;
                opticsZoomInit = 0.25;
                discreteDistance[] = {100,200,300,400,500};
                discreteDistanceInitIndex = 1;
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                memoryPointCamera = "opticView";
                modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F","\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
                visionMode[] = {"Normal", "NVG"};
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "";
            };
            class Iron
            {
                opticsID = 3;
                useModelOptics = 0;
                opticsPPEffects[] = {"",""};
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                opticsZoomMin= 0.50;
                opticsZoomMax = 0.75;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                discretefov[] = {};
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                discreteDistance[] = {100};
            };
        };
    };
    inertia = 0.2;
};

// Elcan 2x
    class SMA_ELCAN_SPECTER;
    class rtg_ELCAN_3xSpectreDR: SMA_ELCAN_SPECTER
	{
		scope=2;
		displayName="ELCAN Specter LDS";
		picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER.p3d";
		descriptionShort="2x Combat Optic";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=12;
			RMBhint="Aim-Point Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="opticView";
			class OpticsModes
			{
				class IronSight // Main Sight (1x-2x)
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin= 0.50;
                    opticsZoomMax = 0.75;
                    opticsZoomInit = 0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
                class ZoomSight // Main Sight (2x-3x)
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin = "1.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomMax = 0.25;
                    opticsZoomInit = 0.25;
					memoryPointCamera="opticView";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class RedDotSight: IronSight // Top Sight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin= 0.50;
					opticsZoomMax= 0.75;
					opticsZoomInit= 0.75;
					memoryPointCamera="iron_eye";
					visionMode[]={};
					opticsFlare=0;
					distanceZoomMin=50;
					distanceZoomMax=50;
					cameraDir="";
					opticsDisablePeripherialVision=0;
				};
			};
		};
	};
    class rtg_ELCAN_3xSpectreDR_Tan : rtg_ELCAN_3xSpectreDR
    {
        scope=2;
		displayName="ELCAN Specter LDS (Tan)";
        picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_TAN_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERTAN.p3d";
    }
    class rtg_ELCAN_3xSpectreDR_Green: rtg_ELCAN_3xSpectreDR
    {
        scope=2;
		displayName="ELCAN Specter LDS (Green)";
        picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_GREEN_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERGREEN.p3d";
    }
    class rtg_ELCAN_3xSpectreDR_RDS: rtg_ELCAN_3xSpectreDR
    {
        scope=2;
		displayName="ELCAN Specter LDS (RDS)";
        picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_RDS_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER_RDS.p3d";
    }
    class rtg_ELCAN_3xSpectreDR_Tan_RDS : rtg_ELCAN_3xSpectreDR
    {
        scope=2;
		displayName="ELCAN Specter LDS (RDS/Tan)";
        picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_TAN_RDS_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER_RDS.p3d";
    }
    class rtg_ELCAN_3xSpectreDR_Green_RDS: rtg_ELCAN_3xSpectreDR
    {
        scope=2;
		displayName="ELCAN Specter LDS (RDS/Green)";
        picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_GREEN_RDS_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER_RDS.p3d";
    }

// Shortdot
    class ptv_shortdot;
    class rtg_shortdot : ptv_shortdot
    {
        scope=2;
		displayName="2x20 Shortdot II";
        class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=12;
			RMBhint="ShortDot";
			optics=1;
			modelOptics="\x\cba\addons\optics\cba_optic_big_70.p3d";
			class OpticsModes
			{
                class Cqb
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin="1.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax=0.75;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
    }

// ACOG
	class ptv_ta11;
	class rtg_acog2x : ptv_ta11
	{
		scope=2;
		displayName="Trijicon ACOG TA11";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class scope
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1",
						"ptv_ta11_Blur"
					};
					opticsZoomMin="1.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax=0.50;
					opticsZoomInit="1.2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class topview
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.75;
					opticsZoomMax=0.75;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=50;
					distanceZoomMax=50;
				};
			};
		};
	}

// Reduced Zoom
	class optic_Arco;
	class acwp_optic_base : optic_Arco {
		class ItemInfo : InventoryOpticsItem_Base_F {
			class OpticsModes {
				class ACO {
					opticsZoomMin= 0.50;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					memoryPointCamera = "RDeye";
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
			};
		};
	};

	class acwp_t2_g33_down;
	class acwp_t2_g33: acwp_t2_g33_down {
			class ItemInfo : InventoryOpticsItem_Base_F {
			class OpticsModes {
				class ACO {
					distanceZoomMin = 100;
					distanceZoomMax = 100; 
				};
			};
		};
	};

	class rhsusf_acc_compm4 : ItemCore {
			class ItemInfo : InventoryOpticsItem_Base_F {
			class OpticsModes {
				class ACO {
					opticsZoomMin= 0.50;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					distanceZoomMin = 100;
					distanceZoomMax = 100; 
				};
			};
		};
	};

	class ptv_eot552: ItemCore
	{
		class ItemInfo : InventoryOpticsItem_Base_F {
			class OpticsModes {
				class EOT {
					opticsZoomMin= 0.50;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					distanceZoomMin = 100;
					distanceZoomMax = 100; 
				};
			};
		};
	};

	class HLC_optic_DocterR : optic_Arco
	{
		class ItemInfo : InventoryOpticsItem_Base_F {
			class OpticsModes {
				class ACO {
					opticsZoomMin= 0.50;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					distanceZoomMin = 100;
					distanceZoomMax = 100; 
				};
			};
		};
	};

	class optic_Holosight: ItemCore
	{
		class ItemInfo : InventoryOpticsItem_Base_F {
			class OpticsModes {
				class ACO {
					opticsZoomMin= 0.50;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					distanceZoomMin = 100;
					distanceZoomMax = 100; 
				};
			};
		};
	};

	class optic_Yorris: ItemCore
	{
		class ItemInfo : InventoryOpticsItem_Base_F {
			class OpticsModes {
				class ACO {
					opticsZoomMin= 0.50;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					distanceZoomMin = 100;
					distanceZoomMax = 100; 
				};
			};
		};
	};