class ptv_DeltaPack_Blk;
class RTG_MedicalBackpack_Black : ptv_DeltaPack_Blk
{
    displayname = "[RTG] Medical Delta Pack (BLK)";
    maximumLoad = 170;
    tf_hasLRradio = 0;
    hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
    hiddenSelectionsTextures[] = {"\rtgCustomContent\Textures\Equipment\Medical Bag BLK.paa","\ptv_characters\bags\data\ptv_delta_bag_misc_co.paa"};
    class XtdGearInfo { model = "ACEAX_Medical_Pack"; camo = "BLK";};
}

class RTG_MedicalBackpack_Tan : ptv_DeltaPack_Blk
{
    displayname = "[RTG] Medical Delta Pack (TAN)";
    maximumLoad = 170;
    tf_hasLRradio = 0;
    hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
    hiddenSelectionsTextures[] = {"\rtgCustomContent\Textures\Equipment\Medical Bag Tan.paa","\ptv_characters\bags\data\ptv_delta_bag_misc_co.paa"};
    class XtdGearInfo { model = "ACEAX_Medical_Pack"; camo = "OD";};
}

class RTG_MedicalBackpack_OD : ptv_DeltaPack_Blk
{
    displayname = "[RTG] Medical Delta Pack (OD)";
    maximumLoad = 170;
    tf_hasLRradio = 0;
    hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
    hiddenSelectionsTextures[] = {"\rtgCustomContent\Textures\Equipment\Medical Bag OD.paa","\ptv_characters\bags\data\ptv_delta_bag_misc_co.paa"};
    class XtdGearInfo { model = "ACEAX_Medical_Pack"; camo = "TAN";};
}