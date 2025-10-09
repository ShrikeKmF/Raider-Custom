class CfgVehicles
{
    class ViewPilot;
    class ViewCargo;
    class ViewOptics;
    class Components;
    class SensorTemplatePassiveRadar;
    class SensorTemplateAntiRadiation;
    class SensorTemplateActiveRadar;
    class SensorTemplateIR;
    class SensorTemplateVisual;
    class SensorTemplateMan;
    class SensorTemplateLaser;
    class SensorTemplateNV;
    class SensorTemplateDataLink;
    class IRSensorComponent;
    class LaserSensorComponent;
    class VisualSensorComponent;
    class Turrets;
    class HitPoints;
    class hitwindshield_1;
    class hitwindshield_2;
    class HitGlass1;
    class HitGlass2;
    class HitGlass3;
    class HitGlass4;
    class CargoTurret;
    class CargoTurret_01;
    class CargoTurret_02;
    class CargoTurret_03;
    class MainTurret;
    class ViewGunner;
    class AnimationSources;
    class DefaultVehicleSystemsDisplayManagerLeft;
    class DefaultVehicleSystemsDisplayManagerRight;
    class Eventhandlers;
    class ACE_SelfActions;
    class DefaultEventHandlers;
    class WeaponFireGun;
    class WeaponCloudsGun;
    class WeaponFireMGun;
    class WeaponCloudsMGun;
    class RCWSOptics;
    class Optics_Armored;
    class Hithull;
    class HitEngine;
    class HitFuel;
    class HitLTrack;
    class HitRTrack;
    class ReammoBox;
    class CTRG_PANEL_Base: ReammoBox{};

    // Character
    #include "\rtgCustomContent\Config\Character\CaManBase.hpp"
    #include "\rtgCustomContent\Config\Character\Car_F.hpp"

    // Equipment
    #include "\rtgCustomContent\Config\Equipment\Backpacks\Radio Backpacks.hpp"
    #include "\rtgCustomContent\Config\Equipment\Backpacks\CRTG Patrol Pack.hpp"
    #include "\rtgCustomContent\Config\Equipment\Backpacks\CRTG Backpanel.hpp"
    #include "\rtgCustomContent\Config\Equipment\Backpacks\Vehicle Grabbags.hpp"
    #include "\rtgCustomContent\Config\Equipment\Backpacks\Medical Backpack.hpp"

    // Vehicle
    #include "\rtgCustomContent\Config\Vehicles\magpie.hpp"
    #include "\rtgCustomContent\Config\Vehicles\hawk.hpp"
    #include "\rtgCustomContent\Config\Vehicles\sparrow.hpp"
    #include "\rtgCustomContent\Config\Vehicles\boats.hpp"
    #include "\rtgCustomContent\Config\Vehicles\crates.hpp"
    #include "\rtgCustomContent\Config\Vehicles\striker.hpp"
    #include "\rtgCustomContent\Config\Vehicles\booker.hpp"
    #include "\rtgCustomContent\Config\Vehicles\pickup.hpp"
    #include "\rtgCustomContent\Config\Vehicles\ampv.hpp"
    #include "\rtgCustomContent\Config\Vehicles\buggy.hpp"
    #include "\rtgCustomContent\Config\Vehicles\trucks.hpp"
}