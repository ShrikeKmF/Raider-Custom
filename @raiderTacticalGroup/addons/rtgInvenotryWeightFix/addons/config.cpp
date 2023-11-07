#define _ARMA_

class CfgPatches
{
	class rtgCharacterChanges
	{
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgInventoryGlobalVariable
{
	maxSoldierLoad = 1650;
};
class CfgImprecision
{
    class Primary
    {
        verticalRadius=0.4;
    };
    class Secondary
    {
        horizontalRadius=0.2;
    };
};
class cfgMods
{
	author = "Shrike";
};
