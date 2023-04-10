
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
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(Packing_Bandage_Display);
        picture = QPATHTOF(ui\packingBandage_ca.paa);
        model = QPATHTOF(data\packingbandage.p3d);
        descriptionShort = CSTRING(Packing_Bandage_Desc_Short);
        descriptionUse = CSTRING(Packing_Bandage_Desc_Use);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class ACE_elasticBandage: ACE_ItemCore {
        scope = 2;
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(Bandage_Elastic_Display);
        picture = QPATHTOF(ui\elasticBandage_ca.paa);
        model = "\A3\Structures_F_EPA\Items\Medical\Bandage_F.p3d";
        descriptionShort = CSTRING(Bandage_Elastic_Desc_Short);
        descriptionUse = CSTRING(Bandage_Elastic_Desc_Use);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class ACE_tourniquet: ACE_ItemCore {
        scope = 2;
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(Tourniquet_Display);
        picture = QPATHTOF(ui\tourniquet_ca.paa);
        model = QPATHTOF(data\tourniquet.p3d);
        descriptionShort = CSTRING(Tourniquet_Desc_Short);
        descriptionUse = CSTRING(Tourniquet_Desc_Use);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class ACE_plasmaIV: ACE_ItemCore {
        scope = 2;
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(Plasma_IV);
        model = QPATHTOF(data\IVBag_1000ml.p3d);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\IVBag_plasma_1000ml_ca.paa)};
        picture = QPATHTOF(ui\plasmaIV_ca.paa);
        descriptionShort = CSTRING(Plasma_IV_Desc_Short);
        descriptionUse = CSTRING(Plasma_IV_Desc_Use);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 4;
        };
    };
    class ACE_plasmaIV_500: ACE_plasmaIV {
        displayName = CSTRING(Plasma_IV_500);
        model = QPATHTOF(data\IVBag_500ml.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\IVBag_plasma_500ml_ca.paa)};
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };
    class ACE_bloodIV: ACE_ItemCore {
        scope = 2;
        author = ECSTRING(common,ACETeam);
        model = QPATHTOF(data\IVBag_1000ml.p3d);
        displayName = CSTRING(Blood_IV);
        picture = QPATHTOF(ui\bloodIV_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\IVBag_blood_1000ml_ca.paa)};
        descriptionShort = CSTRING(Blood_IV_Desc_Short);
        descriptionUse = CSTRING(Blood_IV_Desc_Use);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 4;
        };
    };
    class ACE_bloodIV_500: ACE_bloodIV {
        displayName = CSTRING(Blood_IV_500);
        model = QPATHTOF(data\IVBag_500ml.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\IVBag_blood_500ml_ca.paa)};
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };
    class ACE_quikclot: ACE_ItemCore {
        scope = 2;
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(QuikClot_Display);
        model = QPATHTOF(data\QuikClot.p3d);
        picture = QPATHTOF(ui\quickclot_ca.paa);
        descriptionShort = CSTRING(QuikClot_Desc_Short);
        descriptionUse = CSTRING(QuikClot_Desc_Use);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class ACE_personalAidKit: ACE_ItemCore {
        scope = 2;
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(Aid_Kit_Display);
        picture = QPATHTOF(ui\personal_aid_kit_ca.paa);
        descriptionShort = CSTRING(Aid_Kit_Desc_Short);
        descriptionUse = CSTRING(Aid_Kit_Desc_Use);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 8;
        };
    };
    class ACE_surgicalKit: ACE_ItemCore {
        scope = 2;
        author = ECSTRING(common,ACETeam);
        displayName= CSTRING(SurgicalKit_Display);
        model = QPATHTOF(data\surgical_kit.p3d);
        picture = QPATHTOF(ui\surgicalKit_ca.paa);
        descriptionShort = CSTRING(SurgicalKit_Desc_Short);
        descriptionUse = CSTRING(SurgicalKit_Desc_Use);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 8;
        };
    };
    class ACE_bodyBag: ACE_ItemCore {
        scope = 2;
        author = ECSTRING(common,ACETeam);
        displayName= CSTRING(Bodybag_Display);
        model = QPATHTOF(data\bodybagItem.p3d);
        picture = QPATHTOF(ui\bodybag_ca.paa);
        descriptionShort = CSTRING(Bodybag_Desc_Short);
        descriptionUse = CSTRING(Bodybag_Desc_Use);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
    };
};
