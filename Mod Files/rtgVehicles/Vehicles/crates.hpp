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