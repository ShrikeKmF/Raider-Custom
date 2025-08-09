class asdg_OpticRail;
class asdg_OpticRail1913 : asdg_OpticRail {
    class compatibleItems
	{
        rtg_optic_MRCO = 1;
        rtg_optic_DMS = 1;
        rtg_night_sight = 1;
        rtg_ELCAN_3xSpectreDR = 1;
        rtg_ELCAN_3xSpectreDR_Tan = 1;
        rtg_ELCAN_3xSpectreDR_Green = 1;
        rtg_ELCAN_3xSpectreDR_RDS = 1;
        rtg_ELCAN_3xSpectreDR_Tan_RDS = 1;
        rtg_ELCAN_3xSpectreDR_Green_RDS = 1;
        rtg_shortdot = 1;
        rtg_acog1_5x = 1;
        optic_ico_01_f = 1;
        optic_ico_01_black_f = 1;
        optic_ico_01_camo_f = 1;
        optic_ico_01_sand_f = 1;
        rtg_shorterdot = 1;
    };
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot {
    class compatibleItems
	{
    };
};
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot {
    class compatibleItems
	{
    };
};
class asdg_UnderSlot;
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems;
};

class UnderBarrelSlot;
class rtgClearUnderBarrel: UnderBarrelSlot
{
	class compatibleItems{};
};

class rtgBipods: UnderBarrelSlot
{
	class compatibleItems
    {
        rhsusf_acc_saw_bipod = 1;
		rhsusf_acc_saw_lw_bipod = 1;
        hlc_bipod_utgshooters = 1;
        ACWP_harrisbipod = 1;
        bipod_01_F_blk = 1;
        bipod_02_F_blk = 1;
        bipod_03_F_blk = 1;
    };
};