// Desert Eagle
class rtg_ace_expanded_eagle {
    label = "Deagle";
    author = "Shrike";
    options[] = {"camo", "fsm"};
    class camo
    {
        label = "Camo";
        values[] = {"black","silver", "gold"};
        class black
        {
            label = "Black";
            description = "Black";
        };
        class silver
        {
            label = "Silver";
            description = "Silver";
        };
        class gold
        {
            label = "Gold";
            description = "Gold";
        };
    };
    class fsm
    {
        label = "FSM";
        values[] = {"sa","fa"};
        class sa
        {
            label = "Semi Auto";
            description = "Semi Auto";
        };
        class fa
        {
            label = "Full Auto";
            description = "Full Auto";
        };
    };
};