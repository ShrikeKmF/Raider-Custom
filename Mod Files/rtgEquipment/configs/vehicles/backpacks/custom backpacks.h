class B_Kitbag_rgr;
class B_AssaultPack_blk;

// AMCU
class rtg_AMCU_Carryall: VSM_OGA_carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 320;
    tf_hasLRradio = 0;
    mass = 50;
    displayName = "Carryall (AMCU)";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\amcu\AMCU_CARRYALL.paa"};
};
class rtg_AMCU_kitbag: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 320;
    tf_hasLRradio = 0;
    mass = 50;
    displayName = "Kitbag (AMCU)";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\amcu\AMCU KITBAG.paa"};
};

///////////////////////////////////////
// Personal Custom Content
///////////////////////////////////////

// Tex
class texBackpack: B_AssaultPack_blk
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 320;
    tf_hasLRradio = 0;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
    mass = 50;
    displayName = "Kitbag - Tex";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\texAssaultPack.paa"};
};
class texRadioPack: B_AssaultPack_blk
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 320;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
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
    maximumLoad = 320;
    tf_hasLRradio = 0;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
    mass = 50;
    displayName = "Kitbag - Cake";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\cakeKitbag.paa"};
};
class cakeRadioPack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 320;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
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
    maximumLoad = 320;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
    mass = 50;
    displayName = "Carryall (Radio/Black) - Keba";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\Multicam_Black_carryall_KEBAergo.paa"};
};
class kebaCarryRadioAll_ALP: VSM_OGA_carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 320;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
    mass = 50;
    displayName = "Carryall (Radio/Alpine) - Keba";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\Alpine_carryall_KEBAergo.paa"};
};
class kebaCarryAll_MCB: VSM_OGA_carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 320;
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
    maximumLoad = 320;
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
    maximumLoad = 320;
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
    maximumLoad = 320;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
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
    maximumLoad = 320;
    tf_hasLRradio = 0;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
    mass = 50;
    displayName = "Kitbag - Shrike";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\shrikeKitbag.paa"};
};
class shrikeRadiobag: rtg_radiopack_black
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 320;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
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
    maximumLoad = 320;
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
    maximumLoad = 320;
    mass = 50;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
    displayName = "Radiopack - Sal";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\salKitbag.paa"};
};
// Blade
class bladesBackpack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 320;
    tf_hasLRradio = 0;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
    mass = 50;
    displayName = "Kitbag - Blade";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\bladesKitbag.paa"};
};
class bladesRadioPackack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 320;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
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
    maximumLoad = 320;
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
    maximumLoad = 320;
    mass = 50;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
    displayName = "Radiopack - Ozzy";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\ozzybag.paa"};
};
// Fizz
class fizzAlpineCarryAll: rtg_Alpine_Carryall
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 320;
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
    maximumLoad = 320;
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
    maximumLoad = 320;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
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
    maximumLoad = 320;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
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
    maximumLoad = 320;
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
    maximumLoad = 320;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
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
    maximumLoad = 320;
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
    maximumLoad = 320;
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
    maximumLoad = 320;
    mass = 50;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
    displayName = "Radiopack - Phoebe";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\phoebeKitbag.paa"};
};

// Sparkles
class sparklesBackpack: B_Kitbag_rgr
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 320;
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
    maximumLoad = 320;
    mass = 50;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
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
    maximumLoad = 320;
    tf_hasLRradio = 0;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
    mass = 50;
    displayName = "Backpack - Fish";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\fishPack.paa"};
};
class fishRadioPack: fishPack
{
    scope = 2;
    dlc = "raiderTactical";
    author = "Shrike";
    maximumLoad = 320;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
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
    maximumLoad = 320;
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
    maximumLoad = 320;
    mass = 50;
    tf_hasLRradio = 1;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 50000;
    displayName = "Radiopack - Brewsky";
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\brewPack.paa"};
};