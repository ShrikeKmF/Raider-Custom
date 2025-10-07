class ACEAX_Crye_AVS
{
    label = "Crye AVS";
    author = "Shrike";
    options[] = { "role", "variant", "camo" };

    class role
    {
        values[] = { "1", "2", "3" };
        class 1 { label = "Assaulter"; description = "Crye AVS configured for riflemen / assaulters"; };
        class 2 { label = "Gunner"; description = "Crye AVS configured for automatic riflemen / support gunners"; };
        class 3 { label = "Comms"; description = "Crye AVS configured for communications operators"; };
    };

    class variant
    {
        values[] = { "base", "1", "2", "3" };
        class base { label = "Base"; description = "Standard variant"; };
        class 1 { label = "Variant 1"; description = "Modified loadout variant 1"; };
        class 2 { label = "Variant 2"; description = "Modified loadout variant 2"; };
        class 3 { label = "Variant 3"; description = "Modified loadout variant 3"; };
    };

    class camo
    {
        values[] = { "RG", "GRN" };
        class GRN { label = "Ranger Green"; description = "Crye Ranger Green pattern"; };
        class Tan { label = "Tan"; description = "Crye Tan pattern"; };
    };
};
