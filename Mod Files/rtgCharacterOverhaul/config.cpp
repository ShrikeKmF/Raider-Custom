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

class ViewPilot;
class ViewCargo;
class ViewOptics;
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ViewPilot: ViewPilot
		{
			initFov = 0.75; 
			minFov = 0.50;
			maxFov = 0.75;
		};
	};
	class Car;
	class Car_F: Car
	{
		class ViewPilot: ViewPilot
		{
		initFov = 0.75; 
		minFov = 0.50;
		maxFov = 0.75;
		};
		class ViewCargo: ViewCargo
		{
		initFov = 0.75;
		minFov = 0.50;
		maxFov = 0.75;
		};
		class ViewOptics: ViewOptics
		{
		initFov = 0.75;
		minFov = 0.50;
		maxFov = 0.75;
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
	aimPrecisionSpeedCoef = 5;
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

class RscControlsGroupNoScrollbars;
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay {
    class controls {
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };
        class GroupMultiplayer: GroupSingleplayer {
			h = "(6 * 	1.5) * 	(pixelH * pixelGrid * 2)";
            class Controls: Controls {
                class ServerBrowser;
                class JoinMainServer: ServerBrowser {
                    idc = -1;
                    text = "RTG Main Server";
                    tooltip = "Connect to RTG Main Server";
                    y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "connectToServer ['144.6.36.191', 2302, '']";
                };
            };
        };
    };
};