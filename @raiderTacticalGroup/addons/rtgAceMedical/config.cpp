#define _ARMA_

class CfgPatches
{
	class RTGMedical
	{
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class cfgMods
{
	author = "Shrike";
};

#include "configs\CfgWeapons.hpp"
#include "configs\ACE_Medical_Treatment.hpp"
#include "configs\ACE_Medical_Treatment_Actions.hpp"