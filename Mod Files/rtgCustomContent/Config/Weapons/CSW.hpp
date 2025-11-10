// Gau-21 HMG rof config

class HMG_127;
class HMG_01: HMG_127 {
    class close;
    class far;
    class medium;
    class short;
    class manual;
};

class HMG_static:HMG_01{
    displayName = "Gau-21 HMG";
    reloadTime = ROF(1000);
    class manual:manual{
        reloadTime= ROF(1000); // 1000 RPM
    };
    magazines[] = {"RTG_100Rnd_127x99_SLAP_CSW", "500Rnd_127x99_mag","500Rnd_127x99_mag_Tracer_Red","500Rnd_127x99_mag_Tracer_Green","500Rnd_127x99_mag_Tracer_Yellow","200Rnd_127x99_mag","200Rnd_127x99_mag_Tracer_Red","200Rnd_127x99_mag_Tracer_Green","200Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Green","100Rnd_127x99_mag_Tracer_Yellow"};
};

class ace_javelin_Titan_Static;
class ace_csw_Titan_AT_Static: ace_javelin_Titan_Static
{
    displayName = "Tow-3 ATGM";
    ace_javelin_enabled = 0;
    magazineReloadTime = 0.5;
    magazines[] += {"RTG_TOW3A_CSW","RTG_TOW3BB_CSW"};
};

class ace_csw_m3CarryTripod: Launcher_Base_F
{
    displayName = "[RTG] CSW Trpiod (High)";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass = 5;
    };
};

class ace_csw_m3CarryTripodLow: ace_csw_m3CarryTripod
{
    displayName = "[RTG] CSW Trpiod (Low)";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass = 5;
    };
};

class ace_csw_staticHMGCarry: Launcher_Base_F
{
    displayName = "[RTG] CSW Gau-21 HMG";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass = 5;
    };
};

class ace_csw_staticATCarry: Launcher_Base_F
{
    displayName = "[RTG] CSW Tow-3 ATGM";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass = 5;
    };
};

class JCA_launch_Mk153_base_F: Launcher_Base_F
{
    ace_reloadlaunchers_enabled = 1;
};