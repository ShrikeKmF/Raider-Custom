#define _ARMA_
#include "configs\ACE_Medical_Treatment.hpp"
#include "configs\ACE_Medical_Treatment_Actions.hpp"

class CfgPatches
{
	class rtgAceMedical
	{
		requiredAddons[] = {"kat_pharma"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class cfgMods
{
	author = "Shrike";
};

class CfgWeapons {
    class ItemCore;
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class InventoryFirstAidKitItem_Base_F;
    class MedikitItem;

    class FirstAidKit: ItemCore {
        type = 0;
        class ItemInfo: InventoryFirstAidKitItem_Base_F {
            mass = 4;
        };
    };
    class Medikit: ItemCore {
        type = 0;
        class ItemInfo: MedikitItem {
            mass = 60;
        };
    };

    class ACE_packingBandage: ACE_ItemCore {
        scope = 2;
        displayName = "Packing Bandage (High/Shortest)";
        descriptionShort = "Highest Effectiveness - Shortest Reopening Time";
        descriptionUse = "Highest Effectiveness - Shortest Reopening Time";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class ACE_elasticBandage: ACE_ItemCore {
        scope = 2;
        displayName = "Elastic Bandage (Mid/Average)";
        descriptionShort = "Middle Effectiveness - Average Reopening Time";
        descriptionUse = "Middle Effectiveness - Average Reopening Time";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.8;
        };
    };
    class ACE_tourniquet: ACE_ItemCore {
        scope = 2;
        displayName = "Tourniquet";
        descriptionShort = "Stops blood flow but causes pain";
        descriptionUse = "Stops blood flow but causes pain";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };
    class ACE_plasmaIV: ACE_ItemCore {
        scope = 2;
        descriptionShort = "Large Increase to Blood Pressure";
        descriptionUse = "Large Increase to Blood Pressure";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 4;
        };
    };
    class ACE_plasmaIV_500: ACE_plasmaIV {
        scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };
    class ACE_bloodIV: ACE_ItemCore {
        scope = 2;
        descriptionShort = "Average Increase to Blood Pressure";
        descriptionUse = "Average Increase to Blood Pressure";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 4;
        };
    };
    class ACE_bloodIV_500: ACE_bloodIV {
        scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };
    class ACE_quikclot: ACE_ItemCore {
        scope = 2;
        displayName = "Quick Clot (Low/Longest)";
        descriptionShort = "Low Effectiveness - Long Reopening Time";
        descriptionUse = "Low Effectiveness - Long Reopening Time";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.6;
        };
    };
    class ACE_personalAidKit: ACE_ItemCore {
        scope = 2;
        descriptionShort = "Clears all Trauma";
        descriptionUse = "Clears all Trauma";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 8;
        };
    };
    class ACE_surgicalKit: ACE_ItemCore {
        scope = 2;
        displayName= "Surgical Kit";
        descriptionShort = "Stops Reopening";
        descriptionUse = "Stops Reopening";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 6;
        };
    };
    class ACE_bodyBag: ACE_ItemCore {
        scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
    };    

    class kat_TXA: ACE_ItemCore {
        scope = 2;
        descriptionShort = "Helps Clot Wounds";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };

    class kat_naloxone: ACE_ItemCore {
        scope = 2;
        descriptionShort = "Clears Side Effects";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };

    class kat_atropine: ACE_ItemCore {
        scope = 2;
        descriptionShort = "Clears Side Effects";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };

    class kat_fentanyl: ACE_ItemCore {
        scope = 2;
        descriptionShort = "Strongest pain reduction";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };

    class kat_PainkillerItem: ACE_ItemCore {
        scope = 2;
        scopeCurator = 2;
        displayName = "Pain Killers";
        descriptionShort = "Weakest pain reduction";
        author = "Shrike";
    };

    class kat_PervitinItem: ACE_ItemCore {
        scope = 2;
        scopeCurator = 2;
        displayName = "Super Serum";
        descriptionShort = "Stamina Boost and Sway Reduction";
        author = "Shrike";
    };
};

class CfgMagazines {
    class CA_Magazine;
    class kat_Painkiller: CA_Magazine {
        scope = 2;
        scopeCurator = 2;
        displayName = "Pain Killers";
        descriptionShort = "Weakest pain reduction";
        author = "Shrike";
        count = 5;
        mass = 1;
    };

    class kat_Pervitin: CA_Magazine {
        scope = 2;
        scopeCurator = 2;
        displayName = "Super Serum";
        descriptionShort = "Stamina Boost and Sway Reduction";
        author = "Shrike";
        count = 4;
        mass = 1;
    };
};