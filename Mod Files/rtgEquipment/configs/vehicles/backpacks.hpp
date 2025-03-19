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
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "alpine";
	};
};
class rtg_Arid_Backpack_Compact : Arid_Backpack_Compact {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "mca";
	};
};
class rtg_Black_Backpack_Compact : Black_Backpack_Compact {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "mcb";
	};
};
class rtg_VSM_Multicam_Backpack_Compact :VSM_Multicam_Backpack_Compact {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "mc";
	};
};
class rtg_VSM_MulticamTropic_Backpack_Compact : VSM_MulticamTropic_Backpack_Compact {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "mct";
	};
};
class rtg_VSM_OGA_Backpack_Compact : VSM_OGA_Backpack_Compact {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "tan";
	};
};
class rtg_VSM_OGA_OD_Backpack_Compact : VSM_OGA_OD_Backpack_Compact {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "od";
	};
};
class rtg_VSM_ProjectHonor_Backpack_Compact : VSM_ProjectHonor_Backpack_Compact {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "assault";
		camo = "ph";
	};
};

class rtg_Alpine_Backpack_kitbag : Alpine_Backpack_kitbag {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "alpine";
	};
};
class rtg_Arid_Backpack_kitbag : Arid_Backpack_kitbag {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "mca";
	};
};
class rtg_Black_Backpack_kitbag : Black_Backpack_kitbag {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "mcb";
	};
};
class rtg_VSM_Multicam_Backpack_Kitbag : VSM_Multicam_Backpack_Kitbag {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "mc";
	};
};
class rtg_VSM_MulticamTropic_Backpack_Kitbag : VSM_MulticamTropic_Backpack_Kitbag {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "mct";
	};
};
class rtg_VSM_OGA_Backpack_Kitbag : VSM_OGA_Backpack_Kitbag {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "tan";
	};
};
class rtg_VSM_OGA_OD_Backpack_Kitbag : VSM_OGA_OD_Backpack_Kitbag {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "od";
	};
};
class rtg_VSM_ProjectHonor_Backpack_Kitbag : VSM_ProjectHonor_Backpack_Kitbag {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "kitbag";
		camo = "ph";
	};
};

class rtg_Alpine_Carryall : Alpine_Carryall {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "alpine";
	};
};
class rtg_Arid_Carryall : Arid_Carryall {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "mca";
	};
};
class rtg_Black_Carryall : Black_Carryall {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "mcb";
	};
};
class rtg_VSM_Multicam_carryall : VSM_Multicam_carryall {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "mc";
	};
};
class rtg_VSM_MulticamTropic_carryall : VSM_MulticamTropic_carryall {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "mct";
	};
};
class rtg_VSM_OGA_carryall : VSM_OGA_carryall {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "tan";
	};
};
class rtg_VSM_OGA_OD_carryall : VSM_OGA_OD_carryall {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "od";
	};
};
class rtg_VSM_ProjectHonor_carryall : VSM_ProjectHonor_carryall {
    RTG_WEAPON_BASE
    
    maximumLoad = 350;
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_backpack";
		style = "carryall";
		camo = "ph";
	};
};

class TFAR_rt1523g_black;
class TFAR_rt1523g_green;
class TFAR_rt1523g_sage;
class rtg_radiopack_black: TFAR_rt1523g_black
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "RT-1623G Radiopack (Black)";
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_radiopack";
        camo = "BLK";
    };
};
class rtg_radiopack_green: TFAR_rt1523g_green
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "RT-1623G Radiopack (Black)";
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_radiopack";
        camo = "GRN";
    };
};
class rtg_radiopack_sage: TFAR_rt1523g_sage
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "RT-1623G Radiopack (Black)";
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_radiopack";
        camo = "CYT";
    };
};

