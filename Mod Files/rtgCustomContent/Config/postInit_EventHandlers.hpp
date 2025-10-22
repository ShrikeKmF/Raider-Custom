// Event Handler that execicutes scripts after the init has been called
// See arma 3 mission loading for when post init is called

// Runs scripts after init has completed
class Extended_PostInit_EventHandlers
{
    class RTG_Uncon_Icon
    {
        init = "[] execVM '\rtgCustomContent\Config\UI\fn_unconIcon.sqf';";
    };
};

// Runs when each vehicle is initialized
class Extended_InitPost_EventHandlers
{
    class AllVehicles
    {
        class CrewInImmobile
        {
            init = "(_this select 0) allowCrewInImmobile true;";
        };
    };
};
