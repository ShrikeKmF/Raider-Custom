class CfgPatches 
{

	class rtgCharacterOverhaul
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 1.000000;
		requiredAddons[] = {
				"A3_Characters_F"
		};
	};
};

class CfgInventoryGlobalVariable {
	maxSoldierLoad = 1800;
};

class CfgMovesFatigue {
	staminaDuration = 25;
	staminaCooldown = 5;
	staminaRestoration = 25;
	aimPrecisionSpeedCoef = 5;
	terrainDrainSprint = 0.0;
	terrainDrainRun = 0.0;
	terrainSpeedCoef = 1.0;
};

class CfgImprecision
{
	class Primary
	{
		verticalRadius = 0.18; //0.25
		horizontalRadius = 0.1; //0.05
	};
	class Secondary
	{
		verticalRadius = 0.18; //0.25
		horizontalRadius = 0.1; //0.05
	};
};

class CfgAISkill
{
	aimingAccuracy[] = { 0, 0.3, 1, 0.7 };
	aimingShake[] = { 0, 0.6, 1, 0.9 };
	aimingSpeed[] = { 0, 0.5, 1, 0.8 };
	commanding[] = { 0, 0.6, 1, 0.9 };
	courage[] = { 0, 0.6, 1, 0.9 };
	general[] = { 0, 0.6, 1, 0.9 };
	reloadSpeed[] = { 0, 0.6, 1, 0.9 };
	spotDistance[] = { 0, 0.05, 1, 0.15 };
	spotTime[] = { 0, 0.6, 1, 0.9 };
}

class CfgFunctions
{
	class antpbo
	{
		class functions
		{
            file = "rtgCharacterOverhaul\functions	";
			class init {
                postInit	= 1;
            };
		};
	};
};