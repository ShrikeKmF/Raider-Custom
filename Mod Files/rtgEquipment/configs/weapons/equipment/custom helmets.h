class rhsusf_hgu56p_visor_black;
class rhsusf_hgu56p_visor_mask_black;
class H_HelmetB_Ti_arid_F;
class shrikeHat2 : H_HelmetB_Ti_arid_F
{
    RTG_WEAPON_BASE 
    displayName="Stealth Helmet - Shrike";
    mass = 2;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\shrikeHelmet2.paa"};
    RTG_HELMET_ARMOUR
};

class shrikeHat : rhsusf_hgu56p_visor_black
{
	RTG_WEAPON_BASE 
  displayName="Pilot Helmet - Shrike";
  mass = 2;
  hiddenSelectionsTextures[] = {"rtgEquipment\tex\shrikePilotHat.paa"};
  RTG_HELMET_ARMOUR
};

class cakeHat2 : rhsusf_hgu56p_visor_black
{
	RTG_WEAPON_BASE 
    displayName="Pilot Helmet - Cake";
    mass = 2;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\cakePilotHat.paa"};
    RTG_HELMET_ARMOUR
};

// Cake
class H_StrawHat;
class cakeStrawHat : H_StrawHat {
    RTG_WEAPON_BASE 
    displayName="Straw Hat - Cake";
    mass = 2;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\cakeHat.paa"};
    RTG_HELMET_ARMOUR
};

// Blade
class H_Construction_headset_black_F;
class bladeHat : H_Construction_headset_black_F {
    RTG_WEAPON_BASE 
    displayName="Hard Hat - Blade";
    mass = 2;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\bladeHat.paa"};
    RTG_HELMET_ARMOUR
};

// Patrick
class H_HelmetCrew_B;
class patHat : H_HelmetCrew_B {
    RTG_WEAPON_BASE 
    displayName="Crew Helmet - Phoebe";
    mass = 2;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\patHat.paa"};
    RTG_HELMET_ARMOUR
};

class rhsusf_cvc_alt_helmet;
class samHat : rhsusf_cvc_alt_helmet {
    RTG_WEAPON_BASE 
    displayName="CVC Helmet - Ari";
    mass = 2;
    hiddenSelectionsTextures[] = {"rtgEquipment\tex\samHat.paa"};
    RTG_HELMET_ARMOUR
};

class H_PilotHelmetHeli_B;
class samPilotHat: H_PilotHelmetHeli_B
{
  scope = 2;
  dlc = "raiderTactical";
  author = "Shrike";
  displayName = "Pilot Helmet - Ari";
  mass = 2;
  hiddenSelectionsTextures[] = {"rtgEquipment\tex\samPilot.paa"};
  RTG_HELMET_ARMOUR
};

// Beems
class beemsHat: rhsusf_hgu56p_visor_mask_black
{
  scope = 2;
  dlc = "raiderTactical";
  author = "Shrike";
  displayName = "Pilot Helmet - Beems";
  mass = 2;
  hiddenSelectionsTextures[] = {"rtgEquipment\tex\beemsHGU.paa"};
  RTG_HELMET_ARMOUR
};

// Tex
class rhsusf_opscore_ut_pelt_nsw_cam;
class texHat : rhsusf_opscore_ut_pelt_nsw_cam {
	RTG_WEAPON_BASE 
    displayName="Fast Helmet - Tex";
    mass = 2;
    hiddenSelectionsTextures[] =
	{
		"\rtgEquipment\tex\texHat.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
    RTG_HELMET_ARMOUR
};

// Soresp 
class rhsgref_helmet_pasgt_altis_lizard;
class sorespHat : rhsgref_helmet_pasgt_altis_lizard
{
	RTG_WEAPON_BASE 
    displayName="Pasgt - Soresp";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\sore_hat.paa"};
    RTG_HELMET_ARMOUR
};
class sorespHat2 : sorespHat
{
	RTG_WEAPON_BASE 
    displayName="Pasgt - Soresp (2)";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\sore_hat2.paa"};
    RTG_HELMET_ARMOUR
};

// Rorey
class badgerHat : rhsgref_helmet_pasgt_altis_lizard
{
	RTG_WEAPON_BASE 
    displayName="Pasgt - Rorey";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\badgerHat.paa"};
    RTG_HELMET_ARMOUR
}; 
class roreyHat : rhsusf_hgu56p_visor_mask_black
{
	RTG_WEAPON_BASE 
    displayName="HGU56p - Rorey";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\roreyHatPilot.paa"};
    RTG_HELMET_ARMOUR
}; 

// meep
class CADPAT_Helmet1;
class meepHat  : CADPAT_Helmet1
{
	RTG_WEAPON_BASE 
    displayName="ECH - Meep";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\meepHat.paa"};
    RTG_HELMET_ARMOUR
};

class Alpine_opscore;
class kebaHat_Alpine : Alpine_opscore {
	RTG_WEAPON_BASE 
    displayName="Ops Alpine - Keba";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\alpine_ops_KEBAergo.paa"};
    RTG_HELMET_ARMOUR
};
class kebaHat_Black : Alpine_opscore {
	RTG_WEAPON_BASE 
    displayName="Ops Black - Keba";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\Ops_black_KEBAergo.paa"};
    RTG_HELMET_ARMOUR
};

class blueHat : vsm_oga_helmet1  {
	RTG_WEAPON_BASE 
    displayName="Ops OGA - Blue";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\blueHat.paa"};
    RTG_HELMET_ARMOUR
};

// Damian
class DamianHat : rtg_ech_blk {
    RTG_WEAPON_BASE 
    displayName="ECH BLK - Damian";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\Damian_equip1_black_co.paa"};
    RTG_HELMET_ARMOUR
    RTG_ACEAX_EMPTY
};

// Kim
class KimHat : rtg_ech_blk {
    RTG_WEAPON_BASE 
    displayName="ECH - Kim";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\kim_ech.paa"};
    RTG_HELMET_ARMOUR
    RTG_ACEAX_EMPTY
};