class B_supplyCrate_F;


class Raider_Arsenal_Base : B_supplyCrate_F {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    author = "Shrike";
    displayName = "Arsenal_Base";
    editorCategory = "EdCat_Supplies";
    editorSubcategory = "Rtg_EdCat_Supply";

    ace_cargo_hasCargo = 0;
    ace_cargo_canLoad = 0;
    ace_dragging_canDrag = 0;
    ace_dragging_canCarry = 0;

    class TransportMagazines {};
    class TransportItems {};
    class TransportWeapons {};
    class TransportBackpacks {};
};

class Raider_Arsenal_A : Raider_Arsenal_Base {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    author = "Shrike";
    displayName = "Raider Arsenal";
    class ACE_Actions {
        class ACE_MainActions {
            displayName = "Arsenal";
            selection = "";
            distance = 5;
            condition = 1;
            class SOCOMD_arsenal {
                displayName = "Personalise";
                condition = 1;
                statement = "[player, player, false] call ace_arsenal_fnc_openBox";
                showDisabled = 0;
                exceptions[] = {"isNotInside", "isNotSitting"};   
            };
        };
    };
};