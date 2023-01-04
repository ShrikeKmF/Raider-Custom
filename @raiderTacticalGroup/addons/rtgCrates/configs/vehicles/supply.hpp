class CargoNet_01_box_F;
class B_supplyCrate_F;


class raider_arsenal : B_supplyCrate_F {
    scope = SCOPE_PUBLIC;
    author = "Shrike";
    displayName = "Arsenal";
    editorCategory = "EdCat_Supplies";
    editorSubcategory = "Rtg_EdCat_Supply";
    
    accuracy = 1000;
    maximumLoad = 99999;
    weight = 4;

    transportMaxWeapons = 0;
    transportMaxMagazines = 0;
    transportMaxBackpacks = 0;

    ace_cargo_size = 4;
    ace_dragging_canDrag = 1;
    ace_dragging_canCarry = 1;
    ace_dragging_dragPosition[] = {0,1.5,0};

    class TransportMagazines {};

    class TransportItems {};
	
    class TransportWeapons {};
    class TransportBackpacks {};
};