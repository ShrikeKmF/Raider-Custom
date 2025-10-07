class CfgWeapons{
    #include "weapons\primary.hpp"
    //#include "weapons\secondary.hpp"
    #include "weapons\equipment.hpp"
    #include "weapons\vest.hpp"
    #include "weapons\optics.hpp"
    #include "weapons\nightVision.hpp"

    /*
    class RTG_Base_Weapon : emptyPositions
    {
        scope               = 0; // 2 = can use in-game. 1 = can use in-game, hidden in arsenal
        displayName         = ""; // Name of the WEAPON. Declared in the main body. This string is shown in gear selection as the rifle's name.
        dexterity           = 3.1; // In-game weapon handling value, lower value = takes more time to traverse a weapon.
        magazineReloadTime  = 0; // Time delay when reloading the weapon (changing magazines).
        magazines[]         = {"this"}; // Array of magazine classes compatible with this weapon. This same Weapon class in cfgWeapons if not over-ridden.
        modes[]             = {"single", "burst", "auto"}; // 
        recoil              = "Empty"; // Selects recoil defined in cfgRecoils class.
        recoilProne         = "Empty"; // When prone, recoil can be set to slower values.
    };
    */
};