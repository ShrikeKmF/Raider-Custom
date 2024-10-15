class B_CargoNet_01_ammo_F;
class rtg_BasicSupply: B_CargoNet_01_ammo_F
{
	displayName = "Basic Supply Crate";
	editorCategory = "Raider_Tactical";
	scope = 2;
	dlc = "raiderTactical";
	ace_refuel_fuelCargo = 80;

	class TransportItems
	{
		ADD_ITEM(rtg_pvs_15_black_gh, 8);
		ADD_ITEM(ToolKit, 2);
		ADD_ITEM(ACRE_PRC343, 6);
		ADD_ITEM(ACE_personalAidKit, 12);
		ADD_ITEM(ACE_Canteen, 14);
		ADD_ITEM(ACE_MRE_BeefStew, 14);
		ADD_ITEM(ACE_bloodIV, 8);
		ADD_ITEM(ACE_bloodIV_500, 8);
		ADD_ITEM(ACE_elasticBandage, 60);
		ADD_ITEM(ACE_packingBandage, 60);
		ADD_ITEM(ACE_bodyBag, 8);
		ADD_ITEM(ACE_quikclot, 60);
		ADD_ITEM(ACE_morphine, 15);
		ADD_ITEM(kat_PainkillerItem, 15);
		ADD_ITEM(kat_PervitinItem, 25);
		ADD_ITEM(ACE_tourniquet, 30);
		ADD_ITEM(kat_guedel, 25);
	};

	class TransportWeapons
	{
		ADD_WEAPON(rhs_weap_m4a1, 6);
	};

	class TransportMagazines
	{
		ADD_MAGAZINE(rtg_30rnd_556_45, 40);
		ADD_MAGAZINE(rtg_30rnd_300_blk, 35);
		ADD_MAGAZINE(rtg_20Rnd_68x51, 35);
		ADD_MAGAZINE(rtg_20Rnd_762x51, 35);
		ADD_MAGAZINE(rtg_8Rnd_762x51, 20);
		ADD_MAGAZINE(rtg_10rnd_10bw, 25);
		ADD_MAGAZINE(rtg_10Rnd_127x99, 15);
		ADD_MAGAZINE(rtg_p90, 18);
		ADD_MAGAZINE(rtg_9mm_35Rnd_mag, 30);
		ADD_MAGAZINE(rtg_12g_15Rnd, 18);
		ADD_MAGAZINE(rhs_mag_M433_HEDP, 40);
		ADD_MAGAZINE(ACE_HuntIR_M203, 12);
		ADD_MAGAZINE(1Rnd_SmokeRed_Grenade_shell, 15);
		ADD_MAGAZINE(1Rnd_Smoke_Grenade_shell, 40);
		ADD_MAGAZINE(rtg_200rnd_556_45_t, 25);
		ADD_MAGAZINE(rtg_200Rnd_762x51_t, 25);
		ADD_MAGAZINE(rtg_100Rnd_68x51, 25);
		ADD_MAGAZINE(rtg_200rnd_300_blk_t, 25);
		ADD_MAGAZINE(rtg_rpg_hedp_mag, 4);
		ADD_MAGAZINE(rtg_rpg_heat_mag, 4);
		ADD_MAGAZINE(rtg_rpg_smk_mag, 4);
		ADD_MAGAZINE(rtg_MRAWS_SMK_F, 3);
		ADD_MAGAZINE(rtg_MRAWS_HE_F, 3);
		ADD_MAGAZINE(rtg_MRAWS_HEAT_F, 3);
		ADD_MAGAZINE(Titan_AT, 2);
		ADD_MAGAZINE(HandGrenade, 24);
		ADD_MAGAZINE(SmokeShellGreen, 12);
		ADD_MAGAZINE(SmokeShell, 24);
		ADD_MAGAZINE(ACE_M84, 12);
		ADD_MAGAZINE(ACE_M14, 12);
		ADD_MAGAZINE(rhsusf_m112_mag, 8);
		ADD_MAGAZINE(Laserbatteries, 10);
	};
};

class C_IDAP_supplyCrate_F;
class rtg_medicalSupply: C_IDAP_supplyCrate_F
{
	displayName = "Medical Crate";
	editorCategory = "Raider_Tactical";
	scope = 2;
	dlc = "raiderTactical";
	class TransportItems
	{
		ADD_ITEM(ACE_personalAidKit, 12);
		ADD_ITEM(ACE_bodyBag, 12);
		ADD_ITEM(ACE_bloodIV, 15);
		ADD_ITEM(ACE_bloodIV_500, 15);
		ADD_ITEM(ACE_elasticBandage, 100);
		ADD_ITEM(ACE_packingBandage, 100);
		ADD_ITEM(ACE_quikclot, 100);
		ADD_ITEM(ACE_morphine, 25);
		ADD_ITEM(kat_PainkillerItem, 25);
		ADD_ITEM(kat_PervitinItem, 25);
		ADD_ITEM(ACE_tourniquet, 35);
		ADD_ITEM(kat_guedel, 25);
		ADD_ITEM(kat_naloxone, 25);
		ADD_ITEM(kat_TXA, 25);
		ADD_ITEM(kat_atropine, 25);
		ADD_ITEM(kat_fentanyl, 25);
		ADD_ITEM(kat_BVM, 25);
		ADD_ITEM(kat_larynx, 25);
		ADD_ITEM(kat_Pulseoximeter, 25);
		ADD_ITEM(ACE_epinephrine, 25);
		ADD_ITEM(ACE_plasmaIV_500, 25);
		ADD_ITEM(ACE_surgicalKit, 12);
		ADD_ITEM(kat_chestSeal, 25);
	};
};

class Box_NATO_AmmoVeh_F;
class rtg_wheelsBox: Box_NATO_AmmoVeh_F
{
	displayName = "Wheels Crate";
	editorCategory = "Raider_Tactical";
	scope = 2;
	dlc = "raiderTactical";
	ace_cargo_space = 16;
	class ace_cargo
	{
		class Cargo
		{
			class ACE_Wheel
			{
				type = "ACE_Wheel"; 
				amount = 16;
			};
		};
	};
};