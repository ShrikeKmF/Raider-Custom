class Aegis_NV_G_Armband_Blu_alt_F;
class Aegis_NV_G_Armband_Blu_F;
class rtg_NV_RTG_Armband_F : Aegis_NV_G_Armband_Blu_F
{
	scope = 2;
	author = "Shrike";
    displayName = "[RTG] Armband";
	modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	model = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband.p3d";
    hiddenSelections[] =
    {
        camo
    };
    hiddenSelectionsTextures[] = 
    {
        "\rtgCustomContent\Textures\Equipment\Armband Purple.paa";
    };
    class ItemInfo: ItemInfo
    {
		uniformModel = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband.p3d";
		modelOff = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband.p3d";
        hiddenSelections[] =
        {
            camo
        };
        hiddenSelectionsTextures[] = 
        {
            "\rtgCustomContent\Textures\Equipment\Armband Purple.paa";
        };
    };

    class XtdGearInfo
    {
        model = "ACEAX_Armband";
        size = "large";
    };
}

class rtg_NV_RTG_Armband_alt_F : Aegis_NV_G_Armband_Blu_alt_F
{
	scope = 2;
	author = "Shrike";
    displayName = "[RTG] Armband (Alt)";
	model = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
    hiddenSelections[] =
    {
        camo
    };
    hiddenSelectionsTextures[] = 
    {
        "\rtgCustomContent\Textures\Equipment\Armband Purple.paa";
    };
    class ItemInfo: ItemInfo
    {
		uniformModel = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
		modelOff = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
        hiddenSelections[] =
        {
            camo
        };
        hiddenSelectionsTextures[] = 
        {
            "\rtgCustomContent\Textures\Equipment\Armband Purple.paa";
        };
    };

    class XtdGearInfo
    {
        model = "ACEAX_Armband";
        size =   "small";
    };
}
