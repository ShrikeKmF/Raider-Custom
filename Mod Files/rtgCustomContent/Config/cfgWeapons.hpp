class CfgWeapons {
    class ItemCore;
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class Rifle_Base_F;
    class Rifle_Short_Base_F;
    class Rifle_Long_Base_F;
    class Pistol_Base_F;
    class ItemInfo;
    class ItemRadio;
    class VestItem;
    class InventoryOpticsItem_Base_F;
    class InventoryMuzzleItem_Base_F;
    class InventoryUnderItem_Base_F;
    class Vest_Camo_Base: ItemCore
    {
        class ItemInfo;
    };
    class UniformItem;
    class Binocular;
    class NVGoggles: Binocular
    {
        class ItemInfo;
    };
    class Mode_SemiAuto;
    class Mode_FullAuto;
    class Mode_Burst;
    class WeaponSlotsInfo;
    class Launcher_Base_F;

    // Equipment
    #include "\rtgCustomContent\Config\Equipment\RTG Armbands.hpp"
    #include "\rtgCustomContent\Config\Equipment\Medical Equipment.hpp"
    #include "\rtgCustomContent\Config\Equipment\Night Vision.hpp"
    #include "\rtgCustomContent\Config\Equipment\Helmets\CRTG Airframe.hpp"
    #include "\rtgCustomContent\Config\Equipment\Helmets\CRTG Opscore.hpp"
    #include "\rtgCustomContent\Config\Equipment\Helmets\CRTG Soft.hpp"
    #include "\rtgCustomContent\Config\Equipment\Uniforms\CRTG Uniforms.hpp"
    #include "\rtgCustomContent\Config\Equipment\Vests\AVS Vest.hpp"
    #include "\rtgCustomContent\Config\Equipment\Vests\CRTG CIRAS.hpp"
    #include "\rtgCustomContent\Config\Equipment\Vests\CRTG JPC.hpp"
    #include "\rtgCustomContent\Config\Equipment\Vests\CRTG MMAC.hpp"
    #include "\rtgCustomContent\Config\Equipment\Vests\Modular Vests.hpp"
    #include "\rtgCustomContent\Config\Equipment\Vests\Other Vests.hpp"
    #include "\rtgCustomContent\Config\Equipment\Vests\EF.hpp"
    #include "\rtgCustomContent\Config\Equipment\Vests\Atlas.hpp"

    // Weapons
    #include "\rtgCustomContent\Config\Weapons\XM7.hpp"
    #include "\rtgCustomContent\Config\Weapons\Aegis.hpp"
};