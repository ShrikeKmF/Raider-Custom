class UK3CB_C_SUV;
class raider_undercover_vehicle : UK3CB_C_SUV
{
	displayName = "SUV [1/5]";
	editorSubcategory = "RTGCars";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	fuelConsumptionRate = 0.03;
	fuelCapacity = 55;
	ace_cargo_space = 28;
	ace_vehicles_engineStartDelay = 3;
	acre_hasInfantryPhone = 0;
	canFloat = 0;

	simulation = "carx";
	maxSpeed = 115;
	brakeIdleSpeed = 0.87;
	ace_refuel_fuelCargo = 80;
	armor = 25;
	armorStructural = 2;
	armorFuel = 1.4;
	armorGlass = 4;
	armorLights = 0.4;
	armorWheels = 0.05;
	armorHull = 1;
	armorEngine = 2;
	
	maximumLoad = 20000;
	RTG_Vehicle_Gear;
	RTG_Vehicle_Radios;
}