////////////////////////////////////////////////////////////////////////////////
// INTERACTIVE BOX

class Land_PaperBox_closed_F;
class RAIDER_Arsenal_Base : Land_PaperBox_closed_F {
    scope = SCOPE_PROTECTED;
    scopeCurator = SCOPE_PRIVATE;
    editorCategory = EdCat_Supplies;
    editorSubcategory = RAIDER_EdSubcat_Supply;
    author = "Shrike";
    displayName = "Arsenal";

    ace_cargo_hasCargo = 0;
    ace_cargo_canLoad = 0;
    ace_dragging_canDrag = 0;
    ace_dragging_canCarry = 0;

    class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems {};
    class TransportBackpacks {};
};


class RAIDER_Arsenal_A : RAIDER_Arsenal_Base {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    author = "Shrike";
    displayName = "Arsenal";

    class ACE_Actions {
        class ACE_MainActions {
            displayName = "Arsenal";
            selection = "";
            distance = 5;
            condition = 1;
            class SOCOMD_arsenal {
                displayName = "Personalise";
                condition = 1;
                statement = "[player, player, true] call ace_arsenal_fnc_openBox";
                showDisabled = 0;
                exceptions[] = {"isNotInside", "isNotSitting"};                
            };
    };
};