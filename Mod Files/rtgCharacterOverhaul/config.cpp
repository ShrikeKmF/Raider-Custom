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
	maxSoldierLoad = 1785;
};

class CfgMovesFatigue {
	staminaDuration = 27;
	staminaCooldown = 6;
	staminaRestoration = 3;
	aimPrecisionSpeedCoef = 5.2;
	terrainDrainSprint = 0.0;
	terrainDrainRun = 0.0;
	terrainSpeedCoef = 0.9;
};

class CfgImprecision
{
	class Primary
	{
		verticalRadius = 0.19; //0.25
		horizontalRadius = 0.1; //0.05
	};
	class Secondary
	{
		verticalRadius = 0.19; //0.25
		horizontalRadius = 0.1; //0.05
	};
};

class CfgAISkill
{
	aimingAccuracy[] = { 0, 0.5, 1, 0.9 };
	aimingShake[] = { 0, 0.6, 1, 0.9 };
	aimingSpeed[] = { 0, 0.1, 1, 0.75 };
	commanding[] = { 0, 0.6, 1, 0.9 };
	courage[] = { 0, 0.6, 1, 0.9 };
	general[] = { 0, 0.6, 1, 0.9 };
	reloadSpeed[] = { 0, 0.6, 1, 0.9 };
	spotDistance[] = { 0, 0.05, 1, 0.15 };
	spotTime[] = { 0, 0.3, 1, 0.9 };
}