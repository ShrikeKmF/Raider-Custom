/*
RTG Infantry Resupply Pouch
    3 uses per pouch – restores saved loadout variable
    Requires RTG FOB
    Made by Shrike
*/

class UMI_Weed_Bale;
class InventoryItem_Base_F;

class RTG_Resupply_Pouch: UMI_Weed_Bale {
    scope = 2;
    author = "Shrike";
    displayName = "[RTG] Ammo Pouch";
    descriptionShort = "Portable resupply pouch (3 uses)";
    mass = 10;

    class ACE_Inventory {
        category = "tools";
        sortOrder = 1;
    };

    class ItemInfo: InventoryItem_Base_F {
        mass = 10;       
    };
};
