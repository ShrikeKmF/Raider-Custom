class cfgEditorSubcategories {
    class raidertac
    {
        displayName = "Raider Tactical";
    };
}
/*
>>RTG User Roles<<
RTG_Common
RTG_MachineGunner
RTG_Sapper
RTG_AntiTank
RTG_Medic
RTG_Marksman
RTG_Leader
RTG_GroundVic
RTG_AirVic
*/

class CfgVehicles 
{
    class B_supplyCrate_F;
    class rtg_arsenal : B_supplyCrate_F {
        scope = 2;
        Author = "Shrike";
	    displayName = "Arsenal";
        editorSubcategory = "raidertac";
        ace_cargo_space = 0;
        maximumLoad = 0;
        class TransportItems {};
        class TransportMagazines {};
        class TransportWeapons {};
        class ace_cargo {};
    };
};