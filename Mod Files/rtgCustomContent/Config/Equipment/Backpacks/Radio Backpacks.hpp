class TFAR_anprc155;
class rtg_ANPRC155 : TFAR_anprc155
{
    scope = 2;
    author = "Raspu, Gandi, Nkey, Shrike";
    displayName = "AN/PRC-155 (Black)";

    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = RTG_LR_RADIO_RANGE;
    maximumLoad = RTG_BACKPACK_LOAD;

    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\rtgCustomContent\Textures\Equipment\anprc155_black.paa"};

    // ACEAX
    class XtdGearInfo
    {
        model = "ACEAX_Radio_Pack";
        camo = "BLK";
    };
}

class rtg_ANPRC155_olive : rtg_ANPRC155
{
    scope = 2;
    author = "Raspu, Gandi, Nkey, Shrike";
    displayName = "AN/PRC-155 (Black)";

    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = RTG_LR_RADIO_RANGE;
    maximumLoad = RTG_BACKPACK_LOAD;

    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\rtgCustomContent\Textures\Equipment\anprc155_olive.paa"};

    // ACEAX
    class XtdGearInfo
    {
        model = "ACEAX_Radio_Pack";
        camo = "OD";
    };
}

class rtg_ANPRC155_tan : rtg_ANPRC155
{
    scope = 2;
    author = "Raspu, Gandi, Nkey, Shrike";
    displayName = "AN/PRC-155 (Tan)";

    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = RTG_LR_RADIO_RANGE;
    maximumLoad = RTG_BACKPACK_LOAD;

    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\rtgCustomContent\Textures\Equipment\anprc155_tan.paa"};

    // ACEAX
    class XtdGearInfo
    {
        model = "ACEAX_Radio_Pack";
        camo = "TAN";
    };
}

class AX_B_RadioPack_t03_blk_F;
class rtg_ANPRC155_small : AX_B_RadioPack_t03_blk_F
{
    scope = 2;
    displayName = "AN/PRC-155 (Black/Small)";

    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = RTG_LR_RADIO_RANGE;
    maximumLoad = RTG_BACKPACK_LOAD;

    // ACEAX
    class XtdGearInfo
    {
        model = "ACEAX_Radio_Pack_Small";
        camo = "BLK";
    };
}

class AX_B_RadioPack_t03_oli_F;
class rtg_ANPRC155_olive_small : AX_B_RadioPack_t03_oli_F
{
    scope = 2;
    displayName = "AN/PRC-155 (Olive/Small)";

    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = RTG_LR_RADIO_RANGE;
    maximumLoad = RTG_BACKPACK_LOAD;

    // ACEAX
    class XtdGearInfo
    {
        model = "ACEAX_Radio_Pack_Small";
        camo = "OD";
    };
}

class AX_B_RadioPack_t03_khk_F;
class rtg_ANPRC155_tan_small : AX_B_RadioPack_t03_khk_F
{
    scope = 2;
    displayName = "AN/PRC-155 (Tan/Small)";

    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = RTG_LR_RADIO_RANGE;
    maximumLoad = RTG_BACKPACK_LOAD;


    // ACEAX
    class XtdGearInfo
    {
        model = "ACEAX_Radio_Pack_Small";
        camo = "TAN";
    };
}