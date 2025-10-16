class Aegis_NV_G_Armband_Blu_F: NVGoggles
{
};

class rtg_NV_RTG_Armband_F : Aegis_NV_G_Armband_Blu_F
{
	scope = 2;
	author = "Shrike";
    displayName = "[RTG] Armband";
    hiddenSelectionsTextures[] = 
    {
        "\rtgCustomContent\Textures\Equipment\Armband Purple.paa"
    };
    class ItemInfo: ItemInfo
    {electionsTextures[] = 
        {
            "\rtgCustomContent\Textures\Equipment\Armband Purple.paa"
        };
    };

    class XtdGearInfo
    {
        model = "ACEAX_Armband";
        size = "large";
    };
}

class Aegis_NV_G_Armband_Blu_Alt_F: Aegis_NV_G_Armband_Blu_F
{
    author = $STR_A3_A_Jamie;
    displayName = $STR_A3_A_CfgGlasses_G_Armband_BLU_alt_F0;
    model = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
    picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_BLU_F_CA.paa";
    class ItemInfo: ItemInfo
    {
        uniformModel = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
        modelOff = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
        mass = 2;
    };
};
class rtg_NV_RTG_Armband_alt_F : Aegis_NV_G_Armband_Blu_alt_F
{
	scope = 2;
	author = "Shrike";
    displayName = "[RTG] Armband (Alt)";
    hiddenSelectionsTextures[] = 
    {
        "\rtgCustomContent\Textures\Equipment\Armband Purple.paa"
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = 
        {
            "\rtgCustomContent\Textures\Equipment\Armband Purple.paa"
        };
    };

    class XtdGearInfo
    {
        model = "ACEAX_Armband";
        size =   "small";
    };
}
