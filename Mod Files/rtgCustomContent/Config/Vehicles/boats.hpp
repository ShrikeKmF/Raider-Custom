class Marine_B_USMC_Boat_Transport_02_F;
class RTG_MAKO_B: Marine_B_USMC_Boat_Transport_02_F
{
	displayName = "Mako [1/8]";
	editorSubcategory = "RTG_LIGHT_ASSETS";
	author = "Shrike";
	scope = 2;
	side = WEST;
	faction = "Raider_Tactical_F";
	fuelConsumptionRate = 0.03;
	fuelCapacity = 84;
	armor = 300;
	maxSpeed = 140;
	maximumLoad = 20000;
	ace_cargo_space = 16;
	ace_vehicles_engineStartDelay = 3;
	acre_hasInfantryPhone = 0;
	ace_refuel_fuelCargo = 80;
	canPush = 1;
	RTG_Vehicle_Gear_Rotary
};

class RTG_MAKO_G : RTG_MAKO_B
{
	side = RESISTANCE;
	faction = "Raider_Tactical_G_F";
};