class UnderBarrelSlot;
class rtgClearUnderBarrel: UnderBarrelSlot
{
	class compatibleItems{};
};

class rtgM249BipodOnly: UnderBarrelSlot
{
	class compatibleItems
    {
        rhsusf_acc_saw_bipod = 1;
		rhsusf_acc_saw_lw_bipod = 1;
        hlc_bipod_utgshooters = 1;
    };
};

class CfgWeapons{
    #include "weapons\primary.hpp"
    #include "weapons\secondary.hpp"
    #include "weapons\equipment.hpp"
    #include "weapons\vest.hpp"
    #include "weapons\optics.hpp"
    #include "weapons\nightVision.hpp"
};