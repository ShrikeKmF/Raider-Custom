// L85a2

class SMA_L85RIS_BASE;
class SMA_L85RIS: SMA_L85RIS_BASE 
{
    RTG_RECOIL_SETUP(l85a2)
    RTG_WEAPON_HANDLING(2.4)
    displayName="L85A2";
    RTG_STANDARD_ZOOM
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_L85";
        handguard = "panel";
        grip = "vfg";
    };
}
class SMA_L85RISNR: SMA_L85RIS_BASE 
{
    RTG_RECOIL_SETUP(l85a2)
    RTG_WEAPON_HANDLING(2.4)
    displayName="L85A2";
    RTG_STANDARD_ZOOM
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_L85";
        handguard = "bare";
        grip = "vfg";
    };
}
class SMA_L85RISafg: SMA_L85RIS_BASE 
{
    RTG_RECOIL_SETUP(l85a2)
    RTG_WEAPON_HANDLING(2.4)
    displayName="L85A2";
    RTG_STANDARD_ZOOM
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_L85";
        handguard = "panel";
        grip = "afg";
    };
}
class SMA_L85RISafgNR: SMA_L85RIS_BASE 
{
    RTG_RECOIL_SETUP(l85a2)
    RTG_WEAPON_HANDLING(2.4)
    displayName="L85A2";
    RTG_STANDARD_ZOOM
    class XtdGearInfo
    {
        model = "rtg_ace_expanded_L85";
        handguard = "bare";
        grip = "afg";
    };
}