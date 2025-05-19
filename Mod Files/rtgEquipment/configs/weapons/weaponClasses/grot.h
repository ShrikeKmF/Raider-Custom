// FB MSBS Grot-B
class arifle_MSBS65_base_F;
class arifle_MSBS65_Mark_base_F;
class arifle_MSBS65_GL_base_F;
class arifle_MSBS65_base_black_F;
class arifle_MSBS65_Mark_base_black_F;
class arifle_MSBS65_GL_base_black_F;
class arifle_MSBS65_base_sand_F;
class arifle_MSBS65_Mark_base_sand_F;
class arifle_MSBS65_GL_base_sand_F;
class arifle_MSBS65_F: arifle_MSBS65_base_F
{
    RTG_WEAPON_BASE
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(grot)
    RTG_WEAPON_HANDLING(2.22)
    class XtdGearInfo{model = "rtg_ace_expanded_msbs";camo = "GRN";attachment="N";barrel="S";};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556{};
        class CowsSlot: asdg_OpticRail1913{};
        class PointerSlot: asdg_FrontSideRail{};
    };
};
class arifle_MSBS65_Mark_F: arifle_MSBS65_Mark_base_F
{
    RTG_WEAPON_BASE
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(grot_mrk)
    RTG_WEAPON_HANDLING(2.42)
    class XtdGearInfo{model = "rtg_ace_expanded_msbs";camo = "GRN";attachment="N";barrel="L";};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556{};
        class CowsSlot: asdg_OpticRail1913{};
        class PointerSlot: asdg_FrontSideRail{};
    };
};
class arifle_MSBS65_GL_F: arifle_MSBS65_GL_base_F
{
    RTG_WEAPON_BASE
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(grot)
    RTG_WEAPON_HANDLING(2.22)
    class XtdGearInfo{model = "rtg_ace_expanded_msbs";camo = "GRN";attachment="GL";barrel="S";};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556{};
        class CowsSlot: asdg_OpticRail1913{};
        class PointerSlot: asdg_FrontSideRail{};
    };
};
class arifle_MSBS65_black_F: arifle_MSBS65_base_black_F
{
    RTG_WEAPON_BASE
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(grot)
    RTG_WEAPON_HANDLING(2.22)
    class XtdGearInfo{model = "rtg_ace_expanded_msbs";camo = "BLK";attachment="N";barrel="S";};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556{};
        class CowsSlot: asdg_OpticRail1913{};
        class PointerSlot: asdg_FrontSideRail{};
    };
};
class arifle_MSBS65_Mark_black_F: arifle_MSBS65_Mark_base_black_F
{
    RTG_WEAPON_BASE
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(grot_mrk)
    RTG_WEAPON_HANDLING(2.42)
    class XtdGearInfo{model = "rtg_ace_expanded_msbs";camo = "BLK";attachment="N";barrel="L";};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556{};
        class CowsSlot: asdg_OpticRail1913{};
        class PointerSlot: asdg_FrontSideRail{};
    };
};
class arifle_MSBS65_GL_black_F: arifle_MSBS65_GL_base_black_F
{
    RTG_WEAPON_BASE
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(grot)
    RTG_WEAPON_HANDLING(2.22)
    class XtdGearInfo{model = "rtg_ace_expanded_msbs";camo = "BLK";attachment="GL";barrel="S";};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556{};
        class CowsSlot: asdg_OpticRail1913{};
        class PointerSlot: asdg_FrontSideRail{};
    };
};
class arifle_MSBS65_sand_F: arifle_MSBS65_base_sand_F
{
    RTG_WEAPON_BASE
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(grot)
    RTG_WEAPON_HANDLING(2.22)
    class XtdGearInfo{model = "rtg_ace_expanded_msbs";camo = "CYT";attachment="N";barrel="S";};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556{};
        class CowsSlot: asdg_OpticRail1913{};
        class PointerSlot: asdg_FrontSideRail{};
    };
};
class arifle_MSBS65_Mark_sand_F: arifle_MSBS65_Mark_base_sand_F
{
    RTG_WEAPON_BASE
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(grot_mrk)
    RTG_WEAPON_HANDLING(2.42)
    class XtdGearInfo{model = "rtg_ace_expanded_msbs";camo = "CYT";attachment="N";barrel="L";};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556{};
        class CowsSlot: asdg_OpticRail1913{};
        class PointerSlot: asdg_FrontSideRail{};
    };
};
class arifle_MSBS65_GL_sand_F: arifle_MSBS65_GL_base_sand_F
{
    RTG_WEAPON_BASE
    magazineWell[] = {"CBA_556x45_STANAG"};
    magazines[] = {"rtg_30rnd_556_45"};
    RTG_RECOIL(grot)
    RTG_WEAPON_HANDLING(2.22)
    class XtdGearInfo{model = "rtg_ace_expanded_msbs";camo = "CYT";attachment="GL";barrel="S";};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556{};
        class CowsSlot: asdg_OpticRail1913{};
        class PointerSlot: asdg_FrontSideRail{};
    };
};





