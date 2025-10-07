class VehicleMagazine;
class rhs_mag_M829A2;

// RAVN
class RTG_8Rnd_M900_APFSDS: VehicleMagazine
{
    author="Shrike";
    displayName="M900 105mm APFSDS";
    displayNameShort="AP";
    ammo="rhs_ammo_M900";
    initSpeed=1575;
    count=12;
    maxLeadSpeed=25;
    tracersEvery=1;
    nameSound="cannon";
    muzzleImpulseFactor[]={0.5,4};
};
class RTG_4Rnd_m900a1_APFSDS: rhs_mag_M829A2
{
    count = 4;
    initSpeed = 1700;
    author="Shrike";
    displayName="M900A1 105mm APFSDS";
    displayNameShort="AP";
    descriptionShort = "APFSDS-T M900A1";
    muzzleImpulseFactor[] = {0.5,4};
    tracersEvery = 1;
};
class RTG_16Rnd_M456A2_HEAT: VehicleMagazine
{
    author="Shrike";
    scope=2;
    displayName="M456A2 105mm HEAT";
    displayNameShort="HEAT";
    ammo="rhs_ammo_M456A2";
    count=16;
    initSpeed=1000;
    maxLeadSpeed=25;
    tracersEvery=1;
    nameSound="cannon";
    muzzleImpulseFactor[]={1,6};
};
class RTG_24Rnd_M393A3_HE: VehicleMagazine
{
    author="Shrike";
    scope=2;
    displayName="M393A3 105mm HE";
    displayNameShort="HE";
    ammo="rhs_ammo_M393A3";
    count=24;
    initSpeed=750;
    maxLeadSpeed=25;
    tracersEvery=1;
    nameSound="cannon";
    muzzleImpulseFactor[]={1,6};
};

// M240 on Vics
class VehicleMagazine;
class rhs_mag_1100Rnd_762x51_M240: VehicleMagazine
{
    scope			= 2;
    ammo			= "rtg_762_nato";
    displayname		= "7.62x51mm";
    displaynameshort= "[RTG] 762x51";
    namesound		= "mgun";
    initspeed		= 930;
    maxleadspeed	= 100;
    count			= 1100;
    tracersevery	= 5;
};