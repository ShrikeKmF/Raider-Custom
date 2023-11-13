////////////////////////////////////////////////////////////////////
//DeRap: uh-60_c\TF160\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 08 18:52:16 2023 : 'file' last modified on Thu Jan 01 13:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Ej_MH80
	{
		units[] = {"B_LSV_01_Medic_F","B_LSV_01_Repair_F","160th_SOAR_Pilot","160th_SOAR_Crew","ej_MH80","ej_MH67"};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Characters_F","A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};
class Turrets;
class MainTurret;
class CopilotTurret;
class CfgWeapons
{
	class InventoryItem_Base_F;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	class ItemCore;
	class Uniform_Base;
	class U_Multicam_ej: Uniform_Base
	{
		dlc = "u100";
		author = "EricJ";
		scope = 2;
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		displayName = "Multicam Flight Suit";
		hiddenSelections[] = {"camo","Insignia"};
		hiddenSelectionsTextures[] = {"\uh-60\data\uniforms\mcamfs_co.paa"};
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "160th_SOAR_Pilot";
			containerClass = "Supply60";
			mass = 60;
		};
	};
};
class CfgVehicles
{
	class B_Helipilot_F;
	class 160th_SOAR_Pilot: B_Helipilot_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";
		author = "EricJ";
		_generalMacro = "160th_SOAR_Pilot";
		scope = 2;
		side = 1;
		faction = "TF160";
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName = "TF 160 SOAR PIlot";
		linkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ej_PVS15"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ej_PVS15"};
		weapons[] = {"ej_hk41610_ERCO_IR","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"ej_hk41610_ERCO_IR","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 160000;
		camouflage = 2;
		modelSides[] = {3,1};
		uniformClass = "U_160thFlightSuit_ej";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\uh-60\Data\Uniforms\Mcamfs_co.paa"};
		role = "Crewman";
	};
	class 160th_SOAR_Crew: B_Helipilot_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";
		author = "EricJ";
		_generalMacro = "160th_SOAR_Crew";
		scope = 2;
		side = 1;
		faction = "TF160";
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		displayName = "TF 160 SOAR Crew";
		linkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ej_PVS15"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ej_PVS15"};
		weapons[] = {"ej_hk41610_ERCO_IR","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"ej_hk41610_ERCO_IR","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","41630m855a1_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 160000;
		camouflage = 2;
		modelSides[] = {3,1};
		uniformClass = "U_160thFlightSuit_ej";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\uh-60\Data\Uniforms\Mcamfs_co.paa"};
		role = "Crewman";
	};
	class B_Kitbag_mcamo;
	class ej_skram_SOAR: B_Kitbag_mcamo
	{
		dlc = "uh60";
		scope = 2;
		displayname = "SKRAM Bag (SOAR)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\uh-60\data\uniforms\backpack_fast_mcamej_co.paa"};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_41630m855a1_mag
			{
				count = 6;
				magazine = "41630m855a1_mag";
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 2;
			};
		};
	};
	class B_Heli_Transport_03_F;
	class ej_MH67: B_Heli_Transport_03_F
	{
		displayName = "MH-67 Huron [TF 160]";
		author = "EricJ";
		vehicleClass = "Air";
		side = 1;
		scope = 2;
		forceInGarage = 1;
		faction = "TF160";
		class textureSources
		{
			class SOAR
			{
				displayName = "SOAR";
				author = "EricJ";
				textures[] = {"UH-60\data\Heli_Transport_03_SOAR_CO.paa","UH-60\data\Heli_Transport2_03_SOAR_CO.paa"};
				factions[] = {"TF160"};
			};
		};
		weapons[] = {"EricJ_CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		textureList[] = {"SOAR",1};
		class MFD
		{
			class AirplaneHUD
			{
				class Bones{};
				class Draw{};
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {0,0,0};
				helmetRight[] = {0,0,0};
				helmetDown[] = {0,0,0};
			};
			class Kimi_HUD_1
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				enableParallax = 0;
				class Bones
				{
					class GunnerAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,"0.9 - 0.04 + 0.012"};
						pos10[] = {"0.5 + 0.0111","0.9 - 0.04 + 0.012 + 0.0133"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.5};
						pos10[] = {0.65,0.65};
					};
					class Velocity_slip
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.845};
						pos10[] = {0.53,0.845};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93,0.2};
						maxPos[] = {0.93,0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965,0.2};
						maxPos[] = {0.965,0.8};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5,0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.25,0.25};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.75,0.75};
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.78,0.78};
						angle = 0;
					};
					class LevelP5: Level0
					{
						angle = 5;
					};
					class LevelM5: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
				};
				class Draw
				{
					color[] = {0.18,1,0.18};
					alpha = 1;
					condition = "on";
					class Horizont
					{
						clipTL[] = {0.15,0.15};
						clipBR[] = {0.85,0.85};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] = {{"Level0",{-0.42,0},1},{"Level0",{-0.38,0},1},{},{"Level0",{-0.37,0},1},{"Level0",{-0.33,0},1},{},{"Level0",{-0.32,0},1},{"Level0",{-0.28,0},1},{},{"Level0",{-0.27,0},1},{"Level0",{-0.23,0},1},{},{"Level0",{-0.22,0},1},{"Level0",{-0.18,0},1},{},{"Level0",{-0.17,0},1},{"Level0",{-0.13,0},1},{},{"Level0",{-0.12,0},1},{"Level0",{-0.08,0},1},{},{"Level0",{0.42,0},1},{"Level0",{0.38,0},1},{},{"Level0",{0.37,0},1},{"Level0",{0.33,0},1},{},{"Level0",{0.32,0},1},{"Level0",{0.28,0},1},{},{"Level0",{0.27,0},1},{"Level0",{0.23,0},1},{},{"Level0",{0.22,0},1},{"Level0",{0.18,0},1},{},{"Level0",{0.17,0},1},{"Level0",{0.13,0},1},{},{"Level0",{0.12,0},1},{"Level0",{0.08,0},1}};
							};
						};
					};
					class HorizonBankRot
					{
						type = "line";
						width = 3;
						points[] = {{"HorizonBankRot",{0,0.25},1},{"HorizonBankRot",{-0.01,0.23},1},{"HorizonBankRot",{0.01,0.23},1},{"HorizonBankRot",{0,0.25},1}};
					};
					class Static_HAD_BOX
					{
						clipTL[] = {0,1};
						clipBR[] = {1,0};
						type = "line";
						width = 5;
						points[] = {{{"0.5-0.1","0.9-0.04"},1},{{"0.5-0.1","0.9+0.04"},1},{{"0.5+0.1","0.9+0.04"},1},{{"0.5+0.1","0.9-0.04"},1},{{"0.5-0.1","0.9-0.04"},1},{},{{"0.5-0.1","0.9-0.04+0.012"},1},{{"0.5-0.092","0.9-0.04+0.012"},1},{},{{"0.5+0.1","0.9-0.04+0.012"},1},{{"0.5+0.092","0.9-0.04+0.012"},1},{},{{0.5,"0.9-0.04"},1},{{0.5,"0.9-0.032"},1},{},{{0.5,"0.9+0.04"},1},{{0.5,"0.9+0.032"},1},{}};
					};
					class Gunner_HAD
					{
						type = "line";
						width = 6;
						points[] = {{"GunnerAim",{-0.015,-0.008},1},{"GunnerAim",{-0.015,0.008},1},{"GunnerAim",{0.015,0.008},1},{"GunnerAim",{0.015,-0.008},1},{"GunnerAim",{-0.015,-0.008},1}};
					};
					class Slip_ball_group
					{
						class Slip_bars
						{
							type = "line";
							width = 4;
							points[] = {{{"0.5-0.018","0.9-0.04"},1},{{"0.5-0.018","0.9-0.075"},1},{},{{"0.5+0.018","0.9-0.04"},1},{{"0.5+0.018","0.9-0.075"},1}};
						};
						class Slip_ball
						{
							type = "line";
							width = 6;
							points[] = {{"Velocity_slip",1,{"0 * 0.75","-0.02 * 0.75"},1},{"Velocity_slip",1,{"0.0099999998 * 0.75","-0.01732 * 0.75"},1},{"Velocity_slip",1,{"0.01732 * 0.75","-0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"0.02 * 0.75","0 * 0.75"},1},{"Velocity_slip",1,{"0.01732 * 0.75","0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"0.0099999998 * 0.75","0.01732 * 0.75"},1},{"Velocity_slip",1,{"0 * 0.75","0.02 * 0.75"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.75","0.01732 * 0.75"},1},{"Velocity_slip",1,{"-0.01732 * 0.75","0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"-0.02 * 0.75","0 * 0.75"},1},{"Velocity_slip",1,{"-0.01732 * 0.75","-0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.75","-0.01732 * 0.75"},1},{"Velocity_slip",1,{"0 * 0.75","-0.02 * 0.75"},1},{},{"Velocity_slip",1,{"0 * 0.6","-0.02 * 0.6"},1},{"Velocity_slip",1,{"0.0099999998 * 0.6","-0.01732 * 0.6"},1},{"Velocity_slip",1,{"0.01732 * 0.6","-0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"0.02 * 0.6","0 * 0.6"},1},{"Velocity_slip",1,{"0.01732 * 0.6","0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"0.0099999998 * 0.6","0.01732 * 0.6"},1},{"Velocity_slip",1,{"0 * 0.6","0.02 * 0.6"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.6","0.01732 * 0.6"},1},{"Velocity_slip",1,{"-0.01732 * 0.6","0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"-0.02 * 0.6","0 * 0.6"},1},{"Velocity_slip",1,{"-0.01732 * 0.6","-0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.6","-0.01732 * 0.6"},1},{"Velocity_slip",1,{"0 * 0.6","-0.02 * 0.6"},1},{},{"Velocity_slip",1,{"0 * 0.5","-0.02 * 0.5"},1},{"Velocity_slip",1,{"0.0099999998 * 0.5","-0.01732 * 0.5"},1},{"Velocity_slip",1,{"0.01732 * 0.5","-0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"0.02 * 0.5","0 * 0.5"},1},{"Velocity_slip",1,{"0.01732 * 0.5","0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"0.0099999998 * 0.5","0.01732 * 0.5"},1},{"Velocity_slip",1,{"0 * 0.5","0.02 * 0.5"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.5","0.01732 * 0.5"},1},{"Velocity_slip",1,{"-0.01732 * 0.5","0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"-0.02 * 0.5","0 * 0.5"},1},{"Velocity_slip",1,{"-0.01732 * 0.5","-0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.5","-0.01732 * 0.5"},1},{"Velocity_slip",1,{"0 * 0.5","-0.02 * 0.5"},1},{},{"Velocity_slip",1,{"0 * 0.4","-0.02 * 0.4"},1},{"Velocity_slip",1,{"0.0099999998 * 0.4","-0.01732 * 0.4"},1},{"Velocity_slip",1,{"0.01732 * 0.4","-0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"0.02 * 0.4","0 * 0.4"},1},{"Velocity_slip",1,{"0.01732 * 0.4","0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"0.0099999998 * 0.4","0.01732 * 0.4"},1},{"Velocity_slip",1,{"0 * 0.4","0.02 * 0.4"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.4","0.01732 * 0.4"},1},{"Velocity_slip",1,{"-0.01732 * 0.4","0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"-0.02 * 0.4","0 * 0.4"},1},{"Velocity_slip",1,{"-0.01732 * 0.4","-0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.4","-0.01732 * 0.4"},1},{"Velocity_slip",1,{"0 * 0.4","-0.02 * 0.4"},1},{},{"Velocity_slip",1,{"0 * 0.30","-0.02 * 0.30"},1},{"Velocity_slip",1,{"0.0099999998 * 0.30","-0.01732 * 0.30"},1},{"Velocity_slip",1,{"0.01732 * 0.30","-0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"0.02 * 0.30","0 * 0.30"},1},{"Velocity_slip",1,{"0.01732 * 0.30","0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"0.0099999998 * 0.30","0.01732 * 0.30"},1},{"Velocity_slip",1,{"0 * 0.30","0.02 * 0.30"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.30","0.01732 * 0.30"},1},{"Velocity_slip",1,{"-0.01732 * 0.30","0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"-0.02 * 0.30","0 * 0.30"},1},{"Velocity_slip",1,{"-0.01732 * 0.30","-0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.30","-0.01732 * 0.30"},1},{"Velocity_slip",1,{"0 * 0.30","-0.02 * 0.30"},1},{},{"Velocity_slip",1,{"0 * 0.20","-0.02 * 0.20"},1},{"Velocity_slip",1,{"0.0099999998 * 0.20","-0.01732 * 0.20"},1},{"Velocity_slip",1,{"0.01732 * 0.20","-0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"0.02 * 0.20","0 * 0.20"},1},{"Velocity_slip",1,{"0.01732 * 0.20","0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"0.0099999998 * 0.20","0.01732 * 0.20"},1},{"Velocity_slip",1,{"0 * 0.20","0.02 * 0.20"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.20","0.01732 * 0.20"},1},{"Velocity_slip",1,{"-0.01732 * 0.20","0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"-0.02 * 0.20","0 * 0.20"},1},{"Velocity_slip",1,{"-0.01732 * 0.20","-0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.20","-0.01732 * 0.20"},1},{"Velocity_slip",1,{"0 * 0.20","-0.02 * 0.20"},1},{},{"Velocity_slip",1,{"0 * 0.1","-0.02 * 0.1"},1},{"Velocity_slip",1,{"0.0099999998 * 0.1","-0.01732 * 0.1"},1},{"Velocity_slip",1,{"0.01732 * 0.1","-0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"0.02 * 0.1","0 * 0.1"},1},{"Velocity_slip",1,{"0.01732 * 0.1","0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"0.0099999998 * 0.1","0.01732 * 0.1"},1},{"Velocity_slip",1,{"0 * 0.1","0.02 * 0.1"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.1","0.01732 * 0.1"},1},{"Velocity_slip",1,{"-0.01732 * 0.1","0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"-0.02 * 0.1","0 * 0.1"},1},{"Velocity_slip",1,{"-0.01732 * 0.1","-0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.1","-0.01732 * 0.1"},1},{"Velocity_slip",1,{"0 * 0.1","-0.02 * 0.1"},1}};
						};
					};
					class Centerline
					{
						type = "line";
						width = 5;
						points[] = {{{0.5,0.48},1},{{0.5,0.45},1},{},{{0.5,0.52},1},{{0.5,0.55},1},{},{{0.48,0.5},1},{{0.45,0.5},1},{},{{0.52,0.5},1},{{0.55,0.5},1},{}};
					};
					class WeaponName
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.61,0.86},1};
						right[] = {{0.65,0.86},1};
						down[] = {{0.61,0.9},1};
					};
					class Ammo_GUN
					{
						type = "group";
						condition = "mgun";
						class Ammo_count_GUN
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61,0.89},1};
							right[] = {{0.65,0.89},1};
							down[] = {{0.61,0.93},1};
						};
					};
					class Ammo_RKT
					{
						type = "group";
						condition = "rocket";
						class Ammo_count_RKT
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61,0.89},1};
							right[] = {{0.65,0.89},1};
							down[] = {{0.61,0.93},1};
						};
					};
					class Ammo_AGM
					{
						type = "group";
						condition = "AAmissile";
						class Ammo_count_AGM
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61,0.89},1};
							right[] = {{0.65,0.89},1};
							down[] = {{0.61,0.93},1};
						};
					};
					class Ammo_AAM
					{
						type = "group";
						condition = "ATmissile";
						class Ammo_count_AAM
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61,0.89},1};
							right[] = {{0.65,0.89},1};
							down[] = {{0.61,0.93},1};
						};
					};
					class LightsGroup
					{
						type = "group";
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHTS";
							align = "right";
							scale = 1;
							pos[] = {{0.03,"0.53 + 0.055"},1};
							right[] = {{0.07,"0.53 + 0.055"},1};
							down[] = {{0.03,"0.53 + 0.095"},1};
						};
					};
					class CollisionLightsGroup
					{
						type = "group";
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "A-COL";
							align = "right";
							scale = 1;
							pos[] = {{0.03,"0.53 + 0.105"},1};
							right[] = {{0.07,"0.53 + 0.105"},1};
							down[] = {{0.03,"0.53 + 0.145"},1};
						};
					};
					class ATMissileTOFGroup
					{
						condition = "ATmissile";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{0.61,0.92},1};
							right[] = {{0.65,0.92},1};
							down[] = {{0.61,0.96},1};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{0.69,0.92},1};
							right[] = {{0.73,0.92},1};
							down[] = {{0.69,0.96},1};
						};
					};
					class LaserTOFGroup
					{
						condition = "Bomb";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{0.61,0.92},1};
							right[] = {{0.65,0.92},1};
							down[] = {{0.61,0.96},1};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{0.69,0.92},1};
							right[] = {{0.73,0.92},1};
							down[] = {{0.69,0.96},1};
						};
					};
					class RocketTOFGroup
					{
						condition = "Rocket";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{0.61,0.92},1};
							right[] = {{0.65,0.92},1};
							down[] = {{0.61,0.96},1};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{0.69,0.92},1};
							right[] = {{0.73,0.92},1};
							down[] = {{0.69,0.96},1};
						};
					};
					class RangeNumber
					{
						type = "text";
						source = "targetDist";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.39,0.89},1};
						right[] = {{0.43,0.89},1};
						down[] = {{0.39,0.93},1};
					};
					class RangeText
					{
						type = "text";
						source = "static";
						text = "RNG";
						align = "left";
						scale = 1;
						pos[] = {{0.39,0.86},1};
						right[] = {{0.43,0.86},1};
						down[] = {{0.39,0.9},1};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 1.94384;
						pos[] = {{0.03,0.475},1};
						right[] = {{0.08,0.475},1};
						down[] = {{0.03,0.525},1};
					};
					class TorqueNumber
					{
						condition = "simulRTD";
						class Torque_number
						{
							type = "text";
							align = "left";
							scale = 1;
							source = "rtdRotorTorque";
							sourceScale = 290;
							pos[] = {{0.065,0.175},1};
							right[] = {{0.115,0.175},1};
							down[] = {{0.065,0.225},1};
						};
						class Torquetext
						{
							type = "text";
							source = "static";
							text = "%";
							align = "right";
							scale = 1;
							pos[] = {{0.07,0.175},1};
							right[] = {{0.12,0.175},1};
							down[] = {{0.07,0.225},1};
						};
					};
					class AltNumber: SpeedNumber
					{
						align = "right";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						pos[] = {{0.83,0.475},1};
						right[] = {{0.88,0.475},1};
						down[] = {{0.83,0.525},1};
					};
					class ASLNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 3.28084;
						align = "right";
						scale = 1;
						pos[] = {{0.835,0.18},1};
						right[] = {{0.875,0.18},1};
						down[] = {{0.835,0.22},1};
					};
					class VspeedScalePosta
					{
						type = "line";
						width = 5;
						points[] = {{{0.98,0.2},1},{{1,0.2},1},{},{{0.93,0.2},1},{{0.95,0.2},1},{},{{0.98,0.35},1},{{1,0.35},1},{},{{0.93,0.35},1},{{0.95,0.35},1},{},{{0.94,0.38},1},{{0.95,0.38},1},{},{{0.94,0.41},1},{{0.95,0.41},1},{},{{0.94,0.44},1},{{0.95,0.44},1},{},{{0.94,0.47},1},{{0.95,0.47},1},{},{{0.98,0.5},1},{{1,0.5},1},{},{{0.93,0.5},1},{{0.95,0.5},1},{},{{0.94,0.53},1},{{0.95,0.53},1},{},{{0.94,0.56},1},{{0.95,0.56},1},{},{{0.94,0.59},1},{{0.95,0.59},1},{},{{0.94,0.62},1},{{0.95,0.62},1},{},{{0.98,0.65},1},{{1,0.65},1},{},{{0.93,0.65},1},{{0.95,0.65},1},{},{{0.99,0.68},1},{{0.98,0.68},1},{},{{0.99,0.71},1},{{0.98,0.71},1},{},{{0.99,0.74},1},{{0.98,0.74},1},{},{{0.99,0.77},1},{{0.98,0.77},1},{},{{0.98,0.8},1},{{1,0.8},1},{},{{0.93,0.8},1},{{0.95,0.8},1},{}};
					};
					class RadarAltitudeBand
					{
						clipTL[] = {0,0.2};
						clipBR[] = {1,0.8};
						hideValue = 201;
						class radarbanda
						{
							type = "line";
							width = 17;
							points[] = {{"RadarAltitudeBone",{0,0},1},{"RadarAltitudeBone",{0,0.6},1}};
						};
					};
					class VspeedBand
					{
						type = "line";
						width = 3;
						points[] = {{"VspeedBone",{-0.01,0},1},{"VspeedBone",{-0.025,-0.015},1},{"VspeedBone",{-0.025,0.015},1},{"VspeedBone",{-0.01,0},1},{}};
					};
					class HeadingNumber: SpeedNumber
					{
						source = "heading";
						sourceScale = 1;
						align = "center";
						pos[] = {{0.5,0.045},1};
						right[] = {{0.56,0.045},1};
						down[] = {{0.5,"0.045 + 0.06"},1};
					};
					class Center_box
					{
						type = "line";
						width = 1.5;
						points[] = {{{0.45,"0.02 + 0.085 - 0.06"},1},{{"0.45 + 0.10","0.02 + 0.085 - 0.06"},1},{{"0.45 + 0.10","0.02 + 0.085"},1},{{0.45,"0.02 + 0.085"},1},{{0.45,"0.02 + 0.085 - 0.06"},1}};
					};
					class HeadingArrow
					{
						type = "line";
						width = 7;
						points[] = {{{"0.5","0.128 + 0.03"},1},{{0.5,0.128},1}};
					};
					class HeadingScale_LEFT
					{
						clipTL[] = {0,0};
						clipBR[] = {0.45,1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class HeadingScale_RIGHT
					{
						clipTL[] = {0.55,0};
						clipBR[] = {1,1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class HeadingScale_BOTTOM
					{
						clipTL[] = {0.45,"0.02 + 0.085"};
						clipBR[] = {"0.45 + 0.10",1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class Fuel_Text
					{
						type = "text";
						source = "static";
						text = "Fuel";
						align = "right";
						scale = 1;
						pos[] = {{0.03,0.9},1};
						right[] = {{0.07,0.9},1};
						down[] = {{0.03,0.94},1};
					};
					class Fuel_Number
					{
						type = "text";
						source = "fuel";
						sourceScale = 100;
						align = "right";
						scale = 1;
						pos[] = {{0.1,0.9},1};
						right[] = {{0.14,0.9},1};
						down[] = {{0.1,0.94},1};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04,0.04,0.1};
				helmetRight[] = {0.08,0,0};
				helmetDown[] = {0,-0.08,0};
			};
			class Kimi_HUD_2
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				enableParallax = 0;
				class Bones
				{
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.5};
						pos10[] = {0.75,0.75};
					};
					class ForwardVec1
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.25,0.25};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.253,0.253};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.753,0.753};
					};
					class WeaponAim1
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0,0};
						pos10[] = {0.253,0.23};
					};
					class Target
					{
						type = "vector";
						source = "target";
						pos0[] = {0.5,0.5};
						pos10[] = {0.753,0.753};
					};
					class RadarContact
					{
						type = "fixed";
						pos[] = {0,0};
					};
				};
				class Draw
				{
					color[] = {0.18,1,0.18};
					alpha = 1;
					condition = "on";
					class PlaneMovementCrosshair
					{
						type = "line";
						width = 7;
						points[] = {{"ForwardVec1",1,"Velocity",1,{0,-0.02},1},{"ForwardVec1",1,"Velocity",1,{0.01,-0.01732},1},{"ForwardVec1",1,"Velocity",1,{0.01732,-0.01},1},{"ForwardVec1",1,"Velocity",1,{0.02,0},1},{"ForwardVec1",1,"Velocity",1,{0.01732,0.01},1},{"ForwardVec1",1,"Velocity",1,{0.01,0.01732},1},{"ForwardVec1",1,"Velocity",1,{0,0.02},1},{"ForwardVec1",1,"Velocity",1,{-0.01,0.01732},1},{"ForwardVec1",1,"Velocity",1,{-0.01732,0.01},1},{"ForwardVec1",1,"Velocity",1,{-0.02,0},1},{"ForwardVec1",1,"Velocity",1,{-0.01732,-0.01},1},{"ForwardVec1",1,"Velocity",1,{-0.01,-0.01732},1},{"ForwardVec1",1,"Velocity",1,{0,-0.02},1},{},{"ForwardVec1",1,"Velocity",1,{0.04,0},1},{"ForwardVec1",1,"Velocity",1,{0.02,0},1},{},{"ForwardVec1",1,"Velocity",1,{-0.04,0},1},{"ForwardVec1",1,"Velocity",1,{-0.02,0},1},{},{"ForwardVec1",1,"Velocity",1,{0,-0.04},1},{"ForwardVec1",1,"Velocity",1,{0,-0.02},1}};
					};
					class Gunner_AIM
					{
						type = "group";
						class Circle
						{
							type = "line";
							width = 6;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{0,-0.015},1},{"ForwardVec",1,"WeaponAim",1,{0,-0.03},1},{},{"ForwardVec",1,"WeaponAim",1,{0,-0.0325},1},{"ForwardVec",1,"WeaponAim",1,{0,-0.0475},1},{},{"ForwardVec",1,"WeaponAim",1,{0,0.015},1},{"ForwardVec",1,"WeaponAim",1,{0,0.03},1},{},{"ForwardVec",1,"WeaponAim",1,{0,0.0325},1},{"ForwardVec",1,"WeaponAim",1,{0,0.0475},1},{},{"ForwardVec",1,"WeaponAim",1,{-0.015,0},1},{"ForwardVec",1,"WeaponAim",1,{-0.03,0},1},{},{"ForwardVec",1,"WeaponAim",1,{-0.0325,0},1},{"ForwardVec",1,"WeaponAim",1,{-0.0475,0},1},{},{"ForwardVec",1,"WeaponAim",1,{0.015,0},1},{"ForwardVec",1,"WeaponAim",1,{0.03,0},1},{},{"ForwardVec",1,"WeaponAim",1,{0.0325,0},1},{"ForwardVec",1,"WeaponAim",1,{0.0475,0},1}};
						};
					};
					class GunCross
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							width = 9;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{0,-0.05},1},{"ForwardVec",1,"WeaponAim",1,{0,-0.015},1},{},{"ForwardVec",1,"WeaponAim",1,{0,0.015},1},{"ForwardVec",1,"WeaponAim",1,{0,0.05},1},{},{"ForwardVec",1,"WeaponAim",1,{-0.05,0},1},{"ForwardVec",1,"WeaponAim",1,{-0.015,0},1},{},{"ForwardVec",1,"WeaponAim",1,{0.015,0},1},{"ForwardVec",1,"WeaponAim",1,{0.05,0},1},{}};
						};
					};
					class RocketCross
					{
						condition = "rocket";
						width = 6;
						class Circle
						{
							type = "line";
							width = 6;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{-0.05,-0.08},1},{"ForwardVec",1,"WeaponAim",1,{0.05,-0.08},1},{},{"ForwardVec",1,"WeaponAim",1,{0,-0.08},1},{"ForwardVec",1,"WeaponAim",1,{0,0.08},1},{},{"ForwardVec",1,"WeaponAim",1,{-0.05,0.08},1},{"ForwardVec",1,"WeaponAim",1,{0.05,0.08},1},{}};
						};
					};
					class AT_Aim
					{
						condition = "ATmissile";
						width = 2;
						class Circle
						{
							type = "line";
							width = 2;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{-0.1,-0.1},1},{"ForwardVec",1,"WeaponAim",1,{0.1,-0.1},1},{"ForwardVec",1,"WeaponAim",1,{0.1,0.1},1},{"ForwardVec",1,"WeaponAim",1,{-0.1,0.1},1},{"ForwardVec",1,"WeaponAim",1,{-0.1,-0.1},1}};
						};
					};
					class AA_aim
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							width = 2.5;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{"0 / 4","-0.248559 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 4","-0.244781 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 4","-0.233571 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.125 / 4","-0.215252 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 4","-0.190396 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 4","-0.159774 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 4","-0.12428 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 4","-0.0850072 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 4","-0.0431499 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.25 / 4","0 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 4","0.0431499 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 4","0.0850072 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 4","0.12428 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 4","0.159774 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 4","0.190396 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.125 / 4","0.215252 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 4","0.233571 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 4","0.244781 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0 / 4","0.248559 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 4","0.244781 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 4","0.233571 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 4","0.215252 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 4","0.190396 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 4","0.159774 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 4","0.12428 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 4","0.0850072 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 4","0.0431499 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.25 / 4","0 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 4","-0.0431499 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 4","-0.0850072 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 4","-0.12428 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 4","-0.159774 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 4","-0.190396 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 4","-0.215252 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 4","-0.233571 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 4","-0.244781 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0 / 4","-0.248559 / 4"},1},{},{"ForwardVec",1,"WeaponAim",1,{"0 / 2","-0.248559 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 2","-0.244781 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 2","-0.233571 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.125 / 2","-0.215252 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 2","-0.190396 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 2","-0.159774 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 2","-0.12428 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 2","-0.0850072 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 2","-0.0431499 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.25 / 2","0 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 2","0.0431499 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 2","0.0850072 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 2","0.12428 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 2","0.159774 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 2","0.190396 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.125 / 2","0.215252 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 2","0.233571 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 2","0.244781 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0 / 2","0.248559 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 2","0.244781 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 2","0.233571 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 2","0.215252 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 2","0.190396 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 2","0.159774 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 2","0.12428 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 2","0.0850072 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 2","0.0431499 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.25 / 2","0 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 2","-0.0431499 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 2","-0.0850072 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 2","-0.12428 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 2","-0.159774 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 2","-0.190396 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 2","-0.215252 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 2","-0.233571 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 2","-0.244781 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0 / 2","-0.248559 / 2"},1}};
						};
					};
					class TargetACQ
					{
						type = "line";
						width = 2;
						points[] = {{"ForwardVec",1,"target",{0,-0.06},1},{"ForwardVec",1,"target",{0,-0.055},1},{},{"ForwardVec",1,"target",{0,-0.05},1},{"ForwardVec",1,"target",{0,-0.045},1},{},{"ForwardVec",1,"target",{0,-0.04},1},{"ForwardVec",1,"target",{0,-0.035},1},{},{"ForwardVec",1,"target",{0,-0.03},1},{"ForwardVec",1,"target",{0,-0.025},1},{},{"ForwardVec",1,"target",{0,-0.02},1},{"ForwardVec",1,"target",{0,-0.015},1},{},{"ForwardVec",1,"target",{0,-0.01},1},{"ForwardVec",1,"target",{0,-0.005},1},{},{"ForwardVec",1,"target",{0,0},1},{"ForwardVec",1,"target",{0,0},1},{},{"ForwardVec",1,"target",{0,0.06},1},{"ForwardVec",1,"target",{0,0.055},1},{},{"ForwardVec",1,"target",{0,0.05},1},{"ForwardVec",1,"target",{0,0.045},1},{},{"ForwardVec",1,"target",{0,0.04},1},{"ForwardVec",1,"target",{0,0.035},1},{},{"ForwardVec",1,"target",{0,0.03},1},{"ForwardVec",1,"target",{0,0.025},1},{},{"ForwardVec",1,"target",{0,0.02},1},{"ForwardVec",1,"target",{0,0.015},1},{},{"ForwardVec",1,"target",{0,0.01},1},{"ForwardVec",1,"target",{0,0.005},1},{},{"ForwardVec",1,"target",{-0.06,0},1},{"ForwardVec",1,"target",{-0.055,0},1},{},{"ForwardVec",1,"target",{-0.05,0},1},{"ForwardVec",1,"target",{-0.045,0},1},{},{"ForwardVec",1,"target",{-0.04,0},1},{"ForwardVec",1,"target",{-0.035,0},1},{},{"ForwardVec",1,"target",{-0.03,0},1},{"ForwardVec",1,"target",{-0.025,0},1},{},{"ForwardVec",1,"target",{-0.02,0},1},{"ForwardVec",1,"target",{-0.015,0},1},{},{"ForwardVec",1,"target",{-0.01,0},1},{"ForwardVec",1,"target",{-0.005,0},1},{},{"ForwardVec",1,"target",{0.06,0},1},{"ForwardVec",1,"target",{0.055,0},1},{},{"ForwardVec",1,"target",{0.05,0},1},{"ForwardVec",1,"target",{0.045,0},1},{},{"ForwardVec",1,"target",{0.04,0},1},{"ForwardVec",1,"target",{0.035,0},1},{},{"ForwardVec",1,"target",{0.03,0},1},{"ForwardVec",1,"target",{0.025,0},1},{},{"ForwardVec",1,"target",{0.02,0},1},{"ForwardVec",1,"target",{0.015,0},1},{},{"ForwardVec",1,"target",{0.01,0},1},{"ForwardVec",1,"target",{0.005,0},1},{}};
					};
					class RadarTargets
					{
						type = "radar";
						pos0[] = {0.5,0.5};
						pos10[] = {0.753,0.753};
						width = 2.5;
						points[] = {{"ForwardVec",1,"RadarContact",{-0.01,-0.01},1},{"ForwardVec",1,"RadarContact",{0.01,-0.01},1},{"ForwardVec",1,"RadarContact",{0.01,0.01},1},{"ForwardVec",1,"RadarContact",{-0.01,0.01},1},{"ForwardVec",1,"RadarContact",{-0.01,-0.01},1}};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.035,0.035,0.1};
				helmetRight[] = {0.07,0,0};
				helmetDown[] = {0,-0.07,0};
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShellYellow
			{
				count = 10;
				magazine = "SmokeShellYellow";
			};
			class _xx_SmokeShellPurple
			{
				count = 10;
				magazine = "SmokeShellPurple";
			};
			class _xx_FlareGreen_F
			{
				count = 10;
				magazine = "FlareGreen_F";
			};
			class _xx_FlareRed_F
			{
				count = 10;
				magazine = "FlareRed_F";
			};
			class _xx_FlareWhite_F
			{
				count = 10;
				magazine = "FlareWhite_F";
			};
			class _xx_FlareYellow_F
			{
				count = 10;
				magazine = "FlareYellow_F";
			};
		};
		class TransportBackpacks
		{
			class _xx_ej_skram
			{
				backpack = "ej_skram_SOAR";
				count = 4;
			};
			class _xx_ej_speedball
			{
				backpack = "ej_speedball";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				count = 20;
				name = "FirstAidKit";
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_ItemGPS
			{
				count = 2;
				name = "ItemGPS";
			};
		};
	};
	class B_Heli_Transport_01_F;
	class ej_MH80: B_Heli_Transport_01_F
	{
		attenuationEffectType = "HeliAttenuation";
		emptySound[] = {"",0,1};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",1,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",1,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",1,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.33,"soundGeneralCollision2",0.33,"soundGeneralCollision3",0.33};
		soundLandCrashes[] = {"emptySound",0};
		soundBuildingCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundArmorCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundWoodCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",1,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",1,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",1,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1,1,100};
		soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1,1,100};
		soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
		soundDammage[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",10,1};
		soundGetIn[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\open",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\close",1,1,50};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_start_v2",0.39810717,1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_start_v2",0.7943282,1,600};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_stop_v2",0.39810717,1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_ext_stop_v2",0.7943282,1,600};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",1,1};
		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_1",1,1};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",2.5118864,1,300};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1,1};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1,1,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",1,1,100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",1,1,100};
		landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",1.7782794,1,100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",1.7782794,1,100};
		landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",1,1};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",1,1,80};
		slingCargoAttach[] = {"slingCargoAttach0","slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",1,1};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",1,1,80};
		slingCargoDetach[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",1,1};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",1,1,80};
		slingCargoDetachAir[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",1,1};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",1,1,80};
		slingCargoRopeBreak[] = {"slingCargoDetach0","slingCargoDetach1"};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"Uh-60\sound\Engine_Close.ogg",1,1,200};
				frequency = "rotorSpeed";
				volume = "3 * camPos * (0 max (rotorSpeed-0.4))";
			};
			class RotorExt
			{
				sound[] = {"Uh-60\sound\Rotor_Close.ogg",1,1,700};
				frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
				volume = "camPos *3* (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust)";
			};
			class RotorNoiseExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\rotor_swist",1,1,400};
				frequency = 1;
				volume = "(camPos*(rotorThrust factor [0.6, 1]))";
				cone[] = {0.7,1.3,1,0};
			};
			class EngineInt
			{
				sound[] = {"Uh-60\sound\Int_Main.ogg",1,1};
				frequency = "rotorSpeed";
				volume = "1*(1-camPos)*(0 max (rotorSpeed-0.4))";
			};
			class RotorInt
			{
				sound[] = {"Uh-60\sound\Int_Rotor.ogg",1,1};
				frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
				volume = "(1 - camPos) * (rotorSpeed factor [0.3, 0.7]) * (1 + rotorThrust) * 0.7";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.22387211,1,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.22387211,1,20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1,1,100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.4466836,1,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2e",0.39810717,1,50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"Uh-60\sound\Engine_Close.ogg",1,1,200};
					frequency = "rotorSpeed";
					volume = "3 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class RotorExt
				{
					sound[] = {"Uh-60\sound\Rotor_Close.ogg",1,1,700};
					frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
					volume = "camPos *3* (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust)";
				};
				class RotorNoiseExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\rotor_swist",1,1,400};
					frequency = 1;
					volume = "(camPos*(rotorThrust factor [0.6, 1]))";
					cone[] = {0.7,1.3,1,0};
				};
				class EngineInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_engine_v2",1,1};
					frequency = "rotorSpeed";
					volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
				};
				class RotorInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_rotor_normal",0.70794576,1};
					frequency = "rotorSpeed * (1-rotorThrust/5)";
					volume = "(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.31622776,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.22387211,1,20};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.22387211,1,20};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
					frequency = 1;
					volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1,1,100};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.4466836,1,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
				};
				class GStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2e",0.39810717,1,50};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
		};
		author = "EricJ";
		_generalMacro = "B_Heli_Transport_01_F";
		scope = 2;
		side = 1;
		ForceinGarage = 1;
		faction = "TF160";
		mainBladeRadius = 8.18;
		crew = "160th_SOAR_Pilot";
		typicalCargo[] = {"160th_SOAR_Pilot"};
		availableForSupportTypes[] = {"Drop","Transport"};
		irtarget = 0;
		cost = 100;
		camouflage = 18;
		hiddenSelectionsTextures[] = {"\UH-60\Data\Heli_Transport_01_ext01_160th_CO.paa","\UH-60\Data\Heli_Transport_01_ext02_160th_CO.paa"};
		slingLoadMaxCargoMass = 2700;
		displayName = "MH-80 (TF160)";
		weapons[] = {"EricJ_CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		class TransportBackpacks
		{
			class _xx_ej_skram_SOAR
			{
				backpack = "ej_skram_SOAR";
				count = 4;
			};
			class _xx_ej_speedball
			{
				backpack = "ej_speedball";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShellYellow
			{
				count = 10;
				magazine = "SmokeShellYellow";
			};
			class _xx_41630m855a1_mag
			{
				count = 14;
				magazine = "41630m855a1_mag";
			};
			class _xx_SmokeShellPurple
			{
				count = 10;
				magazine = "SmokeShellPurple";
			};
			class _xx_FlareGreen_F
			{
				count = 10;
				magazine = "FlareGreen_F";
			};
			class _xx_FlareRed_F
			{
				count = 10;
				magazine = "FlareRed_F";
			};
			class _xx_FlareWhite_F
			{
				count = 10;
				magazine = "FlareWhite_F";
			};
			class _xx_FlareYellow_F
			{
				count = 10;
				magazine = "FlareYellow_F";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				count = 10;
				name = "FirstAidKit";
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_ItemGPS
			{
				count = 2;
				name = "ItemGPS";
			};
			class _xx_ej_PVS15
			{
				count = 2;
				name = "ej_PVS15";
			};
		};
		class TransportWeapons
		{
			class _xx_ej_flaregun
			{
				weapon = "ej_flaregun";
				count = 2;
			};
			class _xx_ej_hk41610_ERCO_IR
			{
				weapon = "ej_hk41610_ERCO_IR";
				count = 2;
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				class Bones{};
				class Draw{};
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {0,0,0};
				helmetRight[] = {0,0,0};
				helmetDown[] = {0,0,0};
			};
			class Kimi_HUD_1
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				enableParallax = 0;
				class Bones
				{
					class GunnerAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,"0.9 - 0.04 + 0.012"};
						pos10[] = {"0.5 + 0.0111","0.9 - 0.04 + 0.012 + 0.0133"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.5};
						pos10[] = {0.65,0.65};
					};
					class Velocity_slip
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.845};
						pos10[] = {0.53,0.845};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93,0.2};
						maxPos[] = {0.93,0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965,0.2};
						maxPos[] = {0.965,0.8};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5,0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.25,0.25};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.75,0.75};
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.78,0.78};
						angle = 0;
					};
					class LevelP5: Level0
					{
						angle = 5;
					};
					class LevelM5: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
				};
				class Draw
				{
					color[] = {0.18,1,0.18};
					alpha = 1;
					condition = "on";
					class Horizont
					{
						clipTL[] = {0.15,0.15};
						clipBR[] = {0.85,0.85};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] = {{"Level0",{-0.42,0},1},{"Level0",{-0.38,0},1},{},{"Level0",{-0.37,0},1},{"Level0",{-0.33,0},1},{},{"Level0",{-0.32,0},1},{"Level0",{-0.28,0},1},{},{"Level0",{-0.27,0},1},{"Level0",{-0.23,0},1},{},{"Level0",{-0.22,0},1},{"Level0",{-0.18,0},1},{},{"Level0",{-0.17,0},1},{"Level0",{-0.13,0},1},{},{"Level0",{-0.12,0},1},{"Level0",{-0.08,0},1},{},{"Level0",{0.42,0},1},{"Level0",{0.38,0},1},{},{"Level0",{0.37,0},1},{"Level0",{0.33,0},1},{},{"Level0",{0.32,0},1},{"Level0",{0.28,0},1},{},{"Level0",{0.27,0},1},{"Level0",{0.23,0},1},{},{"Level0",{0.22,0},1},{"Level0",{0.18,0},1},{},{"Level0",{0.17,0},1},{"Level0",{0.13,0},1},{},{"Level0",{0.12,0},1},{"Level0",{0.08,0},1}};
							};
						};
					};
					class HorizonBankRot
					{
						type = "line";
						width = 3;
						points[] = {{"HorizonBankRot",{0,0.25},1},{"HorizonBankRot",{-0.01,0.23},1},{"HorizonBankRot",{0.01,0.23},1},{"HorizonBankRot",{0,0.25},1}};
					};
					class Static_HAD_BOX
					{
						clipTL[] = {0,1};
						clipBR[] = {1,0};
						type = "line";
						width = 5;
						points[] = {{{"0.5-0.1","0.9-0.04"},1},{{"0.5-0.1","0.9+0.04"},1},{{"0.5+0.1","0.9+0.04"},1},{{"0.5+0.1","0.9-0.04"},1},{{"0.5-0.1","0.9-0.04"},1},{},{{"0.5-0.1","0.9-0.04+0.012"},1},{{"0.5-0.092","0.9-0.04+0.012"},1},{},{{"0.5+0.1","0.9-0.04+0.012"},1},{{"0.5+0.092","0.9-0.04+0.012"},1},{},{{0.5,"0.9-0.04"},1},{{0.5,"0.9-0.032"},1},{},{{0.5,"0.9+0.04"},1},{{0.5,"0.9+0.032"},1},{}};
					};
					class Gunner_HAD
					{
						type = "line";
						width = 6;
						points[] = {{"GunnerAim",{-0.015,-0.008},1},{"GunnerAim",{-0.015,0.008},1},{"GunnerAim",{0.015,0.008},1},{"GunnerAim",{0.015,-0.008},1},{"GunnerAim",{-0.015,-0.008},1}};
					};
					class Slip_ball_group
					{
						class Slip_bars
						{
							type = "line";
							width = 4;
							points[] = {{{"0.5-0.018","0.9-0.04"},1},{{"0.5-0.018","0.9-0.075"},1},{},{{"0.5+0.018","0.9-0.04"},1},{{"0.5+0.018","0.9-0.075"},1}};
						};
						class Slip_ball
						{
							type = "line";
							width = 6;
							points[] = {{"Velocity_slip",1,{"0 * 0.75","-0.02 * 0.75"},1},{"Velocity_slip",1,{"0.0099999998 * 0.75","-0.01732 * 0.75"},1},{"Velocity_slip",1,{"0.01732 * 0.75","-0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"0.02 * 0.75","0 * 0.75"},1},{"Velocity_slip",1,{"0.01732 * 0.75","0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"0.0099999998 * 0.75","0.01732 * 0.75"},1},{"Velocity_slip",1,{"0 * 0.75","0.02 * 0.75"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.75","0.01732 * 0.75"},1},{"Velocity_slip",1,{"-0.01732 * 0.75","0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"-0.02 * 0.75","0 * 0.75"},1},{"Velocity_slip",1,{"-0.01732 * 0.75","-0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.75","-0.01732 * 0.75"},1},{"Velocity_slip",1,{"0 * 0.75","-0.02 * 0.75"},1},{},{"Velocity_slip",1,{"0 * 0.6","-0.02 * 0.6"},1},{"Velocity_slip",1,{"0.0099999998 * 0.6","-0.01732 * 0.6"},1},{"Velocity_slip",1,{"0.01732 * 0.6","-0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"0.02 * 0.6","0 * 0.6"},1},{"Velocity_slip",1,{"0.01732 * 0.6","0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"0.0099999998 * 0.6","0.01732 * 0.6"},1},{"Velocity_slip",1,{"0 * 0.6","0.02 * 0.6"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.6","0.01732 * 0.6"},1},{"Velocity_slip",1,{"-0.01732 * 0.6","0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"-0.02 * 0.6","0 * 0.6"},1},{"Velocity_slip",1,{"-0.01732 * 0.6","-0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.6","-0.01732 * 0.6"},1},{"Velocity_slip",1,{"0 * 0.6","-0.02 * 0.6"},1},{},{"Velocity_slip",1,{"0 * 0.5","-0.02 * 0.5"},1},{"Velocity_slip",1,{"0.0099999998 * 0.5","-0.01732 * 0.5"},1},{"Velocity_slip",1,{"0.01732 * 0.5","-0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"0.02 * 0.5","0 * 0.5"},1},{"Velocity_slip",1,{"0.01732 * 0.5","0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"0.0099999998 * 0.5","0.01732 * 0.5"},1},{"Velocity_slip",1,{"0 * 0.5","0.02 * 0.5"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.5","0.01732 * 0.5"},1},{"Velocity_slip",1,{"-0.01732 * 0.5","0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"-0.02 * 0.5","0 * 0.5"},1},{"Velocity_slip",1,{"-0.01732 * 0.5","-0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.5","-0.01732 * 0.5"},1},{"Velocity_slip",1,{"0 * 0.5","-0.02 * 0.5"},1},{},{"Velocity_slip",1,{"0 * 0.4","-0.02 * 0.4"},1},{"Velocity_slip",1,{"0.0099999998 * 0.4","-0.01732 * 0.4"},1},{"Velocity_slip",1,{"0.01732 * 0.4","-0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"0.02 * 0.4","0 * 0.4"},1},{"Velocity_slip",1,{"0.01732 * 0.4","0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"0.0099999998 * 0.4","0.01732 * 0.4"},1},{"Velocity_slip",1,{"0 * 0.4","0.02 * 0.4"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.4","0.01732 * 0.4"},1},{"Velocity_slip",1,{"-0.01732 * 0.4","0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"-0.02 * 0.4","0 * 0.4"},1},{"Velocity_slip",1,{"-0.01732 * 0.4","-0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.4","-0.01732 * 0.4"},1},{"Velocity_slip",1,{"0 * 0.4","-0.02 * 0.4"},1},{},{"Velocity_slip",1,{"0 * 0.30","-0.02 * 0.30"},1},{"Velocity_slip",1,{"0.0099999998 * 0.30","-0.01732 * 0.30"},1},{"Velocity_slip",1,{"0.01732 * 0.30","-0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"0.02 * 0.30","0 * 0.30"},1},{"Velocity_slip",1,{"0.01732 * 0.30","0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"0.0099999998 * 0.30","0.01732 * 0.30"},1},{"Velocity_slip",1,{"0 * 0.30","0.02 * 0.30"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.30","0.01732 * 0.30"},1},{"Velocity_slip",1,{"-0.01732 * 0.30","0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"-0.02 * 0.30","0 * 0.30"},1},{"Velocity_slip",1,{"-0.01732 * 0.30","-0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.30","-0.01732 * 0.30"},1},{"Velocity_slip",1,{"0 * 0.30","-0.02 * 0.30"},1},{},{"Velocity_slip",1,{"0 * 0.20","-0.02 * 0.20"},1},{"Velocity_slip",1,{"0.0099999998 * 0.20","-0.01732 * 0.20"},1},{"Velocity_slip",1,{"0.01732 * 0.20","-0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"0.02 * 0.20","0 * 0.20"},1},{"Velocity_slip",1,{"0.01732 * 0.20","0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"0.0099999998 * 0.20","0.01732 * 0.20"},1},{"Velocity_slip",1,{"0 * 0.20","0.02 * 0.20"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.20","0.01732 * 0.20"},1},{"Velocity_slip",1,{"-0.01732 * 0.20","0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"-0.02 * 0.20","0 * 0.20"},1},{"Velocity_slip",1,{"-0.01732 * 0.20","-0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.20","-0.01732 * 0.20"},1},{"Velocity_slip",1,{"0 * 0.20","-0.02 * 0.20"},1},{},{"Velocity_slip",1,{"0 * 0.1","-0.02 * 0.1"},1},{"Velocity_slip",1,{"0.0099999998 * 0.1","-0.01732 * 0.1"},1},{"Velocity_slip",1,{"0.01732 * 0.1","-0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"0.02 * 0.1","0 * 0.1"},1},{"Velocity_slip",1,{"0.01732 * 0.1","0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"0.0099999998 * 0.1","0.01732 * 0.1"},1},{"Velocity_slip",1,{"0 * 0.1","0.02 * 0.1"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.1","0.01732 * 0.1"},1},{"Velocity_slip",1,{"-0.01732 * 0.1","0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"-0.02 * 0.1","0 * 0.1"},1},{"Velocity_slip",1,{"-0.01732 * 0.1","-0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.1","-0.01732 * 0.1"},1},{"Velocity_slip",1,{"0 * 0.1","-0.02 * 0.1"},1}};
						};
					};
					class Centerline
					{
						type = "line";
						width = 5;
						points[] = {{{0.5,0.48},1},{{0.5,0.45},1},{},{{0.5,0.52},1},{{0.5,0.55},1},{},{{0.48,0.5},1},{{0.45,0.5},1},{},{{0.52,0.5},1},{{0.55,0.5},1},{}};
					};
					class WeaponName
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.61,0.86},1};
						right[] = {{0.65,0.86},1};
						down[] = {{0.61,0.9},1};
					};
					class Ammo_GUN
					{
						type = "group";
						condition = "mgun";
						class Ammo_count_GUN
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61,0.89},1};
							right[] = {{0.65,0.89},1};
							down[] = {{0.61,0.93},1};
						};
					};
					class Ammo_RKT
					{
						type = "group";
						condition = "rocket";
						class Ammo_count_RKT
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61,0.89},1};
							right[] = {{0.65,0.89},1};
							down[] = {{0.61,0.93},1};
						};
					};
					class Ammo_AGM
					{
						type = "group";
						condition = "AAmissile";
						class Ammo_count_AGM
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61,0.89},1};
							right[] = {{0.65,0.89},1};
							down[] = {{0.61,0.93},1};
						};
					};
					class Ammo_AAM
					{
						type = "group";
						condition = "ATmissile";
						class Ammo_count_AAM
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61,0.89},1};
							right[] = {{0.65,0.89},1};
							down[] = {{0.61,0.93},1};
						};
					};
					class LightsGroup
					{
						type = "group";
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHTS";
							align = "right";
							scale = 1;
							pos[] = {{0.03,"0.53 + 0.055"},1};
							right[] = {{0.07,"0.53 + 0.055"},1};
							down[] = {{0.03,"0.53 + 0.095"},1};
						};
					};
					class CollisionLightsGroup
					{
						type = "group";
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "A-COL";
							align = "right";
							scale = 1;
							pos[] = {{0.03,"0.53 + 0.105"},1};
							right[] = {{0.07,"0.53 + 0.105"},1};
							down[] = {{0.03,"0.53 + 0.145"},1};
						};
					};
					class ATMissileTOFGroup
					{
						condition = "ATmissile";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{0.61,0.92},1};
							right[] = {{0.65,0.92},1};
							down[] = {{0.61,0.96},1};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{0.69,0.92},1};
							right[] = {{0.73,0.92},1};
							down[] = {{0.69,0.96},1};
						};
					};
					class LaserTOFGroup
					{
						condition = "Bomb";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{0.61,0.92},1};
							right[] = {{0.65,0.92},1};
							down[] = {{0.61,0.96},1};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{0.69,0.92},1};
							right[] = {{0.73,0.92},1};
							down[] = {{0.69,0.96},1};
						};
					};
					class RocketTOFGroup
					{
						condition = "Rocket";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{0.61,0.92},1};
							right[] = {{0.65,0.92},1};
							down[] = {{0.61,0.96},1};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{0.69,0.92},1};
							right[] = {{0.73,0.92},1};
							down[] = {{0.69,0.96},1};
						};
					};
					class RangeNumber
					{
						type = "text";
						source = "targetDist";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.39,0.89},1};
						right[] = {{0.43,0.89},1};
						down[] = {{0.39,0.93},1};
					};
					class RangeText
					{
						type = "text";
						source = "static";
						text = "RNG";
						align = "left";
						scale = 1;
						pos[] = {{0.39,0.86},1};
						right[] = {{0.43,0.86},1};
						down[] = {{0.39,0.9},1};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 1.94384;
						pos[] = {{0.03,0.475},1};
						right[] = {{0.08,0.475},1};
						down[] = {{0.03,0.525},1};
					};
					class TorqueNumber
					{
						condition = "simulRTD";
						class Torque_number
						{
							type = "text";
							align = "left";
							scale = 1;
							source = "rtdRotorTorque";
							sourceScale = 290;
							pos[] = {{0.065,0.175},1};
							right[] = {{0.115,0.175},1};
							down[] = {{0.065,0.225},1};
						};
						class Torquetext
						{
							type = "text";
							source = "static";
							text = "%";
							align = "right";
							scale = 1;
							pos[] = {{0.07,0.175},1};
							right[] = {{0.12,0.175},1};
							down[] = {{0.07,0.225},1};
						};
					};
					class AltNumber: SpeedNumber
					{
						align = "right";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						pos[] = {{0.83,0.475},1};
						right[] = {{0.88,0.475},1};
						down[] = {{0.83,0.525},1};
					};
					class ASLNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 3.28084;
						align = "right";
						scale = 1;
						pos[] = {{0.835,0.18},1};
						right[] = {{0.875,0.18},1};
						down[] = {{0.835,0.22},1};
					};
					class VspeedScalePosta
					{
						type = "line";
						width = 5;
						points[] = {{{0.98,0.2},1},{{1,0.2},1},{},{{0.93,0.2},1},{{0.95,0.2},1},{},{{0.98,0.35},1},{{1,0.35},1},{},{{0.93,0.35},1},{{0.95,0.35},1},{},{{0.94,0.38},1},{{0.95,0.38},1},{},{{0.94,0.41},1},{{0.95,0.41},1},{},{{0.94,0.44},1},{{0.95,0.44},1},{},{{0.94,0.47},1},{{0.95,0.47},1},{},{{0.98,0.5},1},{{1,0.5},1},{},{{0.93,0.5},1},{{0.95,0.5},1},{},{{0.94,0.53},1},{{0.95,0.53},1},{},{{0.94,0.56},1},{{0.95,0.56},1},{},{{0.94,0.59},1},{{0.95,0.59},1},{},{{0.94,0.62},1},{{0.95,0.62},1},{},{{0.98,0.65},1},{{1,0.65},1},{},{{0.93,0.65},1},{{0.95,0.65},1},{},{{0.99,0.68},1},{{0.98,0.68},1},{},{{0.99,0.71},1},{{0.98,0.71},1},{},{{0.99,0.74},1},{{0.98,0.74},1},{},{{0.99,0.77},1},{{0.98,0.77},1},{},{{0.98,0.8},1},{{1,0.8},1},{},{{0.93,0.8},1},{{0.95,0.8},1},{}};
					};
					class RadarAltitudeBand
					{
						clipTL[] = {0,0.2};
						clipBR[] = {1,0.8};
						hideValue = 201;
						class radarbanda
						{
							type = "line";
							width = 17;
							points[] = {{"RadarAltitudeBone",{0,0},1},{"RadarAltitudeBone",{0,0.6},1}};
						};
					};
					class VspeedBand
					{
						type = "line";
						width = 3;
						points[] = {{"VspeedBone",{-0.01,0},1},{"VspeedBone",{-0.025,-0.015},1},{"VspeedBone",{-0.025,0.015},1},{"VspeedBone",{-0.01,0},1},{}};
					};
					class HeadingNumber: SpeedNumber
					{
						source = "heading";
						sourceScale = 1;
						align = "center";
						pos[] = {{0.5,0.045},1};
						right[] = {{0.56,0.045},1};
						down[] = {{0.5,"0.045 + 0.06"},1};
					};
					class Center_box
					{
						type = "line";
						width = 1.5;
						points[] = {{{0.45,"0.02 + 0.085 - 0.06"},1},{{"0.45 + 0.10","0.02 + 0.085 - 0.06"},1},{{"0.45 + 0.10","0.02 + 0.085"},1},{{0.45,"0.02 + 0.085"},1},{{0.45,"0.02 + 0.085 - 0.06"},1}};
					};
					class HeadingArrow
					{
						type = "line";
						width = 7;
						points[] = {{{"0.5","0.128 + 0.03"},1},{{0.5,0.128},1}};
					};
					class HeadingScale_LEFT
					{
						clipTL[] = {0,0};
						clipBR[] = {0.45,1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class HeadingScale_RIGHT
					{
						clipTL[] = {0.55,0};
						clipBR[] = {1,1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class HeadingScale_BOTTOM
					{
						clipTL[] = {0.45,"0.02 + 0.085"};
						clipBR[] = {"0.45 + 0.10",1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class Fuel_Text
					{
						type = "text";
						source = "static";
						text = "Fuel";
						align = "right";
						scale = 1;
						pos[] = {{0.03,0.9},1};
						right[] = {{0.07,0.9},1};
						down[] = {{0.03,0.94},1};
					};
					class Fuel_Number
					{
						type = "text";
						source = "fuel";
						sourceScale = 100;
						align = "right";
						scale = 1;
						pos[] = {{0.1,0.9},1};
						right[] = {{0.14,0.9},1};
						down[] = {{0.1,0.94},1};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04,0.04,0.1};
				helmetRight[] = {0.08,0,0};
				helmetDown[] = {0,-0.08,0};
			};
			class Kimi_HUD_2
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				enableParallax = 0;
				class Bones
				{
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.5};
						pos10[] = {0.75,0.75};
					};
					class ForwardVec1
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.25,0.25};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.253,0.253};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.753,0.753};
					};
					class WeaponAim1
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0,0};
						pos10[] = {0.253,0.23};
					};
					class Target
					{
						type = "vector";
						source = "target";
						pos0[] = {0.5,0.5};
						pos10[] = {0.753,0.753};
					};
					class RadarContact
					{
						type = "fixed";
						pos[] = {0,0};
					};
				};
				class Draw
				{
					color[] = {0.18,1,0.18};
					alpha = 1;
					condition = "on";
					class PlaneMovementCrosshair
					{
						type = "line";
						width = 7;
						points[] = {{"ForwardVec1",1,"Velocity",1,{0,-0.02},1},{"ForwardVec1",1,"Velocity",1,{0.01,-0.01732},1},{"ForwardVec1",1,"Velocity",1,{0.01732,-0.01},1},{"ForwardVec1",1,"Velocity",1,{0.02,0},1},{"ForwardVec1",1,"Velocity",1,{0.01732,0.01},1},{"ForwardVec1",1,"Velocity",1,{0.01,0.01732},1},{"ForwardVec1",1,"Velocity",1,{0,0.02},1},{"ForwardVec1",1,"Velocity",1,{-0.01,0.01732},1},{"ForwardVec1",1,"Velocity",1,{-0.01732,0.01},1},{"ForwardVec1",1,"Velocity",1,{-0.02,0},1},{"ForwardVec1",1,"Velocity",1,{-0.01732,-0.01},1},{"ForwardVec1",1,"Velocity",1,{-0.01,-0.01732},1},{"ForwardVec1",1,"Velocity",1,{0,-0.02},1},{},{"ForwardVec1",1,"Velocity",1,{0.04,0},1},{"ForwardVec1",1,"Velocity",1,{0.02,0},1},{},{"ForwardVec1",1,"Velocity",1,{-0.04,0},1},{"ForwardVec1",1,"Velocity",1,{-0.02,0},1},{},{"ForwardVec1",1,"Velocity",1,{0,-0.04},1},{"ForwardVec1",1,"Velocity",1,{0,-0.02},1}};
					};
					class Gunner_AIM
					{
						type = "group";
						class Circle
						{
							type = "line";
							width = 6;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{0,-0.015},1},{"ForwardVec",1,"WeaponAim",1,{0,-0.03},1},{},{"ForwardVec",1,"WeaponAim",1,{0,-0.0325},1},{"ForwardVec",1,"WeaponAim",1,{0,-0.0475},1},{},{"ForwardVec",1,"WeaponAim",1,{0,0.015},1},{"ForwardVec",1,"WeaponAim",1,{0,0.03},1},{},{"ForwardVec",1,"WeaponAim",1,{0,0.0325},1},{"ForwardVec",1,"WeaponAim",1,{0,0.0475},1},{},{"ForwardVec",1,"WeaponAim",1,{-0.015,0},1},{"ForwardVec",1,"WeaponAim",1,{-0.03,0},1},{},{"ForwardVec",1,"WeaponAim",1,{-0.0325,0},1},{"ForwardVec",1,"WeaponAim",1,{-0.0475,0},1},{},{"ForwardVec",1,"WeaponAim",1,{0.015,0},1},{"ForwardVec",1,"WeaponAim",1,{0.03,0},1},{},{"ForwardVec",1,"WeaponAim",1,{0.0325,0},1},{"ForwardVec",1,"WeaponAim",1,{0.0475,0},1}};
						};
					};
					class GunCross
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							width = 9;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{0,-0.05},1},{"ForwardVec",1,"WeaponAim",1,{0,-0.015},1},{},{"ForwardVec",1,"WeaponAim",1,{0,0.015},1},{"ForwardVec",1,"WeaponAim",1,{0,0.05},1},{},{"ForwardVec",1,"WeaponAim",1,{-0.05,0},1},{"ForwardVec",1,"WeaponAim",1,{-0.015,0},1},{},{"ForwardVec",1,"WeaponAim",1,{0.015,0},1},{"ForwardVec",1,"WeaponAim",1,{0.05,0},1},{}};
						};
					};
					class RocketCross
					{
						condition = "rocket";
						width = 6;
						class Circle
						{
							type = "line";
							width = 6;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{-0.05,-0.08},1},{"ForwardVec",1,"WeaponAim",1,{0.05,-0.08},1},{},{"ForwardVec",1,"WeaponAim",1,{0,-0.08},1},{"ForwardVec",1,"WeaponAim",1,{0,0.08},1},{},{"ForwardVec",1,"WeaponAim",1,{-0.05,0.08},1},{"ForwardVec",1,"WeaponAim",1,{0.05,0.08},1},{}};
						};
					};
					class AT_Aim
					{
						condition = "ATmissile";
						width = 2;
						class Circle
						{
							type = "line";
							width = 2;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{-0.1,-0.1},1},{"ForwardVec",1,"WeaponAim",1,{0.1,-0.1},1},{"ForwardVec",1,"WeaponAim",1,{0.1,0.1},1},{"ForwardVec",1,"WeaponAim",1,{-0.1,0.1},1},{"ForwardVec",1,"WeaponAim",1,{-0.1,-0.1},1}};
						};
					};
					class AA_aim
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							width = 2.5;
							points[] = {{"ForwardVec",1,"WeaponAim",1,{"0 / 4","-0.248559 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 4","-0.244781 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 4","-0.233571 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.125 / 4","-0.215252 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 4","-0.190396 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 4","-0.159774 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 4","-0.12428 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 4","-0.0850072 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 4","-0.0431499 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.25 / 4","0 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 4","0.0431499 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 4","0.0850072 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 4","0.12428 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 4","0.159774 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 4","0.190396 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.125 / 4","0.215252 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 4","0.233571 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 4","0.244781 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0 / 4","0.248559 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 4","0.244781 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 4","0.233571 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 4","0.215252 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 4","0.190396 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 4","0.159774 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 4","0.12428 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 4","0.0850072 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 4","0.0431499 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.25 / 4","0 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 4","-0.0431499 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 4","-0.0850072 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 4","-0.12428 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 4","-0.159774 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 4","-0.190396 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 4","-0.215252 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 4","-0.233571 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 4","-0.244781 / 4"},1},{"ForwardVec",1,"WeaponAim",1,{"0 / 4","-0.248559 / 4"},1},{},{"ForwardVec",1,"WeaponAim",1,{"0 / 2","-0.248559 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 2","-0.244781 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 2","-0.233571 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.125 / 2","-0.215252 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 2","-0.190396 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 2","-0.159774 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 2","-0.12428 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 2","-0.0850072 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 2","-0.0431499 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.25 / 2","0 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2462 / 2","0.0431499 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.234925 / 2","0.0850072 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.2165 / 2","0.12428 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1915 / 2","0.159774 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.1607 / 2","0.190396 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.125 / 2","0.215252 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0855 / 2","0.233571 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0.0434 / 2","0.244781 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0 / 2","0.248559 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 2","0.244781 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 2","0.233571 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 2","0.215252 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 2","0.190396 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 2","0.159774 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 2","0.12428 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 2","0.0850072 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 2","0.0431499 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.25 / 2","0 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2462 / 2","-0.0431499 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.234925 / 2","-0.0850072 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.2165 / 2","-0.12428 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1915 / 2","-0.159774 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.1607 / 2","-0.190396 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.125 / 2","-0.215252 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0855 / 2","-0.233571 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"-0.0434 / 2","-0.244781 / 2"},1},{"ForwardVec",1,"WeaponAim",1,{"0 / 2","-0.248559 / 2"},1}};
						};
					};
					class TargetACQ
					{
						type = "line";
						width = 2;
						points[] = {{"ForwardVec",1,"target",{0,-0.06},1},{"ForwardVec",1,"target",{0,-0.055},1},{},{"ForwardVec",1,"target",{0,-0.05},1},{"ForwardVec",1,"target",{0,-0.045},1},{},{"ForwardVec",1,"target",{0,-0.04},1},{"ForwardVec",1,"target",{0,-0.035},1},{},{"ForwardVec",1,"target",{0,-0.03},1},{"ForwardVec",1,"target",{0,-0.025},1},{},{"ForwardVec",1,"target",{0,-0.02},1},{"ForwardVec",1,"target",{0,-0.015},1},{},{"ForwardVec",1,"target",{0,-0.01},1},{"ForwardVec",1,"target",{0,-0.005},1},{},{"ForwardVec",1,"target",{0,0},1},{"ForwardVec",1,"target",{0,0},1},{},{"ForwardVec",1,"target",{0,0.06},1},{"ForwardVec",1,"target",{0,0.055},1},{},{"ForwardVec",1,"target",{0,0.05},1},{"ForwardVec",1,"target",{0,0.045},1},{},{"ForwardVec",1,"target",{0,0.04},1},{"ForwardVec",1,"target",{0,0.035},1},{},{"ForwardVec",1,"target",{0,0.03},1},{"ForwardVec",1,"target",{0,0.025},1},{},{"ForwardVec",1,"target",{0,0.02},1},{"ForwardVec",1,"target",{0,0.015},1},{},{"ForwardVec",1,"target",{0,0.01},1},{"ForwardVec",1,"target",{0,0.005},1},{},{"ForwardVec",1,"target",{-0.06,0},1},{"ForwardVec",1,"target",{-0.055,0},1},{},{"ForwardVec",1,"target",{-0.05,0},1},{"ForwardVec",1,"target",{-0.045,0},1},{},{"ForwardVec",1,"target",{-0.04,0},1},{"ForwardVec",1,"target",{-0.035,0},1},{},{"ForwardVec",1,"target",{-0.03,0},1},{"ForwardVec",1,"target",{-0.025,0},1},{},{"ForwardVec",1,"target",{-0.02,0},1},{"ForwardVec",1,"target",{-0.015,0},1},{},{"ForwardVec",1,"target",{-0.01,0},1},{"ForwardVec",1,"target",{-0.005,0},1},{},{"ForwardVec",1,"target",{0.06,0},1},{"ForwardVec",1,"target",{0.055,0},1},{},{"ForwardVec",1,"target",{0.05,0},1},{"ForwardVec",1,"target",{0.045,0},1},{},{"ForwardVec",1,"target",{0.04,0},1},{"ForwardVec",1,"target",{0.035,0},1},{},{"ForwardVec",1,"target",{0.03,0},1},{"ForwardVec",1,"target",{0.025,0},1},{},{"ForwardVec",1,"target",{0.02,0},1},{"ForwardVec",1,"target",{0.015,0},1},{},{"ForwardVec",1,"target",{0.01,0},1},{"ForwardVec",1,"target",{0.005,0},1},{}};
					};
					class RadarTargets
					{
						type = "radar";
						pos0[] = {0.5,0.5};
						pos10[] = {0.753,0.753};
						width = 2.5;
						points[] = {{"ForwardVec",1,"RadarContact",{-0.01,-0.01},1},{"ForwardVec",1,"RadarContact",{0.01,-0.01},1},{"ForwardVec",1,"RadarContact",{0.01,0.01},1},{"ForwardVec",1,"RadarContact",{-0.01,0.01},1},{"ForwardVec",1,"RadarContact",{-0.01,-0.01},1}};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.035,0.035,0.1};
				helmetRight[] = {0.07,0,0};
				helmetDown[] = {0,-0.07,0};
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject = 0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
				memoryPointsGetInGunner = "pos copilot";
				memoryPointsGetInGunnerDir = "pos copilot dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				preciseGetInOut = 0;
				GunnerDoor = "";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "PedalL";
				gunnerRightLegAnimName = "PedalR";
				proxyIndex = 3;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				weapons[] = {"EricJ_CMFlareLauncher","kuy_IR_Jammer_Weapon"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","kuy_IR_Jammer_Magazine"};
				gunnerCompartments = "Compartment3";
				commanding = -3;
			};
			class MainTurret: MainTurret
			{
				CanEject = 1;
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunnerType = "B_helicrew_F";
				minElev = -50;
				maxElev = 2;
				initElev = "--15";
				minTurn = 15;
				maxTurn = 160;
				initTurn = 90;
				animationSourceHatch = "";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_beg";
				gunEnd = "muzzle_end";
				gunnerName = "$STR_A3_LEFT_GUNNER";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				memoryPointGunnerOptics = "Eye";
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				weapons[] = {"LMG_Minigun_Transport"};
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
				commanding = -2;
				primaryGunner = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex = 1;
				LODTurnedIn = 1000;
				LODTurnedOut = 1000;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerDoor = "";
				playerPosition = 3;
				soundAttenuationTurret = "HeliAttenuationGunner";
				disableSoundAttenuation = 0;
			};
			class RightDoorGun: MainTurret
			{
				minTurn = -160;
				maxTurn = -15;
				initTurn = -90;
				body = "mainTurret2";
				gun = "mainGun2";
				animationSourceBody = "mainTurret2";
				animationSourceGun = "mainGun2";
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerName = "$STR_A3_RIGHT_GUNNER";
				weapons[] = {"LMG_Minigun_Transport2"};
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};
				commanding = -3;
				gunBeg = "muzzle_beg_2";
				gunEnd = "muzzle_end_2";
				primaryGunner = 0;
				memoryPointGun = "";
				memoryPointGunnerOptics = "Eye2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner2";
				memoryPointsGetInGunnerDir = "pos gunner2 dir";
				gunnerDoor = "";
				turretCanSee = "1 + 2 + 4 + 8 + 16";
			};
		};
	};
	class B_LSV_01_unarmed_F;
	class B_LSV_01_Repair_F: B_LSV_01_unarmed_F
	{
		scope = 2;
		ScopeCurator = 2;
		displayname = "Prowler (Repair)";
		transportRepair = 200000000;
		supplyRadius = 6;
		vehicleClass = "Support";
		faction = "TF160";
		Side = 1;
		ForceInGarage = 1;
		author = "EricJ";
	};
	class B_LSV_01_Medic_F: B_LSV_01_unarmed_F
	{
		scope = 2;
		ScopeCurator = 2;
		displayname = "Prowler (Medevac)";
		attendant = 1;
		supplyRadius = 6;
		vehicleClass = "Support";
		faction = "TF160";
		Side = 1;
		ForceInGarage = 1;
		author = "EricJ";
	};
};
class cfgMods
{
	author = "EricJ";
	timepacked = "1699000307";
};
