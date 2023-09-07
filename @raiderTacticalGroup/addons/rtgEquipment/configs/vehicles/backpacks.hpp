#define TRANSPORT_MAGAZINE(id,qty) class _xx_##id { magazine = #id; count = qty; };
#define TRANSPORT_ITEM(id,qty) class _xx_##id { name = #id; count = qty; };
#define TRANSPORT_WEAPON(id,qty) class _xx_##id { weapon = #id; count = qty; };
#define TRANSPORT_BACKPACK(id,qty) class _xx_##id { backpack = #id; count = qty; };

// VSM
class Alpine_Carryall;
class Alpine_Backpack_Compact;
class Alpine_Backpack_kitbag;
class Arid_Carryall;
class Arid_Backpack_Compact;
class Arid_Backpack_kitbag;
class Black_Carryall;
class Black_Backpack_Compact;
class Black_Backpack_kitbag;
class VSM_Multicam_carryall;
class VSM_Multicam_Backpack_Compact;
class VSM_Multicam_Backpack_Kitbag;
class VSM_MulticamTropic_carryall;
class VSM_MulticamTropic_Backpack_Compact;
class VSM_MulticamTropic_Backpack_Kitbag;
class VSM_OGA_carryall;
class VSM_OGA_Backpack_Compact;
class VSM_OGA_Backpack_Kitbag;
class VSM_OGA_OD_carryall;
class VSM_OGA_OD_Backpack_Compact;
class VSM_OGA_OD_Backpack_Kitbag;
class VSM_ProjectHonor_carryall;
class VSM_ProjectHonor_Backpack_Compact;
class VSM_ProjectHonor_Backpack_Kitbag;


class rtg_Alpine_Backpack_Compact : Alpine_Backpack_Compact {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "alpine";
	};
};
class rtg_Arid_Backpack_Compact : Arid_Backpack_Compact {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "mca";
	};
};
class rtg_Black_Backpack_Compact : Black_Backpack_Compact {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "mcb";
	};
};
class rtg_VSM_Multicam_Backpack_Compact :VSM_Multicam_Backpack_Compact {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "mc";
	};
};
class rtg_VSM_MulticamTropic_Backpack_Compact : VSM_MulticamTropic_Backpack_Compact {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "mct";
	};
};
class rtg_VSM_OGA_Backpack_Compact : VSM_OGA_Backpack_Compact {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "tan";
	};
};
class rtg_VSM_OGA_OD_Backpack_Compact : VSM_OGA_OD_Backpack_Compact {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "od";
	};
};
class rtg_VSM_ProjectHonor_Backpack_Compact : VSM_ProjectHonor_Backpack_Compact {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "ph";
	};
};

class rtg_Alpine_Backpack_kitbag : Alpine_Backpack_kitbag {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "alpine";
	};
};
class rtg_Arid_Backpack_kitbag : Arid_Backpack_kitbag {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "mca";
	};
};
class rtg_Black_Backpack_kitbag : Black_Backpack_kitbag {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "mcb";
	};
};
class rtg_VSM_Multicam_Backpack_Kitbag : VSM_Multicam_Backpack_Kitbag {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "mc";
	};
};
class rtg_VSM_MulticamTropic_Backpack_Kitbag : VSM_MulticamTropic_Backpack_Kitbag {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "mct";
	};
};
class rtg_VSM_OGA_Backpack_Kitbag : VSM_OGA_Backpack_Kitbag {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "tan";
	};
};
class rtg_VSM_OGA_OD_Backpack_Kitbag : VSM_OGA_OD_Backpack_Kitbag {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "od";
	};
};
class rtg_VSM_ProjectHonor_Backpack_Kitbag : VSM_ProjectHonor_Backpack_Kitbag {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "ph";
	};
};

class rtg_Alpine_Carryall : Alpine_Carryall {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "alpine";
	};
};
class rtg_Arid_Carryall : Arid_Carryall {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "mca";
	};
};
class rtg_Black_Carryall : Black_Carryall {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "mcb";
	};
};
class rtg_VSM_Multicam_carryall : VSM_Multicam_carryall {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "mc";
	};
};
class rtg_VSM_MulticamTropic_carryall : VSM_MulticamTropic_carryall {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "mct";
	};
};
class rtg_VSM_OGA_carryall : VSM_OGA_carryall {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "tan";
	};
};
class rtg_VSM_OGA_OD_carryall : VSM_OGA_OD_carryall {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "od";
	};
};
class rtg_VSM_ProjectHonor_carryall : VSM_ProjectHonor_carryall {
    scope = 2;
    dlc = "raiderTactical";
    Author = "Shrike";
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "ph";
	};
};

