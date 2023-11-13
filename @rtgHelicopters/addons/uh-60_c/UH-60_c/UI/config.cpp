////////////////////////////////////////////////////////////////////
//DeRap: uh-60_c\UI\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 08 18:52:17 2023 : 'file' last modified on Thu Jan 01 13:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class HMDs_Kimi_UI
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_UI_F","A3_Functions_F","A3_UIFonts_F","A3_Data_F"};
	};
};
class CfgVehicleClasses
{
	class RWG
	{
		displayName = "Raven Warfare Group";
	};
	class TF160
	{
		displayName = "160th SOAR";
	};
	class USA
	{
		displayName = "US Army";
	};
	class USN
	{
		displayName = "US Navy";
	};
	class USMC
	{
		displayName = "USMC";
	};
	class BRPMC
	{
		displayName = "Black River PMC";
	};
};
class CfgFactionClasses
{
	class RWG
	{
		displayName = "Raven Warfare Group";
		priority = 1;
		side = 2;
		icon = "\UH-60\data\cfgfactionclasses_raven.paa";
	};
	class TF160
	{
		displayName = "160th SOAR";
		priority = 1;
		side = 1;
		icon = "\UH-60\data\cfgfactionclasses_soar.paa";
	};
	class USA
	{
		displayName = "US Army";
		priority = 1;
		side = 1;
		icon = "\UH-60\data\cfgfactionclasses_USArmy.paa";
	};
	class USN
	{
		displayName = "US Navy";
		priority = 1;
		side = 1;
		icon = "\UH-60\data\cfgfactionclasses_USN.paa";
	};
	class USMC
	{
		displayName = "USMC";
		priority = 1;
		side = 1;
		icon = "\UH-60\data\cfgfactionclasses_USMC.paa";
	};
	class BRPMC
	{
		displayName = "Black River PMC";
		priority = 1;
		side = 0;
		icon = "\UH-60\data\cfgfactionclasses_blackriver.paa";
	};
};
class RscControlsGroup;
class RscText;
class RangeText: RscText{};
class RscPicture;
class RscOpticsText;
class RscIGProgress;
class RscOpticsValue;
class VScrollbar;
class HScrollbar;
class RscLadderPicture;
class RscControlsGroupNoScrollbars;
class RscIGUIValue;
class RscIGUIText;
class RscVehicleToggles;
class RscInGameUI
{
	class RscUnitInfo;
	class RscUnitInfo_Kimi: RscUnitInfo
	{
		class CA_Radar_Kimi: RscControlsGroupNoScrollbars
		{
			idc = 2301;
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_RADAR_X"",		(safezoneX + safezoneW / 2 - 2.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_RADAR_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "5.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "5.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class CA_RadarBackground_Kimi: RscPicture
				{
					idc = 1200;
					text = "\uh-60\data\HUD\radarbackground_ca.paa";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "5.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "5.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_RadarIcon_Kimi: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					idc = 250;
					x = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Heading_Kimi: RscText
				{
					idc = 148;
					style = 2;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					text = " 359";
					x = "1.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class CA_VehicleTogglesBackground_Kimi: RscText
		{
			idc = -1;
			x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
		};
		class CA_VehicleToggles_Kimi: RscVehicleToggles
		{
			idc = 112;
			x = "0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "9.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_TextFlaresMode_Kimi: RscIGUIText
		{
			idc = 152;
			style = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x = "0.012 + SafeZoneX";
			y = "0.012 + SafeZoneY";
			w = "0.161*SafezoneW";
		};
		class CA_TextFlares_Kimi: RscIGUIValue
		{
			idc = 151;
			style = 1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x = "0.012  + SafeZoneX";
			y = "0.012 + SafeZoneY";
			w = "0.161*SafezoneW";
		};
	};
	class Rsc_HMDs_Kimi_Helo_UI_Turret: RscUnitInfo_Kimi
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group","CA_VehicleToggles_Kimi"};
		class VScrollbar;
		class HScrollbar;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc = 151;
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "24.78 * 		(0.01875 * SafezoneH)";
					y = "30.88 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: RangeText
				{
					idc = 188;
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "120";
					x = "14.78 * 		(0.01875 * SafezoneH)";
					y = "30.88 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Alt: RangeText
				{
					idc = 189;
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "3825";
					x = "34.78 * 		(0.01875 * SafezoneH)";
					y = "30.88 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "12.58 * 		(0.01875 * SafezoneH)";
					y = "8 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "15.78 * 		(0.01875 * SafezoneH)";
					y = "8 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: RangeText
				{
					idc = 172;
					font = "EtelkaMonospacePro";
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					x = "12.20 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextTADS: RangeText
				{
					idc = 1010;
					text = "TADS";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = "12.30 * 		(0.01875 * SafezoneH)";
					y = "5 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: RangeText
				{
					idc = 190;
					text = "20:28:35";
					font = "EtelkaMonospacePro";
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					x = "12.1 * 		(0.01875 * SafezoneH)";
					y = "6.5 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc = 158;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\uh-60\data\HUD\Apache_LaserOn.paa";
					x = "20.45 * 		(0.01875 * SafezoneH)";
					y = "14.1 * 		(0.025 * SafezoneH)";
					w = "12.5 * 		(0.01875 * SafezoneH)";
					h = "12 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "023";
					x = "24.83 * 		(0.01875 * SafezoneH)";
					y = "6 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class Rsc_HMDs_Kimi_Helo_UI_Turret_MX15: RscUnitInfo_Kimi
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group","CA_VehicleToggles_Kimi"};
		class VScrollbar;
		class HScrollbar;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Heading: RscText
				{
					idc = 148;
					style = 2;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					text = " 359";
					x = "1.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DATE: RangeText
				{
					idc = 112;
					text = "0000";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.125;
					y = 0.1;
					w = 0.225;
					h = 0.2;
				};
				class TIME: RangeText
				{
					idc = 190;
					text = "0505";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.125;
					y = 0.15;
					w = 0.225;
					h = 0.25;
				};
				class UTC: RangeText
				{
					idc = 1010;
					text = "UTC";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.1;
					y = 0.2;
					w = 0.2;
					h = 0.3;
				};
				class ONE_DOT_ZERO: RangeText
				{
					idc = 1010;
					text = "+1.0";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.15;
					y = 0.2;
					w = 0.25;
					h = 0.3;
				};
				class AUTO_1: RangeText
				{
					idc = 1010;
					text = "AUTO";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.2;
					y = 0.1;
					w = 0.3;
					h = 0.2;
				};
				class VIC: RangeText
				{
					idc = 1010;
					text = "VIC";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.3;
					y = 0.1;
					w = 0.4;
					h = 0.2;
				};
				class SCENE: RangeText
				{
					idc = 1010;
					text = "SCENE";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.3;
					y = 0.15;
					w = 0.4;
					h = 0.25;
				};
				class SPA: RangeText
				{
					idc = 1010;
					text = "SPA";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.4;
					y = 0.1;
					w = 0.5;
					h = 0.2;
				};
				class VISION_MODE: RangeText
				{
					idc = 152;
					text = "4040";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.45;
					y = 0.1;
					w = 0.55;
					h = 0.2;
				};
				class FLIR_MODE: RangeText
				{
					idc = 153;
					text = "4545";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.45;
					y = 0.15;
					w = 0.55;
					h = 0.25;
				};
				class NUMBER_1: RangeText
				{
					idc = 1010;
					text = "number?";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.5;
					y = 0.1;
					w = 0.6;
					h = 0.2;
				};
				class DFLT: RangeText
				{
					idc = 1010;
					text = "DFLT";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.6;
					y = 0.15;
					w = 0.7;
					h = 0.25;
				};
				class AUTO_2: RangeText
				{
					idc = 1010;
					text = "AUTO";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.7;
					y = 0.1;
					w = 0.8;
					h = 0.2;
				};
				class AUTO_3: RangeText
				{
					idc = 1010;
					text = "AUTO";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.7;
					y = 0.15;
					w = 0.8;
					h = 0.25;
				};
				class INFINITE: RangeText
				{
					idc = 1010;
					text = "OO";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.8;
					y = 0.1;
					w = 0.9;
					h = 0.2;
				};
				class ACFT: RangeText
				{
					idc = 1010;
					text = "ACFT";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.1;
					y = 0.7;
					w = 0.2;
					h = 0.8;
				};
				class DATUM_1: RangeText
				{
					idc = 1010;
					text = "35S";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.1;
					y = 0.75;
					w = 0.2;
					h = 0.85;
				};
				class OWN_GRID: RangeText
				{
					idc = 171;
					text = "8585";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.1;
					y = 0.8;
					w = 0.2;
					h = 0.9;
				};
				class METERS_1: RangeText
				{
					idc = 1010;
					text = "Meters";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.15;
					y = 0.75;
					w = 0.25;
					h = 0.85;
				};
				class ALT_AGL_1: RangeText
				{
					idc = 168;
					text = "9595";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.15;
					y = 0.8;
					w = 0.25;
					h = 0.9;
				};
				class GPS_HEADING: RangeText
				{
					idc = 155;
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.25;
					y = 0.75;
					w = 0.35;
					h = 0.85;
				};
				class ALT_AGL_2: RangeText
				{
					idc = 168;
					text = "9595";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.25;
					y = 0.8;
					w = 0.35;
					h = 0.9;
				};
				class NUMBER_2: RangeText
				{
					idc = 1010;
					text = "-number?";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.45;
					y = 0.8;
					w = 0.55;
					h = 0.9;
				};
				class TGT_HEADING: RangeText
				{
					idc = 1010;
					text = "heading?";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.65;
					y = 0.75;
					w = 0.75;
					h = 0.85;
				};
				class TGT_DISTANCE: RangeText
				{
					idc = 183;
					text = "0000";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.65;
					y = 0.8;
					w = 0.75;
					h = 0.85;
				};
				class TGT_1: RangeText
				{
					idc = 1010;
					text = "TGT";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.75;
					y = 0.7;
					w = 0.85;
					h = 0.8;
				};
				class LOS: RangeText
				{
					idc = 1010;
					text = "LOS";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.8;
					y = 0.8;
					w = 0.9;
					h = 0.8;
				};
				class DATUM_2: RangeText
				{
					idc = 1010;
					text = "35S";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.75;
					y = 0.75;
					w = 0.85;
					h = 0.85;
				};
				class TGT_GRID: RangeText
				{
					idc = 172;
					text = "0000";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.75;
					y = 0.8;
					w = 0.85;
					h = 0.9;
				};
				class METERS_2: RangeText
				{
					idc = 1010;
					text = "Meters";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.8;
					y = 0.75;
					w = 0.9;
					h = 0.85;
				};
				class TGT_ELEVATION: RangeText
				{
					idc = 175;
					text = "Meters";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = 0.8;
					y = 0.8;
					w = 0.9;
					h = 0.9;
				};
			};
		};
	};
	class Rsc_HMDs_Kimi_Helo_UI_01: RscUnitInfo_Kimi
	{
		controls[] = {"WeaponInfoControlsGroupRight","CA_TextFlaresMode_Kimi","CA_TextFlares_Kimi","CA_VehicleToggles_Kimi","CA_Radar_Kimi"};
	};
	class Rsc_HMDs_Kimi_Helo_UI_02: RscUnitInfo_Kimi
	{
		controls[] = {"CA_TextFlaresMode_Kimi","CA_TextFlares_Kimi","CA_VehicleToggles_Kimi","CA_Radar_Kimi"};
	};
};
class CfgInGameUI
{
	imageCornerElement = "\A3\ui_f\data\igui\cfg\imageCornerElement_ca.paa";
	colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
	colorBackgroundCommand[] = {1,1,1,1};
	colorBackgroundHelp[] = {1,1,1,1};
	colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
	class Radar
	{
		left = "(profilenamespace getvariable [""IGUI_GRID_RADAR_X"",		(safezoneX + safezoneW / 2 - 2.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
		top = "(profilenamespace getvariable [""IGUI_GRID_RADAR_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		width = "(5.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
		height = "(5.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		radarAirBackgroundTexture = "\uh-60\data\HUD\radar_rose.paa";
		radarCompassOnlyBackgroundTexture = "\uh-60\data\HUD\radar_rose.paa";
		radarTankBackgroundTexture = "A3\Ui_f\data\igui\cfg\radar\radar_ca.paa";
		radarIncommingMissile = "\A3\ui_f\data\igui\cfg\radar\missle_ca.paa";
		radarAirDangerSector = "\A3\ui_f\data\igui\cfg\radar\danger_ca.paa";
		radarLockDangerColor[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		radarIncommingDangerColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		radarVehicleTarget = "\A3\ui_f\data\igui\cfg\radar\target_ca.paa";
		radarTargetingEnemy = "\A3\ui_f\data\igui\cfg\radar\targeting_ca.paa";
		radarWaypoint = "\A3\Ui_f\data\IGUI\Cfg\Radar\assault_ca.paa";
		radarWaypointColor[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		radarCustomWaypoint = "\A3\Ui_f\data\IGUI\Cfg\Radar\assault_ca.paa";
		radarCustomWaypointColor[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		radarAssault = "\A3\Ui_f\data\IGUI\Cfg\Radar\assault_ca.paa";
		radarAssaultColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		radarOut = "\A3\Ui_f\data\IGUI\Cfg\Radar\waypointOut_ca.paa";
		radarFOV = "\A3\ui_f\data\igui\cfg\radar\viewdir_ca.paa";
		radarFOVPlayer[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		radarFOVCrew[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",1};
		shadow = 0;
	};
	class Cursor
	{
		font = "PuristaMedium";
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		activeWidth = 0.0392157;
		activeHeight = 0.0522876;
		activeMinimum = 1.1;
		activeMaximum = 1.1;
		select = "\A3\ui_f\data\igui\cfg\cursors\select_ca.paa";
		leader = "\A3\ui_f\data\igui\cfg\cursors\leader_ca.paa";
		unitBleeding = "\A3\ui_f\data\igui\cfg\cursors\unitBleeding_ca.paa";
		unitInjured = "\A3\ui_f\data\igui\cfg\cursors\unitInjured_ca.paa";
		unitHealer = "\A3\ui_f\data\igui\cfg\cursors\unitHealer_ca.paa";
		unitUnconscious = "\A3\ui_f\data\igui\cfg\cursors\unitUnconscious_ca.paa";
		iconBoardIn = "\A3\ui_f\data\igui\cfg\cursors\iconBoardIn_ca.paa";
		iconBoardOut = "\A3\ui_f\data\igui\cfg\cursors\iconBoardOut_ca.paa";
		iconInFormation = "\A3\ui_f\data\igui\cfg\cursors\iconInFormation_ca.paa";
		iconJoin = "\A3\ui_f\data\igui\cfg\cursors\iconJoin_ca.paa";
		iconMove = "\A3\ui_f\data\igui\cfg\cursors\iconMove_ca.paa";
		iconHealAt = "\A3\ui_f\data\igui\cfg\cursors\iconHealAt_ca.paa";
		iconRearmAt = "\A3\ui_f\data\igui\cfg\cursors\iconRearmAt_ca.paa";
		iconRefuelAt = "\A3\ui_f\data\igui\cfg\cursors\iconRefuelAt_ca.paa";
		iconRepairAt = "\A3\ui_f\data\igui\cfg\cursors\iconRepairAt_ca.paa";
		iconCursorSupport = "\A3\ui_f\data\igui\cfg\cursors\iconCursorSupport_ca.paa";
		iconSupport = "\A3\ui_f\data\igui\cfg\cursors\iconSupport_ca.paa";
		mission = "\A3\ui_f\data\igui\cfg\cursors\mission_ca.paa";
		customMark = "\uh-60\data\HUD\customMark_ca.paa";
		board = "\A3\ui_f\data\igui\cfg\cursors\board_ca.paa";
		assault = "\A3\ui_f\data\igui\cfg\cursors\assault_ca.paa";
		outArrow = "\A3\ui_f\data\igui\cfg\cursors\outArrow_ca.paa";
		move = "\A3\ui_f\data\igui\cfg\cursors\move_ca.paa";
		selectOver = "\A3\ui_f\data\igui\cfg\cursors\selectOver_ca.paa";
		watch = "\A3\ui_f\data\igui\cfg\cursors\watch_ca.paa";
		attack = "\A3\ui_f\data\igui\cfg\cursors\attack_ca.paa";
		tactical = "\A3\ui_f\data\igui\cfg\cursors\tactical_ca.paa";
		getIn = "\A3\ui_f\data\igui\cfg\cursors\getIn_ca.paa";
		iconRepairVehicle = "\A3\ui_f\data\igui\cfg\cursors\iconRepairVehicle_ca.paa";
		me = "\A3\ui_f\data\igui\cfg\cursors\me_ca.paa";
		select_target = "\uh-60\data\HUD\select_target_ca.paa";
		lock_target = "\uh-60\data\HUD\lock_target_ca.paa";
		gunner_lock = "\uh-60\data\HUD\gunner_lock_ca.paa";
		known_target = "\uh-60\data\HUD\known_target_ca.paa";
		explosive = "\A3\ui_f\data\igui\cfg\cursors\explosive_ca.paa";
		aim = "\A3\ui_f\data\igui\cfg\cursors\aim_ca.paa";
		weapon = "\A3\ui_f\data\igui\cfg\cursors\weapon_ca.paa";
		iconComplex = "\A3\ui_f\data\igui\cfg\cursors\iconComplex_ca.paa";
		freelook = "\A3\ui_f\data\igui\cfg\cursors\freelook_ca.paa";
		selectColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		leaderColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconInFormationColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconJoinColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconMoveColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconHealAtColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconRearmAtColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconRefuelAtColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconRepairAtColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		iconSupportColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		missionColor1[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		missionColor2[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		customMarkColor[] = {1,1,1,1};
		boardColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		assaultColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",0.5};
		meColor[] = {0,0,0,0.2};
		dimmMe = 0.2;
		dimmMeStartTime = 5;
		dimmMeEndTime = 10;
		dimmCmdStartTime = 5;
		dimmCmdEndTime = 10;
		explosiveColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",0.75};
		enemyActiveColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		freeLookActionColor[] = {0.9,0.9,0.9,0.4};
		freeLookActionColorSelected[] = {0.24,0.87,0,0.8};
		freeLookActionColorAvailable[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
		colorLocked[] = {1,0,0,1};
		dimm = 0.15;
		shadow = 2;
		infoTextShadow = 2;
		blinkingPeriod = 2;
		class Sign
		{
			height = 2.7;
			widthSector = 2.6;
			widthGroup = 2.5;
			widthUnit = 2.4;
		};
	};
};
class cfgMods
{
	author = "EricJ";
	timepacked = "1699000307";
};
