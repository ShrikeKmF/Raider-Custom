class B_CargoNet_01_ammo_F;
class rtg_BasicSupply: B_CargoNet_01_ammo_F
{
	displayName = "Resupply Crate";
	editorCategory = "Raider_Tactical";
	scope = 2;
	ace_cargo_space = 12;
	mass = 100;
	dlc = "raiderTactical";
	// Clear Weapons
	class TransportWeapons {};

	// Clear Magazines
	class TransportMagazines {};

	// Clear Items
	class TransportItems {};

	// Clear Backpacks
	class TransportBackpacks {};
};

class Box_NATO_AmmoVeh_F;
class rtg_wheelsBox: Box_NATO_AmmoVeh_F
{
	displayName = "Wheels Crate";
	editorCategory = "Raider_Tactical";
	scope = 2;
	dlc = "raiderTactical";
	ace_cargo_space = 6;
	mass = 100;
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
	// Clear Weapons
	class TransportWeapons {};

	// Clear Magazines
	class TransportMagazines {};

	// Clear Items
	class TransportItems {};

	// Clear Backpacks
	class TransportBackpacks {};
};

class BOX_NATO_WpsLaunch_F;
class rtg_atSupply: BOX_NATO_WpsLaunch_F
{
	displayName = "Anti Tank Crate";
	editorCategory = "Raider_Tactical";
	scope = 2;
	dlc = "raiderTactical";
	ace_cargo_space = 12;
	mass = 100;
	class TransportMagazines
	{
		class _xx_rtg_rpg_hedp_mag
		{
			magazine = "rtg_rpg_hedp_mag";
			count = 14;
		};
		class _xx_rtg_rpg_heat_mag
		{
			magazine = "rtg_rpg_heat_mag";
			count = 14;
		};
		class _xx_rtg_rpg_smk_mag
		{
			magazine = "rtg_rpg_smk_mag";
			count = 14;
		};
		class _xx_rtg_MRAWS_SMK_F
		{
			magazine = "rtg_MRAWS_SMK_F";
			count = 12;
		};
		class _xx_rtg_MRAWS_HE_F
		{
			magazine = "rtg_MRAWS_HE_F";
			count = 12;
		};
		class _xx_rtg_MRAWS_HEAT_F
		{
			magazine = "rtg_MRAWS_HEAT_F";
			count = 12;
		};
		class _xx_Titan_AT
		{
			magazine = "Titan_AT";
			count = 9;
		};
	};

	// Clear Items
	class TransportItems {};

	// Clear Backpacks
	class TransportBackpacks {};
};