// Custom Backpacks
class B_Kitbag_rgr;
class cakeBackpack : B_Kitbag_rgr {
    scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName = "Kitbag - Cake";
    maximumLoad = 380;
    mass = 50;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\cakeKitbag.paa"};
};

class lynxKitbag : B_Kitbag_rgr {
    scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName = "Kitbag - Lynx";
    maximumLoad = 380;
    mass = 50;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\lynxKitbag.paa"};
};

class shrikeBackpack : B_Kitbag_rgr {
    scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName = "Kitbag - Shrike";
    maximumLoad = 380;
    mass = 50;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\shrikeKitbag.paa"};
};

class salBackpack : B_Kitbag_rgr {
    scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName = "Kitbag - Sal";
    maximumLoad = 380;
    mass = 50;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\salKitbag.paa"};
};

class bladesBackpack : B_Kitbag_rgr {
    scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName = "Kitbag - Blade";
    maximumLoad = 380;
    mass = 50;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\bladesKitbag.paa"};
};

class fizzAlpineCarryAll : rtg_Alpine_Carryall {
    scope = 2;
	dlc = "raiderTactical";
	Author = "Fizz";
    displayName = "Carryall Alpine - Fizz";
    maximumLoad = 380;
    mass = 50;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\Alpine_carryall_Fizz.paa"};
    class XtdGearInfo
	{
		model = "";
	};
};

class fizzBlackCarryAll : rtg_Alpine_Carryall {
    scope = 2;
	dlc = "raiderTactical";
	Author = "Fizz";
    displayName = "Carryall Black - Fizz";
    maximumLoad = 380;
    mass = 50;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\Multicam_Black_carryall_Fizz.paa"};
    class XtdGearInfo
	{
		model = "";
	};
};

class patsBackpack : B_Kitbag_rgr {
    scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName = "Kitbag - Pat";
    maximumLoad = 380;
    mass = 50;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\patKitbag.paa"};
};

class sparklesBackpack : B_Kitbag_rgr {
    scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName = "Kitbag - Sparkles";
    maximumLoad = 380;
    mass = 50;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\sparklesBag.paa"};
};

class B_CombinationUnitRespirator_01_F;
class fishPack : B_CombinationUnitRespirator_01_F {
    scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName = "Backpack - Fish";
    maximumLoad = 380;
    mass = 50;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\fishPack.paa"};
};

class B_RadioBag_01_black_F;
class brewPack : B_RadioBag_01_black_F
{
    scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
    displayName = "Backpack - Brewsky";
    maximumLoad = 380;
    mass = 50;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\brewPack.paa"};
}

// Medical Grabbag For Vehicles
class rtg_medical_grabpack : B_Kitbag_rgr {
    scope = 1;
    author = "Shrike";
    displayname = "Medical Grabbag";
    maximumLoad = 450;

    class TransportItems {
        TRANSPORT_ITEM(kat_larynx, 8)
        TRANSPORT_ITEM(ACE_bloodIV, 3)
        TRANSPORT_ITEM(ACE_bloodIV_500, 4)
        TRANSPORT_ITEM(ACE_plasmaIV_500, 4)
        TRANSPORT_ITEM(kat_AED, 1)
        TRANSPORT_ITEM(kat_Pulseoximeter, 10)
        TRANSPORT_ITEM(ACE_epinephrine, 15)
        TRANSPORT_ITEM(ACE_surgicalKit, 1)
        TRANSPORT_ITEM(kat_fentanyl, 15)
        TRANSPORT_ITEM(kat_chestSeal, 10)
        TRANSPORT_ITEM(kat_atropine, 15)
        TRANSPORT_ITEM(kat_TXA, 10)
        TRANSPORT_ITEM(ACE_elasticBandage, 45)
        TRANSPORT_ITEM(ACE_packingBandage, 10)
        TRANSPORT_ITEM(ACE_quikclot, 10)
        TRANSPORT_ITEM(ACE_morphine, 15)
        TRANSPORT_ITEM(kat_BVM, 15)
        TRANSPORT_ITEM(kat_Pervitin, 2)
    };    
};

class rhs_assault_umbts_engineer_empty;
class rtg_engineer_grabpack : rhs_assault_umbts_engineer_empty
{
    scope = 1;
    author = "Shrike";
    displayname = "Engineer Grabbag";
    maximumLoad = 450;

    class TransportItems {
        TRANSPORT_ITEM(Toolkit, 1)
        TRANSPORT_ITEM(ACE_DefusalKit, 1)
        TRANSPORT_ITEM(MineDetector, 1)
        TRANSPORT_ITEM(ACE_EntrenchingTool, 1)
        TRANSPORT_ITEM(ACE_rope12, 3)
        TRANSPORT_ITEM(ACE_wirecutter, 1)        
    };    
};