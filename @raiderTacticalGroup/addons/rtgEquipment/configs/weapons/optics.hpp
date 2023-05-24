class optic_MRCO;
class InventoryOpticsItem_Base_F;
class rtg_optic_MRCO: optic_MRCO
{
	author = "Shrike";
	_generalMacro = "optic_MRCO";
	scope = 2;
	displayName = "IOR Pitbull 3";
	picture = "\a3\Weapons_F\acc\Data\UI\icon_optic_MRCO_ca.paa";
	model = "\A3\weapons_f_beta\acc\acco_MRCO_F";
	descriptionShort = "IOR Pitbull 3";
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
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.5;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
			class MRCOscope
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsRadialBlur1","OpticsBlur1"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.125;
				opticsZoomInit = 0.125;
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
    author = "Shrike";
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
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.75;
                opticsZoomInit = 0.75;
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
                discreteDistanceInitIndex = 1;
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
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.25;
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
    author = "Shrike";
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
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.75;
                opticsZoomInit = 0.75;
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
                discreteDistanceInitIndex = 1;
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                memoryPointCamera = "opticView";
                modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F","\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
                visionMode[] = {"NVG", "Normal"};
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
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.25;
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

class rhs_optic_maaws;
class rtg_maaws_option : rhs_optic_maaws {
    maxZeroing = 600;
    modelOptics = "\a3\Weapons_F_Tank\acc\reticle_MRAWSNew.p3d";
    weaponInfoType = "RscOpticsRangeFinderMRAWS";
    opticsZoomMin = 0.1083;
    opticsZoomMax = 0.1083;
    opticsZoomInit = 0.1083;
    cameraDir = "look";
    class GunParticles
    {
        class effect1
        {
            positionName = "konec hlavne";
            directionName = "usti hlavne";
            effectName = "RocketBackEffectsRPGNT";
        };
    };
    class OpticsModes
    {
        class optic
        {
            opticsID = 1;
            useModelOptics = 1;
            opticsZoomMin = 0.0875;
            opticsZoomMax = 0.0875;
            opticsZoomInit = 0.0875;
            distanceZoomMin = 300;
            distanceZoomMax = 300;
            memoryPointCamera = "eye";
            opticsFlare = 1;
            opticsDisablePeripherialVision = 1;
            cameraDir = "look";
            visionMode[] = {"Normal","NVG"};
            opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
        };
    };
};