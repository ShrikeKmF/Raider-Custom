class Aegis_NV_G_Armband_Blu_alt_F;
class Aegis_NV_G_Armband_Blu_F;
class rtg_NV_RTG_Armband_F : Aegis_NV_G_Armband_Blu_F
{
    displayName = "[RTG] Armband";
    hiddenSelections[] =
    {
        camo
    };
    hiddenSelectionsTextures[] = 
    {
        "\rtgCustomContent\Textures\Equipment\rtg_armband.paa";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[] =
        {
            camo
        };
        hiddenSelectionsTextures[] = 
        {
            "\rtgCustomContent\Textures\Equipment\rtg_armband.paa";
        };
    };

    class XtdGearInfo
    {
        model = "rtg_ace_expanded_armband";
        size =   "large";
    };
}

class rtg_NV_RTG_Armband_alt_F : Aegis_NV_G_Armband_Blu_alt_F
{
    displayName = "[RTG] Armband (Alt)";
    hiddenSelections[] =
    {
        camo
    };
    hiddenSelectionsTextures[] = 
    {
        "\rtgCustomContent\Textures\Equipment\rtg_armband.paa";
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[] =
        {
            camo
        };
        hiddenSelectionsTextures[] = 
        {
            "\rtgCustomContent\Textures\Equipment\rtg_armband.paa";
        };
    };

    class XtdGearInfo
    {
        model = "rtg_ace_expanded_armband";
        size =   "small";
    };
}