// Custom Backpacks
class B_Kitbag_rgr;
class B_AssaultPack_blk;
// Tex
class texBackpack: B_AssaultPack_blk
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    tf_hasLRradio = 0;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Kitbag - Tex";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\texAssaultPack.paa"};
};
class texRadioPack: B_AssaultPack_blk
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Radiopack - Tex";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\texAssaultPack.paa"};
};
// Cake
class cakeBackpack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    tf_hasLRradio = 0;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Kitbag - Cake";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\cakeKitbag.paa"};
};
class cakeRadioPack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Radiopack - Cake";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\cakeKitbag.paa"};
};
// Keba
class kebaCarryRadioAll_MCB: VSM_OGA_carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Carryall (Radio/Black) - Keba";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\Multicam_Black_carryall_KEBAergo.paa"};
};
class kebaCarryRadioAll_ALP: VSM_OGA_carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Carryall (Radio/Alpine) - Keba";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\Alpine_carryall_KEBAergo.paa"};
};
class kebaCarryAll_MCB: VSM_OGA_carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    tf_hasLRradio = 0;
    mass = 50;
    displayName = "Carryall (Black) - Keba";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\Multicam_Black_carryall_KEBAergo.paa"};
};
class kebaCarryAll_ALP: VSM_OGA_carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    tf_hasLRradio = 0;
    mass = 50;
    displayName = "Carryall (Alpine) - Keba";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\Alpine_carryall_KEBAergo.paa"};
};
// Lynx
class lynxKitbag: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    mass = 50;
    tf_hasLRradio = 0;
    displayName = "Kitbag - Lynx";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\lynxKitbag.paa"};
};
class lynxRadioPack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Radiopack - Lynx";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\lynxKitbag.paa"};
};
// Shrike
class shrikeBackpack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    tf_hasLRradio = 0;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Kitbag - Shrike";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\shrikeKitbag.paa"};
};
class shrikeRadiobag: rtg_radiopack_black
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "RadioBag - Shrike";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\shrikeRadioBag.paa"};
    class XtdGearInfo
    {
        model = "";
    };
};
// Sal
class salBackpack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    mass = 50;
    tf_hasLRradio = 0;
    displayName = "Kitbag - Sal";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\salKitbag.paa"};
};
class salRadioPack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    mass = 50;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    displayName = "Radiopack - Sal";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\salKitbag.paa"};
};
// Blade
class bladesBackpack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    tf_hasLRradio = 0;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Kitbag - Blade";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\bladesKitbag.paa"};
};
class bladesRadioPackack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Radiopack - Blade";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\bladesKitbag.paa"};
};
// Ozzy
class ozzyBackpack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    mass = 50;
    tf_hasLRradio = 0;
    displayName = "Kitbag - Ozzy";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\ozzybag.paa"};
};
class ozzyRadioPack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    mass = 50;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    displayName = "Radiopack - Ozzy";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\ozzybag.paa"};
};
// Fizz
class fizzAlpineCarryAll: rtg_Alpine_Carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    tf_hasLRradio = 0;
    mass = 50;
    displayName = "Carryall (Alpine) - Fizz";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\Alpine_carryall_Fizz.paa"};
    class XtdGearInfo
    {
        model = "";
    };
};
class fizzBlackCarryAll: rtg_Alpine_Carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    tf_hasLRradio = 0;
    mass = 50;
    displayName = "Carryall (Black) - Fizz";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\Multicam_Black_carryall_Fizz.paa"};
    class XtdGearInfo
    {
        model = "";
    };
};
class fizzAlpineRadioCarryAll: rtg_Alpine_Carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Carryall (Radio/Alpine) - Fizz";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\Alpine_carryall_Fizz.paa"};
    class XtdGearInfo
    {
        model = "";
    };
};
class fizzBlackRadioCarryAll: rtg_Alpine_Carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Carryall (Radio/Black) - Fizz";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\Multicam_Black_carryall_Fizz.paa"};
    class XtdGearInfo
    {
        model = "";
    };
};
class fizzTanCarryAll: rtg_Alpine_Carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    tf_hasLRradio = 0;
    mass = 50;
    displayName = "Carryall (Tan) - Fizz";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\Tan_carryall_Fizz.paa"};
    class XtdGearInfo
    {
        model = "";
    };
};
class fizzTaneRadioCarryAll: rtg_Alpine_Carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Carryall (Radio/Tan) - Fizz";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\Tan_carryall_Fizz.paa"};
    class XtdGearInfo
    {
        model = "";
    };
};

// Kim 
class kim_carryall: rtg_Alpine_Carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    tf_hasLRradio = 0;
    mass = 50;
    displayName = "Carryall - Kim";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\kim_carryall.paa"};
    class XtdGearInfo
    {
        model = "";
    };
};


// Phoebe
class patsBackpack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    tf_hasLRradio = 0;
    mass = 50;
    displayName = "Kitbag - Phoebe";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\phoebeKitbag.paa"};
};
class patsRadioPack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    mass = 50;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    displayName = "Radiopack - Phoebe";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\phoebeKitbag.paa"};
};

// Sparkles
class sparklesBackpack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    mass = 50;
    tf_hasLRradio = 0;
    displayName = "Kitbag - Sparkles";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\sparklesBag.paa"};
};
class sparklesRadioPack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    mass = 50;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    displayName = "Radiopack - Sparkles";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\sparklesBag.paa"};
};

// Fish
class B_CombinationUnitRespirator_01_F;
class fishPack: B_CombinationUnitRespirator_01_F
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    tf_hasLRradio = 0;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Backpack - Fish";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\fishPack.paa"};
};
class fishRadioPack: fishPack
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    mass = 50;
    displayName = "Radipack - Fish";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\fishPack.paa"};
};

// Brewsky
class B_RadioBag_01_black_F;
class brewPack: B_RadioBag_01_black_F
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 350;
    mass = 50;
    tf_hasLRradio = 0;
    displayName = "Backpack - Brewsky";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\brewPack.paa"};
};
class brewRadioPack: B_RadioBag_01_black_F
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 120;
    mass = 50;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 20000;
    displayName = "Radiopack - Brewsky";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\brewPack.paa"};
};

// Medical Grabbag For Vehicles
class rtg_medical_grabpack : B_Kitbag_rgr {
    scope = 1;
    
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

// AMCU
class VSM_Multicam_Crye_Uniform;
class amcu_uniform : VSM_Multicam_Crye_Uniform
{
    
	_generalMacro = "B_soldier_F";
	RTG_WEAPON_BASE
    uniformClass = "amcu_uniform";
    hiddenSelections[] = {"Camo","Insignia"};
    displayName = "[VSM] AMCU (Crye)";
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\amcu_uniform.paa"};
    hiddenSelectionsMaterials[] = {"VSM_ProjectHonor\Data\VSM_ARD.RVMAT"};
};