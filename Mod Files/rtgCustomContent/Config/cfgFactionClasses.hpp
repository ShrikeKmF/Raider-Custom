class CfgFactionClasses
{
// Editor
    class NO_CATEGORY;
    class rtgModules: NO_CATEGORY
    {
        displayName = "[RTG] Modules";
    };

    class Raider_Tactical_F
    {
        displayName = "[RTG] Vehicles";
        priority = 0;
        side = WEST;
        scope = 2;
    };

    class Raider_Tactical_G_F : Raider_Tactical_F
    {
        side = RESISTANCE;
    };
};