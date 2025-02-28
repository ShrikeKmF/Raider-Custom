class Heli_Attack_01_base_F;
class RHS_AH1Z_base : Heli_Attack_01_base_F
{
	class RHS_Effects_Helicopter_Hull_Destruction{};
};
class RHS_AH1Z: RHS_AH1Z_base
{
	side = 1;
	scope = 2;
	accuracy = 5;
	cost = 10000000;
	model = "\rhsusf\addons\rhsusf_a2port_air2\AH1Z\AH1Z";
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH1Z.paa";
	armor = 50;
	driverCanEject = 0;
	damageResistance = 0.00555;
	laserScanner = 1;
	MainRotorSpeed = -1;
	backRotorSpeed = 3;
	driverRightHandAnimName = "stick_pilot";
	driverLeftHandAnimName = "lever_pilot";
	weapons[] = {"rhs_weap_mastersafe"};
	magazines[] = {};
	availableForSupportTypes[] = {"CAS_Heli"};
	attenuationEffectType = "HeliAttenuation";
	soundDammage[] = {"rhsusf\addons\rhsusf_a2port_air\data\sounds\int-alarm_loop",0.56234133,1};
	soundEngineOnExt[] = {"rhsusf\addons\rhsusf_a2port_air2\sounds\UH1Y\ext\ext-motor-start",1.77828,1,700};
	soundEngineOffExt[] = {"rhsusf\addons\rhsusf_a2port_air2\sounds\UH1Y\ext\ext-motor-stop",1.77828,1,700};
	class Sounds
	{
		class EngineExt
		{
			sound[] = {"rhsusf\addons\rhsusf_a2port_air2\sounds\ah1\ext\ext-ah1z-engine-01",3.2622776,1,800};
			frequency = "rotorSpeed";
			volume = "camPos*((rotorSpeed-0.72)*4)";
		};
		class EngineInt
		{
			sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\ah-1\ah-1_int_engine",1.4,1};
			frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
			volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
		};
		class DistanceSound
		{
			sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\ah-1\ah-1_distant",2.31,1,3200};
			frequency = "rotorSpeed";
			volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
		};
	};
	class SoundsExt
	{
		class SoundEvents{};
		class Sounds: Sounds
		{
			class EngineExt
			{
				sound[] = {"rhsusf\addons\rhsusf_a2port_air2\sounds\ah1\ext\ext-ah1z-engine-01",2.7622776,1,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class EngineInt
			{
				sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\ah-1\ah-1_int_engine",1.4,1};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class DistanceSound
			{
				sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\ah-1\ah-1_distant",2.31,1,3200};
				frequency = "rotorSpeed";
				volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
			};
		};
	};
	picture = "\rhsusf\addons\rhsusf_a2port_air\data\ico\rhs_ah1z_pic_ca.paa";
	icon = "\rhsusf\addons\rhsusf_a2port_air2\data\mapico\icomap_ah1z_ca.paa";
	mapSize = 15.5;
	maxSpeed = 393;
	displayName = "AH-1Z";
	faction = "rhs_faction_usmc_d";
	vehicleClass = "rhs_vehclass_helicopter";
	crew = "rhsusf_usmc_marpat_d_helipilot";
	typicalCargo[] = {"rhsusf_usmc_marpat_d_helicrew"};
	author = "$STR_RHSUSF_AUTHOR_FULL";
	driverAction = "RHS_AH1Z_pilot";
	driverInAction = "RHS_AH1Z_pilot";
	getInAction = "pilot_Heli_Light_02_Enter";
	getOutAction = "pilot_Heli_Light_02_Exit";
	driverDoor = "doorR";
	destrType = DestructWreck;
	memoryPointLMissile = "Rocket_1";
	memoryPointRMissile = "Rocket_2";
	selectionFireAnim = "zasleh";
	class Exhausts
	{
		class Exhaust1
		{
			position = "exhaust1";
			direction = "exhaust1_dir";
			effect = "ExhaustsEffectHeliCom";
		};
		class Exhaust2
		{
			position = "exhaust2";
			direction = "exhaust2_dir";
			effect = "ExhaustsEffectHeliCom";
		};
	};
	class MarkerLights
	{
		class WhiteStill
		{
			name = "bily pozicni";
			color[] = {1,1,1};
			ambient[] = {0.1,0.1,0.1};
			blinking = 1;
			intensity = 75;
			blinkingPattern[] = {0.1,0.9};
			blinkingPatternGuarantee = 0;
			drawLightSize = 0.2;
			drawLightCenterSize = 0.04;
		};
		class RedStill
		{
			name = "cerveny pozicni";
			color[] = {0.8,0,0};
			ambient[] = {0.08,0,0};
			intensity = 75;
			drawLight = 1;
			drawLightSize = 0.15;
			drawLightCenterSize = 0.04;
			activeLight = 0;
			blinking = 0;
			dayLight = 0;
			useFlare = 0;
		};
		class GreenStill: RedStill
		{
			name = "zeleny pozicni";
			color[] = {0,0.8,0};
			ambient[] = {0,0.08,0};
		};
		class RedBlinking
		{
			name = "bily pozicni blik";
			color[] = {0.9,0.15,0.1};
			ambient[] = {0.09,0.015,0.01};
			intensity = 75;
			blinking = 1;
			blinkingPattern[] = {0.1,0.9};
			blinkingPatternGuarantee = 0;
			drawLightSize = 0.2;
			drawLightCenterSize = 0.04;
		};
		class WhiteBlinking: RedBlinking
		{
			name = "cerveny pozicni blik";
			color[] = {0.9,0.15,0.1};
			ambient[] = {0.09,0.015,0.01};
			blinkingPattern[] = {0.2,1.3};
			drawLightSize = 0.25;
			drawLightCenterSize = 0.08;
		};
	};
	class Reflectors
	{
		class Middle
		{
			color[] = {7000,7500,10000,1};
			ambient[] = {100,100,100,0};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 1;
			innerAngle = 20;
			outerAngle = 60;
			coneFadeCoef = 10;
			intensity = 50;
			useFlare = 1;
			dayLight = 0;
			FlareSize = 6;
			class Attenuation
			{
				start = 1;
				constant = 0;
				linear = 0;
				quadratic = 4;
			};
		};
	};
	class TransportMagazines
	{
		class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
		{
			magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
			count = 8;
		};
		class _xx_rhs_mag_m18_green
		{
			magazine = "rhs_mag_m18_green";
			count = 2;
		};
		class _xx_rhs_mag_m18_yellow
		{
			magazine = "rhs_mag_m18_yellow";
			count = 2;
		};
		class _xx_rhs_mag_m18_red
		{
			magazine = "rhs_mag_m18_red";
			count = 2;
		};
		class _xx_rhs_mag_m18_purple
		{
			magazine = "rhs_mag_m18_purple";
			count = 2;
		};
		class _xx_rhs_mag_an_m8hc
		{
			magazine = "rhs_mag_an_m8hc";
			count = 2;
		};
	};
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 4;
		};
	};
	class TransportWeapons
	{
		class _xx_rhs_weap_m4_carryhandle
		{
			weapon = "rhs_weap_m4_carryhandle";
			count = 2;
		};
	};
	class AnimationSources
	{
		class HitAvionics
		{
			source = "hit";
			hitpoint = "HitAvionics";
			raw = 1;
		};
		class HitFuel
		{
			source = "hit";
			hitpoint = "HitFuel";
			raw = 1;
		};
		class DoorL
		{
			source = "door";
			animPeriod = 0.8;
			initPhase = 0;
			sound = "MetalDoorsSound";
			soundPosition = "doorL_axis";
		};
		class DoorR: DoorL
		{
			soundPosition = "doorR_axis";
		};
		class HitGlass1
		{
			source = "Hit";
			hitpoint = "HitGlass1";
			raw = 1;
		};
		class HitGlass2: HitGlass1
		{
			hitpoint = "HitGlass2";
		};
		class HitGlass3: HitGlass1
		{
			hitpoint = "HitGlass3";
		};
		class HitGlass4: HitGlass1
		{
			hitpoint = "HitGlass4";
		};
		class HitGlass5: HitGlass1
		{
			hitpoint = "HitGlass4";
		};
		class 20mmBarrels
		{
			source = "revolving";
			weapon = "rhs_weap_M197";
		};
		class muzzle_rot_hmg
		{
			weapon = "rhs_weap_M197";
			source = "ammorandom";
		};
		class Hide
		{
			source = "user";
			animPeriod = 0;
			initPhase = 0;
		};
		class mainRotor_folded
		{
			source = "user";
			animPeriod = 0.001;
			initPhase = 0;
			mass = 1;
			displayName = "fold main rotor";
			onPhaseChanged = "_this call rhs_fnc_foldHeli";
		};
		class hit_pylon_1_source
		{
			source = "Hit";
			hitpoint = "HitPylon1";
		};
		class hit_pylon_2_source
		{
			source = "Hit";
			hitpoint = "HitPylon2";
		};
		class hit_pylon_3_source
		{
			source = "Hit";
			hitpoint = "HitPylon3";
		};
		class hit_pylon_4_source
		{
			source = "Hit";
			hitpoint = "HitPylon4";
		};
		class hit_pylon_5_source
		{
			source = "Hit";
			hitpoint = "HitPylon5";
		};
		class hit_pylon_6_source
		{
			source = "Hit";
			hitpoint = "HitPylon6";
		};
	};

    armor = 80;

	class HitPoints: HitPoints
	{
		class HitGlass1 { armor = 10; radius = 0.4; explosionShielding = 6; };
		class HitGlass2 { armor = 10; radius = 0.4; explosionShielding = 6; };
		class HitGlass3 { armor = 10; radius = 0.4; explosionShielding = 6; };
		class HitGlass4 { armor = 10; radius = 0.4; explosionShielding = 6; };
		class HitGlass5 { armor = 10; radius = 0.4; explosionShielding = 6; };
		class HitGlass6 { armor = 10; radius = 0.4; explosionShielding = 6; };
	};

	dammageHalf[] = {"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_monitor_glass_ca.paa","\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_monitor_glass_destr_co.paa"};
	dammageFull[] = {"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_monitor_glass_ca.paa","\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_monitor_glass_destr_co.paa"};
	class Damage
	{
		tex[] = {};
		mat[] = {"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_body.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_body_damage.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_body_destruct.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_glass.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_glass_damage.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_glass_damage.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_glass_in.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_glass_in_damage.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_glass_in_damage.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_cockpit.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_cockpit.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_cockpit_destruct.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines_damage.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines_destruct.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_monitors.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_monitors.rvmat","rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_monitors_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
	};
	enableManualFire = 1;
	sensorPosition = "gunnerview";
	class Components: Components
	{
		class TransportPylonsComponent
		{
			UIPicture = "\rhsusf\addons\rhsusf_a2port_air2\data\loadouts\RHS_AH1_EDEN_CA.paa";
			class pylons
			{
				class pylonTip1
				{
					hardpoints[] = {"RHS_HP_AIM9_HELI_USMC"};
					priority = 3;
					attachment = "rhs_mag_Sidewinder_heli_2";
					maxweight = 1200;
					UIposition[] = {0.625,0.25};
					bay = -1;
					hitpoint = "HitPylon1";
				};
				class pylon2
				{
					hardpoints[] = {"RHS_HP_HELLFIRE_RACK","RHS_HP_FFAR_USMC"};
					priority = 2;
					attachment = "rhs_mag_AGM114K_4";
					maxweight = 1200;
					UIposition[] = {0.625,0.39};
					bay = -1;
					turret[] = {0};
					hitpoint = "HitPylon2";
				};
				class pylon3: pylon2
				{
					UIposition[] = {0.565,0.44};
					priority = 1;
					attachment = "rhs_mag_M151_19_green";
					turret[] = {};
					hitpoint = "HitPylon3";
				};
				class pylon4: pylon3
				{
					UIposition[] = {0.1,0.44};
					mirroredMissilePos = 3;
					turret[] = {};
					hitpoint = "HitPylon4";
				};
				class pylon5: pylon2
				{
					UIposition[] = {0.04,0.39};
					mirroredMissilePos = 2;
					turret[] = {0};
					hitpoint = "HitPylon5";
				};
				class pylonTip6: pylonTip1
				{
					UIposition[] = {0.04,0.25};
					mirroredMissilePos = 1;
					hitpoint = "HitPylon6";
				};
				class cmDispenser
				{
					hardpoints[] = {"RHSUSF_cm_ANALE39","RHSUSF_cm_ANALE39_x2","RHSUSF_cm_ANALE39_x4"};
					priority = 1;
					attachment = "rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4";
					maxweight = 800;
					UIposition[] = {0.33,0.0};
				};
			};
			class Presets
			{
				class MR
				{
					attachment[] = {"rhs_mag_Sidewinder_heli_2","rhs_mag_AGM114K_4","rhs_mag_M151_19_green","rhs_mag_M151_19_green","rhs_mag_AGM114K_4","rhs_mag_Sidewinder_heli_2","rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"};
					displayname = "Multi-Role";
				};
				class CS
				{
					attachment[] = {"rhs_mag_Sidewinder_heli_2","rhs_mag_AGM114K_4","rhs_mag_AGM114K_4","rhs_mag_AGM114K_4","rhs_mag_AGM114K_4","rhs_mag_Sidewinder_heli_2","rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"};
					displayname = "Close Support";
				};
				class GS
				{
					attachment[] = {"rhs_mag_Sidewinder_heli_2","rhs_mag_M151_19_green","rhs_mag_M151_19_green","rhs_mag_M151_19_green","rhs_mag_M151_19_green","rhs_mag_Sidewinder_heli_2","rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"};
					displayname = "Ground Suppression";
				};
			};
		};
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: SensorTemplateIR
				{
					class AirTarget
					{
						minRange = 500;
						maxRange = 7000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget
					{
						minRange = 500;
						maxRange = 7000;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					animDirection = "Sensors";
					angleRangeHorizontal = 46;
					angleRangeVertical = 36;
					typeRecognitionDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					maxFogSeeThrough = 0.95;
					minTrackableSpeed = 0;
					maxTrackableSpeed = 695;
				};
				class VisualSensorComponent: SensorTemplateVisual
				{
					class AirTarget
					{
						minRange = 500;
						maxRange = 4000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget
					{
						minRange = 500;
						maxRange = 4000;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					maxTrackableSpeed = 70;
					animDirection = "Sensors";
					angleRangeHorizontal = 46;
					angleRangeVertical = 36;
				};
				class LaserSensorComponent: SensorTemplateLaser{};
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
			};
		};
		class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
		{
			class Components: components
			{
				class EmptyDisplay
				{
					componentType = "EmptyDisplayComponent";
				};
				class MinimapDisplay
				{
					componentType = "MinimapDisplayComponent";
					resource = "RscCustomInfoMiniMap";
				};
				class CrewDisplay
				{
					componentType = "CrewDisplayComponent";
					resource = "RscCustomInfoCrew";
				};
				class VehiclePrimaryGunnerDisplay
				{
					componentType = "TransportFeedDisplayComponent";
					source = "PrimaryGunner";
				};
				class SensorDisplay
				{
					componentType = "SensorsDisplayComponent";
					range[] = {8000,16000,25000,4000};
					resource = "RscCustomInfoSensors";
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
		{
			defaultDisplay = "SensorDisplay";
			class Components: components
			{
				class EmptyDisplay
				{
					componentType = "EmptyDisplayComponent";
				};
				class MinimapDisplay
				{
					componentType = "MinimapDisplayComponent";
					resource = "RscCustomInfoMiniMap";
				};
				class CrewDisplay
				{
					componentType = "CrewDisplayComponent";
					resource = "RscCustomInfoCrew";
				};
				class VehiclePrimaryGunnerDisplay
				{
					componentType = "TransportFeedDisplayComponent";
					source = "PrimaryGunner";
				};
				class SensorDisplay
				{
					componentType = "SensorsDisplayComponent";
					range[] = {8000,16000,25000,4000};
					resource = "RscCustomInfoSensors";
				};
			};
		};
		class TransportCountermeasuresComponent{};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			showHMD = 1;
			enableManualFire = 1;
			isCopilot = 1;
			gunnerAction = "rhs_AH1Z_Gunner";
			gunnerInAction = "rhs_AH1Z_Gunner";
			gunnerRightHandAnimName = "stick_copilot";
			gunnerLeftHandAnimName = "lever_copilot";
			gunnerGetInAction = "Heli_Attack_01_Pilot_enter";
			gunnerGetOutAction = "Heli_Attack_01_Pilot_exit";
			minElev = -60;
			maxElev = 10;
			initElev = 0;
			minTurn = -70;
			maxTurn = 70;
			initTurn = 0;
			stabilizedInAxes = 3;
			weapons[] = {"rhs_weap_mastersafe","Laserdesignator_mounted","rhs_weap_M197"};
			magazines[] = {{"rhs_mag_M197_750", 2}, "Laserbatteries"};
			class MFD
			{
				class HMD
				{
					topLeft = "HUD_top_left";
					topRight = "HUD_top_right";
					bottomLeft = "HUD_bottom_left";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 1;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {-2};
					class material
					{
						ambient[] = {1,1,1,1};
						diffuse[] = {1,1,1,1};
						emissive[] = {400,200,200,1};
					};
					class Bones
					{
						class HUDCenter
						{
							type = "fixed";
							pos[] = {0.5,0.5};
						};
						class WeaponAim
						{
							type = "vector";
							source = "weapon";
							pos0[] = {0.5,0.5};
							pos10[] = {0.734,0.73};
						};
						class WeaponAimRelative: WeaponAim
						{
							source = "weapontoview";
						};
						class VelocityVector
						{
							type = "vector";
							source = "velocityToView";
							pos0[] = {0.5,0.5};
							pos10[] = {0.734,0.73};
						};
						class ForwardVector
						{
							type = "vector";
							source = "forward";
							pos0[] = {0,0};
							pos10[] = {0.234,0.23};
						};
						class HorizonVector
						{
							type = "horizontoview";
							pos0[] = {0.5,0.5};
							pos10[] = {0.830923,0.825266};
							angle = 0;
						};
						class GunnerAim
						{
							type = "vector";
							source = "turret";
							pos0[] = {0,-2.0};
							pos10[] = {0.0068,-0.01};
							projection = 0;
						};
						class VerticalSpeedBone
						{
							type = "linear";
							source = "vspeed";
							sourceScale = 1;
							min = -10;
							max = 10;
							minPos[] = {0,-0.32};
							maxPos[] = {0,0.32};
						};
						class HorizonBankRot
						{
							type = "linear";
							source = "gmeterXgrav";
							min = -1;
							max = 1;
							minPos[] = {0.41,0.84};
							maxPos[] = {0.59,0.84};
							aspectRatio = 1;
						};
						class ImpactPoint
						{
							type = "vector";
							source = "ImpactPointToView";
							pos0[] = {0.5,0.5};
							pos10[] = {0.734,0.73};
						};
						class Target
						{
							source = "targettoview";
							type = "vector";
							pos0[] = {0.5,0.5};
							pos10[] = {0.734,0.73};
						};
						class Limit0109
						{
							type = "limit";
							limits[] = {0.1,0.1,0.9,0.9};
						};
						class LimitWaypoint
						{
							type = "limit";
							limits[] = {0.2,0.1,0.8,0.1};
						};
						class WPPoint
						{
							type = "vector";
							source = "WPPoint";
							pos0[] = {0.5,0.5};
							pos10[] = {0.734,0.73};
						};
						class WPPointToView: WPPoint
						{
							source = "WPPointToView";
						};
						class Level0
						{
							pos0[] = {0.5,0.5};
							pos10[] = {0.830923,0.825266};
							type = "horizontoview";
							angle = 0;
						};
						class LevelP05: Level0
						{
							angle = 5;
						};
						class LevelM05: Level0
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
						class LevelP60: Level0
						{
							angle = 60;
						};
						class LevelM60: Level0
						{
							angle = -60;
						};
						class LevelP70: Level0
						{
							angle = 70;
						};
						class LevelM70: Level0
						{
							angle = -70;
						};
						class LevelP80: Level0
						{
							angle = 80;
						};
						class LevelM80: Level0
						{
							angle = -80;
						};
						class LevelP90: Level0
						{
							angle = 90;
						};
						class LevelM90: Level0
						{
							angle = -90;
						};
						class RadarHeight
						{
							type = "linear";
							source = "altitudeAGL";
							sourceScale = 1;
							sourceOffset = -2;
							min = 0;
							max = 61;
							minPos[] = {0.903,0.18};
							maxPos[] = {0.903,0.82};
						};
						class HorizonBankRotFull
						{
							type = "rotational";
							source = "horizonBank";
							center[] = {0,0};
							min = -3.1416;
							max = 3.1416;
							minAngle = -180;
							maxAngle = 180;
							aspectRatio = 1;
						};
						class HeadTrackerX
						{
							type = "linear";
							source = "cameraHeadingDiffX";
							sourceScale = 1;
							min = -180;
							max = 180;
							minPos[] = {1,0};
							maxPos[] = {0,0};
						};
						class HeadTrackerY: HeadTrackerX
						{
							source = "cameraHeadingDiffY";
							minPos[] = {0,0};
							maxPos[] = {0,1};
						};
					};
					class Draw
					{
						alpha = "user3";
						color[] = {"user0","user1","user2"};
						condition = "on";
						class Static
						{
							type = "line";
							width = 4.0;
							points[] = {{{0.5,0.11},1},{{0.5,0.14},1},{},{{0.4,0.86},1},{{0.4,0.94},1},{{0.6,0.94},1},{{0.6,0.86},1},{{0.4,0.86},1},{},{{0.4,0.885},1},{{0.408,0.885},1},{},{{0.6,0.885},1},{{0.592,0.885},1},{},{{0.5,0.86},1},{{0.5,0.868},1},{},{{0.5,0.94},1},{{0.5,0.932},1},{},{{0.52,0.86},1},{{0.52,0.82},1},{},{{0.48,0.86},1},{{0.48,0.82},1},{}};
						};
						class HeadingHeadNumber
						{
							type = "text";
							source = "heading";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.5,0.042},1};
							right[] = {{0.54,0.042},1};
							down[] = {{0.5,0.082},1};
						};
						class HeadingScaleRight
						{
							clipTL[] = {0.55,0.05};
							clipBR[] = {0.83,0.11};
							class lines
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								width = 4.0;
								NeverEatSeaWeed = 1;
								top = 0.5;
								center = 0.5;
								bottom = 0.82;
								lineXleft = 0.11;
								lineYright = 0.1;
								lineXleftMajor = 0.11;
								lineYrightMajor = 0.09;
								majorLineEach = 3;
								numberEach = 3;
								step = 1;
								stepSize = 0.0277778;
								align = "center";
								scale = 1;
								pos[] = {0.496,0.05};
								right[] = {0.526,0.05};
								down[] = {0.496,0.08};
							};
						};
						class HeadingScaleMidle
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 0.1;
							width = 4.0;
							NeverEatSeaWeed = 1;
							top = 0.45;
							center = 0.5;
							bottom = 0.55;
							lineXleft = 0.11;
							lineYright = 0.1;
							lineXleftMajor = 0.11;
							lineYrightMajor = 0.1;
							majorLineEach = 2;
							step = 1;
							stepSize = 0.0277778;
							align = "center";
							scale = 1;
							numberEach = 0;
							pos[] = {0.47,0.05};
							right[] = {0.5,0.05};
							down[] = {0.45,0.09};
						};
						class HeadingScaleLeft
						{
							clipTL[] = {0.18,0.05};
							clipBR[] = {0.45,0.11};
							class lines
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								width = 4.0;
								NeverEatSeaWeed = 1;
								top = 0.17;
								center = 0.5;
								bottom = 0.55;
								lineXleft = 0.11;
								lineYright = 0.1;
								lineXleftMajor = 0.11;
								lineYrightMajor = 0.09;
								majorLineEach = 3;
								numberEach = 3;
								step = 1;
								stepSize = 0.0277778;
								align = "center";
								scale = 1;
								pos[] = {0.166,0.05};
								right[] = {0.196,0.05};
								down[] = {0.166,0.08};
							};
						};
						class HorizonBankRot
						{
							type = "polygon";
							width = 4.0;
							points[] = {{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{0.00260472,-0.0145196},1},{"HorizonBankRot",{0.0051303,-0.0138544},1},{"HorizonBankRot",{0.0075,-0.0127683},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{0.0075,-0.0127683},1},{"HorizonBankRot",{0.00964181,-0.0112942},1},{"HorizonBankRot",{0.0114907,-0.009477},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{0.0114907,-0.009477},1},{"HorizonBankRot",{0.0129904,-0.00737179},1},{"HorizonBankRot",{0.0140954,-0.0050426},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{0.0140954,-0.0050426},1},{"HorizonBankRot",{0.0147721,-0.0025602},1},{"HorizonBankRot",{0.015,6.44463e-10},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{0.015,6.44463e-10},1},{"HorizonBankRot",{0.0147721,0.0025602},1},{"HorizonBankRot",{0.0140954,0.0050426},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{0.0140954,0.0050426},1},{"HorizonBankRot",{0.0129904,0.0073718},1},{"HorizonBankRot",{0.0114907,0.009477},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{0.0114907,0.009477},1},{"HorizonBankRot",{0.00964181,0.0112942},1},{"HorizonBankRot",{0.0075,0.0127683},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{0.0075,0.0127683},1},{"HorizonBankRot",{0.0051303,0.0138544},1},{"HorizonBankRot",{0.00260472,0.0145196},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{0.00260472,0.0145196},1},{"HorizonBankRot",{-1.31134e-09,0.0147436},1},{"HorizonBankRot",{-0.00260473,0.0145196},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{-0.00260473,0.0145196},1},{"HorizonBankRot",{-0.0051303,0.0138544},1},{"HorizonBankRot",{-0.0075,0.0127683},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{-0.0075,0.0127683},1},{"HorizonBankRot",{-0.00964181,0.0112942},1},{"HorizonBankRot",{-0.0114907,0.009477},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{-0.0114907,0.009477},1},{"HorizonBankRot",{-0.0129904,0.00737179},1},{"HorizonBankRot",{-0.0140954,0.0050426},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{-0.0140954,0.0050426},1},{"HorizonBankRot",{-0.0147721,0.0025602},1},{"HorizonBankRot",{-0.015,-1.75816e-10},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{-0.015,-1.75816e-10},1},{"HorizonBankRot",{-0.0147721,-0.0025602},1},{"HorizonBankRot",{-0.0140954,-0.0050426},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{-0.0140954,-0.0050426},1},{"HorizonBankRot",{-0.0129904,-0.0073718},1},{"HorizonBankRot",{-0.0114907,-0.009477},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{-0.0114907,-0.009477},1},{"HorizonBankRot",{-0.00964181,-0.0112942},1},{"HorizonBankRot",{-0.0075,-0.0127683},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{-0.0075,-0.0127683},1},{"HorizonBankRot",{-0.00513031,-0.0138544},1},{"HorizonBankRot",{-0.00260472,-0.0145196},1}},{{"HorizonBankRot",{0,0},1},{"HorizonBankRot",{-0.00260472,-0.0145196},1},{"HorizonBankRot",{2.62268e-09,-0.0147436},1},{"HorizonBankRot",{0.00260472,-0.0145196},1}}};
						};
						class CollectiveGroup
						{
							condition = "simulRTD";
							class CollectiveText
							{
								type = "text";
								source = "static";
								text = "%";
								align = "right";
								scale = 1;
								pos[] = {{0.09,0.2},1};
								right[] = {{0.12,0.2},1};
								down[] = {{0.09,0.23},1};
							};
							class CollectiveNumber
							{
								type = "text";
								source = "rtdCollective";
								sourceScale = 100;
								align = "left";
								scale = 1;
								pos[] = {{0.09,0.2},1};
								right[] = {{0.12,0.2},1};
								down[] = {{0.09,0.23},1};
							};
						};
						class FlightMode
						{
							condition = "1-(mgun+missile+aamissile+atmissile+rocket+bomb)";
							class SpeedNumber
							{
								type = "text";
								source = "speed";
								sourceScale = 1.9438444;
								align = "right";
								scale = 1;
								pos[] = {{0.16,0.48},1};
								right[] = {{0.2,0.48},1};
								down[] = {{0.16,0.52},1};
							};
							class AltNumber
							{
								type = "text";
								source = "altitudeAGL";
								sourceScale = 3.28084;
								sourceOffset = -6.88976;
								align = "left";
								scale = 1;
								pos[] = {{0.81,0.48},1};
								right[] = {{0.85,0.48},1};
								down[] = {{0.81,0.52},1};
							};
							class HeadTracker
							{
								condition = "(cameraHeadingDiff>=8)+(cameraHeadingDiff<=-8)";
								class Shape
								{
									type = "line";
									width = 4.0;
									points[] = {{"HeadTrackerX",1,"HeadTrackerY",1,{-0.04,-0.02},1},{"HeadTrackerX",1,"HeadTrackerY",1,{-0.06,0.0},1},{"HeadTrackerX",1,"HeadTrackerY",1,{-0.04,0.02},1},{},{"HeadTrackerX",1,"HeadTrackerY",1,{0.04,-0.02},1},{"HeadTrackerX",1,"HeadTrackerY",1,{0.06,0.0},1},{"HeadTrackerX",1,"HeadTrackerY",1,{0.04,0.02},1},{},{"HeadTrackerX",1,"HeadTrackerY",1,{-0.02,-0.04},1},{"HeadTrackerX",1,"HeadTrackerY",1,{0.0,-0.06},1},{"HeadTrackerX",1,"HeadTrackerY",1,{0.02,-0.04},1},{},{"HeadTrackerX",1,"HeadTrackerY",1,{-0.02,0.04},1},{"HeadTrackerX",1,"HeadTrackerY",1,{0.0,0.06},1},{"HeadTrackerX",1,"HeadTrackerY",1,{0.02,0.04},1}};
								};
							};
							class LOS_Reticle
							{
								type = "line";
								width = 6.0;
								points[] = {{"HUDCenter",1,{"-0.03*1.3",0.0},1},{"HUDCenter",1,{"-0.01*1.3",0.0},1},{},{"HUDCenter",1,{"0.01*1.3",0.0},1},{"HUDCenter",1,{"0.03*1.3",0.0},1},{},{"HUDCenter",1,{0.0,"-0.01*1.3"},1},{"HUDCenter",1,{0.0,"-0.03*1.3"},1},{},{"HUDCenter",1,{0.0,"0.01*1.3"},1},{"HUDCenter",1,{0.0,"0.03*1.3"},1},{}};
							};
							class VerticalSpeedScale
							{
								type = "line";
								width = 4.0;
								points[] = {{"WeaponAimRelative",1,{-0.03,0.0},1},{"WeaponAimRelative",1,{-0.02,0.0},1},{},{"WeaponAimRelative",1,{0.02,0.0},1},{"WeaponAimRelative",1,{0.03,0.0},1},{},{"WeaponAimRelative",1,{0.0,-0.02},1},{"WeaponAimRelative",1,{0.0,-0.03},1},{},{"WeaponAimRelative",1,{0.0,0.02},1},{"WeaponAimRelative",1,{0.0,0.03},1},{},{{0.915,0.18},1},{{0.935,0.18},1},{},{{0.87,0.18},1},{{0.89,0.18},1},{},{{0.915,0.34},1},{{0.935,0.34},1},{},{{0.87,0.34},1},{{0.89,0.34},1},{},{{0.875,0.372},1},{{0.885,0.372},1},{},{{0.875,0.404},1},{{0.885,0.404},1},{},{{0.875,0.436},1},{{0.885,0.436},1},{},{{0.875,0.468},1},{{0.885,0.468},1},{},{{0.87,0.5},1},{{0.89,0.5},1},{},{{0.915,0.5},1},{{0.935,0.5},1},{},{{0.915,0.66},1},{{0.935,0.66},1},{},{{0.87,0.66},1},{{0.89,0.66},1},{},{{0.875,0.628},1},{{0.885,0.628},1},{},{{0.875,0.596},1},{{0.885,0.596},1},{},{{0.875,0.564},1},{{0.885,0.564},1},{},{{0.875,0.532},1},{{0.885,0.532},1},{},{{0.92,0.692},1},{{0.93,0.692},1},{},{{0.92,0.724},1},{{0.93,0.724},1},{},{{0.92,0.756},1},{{0.93,0.756},1},{},{{0.92,0.788},1},{{0.93,0.788},1},{},{{0.915,0.82},1},{{0.935,0.82},1},{},{{0.87,0.82},1},{{0.89,0.82},1},{}};
							};
							class VerticalSpeedArrow
							{
								type = "polygon";
								points[] = {{{"VerticalSpeedBone",{0.85,0.488},1},{"VerticalSpeedBone",{0.87,0.5},1},{"VerticalSpeedBone",{0.85,0.512},1}}};
							};
							class RadarAltitude
							{
								condition = "62-altitudeAGL";
								class RadarHeight
								{
									type = "line";
									width = 15;
									points[] = {{{0.903,0.82},1},{"RadarHeight",{0,0.0},1},{}};
								};
							};
							class HorizonLine
							{
								condition = "1-autohover";
								clipTL[] = {0.2,0.145};
								clipBR[] = {0.8,0.855};
								class HorizonLineDraw
								{
									type = "line";
									width = 4.0;
									points[] = {{"HorizonVector",{-0.225,0.0},1},{"HorizonVector",{-0.1875,0.0},1},{},{"HorizonVector",{-0.15,0.0},1},{"HorizonVector",{-0.1125,0.0},1},{},{"HorizonVector",{-0.075,0.0},1},{"HorizonVector",{-0.0375,0.0},1},{},{"HorizonVector",{0.0375,0.0},1},{"HorizonVector",{0.075,0.0},1},{},{"HorizonVector",{0.1125,0.0},1},{"HorizonVector",{0.15,0.0},1},{},{"HorizonVector",{0.1875,0.0},1},{"HorizonVector",{0.225,0.0},1}};
								};
							};
							class HoverMode
							{
								condition = "autohover";
								class HoverText
								{
									type = "text";
									source = "static";
									text = "HOVER";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.005,0.075},1};
									right[] = {{0.035,0.075},1};
									down[] = {{0.005,0.105},1};
								};
							};
							class CruiseMode
							{
								condition = "((altitudeASL-27) min 1) - autohover";
								class AltNumberASL
								{
									type = "text";
									source = "altitudeASL";
									sourceScale = 3.28084;
									align = "left";
									scale = 1;
									pos[] = {{0.81,0.16},1};
									right[] = {{0.85,0.16},1};
									down[] = {{0.81,0.2},1};
								};
								class HorizontalLine
								{
									clipTL[] = {0.2,0.15};
									clipBR[] = {0.8,0.8};
									class Level0
									{
										type = "line";
										source = "Level0";
										width = 3;
										points[] = {{"Level0",{-0.27,0},1},{"Level0",{-0.0675,0},1},{},{"Level0",{0.0675,0},1},{"Level0",{0.27,0},1}};
									};
									class LevelM10: Level0
									{
										type = "line";
										width = 3;
										points[] = {{"LevelM10",{-0.166,-0.02},1},{"LevelM10",{-0.166,0},1},{"LevelM10",{-0.138,0},1},{},{"LevelM10",{-0.124,0},1},{"LevelM10",{-0.096,0},1},{},{"LevelM10",{-0.082,0},1},{"LevelM10",{-0.054,0},1},{},{},{"LevelM10",{0.166,-0.02},1},{"LevelM10",{0.166,0},1},{"LevelM10",{0.138,0},1},{},{"LevelM10",{0.124,0},1},{"LevelM10",{0.096,0},1},{},{"LevelM10",{0.082,0},1},{"LevelM10",{0.054,0},1},{}};
									};
									class VALM_1_10
									{
										type = "text";
										source = "static";
										text = 10;
										align = "left";
										scale = 1;
										sourceScale = 1;
										sourceLength = 2;
										pos[] = {"LevelM10",{-0.18,-0.032},1};
										right[] = {"LevelM10",{-0.14,-0.032},1};
										down[] = {"LevelM10",{-0.18,0.016},1};
									};
									class VALM_1_10_R
									{
										type = "text";
										source = "static";
										text = 10;
										align = "right";
										scale = 1;
										sourceScale = 1;
										sourceLength = 2;
										pos[] = {"LevelM10",{0.18,-0.032},1};
										right[] = {"LevelM10",{0.22,-0.032},1};
										down[] = {"LevelM10",{0.18,0.016},1};
									};
									class LevelP10: Level0
									{
										type = "line";
										width = 3;
										points[] = {{"LevelP10",{-0.166,0.02},1},{"LevelP10",{-0.166,0},1},{"LevelP10",{-0.04,0},1},{},{"LevelP10",{0.054,0},1},{"LevelP10",{0.194,0},1},{"LevelP10",{0.194,0.02},1}};
									};
									class VALP_1_10
									{
										type = "text";
										source = "static";
										text = "10";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP10",{-0.19,-0.017},1};
										right[] = {"LevelP10",{-0.15,-0.017},1};
										down[] = {"LevelP10",{-0.19,0.031},1};
									};
									class VALP_1_10_R
									{
										type = "text";
										source = "static";
										text = "10";
										align = "right";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP10",{0.21,-0.017},1};
										right[] = {"LevelP10",{0.25,-0.017},1};
										down[] = {"LevelP10",{0.21,0.031},1};
									};
									class LevelM20: Level0
									{
										type = "line";
										width = 3;
										points[] = {{"LevelM20",{-0.166,-0.02},1},{"LevelM20",{-0.166,0},1},{"LevelM20",{-0.138,0},1},{},{"LevelM20",{-0.124,0},1},{"LevelM20",{-0.096,0},1},{},{"LevelM20",{-0.082,0},1},{"LevelM20",{-0.054,0},1},{},{},{"LevelM20",{0.166,-0.02},1},{"LevelM20",{0.166,0},1},{"LevelM20",{0.138,0},1},{},{"LevelM20",{0.124,0},1},{"LevelM20",{0.096,0},1},{},{"LevelM20",{0.082,0},1},{"LevelM20",{0.054,0},1},{}};
									};
									class VALM_1_20
									{
										type = "text";
										source = "static";
										text = 20;
										align = "left";
										scale = 1;
										sourceScale = 1;
										sourceLength = 2;
										pos[] = {"LevelM20",{-0.18,-0.032},1};
										right[] = {"LevelM20",{-0.14,-0.032},1};
										down[] = {"LevelM20",{-0.18,0.016},1};
									};
									class VALM_1_20_R
									{
										type = "text";
										source = "static";
										text = 20;
										align = "right";
										scale = 1;
										sourceScale = 1;
										sourceLength = 2;
										pos[] = {"LevelM20",{0.18,-0.032},1};
										right[] = {"LevelM20",{0.22,-0.032},1};
										down[] = {"LevelM20",{0.18,0.016},1};
									};
									class LevelP20: Level0
									{
										type = "line";
										width = 3;
										points[] = {{"LevelP20",{-0.166,0.02},1},{"LevelP20",{-0.166,0},1},{"LevelP20",{-0.04,0},1},{},{"LevelP20",{0.054,0},1},{"LevelP20",{0.194,0},1},{"LevelP20",{0.194,0.02},1}};
									};
									class VALP_1_20
									{
										type = "text";
										source = "static";
										text = "20";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP20",{-0.19,-0.017},1};
										right[] = {"LevelP20",{-0.15,-0.017},1};
										down[] = {"LevelP20",{-0.19,0.031},1};
									};
									class VALP_1_20_R
									{
										type = "text";
										source = "static";
										text = "20";
										align = "right";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP20",{0.21,-0.017},1};
										right[] = {"LevelP20",{0.25,-0.017},1};
										down[] = {"LevelP20",{0.21,0.031},1};
									};
									class LevelM30: Level0
									{
										type = "line";
										width = 3;
										points[] = {{"LevelM30",{-0.166,-0.02},1},{"LevelM30",{-0.166,0},1},{"LevelM30",{-0.138,0},1},{},{"LevelM30",{-0.124,0},1},{"LevelM30",{-0.096,0},1},{},{"LevelM30",{-0.082,0},1},{"LevelM30",{-0.054,0},1},{},{},{"LevelM30",{0.166,-0.02},1},{"LevelM30",{0.166,0},1},{"LevelM30",{0.138,0},1},{},{"LevelM30",{0.124,0},1},{"LevelM30",{0.096,0},1},{},{"LevelM30",{0.082,0},1},{"LevelM30",{0.054,0},1},{}};
									};
									class VALM_1_30
									{
										type = "text";
										source = "static";
										text = 30;
										align = "left";
										scale = 1;
										sourceScale = 1;
										sourceLength = 2;
										pos[] = {"LevelM30",{-0.18,-0.032},1};
										right[] = {"LevelM30",{-0.14,-0.032},1};
										down[] = {"LevelM30",{-0.18,0.016},1};
									};
									class VALM_1_30_R
									{
										type = "text";
										source = "static";
										text = 30;
										align = "right";
										scale = 1;
										sourceScale = 1;
										sourceLength = 2;
										pos[] = {"LevelM30",{0.18,-0.032},1};
										right[] = {"LevelM30",{0.22,-0.032},1};
										down[] = {"LevelM30",{0.18,0.016},1};
									};
									class LevelP30: Level0
									{
										type = "line";
										width = 3;
										points[] = {{"LevelP30",{-0.166,0.02},1},{"LevelP30",{-0.166,0},1},{"LevelP30",{-0.04,0},1},{},{"LevelP30",{0.054,0},1},{"LevelP30",{0.194,0},1},{"LevelP30",{0.194,0.02},1}};
									};
									class VALP_1_30
									{
										type = "text";
										source = "static";
										text = "30";
										align = "left";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP30",{-0.19,-0.017},1};
										right[] = {"LevelP30",{-0.15,-0.017},1};
										down[] = {"LevelP30",{-0.19,0.031},1};
									};
									class VALP_1_30_R
									{
										type = "text";
										source = "static";
										text = "30";
										align = "right";
										scale = 1;
										sourceScale = 1;
										pos[] = {"LevelP30",{0.21,-0.017},1};
										right[] = {"LevelP30",{0.25,-0.017},1};
										down[] = {"LevelP30",{0.21,0.031},1};
									};
								};
							};
							class TransitionMode
							{
								condition = "((27-altitudeASL) min 1) - autohover";
							};
							class HoverModeHide
							{
								condition = "1-autohover";
								class VelocityLine
								{
									type = "line";
									width = 4.0;
									points[] = {{"VelocityVector",{0,-0.0196581},1},{"VelocityVector",{0.01,-0.0170239},1},{"VelocityVector",{0.01732,-0.00982906},1},{"VelocityVector",{0.02,0},1},{"VelocityVector",{0.01732,0.00982906},1},{"VelocityVector",{0.01,0.0170239},1},{"VelocityVector",{0,0.0196581},1},{"VelocityVector",{-0.01,0.0170239},1},{"VelocityVector",{-0.01732,0.00982906},1},{"VelocityVector",{-0.02,0},1},{"VelocityVector",{-0.01732,-0.00982906},1},{"VelocityVector",{-0.01,-0.0170239},1},{"VelocityVector",{0,-0.0196581},1},{},{"VelocityVector",{0.04,0},1},{"VelocityVector",{0.02,0},1},{},{"VelocityVector",{-0.04,0},1},{"VelocityVector",{-0.02,0},1},{},{"VelocityVector",{0,-0.0393162},1},{"VelocityVector",{0,-0.0196581},1},{}};
								};
							};
							class WP
							{
								condition = "wpvalid - autohover";
								class WPdist
								{
									type = "text";
									source = "wpdist";
									sourceScale = 0.001;
									sourcePrecision = 1;
									align = "left";
									scale = 1;
									pos[] = {{0.255,0.735},1};
									right[] = {{0.282,0.735},1};
									down[] = {{0.255,0.762},1};
								};
								class WPIndex
								{
									type = "text";
									source = "wpIndex";
									sourceScale = 1;
									sourceLength = 2;
									align = "right";
									scale = 1;
									pos[] = {{0.12,0.735},1};
									right[] = {{0.147,0.735},1};
									down[] = {{0.12,0.762},1};
								};
								class WPGroundSpeed
								{
									type = "text";
									source = "speed";
									sourceScale = 1.9438444;
									align = "right";
									scale = 1;
									pos[] = {{0.075,"0.735+0.035"},1};
									right[] = {{0.102,"0.735+0.035"},1};
									down[] = {{0.075,0.797},1};
								};
								class WPstatic
								{
									type = "text";
									source = "static";
									text = "W";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.075,0.735},1};
									right[] = {{0.102,0.735},1};
									down[] = {{0.075,0.762},1};
								};
								class WPAuto
								{
									type = "text";
									source = "static";
									text = "";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.075 +0.035",0.77},1};
									right[] = {{0.137,0.77},1};
									down[] = {{"0.075 +0.035",0.797},1};
								};
								class WPKM
								{
									type = "text";
									source = "static";
									text = "KM";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.075 +0.18",0.735},1};
									right[] = {{0.282,0.735},1};
									down[] = {{"0.075 +0.18",0.762},1};
								};
								class WPTime
								{
									type = "text";
									source = "static";
									text = "-:--";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.075 +0.13",0.77},1};
									right[] = {{0.232,0.77},1};
									down[] = {{"0.075 +0.13",0.797},1};
								};
								class WP
								{
									width = 2;
									type = "line";
									points[] = {{"WPPoint",1,"LimitWaypoint",1,{-0.02,0.04},1},{"WPPoint",1,"LimitWaypoint",1,{0.0,0.02},1},{"WPPoint",1,"LimitWaypoint",1,{0.02,0.04},1},{}};
								};
							};
						};
						class LaserGroup
						{
							condition = "laseron";
							class Gunner
							{
								type = "line";
								width = 4.0;
								points[] = {{"HUDCenter",{0.04,0.038},1},{"HUDCenter",{0.015,0.01},1},{},{"HUDCenter",{-0.04,0.038},1},{"HUDCenter",{-0.015,0.01},1},{},{"HUDCenter",{0.04,-0.038},1},{"HUDCenter",{0.015,-0.01},1},{},{"HUDCenter",{-0.04,-0.038},1},{"HUDCenter",{-0.015,-0.01},1},{}};
							};
						};
						class RadarGroup
						{
							condition = "activeSensorsOn";
							class RadarGround
							{
								condition = "1-user8";
								class TransText
								{
									type = "text";
									source = "static";
									text = "FCR/G";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.1,0.86},1};
									right[] = {{0.127,0.86},1};
									down[] = {{0.1,0.887},1};
								};
							};
							class RadarAir
							{
								condition = "user8>=1";
								class TransText
								{
									type = "text";
									source = "static";
									text = "FCR/A";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.1,0.86},1};
									right[] = {{0.127,0.86},1};
									down[] = {{0.1,0.887},1};
								};
							};
							class AutoRange
							{
								condition = "targetDist>=1";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "R";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.26,0.86},1};
									right[] = {{0.287,0.86},1};
									down[] = {{0.26,0.887},1};
								};
								class RangeSource
								{
									type = "text";
									source = "targetDist";
									sourceScale = 0.001;
									sourceLength = 2;
									sourcePrecision = 1;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{0.29,0.86},1};
									right[] = {{0.317,0.86},1};
									down[] = {{0.29,0.887},1};
								};
							};
							class LaserRange
							{
								condition = "targetDist<=0.99";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "*";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.26,0.86},1};
									right[] = {{0.287,0.86},1};
									down[] = {{0.26,0.887},1};
								};
								class SpeedSource
								{
									type = "text";
									source = "laserDist";
									sourceScale = 1;
									sourceLength = 4;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{0.29,0.86},1};
									right[] = {{0.317,0.86},1};
									down[] = {{0.29,0.887},1};
								};
							};
						};
						class TADSGroup
						{
							condition = "1-activeSensorsOn";
							class TransText
							{
								type = "text";
								source = "static";
								text = "TADS";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.1,0.86},1};
								right[] = {{0.127,0.86},1};
								down[] = {{0.1,0.887},1};
							};
							class AutoRange
							{
								condition = "targetDist>=1";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "A";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.26,0.86},1};
									right[] = {{0.287,0.86},1};
									down[] = {{0.26,0.887},1};
								};
								class RangeSource
								{
									type = "text";
									source = "targetDist";
									sourceScale = 0.001;
									sourceLength = 2;
									sourcePrecision = 1;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{0.29,0.86},1};
									right[] = {{0.317,0.86},1};
									down[] = {{0.29,0.887},1};
								};
							};
							class LaserRange
							{
								condition = "targetDist<=0.99";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "*";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.26,0.86},1};
									right[] = {{0.287,0.86},1};
									down[] = {{0.26,0.887},1};
								};
								class SpeedSource
								{
									type = "text";
									source = "laserDist";
									sourceScale = 1;
									sourceLength = 4;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{0.29,0.86},1};
									right[] = {{0.317,0.86},1};
									down[] = {{0.29,0.887},1};
								};
							};
						};
						class Gunner
						{
							type = "line";
							width = 4.0;
							points[] = {{"GunnerAim",{0.485,0.892},1},{"GunnerAim",{0.485,0.908},1},{"GunnerAim",{0.515,0.908},1},{"GunnerAim",{0.515,0.892},1},{"GunnerAim",{0.485,0.892},1}};
						};
						class WeaponMode
						{
							condition = "(mgun+missile+aamissile+atmissile+rocket+bomb)";
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{"HUDCenter",1,{-0.07,0.0},1},{"HUDCenter",1,{-0.02,0.0},1},{},{"HUDCenter",1,{0.02,0.0},1},{"HUDCenter",1,{0.07,0.0},1},{},{"HUDCenter",1,{0.0,-0.02},1},{"HUDCenter",1,{0.0,-0.05},1},{},{"HUDCenter",1,{0.0,0.05},1},{"HUDCenter",1,{0.0,0.02},1}};
							};
							class SpeedNumber
							{
								type = "text";
								source = "speed";
								sourceScale = 1.9438444;
								align = "left";
								scale = 1;
								pos[] = {{0.39,0.81},1};
								right[] = {{0.417,0.81},1};
								down[] = {{0.39,0.837},1};
							};
							class AltNumber
							{
								type = "text";
								source = "altitudeAGL";
								sourceScale = 3.28084;
								sourceOffset = -6.88976;
								align = "right";
								scale = 1;
								pos[] = {{0.62,0.81},1};
								right[] = {{0.647,0.81},1};
								down[] = {{0.62,0.837},1};
							};
						};
						class MGun
						{
							condition = "mgun";
							class RangeText
							{
								type = "text";
								source = "static";
								text = "P GUN";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.61,0.86},1};
								right[] = {{0.637,0.86},1};
								down[] = {{0.61,0.887},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								text = "GUN";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{0.61,0.9},1};
								right[] = {{0.637,0.9},1};
								down[] = {{0.61,0.927},1};
							};
							class Ammo
							{
								type = "text";
								source = "ammo";
								sourceScale = 1;
								align = "left";
								scale = 0.5;
								pos[] = {{0.93,0.9},1};
								right[] = {{0.957,0.9},1};
								down[] = {{0.93,0.927},1};
							};
							class Circle
							{
								type = "line";
								width = 4.0;
								points[] = {{"WeaponAimRelative",{0.025,0},1},{"WeaponAimRelative",{0.01,0},1},{},{"WeaponAimRelative",{0,0.0245726},1},{"WeaponAimRelative",{0,0.00982906},1},{},{"WeaponAimRelative",{-0.025,0},1},{"WeaponAimRelative",{-0.01,0},1},{},{"WeaponAimRelative",{0,-0.0245726},1},{"WeaponAimRelative",{0,-0.00982906},1},{},{"WeaponAimRelative",{0,-0.00982906},1},{"WeaponAimRelative",{0.005,-0.00851197},1},{"WeaponAimRelative",{0.00866,-0.00491453},1},{"WeaponAimRelative",{0.01,0},1},{"WeaponAimRelative",{0.00866,0.00491453},1},{"WeaponAimRelative",{0.005,0.00851197},1},{"WeaponAimRelative",{0,0.00982906},1},{"WeaponAimRelative",{-0.005,0.00851197},1},{"WeaponAimRelative",{-0.00866,0.00491453},1},{"WeaponAimRelative",{-0.01,0},1},{"WeaponAimRelative",{-0.00866,-0.00491453},1},{"WeaponAimRelative",{-0.005,-0.00851197},1},{"WeaponAimRelative",{0,-0.00982906},1}};
							};
						};
						class AAMissile
						{
							condition = "bomb";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P ATA";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.61,0.86},1};
								right[] = {{0.637,0.86},1};
								down[] = {{0.61,0.887},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{0.61,0.9},1};
								right[] = {{0.637,0.9},1};
								down[] = {{0.61,0.927},1};
							};
							class Circle
							{
								type = "line";
								width = 4.0;
								points[] = {{"ForwardVector",1,"HUDCenter",{0,-0.0589744},1},{"ForwardVector",1,"HUDCenter",{0.010416,-0.0580779},1},{"ForwardVector",1,"HUDCenter",{0.02052,-0.0554182},1},{"ForwardVector",1,"HUDCenter",{0.03,-0.0510718},1},{"ForwardVector",1,"HUDCenter",{0.038568,-0.0451744},1},{"ForwardVector",1,"HUDCenter",{0.04596,-0.0379087},1},{"ForwardVector",1,"HUDCenter",{0.05196,-0.0294872},1},{"ForwardVector",1,"HUDCenter",{0.056382,-0.0201692},1},{"ForwardVector",1,"HUDCenter",{0.059088,-0.0102379},1},{"ForwardVector",1,"HUDCenter",{0.06,0},1},{"ForwardVector",1,"HUDCenter",{0.059088,0.0102379},1},{"ForwardVector",1,"HUDCenter",{0.056382,0.0201692},1},{"ForwardVector",1,"HUDCenter",{0.05196,0.0294872},1},{"ForwardVector",1,"HUDCenter",{0.04596,0.0379087},1},{"ForwardVector",1,"HUDCenter",{0.038568,0.0451744},1},{"ForwardVector",1,"HUDCenter",{0.03,0.0510718},1},{"ForwardVector",1,"HUDCenter",{0.02052,0.0554182},1},{"ForwardVector",1,"HUDCenter",{0.010416,0.0580779},1},{"ForwardVector",1,"HUDCenter",{0,0.0589744},1},{"ForwardVector",1,"HUDCenter",{-0.010416,0.0580779},1},{"ForwardVector",1,"HUDCenter",{-0.02052,0.0554182},1},{"ForwardVector",1,"HUDCenter",{-0.03,0.0510718},1},{"ForwardVector",1,"HUDCenter",{-0.038568,0.0451744},1},{"ForwardVector",1,"HUDCenter",{-0.04596,0.0379087},1},{"ForwardVector",1,"HUDCenter",{-0.05196,0.0294872},1},{"ForwardVector",1,"HUDCenter",{-0.056382,0.0201692},1},{"ForwardVector",1,"HUDCenter",{-0.059088,0.0102379},1},{"ForwardVector",1,"HUDCenter",{-0.06,0},1},{"ForwardVector",1,"HUDCenter",{-0.059088,-0.0102379},1},{"ForwardVector",1,"HUDCenter",{-0.056382,-0.0201692},1},{"ForwardVector",1,"HUDCenter",{-0.05196,-0.0294872},1},{"ForwardVector",1,"HUDCenter",{-0.04596,-0.0379087},1},{"ForwardVector",1,"HUDCenter",{-0.038568,-0.0451744},1},{"ForwardVector",1,"HUDCenter",{-0.03,-0.0510718},1},{"ForwardVector",1,"HUDCenter",{-0.02052,-0.0554182},1},{"ForwardVector",1,"HUDCenter",{-0.010416,-0.0580779},1},{"ForwardVector",1,"HUDCenter",{0,-0.0589744},1},{},{"ForwardVector",1,"HUDCenter",{0,-0.0294872},1},{"ForwardVector",1,"HUDCenter",{0.005208,-0.029039},1},{"ForwardVector",1,"HUDCenter",{0.01026,-0.0277091},1},{"ForwardVector",1,"HUDCenter",{0.015,-0.0255359},1},{"ForwardVector",1,"HUDCenter",{0.019284,-0.0225872},1},{"ForwardVector",1,"HUDCenter",{0.02298,-0.0189544},1},{"ForwardVector",1,"HUDCenter",{0.02598,-0.0147436},1},{"ForwardVector",1,"HUDCenter",{0.028191,-0.0100846},1},{"ForwardVector",1,"HUDCenter",{0.029544,-0.00511897},1},{"ForwardVector",1,"HUDCenter",{0.03,0},1},{"ForwardVector",1,"HUDCenter",{0.029544,0.00511897},1},{"ForwardVector",1,"HUDCenter",{0.028191,0.0100846},1},{"ForwardVector",1,"HUDCenter",{0.02598,0.0147436},1},{"ForwardVector",1,"HUDCenter",{0.02298,0.0189544},1},{"ForwardVector",1,"HUDCenter",{0.019284,0.0225872},1},{"ForwardVector",1,"HUDCenter",{0.015,0.0255359},1},{"ForwardVector",1,"HUDCenter",{0.01026,0.0277091},1},{"ForwardVector",1,"HUDCenter",{0.005208,0.029039},1},{"ForwardVector",1,"HUDCenter",{0,0.0294872},1},{"ForwardVector",1,"HUDCenter",{-0.005208,0.029039},1},{"ForwardVector",1,"HUDCenter",{-0.01026,0.0277091},1},{"ForwardVector",1,"HUDCenter",{-0.015,0.0255359},1},{"ForwardVector",1,"HUDCenter",{-0.019284,0.0225872},1},{"ForwardVector",1,"HUDCenter",{-0.02298,0.0189544},1},{"ForwardVector",1,"HUDCenter",{-0.02598,0.0147436},1},{"ForwardVector",1,"HUDCenter",{-0.028191,0.0100846},1},{"ForwardVector",1,"HUDCenter",{-0.029544,0.00511897},1},{"ForwardVector",1,"HUDCenter",{-0.03,0},1},{"ForwardVector",1,"HUDCenter",{-0.029544,-0.00511897},1},{"ForwardVector",1,"HUDCenter",{-0.028191,-0.0100846},1},{"ForwardVector",1,"HUDCenter",{-0.02598,-0.0147436},1},{"ForwardVector",1,"HUDCenter",{-0.02298,-0.0189544},1},{"ForwardVector",1,"HUDCenter",{-0.019284,-0.0225872},1},{"ForwardVector",1,"HUDCenter",{-0.015,-0.0255359},1},{"ForwardVector",1,"HUDCenter",{-0.01026,-0.0277091},1},{"ForwardVector",1,"HUDCenter",{-0.005208,-0.029039},1},{"ForwardVector",1,"HUDCenter",{0,-0.0294872},1}};
							};
						};
						class ATMissile
						{
							condition = "missile";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P MSL";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.61,0.86},1};
								right[] = {{0.637,0.86},1};
								down[] = {{0.61,0.887},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{0.61,0.9},1};
								right[] = {{0.637,0.9},1};
								down[] = {{0.61,0.927},1};
							};
							class LOBL_Locked
							{
								condition = "(targetDist>=1)*(missilelocked)";
								class Draw
								{
									type = "line";
									width = 4.0;
									points[] = {{"Target",{-0.15,-0.147436},1},{"Target",{-0.15,0.147436},1},{"Target",{0.15,0.147436},1},{"Target",{0.15,-0.147436},1},{"Target",{-0.15,-0.147436},1}};
								};
							};
							class LOBL_TargetSelected
							{
								condition = "(targetDist>=1)*(1-missilelocked)-(user10>=1)";
								class Draw
								{
									type = "line";
									width = 4.0;
									points[] = {{"Target",{-0.15,-0.147436},1},{"Target",{-0.15,-0.130342},1},{},{"Target",{-0.15,-0.110684},1},{"Target",{-0.15,-0.0910257},1},{},{"Target",{-0.15,-0.0713675},1},{"Target",{-0.15,-0.0517094},1},{},{"Target",{-0.15,-0.0320513},1},{"Target",{-0.15,-0.0123932},1},{},{"Target",{-0.15,0.00726494},1},{"Target",{-0.15,0.0269231},1},{},{"Target",{-0.15,0.0465812},1},{"Target",{-0.15,0.0662393},1},{},{"Target",{-0.15,0.0858974},1},{"Target",{-0.15,0.105556},1},{},{"Target",{-0.15,0.125214},1},{"Target",{-0.15,0.144872},1},{},{"Target",{-0.15,0.147436},1},{"Target",{-0.13,0.147436},1},{},{"Target",{-0.11,0.147436},1},{"Target",{-0.09,0.147436},1},{},{"Target",{-0.07,0.147436},1},{"Target",{-0.05,0.147436},1},{},{"Target",{-0.03,0.147436},1},{"Target",{-0.01,0.147436},1},{},{"Target",{0.00999999,0.147436},1},{"Target",{0.03,0.147436},1},{},{"Target",{0.05,0.147436},1},{"Target",{0.07,0.147436},1},{},{"Target",{0.09,0.147436},1},{"Target",{0.11,0.147436},1},{},{"Target",{0.13,0.147436},1},{"Target",{0.15,0.147436},1},{},{"Target",{0.15,0.147436},1},{"Target",{0.15,0.130342},1},{},{"Target",{0.15,0.110684},1},{"Target",{0.15,0.0910257},1},{},{"Target",{0.15,0.0713675},1},{"Target",{0.15,0.0517094},1},{},{"Target",{0.15,0.0320513},1},{"Target",{0.15,0.0123932},1},{},{"Target",{0.15,-0.00726494},1},{"Target",{0.15,-0.0269231},1},{},{"Target",{0.15,-0.0465812},1},{"Target",{0.15,-0.0662393},1},{},{"Target",{0.15,-0.0858974},1},{"Target",{0.15,-0.105556},1},{},{"Target",{0.15,-0.125214},1},{"Target",{0.15,-0.144872},1},{},{"Target",{-0.15,-0.147436},1},{"Target",{-0.13,-0.147436},1},{},{"Target",{-0.11,-0.147436},1},{"Target",{-0.09,-0.147436},1},{},{"Target",{-0.07,-0.147436},1},{"Target",{-0.05,-0.147436},1},{},{"Target",{-0.03,-0.147436},1},{"Target",{-0.01,-0.147436},1},{},{"Target",{0.00999999,-0.147436},1},{"Target",{0.03,-0.147436},1},{},{"Target",{0.05,-0.147436},1},{"Target",{0.07,-0.147436},1},{},{"Target",{0.09,-0.147436},1},{"Target",{0.11,-0.147436},1},{},{"Target",{0.13,-0.147436},1},{"Target",{0.15,-0.147436},1},{}};
								};
							};
							class LOBL_Seeking: LOBL_Locked
							{
								condition = "targetDist<=0.99-(user10>=1)";
								class Draw: Draw
								{
									points[] = {{"HUDCenter",{-0.15,-0.147436},1},{"HUDCenter",{-0.15,-0.130342},1},{},{"HUDCenter",{-0.15,-0.110684},1},{"HUDCenter",{-0.15,-0.0910257},1},{},{"HUDCenter",{-0.15,-0.0713675},1},{"HUDCenter",{-0.15,-0.0517094},1},{},{"HUDCenter",{-0.15,-0.0320513},1},{"HUDCenter",{-0.15,-0.0123932},1},{},{"HUDCenter",{-0.15,0.00726494},1},{"HUDCenter",{-0.15,0.0269231},1},{},{"HUDCenter",{-0.15,0.0465812},1},{"HUDCenter",{-0.15,0.0662393},1},{},{"HUDCenter",{-0.15,0.0858974},1},{"HUDCenter",{-0.15,0.105556},1},{},{"HUDCenter",{-0.15,0.125214},1},{"HUDCenter",{-0.15,0.144872},1},{},{"HUDCenter",{-0.15,0.147436},1},{"HUDCenter",{-0.13,0.147436},1},{},{"HUDCenter",{-0.11,0.147436},1},{"HUDCenter",{-0.09,0.147436},1},{},{"HUDCenter",{-0.07,0.147436},1},{"HUDCenter",{-0.05,0.147436},1},{},{"HUDCenter",{-0.03,0.147436},1},{"HUDCenter",{-0.01,0.147436},1},{},{"HUDCenter",{0.00999999,0.147436},1},{"HUDCenter",{0.03,0.147436},1},{},{"HUDCenter",{0.05,0.147436},1},{"HUDCenter",{0.07,0.147436},1},{},{"HUDCenter",{0.09,0.147436},1},{"HUDCenter",{0.11,0.147436},1},{},{"HUDCenter",{0.13,0.147436},1},{"HUDCenter",{0.15,0.147436},1},{},{"HUDCenter",{0.15,0.147436},1},{"HUDCenter",{0.15,0.130342},1},{},{"HUDCenter",{0.15,0.110684},1},{"HUDCenter",{0.15,0.0910257},1},{},{"HUDCenter",{0.15,0.0713675},1},{"HUDCenter",{0.15,0.0517094},1},{},{"HUDCenter",{0.15,0.0320513},1},{"HUDCenter",{0.15,0.0123932},1},{},{"HUDCenter",{0.15,-0.00726494},1},{"HUDCenter",{0.15,-0.0269231},1},{},{"HUDCenter",{0.15,-0.0465812},1},{"HUDCenter",{0.15,-0.0662393},1},{},{"HUDCenter",{0.15,-0.0858974},1},{"HUDCenter",{0.15,-0.105556},1},{},{"HUDCenter",{0.15,-0.125214},1},{"HUDCenter",{0.15,-0.144872},1},{},{"HUDCenter",{-0.15,-0.147436},1},{"HUDCenter",{-0.13,-0.147436},1},{},{"HUDCenter",{-0.11,-0.147436},1},{"HUDCenter",{-0.09,-0.147436},1},{},{"HUDCenter",{-0.07,-0.147436},1},{"HUDCenter",{-0.05,-0.147436},1},{},{"HUDCenter",{-0.03,-0.147436},1},{"HUDCenter",{-0.01,-0.147436},1},{},{"HUDCenter",{0.00999999,-0.147436},1},{"HUDCenter",{0.03,-0.147436},1},{},{"HUDCenter",{0.05,-0.147436},1},{"HUDCenter",{0.07,-0.147436},1},{},{"HUDCenter",{0.09,-0.147436},1},{"HUDCenter",{0.11,-0.147436},1},{},{"HUDCenter",{0.13,-0.147436},1},{"HUDCenter",{0.15,-0.147436},1},{}};
								};
							};
							class LOAL_TargetSelected: LOBL_TargetSelected
							{
								condition = "(targetDist>=1)*(user10>=1)";
								class Draw: Draw
								{
									points[] = {{"Target",{-0.06,-0.0589744},1},{"Target",{-0.06,0.0589744},1},{"Target",{0.06,0.0589744},1},{"Target",{0.06,-0.0589744},1},{"Target",{-0.06,-0.0589744},1}};
								};
							};
							class LOAL_Seeking: LOBL_Seeking
							{
								condition = "(targetDist<=1)*(user10>=1)";
								class Draw: Draw
								{
									lineType = 0;
									points[] = {{"HUDCenter",{-0.06,-0.0589744},1},{"HUDCenter",{-0.036,-0.0589744},1},{},{"HUDCenter",{-0.012,-0.0589744},1},{"HUDCenter",{0.012,-0.0589744},1},{},{"HUDCenter",{0.036,-0.0589744},1},{"HUDCenter",{0.06,-0.0589744},1},{},{"HUDCenter",{-0.06,0.0589744},1},{"HUDCenter",{-0.036,0.0589744},1},{},{"HUDCenter",{-0.012,0.0589744},1},{"HUDCenter",{0.012,0.0589744},1},{},{"HUDCenter",{0.036,0.0589744},1},{"HUDCenter",{0.06,0.0589744},1},{},{"HUDCenter",{-0.06,-0.0589744},1},{"HUDCenter",{-0.06,-0.0364103},1},{},{"HUDCenter",{-0.06,-0.0128205},1},{"HUDCenter",{-0.06,0.0107692},1},{},{"HUDCenter",{-0.06,0.034359},1},{"HUDCenter",{-0.06,0.0579487},1},{},{"HUDCenter",{0.06,-0.0589744},1},{"HUDCenter",{0.06,-0.0364103},1},{},{"HUDCenter",{0.06,-0.0128205},1},{"HUDCenter",{0.06,0.0107692},1},{},{"HUDCenter",{0.06,0.034359},1},{"HUDCenter",{0.06,0.0579487},1},{}};
								};
							};
						};
						class Rockets
						{
							condition = "rocket";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P RKT";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.61,0.86},1};
								right[] = {{0.637,0.86},1};
								down[] = {{0.61,0.887},1};
							};
							class RocketDummy
							{
								type = "line";
								width = 3.0;
								points[] = {{"ImpactPoint",{0.02,-0.0589744},1},{"ImpactPoint",{-0.02,-0.0589744},1},{},{"ImpactPoint",{0.02,0.0589744},1},{"ImpactPoint",{-0.02,0.0589744},1},{},{"ImpactPoint",{0.0,-0.0589744},1},{"ImpactPoint",{0.0,0.0589744},1},{}};
							};
							class AmmoName
							{
								type = "text";
								source = "ammoFormat";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{0.61,0.9},1};
								right[] = {{0.637,0.9},1};
								down[] = {{0.61,0.927},1};
							};
						};
						class RadarBoxes
						{
							type = "radartoview";
							pos0[] = {0.5,0.5};
							pos10[] = {0.734,0.73};
							width = 4;
							class points
							{
								class Draw
								{
									type = "line";
									width = 4;
									lineType = 2;
									points[] = {{{0,-0.0294872},1},{{0.005208,-0.029039},1},{{0.01026,-0.0277091},1},{{0.015,-0.0255359},1},{{0.019284,-0.0225872},1},{{0.02298,-0.0189544},1},{{0.02598,-0.0147436},1},{{0.028191,-0.0100846},1},{{0.029544,-0.00511897},1},{{0.03,0},1},{{0.029544,0.00511897},1},{{0.028191,0.0100846},1},{{0.02598,0.0147436},1},{{0.02298,0.0189544},1},{{0.019284,0.0225872},1},{{0.015,0.0255359},1},{{0.01026,0.0277091},1},{{0.005208,0.029039},1},{{0,0.0294872},1},{{-0.005208,0.029039},1},{{-0.01026,0.0277091},1},{{-0.015,0.0255359},1},{{-0.019284,0.0225872},1},{{-0.02298,0.0189544},1},{{-0.02598,0.0147436},1},{{-0.028191,0.0100846},1},{{-0.029544,0.00511897},1},{{-0.03,0},1},{{-0.029544,-0.00511897},1},{{-0.028191,-0.0100846},1},{{-0.02598,-0.0147436},1},{{-0.02298,-0.0189544},1},{{-0.019284,-0.0225872},1},{{-0.015,-0.0255359},1},{{-0.01026,-0.0277091},1},{{-0.005208,-0.029039},1},{{0,-0.0294872},1},{}};
								};
							};
							class pointsUnknown: points
							{
								class Draw: Draw
								{
									type = "polygon";
									points[] = {{{{-0.01,-0.01},1},{{0,-0.01},1},{{0,0},1},{{-0.01,0},1}}};
								};
							};
							class pointsUnknownEnemy: pointsUnknown
							{
								class Draw: Draw{};
							};
							class pointsUnknownFriend: pointsUnknown
							{
								class Draw: Draw{};
							};
							class pointsUnknownCiv: pointsUnknown
							{
								class Draw: Draw{};
							};
							class pointsCar: points
							{
								class Draw: Draw
								{
									type = "polygon";
									points[] = {{{{0,0},1},{{0.00173648,-0.00967973},1},{{0.0034202,-0.00923629},1},{{0.005,-0.00851222},1}},{{{0,0},1},{{0.005,-0.00851222},1},{{0.00642788,-0.0075295},1},{{0.00766044,-0.006318},1}},{{{0,0},1},{{0.00766044,-0.006318},1},{{0.00866025,-0.00491453},1},{{0.00939693,-0.00336174},1}},{{{0,0},1},{{0.00939693,-0.00336174},1},{{0.00984808,-0.0017068},1},{{0.01,4.29642e-10},1}},{{{0,0},1},{{0.01,4.29642e-10},1},{{0.00984808,0.0017068},1},{{0.00939693,0.00336174},1}},{{{0,0},1},{{0.00939693,0.00336174},1},{{0.00866025,0.00491453},1},{{0.00766044,0.006318},1}},{{{0,0},1},{{0.00766044,0.006318},1},{{0.00642787,0.0075295},1},{{0.005,0.00851222},1}},{{{0,0},1},{{0.005,0.00851222},1},{{0.0034202,0.00923629},1},{{0.00173648,0.00967973},1}},{{{0,0},1},{{0.00173648,0.00967973},1},{{-8.74228e-10,0.00982906},1},{{-0.00173648,0.00967973},1}},{{{0,0},1},{{-0.00173648,0.00967973},1},{{-0.0034202,0.00923629},1},{{-0.005,0.00851221},1}},{{{0,0},1},{{-0.005,0.00851221},1},{{-0.00642788,0.0075295},1},{{-0.00766045,0.006318},1}},{{{0,0},1},{{-0.00766045,0.006318},1},{{-0.00866025,0.00491453},1},{{-0.00939693,0.00336174},1}},{{{0,0},1},{{-0.00939693,0.00336174},1},{{-0.00984808,0.0017068},1},{{-0.01,-1.1721e-10},1}},{{{0,0},1},{{-0.01,-1.1721e-10},1},{{-0.00984808,-0.0017068},1},{{-0.00939693,-0.00336174},1}},{{{0,0},1},{{-0.00939693,-0.00336174},1},{{-0.00866025,-0.00491453},1},{{-0.00766044,-0.006318},1}},{{{0,0},1},{{-0.00766044,-0.006318},1},{{-0.00642787,-0.0075295},1},{{-0.005,-0.00851222},1}},{{{0,0},1},{{-0.005,-0.00851222},1},{{-0.0034202,-0.00923629},1},{{-0.00173648,-0.00967973},1}},{{{0,0},1},{{-0.00173648,-0.00967973},1},{{1.74846e-09,-0.00982906},1},{{0.00173648,-0.00967973},1}}};
								};
							};
							class pointsCarEnemy: pointsCar
							{
								class Draw: Draw{};
							};
							class pointsCarFriend: pointsCar
							{
								class Draw: Draw{};
							};
							class pointsCarCiv: pointsCar
							{
								class Draw: Draw{};
							};
							class pointsCarNeutral: pointsCar
							{
								class Draw: Draw{};
							};
							class pointsTank: points
							{
								class Draw
								{
									type = "polygon";
									points[] = {{{{-0.01,-0.01},1},{{0.015,-0.01},1},{{0.015,0},1},{{-0.01,0},1}},{{{-0.007,-0.018},1},{{-0.002,-0.018},1},{{-0.002,0.007},1},{{-0.007,0.007},1}},{{{0.007,-0.018},1},{{0.012,-0.018},1},{{0.012,0.007},1},{{0.007,0.007},1}}};
								};
							};
							class pointsTankEnemy: pointsTank
							{
								class Draw: Draw{};
							};
							class pointsTankFriend: pointsTank
							{
								class Draw: Draw{};
							};
							class pointsTankCiv: pointsTank
							{
								class Draw: Draw{};
							};
							class pointsTankNeutral: pointsTank
							{
								class Draw: Draw{};
							};
							class pointsAirplane
							{
								class Draw
								{
									type = "line";
									width = 4;
									points[] = {{{0.02,0},1},{{-0.02,0},1},{},{{-0.015,-0.00982906},1},{{0,0.00982906},1},{{0.015,-0.00982906},1}};
								};
							};
							class pointsAirplaneEnemy: pointsAirplane
							{
								class Draw: Draw{};
							};
							class pointsAirplaneFriend: pointsAirplane
							{
								class Draw: Draw{};
							};
							class pointsHeli
							{
								class Draw
								{
									type = "line";
									width = 2;
									points[] = {{{0.0,0.0},1},{{0.01,0.015},1},{{-0.01,0.015},1},{{0.0,0.0},1},{},{{0.0,0.0},1},{{0.01,-0.015},1},{{-0.01,-0.015},1},{{0.0,0.0},1}};
								};
							};
							class pointsHeliEnemy
							{
								class Draw
								{
									type = "polygon";
									points[] = {{{{0.0,0.0},1},{{0.01,0.015},1},{{-0.01,0.015},1}},{{{0.0,0.0},1},{{0.01,-0.015},1},{{-0.01,-0.015},1}}};
								};
							};
							class pointsHeliFriend
							{
								class Draw
								{
									type = "polygon";
									points[] = {{{{0.0,0.0},1},{{0.01,0.015},1},{{-0.01,0.015},1}},{{{0.0,0.0},1},{{0.01,-0.015},1},{{-0.01,-0.015},1}}};
								};
							};
							class pointsLaser
							{
								class Draw
								{
									type = "line";
									width = 4;
									points[] = {{{0,-0.0196581},1},{{-1.74846e-09,0.0196581},1},{},{{0.02,8.59284e-10},1},{{-0.02,-2.34421e-10},1},{},{{0.0106066,-0.0104253},1},{{-0.0106066,0.0104253},1},{},{{0.0106066,0.0104253},1},{{-0.0106066,-0.0104253},1},{}};
								};
							};
							class pointsNVG: pointsLaser{};
							class pointsStatic
							{
								class Draw
								{
									type = "polygon";
									width = 4;
									points[] = {{{{0.0,0.0},1},{{0.01,0.015},1},{{-0.01,0.015},1}}};
								};
							};
							class pointsStaticEnemy: pointsStatic{};
							class pointsStaticFriend: pointsStatic{};
							class pointsStaticCiv: pointsStatic{};
							class pointsStaticNeutral: pointsStatic{};
						};
						class TargetDiamond
						{
							class shape
							{
								type = "line";
								width = 3;
								points[] = {{"Target",1,"Limit0109",1,{0.0075,0},1},{"Target",1,"Limit0109",1,{0.0125,0},1},{},{"Target",1,"Limit0109",1,{0.0175,0},1},{"Target",1,"Limit0109",1,{0.0225,0},1},{},{"Target",1,"Limit0109",1,{0.0275,0},1},{"Target",1,"Limit0109",1,{0.0325,0},1},{},{"Target",1,"Limit0109",1,{0.0375,0},1},{"Target",1,"Limit0109",1,{0.0425,0},1},{},{"Target",1,"Limit0109",1,{0.0475,0},1},{"Target",1,"Limit0109",1,{0.0525,0},1},{},{"Target",1,"Limit0109",1,{-0.0075,0},1},{"Target",1,"Limit0109",1,{-0.0125,0},1},{},{"Target",1,"Limit0109",1,{-0.0175,0},1},{"Target",1,"Limit0109",1,{-0.0225,0},1},{},{"Target",1,"Limit0109",1,{-0.0275,0},1},{"Target",1,"Limit0109",1,{-0.0325,0},1},{},{"Target",1,"Limit0109",1,{-0.0375,0},1},{"Target",1,"Limit0109",1,{-0.0425,0},1},{},{"Target",1,"Limit0109",1,{-0.0475,0},1},{"Target",1,"Limit0109",1,{-0.0525,0},1},{},{"Target",1,"Limit0109",1,{0,0.00737179},1},{"Target",1,"Limit0109",1,{0,0.0122863},1},{},{"Target",1,"Limit0109",1,{0,0.0172009},1},{"Target",1,"Limit0109",1,{0,0.0221154},1},{},{"Target",1,"Limit0109",1,{0,0.0270299},1},{"Target",1,"Limit0109",1,{0,0.0319444},1},{},{"Target",1,"Limit0109",1,{0,0.036859},1},{"Target",1,"Limit0109",1,{0,0.0417735},1},{},{"Target",1,"Limit0109",1,{0,0.046688},1},{"Target",1,"Limit0109",1,{0,0.0516026},1},{},{"Target",1,"Limit0109",1,{0,-0.00737179},1},{"Target",1,"Limit0109",1,{0,-0.0122863},1},{},{"Target",1,"Limit0109",1,{0,-0.0172009},1},{"Target",1,"Limit0109",1,{0,-0.0221154},1},{},{"Target",1,"Limit0109",1,{0,-0.0270299},1},{"Target",1,"Limit0109",1,{0,-0.0319444},1},{},{"Target",1,"Limit0109",1,{0,-0.036859},1},{"Target",1,"Limit0109",1,{0,-0.0417735},1},{},{"Target",1,"Limit0109",1,{0,-0.046688},1},{"Target",1,"Limit0109",1,{0,-0.0516026},1},{}};
							};
						};
					};
				};
				class UFD
				{
					topLeft = "GUNNER_UFD_TL";
					topRight = "GUNNER_UFD_TR";
					bottomLeft = "GUNNER_UFD_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					class Bones{};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on";
						class Lines
						{
							type = "line";
							width = 4.0;
							lineType = 2;
							points[] = {{{0.33,0.027},1},{{0.33,0.072},1},{},{{0.33,0.117},1},{{0.33,0.162},1},{},{{0.33,0.207},1},{{0.33,0.252},1},{},{{0.33,0.297},1},{{0.33,0.342},1},{},{{0.33,0.387},1},{{0.33,0.432},1},{},{{0.66,0.027},1},{{0.66,0.072},1},{},{{0.66,0.117},1},{{0.66,0.162},1},{},{{0.66,0.207},1},{{0.66,0.252},1},{},{{0.66,0.297},1},{{0.66,0.342},1},{},{{0.66,0.387},1},{{0.66,0.432},1},{},{{0.02,0.56},1},{{0.0,0.53},1},{{0.02,0.5},1},{{0.02,0.56},1},{},{{0.03,0.56},1},{{0.05,0.53},1},{{0.03,0.5},1},{{0.03,0.56},1},{},{{0.02,0.66},1},{{0.0,0.63},1},{{0.02,0.6},1},{{0.02,0.66},1},{},{{0.03,0.66},1},{{0.05,0.63},1},{{0.03,0.6},1},{{0.03,0.66},1},{},{{0.02,0.76},1},{{0.0,0.73},1},{{0.02,0.7},1},{{0.02,0.76},1},{},{{0.03,0.76},1},{{0.05,0.73},1},{{0.03,0.7},1},{{0.03,0.76},1},{},{{0.02,0.86},1},{{0.0,0.83},1},{{0.02,0.8},1},{{0.02,0.86},1},{},{{0.03,0.86},1},{{0.05,0.83},1},{{0.03,0.8},1},{{0.03,0.86},1},{}};
						};
						class Time
						{
							type = "text";
							source = "time";
							text = "%X";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.7,0.9},1};
							right[] = {{0.735,0.9},1};
							down[] = {{0.7,0.97},1};
						};
						class Fuel
						{
							type = "text";
							source = "fuel";
							text = "%X";
							sourceScale = 2440;
							sourceLength = 4;
							align = "right";
							scale = 1;
							pos[] = {{0.01,0.9},1};
							right[] = {{0.045,0.9},1};
							down[] = {{0.01,0.97},1};
						};
						class TransponderID
						{
							type = "text";
							source = "static";
							text = "XP";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.25-0.03",0.9},1};
							right[] = {{0.255,0.9},1};
							down[] = {{"0.25-0.03",0.97},1};
						};
						class TransponderMode
						{
							type = "text";
							source = "static";
							text = "1200";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.33-0.03",0.9},1};
							right[] = {{0.335,0.9},1};
							down[] = {{"0.33-0.03",0.97},1};
						};
						class XPNDRDMode
						{
							type = "text";
							source = "static";
							text = "B";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.48-0.03",0.9},1};
							right[] = {{0.485,0.9},1};
							down[] = {{"0.48-0.03",0.97},1};
						};
						class TransponderMasterControl
						{
							type = "text";
							source = "static";
							text = "NORM";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.55-0.03",0.9},1};
							right[] = {{0.555,0.9},1};
							down[] = {{"0.55-0.03",0.97},1};
						};
						class LocalTime
						{
							type = "text";
							source = "static";
							text = "L";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.97,0.9},1};
							right[] = {{1.005,0.9},1};
							down[] = {{0.97,0.97},1};
						};
						class IDM_Net1
						{
							type = "text";
							source = "static";
							text = "L1";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.7,0.5},1};
							right[] = {{0.735,0.5},1};
							down[] = {{0.7,0.57},1};
						};
						class IDM_Net2
						{
							type = "text";
							source = "static";
							text = "L2";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.7,0.6},1};
							right[] = {{0.735,0.6},1};
							down[] = {{0.7,0.67},1};
						};
						class IDM_Net3
						{
							type = "text";
							source = "static";
							text = "T1";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.7,0.7},1};
							right[] = {{0.735,0.7},1};
							down[] = {{0.7,0.77},1};
						};
						class IDM_Net4
						{
							type = "text";
							source = "static";
							text = "L3";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.7,0.8},1};
							right[] = {{0.735,0.8},1};
							down[] = {{0.7,0.87},1};
						};
						class IDM_Net1_FQ
						{
							type = "text";
							source = "static";
							text = "149.500";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.99,0.5},1};
							right[] = {{1.025,0.5},1};
							down[] = {{0.99,0.57},1};
						};
						class IDM_Net2_FQ
						{
							type = "text";
							source = "static";
							text = "249.500";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.99,0.6},1};
							right[] = {{1.025,0.6},1};
							down[] = {{0.99,0.67},1};
						};
						class IDM_Net3_FQ
						{
							type = "text";
							source = "static";
							text = "45.550";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.99,0.7},1};
							right[] = {{1.025,0.7},1};
							down[] = {{0.99,0.77},1};
						};
						class IDM_Net4_FQ
						{
							type = "text";
							source = "static";
							text = "69.525";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.99,0.8},1};
							right[] = {{1.025,0.8},1};
							down[] = {{0.99,0.87},1};
						};
						class Radio_ID_1
						{
							type = "text";
							source = "static";
							text = "VH";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.065,0.5},1};
							right[] = {{0.1,0.5},1};
							down[] = {{0.065,0.57},1};
						};
						class Radio_ID_2
						{
							type = "text";
							source = "static";
							text = "UH";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.065,0.6},1};
							right[] = {{0.1,0.6},1};
							down[] = {{0.065,0.67},1};
						};
						class Radio_ID_3
						{
							type = "text";
							source = "static";
							text = "F2";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.065,0.7},1};
							right[] = {{0.1,0.7},1};
							down[] = {{0.065,0.77},1};
						};
						class Radio_ID_4
						{
							type = "text";
							source = "static";
							text = "F2";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.065,0.8},1};
							right[] = {{0.1,0.8},1};
							down[] = {{0.065,0.87},1};
						};
						class Radio_ID_1_FQ
						{
							type = "text";
							source = "static";
							text = "139.500";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.35,0.5},1};
							right[] = {{0.385,0.5},1};
							down[] = {{0.35,0.57},1};
						};
						class Radio_ID_2_FQ
						{
							type = "text";
							source = "static";
							text = "240.500";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.35,0.6},1};
							right[] = {{0.385,0.6},1};
							down[] = {{0.35,0.67},1};
						};
						class Radio_ID_3_FQ
						{
							type = "text";
							source = "static";
							text = "39.075";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.35,0.7},1};
							right[] = {{0.385,0.7},1};
							down[] = {{0.35,0.77},1};
						};
						class Radio_ID_4_FQ
						{
							type = "text";
							source = "static";
							text = "49.500";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.35,0.8},1};
							right[] = {{0.385,0.8},1};
							down[] = {{0.35,0.87},1};
						};
						class Callsign_1
						{
							type = "text";
							source = "static";
							text = "H8G65";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.54,0.5},1};
							right[] = {{0.575,0.5},1};
							down[] = {{0.54,0.57},1};
						};
						class Callsign_2
						{
							type = "text";
							source = "static";
							text = "P3R56";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.54,0.6},1};
							right[] = {{0.575,0.6},1};
							down[] = {{0.54,0.67},1};
						};
						class Callsign_3
						{
							type = "text";
							source = "static";
							text = "J8L68";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.54,0.7},1};
							right[] = {{0.575,0.7},1};
							down[] = {{0.54,0.77},1};
						};
						class Callsign_4
						{
							type = "text";
							source = "static";
							text = "B5Z23";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.54,0.8},1};
							right[] = {{0.575,0.8},1};
							down[] = {{0.54,0.87},1};
						};
						class Cipher_1
						{
							type = "text";
							source = "static";
							text = "";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.63,0.5},1};
							right[] = {{0.665,0.5},1};
							down[] = {{0.63,0.57},1};
						};
						class Cipher_2
						{
							type = "text";
							source = "static";
							text = "C3";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.63,0.6},1};
							right[] = {{0.665,0.6},1};
							down[] = {{0.63,0.67},1};
						};
						class Cipher_3
						{
							type = "text";
							source = "static";
							text = "C5";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.63,0.7},1};
							right[] = {{0.665,0.7},1};
							down[] = {{0.63,0.77},1};
						};
						class Cipher_4
						{
							type = "text";
							source = "static";
							text = "C2";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.63,0.8},1};
							right[] = {{0.665,0.8},1};
							down[] = {{0.63,0.87},1};
						};
						class GuardReceiver
						{
							type = "text";
							source = "static";
							text = "C";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.67,0.6},1};
							right[] = {{0.705,0.6},1};
							down[] = {{0.67,0.67},1};
						};
						class PowerSetting
						{
							type = "text";
							source = "static";
							text = "H";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.67,0.7},1};
							right[] = {{0.705,0.7},1};
							down[] = {{0.67,0.77},1};
						};
					};
				};
				class MFD_Left_Flight
				{
					topLeft = "GUNNER_MFD_L_TL";
					topRight = "GUNNER_MFD_L_TR";
					bottomLeft = "GUNNER_MFD_L_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {-2};
					class Bones
					{
						class HUDCenter
						{
							type = "fixed";
							pos[] = {0.5,0.5};
						};
						class VelocityVector
						{
							type = "vector";
							source = "velocity";
							pos0[] = {0.5,0.5};
							pos10[] = {0.934,0.93};
						};
						class ForwardVector
						{
							type = "vector";
							source = "forward";
							pos0[] = {0,0};
							pos10[] = {0.434,0.43};
						};
						class HorizonVector
						{
							type = "horizon";
							pos0[] = {0.5,0.5};
							pos10[] = {1.11376,1.10811};
							angle = 0;
						};
						class GunnerAim
						{
							type = "vector";
							source = "turret";
							pos0[] = {0,-2.0};
							pos10[] = {0.0068,-0.01};
							projection = 0;
						};
						class VerticalSpeedBone
						{
							type = "linear";
							source = "vspeed";
							sourceScale = 1;
							min = -10;
							max = 10;
							minPos[] = {0,-0.26};
							maxPos[] = {0,0.26};
						};
						class TurnRate
						{
							type = "linear";
							source = "user";
							sourceIndex = 11;
							min = -4.8;
							max = 4.8;
							minPos[] = {0.36,0.87};
							maxPos[] = {0.64,0.87};
							aspectRatio = 1;
						};
						class FCR_Bearing
						{
							type = "linear";
							source = "user";
							sourceIndex = 17;
							min = -180;
							max = 180;
							minPos[] = {0.35,0.165};
							maxPos[] = {0.66,0.165};
						};
						class HorizonBankRot
						{
							type = "linear";
							source = "gmeterXgrav";
							min = -1;
							max = 1;
							minPos[] = {0.41,0.94};
							maxPos[] = {0.59,0.94};
							aspectRatio = 1;
						};
						class HorizonBankRot_Up
						{
							type = "rotational";
							source = "horizonBank";
							center[] = {0.5,0.5};
							min = "-rad(90)";
							max = "rad(90)";
							minAngle = "180.25-89";
							maxAngle = "180.75+89";
							aspectRatio = 1;
						};
						class HorizonBankRotFull
						{
							type = "rotational";
							source = "horizonBank";
							center[] = {0,0};
							min = -3.1416;
							max = 3.1416;
							minAngle = -180;
							maxAngle = 180;
							aspectRatio = 1;
						};
						class LimitWaypoint
						{
							type = "limit";
							limits[] = {0.23,0.14,0.77,0.14};
						};
						class WPPoint
						{
							type = "vector";
							source = "WPPoint";
							pos0[] = {0.5,0.5};
							pos10[] = {0.6,0.93};
						};
						class Level0
						{
							pos0[] = {0.5,0.5};
							pos10[] = {0.60416,0.6032};
							type = "horizon";
							angle = 0;
						};
						class LevelP05: Level0
						{
							angle = 5;
						};
						class LevelM05: Level0
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
						class LevelP60: Level0
						{
							angle = 60;
						};
						class LevelM60: Level0
						{
							angle = -60;
						};
						class LevelP70: Level0
						{
							angle = 70;
						};
						class LevelM70: Level0
						{
							angle = -70;
						};
						class LevelP80: Level0
						{
							angle = 80;
						};
						class LevelM80: Level0
						{
							angle = -80;
						};
						class LevelP90: Level0
						{
							angle = 90;
						};
						class LevelM90: Level0
						{
							angle = -90;
						};
						class RadarHeight
						{
							type = "linear";
							source = "altitudeAGL";
							sourceScale = 1;
							sourceOffset = -2;
							min = 0;
							max = 61;
							minPos[] = {0.973,0.25};
							maxPos[] = {0.973,0.78};
						};
					};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on*(user6>=0)*(user6<=0)";
						class Static
						{
							type = "line";
							width = 4.0;
							points[] = {{"VelocityVector",{0,-0.0198157},1},{"VelocityVector",{0.01,-0.0171604},1},{"VelocityVector",{0.01732,-0.00990783},1},{"VelocityVector",{0.02,0},1},{"VelocityVector",{0.01732,0.00990783},1},{"VelocityVector",{0.01,0.0171604},1},{"VelocityVector",{0,0.0198157},1},{"VelocityVector",{-0.01,0.0171604},1},{"VelocityVector",{-0.01732,0.00990783},1},{"VelocityVector",{-0.02,0},1},{"VelocityVector",{-0.01732,-0.00990783},1},{"VelocityVector",{-0.01,-0.0171604},1},{"VelocityVector",{0,-0.0198157},1},{},{"VelocityVector",{0.04,0},1},{"VelocityVector",{0.02,0},1},{},{"VelocityVector",{-0.04,0},1},{"VelocityVector",{-0.02,0},1},{},{"VelocityVector",{0,-0.0396313},1},{"VelocityVector",{0,-0.0198157},1},{},{{0.381182,0.224373},1},{{0.377688,0.21509},1},{},{{0.407028,0.226286},1},{{0.401394,0.207273},1},{},{{0.427728,0.210832},1},{{0.425602,0.201151},1},{},{{0.453036,0.216369},1},{{0.45019,0.196755},1},{},{{0.475745,0.203992},1},{{0.475031,0.194109},1},{},{{0.524255,0.203992},1},{{0.524969,0.194109},1},{},{{0.546964,0.216369},1},{{0.54981,0.196755},1},{},{{0.572272,0.210832},1},{{0.574398,0.201151},1},{},{{0.592972,0.226286},1},{{0.598606,0.207273},1},{},{{0.618818,0.224373},1},{{0.622312,0.21509},1},{},{{0.38,0.96},1},{{0.62,0.96},1},{},{{0.52,0.96},1},{{0.52,0.92},1},{},{{0.48,0.96},1},{{0.48,0.92},1},{},{{0.36,0.9},1},{{0.36,0.865},1},{},{{0.4,0.9},1},{{0.4,0.865},1},{},{{0.44,0.9},1},{{0.44,0.865},1},{},{{0.48,0.9},1},{{0.48,0.865},1},{},{{0.52,0.9},1},{{0.52,0.865},1},{},{{0.56,0.9},1},{{0.56,0.865},1},{},{{0.6,0.9},1},{{0.6,0.865},1},{},{{0.64,0.9},1},{{0.64,0.865},1},{},{{0.985,0.26},1},{{1.005,0.26},1},{},{{0.94,0.26},1},{{0.96,0.26},1},{},{{0.985,0.39},1},{{1.005,0.39},1},{},{{0.94,0.39},1},{{0.96,0.39},1},{},{{0.945,0.416},1},{{0.955,0.416},1},{},{{0.945,0.442},1},{{0.955,0.442},1},{},{{0.945,0.468},1},{{0.955,0.468},1},{},{{0.945,0.494},1},{{0.955,0.494},1},{},{{0.94,0.52},1},{{0.96,0.52},1},{},{{0.985,0.52},1},{{1.005,0.52},1},{},{{0.985,0.65},1},{{1.005,0.65},1},{},{{0.94,0.65},1},{{0.96,0.65},1},{},{{0.945,0.624},1},{{0.955,0.624},1},{},{{0.945,0.598},1},{{0.955,0.598},1},{},{{0.945,0.572},1},{{0.955,0.572},1},{},{{0.945,0.546},1},{{0.955,0.546},1},{},{{0.99,0.676},1},{{1,0.676},1},{},{{0.99,0.702},1},{{1,0.702},1},{},{{0.99,0.728},1},{{1,0.728},1},{},{{0.99,0.754},1},{{1,0.754},1},{},{{0.985,0.78},1},{{1.005,0.78},1},{},{{0.94,0.78},1},{{0.96,0.78},1},{},{{0.125,0.93},1},{{0.215,0.93},1},{{0.215,0.98},1},{{0.125,0.98},1},{{0.125,0.93},1},{},{{0.8,0.014},1},{{0.87,0.014},1},{},{{0.51,0.014},1},{{0.61,0.014},1},{},{{0.38,0.014},1},{{0.46,0.014},1},{},{{0.135,0.014},1},{{0.2,0.014},1},{}};
						};
						class StaticBold
						{
							type = "line";
							width = 6.0;
							points[] = {{{0.362913,0.242588},1},{{0.354605,0.224563},1},{},{{0.5,0.213041},1},{{0.5,0.16053},1},{},{{0.637087,0.242588},1},{{0.645395,0.224563},1},{},{"HUDCenter",{-0.108,0},1},{"HUDCenter",{-0.027,0},1},{"HUDCenter",{-0.0135,0.0285},1},{"HUDCenter",{0,0},1},{"HUDCenter",{0.0135,0.0285},1},{"HUDCenter",{0.027,0},1},{"HUDCenter",{0.108,0},1},{}};
						};
						class DrawBankLeft
						{
							condition = "(horizonBank<=-0.4)";
							color[] = {1,1,1};
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{{0.177542,0.4705},1},{{0.157999,0.466288},1},{},{{0.181437,0.422277},1},{{0.172068,0.418815},1},{},{{0.201589,0.378557},1},{{0.192812,0.373809},1},{},{{0.235821,0.344061},1},{{0.219811,0.332186},1},{},{{0.259584,0.3018},1},{{0.252513,0.294794},1},{},{{0.302238,0.278256},1},{{0.290253,0.262393},1},{},{{0.337055,0.244339},1},{{0.332263,0.235644},1},{}};
							};
						};
						class DrawBankRight
						{
							condition = "(horizonBank>=0.4)";
							color[] = {1,1,1};
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{{0.662945,0.244339},1},{{0.667737,0.235644},1},{},{{0.697762,0.278256},1},{{0.709747,0.262393},1},{},{{0.740416,0.3018},1},{{0.747487,0.294794},1},{},{{0.764179,0.344061},1},{{0.780189,0.332186},1},{},{{0.798411,0.378557},1},{{0.807188,0.373809},1},{},{{0.818563,0.422277},1},{{0.827932,0.418815},1},{},{{0.822458,0.4705},1},{{0.842001,0.466288},1},{}};
							};
						};
						class RadarAltitude
						{
							condition = "62-altitudeAGL";
							class RadarHeight
							{
								type = "line";
								width = 15;
								points[] = {{{0.973,0.78},1},{"RadarHeight",{0,0.0},1},{}};
							};
						};
						class HeadingHeadNumber
						{
							type = "text";
							source = "heading";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.5,"0.042+0.05"},1};
							right[] = {{0.54,"0.042+0.05"},1};
							down[] = {{0.5,0.132},1};
						};
						class HeadingScaleRight
						{
							clipTL[] = {0.55,0.0};
							clipBR[] = {0.77,0.5};
							class lines
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								width = 4.0;
								NeverEatSeaWeed = 1;
								top = 0.5;
								center = 0.5;
								bottom = 0.82;
								lineXleft = 0.16;
								lineYright = 0.15;
								lineXleftMajor = 0.16;
								lineYrightMajor = 0.14;
								majorLineEach = 3;
								numberEach = 3;
								step = 1;
								stepSize = 0.0263889;
								align = "center";
								scale = 1;
								pos[] = {0.495,"0.05+0.05"};
								right[] = {0.52,"0.05+0.05"};
								down[] = {0.495,"0.08+0.05"};
							};
						};
						class HeadingScaleMidle
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 0.1;
							width = 4.0;
							NeverEatSeaWeed = 1;
							top = 0.45;
							center = 0.5;
							bottom = 0.55;
							lineXleft = 0.16;
							lineYright = 0.15;
							lineXleftMajor = 0.16;
							lineYrightMajor = 0.15;
							majorLineEach = 2;
							step = 1;
							stepSize = 0.0263889;
							align = "center";
							scale = 1;
							numberEach = 0;
							pos[] = {0.47,"0.05+0.05"};
							right[] = {0.5,"0.05+0.05"};
							down[] = {0.45,"0.09+0.05"};
						};
						class HeadingScaleLeft
						{
							clipTL[] = {0.23,0.0};
							clipBR[] = {0.45,0.5};
							class lines
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								width = 4.0;
								NeverEatSeaWeed = 1;
								top = 0.17;
								center = 0.5;
								bottom = 0.55;
								lineXleft = 0.16;
								lineYright = 0.15;
								lineXleftMajor = 0.16;
								lineYrightMajor = 0.14;
								majorLineEach = 3;
								numberEach = 3;
								step = 1;
								stepSize = 0.0263889;
								align = "center";
								scale = 1;
								pos[] = {0.166,"0.05+0.05"};
								right[] = {0.191,"0.05+0.05"};
								down[] = {0.166,"0.08+0.05"};
							};
						};
						class HorizonBankRot
						{
							type = "polygon";
							width = 4.0;
							points[] = {{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.00260472,-0.014636},1},{"HorizonBankRot",{0.0051303,-0.0139655},1},{"HorizonBankRot",{0.0075,-0.0128707},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0075,-0.0128707},1},{"HorizonBankRot",{0.00964181,-0.0113848},1},{"HorizonBankRot",{0.0114907,-0.00955295},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0114907,-0.00955295},1},{"HorizonBankRot",{0.0129904,-0.00743088},1},{"HorizonBankRot",{0.0140954,-0.00508302},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0140954,-0.00508302},1},{"HorizonBankRot",{0.0147721,-0.00258072},1},{"HorizonBankRot",{0.015,6.49628e-10},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.015,6.49628e-10},1},{"HorizonBankRot",{0.0147721,0.00258072},1},{"HorizonBankRot",{0.0140954,0.00508302},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0140954,0.00508302},1},{"HorizonBankRot",{0.0129904,0.00743088},1},{"HorizonBankRot",{0.0114907,0.00955295},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0114907,0.00955295},1},{"HorizonBankRot",{0.00964181,0.0113848},1},{"HorizonBankRot",{0.0075,0.0128707},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0075,0.0128707},1},{"HorizonBankRot",{0.0051303,0.0139655},1},{"HorizonBankRot",{0.00260472,0.014636},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.00260472,0.014636},1},{"HorizonBankRot",{-1.31134e-09,0.0148618},1},{"HorizonBankRot",{-0.00260473,0.014636},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.00260473,0.014636},1},{"HorizonBankRot",{-0.0051303,0.0139655},1},{"HorizonBankRot",{-0.0075,0.0128707},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0075,0.0128707},1},{"HorizonBankRot",{-0.00964181,0.0113848},1},{"HorizonBankRot",{-0.0114907,0.00955295},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0114907,0.00955295},1},{"HorizonBankRot",{-0.0129904,0.00743087},1},{"HorizonBankRot",{-0.0140954,0.00508302},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0140954,0.00508302},1},{"HorizonBankRot",{-0.0147721,0.00258072},1},{"HorizonBankRot",{-0.015,-1.77225e-10},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.015,-1.77225e-10},1},{"HorizonBankRot",{-0.0147721,-0.00258072},1},{"HorizonBankRot",{-0.0140954,-0.00508302},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0140954,-0.00508302},1},{"HorizonBankRot",{-0.0129904,-0.00743088},1},{"HorizonBankRot",{-0.0114907,-0.00955295},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0114907,-0.00955295},1},{"HorizonBankRot",{-0.00964181,-0.0113848},1},{"HorizonBankRot",{-0.0075,-0.0128707},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0075,-0.0128707},1},{"HorizonBankRot",{-0.00513031,-0.0139655},1},{"HorizonBankRot",{-0.00260472,-0.014636},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.00260472,-0.014636},1},{"HorizonBankRot",{2.62268e-09,-0.0148618},1},{"HorizonBankRot",{0.00260472,-0.014636},1}},{{"FCR_Bearing",{-0.019,0},1},{"FCR_Bearing",{-0.008,0},1},{"FCR_Bearing",{-0.008,0.011},1},{"FCR_Bearing",{-0.019,0.011},1}},{{"FCR_Bearing",{-0.003,0},1},{"FCR_Bearing",{0.008,0},1},{"FCR_Bearing",{0.008,0.011},1},{"FCR_Bearing",{-0.003,0.011},1}},{{"FCR_Bearing",{0.008,0},1},{"FCR_Bearing",{0.014,0.0055},1},{"FCR_Bearing",{0.008,0.011},1}},{{"FCR_Bearing",{-0.019,0},1},{"FCR_Bearing",{-0.025,0.0055},1},{"FCR_Bearing",{-0.019,0.011},1}},{{"TurnRate",{-0.013,0},1},{"TurnRate",{0.017,0},1},{"TurnRate",{0.017,0.03},1},{"TurnRate",{-0.013,0.03},1}},{{{0.4,0.865},1},{{0.42,0.845},1},{{0.44,0.865},1}},{{{0.48,0.865},1},{{0.5,0.845},1},{{0.52,0.865},1}},{{{0.56,0.865},1},{{0.58,0.845},1},{{0.6,0.865},1}},{{"HorizonBankRot_Up",{0,-0.287327},1},{"HorizonBankRot_Up",{0.01,-0.267512},1},{"HorizonBankRot_Up",{-0.01,-0.267512},1}},{{{0.87,0.0068},1},{{0.89,0.014},1},{{0.87,0.0212},1}},{{{0.59,0.0068},1},{{0.61,0.014},1},{{0.59,0.0212},1}},{{{0.46,0.0068},1},{{0.48,0.014},1},{{0.46,0.0212},1}},{{{0.19,0.0068},1},{{0.21,0.014},1},{{0.19,0.0212},1}},{{"VerticalSpeedBone",{0.92,0.508},1},{"VerticalSpeedBone",{0.94,0.52},1},{"VerticalSpeedBone",{0.92,0.532},1}}};
						};
						class CollectiveGroup
						{
							condition = "simulRTD";
							class CollectiveText
							{
								type = "text";
								source = "static";
								text = "%";
								align = "right";
								scale = 1;
								pos[] = {{0.11,0.13},1};
								right[] = {{0.15,0.13},1};
								down[] = {{0.11,0.17},1};
							};
							class CollectiveNumber
							{
								type = "text";
								source = "rtdRotorTorque";
								sourceScale = 200;
								align = "left";
								scale = 1;
								pos[] = {{0.11,0.13},1};
								right[] = {{0.15,0.13},1};
								down[] = {{0.11,0.17},1};
							};
						};
						class Speed_Normal
						{
							condition = "speed<=108";
							class SpeedNumber
							{
								type = "text";
								source = "speed";
								sourceScale = 1.9438444;
								align = "right";
								scale = 1;
								pos[] = {{0.07,0.48},1};
								right[] = {{0.11,0.48},1};
								down[] = {{0.07,0.52},1};
							};
						};
						class Speed_VNE: Speed_Normal
						{
							condition = "speed>=108";
							color[] = {1,0,0};
							class SpeedNumber: SpeedNumber{};
						};
						class AltNumber
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 3.28084;
							sourceOffset = -6.88976;
							align = "left";
							scale = 1;
							pos[] = {{0.91,0.505},1};
							right[] = {{0.94,0.505},1};
							down[] = {{0.91,0.535},1};
						};
						class AslNumber
						{
							type = "text";
							source = "altitudeASL";
							sourceScale = 3.28084;
							sourceOffset = -6.56168;
							align = "left";
							scale = 1;
							pos[] = {{0.92,0.115},1};
							right[] = {{0.96,0.115},1};
							down[] = {{0.92,0.155},1};
						};
						class WP
						{
							condition = "wpvalid";
							class WPdist
							{
								type = "text";
								source = "wpdist";
								sourceScale = 0.001;
								sourcePrecision = 1;
								align = "left";
								scale = 1;
								pos[] = {{"0.26+-0.03","0.735+0.05"},1};
								right[] = {{0.265,"0.735+0.05"},1};
								down[] = {{"0.26+-0.03",0.82},1};
							};
							class WPIndex
							{
								type = "text";
								source = "wpIndex";
								sourceScale = 1;
								sourceLength = 2;
								align = "right";
								scale = 1;
								pos[] = {{"0.09+-0.03","0.735+0.05"},1};
								right[] = {{0.095,"0.735+0.05"},1};
								down[] = {{"0.09+-0.03",0.82},1};
							};
							class WPGroundSpeed
							{
								type = "text";
								source = "speed";
								sourceScale = 1.9438444;
								align = "right";
								scale = 1;
								pos[] = {{"0.055+-0.03","0.735+0.055+0.05"},1};
								right[] = {{0.06,"0.735+0.055+0.05"},1};
								down[] = {{"0.055+-0.03",0.875},1};
							};
							class WPstatic
							{
								type = "text";
								source = "static";
								text = "W";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"-0.03 + 0.055",0.785},1};
								right[] = {{0.06,0.785},1};
								down[] = {{"-0.03 + 0.055",0.82},1};
							};
							class WPAuto
							{
								type = "text";
								source = "static";
								text = "";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"-0.03 + 0.055 +0.035",0.84},1};
								right[] = {{0.095,0.84},1};
								down[] = {{"-0.03 + 0.055 +0.035",0.875},1};
							};
							class WPKM
							{
								type = "text";
								source = "static";
								text = "KM";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"-0.03 + 0.055 +0.21",0.785},1};
								right[] = {{0.27,0.785},1};
								down[] = {{"-0.03 + 0.055 +0.21",0.82},1};
							};
							class WPTime_NoEst
							{
								condition = "(speed<=5)+(wpdist<=1)";
								class WPTime
								{
									type = "text";
									source = "static";
									text = "-:--";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"-0.03 + 0.055 +0.15",0.84},1};
									right[] = {{0.21,0.84},1};
									down[] = {{"-0.03 + 0.055 +0.15",0.875},1};
								};
							};
							class WPTime_Est
							{
								condition = "(speed>=5)*(wpdist>=1)";
								class WPTime
								{
									type = "text";
									source = "userText";
									sourceIndex = 1;
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.175,0.84},1};
									right[] = {{0.21,0.84},1};
									down[] = {{0.175,0.875},1};
								};
							};
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{"WPPoint",1,"LimitWaypoint",1,{-0.01,0.04},1},{"WPPoint",1,"LimitWaypoint",1,{0.0,0.02},1},{"WPPoint",1,"LimitWaypoint",1,{0.01,0.04},1},{},{{0.0174,0.774},1},{{0.01195,0.781},1},{{0.00650001,0.788},1},{{0.00650001,0.872},1},{{0.01195,0.879},1},{{0.0174,0.886},1},{{0.3008,0.886},1},{{0.30625,0.879},1},{{0.3117,0.872},1},{{0.3117,0.788},1},{{0.30625,0.781},1},{{0.3008,0.774},1},{{0.0174,0.774},1},{}};
							};
						};
						class Cyan
						{
							color[] = {0.01,0.36,0.83};
							alpha = 0.5;
							class HorizontalLine
							{
								clipTL[] = {0.2,0.25};
								clipBR[] = {0.8,0.75};
								class LevelP05
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP05",{-0.005,0},1},{"LevelP05",{0.025,0},1}};
								};
								class LevelP15
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP15",{-0.005,0},1},{"LevelP15",{0.025,0},1}};
								};
								class LevelP25
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP25",{-0.005,0},1},{"LevelP25",{0.025,0},1}};
								};
								class LevelP35
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP35",{-0.005,0},1},{"LevelP35",{0.025,0},1}};
								};
								class LevelP45
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP45",{-0.005,0},1},{"LevelP45",{0.025,0},1}};
								};
								class LevelP10
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP10",{-0.166,0.02},1},{"LevelP10",{-0.166,0},1},{"LevelP10",{-0.04,0},1},{},{"LevelP10",{0.054,0},1},{"LevelP10",{0.194,0},1},{"LevelP10",{0.194,0.02},1}};
								};
								class VALP_1_10
								{
									type = "text";
									source = "static";
									text = "10";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP10",{-0.19,-0.017},1};
									right[] = {"LevelP10",{-0.15,-0.017},1};
									down[] = {"LevelP10",{-0.19,0.031},1};
								};
								class VALP_1_10_R
								{
									type = "text";
									source = "static";
									text = "10";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP10",{0.21,-0.017},1};
									right[] = {"LevelP10",{0.25,-0.017},1};
									down[] = {"LevelP10",{0.21,0.031},1};
								};
								class LevelP20
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP20",{-0.166,0.02},1},{"LevelP20",{-0.166,0},1},{"LevelP20",{-0.04,0},1},{},{"LevelP20",{0.054,0},1},{"LevelP20",{0.194,0},1},{"LevelP20",{0.194,0.02},1}};
								};
								class VALP_1_20
								{
									type = "text";
									source = "static";
									text = "20";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP20",{-0.19,-0.017},1};
									right[] = {"LevelP20",{-0.15,-0.017},1};
									down[] = {"LevelP20",{-0.19,0.031},1};
								};
								class VALP_1_20_R
								{
									type = "text";
									source = "static";
									text = "20";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP20",{0.21,-0.017},1};
									right[] = {"LevelP20",{0.25,-0.017},1};
									down[] = {"LevelP20",{0.21,0.031},1};
								};
								class LevelP30
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP30",{-0.166,0.02},1},{"LevelP30",{-0.166,0},1},{"LevelP30",{-0.04,0},1},{},{"LevelP30",{0.054,0},1},{"LevelP30",{0.194,0},1},{"LevelP30",{0.194,0.02},1}};
								};
								class VALP_1_30
								{
									type = "text";
									source = "static";
									text = "30";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP30",{-0.19,-0.017},1};
									right[] = {"LevelP30",{-0.15,-0.017},1};
									down[] = {"LevelP30",{-0.19,0.031},1};
								};
								class VALP_1_30_R
								{
									type = "text";
									source = "static";
									text = "30";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP30",{0.21,-0.017},1};
									right[] = {"LevelP30",{0.25,-0.017},1};
									down[] = {"LevelP30",{0.21,0.031},1};
								};
								class LevelP40
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP40",{-0.166,0.02},1},{"LevelP40",{-0.166,0},1},{"LevelP40",{-0.04,0},1},{},{"LevelP40",{0.054,0},1},{"LevelP40",{0.194,0},1},{"LevelP40",{0.194,0.02},1}};
								};
								class VALP_1_40
								{
									type = "text";
									source = "static";
									text = "40";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP40",{-0.19,-0.017},1};
									right[] = {"LevelP40",{-0.15,-0.017},1};
									down[] = {"LevelP40",{-0.19,0.031},1};
								};
								class VALP_1_40_R
								{
									type = "text";
									source = "static";
									text = "40";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP40",{0.21,-0.017},1};
									right[] = {"LevelP40",{0.25,-0.017},1};
									down[] = {"LevelP40",{0.21,0.031},1};
								};
								class LevelP50
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP50",{-0.166,0.02},1},{"LevelP50",{-0.166,0},1},{"LevelP50",{-0.04,0},1},{},{"LevelP50",{0.054,0},1},{"LevelP50",{0.194,0},1},{"LevelP50",{0.194,0.02},1}};
								};
								class VALP_1_50
								{
									type = "text";
									source = "static";
									text = "50";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP50",{-0.19,-0.017},1};
									right[] = {"LevelP50",{-0.15,-0.017},1};
									down[] = {"LevelP50",{-0.19,0.031},1};
								};
								class VALP_1_50_R
								{
									type = "text";
									source = "static";
									text = "50";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP50",{0.21,-0.017},1};
									right[] = {"LevelP50",{0.25,-0.017},1};
									down[] = {"LevelP50",{0.21,0.031},1};
								};
								class LevelP60
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP60",{-0.166,0.02},1},{"LevelP60",{-0.166,0},1},{"LevelP60",{-0.04,0},1},{},{"LevelP60",{0.054,0},1},{"LevelP60",{0.194,0},1},{"LevelP60",{0.194,0.02},1}};
								};
								class VALP_1_60
								{
									type = "text";
									source = "static";
									text = "60";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP60",{-0.19,-0.017},1};
									right[] = {"LevelP60",{-0.15,-0.017},1};
									down[] = {"LevelP60",{-0.19,0.031},1};
								};
								class VALP_1_60_R
								{
									type = "text";
									source = "static";
									text = "60";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP60",{0.21,-0.017},1};
									right[] = {"LevelP60",{0.25,-0.017},1};
									down[] = {"LevelP60",{0.21,0.031},1};
								};
								class LevelP70
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP70",{-0.166,0.02},1},{"LevelP70",{-0.166,0},1},{"LevelP70",{-0.04,0},1},{},{"LevelP70",{0.054,0},1},{"LevelP70",{0.194,0},1},{"LevelP70",{0.194,0.02},1}};
								};
								class VALP_1_70
								{
									type = "text";
									source = "static";
									text = "70";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP70",{-0.19,-0.017},1};
									right[] = {"LevelP70",{-0.15,-0.017},1};
									down[] = {"LevelP70",{-0.19,0.031},1};
								};
								class VALP_1_70_R
								{
									type = "text";
									source = "static";
									text = "70";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP70",{0.21,-0.017},1};
									right[] = {"LevelP70",{0.25,-0.017},1};
									down[] = {"LevelP70",{0.21,0.031},1};
								};
								class LevelP80
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP80",{-0.166,0.02},1},{"LevelP80",{-0.166,0},1},{"LevelP80",{-0.04,0},1},{},{"LevelP80",{0.054,0},1},{"LevelP80",{0.194,0},1},{"LevelP80",{0.194,0.02},1}};
								};
								class VALP_1_80
								{
									type = "text";
									source = "static";
									text = "80";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP80",{-0.19,-0.017},1};
									right[] = {"LevelP80",{-0.15,-0.017},1};
									down[] = {"LevelP80",{-0.19,0.031},1};
								};
								class VALP_1_80_R
								{
									type = "text";
									source = "static";
									text = "80";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP80",{0.21,-0.017},1};
									right[] = {"LevelP80",{0.25,-0.017},1};
									down[] = {"LevelP80",{0.21,0.031},1};
								};
							};
						};
						class Brown
						{
							color[] = {0.94,0.18,0};
							alpha = 0.5;
							class HorizontalLine
							{
								clipTL[] = {0.2,0.25};
								clipBR[] = {0.8,0.75};
								class Level0
								{
									type = "line";
									source = "Level0";
									width = 3;
									points[] = {{"Level0",{-0.54,0},1},{"Level0",{-0.0675,0},1},{},{"Level0",{0.0675,0},1},{"Level0",{0.54,0},1}};
								};
								class LevelM05
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM05",{-0.005,0},1},{"LevelM05",{0.025,0},1}};
								};
								class LevelM15
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM15",{-0.005,0},1},{"LevelM15",{0.025,0},1}};
								};
								class LevelM25
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM25",{-0.005,0},1},{"LevelM25",{0.025,0},1}};
								};
								class LevelM35
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM35",{-0.005,0},1},{"LevelM35",{0.025,0},1}};
								};
								class LevelM45
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM45",{-0.005,0},1},{"LevelM45",{0.025,0},1}};
								};
								class LevelM10
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM10",{-0.166,-0.02},1},{"LevelM10",{-0.166,0},1},{"LevelM10",{-0.138,0},1},{},{"LevelM10",{-0.124,0},1},{"LevelM10",{-0.096,0},1},{},{"LevelM10",{-0.082,0},1},{"LevelM10",{-0.054,0},1},{},{},{"LevelM10",{0.166,-0.02},1},{"LevelM10",{0.166,0},1},{"LevelM10",{0.138,0},1},{},{"LevelM10",{0.124,0},1},{"LevelM10",{0.096,0},1},{},{"LevelM10",{0.082,0},1},{"LevelM10",{0.054,0},1},{}};
								};
								class VALM_1_10
								{
									type = "text";
									source = "static";
									text = 10;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM10",{-0.18,-0.032},1};
									right[] = {"LevelM10",{-0.14,-0.032},1};
									down[] = {"LevelM10",{-0.18,0.016},1};
								};
								class VALM_1_10_R
								{
									type = "text";
									source = "static";
									text = 10;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM10",{0.18,-0.032},1};
									right[] = {"LevelM10",{0.22,-0.032},1};
									down[] = {"LevelM10",{0.18,0.016},1};
								};
								class LevelM20
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM20",{-0.166,-0.02},1},{"LevelM20",{-0.166,0},1},{"LevelM20",{-0.138,0},1},{},{"LevelM20",{-0.124,0},1},{"LevelM20",{-0.096,0},1},{},{"LevelM20",{-0.082,0},1},{"LevelM20",{-0.054,0},1},{},{},{"LevelM20",{0.166,-0.02},1},{"LevelM20",{0.166,0},1},{"LevelM20",{0.138,0},1},{},{"LevelM20",{0.124,0},1},{"LevelM20",{0.096,0},1},{},{"LevelM20",{0.082,0},1},{"LevelM20",{0.054,0},1},{}};
								};
								class VALM_1_20
								{
									type = "text";
									source = "static";
									text = 20;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM20",{-0.18,-0.032},1};
									right[] = {"LevelM20",{-0.14,-0.032},1};
									down[] = {"LevelM20",{-0.18,0.016},1};
								};
								class VALM_1_20_R
								{
									type = "text";
									source = "static";
									text = 20;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM20",{0.18,-0.032},1};
									right[] = {"LevelM20",{0.22,-0.032},1};
									down[] = {"LevelM20",{0.18,0.016},1};
								};
								class LevelM30
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM30",{-0.166,-0.02},1},{"LevelM30",{-0.166,0},1},{"LevelM30",{-0.138,0},1},{},{"LevelM30",{-0.124,0},1},{"LevelM30",{-0.096,0},1},{},{"LevelM30",{-0.082,0},1},{"LevelM30",{-0.054,0},1},{},{},{"LevelM30",{0.166,-0.02},1},{"LevelM30",{0.166,0},1},{"LevelM30",{0.138,0},1},{},{"LevelM30",{0.124,0},1},{"LevelM30",{0.096,0},1},{},{"LevelM30",{0.082,0},1},{"LevelM30",{0.054,0},1},{}};
								};
								class VALM_1_30
								{
									type = "text";
									source = "static";
									text = 30;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM30",{-0.18,-0.032},1};
									right[] = {"LevelM30",{-0.14,-0.032},1};
									down[] = {"LevelM30",{-0.18,0.016},1};
								};
								class VALM_1_30_R
								{
									type = "text";
									source = "static";
									text = 30;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM30",{0.18,-0.032},1};
									right[] = {"LevelM30",{0.22,-0.032},1};
									down[] = {"LevelM30",{0.18,0.016},1};
								};
								class LevelM40
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM40",{-0.166,-0.02},1},{"LevelM40",{-0.166,0},1},{"LevelM40",{-0.138,0},1},{},{"LevelM40",{-0.124,0},1},{"LevelM40",{-0.096,0},1},{},{"LevelM40",{-0.082,0},1},{"LevelM40",{-0.054,0},1},{},{},{"LevelM40",{0.166,-0.02},1},{"LevelM40",{0.166,0},1},{"LevelM40",{0.138,0},1},{},{"LevelM40",{0.124,0},1},{"LevelM40",{0.096,0},1},{},{"LevelM40",{0.082,0},1},{"LevelM40",{0.054,0},1},{}};
								};
								class VALM_1_40
								{
									type = "text";
									source = "static";
									text = 40;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM40",{-0.18,-0.032},1};
									right[] = {"LevelM40",{-0.14,-0.032},1};
									down[] = {"LevelM40",{-0.18,0.016},1};
								};
								class VALM_1_40_R
								{
									type = "text";
									source = "static";
									text = 40;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM40",{0.18,-0.032},1};
									right[] = {"LevelM40",{0.22,-0.032},1};
									down[] = {"LevelM40",{0.18,0.016},1};
								};
								class LevelM50
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM50",{-0.166,-0.02},1},{"LevelM50",{-0.166,0},1},{"LevelM50",{-0.138,0},1},{},{"LevelM50",{-0.124,0},1},{"LevelM50",{-0.096,0},1},{},{"LevelM50",{-0.082,0},1},{"LevelM50",{-0.054,0},1},{},{},{"LevelM50",{0.166,-0.02},1},{"LevelM50",{0.166,0},1},{"LevelM50",{0.138,0},1},{},{"LevelM50",{0.124,0},1},{"LevelM50",{0.096,0},1},{},{"LevelM50",{0.082,0},1},{"LevelM50",{0.054,0},1},{}};
								};
								class VALM_1_50
								{
									type = "text";
									source = "static";
									text = 50;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM50",{-0.18,-0.032},1};
									right[] = {"LevelM50",{-0.14,-0.032},1};
									down[] = {"LevelM50",{-0.18,0.016},1};
								};
								class VALM_1_50_R
								{
									type = "text";
									source = "static";
									text = 50;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM50",{0.18,-0.032},1};
									right[] = {"LevelM50",{0.22,-0.032},1};
									down[] = {"LevelM50",{0.18,0.016},1};
								};
								class LevelM60
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM60",{-0.166,-0.02},1},{"LevelM60",{-0.166,0},1},{"LevelM60",{-0.138,0},1},{},{"LevelM60",{-0.124,0},1},{"LevelM60",{-0.096,0},1},{},{"LevelM60",{-0.082,0},1},{"LevelM60",{-0.054,0},1},{},{},{"LevelM60",{0.166,-0.02},1},{"LevelM60",{0.166,0},1},{"LevelM60",{0.138,0},1},{},{"LevelM60",{0.124,0},1},{"LevelM60",{0.096,0},1},{},{"LevelM60",{0.082,0},1},{"LevelM60",{0.054,0},1},{}};
								};
								class VALM_1_60
								{
									type = "text";
									source = "static";
									text = 60;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM60",{-0.18,-0.032},1};
									right[] = {"LevelM60",{-0.14,-0.032},1};
									down[] = {"LevelM60",{-0.18,0.016},1};
								};
								class VALM_1_60_R
								{
									type = "text";
									source = "static";
									text = 60;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM60",{0.18,-0.032},1};
									right[] = {"LevelM60",{0.22,-0.032},1};
									down[] = {"LevelM60",{0.18,0.016},1};
								};
								class LevelM70
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM70",{-0.166,-0.02},1},{"LevelM70",{-0.166,0},1},{"LevelM70",{-0.138,0},1},{},{"LevelM70",{-0.124,0},1},{"LevelM70",{-0.096,0},1},{},{"LevelM70",{-0.082,0},1},{"LevelM70",{-0.054,0},1},{},{},{"LevelM70",{0.166,-0.02},1},{"LevelM70",{0.166,0},1},{"LevelM70",{0.138,0},1},{},{"LevelM70",{0.124,0},1},{"LevelM70",{0.096,0},1},{},{"LevelM70",{0.082,0},1},{"LevelM70",{0.054,0},1},{}};
								};
								class VALM_1_70
								{
									type = "text";
									source = "static";
									text = 70;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM70",{-0.18,-0.032},1};
									right[] = {"LevelM70",{-0.14,-0.032},1};
									down[] = {"LevelM70",{-0.18,0.016},1};
								};
								class VALM_1_70_R
								{
									type = "text";
									source = "static";
									text = 70;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM70",{0.18,-0.032},1};
									right[] = {"LevelM70",{0.22,-0.032},1};
									down[] = {"LevelM70",{0.18,0.016},1};
								};
								class LevelM80
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM80",{-0.166,-0.02},1},{"LevelM80",{-0.166,0},1},{"LevelM80",{-0.138,0},1},{},{"LevelM80",{-0.124,0},1},{"LevelM80",{-0.096,0},1},{},{"LevelM80",{-0.082,0},1},{"LevelM80",{-0.054,0},1},{},{},{"LevelM80",{0.166,-0.02},1},{"LevelM80",{0.166,0},1},{"LevelM80",{0.138,0},1},{},{"LevelM80",{0.124,0},1},{"LevelM80",{0.096,0},1},{},{"LevelM80",{0.082,0},1},{"LevelM80",{0.054,0},1},{}};
								};
								class VALM_1_80
								{
									type = "text";
									source = "static";
									text = 80;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM80",{-0.18,-0.032},1};
									right[] = {"LevelM80",{-0.14,-0.032},1};
									down[] = {"LevelM80",{-0.18,0.016},1};
								};
								class VALM_1_80_R
								{
									type = "text";
									source = "static";
									text = 80;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM80",{0.18,-0.032},1};
									right[] = {"LevelM80",{0.22,-0.032},1};
									down[] = {"LevelM80",{0.18,0.016},1};
								};
							};
						};
						class Red
						{
							color[] = {1,0,0};
							alpha = 0.3;
							class LO_Alt
							{
								condition = "altitudeAGL <= 10";
								class Lo_ALT
								{
									type = "text";
									source = "static";
									text = "LO";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.91,0.57},1};
									right[] = {{0.95,0.57},1};
									down[] = {{0.91,0.61},1};
								};
							};
						};
						class Engine
						{
							type = "text";
							source = "static";
							text = "ENG";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.21,0.03},1};
							right[] = {{0.24,0.03},1};
							down[] = {{0.21,0.06},1};
						};
						class Fuel
						{
							type = "text";
							source = "static";
							text = "FUEL";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.48,0.03},1};
							right[] = {{0.51,0.03},1};
							down[] = {{0.48,0.06},1};
						};
						class Performance
						{
							type = "text";
							source = "static";
							text = "PERF";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.61,0.03},1};
							right[] = {{0.64,0.03},1};
							down[] = {{0.61,0.06},1};
						};
						class Utilities
						{
							type = "text";
							source = "static";
							text = "UTIL";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.89,0.03},1};
							right[] = {{0.92,0.03},1};
							down[] = {{0.89,0.06},1};
						};
						class Flight
						{
							type = "text";
							source = "static";
							text = "FLT";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.21,0.94},1};
							right[] = {{0.24,0.94},1};
							down[] = {{0.21,0.97},1};
						};
						class Set
						{
							type = "text";
							source = "static";
							text = "SET";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.89,0.94},1};
							right[] = {{0.92,0.94},1};
							down[] = {{0.89,0.97},1};
						};
						class Waterline
						{
							type = "text";
							source = "static";
							text = "-W-";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.08,0.69},1};
							right[] = {{0.11,0.69},1};
							down[] = {{0.08,0.72},1};
						};
					};
				};
				class MFD_Left_Weapons
				{
					topLeft = "GUNNER_MFD_L_TL";
					topRight = "GUNNER_MFD_L_TR";
					bottomLeft = "GUNNER_MFD_L_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {-2};
					class Bones
					{
						class HUDCenter
						{
							type = "fixed";
							pos[] = {0.5,0.5};
						};
					};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on*(user6>=1)*(user6<=1)";
						class Weapons
						{
							condition = "((mgun+rocket+missile+bomb)>=1)+(ammo<=0)";
							class Static
							{
								type = "line";
								width = 5.0;
								points[] = {{{0.213896,0.996468},1},{{0.138771,0.996468},1},{{0.138771,0.956169},1},{{0.213896,0.956169},1},{{0.213896,0.996468},1},{},{{0.999468,0.854677},1},{{0.923348,0.854677},1},{{0.923348,0.815373},1},{{0.999468,0.815373},1},{{0.999468,0.854677},1},{},{{0.999468,0.731294},1},{{0.880065,0.731294},1},{{0.880065,0.691493},1},{{0.999468,0.691493},1},{{0.999468,0.731294},1},{},{{0.437279,0.620846},1},{{0.440264,0.611891},1},{{0.445736,0.60592},1},{{0.454194,0.601443},1},{{0.549219,0.601443},1},{{0.556184,0.605423},1},{{0.563647,0.612886},1},{{0.565139,0.624826},1},{{0.565139,0.725821},1},{{0.564642,0.733284},1},{{0.558174,0.742239},1},{{0.547726,0.747711},1},{{0.452204,0.747711},1},{{0.445239,0.742736},1},{{0.438771,0.734776},1},{{0.437279,0.725821},1},{{0.437279,0.620846},1},{},{{0.257179,0.139254},1},{{0.259667,0.130796},1},{{0.265637,0.123831},1},{{0.276582,0.119353},1},{{0.365637,0.119353},1},{{0.378572,0.123831},1},{{0.384045,0.130796},1},{{0.386532,0.139254},1},{{0.386532,0.199453},1},{{0.384045,0.208408},1},{{0.378572,0.214876},1},{{0.365637,0.219851},1},{{0.276582,0.219851},1},{{0.265637,0.214876},1},{{0.259667,0.208408},1},{{0.257179,0.199453},1},{{0.257179,0.139254},1},{},{{0.618373,0.139254},1},{{0.620861,0.130796},1},{{0.626831,0.123831},1},{{0.638274,0.119353},1},{{0.726831,0.119353},1},{{0.740264,0.123831},1},{{0.745239,0.130796},1},{{0.747726,0.139254},1},{{0.747726,0.199453},1},{{0.745239,0.208408},1},{{0.740264,0.214876},1},{{0.726831,0.219851},1},{{0.638274,0.219851},1},{{0.626831,0.214876},1},{{0.620861,0.208408},1},{{0.618373,0.199453},1},{{0.618373,0.139254},1},{},{{0.642254,0.263134},1},{{0.644741,0.255672},1},{{0.649219,0.249701},1},{{0.658174,0.245721},1},{{0.730313,0.245721},1},{{0.741259,0.249701},1},{{0.745239,0.255672},1},{{0.747229,0.263134},1},{{0.747229,0.315373},1},{{0.745239,0.322836},1},{{0.741259,0.328308},1},{{0.730313,0.332786},1},{{0.658174,0.332786},1},{{0.649219,0.328308},1},{{0.644741,0.322836},1},{{0.642254,0.315373},1},{{0.642254,0.263134},1},{},{{0.257179,0.263134},1},{{0.259169,0.255672},1},{{0.263647,0.249701},1},{{0.2731,0.245721},1},{{0.345239,0.245721},1},{{0.355687,0.249701},1},{{0.360164,0.255672},1},{{0.362154,0.263134},1},{{0.362154,0.315373},1},{{0.360164,0.322836},1},{{0.355687,0.328308},1},{{0.345239,0.332786},1},{{0.2731,0.332786},1},{{0.263647,0.328308},1},{{0.259169,0.322836},1},{{0.257179,0.315373},1},{{0.257179,0.263134},1},{},{{0.495488,0.249701},1},{{0.495488,0.230299},1},{{0.50892,0.230299},1},{{0.50892,0.249701},1},{{0.495488,0.249701},1},{},{{0.49698,0.306915},1},{{0.49698,0.249701},1},{{0.507428,0.249701},1},{{0.507428,0.306915},1},{{0.49698,0.306915},1},{},{{0.479567,0.371095},1},{{0.479567,0.315871},1},{{0.48305,0.3099},1},{{0.489517,0.306915},1},{{0.515886,0.306915},1},{{0.521856,0.310398},1},{{0.525338,0.315871},1},{{0.525338,0.371095},1},{{0.479567,0.371095},1},{},{{0.439766,0.371095},1},{{0.564144,0.371095},1},{{0.564144,0.428806},1},{{0.439766,0.428806},1},{{0.439766,0.371095},1},{},{{0.421856,0.761144},1},{{0.420363,0.57607},1},{{0.18504,0.550199},1},{{0.18504,0.453682},1},{{0.419866,0.434776},1},{{0.419866,0.279552},1},{{0.425338,0.260647},1},{{0.430313,0.254179},1},{{0.439269,0.245224},1},{{0.453199,0.237264},1},{{0.462652,0.234279},1},{{0.470612,0.233284},1},{{0.471109,0.233284},1},{{0.471109,0.228806},1},{{0.473099,0.224328},1},{{0.47509,0.219353},1},{{0.478572,0.214876},1},{{0.484045,0.210398},1},{{0.490015,0.208408},1},{{0.493995,0.207413},1},{{0.510413,0.207413},1},{{0.516383,0.208905},1},{{0.522353,0.211393},1},{{0.526333,0.214378},1},{{0.529816,0.218856},1},{{0.532801,0.223831},1},{{0.534294,0.229303},1},{{0.534294,0.233781},1},{{0.541756,0.234279},1},{{0.550214,0.236269},1},{{0.559169,0.240746},1},{{0.566134,0.245224},1},{{0.573099,0.252189},1},{{0.577577,0.259652},1},{{0.580562,0.266617},1},{{0.582552,0.273085},1},{{0.583547,0.279552},1},{{0.584045,0.435274},1},{{0.819368,0.454179},1},{{0.819368,0.550697},1},{{0.584045,0.577065},1},{{0.583547,0.761144},1},{{0.421856,0.761144},1},{},{{0.8,0.014},1},{{0.87,0.014},1},{},{{0.68,0.014},1},{{0.76,0.014},1},{},{{0.51,0.014},1},{{0.61,0.014},1},{},{{0.135,0.014},1},{{0.2,0.014},1},{},{{0.265,0.014},1},{{0.33,0.014},1},{}};
							};
							class StaticBold
							{
								type = "line";
								width = 10.0;
								points[] = {};
							};
							class StaticThin
							{
								type = "line";
								width = 2.0;
								points[] = {};
							};
							class Polygons
							{
								type = "polygon";
								width = 4.0;
								points[] = {{{{0.87,0.0068},1},{{0.89,0.014},1},{{0.87,0.0212},1}},{{{0.75,0.0068},1},{{0.77,0.014},1},{{0.75,0.0212},1}},{{{0.59,0.0068},1},{{0.61,0.014},1},{{0.59,0.0212},1}},{{{0.32,0.0068},1},{{0.34,0.014},1},{{0.32,0.0212},1}},{{{0.19,0.0068},1},{{0.21,0.014},1},{{0.19,0.0212},1}}};
							};
							class Safemode
							{
								condition = "1-(bomb+mgun+atmissile+aamissile+rocket)";
								class Boresight
								{
									type = "text";
									source = "static";
									text = "BORESIGHT";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.005,0.683},1};
									right[] = {{0.032,0.683},1};
									down[] = {{0.005,0.713},1};
								};
								class Grayscale
								{
									type = "text";
									source = "static";
									text = "GRAYSCALE";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.005,0.8},1};
									right[] = {{0.032,0.8},1};
									down[] = {{0.005,0.83},1};
								};
								class Safemode
								{
									type = "text";
									source = "static";
									text = "SAFE";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.503,0.11},1};
									right[] = {{0.533,0.11},1};
									down[] = {{0.503,0.14},1};
								};
								class Static
								{
									type = "line";
									width = 5.0;
									points[] = {{{0.429318,0.0924876},1},{{0.432801,0.0830348},1},{{0.438771,0.0770647},1},{{0.448224,0.0735821},1},{{0.556682,0.0735821},1},{{0.567627,0.0785572},1},{{0.573099,0.0850249},1},{{0.57509,0.0944776},1},{{0.57509,0.157164},1},{{0.573099,0.165124},1},{{0.567129,0.171592},1},{{0.555189,0.17607},1},{{0.445736,0.17607},1},{{0.437279,0.171592},1},{{0.431308,0.164627},1},{{0.429318,0.157164},1},{{0.429318,0.0924876},1},{},{{0.013398,0.673085},1},{{0.20892,0.673085},1},{}};
								};
								class Polygons
								{
									type = "polygon";
									width = 4.0;
									points[] = {{{{0.195,0.6658},1},{{0.215,0.673},1},{{0.195,0.6802},1}}};
								};
							};
							class Armed
							{
								condition = "(bomb+mgun+missile+rocket)";
								color[] = {1,0.3,0};
								alpha = 0.3;
								class Static
								{
									type = "line";
									width = 12.0;
									points[] = {{{0.429318,0.0924876},1},{{0.432801,0.0830348},1},{{0.438771,0.0770647},1},{{0.448224,0.0735821},1},{{0.556682,0.0735821},1},{{0.567627,0.0785572},1},{{0.573099,0.0850249},1},{{0.57509,0.0944776},1},{{0.57509,0.157164},1},{{0.573099,0.165124},1},{{0.567129,0.171592},1},{{0.555189,0.17607},1},{{0.445736,0.17607},1},{{0.437279,0.171592},1},{{0.431308,0.164627},1},{{0.429318,0.157164},1},{{0.429318,0.0924876},1},{}};
								};
								class Polygons
								{
									type = "polygon";
									width = 4.0;
									points[] = {{{{0.43,0.075},1},{{0.57,0.075},1},{{0.57,0.175},1},{{0.43,0.175},1}}};
								};
								class BlackText
								{
									color[] = {0,0,0};
									alpha = 1;
									class Safemode
									{
										type = "text";
										source = "static";
										text = "ARM";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.11},1};
										right[] = {{0.543,0.11},1};
										down[] = {{0.503,0.15},1};
									};
									class Safemode1
									{
										type = "text";
										source = "static";
										text = "ARM";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.11},1};
										right[] = {{0.544,0.11},1};
										down[] = {{0.503,0.151},1};
									};
								};
							};
							class Rockets
							{
								condition = "rocket";
								class White
								{
									color[] = {1,1,1};
									class RocketCount
									{
										type = "text";
										source = "static";
										text = "TOTAL ROCKETS";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.78},1};
										right[] = {{0.529,0.78},1};
										down[] = {{0.503,0.808},1};
									};
									class RocketCountValue
									{
										type = "text";
										source = "ammo";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.82},1};
										right[] = {{0.529,0.82},1};
										down[] = {{0.503,0.848},1};
									};
								};
								class Quantity
								{
									type = "text";
									source = "static";
									text = "QTY";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.17},1};
									right[] = {{1.022,0.17},1};
									down[] = {{0.995,0.2},1};
								};
								class QuantityValue
								{
									type = "text";
									source = "weapon";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.21},1};
									right[] = {{1.022,0.21},1};
									down[] = {{0.995,0.24},1};
								};
								class FuzeSetting
								{
									type = "text";
									source = "static";
									text = "PEN";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.29},1};
									right[] = {{1.022,0.29},1};
									down[] = {{0.995,0.32},1};
								};
								class SuperQuickFuzing
								{
									type = "text";
									source = "static";
									text = "SPQ";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.33},1};
									right[] = {{1.022,0.33},1};
									down[] = {{0.995,0.36},1};
								};
								class INVENTORY1
								{
									type = "text";
									source = "static";
									text = "I";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.309},1};
									right[] = {{0.145,0.309},1};
									down[] = {{0.115,0.336},1};
								};
								class INVENTORY2
								{
									type = "text";
									source = "static";
									text = "N";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.339},1};
									right[] = {{0.145,0.339},1};
									down[] = {{0.115,0.366},1};
								};
								class INVENTORY3
								{
									type = "text";
									source = "static";
									text = "V";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.369},1};
									right[] = {{0.145,0.369},1};
									down[] = {{0.115,0.396},1};
								};
								class INVENTORY4
								{
									type = "text";
									source = "static";
									text = "E";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.399},1};
									right[] = {{0.145,0.399},1};
									down[] = {{0.115,0.426},1};
								};
								class INVENTORY5
								{
									type = "text";
									source = "static";
									text = "N";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.429},1};
									right[] = {{0.145,0.429},1};
									down[] = {{0.115,0.456},1};
								};
								class INVENTORY6
								{
									type = "text";
									source = "static";
									text = "T";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.459},1};
									right[] = {{0.145,0.459},1};
									down[] = {{0.115,0.486},1};
								};
								class INVENTORY7
								{
									type = "text";
									source = "static";
									text = "O";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.489},1};
									right[] = {{0.145,0.489},1};
									down[] = {{0.115,0.516},1};
								};
								class INVENTORY8
								{
									type = "text";
									source = "static";
									text = "R";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.519},1};
									right[] = {{0.145,0.519},1};
									down[] = {{0.115,0.546},1};
								};
								class INVENTORY9
								{
									type = "text";
									source = "static";
									text = "Y";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.549},1};
									right[] = {{0.145,0.549},1};
									down[] = {{0.115,0.576},1};
								};
								class Pylon2
								{
									type = "pylonicon";
									pos[] = {{0.005,0.15},1};
									pylon = 2;
									name = "RHS_AH64_Weap_MFD_Inventory";
								};
								class Pylon3: Pylon2
								{
									pos[] = {{0.005,0.27},1};
									pylon = 3;
								};
								class Pylon4: Pylon2
								{
									pos[] = {{0.005,0.39},1};
									pylon = 5;
								};
								class Pylon5: Pylon2
								{
									pos[] = {{0.005,0.51},1};
									pylon = 4;
								};
								class Static
								{
									type = "line";
									width = 5.0;
									points[] = {{{1.00046,0.364627},1},{{0.923846,0.364627},1},{{0.923846,0.324826},1},{{1.00046,0.324826},1},{{1.00046,0.364627},1},{},{{0.736781,0.997463},1},{{0.660662,0.997463},1},{{0.660662,0.956667},1},{{0.736781,0.956667},1},{{0.736781,0.997463},1},{},{{0.353199,0.783035},1},{{0.353199,0.843234},1},{{0.355687,0.847711},1},{{0.361159,0.853682},1},{{0.365637,0.855174},1},{{0.641756,0.855174},1},{{0.646731,0.853682},1},{{0.651706,0.851194},1},{{0.655687,0.843234},1},{{0.655687,0.783035},1},{{0.652204,0.777065},1},{{0.646731,0.77209},1},{{0.642751,0.7701},1},{{0.365139,0.7701},1},{{0.360662,0.77209},1},{{0.355687,0.777562},1},{{0.353199,0.783035},1},{},{{0.00941791,0.751692},1},{{0.10494,0.751692},1},{{0.10494,0.58403},1},{},{{0.00941791,0.140249},1},{{0.10494,0.140249},1},{{0.10494,0.307413},1},{}};
								};
								class BoxQuantity_1
								{
									condition = "user10<=4";
									class Static
									{
										type = "line";
										width = 5.0;
										points[] = {{{1.00046,0.241244},1},{{0.968124,0.241244},1},{{0.968124,0.201443},1},{{1.00046,0.201443},1},{{1.00046,0.241244},1},{}};
									};
								};
								class BoxQuantity_2: BoxQuantity_1
								{
									condition = "(user10>=5)*(user10<=6)";
									class Static: Static
									{
										points[] = {{{1.00046,0.241244},1},{{0.943249,0.241244},1},{{0.943249,0.201443},1},{{1.00046,0.201443},1},{{1.00046,0.241244},1},{}};
									};
								};
								class BoxQuantity_3: BoxQuantity_1
								{
									condition = "(user10>=7)";
									class Static: Static
									{
										points[] = {{{1.00046,0.241244},1},{{0.923348,0.241244},1},{{0.923348,0.201443},1},{{1.00046,0.201443},1},{{1.00046,0.241244},1},{}};
									};
								};
							};
							class Mgun
							{
								condition = "mgun";
								class GunMode
								{
									type = "text";
									source = "static";
									text = "MODE";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.29},1};
									right[] = {{1.022,0.29},1};
									down[] = {{0.995,0.32},1};
								};
								class GunModeValue
								{
									type = "text";
									source = "static";
									text = "NORM";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.33},1};
									right[] = {{1.022,0.33},1};
									down[] = {{0.995,0.36},1};
								};
								class Store1
								{
									type = "text";
									source = "static";
									text = "STORE";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.503,0.78},1};
									right[] = {{0.529,0.78},1};
									down[] = {{0.503,0.808},1};
								};
								class Store2
								{
									type = "text";
									source = "static";
									text = "ROUNDS IMPACT";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.503,0.82},1};
									right[] = {{0.529,0.82},1};
									down[] = {{0.503,0.848},1};
								};
								class Mode_1
								{
									type = "text";
									source = "static";
									text = "10";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.009,0.186},1};
									right[] = {{0.036,0.186},1};
									down[] = {{0.009,0.215},1};
								};
								class Mode_2
								{
									type = "text";
									source = "static";
									text = "20";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.009,0.31},1};
									right[] = {{0.036,0.31},1};
									down[] = {{0.009,0.339},1};
								};
								class Mode_3
								{
									type = "text";
									source = "static";
									text = "50";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.009,0.43},1};
									right[] = {{0.036,0.43},1};
									down[] = {{0.009,0.459},1};
								};
								class Mode_4
								{
									type = "text";
									source = "static";
									text = "100";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.009,0.553},1};
									right[] = {{0.036,0.553},1};
									down[] = {{0.009,0.582},1};
								};
								class Mode_5
								{
									type = "text";
									source = "static";
									text = "ALL";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.009,0.674},1};
									right[] = {{0.036,0.674},1};
									down[] = {{0.009,0.703},1};
								};
								class Harmonize
								{
									type = "text";
									source = "static";
									text = "HARMONIZE";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.009,0.8},1};
									right[] = {{0.036,0.8},1};
									down[] = {{0.009,0.829},1};
								};
								class BoxMode_1
								{
									condition = "user10<=0";
									class Static
									{
										type = "line";
										width = 5.0;
										points[] = {{{0.0576766,0.219353},1},{{0.00444279,0.219353},1},{{0.00444279,0.179552},1},{{0.0576766,0.179552},1},{{0.0576766,0.219353},1},{}};
									};
								};
								class BoxMode_2: BoxMode_1
								{
									condition = "(user10>=1)*(user10<=1)";
									class Static: Static
									{
										points[] = {{{0.0576766,0.344726},1},{{0.00444279,0.344726},1},{{0.00444279,0.305423},1},{{0.0576766,0.305423},1},{{0.0576766,0.344726},1},{}};
									};
								};
								class BoxMode_3: BoxMode_1
								{
									condition = "(user10>=2)*(user10<=2)";
									class Static: Static
									{
										points[] = {{{0.0576766,0.464627},1},{{0.00444279,0.464627},1},{{0.00444279,0.424826},1},{{0.0576766,0.424826},1},{{0.0576766,0.464627},1},{}};
									};
								};
								class BoxMode_4: BoxMode_1
								{
									condition = "(user10>=3)*(user10<=3)";
									class Static: Static
									{
										points[] = {{{0.0820547,0.587015},1},{{0.00444279,0.587015},1},{{0.00444279,0.547214},1},{{0.0820547,0.547214},1},{{0.0820547,0.587015},1},{}};
									};
								};
								class BoxMode_5: BoxMode_1
								{
									condition = "(user10>=4)*(user10<=4)";
									class Static: Static
									{
										points[] = {{{0.0820547,0.70791},1},{{0.00444279,0.70791},1},{{0.00444279,0.668109},1},{{0.0820547,0.668109},1},{{0.0820547,0.70791},1},{}};
									};
								};
								class BURSTLIMIT1
								{
									type = "text";
									source = "static";
									text = "B";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.282},1};
									right[] = {{0.145,0.282},1};
									down[] = {{0.115,0.309},1};
								};
								class BURSTLIMIT2
								{
									type = "text";
									source = "static";
									text = "U";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.312},1};
									right[] = {{0.145,0.312},1};
									down[] = {{0.115,0.339},1};
								};
								class BURSTLIMIT3
								{
									type = "text";
									source = "static";
									text = "R";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.342},1};
									right[] = {{0.145,0.342},1};
									down[] = {{0.115,0.369},1};
								};
								class BURSTLIMIT4
								{
									type = "text";
									source = "static";
									text = "S";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.372},1};
									right[] = {{0.145,0.372},1};
									down[] = {{0.115,0.399},1};
								};
								class BURSTLIMIT5
								{
									type = "text";
									source = "static";
									text = "T";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.402},1};
									right[] = {{0.145,0.402},1};
									down[] = {{0.115,0.429},1};
								};
								class BURSTLIMIT6
								{
									type = "text";
									source = "static";
									text = " ";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.432},1};
									right[] = {{0.145,0.432},1};
									down[] = {{0.115,0.459},1};
								};
								class BURSTLIMIT7
								{
									type = "text";
									source = "static";
									text = "L";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.462},1};
									right[] = {{0.145,0.462},1};
									down[] = {{0.115,0.489},1};
								};
								class BURSTLIMIT8
								{
									type = "text";
									source = "static";
									text = "I";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.492},1};
									right[] = {{0.145,0.492},1};
									down[] = {{0.115,0.519},1};
								};
								class BURSTLIMIT9
								{
									type = "text";
									source = "static";
									text = "M";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.522},1};
									right[] = {{0.145,0.522},1};
									down[] = {{0.115,0.549},1};
								};
								class BURSTLIMIT10
								{
									type = "text";
									source = "static";
									text = "I";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.552},1};
									right[] = {{0.145,0.552},1};
									down[] = {{0.115,0.579},1};
								};
								class BURSTLIMIT11
								{
									type = "text";
									source = "static";
									text = "T";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.582},1};
									right[] = {{0.145,0.582},1};
									down[] = {{0.115,0.609},1};
								};
								class Static
								{
									type = "line";
									width = 5.0;
									points[] = {{{0.99897,0.364627},1},{{0.899965,0.364627},1},{{0.899965,0.324826},1},{{0.99897,0.324826},1},{{0.99897,0.364627},1},{},{{0.343249,0.997463},1},{{0.267627,0.997463},1},{{0.267627,0.956667},1},{{0.343249,0.956667},1},{{0.343249,0.997463},1},{},{{0.353199,0.783035},1},{{0.353199,0.843234},1},{{0.355687,0.847711},1},{{0.361159,0.853682},1},{{0.365637,0.855174},1},{{0.641756,0.855174},1},{{0.646731,0.853682},1},{{0.651706,0.851194},1},{{0.655687,0.843234},1},{{0.655687,0.783035},1},{{0.652204,0.777065},1},{{0.646731,0.77209},1},{{0.642751,0.7701},1},{{0.365139,0.7701},1},{{0.360662,0.77209},1},{{0.355687,0.777562},1},{{0.353199,0.783035},1},{},{{0.00941791,0.753184},1},{{0.101955,0.753184},1},{{0.101955,0.612388},1},{},{{0.00941791,0.137761},1},{{0.101955,0.137761},1},{{0.101955,0.27607},1},{}};
								};
								class Bold{};
							};
							class Missiles
							{
								condition = "missile";
								class MissileType
								{
									type = "text";
									source = "static";
									text = "TYPE";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.17},1};
									right[] = {{1.022,0.17},1};
									down[] = {{0.995,0.2},1};
								};
								class MissileMode
								{
									type = "text";
									source = "static";
									text = "MODE";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.29},1};
									right[] = {{1.022,0.29},1};
									down[] = {{0.995,0.32},1};
								};
								class MissileModeNorm
								{
									type = "text";
									source = "static";
									text = "NORM";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.33},1};
									right[] = {{1.022,0.33},1};
									down[] = {{0.995,0.36},1};
								};
								class SAL
								{
									condition = "aamissile";
									class MissileTypeSAL
									{
										type = "text";
										source = "static";
										text = "SAL";
										scale = 1;
										sourceScale = 1;
										align = "left";
										pos[] = {{0.995,0.21},1};
										right[] = {{1.022,0.21},1};
										down[] = {{0.995,0.24},1};
									};
									class MissileTrajectory
									{
										type = "text";
										source = "static";
										text = "TRAJ";
										scale = 1;
										sourceScale = 1;
										align = "left";
										pos[] = {{0.995,0.41},1};
										right[] = {{1.022,0.41},1};
										down[] = {{0.995,0.44},1};
									};
									class DIR
									{
										condition = "(user10<=2)";
										class MissileMode
										{
											type = "text";
											source = "static";
											text = "DIR";
											scale = 1;
											sourceScale = 1;
											align = "left";
											pos[] = {{0.995,0.45},1};
											right[] = {{1.022,0.45},1};
											down[] = {{0.995,0.48},1};
										};
									};
									class LO
									{
										condition = "(user10>=3)*(user10<=3)";
										class MissileMode
										{
											type = "text";
											source = "static";
											text = "LO";
											scale = 1;
											sourceScale = 1;
											align = "left";
											pos[] = {{0.995,0.45},1};
											right[] = {{1.022,0.45},1};
											down[] = {{0.995,0.48},1};
										};
									};
									class HI
									{
										condition = "(user10>=4)";
										class MissileMode
										{
											type = "text";
											source = "static";
											text = "HI";
											scale = 1;
											sourceScale = 1;
											align = "left";
											pos[] = {{0.995,0.45},1};
											right[] = {{1.022,0.45},1};
											down[] = {{0.995,0.48},1};
										};
									};
									class PrimaryLaser
									{
										type = "text";
										source = "static";
										text = " PRI";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.005,0.17},1};
										right[] = {{0.032,0.17},1};
										down[] = {{0.005,0.2},1};
									};
									class PrimaryLaserValue
									{
										type = "text";
										source = "static";
										text = "B";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.01,0.21},1};
										right[] = {{0.037,0.21},1};
										down[] = {{0.01,0.24},1};
									};
									class PrimaryLaserValue1
									{
										type = "text";
										source = "static";
										text = "PRF";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.055,0.21},1};
										right[] = {{0.082,0.21},1};
										down[] = {{0.055,0.24},1};
									};
									class AlternativeLaser
									{
										type = "text";
										source = "static";
										text = " ALT";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.005,0.29},1};
										right[] = {{0.032,0.29},1};
										down[] = {{0.005,0.32},1};
									};
									class AlternativeLaserValue
									{
										type = "text";
										source = "static";
										text = "G";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.01,0.33},1};
										right[] = {{0.037,0.33},1};
										down[] = {{0.01,0.36},1};
									};
									class AlternativeLaserValue1
									{
										type = "text";
										source = "static";
										text = "PIM";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.055,0.33},1};
										right[] = {{0.082,0.33},1};
										down[] = {{0.055,0.36},1};
									};
									class SAL_Selected
									{
										type = "text";
										source = "static";
										text = "SAL SEL";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.005,0.41},1};
										right[] = {{0.032,0.41},1};
										down[] = {{0.005,0.44},1};
									};
									class Deice
									{
										type = "text";
										source = "static";
										text = "DEICE";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.005,0.683},1};
										right[] = {{0.032,0.683},1};
										down[] = {{0.005,0.713},1};
									};
									class MissileCounterCounterMeasuers
									{
										type = "text";
										source = "static";
										text = "   MSL CCM";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.005,0.8},1};
										right[] = {{0.032,0.8},1};
										down[] = {{0.005,0.83},1};
									};
									class Channels
									{
										type = "text";
										source = "static";
										text = "CHANNELS";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.78},1};
										right[] = {{0.529,0.78},1};
										down[] = {{0.503,0.808},1};
									};
									class Channels_a1
									{
										type = "text";
										source = "static";
										text = "1";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.33,0.84},1};
										right[] = {{0.356,0.84},1};
										down[] = {{0.33,0.868},1};
									};
									class Channels_a2
									{
										type = "text";
										source = "static";
										text = "A";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.33,0.88},1};
										right[] = {{0.356,0.88},1};
										down[] = {{0.33,0.908},1};
									};
									class Channels_b1
									{
										type = "text";
										source = "static";
										text = "";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.445,0.84},1};
										right[] = {{0.471,0.84},1};
										down[] = {{0.445,0.868},1};
									};
									class Channels_b2
									{
										type = "text";
										source = "static";
										text = "";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.445,0.88},1};
										right[] = {{0.471,0.88},1};
										down[] = {{0.445,0.908},1};
									};
									class Channels_c1
									{
										type = "text";
										source = "static";
										text = "3";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.555,0.84},1};
										right[] = {{0.581,0.84},1};
										down[] = {{0.555,0.868},1};
									};
									class Channels_c2
									{
										type = "text";
										source = "static";
										text = "D";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.555,0.88},1};
										right[] = {{0.581,0.88},1};
										down[] = {{0.555,0.908},1};
									};
									class Channels_d1
									{
										type = "text";
										source = "static";
										text = "ALT";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.67,0.84},1};
										right[] = {{0.696,0.84},1};
										down[] = {{0.67,0.868},1};
									};
									class Channels_d2
									{
										type = "text";
										source = "static";
										text = "G";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.67,0.88},1};
										right[] = {{0.696,0.88},1};
										down[] = {{0.67,0.908},1};
									};
									class White
									{
										color[] = {1,1,1};
										class Channels_b1
										{
											type = "text";
											source = "static";
											text = "PRI";
											scale = 1;
											sourceScale = 1;
											align = "center";
											pos[] = {{0.445,0.84},1};
											right[] = {{0.471,0.84},1};
											down[] = {{0.445,0.868},1};
										};
										class Channels_b2
										{
											type = "text";
											source = "static";
											text = "B";
											scale = 1;
											sourceScale = 1;
											align = "center";
											pos[] = {{0.445,0.88},1};
											right[] = {{0.471,0.88},1};
											down[] = {{0.445,0.908},1};
										};
										class Static
										{
											type = "line";
											width = 5.0;
											points[] = {{{0.487527,0.918856},1},{{0.403945,0.918856},1},{{0.403945,0.822338},1},{{0.487527,0.822338},1},{{0.487527,0.918856},1},{}};
										};
									};
									class Static
									{
										type = "line";
										width = 5.0;
										points[] = {{{0.0372786,0.364627},1},{{0.00543781,0.364627},1},{{0.00543781,0.324826},1},{{0.0372786,0.324826},1},{{0.0372786,0.364627},1},{},{{0.0372786,0.241244},1},{{0.00543781,0.241244},1},{{0.00543781,0.201443},1},{{0.0372786,0.201443},1},{{0.0372786,0.241244},1},{},{{0.0293184,0.818856},1},{{0.0218557,0.824328},1},{{0.013398,0.820348},1},{{0.0129005,0.810896},1},{{0.0203632,0.80592},1},{{0.0288209,0.809901},1},{{0.0293184,0.818856},1},{},{{0.998473,0.48602},1},{{0.922851,0.48602},1},{{0.922851,0.446716},1},{{0.998473,0.446716},1},{{0.998473,0.48602},1},{},{{0.998473,0.241741},1},{{0.922851,0.241741},1},{{0.922851,0.20194},1},{{0.998473,0.20194},1},{{0.998473,0.241741},1},{},{{0.27509,0.788507},1},{{0.276582,0.780547},1},{{0.280065,0.775572},1},{{0.286035,0.769602},1},{{0.292005,0.766617},1},{{0.29698,0.765124},1},{{0.70494,0.765622},1},{{0.709418,0.767114},1},{{0.713895,0.768607},1},{{0.718373,0.771095},1},{{0.722353,0.775075},1},{{0.724841,0.778557},1},{{0.726333,0.78204},1},{{0.727826,0.787015},1},{{0.727826,0.788507},1},{{0.727826,0.9099},1},{{0.726831,0.913383},1},{{0.725338,0.916368},1},{{0.723348,0.919353},1},{{0.721358,0.921841},1},{{0.717876,0.925821},1},{{0.714891,0.927811},1},{{0.7129,0.928308},1},{{0.709915,0.929801},1},{{0.704443,0.930299},1},{{0.297975,0.930299},1},{{0.294493,0.929801},1},{{0.290015,0.928806},1},{{0.284542,0.924826},1},{{0.280562,0.921343},1},{{0.277577,0.917363},1},{{0.275587,0.912388},1},{{0.27509,0.909403},1},{{0.27509,0.788507},1},{},{{0.709915,0.918856},1},{{0.626333,0.918856},1},{{0.626333,0.822338},1},{{0.709915,0.822338},1},{{0.709915,0.918856},1},{}};
									};
								};
								class RF
								{
									condition = "atmissile";
									class MissileTypeSAL
									{
										type = "text";
										source = "static";
										text = "RF";
										scale = 1;
										sourceScale = 1;
										align = "left";
										pos[] = {{0.995,0.21},1};
										right[] = {{1.022,0.21},1};
										down[] = {{0.995,0.24},1};
									};
									class LOBL_INHIBIT
									{
										type = "text";
										source = "static";
										text = "LOBL INHIBIT";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.005,0.683},1};
										right[] = {{0.032,0.683},1};
										down[] = {{0.005,0.713},1};
									};
									class Target_Inhibit
									{
										type = "text";
										source = "static";
										text = "2ND TARGET INHIBIT";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.005,0.8},1};
										right[] = {{0.032,0.8},1};
										down[] = {{0.005,0.83},1};
									};
									class Missile_Power_1
									{
										type = "text";
										source = "static";
										text = "ALL";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.009,0.19},1};
										right[] = {{0.036,0.19},1};
										down[] = {{0.009,0.22},1};
									};
									class Missile_Power_2
									{
										type = "text";
										source = "static";
										text = "AUTO";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.009,0.313},1};
										right[] = {{0.036,0.313},1};
										down[] = {{0.009,0.343},1};
									};
									class Missile_Power_3
									{
										type = "text";
										source = "static";
										text = "NONE";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.009,0.436},1};
										right[] = {{0.036,0.436},1};
										down[] = {{0.009,0.466},1};
									};
									class Missile_Power_V1
									{
										type = "text";
										source = "static";
										text = "M";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.222},1};
										right[] = {{0.165,0.222},1};
										down[] = {{0.135,0.249},1};
									};
									class Missile_Power_V2
									{
										type = "text";
										source = "static";
										text = "S";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.252},1};
										right[] = {{0.165,0.252},1};
										down[] = {{0.135,0.279},1};
									};
									class Missile_Power_V3
									{
										type = "text";
										source = "static";
										text = "L";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.282},1};
										right[] = {{0.165,0.282},1};
										down[] = {{0.135,0.309},1};
									};
									class Missile_Power_V4
									{
										type = "text";
										source = "static";
										text = " ";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.312},1};
										right[] = {{0.165,0.312},1};
										down[] = {{0.135,0.339},1};
									};
									class Missile_Power_V5
									{
										type = "text";
										source = "static";
										text = "P";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.342},1};
										right[] = {{0.165,0.342},1};
										down[] = {{0.135,0.369},1};
									};
									class Missile_Power_V6
									{
										type = "text";
										source = "static";
										text = "W";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.372},1};
										right[] = {{0.165,0.372},1};
										down[] = {{0.135,0.399},1};
									};
									class Missile_Power_V7
									{
										type = "text";
										source = "static";
										text = "R";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.402},1};
										right[] = {{0.165,0.402},1};
										down[] = {{0.135,0.429},1};
									};
									class Missile_Power_V8
									{
										type = "text";
										source = "static";
										text = " ";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.432},1};
										right[] = {{0.165,0.432},1};
										down[] = {{0.135,0.459},1};
									};
									class Static
									{
										type = "line";
										width = 5.0;
										points[] = {{{0.99897,0.241741},1},{{0.945736,0.241741},1},{{0.945736,0.20194},1},{{0.99897,0.20194},1},{{0.99897,0.241741},1},{},{{0.103448,0.345224},1},{{0.00643284,0.345224},1},{{0.00643284,0.30592},1},{{0.103448,0.30592},1},{{0.103448,0.345224},1},{},{{0.0109104,0.510398},1},{{0.126831,0.510398},1},{{0.126831,0.434279},1},{},{{0.0109104,0.139751},1},{{0.126831,0.139751},1},{{0.126831,0.216368},1},{}};
									};
								};
								class Static
								{
									type = "line";
									width = 5.0;
									points[] = {{{0.998473,0.365124},1},{{0.896483,0.365124},1},{{0.896483,0.324826},1},{{0.998473,0.324826},1},{{0.998473,0.365124},1},{},{{0.475587,0.99597},1},{{0.399468,0.99597},1},{{0.399468,0.955672},1},{{0.475587,0.955672},1},{{0.475587,0.99597},1},{}};
								};
							};
							class Pylon1
							{
								type = "pylonicon";
								pos[] = {{0.13,0.45},1};
								pylon = 1;
								name = "RHS_AH64_Weap_MFD";
							};
							class Pylon2: Pylon1
							{
								pos[] = {{0.263,0.45},1};
								pylon = 2;
							};
							class Pylon3: Pylon1
							{
								pos[] = {{0.37,0.45},1};
								pylon = 3;
							};
							class Pylon4: Pylon1
							{
								pos[] = {{0.64,0.45},1};
								pylon = 4;
							};
							class Pylon5: Pylon1
							{
								pos[] = {{0.742,0.45},1};
								pylon = 5;
							};
							class Pylon6: Pylon1
							{
								pos[] = {{0.82,0.45},1};
								pylon = 6;
							};
							class ChaffText
							{
								type = "text";
								source = "static";
								text = "CHAFF";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.503,0.61},1};
								right[] = {{0.527,0.61},1};
								down[] = {{0.503,0.637},1};
							};
							class ChaffCount
							{
								type = "text";
								source = "cmammo";
								sourceIndex = 1;
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.503,0.644},1};
								right[] = {{0.527,0.644},1};
								down[] = {{0.503,0.671},1};
							};
							class FlareText
							{
								type = "text";
								source = "static";
								text = "FLARE";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.503,0.678},1};
								right[] = {{0.527,0.678},1};
								down[] = {{0.503,0.705},1};
							};
							class FlareCount
							{
								type = "text";
								source = "cmammo";
								sourceIndex = 1;
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.503,0.712},1};
								right[] = {{0.527,0.712},1};
								down[] = {{0.503,0.739},1};
							};
							class Train
							{
								type = "text";
								source = "static";
								text = "TRAIN";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.555},1};
								right[] = {{1.022,0.555},1};
								down[] = {{0.995,0.585},1};
							};
							class LRFD_1
							{
								type = "text";
								source = "static";
								text = "LRFD";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.66},1};
								right[] = {{1.022,0.66},1};
								down[] = {{0.995,0.69},1};
							};
							class LRFD_2
							{
								type = "text";
								source = "static";
								text = "FIRST";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.7},1};
								right[] = {{1.022,0.7},1};
								down[] = {{0.995,0.73},1};
							};
							class ACQ_1
							{
								type = "text";
								source = "static";
								text = "ACQ";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.781},1};
								right[] = {{1.022,0.781},1};
								down[] = {{0.995,0.811},1};
							};
							class ACQ_2
							{
								type = "text";
								source = "static";
								text = "T32";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.821},1};
								right[] = {{1.022,0.821},1};
								down[] = {{0.995,0.851},1};
							};
							class Acquistion_1
							{
								type = "text";
								source = "static";
								text = "ACQ";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.685,0.133},1};
								right[] = {{0.712,0.133},1};
								down[] = {{0.685,0.163},1};
							};
							class Acquistion_2
							{
								type = "text";
								source = "static";
								text = "T32";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.685,0.173},1};
								right[] = {{0.712,0.173},1};
								down[] = {{0.685,0.203},1};
							};
							class LaserRangeFinderChannel_1
							{
								type = "text";
								source = "static";
								text = "LRFD";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.695,0.26},1};
								right[] = {{0.722,0.26},1};
								down[] = {{0.695,0.29},1};
							};
							class LaserRangeFinderChannel_2
							{
								type = "text";
								source = "static";
								text = "B";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.695,0.295},1};
								right[] = {{0.722,0.295},1};
								down[] = {{0.695,0.325},1};
							};
							class Sight_1
							{
								type = "text";
								source = "static";
								text = "SIGHT";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.32,0.133},1};
								right[] = {{0.347,0.133},1};
								down[] = {{0.32,0.163},1};
							};
							class Sight
							{
								condition = "1-activeSensorsOn";
								class Sight_2
								{
									type = "text";
									source = "static";
									text = "TADS";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.32,0.173},1};
									right[] = {{0.347,0.173},1};
									down[] = {{0.32,0.203},1};
								};
							};
							class Radar
							{
								condition = "activeSensorsOn";
								class Sight_2
								{
									type = "text";
									source = "static";
									text = "FCR";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.32,0.173},1};
									right[] = {{0.347,0.173},1};
									down[] = {{0.32,0.203},1};
								};
							};
							class LaserTrackerChannel_1
							{
								type = "text";
								source = "static";
								text = "LST";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.31,0.26},1};
								right[] = {{0.337,0.26},1};
								down[] = {{0.31,0.29},1};
							};
							class LaserTrackerChannel_2
							{
								type = "text";
								source = "static";
								text = "G";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.31,0.295},1};
								right[] = {{0.337,0.295},1};
								down[] = {{0.31,0.325},1};
							};
							class WeaponBottom
							{
								type = "text";
								source = "static";
								text = "WPN";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.21,0.963},1};
								right[] = {{0.235,0.963},1};
								down[] = {{0.21,0.993},1};
							};
							class GunBottom
							{
								type = "text";
								source = "static";
								text = "GUN";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.34,0.963},1};
								right[] = {{0.365,0.963},1};
								down[] = {{0.34,0.993},1};
							};
							class MslBottom
							{
								type = "text";
								source = "static";
								text = "MSL";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.47,0.963},1};
								right[] = {{0.495,0.963},1};
								down[] = {{0.47,0.993},1};
							};
							class AtaBottom
							{
								type = "text";
								source = "static";
								text = "ATA";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.595,0.963},1};
								right[] = {{0.62,0.963},1};
								down[] = {{0.595,0.993},1};
							};
							class RktBottom
							{
								type = "text";
								source = "static";
								text = "RKT";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.73,0.963},1};
								right[] = {{0.755,0.963},1};
								down[] = {{0.73,0.993},1};
							};
							class Channel
							{
								type = "text";
								source = "static";
								text = "CHAN";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.21,0.03},1};
								right[] = {{0.24,0.03},1};
								down[] = {{0.21,0.06},1};
							};
							class ASE
							{
								type = "text";
								source = "static";
								text = "ASE";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.34,0.03},1};
								right[] = {{0.37,0.03},1};
								down[] = {{0.34,0.06},1};
							};
							class LaserCodes
							{
								type = "text";
								source = "static";
								text = "CODE";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.61,0.03},1};
								right[] = {{0.64,0.03},1};
								down[] = {{0.61,0.06},1};
							};
							class Coordinates
							{
								type = "text";
								source = "static";
								text = "COORD";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.77,0.03},1};
								right[] = {{0.8,0.03},1};
								down[] = {{0.77,0.06},1};
							};
							class Utilities
							{
								type = "text";
								source = "static";
								text = "UTIL";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.89,0.03},1};
								right[] = {{0.92,0.03},1};
								down[] = {{0.89,0.06},1};
							};
						};
						class Laser
						{
							condition = "((bomb+mgun+atmissile+aamissile+rocket)<=0)*(ammo>=1)";
							class Static
							{
								type = "line";
								width = 5.0;
								points[] = {{{0.0372786,0.201443},1},{{0.00643284,0.201443},1},{{0.00643284,0.162139},1},{{0.0372786,0.162139},1},{{0.0372786,0.201443},1},{},{{0.224841,0.0556716},1},{{0.127826,0.0556716},1},{{0.127826,0.00243781},1},{{0.224841,0.00243781},1},{{0.224841,0.0556716},1},{},{{0.322353,0.0626368},1},{{0.29101,0.0626368},1},{{0.29101,0.0223383},1},{{0.322353,0.0223383},1},{{0.322353,0.0626368},1},{},{{0.454194,0.0626368},1},{{0.422851,0.0626368},1},{{0.422851,0.0223383},1},{{0.454194,0.0223383},1},{{0.454194,0.0626368},1},{},{{0.715388,0.0626368},1},{{0.684045,0.0626368},1},{{0.684045,0.0223383},1},{{0.715388,0.0223383},1},{{0.715388,0.0626368},1},{},{{0.584542,0.0626368},1},{{0.552701,0.0626368},1},{{0.552701,0.0223383},1},{{0.584542,0.0223383},1},{{0.584542,0.0626368},1},{},{{0.440264,0.177562},1},{{0.563647,0.177562},1},{{0.568622,0.18005},1},{{0.576582,0.186517},1},{{0.577577,0.190498},1},{{0.577577,0.212886},1},{{0.576582,0.216866},1},{{0.568622,0.223333},1},{{0.564144,0.225323},1},{{0.440264,0.225323},1},{{0.436284,0.223333},1},{{0.428821,0.216866},1},{{0.427826,0.212388},1},{{0.427826,0.190498},1},{{0.428821,0.18602},1},{{0.432303,0.18005},1},{{0.440264,0.177562},1},{},{{0.273597,0.253184},1},{{0.749219,0.253184},1},{{0.757179,0.256169},1},{{0.761657,0.262139},1},{{0.762154,0.266119},1},{{0.762154,0.671095},1},{{0.759169,0.678557},1},{{0.753697,0.683035},1},{{0.749716,0.68403},1},{{0.275587,0.68403},1},{{0.271109,0.683035},1},{{0.265139,0.678557},1},{{0.262652,0.670597},1},{{0.262652,0.262637},1},{{0.263149,0.258159},1},{{0.269119,0.254677},1},{{0.273597,0.253184},1},{},{{0.555687,0.295473},1},{{0.688025,0.295473},1},{},{{0.272104,0.295473},1},{{0.512403,0.295473},1},{},{{0.236781,0.991493},1},{{0.236781,0.896468},1},{{0.770612,0.896468},1},{{0.770612,0.991493},1},{},{{0.771109,0.00791045},1},{{0.771109,0.0855224},1},{{0.584542,0.0855224},1},{},{{0.236284,0.00791045},1},{{0.236284,0.0855224},1},{{0.422851,0.0855224},1},{},{{0.993995,0.138756},1},{{0.881557,0.138756},1},{{0.881557,0.878557},1},{{0.993995,0.878557},1},{},{{0.0104129,0.138756},1},{{0.122851,0.138756},1},{{0.122851,0.878557},1},{{0.0104129,0.878557},1},{},{{0.785,0.014},1},{{0.87,0.014},1},{},{{0.135,0.014},1},{{0.22,0.014},1},{}};
							};
							class Polygons
							{
								type = "polygon";
								width = 4.0;
								points[] = {{{{0.858,0.0068},1},{{0.878,0.014},1},{{0.858,0.0212},1}},{{{0.2,0.0068},1},{{0.22,0.014},1},{{0.2,0.0212},1}},{{{-0.013,0.41},1},{{0.007,0.41},1},{{0.007,0.49},1},{{-0.013,0.49},1}},{{{-0.013,0.535},1},{{0.007,0.535},1},{{0.007,0.615},1},{{-0.013,0.615},1}},{{{-0.013,0.78},1},{{0.007,0.78},1},{{0.007,0.86},1},{{-0.013,0.86},1}}};
							};
							class Channel
							{
								type = "text";
								source = "static";
								text = "CHAN";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.22,0.025},1};
								right[] = {{0.246,0.025},1};
								down[] = {{0.22,0.052},1};
							};
							class Utilities
							{
								type = "text";
								source = "static";
								text = "UTIL";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.875,0.025},1};
								right[] = {{0.901,0.025},1};
								down[] = {{0.875,0.055},1};
							};
							class Chn1
							{
								type = "text";
								source = "static";
								text = "1";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.315,0.028},1};
								right[] = {{0.341,0.028},1};
								down[] = {{0.315,0.056},1};
							};
							class Chn2
							{
								type = "text";
								source = "static";
								text = "2";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.45,0.028},1};
								right[] = {{0.476,0.028},1};
								down[] = {{0.45,0.056},1};
							};
							class Chn3
							{
								type = "text";
								source = "static";
								text = "3";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.58,0.028},1};
								right[] = {{0.606,0.028},1};
								down[] = {{0.58,0.056},1};
							};
							class Chn4
							{
								type = "text";
								source = "static";
								text = "4";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.712,0.028},1};
								right[] = {{0.738,0.028},1};
								down[] = {{0.712,0.056},1};
							};
							class Chn_A
							{
								type = "text";
								source = "static";
								text = "A";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.17},1};
								right[] = {{0.036,0.17},1};
								down[] = {{0.009,0.2},1};
							};
							class Chn_A_Value
							{
								type = "text";
								source = "static";
								text = "1111";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.21},1};
								right[] = {{0.036,0.21},1};
								down[] = {{0.009,0.24},1};
							};
							class Chn_B
							{
								type = "text";
								source = "static";
								text = "B";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.293},1};
								right[] = {{0.036,0.293},1};
								down[] = {{0.009,0.323},1};
							};
							class Chn_B_Value
							{
								type = "text";
								source = "static";
								text = "2111";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.333},1};
								right[] = {{0.036,0.333},1};
								down[] = {{0.009,0.363},1};
							};
							class Chn_C
							{
								type = "text";
								source = "static";
								text = "C";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.416},1};
								right[] = {{0.036,0.416},1};
								down[] = {{0.009,0.446},1};
							};
							class Chn_C_Value
							{
								type = "text";
								source = "static";
								text = "4121";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.456},1};
								right[] = {{0.036,0.456},1};
								down[] = {{0.009,0.486},1};
							};
							class Chn_D
							{
								type = "text";
								source = "static";
								text = "D";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.539},1};
								right[] = {{0.036,0.539},1};
								down[] = {{0.009,0.569},1};
							};
							class Chn_D_Value
							{
								type = "text";
								source = "static";
								text = "4311";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.579},1};
								right[] = {{0.036,0.579},1};
								down[] = {{0.009,0.609},1};
							};
							class Chn_E
							{
								type = "text";
								source = "static";
								text = "E";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.662},1};
								right[] = {{0.036,0.662},1};
								down[] = {{0.009,0.692},1};
							};
							class Chn_E_Value
							{
								type = "text";
								source = "static";
								text = "4511";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.702},1};
								right[] = {{0.036,0.702},1};
								down[] = {{0.009,0.732},1};
							};
							class Chn_F
							{
								type = "text";
								source = "static";
								text = "F";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.785},1};
								right[] = {{0.036,0.785},1};
								down[] = {{0.009,0.815},1};
							};
							class Chn_F_Value
							{
								type = "text";
								source = "static";
								text = "4711";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.825},1};
								right[] = {{0.036,0.825},1};
								down[] = {{0.009,0.855},1};
							};
							class Chn_G
							{
								type = "text";
								source = "static";
								text = "G";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.311,0.923},1};
								right[] = {{0.337,0.923},1};
								down[] = {{0.311,0.951},1};
							};
							class Chn_G_Value
							{
								type = "text";
								source = "static";
								text = "5111";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.311,0.965},1};
								right[] = {{0.337,0.965},1};
								down[] = {{0.311,0.993},1};
							};
							class Chn_H
							{
								type = "text";
								source = "static";
								text = "H";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.44,0.923},1};
								right[] = {{0.466,0.923},1};
								down[] = {{0.44,0.951},1};
							};
							class Chn_H_Value
							{
								type = "text";
								source = "static";
								text = "5311";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.44,0.965},1};
								right[] = {{0.466,0.965},1};
								down[] = {{0.44,0.993},1};
							};
							class Chn_J
							{
								type = "text";
								source = "static";
								text = "J";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.57,0.923},1};
								right[] = {{0.596,0.923},1};
								down[] = {{0.57,0.951},1};
							};
							class Chn_J_Value
							{
								type = "text";
								source = "static";
								text = "5511";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.57,0.965},1};
								right[] = {{0.596,0.965},1};
								down[] = {{0.57,0.993},1};
							};
							class Chn_K
							{
								type = "text";
								source = "static";
								text = "K";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.702,0.923},1};
								right[] = {{0.728,0.923},1};
								down[] = {{0.702,0.951},1};
							};
							class Chn_K_Value
							{
								type = "text";
								source = "static";
								text = "5711";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.702,0.965},1};
								right[] = {{0.728,0.965},1};
								down[] = {{0.702,0.993},1};
							};
							class Chn_R
							{
								type = "text";
								source = "static";
								text = "R";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.17},1};
								right[] = {{1.022,0.17},1};
								down[] = {{0.995,0.2},1};
							};
							class Chn_R_Value
							{
								type = "text";
								source = "static";
								text = "1788";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.21},1};
								right[] = {{1.022,0.21},1};
								down[] = {{0.995,0.24},1};
							};
							class Chn_Q
							{
								type = "text";
								source = "static";
								text = "Q";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.293},1};
								right[] = {{1.022,0.293},1};
								down[] = {{0.995,0.323},1};
							};
							class Chn_Q_Value
							{
								type = "text";
								source = "static";
								text = "1782";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.333},1};
								right[] = {{1.022,0.333},1};
								down[] = {{0.995,0.363},1};
							};
							class Chn_P
							{
								type = "text";
								source = "static";
								text = "P";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.416},1};
								right[] = {{1.022,0.416},1};
								down[] = {{0.995,0.446},1};
							};
							class Chn_P_Value
							{
								type = "text";
								source = "static";
								text = "1777";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.456},1};
								right[] = {{1.022,0.456},1};
								down[] = {{0.995,0.486},1};
							};
							class Chn_N
							{
								type = "text";
								source = "static";
								text = "N";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.539},1};
								right[] = {{1.022,0.539},1};
								down[] = {{0.995,0.569},1};
							};
							class Chn_N_Value
							{
								type = "text";
								source = "static";
								text = "1732";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.579},1};
								right[] = {{1.022,0.579},1};
								down[] = {{0.995,0.609},1};
							};
							class Chn_M
							{
								type = "text";
								source = "static";
								text = "M";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.662},1};
								right[] = {{1.022,0.662},1};
								down[] = {{0.995,0.692},1};
							};
							class Chn_M_Value
							{
								type = "text";
								source = "static";
								text = "1666";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.702},1};
								right[] = {{1.022,0.702},1};
								down[] = {{0.995,0.732},1};
							};
							class Chn_L
							{
								type = "text";
								source = "static";
								text = "L";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.785},1};
								right[] = {{1.022,0.785},1};
								down[] = {{0.995,0.815},1};
							};
							class Chn_L_Value
							{
								type = "text";
								source = "static";
								text = "1621";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.825},1};
								right[] = {{1.022,0.825},1};
								down[] = {{0.995,0.855},1};
							};
							class Channel_Middle
							{
								type = "text";
								source = "static";
								text = "CHANNEL";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.505,0.085},1};
								right[] = {{0.53,0.085},1};
								down[] = {{0.505,0.115},1};
							};
							class Channel_3
							{
								type = "text";
								source = "static";
								text = "CHAN  3";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.505,0.188},1};
								right[] = {{0.531,0.188},1};
								down[] = {{0.505,0.218},1};
							};
							class CodeRanges
							{
								type = "text";
								source = "static";
								text = "CODE  RANGES";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.27,0.263},1};
								right[] = {{0.296,0.263},1};
								down[] = {{0.27,0.291},1};
							};
							class Status
							{
								type = "text";
								source = "static";
								text = "STATUS";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.555,0.263},1};
								right[] = {{0.581,0.263},1};
								down[] = {{0.555,0.291},1};
							};
							class CodeRanges_1
							{
								type = "text";
								source = "static";
								text = "1111";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.307},1};
								right[] = {{0.3,0.307},1};
								down[] = {{0.273,0.335},1};
							};
							class CodeRanges_2
							{
								type = "text";
								source = "static";
								text = "2111";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.3449},1};
								right[] = {{0.3,0.3449},1};
								down[] = {{0.273,0.3729},1};
							};
							class CodeRanges_3
							{
								type = "text";
								source = "static";
								text = "4111";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.3828},1};
								right[] = {{0.3,0.3828},1};
								down[] = {{0.273,0.4108},1};
							};
							class CodeRanges_4
							{
								type = "text";
								source = "static";
								text = "4311";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.4207},1};
								right[] = {{0.3,0.4207},1};
								down[] = {{0.273,0.4487},1};
							};
							class CodeRanges_5
							{
								type = "text";
								source = "static";
								text = "4511";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.4586},1};
								right[] = {{0.3,0.4586},1};
								down[] = {{0.273,0.4866},1};
							};
							class CodeRanges_6
							{
								type = "text";
								source = "static";
								text = "4711";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.4965},1};
								right[] = {{0.3,0.4965},1};
								down[] = {{0.273,0.5245},1};
							};
							class CodeRanges_7
							{
								type = "text";
								source = "static";
								text = "5111";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.5344},1};
								right[] = {{0.3,0.5344},1};
								down[] = {{0.273,0.5624},1};
							};
							class CodeRanges_8
							{
								type = "text";
								source = "static";
								text = "5311";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.5723},1};
								right[] = {{0.3,0.5723},1};
								down[] = {{0.273,0.6003},1};
							};
							class CodeRanges_9
							{
								type = "text";
								source = "static";
								text = "5511";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.6102},1};
								right[] = {{0.3,0.6102},1};
								down[] = {{0.273,0.6382},1};
							};
							class CodeRanges_10
							{
								type = "text";
								source = "static";
								text = "5711";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.6481},1};
								right[] = {{0.3,0.6481},1};
								down[] = {{0.273,0.6761},1};
							};
							class CodeRanges_Mid_1
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.307},1};
								right[] = {{0.41,0.307},1};
								down[] = {{0.383,0.335},1};
							};
							class CodeRanges_Mid_2
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.3449},1};
								right[] = {{0.41,0.3449},1};
								down[] = {{0.383,0.3729},1};
							};
							class CodeRanges_Mid_3
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.3828},1};
								right[] = {{0.41,0.3828},1};
								down[] = {{0.383,0.4108},1};
							};
							class CodeRanges_Mid_4
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.4207},1};
								right[] = {{0.41,0.4207},1};
								down[] = {{0.383,0.4487},1};
							};
							class CodeRanges_Mid_5
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.4586},1};
								right[] = {{0.41,0.4586},1};
								down[] = {{0.383,0.4866},1};
							};
							class CodeRanges_Mid_6
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.4965},1};
								right[] = {{0.41,0.4965},1};
								down[] = {{0.383,0.5245},1};
							};
							class CodeRanges_Mid_7
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.5344},1};
								right[] = {{0.41,0.5344},1};
								down[] = {{0.383,0.5624},1};
							};
							class CodeRanges_Mid_8
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.5723},1};
								right[] = {{0.41,0.5723},1};
								down[] = {{0.383,0.6003},1};
							};
							class CodeRanges_Mid_9
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.6102},1};
								right[] = {{0.41,0.6102},1};
								down[] = {{0.383,0.6382},1};
							};
							class CodeRanges_Mid_10
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.6481},1};
								right[] = {{0.41,0.6481},1};
								down[] = {{0.383,0.6761},1};
							};
							class CodeRanges_Right_1
							{
								type = "text";
								source = "static";
								text = "1788";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.307},1};
								right[] = {{0.45,0.307},1};
								down[] = {{0.423,0.335},1};
							};
							class CodeRanges_Right_2
							{
								type = "text";
								source = "static";
								text = "2888";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.3449},1};
								right[] = {{0.45,0.3449},1};
								down[] = {{0.423,0.3729},1};
							};
							class CodeRanges_Right_3
							{
								type = "text";
								source = "static";
								text = "4288";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.3828},1};
								right[] = {{0.45,0.3828},1};
								down[] = {{0.423,0.4108},1};
							};
							class CodeRanges_Right_4
							{
								type = "text";
								source = "static";
								text = "4488";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.4207},1};
								right[] = {{0.45,0.4207},1};
								down[] = {{0.423,0.4487},1};
							};
							class CodeRanges_Right_5
							{
								type = "text";
								source = "static";
								text = "4688";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.4586},1};
								right[] = {{0.45,0.4586},1};
								down[] = {{0.423,0.4866},1};
							};
							class CodeRanges_Right_6
							{
								type = "text";
								source = "static";
								text = "4888";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.4965},1};
								right[] = {{0.45,0.4965},1};
								down[] = {{0.423,0.5245},1};
							};
							class CodeRanges_Right_7
							{
								type = "text";
								source = "static";
								text = "5288";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.5344},1};
								right[] = {{0.45,0.5344},1};
								down[] = {{0.423,0.5624},1};
							};
							class CodeRanges_Right_8
							{
								type = "text";
								source = "static";
								text = "5488";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.5723},1};
								right[] = {{0.45,0.5723},1};
								down[] = {{0.423,0.6003},1};
							};
							class CodeRanges_Right_9
							{
								type = "text";
								source = "static";
								text = "5688";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.6102},1};
								right[] = {{0.45,0.6102},1};
								down[] = {{0.423,0.6382},1};
							};
							class CodeRanges_Right_10
							{
								type = "text";
								source = "static";
								text = "5888";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.6481},1};
								right[] = {{0.45,0.6481},1};
								down[] = {{0.423,0.6761},1};
							};
							class WeaponBottom
							{
								type = "text";
								source = "static";
								text = "WPN";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.21,0.963},1};
								right[] = {{0.235,0.963},1};
								down[] = {{0.21,0.993},1};
							};
						};
					};
				};
				class MFD_Left_Weapons_Gun
				{
					topLeft = "GUNNER_MFD_L_TL";
					topRight = "GUNNER_MFD_L_TR";
					bottomLeft = "GUNNER_MFD_L_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {0};
					class Bones{};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on*(user6>=1)*(user6<=1)";
						class Weapon
						{
							condition = "((mgun+rocket+missile+bomb)>=1)+(ammo<=0)";
							class Safemode
							{
								condition = "1-(mgun)";
								class AmmoCount
								{
									type = "text";
									source = "ammo";
									sourceIndex = 2;
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.503,0.385},1};
									right[] = {{0.533,0.385},1};
									down[] = {{0.503,0.419},1};
								};
							};
							class Selected
							{
								condition = "mgun";
								class Polygons
								{
									type = "polygon";
									width = 4.0;
									points[] = {{{{0.44,0.37},1},{{0.565,0.37},1},{{0.565,0.43},1},{{0.44,0.43},1}},{{{0.48,0.309},1},{{0.525,0.309},1},{{0.525,0.389},1},{{0.48,0.389},1}},{{{0.497,0.23},1},{{0.508,0.23},1},{{0.508,0.39},1},{{0.497,0.39},1}}};
								};
								class BlackText
								{
									color[] = {0,0,0};
									alpha = 1;
									class AmmoCount1
									{
										type = "text";
										source = "ammo";
										sourceIndex = 2;
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.385},1};
										right[] = {{0.533,0.385},1};
										down[] = {{0.503,0.419},1};
									};
									class AmmoCount2
									{
										type = "text";
										source = "ammo";
										sourceIndex = 2;
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.385},1};
										right[] = {{0.533,0.385},1};
										down[] = {{0.503,0.419},1};
									};
									class AmmoCount3
									{
										type = "text";
										source = "ammo";
										sourceIndex = 2;
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.385},1};
										right[] = {{0.533,0.385},1};
										down[] = {{0.503,0.419},1};
									};
								};
							};
						};
					};
				};
				class MFD_Left_Fuel
				{
					topLeft = "GUNNER_MFD_L_TL";
					topRight = "GUNNER_MFD_L_TR";
					bottomLeft = "GUNNER_MFD_L_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {-2};
					class Bones
					{
						class HUDCenter
						{
							type = "fixed";
							pos[] = {0.5,0.5};
						};
					};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on*(user6>=2)*(user6<=2)";
						class Static
						{
							type = "line";
							width = 5.0;
							points[] = {{{0.128821,0.956169},1},{{0.128821,0.996468},1},{{0.225836,0.996468},1},{{0.225836,0.956169},1},{{0.128821,0.956169},1},{},{{0.00792537,0.569104},1},{{0.00792537,0.608905},1},{{0.105438,0.608905},1},{{0.105438,0.569104},1},{{0.00792537,0.569104},1},{},{{0.923846,0.815871},1},{{0.923846,0.855174},1},{{0.99897,0.855174},1},{{0.99897,0.815871},1},{{0.923846,0.815871},1},{},{{0.901955,0.549204},1},{{0.901955,0.588507},1},{{0.99897,0.588507},1},{{0.99897,0.549204},1},{{0.901955,0.549204},1},{},{{0.417378,0.730796},1},{{0.417378,0.753184},1},{{0.419866,0.757164},1},{{0.425836,0.763632},1},{{0.430313,0.765622},1},{{0.574592,0.765622},1},{{0.579567,0.763134},1},{{0.58504,0.757164},1},{{0.587527,0.753184},1},{{0.587527,0.730796},1},{{0.58504,0.726318},1},{{0.579567,0.720348},1},{{0.574592,0.717861},1},{{0.429816,0.717861},1},{{0.425836,0.720846},1},{{0.419368,0.726318},1},{{0.417378,0.730796},1},{},{{0.68305,0.816368},1},{{0.683547,0.929303},1},{{0.687527,0.937761},1},{{0.695985,0.941741},1},{{0.886532,0.941741},1},{{0.89499,0.937761},1},{{0.899965,0.928806},1},{{0.899965,0.816368},1},{{0.894493,0.808408},1},{{0.886532,0.803433},1},{{0.696483,0.803433},1},{{0.688025,0.80791},1},{{0.68305,0.816368},1},{},{{0.0666318,0.856169},1},{{0.0666318,0.928806},1},{{0.072602,0.937264},1},{{0.0805622,0.942239},1},{{0.306433,0.942239},1},{{0.315388,0.937264},1},{{0.319368,0.929303},1},{{0.319368,0.856169},1},{{0.314891,0.848209},1},{{0.30693,0.842736},1},{{0.0810597,0.842736},1},{{0.0721045,0.847711},1},{{0.0666318,0.856169},1},{},{{0.341756,0.787015},1},{{0.341756,0.967114},1},{{0.344741,0.971095},1},{{0.350214,0.977065},1},{{0.355189,0.98005},1},{{0.647726,0.98005},1},{{0.652204,0.977065},1},{{0.658672,0.971095},1},{{0.661159,0.967114},1},{{0.661159,0.786517},1},{{0.658174,0.783035},1},{{0.652701,0.776567},1},{{0.648224,0.773582},1},{{0.355189,0.773582},1},{{0.350214,0.776567},1},{{0.344741,0.782537},1},{{0.341756,0.787015},1},{},{{0.438771,0.167114},1},{{0.438771,0.235274},1},{{0.443249,0.243234},1},{{0.451706,0.247711},1},{{0.548721,0.247711},1},{{0.556682,0.243234},1},{{0.562154,0.234776},1},{{0.561657,0.167114},1},{{0.557179,0.159154},1},{{0.548721,0.153682},1},{{0.452204,0.153682},1},{{0.443746,0.159154},1},{{0.438771,0.167114},1},{},{{0.446234,0.486517},1},{{0.449716,0.481542},1},{{0.453697,0.48005},1},{{0.457677,0.477562},1},{{0.542751,0.477562},1},{{0.547726,0.479552},1},{{0.551706,0.482537},1},{{0.554194,0.486517},1},{{0.556184,0.49},1},{{0.556184,0.604428},1},{{0.554194,0.609901},1},{{0.551209,0.613383},1},{{0.547229,0.615871},1},{{0.543249,0.618856},1},{{0.457677,0.618856},1},{{0.454194,0.616368},1},{{0.448224,0.611393},1},{{0.444741,0.604925},1},{{0.444741,0.49},1},{{0.446234,0.486517},1},{},{{0.880065,0.708905},1},{{0.880065,0.753682},1},{{0.993,0.753682},1},{},{{0.880065,0.433284},1},{{0.880065,0.386517},1},{{0.993,0.386517},1},{},{{0.8,0.014},1},{{0.87,0.014},1},{},{{0.51,0.014},1},{{0.61,0.014},1},{},{{0.135,0.014},1},{{0.2,0.014},1},{},{{0.265,0.014},1},{{0.33,0.014},1},{}};
						};
						class StaticBold
						{
							type = "line";
							width = 10.0;
							points[] = {{{0.521358,0.622338},1},{{0.521358,0.665124},1},{{0.638771,0.665124},1},{{0.638771,0.604428},1},{},{{0.360662,0.38403},1},{{0.360662,0.212388},1},{{0.434791,0.212388},1},{}};
						};
						class StaticThin
						{
							type = "line";
							width = 2.0;
							points[] = {{{0.60892,0.38602},1},{{0.59698,0.381542},1},{{0.591507,0.368607},1},{{0.59698,0.355672},1},{{0.60892,0.350199},1},{{0.621856,0.355672},1},{{0.626831,0.368109},1},{{0.621358,0.381542},1},{{0.60892,0.38602},1},{},{{0.390512,0.38602},1},{{0.378572,0.381542},1},{{0.3731,0.368607},1},{{0.378572,0.355672},1},{{0.390512,0.350199},1},{{0.403448,0.355672},1},{{0.408423,0.368109},1},{{0.40295,0.381542},1},{{0.390512,0.38602},1},{},{{0.418871,0.602935},1},{{0.418871,0.636269},1},{{0.581557,0.636269},1},{{0.581557,0.602935},1},{},{{0.647726,0.445721},1},{{0.817378,0.426816},1},{{0.817378,0.330299},1},{{0.581557,0.3099},1},{{0.58106,0.156667},1},{{0.57708,0.140249},1},{{0.565139,0.124328},1},{{0.549219,0.112388},1},{{0.541756,0.110896},1},{{0.531806,0.10791},1},{{0.528821,0.0979602},1},{{0.521856,0.0895025},1},{{0.513398,0.0840299},1},{{0.505438,0.0820398},1},{{0.494493,0.0820398},1},{{0.486532,0.0840299},1},{{0.478075,0.0895025},1},{{0.471607,0.0979602},1},{{0.468124,0.10791},1},{{0.458174,0.110896},1},{{0.451209,0.112388},1},{{0.434791,0.124328},1},{{0.422851,0.140249},1},{{0.418871,0.156667},1},{{0.418373,0.3099},1},{{0.182552,0.330299},1},{{0.182552,0.426816},1},{{0.352204,0.445721},1},{},{{0.580065,0.491493},1},{{0.564144,0.598458},1},{{0.655189,0.598458},1},{{0.639766,0.492488},1},{{0.655189,0.38602},1},{{0.564144,0.38602},1},{{0.580065,0.491493},1},{},{{0.360164,0.491493},1},{{0.344741,0.598458},1},{{0.435786,0.598458},1},{{0.420363,0.492488},1},{{0.435786,0.38602},1},{{0.344741,0.38602},1},{{0.360164,0.491493},1},{}};
						};
						class Polygons
						{
							type = "polygon";
							width = 4.0;
							points[] = {{{{0.87,0.0068},1},{{0.89,0.014},1},{{0.87,0.0212},1}},{{{0.59,0.0068},1},{{0.61,0.014},1},{{0.59,0.0212},1}},{{{0.32,0.0068},1},{{0.34,0.014},1},{{0.32,0.0212},1}},{{{0.19,0.0068},1},{{0.21,0.014},1},{{0.19,0.0212},1}}};
						};
						class IntFuel_1
						{
							type = "text";
							source = "static";
							text = "INT ";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.07,0.86},1};
							right[] = {{0.1,0.86},1};
							down[] = {{0.07,0.89},1};
						};
						class Fuel_Total_Ok
						{
							class IntFuel_Total
							{
								type = "text";
								source = "fuel";
								text = "%X";
								sourceScale = 2440;
								sourceLength = 4;
								align = "left";
								scale = 1;
								pos[] = {{0.26,0.855},1};
								right[] = {{0.292,0.855},1};
								down[] = {{0.26,0.89},1};
							};
						};
						class Fuel_Tank_1_Ok: Fuel_Total_Ok
						{
							class IntFuel_Tank1: IntFuel_Total
							{
								align = "center";
								sourceScale = 1010;
								pos[] = {{0.5,0.185},1};
								right[] = {{0.532,0.185},1};
								down[] = {{0.5,0.22},1};
							};
						};
						class Fuel_Tank_2_Ok: Fuel_Tank_1_Ok
						{
							class IntFuel_Tank2: IntFuel_Tank1
							{
								sourceScale = 1430;
								pos[] = {{0.5,0.53},1};
								right[] = {{0.532,0.53},1};
								down[] = {{0.5,0.565},1};
							};
						};
						class Fuel_Total_Low: Fuel_Total_Ok
						{
							color[] = {1,0.3,0};
						};
						class Fuel_Tank_1_Low: Fuel_Tank_1_Ok
						{
							color[] = {1,0.3,0};
						};
						class Fuel_Tank_2_Low: Fuel_Tank_2_Ok
						{
							color[] = {1,0.3,0};
						};
						class IntFuel_2
						{
							type = "text";
							source = "static";
							text = "LB ";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.265,0.86},1};
							right[] = {{0.295,0.86},1};
							down[] = {{0.265,0.89},1};
						};
						class Sfr_1
						{
							type = "text";
							source = "static";
							text = "SFR .16";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.5,0.73},1};
							right[] = {{0.53,0.73},1};
							down[] = {{0.5,0.76},1};
						};
						class CalculateFlow
						{
							type = "text";
							source = "static";
							text = "CALC FLOW";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.5,0.787},1};
							right[] = {{0.53,0.787},1};
							down[] = {{0.5,0.817},1};
						};
						class Flow_Eng1
						{
							type = "text";
							source = "static";
							text = "1";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.42,0.835},1};
							right[] = {{0.447,0.835},1};
							down[] = {{0.42,0.865},1};
						};
						class Flow_Eng2
						{
							type = "text";
							source = "static";
							text = "2";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.42,0.886},1};
							right[] = {{0.447,0.886},1};
							down[] = {{0.42,0.916},1};
						};
						class Flow_Total
						{
							type = "text";
							source = "static";
							text = "TOT";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.42,0.937},1};
							right[] = {{0.447,0.937},1};
							down[] = {{0.42,0.967},1};
						};
						class Flow_EngLBHR1
						{
							type = "text";
							source = "static";
							text = "LB/HR";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.54,0.835},1};
							right[] = {{0.567,0.835},1};
							down[] = {{0.54,0.865},1};
						};
						class Flow_EngLBHR2
						{
							type = "text";
							source = "static";
							text = "LB/HR";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.54,0.886},1};
							right[] = {{0.567,0.886},1};
							down[] = {{0.54,0.916},1};
						};
						class Flow_EngLBHR3
						{
							type = "text";
							source = "static";
							text = "LB/HR";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.54,0.937},1};
							right[] = {{0.567,0.937},1};
							down[] = {{0.54,0.967},1};
						};
						class FuelFlow_Eng1
						{
							type = "text";
							source = "rpm";
							text = "%X";
							sourceScale = 48;
							sourceLength = 1;
							refreshRate = 0.5;
							align = "left";
							scale = 1;
							pos[] = {{0.53,"0.835+0.051*0"},1};
							right[] = {{0.56,"0.835+0.051*0"},1};
							down[] = {{0.53,0.865},1};
						};
						class FuelFlow_Eng2: FuelFlow_Eng1
						{
							pos[] = {{0.53,"0.835+0.051*1"},1};
							right[] = {{0.56,"0.835+0.051*1"},1};
							down[] = {{0.53,0.916},1};
						};
						class FuelFlow_Total: FuelFlow_Eng1
						{
							sourceScale = 96;
							pos[] = {{0.53,"0.835+0.051*2"},1};
							right[] = {{0.56,"0.835+0.051*2"},1};
							down[] = {{0.53,0.967},1};
						};
						class Endurance
						{
							type = "text";
							source = "static";
							text = "ENDR";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.795,0.815},1};
							right[] = {{0.822,0.815},1};
							down[] = {{0.795,0.845},1};
						};
						class Endurance_Int
						{
							type = "text";
							source = "static";
							text = "INT";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.73,0.86},1};
							right[] = {{0.76,0.86},1};
							down[] = {{0.73,0.89},1};
						};
						class Endurance_Time
						{
							type = "text";
							source = "userText";
							sourceIndex = 2;
							text = "%X";
							sourceScale = 2;
							sourcePrecision = 2;
							sourceLength = 1;
							refreshRate = 0.5;
							align = "left";
							scale = 1;
							pos[] = {{0.89,0.86},1};
							right[] = {{0.92,0.86},1};
							down[] = {{0.89,0.89},1};
						};
						class Endurance_Dots
						{
							type = "text";
							source = "static";
							text = "";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.85,0.86},1};
							right[] = {{0.88,0.86},1};
							down[] = {{0.85,0.89},1};
						};
						class Eng_1
						{
							type = "text";
							source = "static";
							text = "1 ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.411,0.471},1};
							right[] = {{0.443,0.471},1};
							down[] = {{0.411,0.503},1};
						};
						class Eng_2
						{
							type = "text";
							source = "static";
							text = "2 ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.635,0.471},1};
							right[] = {{0.667,0.471},1};
							down[] = {{0.635,0.503},1};
						};
						class Transfer_1
						{
							type = "text";
							source = "static";
							text = "XFER ";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.014,0.538},1};
							right[] = {{0.039,0.538},1};
							down[] = {{0.014,0.565},1};
						};
						class Transfer_2
						{
							type = "text";
							source = "static";
							text = "AUTO ";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.014,0.578},1};
							right[] = {{0.039,0.578},1};
							down[] = {{0.014,0.605},1};
						};
						class Engine
						{
							type = "text";
							source = "static";
							text = "ENG";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.21,0.03},1};
							right[] = {{0.24,0.03},1};
							down[] = {{0.21,0.06},1};
						};
						class Flight
						{
							type = "text";
							source = "static";
							text = "FLT";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.34,0.03},1};
							right[] = {{0.37,0.03},1};
							down[] = {{0.34,0.06},1};
						};
						class Performance
						{
							type = "text";
							source = "static";
							text = "PERF";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.61,0.03},1};
							right[] = {{0.64,0.03},1};
							down[] = {{0.61,0.06},1};
						};
						class Utilities
						{
							type = "text";
							source = "static";
							text = "UTIL";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.89,0.03},1};
							right[] = {{0.92,0.03},1};
							down[] = {{0.89,0.06},1};
						};
						class Fuel
						{
							type = "text";
							source = "static";
							text = "FUEL";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.225,0.963},1};
							right[] = {{0.252,0.963},1};
							down[] = {{0.225,0.993},1};
						};
						class Check
						{
							type = "text";
							source = "static";
							text = "CHECK";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.963},1};
							right[] = {{0.922,0.963},1};
							down[] = {{0.895,0.993},1};
						};
						class Boost1
						{
							type = "text";
							source = "static";
							text = "BOOSTo ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{1,0.313},1};
							right[] = {{1.025,0.313},1};
							down[] = {{1,0.34},1};
						};
						class CROSSFEED1
						{
							type = "text";
							source = "static";
							text = "C";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.439},1};
							right[] = {{0.925,0.439},1};
							down[] = {{0.895,0.466},1};
						};
						class CROSSFEED2
						{
							type = "text";
							source = "static";
							text = "R";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.469},1};
							right[] = {{0.925,0.469},1};
							down[] = {{0.895,0.496},1};
						};
						class CROSSFEED3
						{
							type = "text";
							source = "static";
							text = "O";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.499},1};
							right[] = {{0.925,0.499},1};
							down[] = {{0.895,0.526},1};
						};
						class CROSSFEED4
						{
							type = "text";
							source = "static";
							text = "S";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.529},1};
							right[] = {{0.925,0.529},1};
							down[] = {{0.895,0.556},1};
						};
						class CROSSFEED5
						{
							type = "text";
							source = "static";
							text = "S";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.559},1};
							right[] = {{0.925,0.559},1};
							down[] = {{0.895,0.586},1};
						};
						class CROSSFEED6
						{
							type = "text";
							source = "static";
							text = "F";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.589},1};
							right[] = {{0.925,0.589},1};
							down[] = {{0.895,0.616},1};
						};
						class CROSSFEED7
						{
							type = "text";
							source = "static";
							text = "E";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.619},1};
							right[] = {{0.925,0.619},1};
							down[] = {{0.895,0.646},1};
						};
						class CROSSFEED8
						{
							type = "text";
							source = "static";
							text = "E";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.649},1};
							right[] = {{0.925,0.649},1};
							down[] = {{0.895,0.676},1};
						};
						class CROSSFEED9
						{
							type = "text";
							source = "static";
							text = "D";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.679},1};
							right[] = {{0.925,0.679},1};
							down[] = {{0.895,0.706},1};
						};
						class Fwd
						{
							type = "text";
							source = "static";
							text = "FWD ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{1,0.435},1};
							right[] = {{1.025,0.435},1};
							down[] = {{1,0.462},1};
						};
						class Auto
						{
							type = "text";
							source = "static";
							text = "NORM ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{1,0.557},1};
							right[] = {{1.025,0.557},1};
							down[] = {{1,0.584},1};
						};
						class Aft
						{
							type = "text";
							source = "static";
							text = "AFT ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{1,0.68},1};
							right[] = {{1.025,0.68},1};
							down[] = {{1,0.707},1};
						};
						class FuelType1
						{
							type = "text";
							source = "static";
							text = "TYPE ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{1,0.785},1};
							right[] = {{1.025,0.785},1};
							down[] = {{1,0.812},1};
						};
						class FuelType2
						{
							type = "text";
							source = "static";
							text = "JP4 ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{1,0.825},1};
							right[] = {{1.025,0.825},1};
							down[] = {{1,0.852},1};
						};
					};
				};
				class MFD_Left_Engine
				{
					topLeft = "GUNNER_MFD_L_TL";
					topRight = "GUNNER_MFD_L_TR";
					bottomLeft = "GUNNER_MFD_L_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {-2};
					class Bones
					{
						class HUDCenter
						{
							type = "fixed";
							pos[] = {0.5,0.5};
						};
						class Torque
						{
							type = "linear";
							source = "rpm";
							sourceScale = 10;
							min = 35;
							max = 160;
							minPos[] = {0.0,0.0};
							maxPos[] = {0.0,0.365};
						};
						class TurbineSpeed
						{
							type = "linear";
							source = "rpm";
							sourceScale = 1;
							min = 0;
							max = 13;
							minPos[] = {0.0,0.0};
							maxPos[] = {0.0,0.385};
						};
						class RotorSpeed
						{
							type = "linear";
							source = "rpm";
							sourceScale = 1;
							min = 0;
							max = 9.4;
							minPos[] = {0.0,0.06};
							maxPos[] = {0.0,0.26};
						};
						class RotorSpeed2: RotorSpeed
						{
							min = 9.4;
							max = 10;
							minPos[] = {0.0,-0.06};
							maxPos[] = {0.0,0.0};
						};
						class TGT_Temp
						{
							type = "linear";
							source = "rpm";
							sourceScale = 65;
							min = 0;
							max = 810;
							minPos[] = {0.0,0.0};
							maxPos[] = {0.0,0.26};
						};
						class RTD_Torque_1
						{
							type = "linear";
							source = "rtdRpm1";
							sourceIndex = 10;
							sourceScale = 216;
							refreshRate = 0.1;
							min = 0;
							max = 130;
							minPos[] = {0.0,0.0};
							maxPos[] = {0.0,0.275};
						};
						class RTD_Torque_2: RTD_Torque_1
						{
							source = "rtdRpm2";
							sourceIndex = 11;
						};
						class RTD_Torque_Level_1_1: RTD_Torque_1
						{
							max = 30;
							maxPos[] = {0.0,0.065};
						};
						class RTD_Torque_Level_1_2: RTD_Torque_2
						{
							max = 30;
							maxPos[] = {0.0,0.065};
						};
						class RTD_Torque_Level_1_Yellow_1: RTD_Torque_1
						{
							min = 30;
							max = 130;
							maxPos[] = {0.0,0.275};
						};
						class RTD_Torque_Level_1_Yellow_2: RTD_Torque_2
						{
							min = 30;
							max = 130;
							maxPos[] = {0.0,0.275};
						};
						class RTD_Torque_Level_2_1: RTD_Torque_1
						{
							max = 70;
							maxPos[] = {0.0,0.175};
						};
						class RTD_Torque_Level_2_2: RTD_Torque_2
						{
							max = 70;
							maxPos[] = {0.0,0.175};
						};
						class RTD_Torque_Level_2_Yellow_1: RTD_Torque_1
						{
							min = 70;
							max = 130;
							maxPos[] = {0.0,0.175};
						};
						class RTD_Torque_Level_2_Yellow_2: RTD_Torque_2
						{
							min = 70;
							max = 130;
							maxPos[] = {0.0,0.175};
						};
						class RTD_Torque_Level_3_1: RTD_Torque_1
						{
							max = 100;
							maxPos[] = {0.0,0.235};
						};
						class RTD_Torque_Level_3_2: RTD_Torque_2
						{
							max = 100;
							maxPos[] = {0.0,0.235};
						};
						class RTD_Torque_Level_3_Yellow_1: RTD_Torque_1
						{
							min = 101;
							max = 115;
							maxPos[] = {0.0,0.06};
						};
						class RTD_Torque_Level_3_Yellow_2: RTD_Torque_2
						{
							min = 101;
							max = 115;
							maxPos[] = {0.0,0.06};
						};
						class RTD_Torque_Level_3_Red_1: RTD_Torque_1
						{
							min = 115;
							max = 130;
							maxPos[] = {0.0,0.055};
						};
						class RTD_Torque_Level_3_Red_2: RTD_Torque_2
						{
							min = 115;
							max = 130;
							maxPos[] = {0.0,0.055};
						};
						class RTD_TurbineSpeed_1
						{
							type = "linear";
							source = "user";
							sourceIndex = 13;
							sourceScale = 1;
							min = 0;
							max = 105;
							minPos[] = {0.0,0.0};
							maxPos[] = {0.0,0.32};
						};
						class RTD_TurbineSpeed_2: RTD_TurbineSpeed_1
						{
							sourceIndex = 14;
						};
						class RTD_TurbineSpeed_Yellow_1: RTD_TurbineSpeed_1
						{
							min = 105;
							max = 120;
							minPos[] = {0.0,0.0};
							maxPos[] = {0.0,0.075};
						};
						class RTD_TurbineSpeed_Yellow_2: RTD_TurbineSpeed_2
						{
							min = 105;
							max = 120;
							minPos[] = {0.0,0.0};
							maxPos[] = {0.0,0.075};
						};
						class RTD_RotorSpeed
						{
							type = "linear";
							source = "user";
							sourceIndex = 12;
							min = 0;
							max = 94;
							minPos[] = {0.0,0.06};
							maxPos[] = {0.0,0.26};
						};
						class RTD_RotorSpeed2: RTD_RotorSpeed
						{
							min = 94;
							max = 100;
							minPos[] = {0.0,-0.06};
							maxPos[] = {0.0,0.0};
						};
					};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on*(user6>=3)*(user6<=3)";
						class Static
						{
							type = "line";
							width = 4.0;
							points[] = {{{0.105,0.93},1},{{0.195,0.93},1},{{0.195,0.98},1},{{0.105,0.98},1},{{0.105,0.93},1},{},{{0.8,0.014},1},{{0.87,0.014},1},{},{{0.51,0.014},1},{{0.61,0.014},1},{},{{0.38,0.014},1},{{0.46,0.014},1},{},{{0.265,0.014},1},{{0.33,0.014},1},{}};
						};
						class Polygons
						{
							type = "polygon";
							width = 4.0;
							points[] = {{{{0.87,0.0068},1},{{0.89,0.014},1},{{0.87,0.0212},1}},{{{0.59,0.0068},1},{{0.61,0.014},1},{{0.59,0.0212},1}},{{{0.46,0.0068},1},{{0.48,0.014},1},{{0.46,0.0212},1}},{{{0.32,0.0068},1},{{0.34,0.014},1},{{0.32,0.0212},1}}};
						};
						class GroundMode
						{
							condition = "(altitudeAGL<=6)";
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{{0.1462,0.642},1},{{0.1416,0.6555},1},{{0.137,0.669},1},{{0.137,0.831},1},{{0.1416,0.8445},1},{{0.1462,0.858},1},{{0.3854,0.858},1},{{0.39,0.8445},1},{{0.3946,0.831},1},{{0.3946,0.669},1},{{0.39,0.6555},1},{{0.3854,0.642},1},{{0.1462,0.642},1},{},{{0.4362,0.642},1},{{0.4316,0.6555},1},{{0.427,0.669},1},{{0.427,0.831},1},{{0.4316,0.8445},1},{{0.4362,0.858},1},{{0.6754,0.858},1},{{0.68,0.8445},1},{{0.6846,0.831},1},{{0.6846,0.669},1},{{0.68,0.6555},1},{{0.6754,0.642},1},{{0.4362,0.642},1},{}};
							};
							class Engine
							{
								type = "text";
								source = "static";
								text = "ENGINE";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.3	-0.08",0.65},1};
								right[] = {{0.245,0.65},1};
								down[] = {{"0.3	-0.08",0.675},1};
							};
							class EngineOilPsi
							{
								type = "text";
								source = "static";
								text = "OIL PSI";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.33-0.08",0.69},1};
								right[] = {{0.275,0.69},1};
								down[] = {{"0.33-0.08",0.715},1};
							};
							class EngineOilPsi1
							{
								type = "text";
								source = "static";
								text = "1";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.3	-0.08",0.82},1};
								right[] = {{0.245,0.82},1};
								down[] = {{"0.3	-0.08",0.845},1};
							};
							class EngineOilPsi2
							{
								type = "text";
								source = "static";
								text = "2";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.4	-0.08",0.82},1};
								right[] = {{0.345,0.82},1};
								down[] = {{"0.4	-0.08",0.845},1};
							};
							class HydPressure
							{
								type = "text";
								source = "static";
								text = "HYD PSI";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.57	-0.06",0.65},1};
								right[] = {{0.535,0.65},1};
								down[] = {{"0.57	-0.06",0.675},1};
							};
							class HydPressurePrimary
							{
								type = "text";
								source = "static";
								text = "PRI";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.52	-0.06",0.705},1};
								right[] = {{0.485,0.705},1};
								down[] = {{"0.52	-0.06",0.73},1};
							};
							class HydPressureUtility
							{
								type = "text";
								source = "static";
								text = "UTIL";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.52	-0.06",0.76},1};
								right[] = {{0.485,0.76},1};
								down[] = {{"0.52	-0.06",0.785},1};
							};
							class HydPressureAccumulator
							{
								type = "text";
								source = "static";
								text = "ACC";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.52	-0.06",0.815},1};
								right[] = {{0.485,0.815},1};
								down[] = {{"0.52	-0.06",0.84},1};
							};
							class HydPressureUtilityVal
							{
								type = "text";
								source = "static";
								text = "3000";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.62	-0.06",0.76},1};
								right[] = {{0.585,0.76},1};
								down[] = {{"0.62	-0.06",0.785},1};
							};
							class HydPressureAccumulatorVal
							{
								type = "text";
								source = "static";
								text = "3000";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.62	-0.06",0.815},1};
								right[] = {{0.585,0.815},1};
								down[] = {{"0.62	-0.06",0.84},1};
							};
							class Green
							{
								condition = "rpm>=2.5";
								class EngineOilPsiValue1
								{
									type = "text";
									source = "rpm";
									sourceScale = 8.8;
									sourceLength = 1;
									refreshRate = 0.13;
									align = "center";
									scale = 1;
									pos[] = {{"0.3	-0.08",0.775},1};
									right[] = {{0.245,0.775},1};
									down[] = {{"0.3	-0.08",0.8},1};
								};
								class EngineOilPsiValue2: EngineOilPsiValue1
								{
									pos[] = {{"0.4	-0.08",0.775},1};
									right[] = {{0.345,0.775},1};
									down[] = {{"0.4	-0.08",0.8},1};
									sourceScale = 9.0;
									refreshRate = 0.1;
								};
							};
							class Red: Green
							{
								condition = "rpm<=2.5";
								color[] = {1,0,0};
								alpha = 0.3;
								class EngineOilPsiValue1: EngineOilPsiValue1{};
								class EngineOilPsiValue2: EngineOilPsiValue2{};
							};
							class Hydraulics_OK
							{
								condition = "user15>=1300";
								class HydPressurePrimaryVal
								{
									type = "text";
									source = "user";
									sourceIndex = 15;
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.56,0.705},1};
									right[] = {{0.585,0.705},1};
									down[] = {{0.56,0.73},1};
								};
							};
							class Hydraulics_Low
							{
								condition = "user15<=1300";
								color[] = {1,0,0};
								class HydPressurePrimaryVal
								{
									type = "text";
									source = "user";
									sourceIndex = 15;
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.56,0.705},1};
									right[] = {{0.585,0.705},1};
									down[] = {{0.56,0.73},1};
								};
							};
						};
						class AirMode
						{
							condition = "(altitudeAGL>=6)";
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{{0.0390002,0.604},1},{{0.0220001,0.621},1},{{0.00500011,0.638},1},{{0.00500011,0.842},1},{{0.0220001,0.859},1},{{0.0390002,0.876},1},{{0.923,0.876},1},{{0.94,0.859},1},{{0.957,0.842},1},{{0.957,0.638},1},{{0.94,0.621},1},{{0.923,0.604},1},{{0.0390002,0.604},1},{},{{0.7362,0.122},1},{{0.7316,0.1355},1},{{0.727,0.149},1},{{0.727,0.311},1},{{0.7316,0.3245},1},{{0.7362,0.338},1},{{0.9754,0.338},1},{{0.98,0.3245},1},{{0.9846,0.311},1},{{0.9846,0.149},1},{{0.98,0.1355},1},{{0.9754,0.122},1},{{0.7362,0.122},1},{},{{0.505,0.62},1},{{0.505,0.86},1},{},{{0.495,0.62},1},{{0.495,0.86},1},{}};
							};
							class HydPressure
							{
								type = "text";
								source = "static";
								text = "HYD PSI";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.57	-0.06+0.3",0.13},1};
								right[] = {{0.835,0.13},1};
								down[] = {{"0.57	-0.06+0.3",0.155},1};
							};
							class HydPressurePrimary
							{
								type = "text";
								source = "static";
								text = "PRI";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.52	-0.06+0.3",0.185},1};
								right[] = {{0.785,0.185},1};
								down[] = {{"0.52	-0.06+0.3",0.21},1};
							};
							class HydPressureUtility
							{
								type = "text";
								source = "static";
								text = "UTIL";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.52	-0.06+0.3",0.24},1};
								right[] = {{0.785,0.24},1};
								down[] = {{"0.52	-0.06+0.3",0.265},1};
							};
							class HydPressureAccumulator
							{
								type = "text";
								source = "static";
								text = "ACC";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.52	-0.06+0.3",0.295},1};
								right[] = {{0.785,0.295},1};
								down[] = {{"0.52	-0.06+0.3",0.32},1};
							};
							class HydPressureUtilityVal
							{
								type = "text";
								source = "static";
								text = "3000";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.62	-0.06+0.3",0.24},1};
								right[] = {{0.885,0.24},1};
								down[] = {{"0.62	-0.06+0.3",0.265},1};
							};
							class HydPressureAccumulatorVal
							{
								type = "text";
								source = "static";
								text = "3000";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.62	-0.06+0.3",0.295},1};
								right[] = {{0.885,0.295},1};
								down[] = {{"0.62	-0.06+0.3",0.32},1};
							};
							class Hydraulics_OK
							{
								condition = "user15>=1300";
								class HydPressurePrimaryVal
								{
									type = "text";
									source = "user";
									sourceIndex = 15;
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.86,0.185},1};
									right[] = {{0.885,0.185},1};
									down[] = {{0.86,0.21},1};
								};
							};
							class Hydraulics_Low
							{
								condition = "user15<=1300";
								color[] = {1,0,0};
								class HydPressurePrimaryVal
								{
									type = "text";
									source = "user";
									sourceIndex = 15;
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.86,0.185},1};
									right[] = {{0.885,0.185},1};
									down[] = {{0.86,0.21},1};
								};
							};
						};
						class Flight
						{
							type = "text";
							source = "static";
							text = "FLT";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.34,0.03},1};
							right[] = {{0.37,0.03},1};
							down[] = {{0.34,0.06},1};
						};
						class Fuel
						{
							type = "text";
							source = "static";
							text = "FUEL";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.48,0.03},1};
							right[] = {{0.51,0.03},1};
							down[] = {{0.48,0.06},1};
						};
						class Performance
						{
							type = "text";
							source = "static";
							text = "PERF";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.61,0.03},1};
							right[] = {{0.64,0.03},1};
							down[] = {{0.61,0.06},1};
						};
						class Utilities
						{
							type = "text";
							source = "static";
							text = "UTIL";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.89,0.03},1};
							right[] = {{0.92,0.03},1};
							down[] = {{0.89,0.06},1};
						};
						class Torque
						{
							type = "text";
							source = "static";
							text = "TORQUE %";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.015,0.11},1};
							right[] = {{0.04,0.11},1};
							down[] = {{0.015,0.135},1};
						};
						class TGT
						{
							type = "text";
							source = "static";
							text = "TGT   C";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.23+0.03",0.11},1};
							right[] = {{0.285,0.11},1};
							down[] = {{"0.23+0.03",0.135},1};
						};
						class TGT_o
						{
							type = "text";
							source = "static";
							text = "o";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.305+0.03",0.105},1};
							right[] = {{0.352,0.105},1};
							down[] = {{"0.305+0.03",0.122},1};
						};
						class EngPowerTurbineSpeed_1
						{
							type = "text";
							source = "static";
							text = "N   %";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.43,0.11},1};
							right[] = {{0.455,0.11},1};
							down[] = {{0.43,0.135},1};
						};
						class EngPowerTurbineSpeed_1P
						{
							type = "text";
							source = "static";
							text = "P";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.43+0.025",0.115},1};
							right[] = {{0.48,0.115},1};
							down[] = {{"0.43+0.025",0.14},1};
						};
						class RotorSpeed
						{
							type = "text";
							source = "static";
							text = "N   %";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.535,0.11},1};
							right[] = {{0.56,0.11},1};
							down[] = {{0.535,0.135},1};
						};
						class RotorSpeedR
						{
							type = "text";
							source = "static";
							text = "R";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.535+0.025",0.115},1};
							right[] = {{0.585,0.115},1};
							down[] = {{"0.535+0.025",0.14},1};
						};
						class EngPowerTurbineSpeed_2
						{
							type = "text";
							source = "static";
							text = "N   %";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.64,0.11},1};
							right[] = {{0.665,0.11},1};
							down[] = {{0.64,0.135},1};
						};
						class EngPowerTurbineSpeed_2P
						{
							type = "text";
							source = "static";
							text = "P";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.64+0.025",0.115},1};
							right[] = {{0.69,0.115},1};
							down[] = {{"0.64+0.025",0.14},1};
						};
						class EngPowerTurbineSpeed_Percent_2
						{
							type = "text";
							source = "static";
							text = "N   %";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.83,0.36},1};
							right[] = {{0.855,0.36},1};
							down[] = {{0.83,0.385},1};
						};
						class EngPowerTurbineSpeed_Percent_2P
						{
							type = "text";
							source = "static";
							text = "P";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.83+0.025",0.365},1};
							right[] = {{0.88,0.365},1};
							down[] = {{"0.83+0.025",0.39},1};
						};
						class EngGasGeneratorSpeed_Percent_2
						{
							type = "text";
							source = "static";
							text = "N   %";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.83,0.46},1};
							right[] = {{0.855,0.46},1};
							down[] = {{0.83,0.485},1};
						};
						class EngGasGeneratorSpeed_Percent_2P
						{
							type = "text";
							source = "static";
							text = "G";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.83+0.025",0.465},1};
							right[] = {{0.88,0.465},1};
							down[] = {{"0.83+0.025",0.49},1};
						};
						class StarterGroup
						{
							condition = "(rpm<=4.6)* (6-altitudeAGL)";
							class White
							{
								color[] = {1,1,1};
								class StarterOn
								{
									type = "text";
									source = "static";
									text = "ON";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{"0.14+0.79",0.6},1};
									right[] = {{0.955,0.6},1};
									down[] = {{"0.14+0.79",0.625},1};
								};
							};
							class Starter
							{
								type = "text";
								source = "static";
								text = "START";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.86,0.65},1};
								right[] = {{0.885,0.65},1};
								down[] = {{0.86,0.675},1};
							};
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{{0.7362,0.45},1},{{0.7316,0.465},1},{{0.727,0.48},1},{{0.727,0.66},1},{{0.7316,0.675},1},{{0.7362,0.69},1},{{0.9754,0.69},1},{{0.98,0.675},1},{{0.9846,0.66},1},{{0.9846,0.48},1},{{0.98,0.465},1},{{0.9754,0.45},1},{{0.7362,0.45},1},{}};
							};
						};
						class StandardFlightModel
						{
							condition = "simulArma";
							class TorqueLevel_0
							{
								condition = "rpm<=3.5";
								class TorqueEng1
								{
									type = "text";
									source = "static";
									text = "0";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.04,0.465},1};
									right[] = {{0.065,0.465},1};
									down[] = {{0.04,0.49},1};
								};
								class TorqueEng2
								{
									type = "text";
									source = "static";
									text = "0";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.14,0.465},1};
									right[] = {{0.165,0.465},1};
									down[] = {{0.14,0.49},1};
								};
								class Red
								{
									color[] = {1,0,0};
									alpha = 1;
									class DrawLines
									{
										type = "line";
										width = 6.0;
										points[] = {{{0.005,0.43},1},{{0.185,0.43},1},{}};
									};
									class DrawPolygons
									{
										type = "polygon";
										points[] = {{{{0.085,0.43},1},{{0.095,0.44},1},{{0.105,0.43},1},{{0.095,0.42},1}}};
									};
								};
							};
							class TorqueLevel_1: TorqueLevel_0
							{
								condition = "(rpm<=5)*(rpm>=3.5)";
								class Torque_Eng1
								{
									type = "text";
									source = "rpm";
									sourceScale = 12.1;
									sourceOffset = -35;
									sourceLength = 1;
									refreshRate = 0.13;
									align = "center";
									scale = 1;
									pos[] = {{0.04,0.465},1};
									right[] = {{0.065,0.465},1};
									down[] = {{0.04,0.49},1};
								};
								class Torque_Eng2: Torque_Eng1
								{
									pos[] = {{0.14,0.465},1};
									right[] = {{0.165,0.465},1};
									down[] = {{0.14,0.49},1};
									source = "rpm";
									sourceScale = 12.4;
									refreshRate = 0.1;
								};
								class Red: Red
								{
									class DrawLines: DrawLines{};
									class DrawPolygons: DrawPolygons{};
								};
							};
							class TorqueLevel_2: TorqueLevel_1
							{
								condition = "(rpm>=5)*(rpm<=9)";
								class Torque_Eng1: Torque_Eng1
								{
									pos[] = {{0.04,0.315},1};
									right[] = {{0.065,0.315},1};
									down[] = {{0.04,0.34},1};
								};
								class Torque_Eng2: Torque_Eng2
								{
									pos[] = {{0.14,0.315},1};
									right[] = {{0.165,0.315},1};
									down[] = {{0.14,0.34},1};
								};
								class Red: Red
								{
									class DrawLines: DrawLines
									{
										points[] = {{{0.005,0.28},1},{{0.185,0.28},1},{}};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.085,0.28},1},{{0.095,0.29},1},{{0.105,0.28},1},{{0.095,0.27},1}}};
									};
								};
							};
							class TorqueLevel_3: TorqueLevel_1
							{
								condition = "rpm>=9";
								class Torque_Eng1: Torque_Eng1
								{
									pos[] = {{0.04,0.25},1};
									right[] = {{0.065,0.25},1};
									down[] = {{0.04,0.275},1};
								};
								class Torque_Eng2: Torque_Eng2
								{
									pos[] = {{0.14,0.25},1};
									right[] = {{0.165,0.25},1};
									down[] = {{0.14,0.275},1};
								};
								class Red: Red
								{
									class DrawLines: DrawLines
									{
										points[] = {{{0.005,0.2},1},{{0.185,0.2},1},{}};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.085,0.2},1},{{0.095,0.21},1},{{0.105,0.2},1},{{0.095,0.19},1}}};
									};
								};
							};
							class RPM_Eng1
							{
								type = "text";
								source = "rpm";
								sourceScale = 10.1;
								sourceLength = 1;
								refreshRate = 0.13;
								align = "center";
								scale = 1;
								pos[] = {{"0.04+0.76",0.405},1};
								right[] = {{0.825,0.405},1};
								down[] = {{"0.04+0.76",0.43},1};
							};
							class RPM_Eng2: RPM_Eng1
							{
								pos[] = {{"0.14+0.78",0.405},1};
								right[] = {{0.945,0.405},1};
								down[] = {{"0.14+0.78",0.43},1};
								source = "rpm";
								sourceScale = 10.4;
								refreshRate = 0.1;
							};
							class TGT_Eng1
							{
								type = "text";
								source = "rpm";
								sourceScale = 71.9;
								refreshRate = 0.13;
								align = "center";
								scale = 1;
								pos[] = {{"0.04+0.23",0.255},1};
								right[] = {{0.295,0.255},1};
								down[] = {{"0.04+0.23",0.28},1};
							};
							class TGT_Eng2: TGT_Eng1
							{
								pos[] = {{"0.14+0.23",0.255},1};
								right[] = {{0.395,0.255},1};
								down[] = {{"0.14+0.23",0.28},1};
								sourceScale = 71.8;
								refreshRate = 0.1;
							};
							class GasGen_Ok
							{
								condition = "rpm>=6.3";
								class GasGen_Eng1
								{
									type = "text";
									source = "rpm";
									sourceScale = 9.9;
									sourceLength = 1;
									sourcePrecision = 1;
									refreshRate = 0.13;
									align = "center";
									scale = 1;
									pos[] = {{"0.04+0.76",0.505},1};
									right[] = {{0.825,0.505},1};
									down[] = {{"0.04+0.76",0.53},1};
								};
								class GasGen_Eng2: GasGen_Eng1
								{
									pos[] = {{"0.14+0.78",0.505},1};
									right[] = {{0.945,0.505},1};
									down[] = {{"0.14+0.78",0.53},1};
									sourceScale = 9.8;
									refreshRate = 0.1;
								};
							};
							class Red
							{
								color[] = {1,0,0};
								alpha = 0.1;
								class GasGen_Low
								{
									condition = "rpm<=6.3";
									class GasGen_Eng1
									{
										type = "text";
										source = "rpm";
										sourceScale = 9.9;
										sourceLength = 1;
										sourcePrecision = 1;
										refreshRate = 0.13;
										align = "center";
										scale = 1;
										pos[] = {{"0.04+0.76",0.505},1};
										right[] = {{0.825,0.505},1};
										down[] = {{"0.04+0.76",0.53},1};
									};
									class GasGen_Eng2: GasGen_Eng1
									{
										pos[] = {{"0.14+0.78",0.505},1};
										right[] = {{0.945,0.505},1};
										down[] = {{"0.14+0.78",0.53},1};
										sourceScale = 9.8;
										refreshRate = 0.1;
									};
								};
							};
							class DrawTGT_Green
							{
								alpha = 0.6;
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"Torque",1,{0.05,0.185},1},{"Torque",1,{0.03,0.185},1}},{{{0.13,0.55},1},{{0.15,0.55},1},{"Torque",1,{0.15,0.185},1},{"Torque",1,{0.13,0.185},1}},{{{0.26,0.55},1},{{0.28,0.55},1},{"TGT_Temp",1,{0.28,0.29},1},{"TGT_Temp",1,{0.26,0.29},1}},{{{0.36,0.55},1},{{0.38,0.55},1},{"TGT_Temp",1,{0.38,0.29},1},{"TGT_Temp",1,{0.36,0.29},1}},{{{0.45,0.55},1},{{0.47,0.55},1},{"TurbineSpeed",1,{0.47,0.165},1},{"TurbineSpeed",1,{0.45,0.165},1}},{{{0.66,0.55},1},{{0.68,0.55},1},{"TurbineSpeed",1,{0.68,0.175},1},{"TurbineSpeed",1,{0.66,0.175},1}}};
								};
							};
							class DrawRotor_Green
							{
								condition = "rpm>=9.4";
								alpha = 0.6;
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.525,0.55},1},{{0.615,0.55},1},{"RotorSpeed2",1,"RotorSpeed",1,{0.615,0.29},1},{"RotorSpeed2",1,"RotorSpeed",1,{0.525,0.29},1}}};
								};
								class RotorSpeed
								{
									type = "text";
									source = "rpm";
									sourceScale = 9.9;
									sourceLength = 1;
									sourcePrecision = 0;
									refreshRate = 0.13;
									align = "center";
									scale = 1;
									pos[] = {{0.57,0.255},1};
									right[] = {{0.595,0.255},1};
									down[] = {{0.57,0.28},1};
								};
							};
							class DrawRotor_Red: DrawRotor_Green
							{
								condition = "rpm<=9.4";
								color[] = {1,0,0};
								alpha = 0.3;
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.525,0.55},1},{{0.615,0.55},1},{"RotorSpeed2",1,"RotorSpeed",1,{0.615,0.29},1},{"RotorSpeed2",1,"RotorSpeed",1,{0.525,0.29},1}}};
								};
								class RotorSpeed: RotorSpeed{};
							};
							class DrawTGT_Yellow
							{
								color[] = {1,0.3,0};
								class DrawPolygon
								{
									type = "polygon";
									points[] = {};
								};
							};
						};
						class AdvancedFlightModel: StandardFlightModel
						{
							condition = "simulRTD";
							class TorqueLevel_1
							{
								condition = "(user12<=50)";
								class Red
								{
									color[] = {1,0,0};
									class DrawLines
									{
										type = "line";
										width = 4;
										points[] = {{{0.005,0.43},1},{{0.185,0.43},1},{}};
									};
									class DrawPolygons
									{
										type = "polygon";
										points[] = {{{{0.085,0.43},1},{{0.095,0.44},1},{{0.105,0.43},1},{{0.095,0.42},1}}};
									};
								};
								class Nominal_L
								{
									condition = "(rtdRpm1*216)<=30";
									class Torque_Eng1
									{
										type = "text";
										source = "rtdRpm1";
										sourceScale = 216;
										sourceIndex = 10;
										sourceLength = 1;
										refreshRate = 0.13;
										align = "center";
										scale = 1;
										pos[] = {{0.04,0.445},1};
										right[] = {{0.065,0.445},1};
										down[] = {{0.04,0.47},1};
									};
									class DrawPolygons
									{
										type = "polygon";
										points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"RTD_Torque_Level_1_1",1,{0.05,0.485},1},{"RTD_Torque_Level_1_1",1,{0.03,0.485},1}}};
									};
								};
								class Nominal_R: Nominal_L
								{
									condition = "(rtdRpm2*216)<=30";
									class Torque_Eng2: Torque_Eng1
									{
										pos[] = {{0.14,0.445},1};
										right[] = {{0.165,0.445},1};
										down[] = {{0.14,0.47},1};
										source = "rtdRpm2";
										sourceScale = 216;
										sourceIndex = 11;
										refreshRate = 0.1;
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.13,0.55},1},{{0.15,0.55},1},{"RTD_Torque_Level_1_2",1,{0.15,0.485},1},{"RTD_Torque_Level_1_2",1,{0.13,0.485},1}}};
									};
								};
								class Overtorque_L: Nominal_L
								{
									condition = "(rtdRpm1*216)>=30";
									color[] = {1,0,0};
									class Torque_Eng1: Torque_Eng1{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"RTD_Torque_Level_1_1",1,{0.05,0.485},1},{"RTD_Torque_Level_1_1",1,{0.03,0.485},1}},{{{0.02,0.43},1},{{0.06,0.43},1},{"RTD_Torque_Level_1_Yellow_1",1,{0.06,0.155},1},{"RTD_Torque_Level_1_Yellow_1",1,{0.02,0.155},1}}};
									};
								};
								class Overtorque_R: Nominal_R
								{
									condition = "(rtdRpm2*216)>=30";
									color[] = {1,0,0};
									class Torque_Eng2: Torque_Eng2{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.13,0.55},1},{{0.15,0.55},1},{"RTD_Torque_Level_1_2",1,{0.15,0.485},1},{"RTD_Torque_Level_1_2",1,{0.13,0.485},1}},{{{0.12,0.43},1},{{0.16,0.43},1},{"RTD_Torque_Level_1_Yellow_2",1,{0.16,0.155},1},{"RTD_Torque_Level_1_Yellow_2",1,{0.12,0.155},1}}};
									};
								};
							};
							class TorqueLevel_2: TorqueLevel_1
							{
								condition = "(user12>=50)*(user12<=90)";
								class Red: Red
								{
									class DrawLines: DrawLines
									{
										points[] = {{{0.005,0.33},1},{{0.185,0.33},1},{}};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.085,0.33},1},{{0.095,0.34},1},{{0.105,0.33},1},{{0.095,0.32},1}}};
									};
								};
								class Nominal_L: Nominal_L
								{
									condition = "(rtdRpm1*216)<=70";
									class Torque_Eng1: Torque_Eng1
									{
										pos[] = {{0.04,0.34},1};
										right[] = {{0.065,0.34},1};
										down[] = {{0.04,0.365},1};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"RTD_Torque_Level_2_1",1,{0.05,0.375},1},{"RTD_Torque_Level_2_1",1,{0.03,0.375},1}}};
									};
								};
								class Nominal_R: Nominal_R
								{
									condition = "(rtdRpm2*216)<=70";
									class Torque_Eng2: Torque_Eng2
									{
										pos[] = {{0.14,0.34},1};
										right[] = {{0.165,0.34},1};
										down[] = {{0.14,0.365},1};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.13,0.55},1},{{0.15,0.55},1},{"RTD_Torque_Level_2_2",1,{0.15,0.375},1},{"RTD_Torque_Level_2_2",1,{0.13,0.375},1}}};
									};
								};
								class Overtorque_L: Nominal_L
								{
									condition = "(rtdRpm1*216)>=70";
									color[] = {1,0,0};
									class Torque_Eng1: Torque_Eng1{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"RTD_Torque_Level_2_1",1,{0.05,0.375},1},{"RTD_Torque_Level_2_1",1,{0.03,0.375},1}},{{{0.02,0.33},1},{{0.06,0.33},1},{"RTD_Torque_Level_2_Yellow_1",1,{0.06,0.155},1},{"RTD_Torque_Level_2_Yellow_1",1,{0.02,0.155},1}}};
									};
								};
								class Overtorque_R: Nominal_R
								{
									condition = "(rtdRpm2*216)>=70";
									color[] = {1,0,0};
									class Torque_Eng2: Torque_Eng2{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.13,0.55},1},{{0.15,0.55},1},{"RTD_Torque_Level_2_2",1,{0.15,0.375},1},{"RTD_Torque_Level_2_2",1,{0.13,0.375},1}},{{{0.12,0.33},1},{{0.16,0.33},1},{"RTD_Torque_Level_2_Yellow_2",1,{0.16,0.155},1},{"RTD_Torque_Level_2_Yellow_2",1,{0.12,0.155},1}}};
									};
								};
							};
							class TorqueLevel_3: TorqueLevel_1
							{
								condition = "(user12>=90)";
								class Red: Red
								{
									class DrawLines: DrawLines
									{
										points[] = {{{0.005,0.21},1},{{0.185,0.21},1},{}};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.085,0.21},1},{{0.095,0.22},1},{{0.105,0.21},1},{{0.095,0.2},1}}};
									};
								};
								class Nominal_L: Nominal_L
								{
									condition = "(rtdRpm1*216)<=100";
									class Torque_Eng1: Torque_Eng1
									{
										pos[] = {{0.04,0.28},1};
										right[] = {{0.065,0.28},1};
										down[] = {{0.04,0.305},1};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"RTD_Torque_Level_3_1",1,{0.05,0.315},1},{"RTD_Torque_Level_3_1",1,{0.03,0.315},1}}};
									};
								};
								class Nominal_R: Nominal_R
								{
									condition = "(rtdRpm2*216)<=100";
									class Torque_Eng2: Torque_Eng2
									{
										pos[] = {{0.14,0.28},1};
										right[] = {{0.165,0.28},1};
										down[] = {{0.14,0.305},1};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.13,0.55},1},{{0.15,0.55},1},{"RTD_Torque_Level_3_2",1,{0.15,0.315},1},{"RTD_Torque_Level_3_2",1,{0.13,0.315},1}}};
									};
								};
								class Overtorque_L: Nominal_L
								{
									condition = "((rtdRpm1*216)>=100)*((rtdRpm1*216)<=115)";
									color[] = {1,0.3,0};
									class Torque_Eng1: Torque_Eng1{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"RTD_Torque_Level_3_1",1,{0.05,0.315},1},{"RTD_Torque_Level_3_1",1,{0.03,0.315},1}},{{{0.02,0.27},1},{{0.06,0.27},1},{"RTD_Torque_Level_3_Yellow_1",1,{0.06,0.21},1},{"RTD_Torque_Level_3_Yellow_1",1,{0.02,0.21},1}}};
									};
								};
								class Overtorque_R: Nominal_R
								{
									condition = "((rtdRpm2*216)>=100)*((rtdRpm2*216)<=115)";
									color[] = {1,0.3,0};
									class Torque_Eng2: Torque_Eng2{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.13,0.55},1},{{0.15,0.55},1},{"RTD_Torque_Level_3_2",1,{0.15,0.315},1},{"RTD_Torque_Level_3_2",1,{0.13,0.315},1}},{{{0.12,0.27},1},{{0.16,0.27},1},{"RTD_Torque_Level_3_Yellow_2",1,{0.16,0.21},1},{"RTD_Torque_Level_3_Yellow_2",1,{0.12,0.21},1}}};
									};
								};
								class DoNotExceed_L: Nominal_L
								{
									condition = "((rtdRpm1*216)>=115)";
									color[] = {1,0,0};
									class Torque_Eng1: Torque_Eng1{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"RTD_Torque_Level_3_1",1,{0.05,0.315},1},{"RTD_Torque_Level_3_1",1,{0.03,0.315},1}},{{{0.02,0.27},1},{{0.06,0.27},1},{"RTD_Torque_Level_3_Yellow_1",1,{0.06,0.21},1},{"RTD_Torque_Level_3_Yellow_1",1,{0.02,0.21},1}},{{{0.01,0.21},1},{{0.07,0.21},1},{"RTD_Torque_Level_3_Red_1",1,{0.07,0.155},1},{"RTD_Torque_Level_3_Red_1",1,{0.01,0.155},1}}};
									};
								};
								class DoNotExceed_R: Nominal_R
								{
									condition = "((rtdRpm2*216)>=115)";
									color[] = {1,0,0};
									class Torque_Eng2: Torque_Eng2{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.13,0.55},1},{{0.15,0.55},1},{"RTD_Torque_Level_3_2",1,{0.15,0.315},1},{"RTD_Torque_Level_3_2",1,{0.13,0.315},1}},{{{0.12,0.27},1},{{0.16,0.27},1},{"RTD_Torque_Level_3_Yellow_2",1,{0.16,0.21},1},{"RTD_Torque_Level_3_Yellow_2",1,{0.12,0.21},1}},{{{0.11,0.21},1},{{0.17,0.21},1},{"RTD_Torque_Level_3_Red_2",1,{0.17,0.155},1},{"RTD_Torque_Level_3_Red_2",1,{0.11,0.155},1}}};
									};
								};
							};
							class RPM_Eng1: RPM_Eng1
							{
								source = "user";
								sourceIndex = 13;
								sourceScale = 1;
							};
							class RPM_Eng2: RPM_Eng2
							{
								source = "user";
								sourceIndex = 14;
								sourceScale = 1;
							};
							class TGT_Eng1: TGT_Eng1{};
							class TGT_Eng2: TGT_Eng2{};
							class GasGen_Ok: GasGen_Ok
							{
								condition = "rpm>=6.3";
								class GasGen_Eng1: GasGen_Eng1
								{
									type = "text";
									source = "rpm";
									sourceScale = 9.9;
									sourceLength = 1;
									sourcePrecision = 1;
									refreshRate = 0.13;
								};
								class GasGen_Eng2: GasGen_Eng1
								{
									pos[] = {{"0.14+0.78",0.505},1};
									right[] = {{0.945,0.505},1};
									down[] = {{"0.14+0.78",0.53},1};
									sourceScale = 9.8;
									refreshRate = 0.1;
								};
							};
							class Red: Red
							{
								class GasGen_Low: GasGen_Low
								{
									condition = "rpm<=6.3";
									class GasGen_Eng1: GasGen_Eng1
									{
										source = "rpm";
										sourceScale = 9.9;
										sourceLength = 1;
										sourcePrecision = 1;
										refreshRate = 0.13;
									};
									class GasGen_Eng2: GasGen_Eng1
									{
										pos[] = {{"0.14+0.78",0.505},1};
										right[] = {{0.945,0.505},1};
										down[] = {{"0.14+0.78",0.53},1};
										sourceScale = 9.8;
										refreshRate = 0.1;
									};
								};
							};
							class DrawTGT_Green
							{
								alpha = 0.6;
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.26,0.55},1},{{0.28,0.55},1},{"TGT_Temp",1,{0.28,0.29},1},{"TGT_Temp",1,{0.26,0.29},1}},{{{0.36,0.55},1},{{0.38,0.55},1},{"TGT_Temp",1,{0.38,0.29},1},{"TGT_Temp",1,{0.36,0.29},1}}};
								};
							};
							class DrawEngineP_1_Green
							{
								condition = "user13<=105";
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.45,0.55},1},{{0.47,0.55},1},{"RTD_TurbineSpeed_1",1,{0.47,0.23},1},{"RTD_TurbineSpeed_1",1,{0.45,0.23},1}}};
								};
							};
							class DrawEngineP_2_Green
							{
								condition = "user14<=105";
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.66,0.55},1},{{0.68,0.55},1},{"RTD_TurbineSpeed_2",1,{0.68,0.23},1},{"RTD_TurbineSpeed_2",1,{0.66,0.23},1}}};
								};
							};
							class DrawEngineP_1_Yellow: DrawEngineP_1_Green
							{
								condition = "user13>=105";
								color[] = {1,0.3,0};
								class DrawPolygon: DrawPolygon
								{
									points[] = {{{{0.45,0.55},1},{{0.47,0.55},1},{"RTD_TurbineSpeed_1",1,{0.47,0.23},1},{"RTD_TurbineSpeed_1",1,{0.45,0.23},1}},{{{0.44,0.23},1},{{0.48,0.23},1},{"RTD_TurbineSpeed_Yellow_1",1,{0.48,0.155},1},{"RTD_TurbineSpeed_Yellow_1",1,{0.44,0.155},1}}};
								};
							};
							class DrawEngineP_2_Yellow: DrawEngineP_2_Green
							{
								condition = "user14>=105";
								color[] = {1,0.3,0};
								class DrawPolygon: DrawPolygon
								{
									points[] = {{{{0.66,0.55},1},{{0.68,0.55},1},{"RTD_TurbineSpeed_2",1,{0.68,0.23},1},{"RTD_TurbineSpeed_2",1,{0.66,0.23},1}},{{{0.65,0.23},1},{{0.69,0.23},1},{"RTD_TurbineSpeed_Yellow_2",1,{0.69,0.155},1},{"RTD_TurbineSpeed_Yellow_2",1,{0.65,0.155},1}}};
								};
							};
							class DrawRotor_Green
							{
								condition = "user12>=94";
								alpha = 0.6;
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.525,0.55},1},{{0.615,0.55},1},{"RTD_RotorSpeed2",1,"RTD_RotorSpeed",1,{0.615,0.29},1},{"RTD_RotorSpeed2",1,"RTD_RotorSpeed",1,{0.525,0.29},1}}};
								};
								class RotorSpeed
								{
									type = "text";
									source = "user";
									sourceIndex = 12;
									sourceScale = 1;
									sourceLength = 1;
									sourcePrecision = 0;
									refreshRate = 0.13;
									align = "center";
									scale = 1;
									pos[] = {{0.57,0.255},1};
									right[] = {{0.595,0.255},1};
									down[] = {{0.57,0.28},1};
								};
							};
							class DrawRotor_Red: DrawRotor_Green
							{
								condition = "user12<=94";
								color[] = {1,0,0};
								alpha = 0.3;
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.525,0.55},1},{{0.615,0.55},1},{"RTD_RotorSpeed2",1,"RTD_RotorSpeed",1,{0.615,0.29},1},{"RTD_RotorSpeed2",1,"RTD_RotorSpeed",1,{0.525,0.29},1}}};
								};
								class RotorSpeed: RotorSpeed{};
							};
						};
						class DrawBlackBackground
						{
							color[] = {0.0,0.0,0.0};
							alpha = 1;
							class DrawPolygon
							{
								type = "polygon";
								points[] = {{{{0.525,0.52},1},{{0.525,0.55},1},{{0.57,0.55},1}},{{{0.615,0.52},1},{{0.615,0.55},1},{{0.57,0.55},1}},{{{0.525,0.29},1},{{0.55,0.29},1},{{0.55,0.35},1},{{0.525,0.33},1}},{{{0.615,0.29},1},{{0.59,0.29},1},{{0.59,0.35},1},{{0.615,0.33},1}},{{{0.45,0.22},1},{{0.45,0.23},1},{{0.44,0.23},1}},{{{0.47,0.22},1},{{0.47,0.23},1},{{0.48,0.23},1}},{{{0.46,0.155},1},{{0.44,0.155},1},{{0.44,0.17},1}},{{{0.46,0.155},1},{{0.48,0.155},1},{{0.48,0.17},1}},{{{0.66,0.22},1},{{0.66,0.23},1},{{0.65,0.23},1}},{{{0.68,0.22},1},{{0.68,0.23},1},{{0.69,0.23},1}},{{{0.67,0.155},1},{{0.65,0.155},1},{{0.65,0.17},1}},{{{0.67,0.155},1},{{0.69,0.155},1},{{0.69,0.17},1}}};
							};
						};
						class Yellow
						{
							color[] = {1,0.3,0};
							alpha = 1;
							class DrawLines
							{
								type = "line";
								width = 6.0;
								points[] = {{{0.23,0.175},1},{{0.31,0.175},1},{},{{0.23,0.19},1},{{0.31,0.19},1},{},{{0.23,0.205},1},{{0.31,0.205},1},{},{{0.33,0.175},1},{{0.41,0.175},1},{},{{0.33,0.19},1},{{0.41,0.19},1},{},{{0.33,0.205},1},{{0.41,0.205},1},{}};
							};
						};
						class Red
						{
							color[] = {1,0,0};
							alpha = 1;
							class DrawLines
							{
								type = "line";
								width = 6.0;
								points[] = {{{0.23,0.16},1},{{0.41,0.16},1},{},{{0.525,0.22},1},{{0.57,0.19},1},{{0.615,0.22},1}};
							};
							class DrawPolygons
							{
								type = "polygon";
								points[] = {{{{0.31,0.16},1},{{0.32,0.17},1},{{0.33,0.16},1},{{0.32,0.15},1}},{{{0.51,0.19},1},{{0.52,0.2},1},{{0.53,0.19},1},{{0.52,0.18},1}},{{{0.61,0.19},1},{{0.62,0.2},1},{{0.63,0.19},1},{{0.62,0.18},1}}};
							};
						};
						class TorqueEng1
						{
							type = "text";
							source = "static";
							text = "1";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.04,0.56},1};
							right[] = {{0.065,0.56},1};
							down[] = {{0.04,0.585},1};
						};
						class TorqueEng2
						{
							type = "text";
							source = "static";
							text = "2";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.14,0.56},1};
							right[] = {{0.165,0.56},1};
							down[] = {{0.14,0.585},1};
						};
						class TGTEng1
						{
							type = "text";
							source = "static";
							text = "1";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{"0.04+0.23",0.56},1};
							right[] = {{0.295,0.56},1};
							down[] = {{"0.04+0.23",0.585},1};
						};
						class TGTEng2
						{
							type = "text";
							source = "static";
							text = "2";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{"0.14+0.23",0.56},1};
							right[] = {{0.395,0.56},1};
							down[] = {{"0.14+0.23",0.585},1};
						};
						class TurbineSpeed1
						{
							type = "text";
							source = "static";
							text = "1";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{"0.04+0.42",0.56},1};
							right[] = {{0.485,0.56},1};
							down[] = {{"0.04+0.42",0.585},1};
						};
						class TurbineSpeed2
						{
							type = "text";
							source = "static";
							text = "2";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{"0.14+0.53",0.56},1};
							right[] = {{0.695,0.56},1};
							down[] = {{"0.14+0.53",0.585},1};
						};
						class TurbineSpeed1_Percent
						{
							type = "text";
							source = "static";
							text = "1";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{"0.04+0.76",0.56},1};
							right[] = {{0.825,0.56},1};
							down[] = {{"0.04+0.76",0.585},1};
						};
						class TurbineSpeed2_Percent
						{
							type = "text";
							source = "static";
							text = "2";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{"0.14+0.78",0.56},1};
							right[] = {{0.945,0.56},1};
							down[] = {{"0.14+0.78",0.585},1};
						};
						class Engine
						{
							type = "text";
							source = "static";
							text = "ENG";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.19,0.94},1};
							right[] = {{0.22,0.94},1};
							down[] = {{0.19,0.97},1};
						};
						class System
						{
							type = "text";
							source = "static";
							text = "SYS";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.33,0.94},1};
							right[] = {{0.36,0.94},1};
							down[] = {{0.33,0.97},1};
						};
						class ETF
						{
							type = "text";
							source = "static";
							text = "ETF";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.47,0.94},1};
							right[] = {{0.5,0.94},1};
							down[] = {{0.47,0.97},1};
						};
						class WCA
						{
							type = "text";
							source = "static";
							text = "WCA";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.89,0.94},1};
							right[] = {{0.92,0.94},1};
							down[] = {{0.89,0.97},1};
						};
					};
				};
				class MFD_Left_TADS
				{
					topLeft = "GUNNER_MFD_L_TL";
					topRight = "GUNNER_MFD_L_TR";
					bottomLeft = "GUNNER_MFD_L_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {-2};
					class Bones
					{
						class HUDCenter
						{
							type = "fixed";
							pos[] = {0.5,0.5};
						};
						class VelocityVector
						{
							type = "vector";
							source = "velocityToView";
							pos0[] = {0.5,0.5};
							pos10[] = {0.934,0.93};
						};
						class ForwardVector
						{
							type = "vector";
							source = "forward";
							pos0[] = {0,0};
							pos10[] = {0.434,0.43};
						};
						class HorizonVector
						{
							type = "horizon";
							pos0[] = {0.5,0.5};
							pos10[] = {1.11376,1.10811};
							angle = 0;
						};
						class GunnerAim
						{
							type = "vector";
							source = "turret";
							pos0[] = {0,-2.0};
							pos10[] = {0.0068,-0.01};
							projection = 0;
						};
						class VerticalSpeedBone
						{
							type = "linear";
							source = "vspeed";
							sourceScale = 1;
							min = -10;
							max = 10;
							minPos[] = {0,-0.26};
							maxPos[] = {0,0.26};
						};
						class TurnRate
						{
							type = "linear";
							source = "gmeterxgrav";
							min = -2;
							max = 2;
							minPos[] = {0.36,0.87};
							maxPos[] = {0.64,0.87};
							aspectRatio = 1;
						};
						class FCR_Bearing
						{
							type = "linear";
							source = "user";
							sourceIndex = 17;
							min = -180;
							max = 180;
							minPos[] = {0.35,0.165};
							maxPos[] = {0.66,0.165};
						};
						class HorizonBankRot
						{
							type = "linear";
							source = "horizonBank";
							min = -0.5236;
							max = 0.5236;
							minPos[] = {0.41,0.94};
							maxPos[] = {0.59,0.94};
							aspectRatio = 1;
						};
						class HorizonBankRot_Up
						{
							type = "rotational";
							source = "horizonBank";
							center[] = {0.5,0.5};
							min = "-rad(30)";
							max = "rad(30)";
							minAngle = "180.25-29";
							maxAngle = "180.75+29";
							aspectRatio = 1;
						};
						class HorizonBankRotFull
						{
							type = "rotational";
							source = "horizonBank";
							center[] = {0,0};
							min = -3.1416;
							max = 3.1416;
							minAngle = -180;
							maxAngle = 180;
							aspectRatio = 1;
						};
						class LimitWaypoint
						{
							type = "limit";
							limits[] = {0.23,0.18,0.77,0.18};
						};
						class WPPoint
						{
							type = "vector";
							source = "WPPoint";
							pos0[] = {0.5,0.5};
							pos10[] = {0.934,0.93};
						};
					};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on*(user6>=4)*(user6<=4)";
						class CameraMode
						{
							type = "text";
							source = "userText";
							sourceIndex = 0;
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.2,0.3},1};
							right[] = {{0.24,0.3},1};
							down[] = {{0.2,0.34},1};
						};
						class Static
						{
							type = "line";
							width = 4.0;
							points[] = {{{0.4,0.86},1},{{0.4,0.94},1},{{0.6,0.94},1},{{0.6,0.86},1},{{0.4,0.86},1},{},{{0.4,0.885},1},{{0.408,0.885},1},{},{{0.6,0.885},1},{{0.592,0.885},1},{},{{0.5,0.86},1},{{0.5,0.868},1},{},{{0.5,0.94},1},{{0.5,0.932},1},{},{"HUDCenter",1,{-0.07,0.0},1},{"HUDCenter",1,{-0.02,0.0},1},{},{"HUDCenter",1,{0.02,0.0},1},{"HUDCenter",1,{0.07,0.0},1},{},{"HUDCenter",1,{0.0,-0.02},1},{"HUDCenter",1,{0.0,-0.07},1},{},{"HUDCenter",1,{0.0,0.07},1},{"HUDCenter",1,{0.0,0.02},1}};
						};
						class ZoomBox
						{
							condition = "user9<=2";
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{"HUDCenter",1,{-0.2,-0.1125},1},{"HUDCenter",1,{-0.2,-0.15},1},{"HUDCenter",1,{-0.1625,-0.15},1},{},{"HUDCenter",1,{-0.2,0.1125},1},{"HUDCenter",1,{-0.2,0.15},1},{"HUDCenter",1,{-0.1625,0.15},1},{},{"HUDCenter",1,{0.2,0.1125},1},{"HUDCenter",1,{0.2,0.15},1},{"HUDCenter",1,{0.1625,0.15},1},{},{"HUDCenter",1,{0.2,-0.1125},1},{"HUDCenter",1,{0.2,-0.15},1},{"HUDCenter",1,{0.1625,-0.15},1},{}};
							};
						};
						class ZoomBoxNarrow
						{
							condition = "(user9>=3)*(user9<=8)";
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{"HUDCenter",1,{-0.24,-0.1425},1},{"HUDCenter",1,{-0.24,-0.19},1},{"HUDCenter",1,{-0.1925,-0.19},1},{},{"HUDCenter",1,{-0.24,0.1425},1},{"HUDCenter",1,{-0.24,0.19},1},{"HUDCenter",1,{-0.1925,0.19},1},{},{"HUDCenter",1,{0.24,0.1425},1},{"HUDCenter",1,{0.24,0.19},1},{"HUDCenter",1,{0.1925,0.19},1},{},{"HUDCenter",1,{0.24,-0.1425},1},{"HUDCenter",1,{0.24,-0.19},1},{"HUDCenter",1,{0.1925,-0.19},1},{}};
							};
						};
						class StaticBold
						{
							type = "line";
							width = 6.0;
							points[] = {{{0.5,0.18},1},{{0.5,0.22},1},{}};
						};
						class DrawPolygons
						{
							type = "polygon";
							width = 4.0;
							points[] = {{{"FCR_Bearing",{-0.019,0},1},{"FCR_Bearing",{-0.008,0},1},{"FCR_Bearing",{-0.008,0.011},1},{"FCR_Bearing",{-0.019,0.011},1}},{{"FCR_Bearing",{-0.003,0},1},{"FCR_Bearing",{0.008,0},1},{"FCR_Bearing",{0.008,0.011},1},{"FCR_Bearing",{-0.003,0.011},1}},{{"FCR_Bearing",{0.008,0},1},{"FCR_Bearing",{0.014,0.0055},1},{"FCR_Bearing",{0.008,0.011},1}},{{"FCR_Bearing",{-0.019,0},1},{"FCR_Bearing",{-0.025,0.0055},1},{"FCR_Bearing",{-0.019,0.011},1}},{{"TurnRate",{-0.013,0},1},{"TurnRate",{0.017,0},1},{"TurnRate",{0.017,0.03},1},{"TurnRate",{-0.013,0.03},1}}};
						};
						class HeadingHeadNumber
						{
							type = "text";
							source = "heading";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.5,"0.042+0.077"},1};
							right[] = {{0.54,"0.042+0.077"},1};
							down[] = {{0.5,0.159},1};
						};
						class HeadingScaleRight
						{
							clipTL[] = {0.55,0.0};
							clipBR[] = {0.77,0.5};
							class lines
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								width = 4.0;
								NeverEatSeaWeed = 1;
								top = 0.5;
								center = 0.5;
								bottom = 0.82;
								lineXleft = 0.187;
								lineYright = 0.177;
								lineXleftMajor = 0.187;
								lineYrightMajor = 0.167;
								majorLineEach = 3;
								numberEach = 3;
								step = 1;
								stepSize = 0.0263889;
								align = "center";
								scale = 1;
								pos[] = {0.495,"0.05+0.077"};
								right[] = {0.52,"0.05+0.077"};
								down[] = {0.495,"0.08+0.077"};
							};
						};
						class HeadingScaleMidle
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 0.1;
							width = 4.0;
							NeverEatSeaWeed = 1;
							top = 0.45;
							center = 0.5;
							bottom = 0.55;
							lineXleft = 0.187;
							lineYright = 0.177;
							lineXleftMajor = 0.187;
							lineYrightMajor = 0.177;
							majorLineEach = 2;
							step = 1;
							stepSize = 0.0263889;
							align = "center";
							scale = 1;
							numberEach = 0;
							pos[] = {0.47,"0.05+0.077"};
							right[] = {0.5,"0.05+0.077"};
							down[] = {0.45,"0.09+0.077"};
						};
						class HeadingScaleLeft
						{
							clipTL[] = {0.23,0.0};
							clipBR[] = {0.45,0.5};
							class lines
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								width = 4.0;
								NeverEatSeaWeed = 1;
								top = 0.17;
								center = 0.5;
								bottom = 0.55;
								lineXleft = 0.187;
								lineYright = 0.177;
								lineXleftMajor = 0.187;
								lineYrightMajor = 0.167;
								majorLineEach = 3;
								numberEach = 3;
								step = 1;
								stepSize = 0.0263889;
								align = "center";
								scale = 1;
								pos[] = {0.166,"0.05+0.077"};
								right[] = {0.191,"0.05+0.077"};
								down[] = {0.166,"0.08+0.077"};
							};
						};
						class WP
						{
							condition = "wpvalid";
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{"WPPoint",1,"LimitWaypoint",1,{-0.01,0.04},1},{"WPPoint",1,"LimitWaypoint",1,{0.0,0.02},1},{"WPPoint",1,"LimitWaypoint",1,{0.01,0.04},1},{}};
							};
						};
						class LaserGroup
						{
							condition = "laseron";
							class Gunner
							{
								type = "line";
								width = 4.0;
								points[] = {{"HUDCenter",{0.04,0.038},1},{"HUDCenter",{0.015,0.01},1},{},{"HUDCenter",{-0.04,0.038},1},{"HUDCenter",{-0.015,0.01},1},{},{"HUDCenter",{0.04,-0.038},1},{"HUDCenter",{0.015,-0.01},1},{},{"HUDCenter",{-0.04,-0.038},1},{"HUDCenter",{-0.015,-0.01},1},{}};
							};
						};
						class RadarGroup
						{
							condition = "activeSensorsOn";
							class RadarGround
							{
								condition = "1-user8";
								class TransText
								{
									type = "text";
									source = "static";
									text = "FCR/G";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.1,0.86},1};
									right[] = {{0.127,0.86},1};
									down[] = {{0.1,0.887},1};
								};
								class DrawLine{};
							};
							class RadarAir
							{
								condition = "user8>=1";
								class TransText
								{
									type = "text";
									source = "static";
									text = "FCR/A";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.1,0.86},1};
									right[] = {{0.127,0.86},1};
									down[] = {{0.1,0.887},1};
								};
							};
							class AutoRange
							{
								condition = "targetDist>=1";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "R";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.26,0.86},1};
									right[] = {{0.287,0.86},1};
									down[] = {{0.26,0.887},1};
								};
								class RangeSource
								{
									type = "text";
									source = "targetDist";
									sourceScale = 0.001;
									sourceLength = 2;
									sourcePrecision = 1;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{0.29,0.86},1};
									right[] = {{0.317,0.86},1};
									down[] = {{0.29,0.887},1};
								};
							};
							class LaserRange
							{
								condition = "targetDist<=0.99";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "*";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.26,0.86},1};
									right[] = {{0.287,0.86},1};
									down[] = {{0.26,0.887},1};
								};
								class SpeedSource
								{
									type = "text";
									source = "laserDist";
									sourceScale = 1;
									sourceLength = 4;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{0.29,0.86},1};
									right[] = {{0.317,0.86},1};
									down[] = {{0.29,0.887},1};
								};
							};
						};
						class TADSGroup
						{
							condition = "1-activeSensorsOn";
							class TransText
							{
								type = "text";
								source = "static";
								text = "TADS";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.1,0.86},1};
								right[] = {{0.127,0.86},1};
								down[] = {{0.1,0.887},1};
							};
							class AutoRange
							{
								condition = "targetDist>=1";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "A";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.26,0.86},1};
									right[] = {{0.287,0.86},1};
									down[] = {{0.26,0.887},1};
								};
								class RangeSource
								{
									type = "text";
									source = "targetDist";
									sourceScale = 0.001;
									sourceLength = 2;
									sourcePrecision = 1;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{0.29,0.86},1};
									right[] = {{0.317,0.86},1};
									down[] = {{0.29,0.887},1};
								};
							};
							class LaserRange
							{
								condition = "targetDist<=0.99";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "*";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.26,0.86},1};
									right[] = {{0.287,0.86},1};
									down[] = {{0.26,0.887},1};
								};
								class SpeedSource
								{
									type = "text";
									source = "laserDist";
									sourceScale = 1;
									sourceLength = 4;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{0.29,0.86},1};
									right[] = {{0.317,0.86},1};
									down[] = {{0.29,0.887},1};
								};
							};
						};
						class Gunner
						{
							type = "line";
							width = 4.0;
							points[] = {{"GunnerAim",{0.485,0.892},1},{"GunnerAim",{0.485,0.908},1},{"GunnerAim",{0.515,0.908},1},{"GunnerAim",{0.515,0.892},1},{"GunnerAim",{0.485,0.892},1}};
						};
						class SpeedNumber
						{
							type = "text";
							source = "speed";
							sourceScale = 1.9438444;
							align = "left";
							scale = 1;
							pos[] = {{0.39,0.81},1};
							right[] = {{0.417,0.81},1};
							down[] = {{0.39,0.837},1};
						};
						class AltNumber
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 3.28084;
							sourceOffset = -6.88976;
							align = "right";
							scale = 1;
							pos[] = {{0.62,0.81},1};
							right[] = {{0.647,0.81},1};
							down[] = {{0.62,0.837},1};
						};
						class MGun
						{
							condition = "mgun";
							class RangeText
							{
								type = "text";
								source = "static";
								text = "P GUN";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.61,0.86},1};
								right[] = {{0.637,0.86},1};
								down[] = {{0.61,0.887},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								text = "GUN";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{0.61,0.9},1};
								right[] = {{0.637,0.9},1};
								down[] = {{0.61,0.927},1};
							};
							class Ammo
							{
								type = "text";
								source = "ammo";
								sourceScale = 1;
								align = "left";
								scale = 0.5;
								pos[] = {{0.93,0.9},1};
								right[] = {{0.957,0.9},1};
								down[] = {{0.93,0.927},1};
							};
						};
						class AAMissile
						{
							condition = "bomb";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P ATA";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.61,0.86},1};
								right[] = {{0.637,0.86},1};
								down[] = {{0.61,0.887},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{0.61,0.9},1};
								right[] = {{0.637,0.9},1};
								down[] = {{0.61,0.927},1};
							};
						};
						class ATMissile
						{
							condition = "ATmissile + AAmissile";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P MSL";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.61,0.86},1};
								right[] = {{0.637,0.86},1};
								down[] = {{0.61,0.887},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{0.61,0.9},1};
								right[] = {{0.637,0.9},1};
								down[] = {{0.61,0.927},1};
							};
						};
						class Rockets
						{
							condition = "rocket";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P RKT";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.61,0.86},1};
								right[] = {{0.637,0.86},1};
								down[] = {{0.61,0.887},1};
							};
							class AmmoName
							{
								type = "text";
								source = "ammoFormat";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{0.61,0.9},1};
								right[] = {{0.637,0.9},1};
								down[] = {{0.61,0.927},1};
							};
						};
					};
				};
				class MFD_Left_Radar
				{
					topLeft = "GUNNER_MFD_L_TL";
					topRight = "GUNNER_MFD_L_TR";
					bottomLeft = "GUNNER_MFD_L_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {-2};
					class Bones
					{
						class Sensor_Offset
						{
							type = "fixed";
							pos[] = {0.0,0.38};
						};
						class Static_Offset
						{
							type = "fixed";
							pos[] = {0.5,0.85};
						};
						class Static_Offset2: Static_Offset
						{
							pos[] = {0.5,0.88};
						};
						class Static_Offset_AA: Static_Offset
						{
							pos[] = {0.5,0.495};
						};
						class Sensor_Offset_AA: Static_Offset
						{
							pos[] = {0.0,-0.005};
						};
						class LimitWaypoint
						{
							type = "limit";
							limits[] = {0.22,0.06,0.78,0.06};
						};
						class FCR_Bearing
						{
							type = "linear";
							source = "user";
							sourceIndex = 17;
							min = -180;
							max = 180;
							minPos[] = {0.35,0.085};
							maxPos[] = {0.66,0.085};
						};
						class FCR_ScanLine_Bottom
						{
							type = "rotational";
							source = "user";
							sourceIndex = 16;
							min = 0;
							max = 0.5;
							pos0[] = {0.0,0.0};
							pos10[] = {0.0,0.0};
							center[] = {0.0,0.0};
							minAngle = 135;
							maxAngle = 225;
							aspectRatio = 1;
						};
						class FCR_ScanLine_Top: FCR_ScanLine_Bottom
						{
							min = 0.5;
							max = 1;
							minAngle = 225;
							maxAngle = 135;
						};
						class FCR_ScanLine_AA: FCR_ScanLine_Bottom
						{
							min = 0;
							max = 1;
							minAngle = 180;
							maxAngle = 540;
						};
						class WPPoint
						{
							type = "vector";
							source = "WPPoint";
							pos0[] = {0.5,0.5};
							pos10[] = {0.934,0.93};
						};
						class GunnerAim
						{
							type = "vector";
							source = "turret";
							pos0[] = {0,-2.0};
							pos10[] = {0.0068,-0.01};
							projection = 0;
						};
					};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on*(user6>=5)*(user6<=5)";
						class Static
						{
							type = "line";
							width = 5.0;
							points[] = {{{0.5,0.09},1},{{0.5,0.12},1},{},{{0.01,0.83},1},{{0.035,0.83},1},{},{{0.01,0.845},1},{{0.02,0.845},1},{},{{0.01,0.86},1},{{0.02,0.86},1},{},{{0.01,0.875},1},{{0.02,0.875},1},{},{{0.01,0.89},1},{{0.02,0.89},1},{},{{0.01,0.905},1},{{0.035,0.905},1},{},{{0.01,0.92},1},{{0.02,0.92},1},{},{{0.01,0.935},1},{{0.02,0.935},1},{},{{0.01,0.95},1},{{0.035,0.95},1},{},{{0.08,0.91},1},{{0.075,0.915},1},{{0.07,0.92},1},{{0.07,0.98},1},{{0.075,0.985},1},{{0.08,0.99},1},{{0.34,0.99},1},{{0.345,0.985},1},{{0.35,0.98},1},{{0.35,0.92},1},{{0.345,0.915},1},{{0.34,0.91},1},{{0.08,0.91},1},{},{{0.66,0.91},1},{{0.655,0.915},1},{{0.65,0.92},1},{{0.65,0.98},1},{{0.655,0.985},1},{{0.66,0.99},1},{{0.92,0.99},1},{{0.925,0.985},1},{{0.93,0.98},1},{{0.93,0.92},1},{{0.925,0.915},1},{{0.92,0.91},1},{{0.66,0.91},1},{},{},{{0.8,0.014},1},{{0.87,0.014},1},{},{{0.945239,0.335771},1},{{0.964144,0.335771},1},{{0.964144,0.341741},1},{{0.994492,0.325821},1},{{0.964144,0.309403},1},{{0.964144,0.315871},1},{{0.945239,0.315871},1},{{0.945239,0.335771},1},{},{{0.0596667,0.335771},1},{{0.0407612,0.335771},1},{{0.0407612,0.341741},1},{{0.0109104,0.325821},1},{{0.0407612,0.309403},1},{{0.0407612,0.315871},1},{{0.0596667,0.315871},1},{{0.0596667,0.335771},1},{}};
						};
						class ClassArrows
						{
							type = "polygon";
							points[] = {{{{0.87,0.0068},1},{{0.89,0.014},1},{{0.87,0.0212},1}},{{{0.06,0.8942},1},{{0.04,0.905},1},{{0.06,0.9158},1}},{{"FCR_Bearing",{-0.019,0},1},{"FCR_Bearing",{-0.008,0},1},{"FCR_Bearing",{-0.008,0.011},1},{"FCR_Bearing",{-0.019,0.011},1}},{{"FCR_Bearing",{-0.003,0},1},{"FCR_Bearing",{0.008,0},1},{"FCR_Bearing",{0.008,0.011},1},{"FCR_Bearing",{-0.003,0.011},1}},{{"FCR_Bearing",{0.008,0},1},{"FCR_Bearing",{0.014,0.0055},1},{"FCR_Bearing",{0.008,0.011},1}},{{"FCR_Bearing",{-0.019,0},1},{"FCR_Bearing",{-0.025,0.0055},1},{"FCR_Bearing",{-0.019,0.011},1}}};
						};
						class HeadingHeadNumber
						{
							type = "text";
							source = "heading";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.5,"0.042-0.03"},1};
							right[] = {{0.54,"0.042-0.03"},1};
							down[] = {{0.5,0.052},1};
						};
						class HeadingScaleRight
						{
							clipTL[] = {0.55,0.0};
							clipBR[] = {0.77,0.11};
							class lines
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								width = 4.0;
								NeverEatSeaWeed = 1;
								top = 0.5;
								center = 0.5;
								bottom = 0.82;
								lineXleft = 0.08;
								lineYright = 0.07;
								lineXleftMajor = 0.08;
								lineYrightMajor = 0.06;
								majorLineEach = 3;
								numberEach = 3;
								step = 1;
								stepSize = 0.0263889;
								align = "center";
								scale = 1;
								pos[] = {0.495,"0.05-0.03"};
								right[] = {0.52,"0.05-0.03"};
								down[] = {0.495,"0.08-0.03"};
							};
						};
						class HeadingScaleMidle
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 0.1;
							width = 4.0;
							NeverEatSeaWeed = 1;
							top = 0.45;
							center = 0.5;
							bottom = 0.55;
							lineXleft = 0.08;
							lineYright = 0.07;
							lineXleftMajor = 0.08;
							lineYrightMajor = 0.07;
							majorLineEach = 2;
							step = 1;
							stepSize = 0.0263889;
							align = "center";
							scale = 1;
							numberEach = 0;
							pos[] = {0.47,"0.05-0.03"};
							right[] = {0.5,"0.05-0.03"};
							down[] = {0.45,"0.09-0.03"};
						};
						class HeadingScaleLeft
						{
							clipTL[] = {0.23,0.0};
							clipBR[] = {0.45,0.11};
							class lines
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								width = 4.0;
								NeverEatSeaWeed = 1;
								top = 0.17;
								center = 0.5;
								bottom = 0.55;
								lineXleft = 0.08;
								lineYright = 0.07;
								lineXleftMajor = 0.08;
								lineYrightMajor = 0.06;
								majorLineEach = 3;
								numberEach = 3;
								step = 1;
								stepSize = 0.0263889;
								align = "center";
								scale = 1;
								pos[] = {0.166,"0.05-0.03"};
								right[] = {0.191,"0.05-0.03"};
								down[] = {0.166,"0.08-0.03"};
							};
						};
						class WP
						{
							condition = "wpvalid";
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{"WPPoint",1,"LimitWaypoint",1,{-0.01,0.04},1},{"WPPoint",1,"LimitWaypoint",1,{0.0,0.02},1},{"WPPoint",1,"LimitWaypoint",1,{0.01,0.04},1},{}};
							};
						};
						class TgtStoreSelection1
						{
							type = "text";
							source = "static";
							text = "T";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.005,0.51},1};
							right[] = {{0.035,0.51},1};
							down[] = {{0.005,0.54},1};
						};
						class TgtStoreSelection2
						{
							type = "text";
							source = "static";
							text = "G";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.005,0.55},1};
							right[] = {{0.035,0.55},1};
							down[] = {{0.005,0.58},1};
						};
						class TgtStoreSelection3
						{
							type = "text";
							source = "static";
							text = "T";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.005,0.59},1};
							right[] = {{0.035,0.59},1};
							down[] = {{0.005,0.62},1};
						};
						class NextToShoot1
						{
							type = "text";
							source = "static";
							text = "N";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.005,0.14},1};
							right[] = {{0.035,0.14},1};
							down[] = {{0.005,0.17},1};
						};
						class NextToShoot2
						{
							type = "text";
							source = "static";
							text = "T";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.005,0.18},1};
							right[] = {{0.035,0.18},1};
							down[] = {{0.005,0.21},1};
						};
						class NextToShoot3
						{
							type = "text";
							source = "static";
							text = "S";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.005,0.22},1};
							right[] = {{0.035,0.22},1};
							down[] = {{0.005,0.25},1};
						};
						class RF_Sel1
						{
							type = "text";
							source = "static";
							text = "RF";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.995,0.55},1};
							right[] = {{1.025,0.55},1};
							down[] = {{0.995,0.58},1};
						};
						class RF_Sel2
						{
							type = "text";
							source = "static";
							text = "HO";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.995,0.59},1};
							right[] = {{1.025,0.59},1};
							down[] = {{0.995,0.62},1};
						};
						class AcquisitionBtn1
						{
							type = "text";
							source = "static";
							text = "ACQ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.995,0.78},1};
							right[] = {{1.025,0.78},1};
							down[] = {{0.995,0.81},1};
						};
						class AcquisitionBtn2
						{
							type = "text";
							source = "static";
							text = "T32";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.995,0.84},1};
							right[] = {{1.025,0.84},1};
							down[] = {{0.995,0.87},1};
						};
						class CScope
						{
							type = "text";
							source = "static";
							text = "C SCP";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.23,0.03},1};
							right[] = {{0.26,0.03},1};
							down[] = {{0.23,0.06},1};
						};
						class Utilities
						{
							type = "text";
							source = "static";
							text = "UTIL";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.89,0.03},1};
							right[] = {{0.92,0.03},1};
							down[] = {{0.89,0.06},1};
						};
						class TotalTargetCount
						{
							type = "text";
							source = "static";
							text = "XXXX";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.97,0.08},1};
							right[] = {{1,0.08},1};
							down[] = {{0.97,0.11},1};
						};
						class RadarGround
						{
							condition = "1-user8";
							class Static
							{
								type = "line";
								width = 4;
								points[] = {{{0.4,0.91},1},{{0.4,0.99},1},{{0.6,0.99},1},{{0.6,0.91},1},{{0.4,0.91},1},{},{{0.4,0.935},1},{{0.408,0.935},1},{},{{0.6,0.935},1},{{0.592,0.935},1},{},{{0.5,0.91},1},{{0.5,0.918},1},{},{{0.5,0.99},1},{{0.5,0.982},1},{},{{0.001,0.71},1},{{0.111,0.71},1},{{0.111,0.76},1},{{0.001,0.76},1},{{0.001,0.71},1},{},{{0.915,0.83},1},{{1,0.83},1},{{1,0.88},1},{{0.915,0.88},1},{{0.915,0.83},1},{},{"GunnerAim",{0.485,0.942},1},{"GunnerAim",{0.485,0.958},1},{"GunnerAim",{0.515,0.958},1},{"GunnerAim",{0.515,0.942},1},{"GunnerAim",{0.485,0.942},1},{},{"Static_Offset2",{0.0353553,-0.0350295},1},{"Static_Offset2",{0.480833,-0.476401},1},{"Static_Offset2",{0.459401,-0.496728},1},{"Static_Offset2",{0.437096,-0.516109},1},{"Static_Offset2",{0.413958,-0.534508},1},{"Static_Offset2",{0.390032,-0.55189},1},{"Static_Offset2",{0.365364,-0.56822},1},{"Static_Offset2",{0.34,-0.58347},1},{"Static_Offset2",{0.313989,-0.597608},1},{"Static_Offset2",{0.28738,-0.610609},1},{"Static_Offset2",{0.260225,-0.622448},1},{"Static_Offset2",{0.232574,-0.633102},1},{"Static_Offset2",{0.20448,-0.64255},1},{"Static_Offset2",{0.175997,-0.650776},1},{"Static_Offset2",{0.147179,-0.657763},1},{"Static_Offset2",{0.118081,-0.663497},1},{"Static_Offset2",{0.0887578,-0.667969},1},{"Static_Offset2",{0.0592659,-0.671169},1},{"Static_Offset2",{0.0296612,-0.673092},1},{"Static_Offset2",{0,-0.673733},1},{"Static_Offset2",{-0.0296612,-0.673092},1},{"Static_Offset2",{-0.0592659,-0.671169},1},{"Static_Offset2",{-0.0887578,-0.667969},1},{"Static_Offset2",{-0.118081,-0.663497},1},{"Static_Offset2",{-0.147179,-0.657763},1},{"Static_Offset2",{-0.175997,-0.650776},1},{"Static_Offset2",{-0.20448,-0.64255},1},{"Static_Offset2",{-0.232574,-0.633102},1},{"Static_Offset2",{-0.260225,-0.622448},1},{"Static_Offset2",{-0.28738,-0.610609},1},{"Static_Offset2",{-0.313989,-0.597608},1},{"Static_Offset2",{-0.34,-0.58347},1},{"Static_Offset2",{-0.365364,-0.56822},1},{"Static_Offset2",{-0.390032,-0.55189},1},{"Static_Offset2",{-0.413958,-0.534508},1},{"Static_Offset2",{-0.437096,-0.516109},1},{"Static_Offset2",{-0.459401,-0.496728},1},{"Static_Offset2",{-0.480833,-0.476401},1},{"Static_Offset2",{-0.0353553,-0.0350295},1},{"Static_Offset2",{-0.480833,-0.476401},1},{},{"Static_Offset2",{0,-0.673733},1},{"Static_Offset2",{0,-0.653917},1},{},{"Static_Offset2",{0.0887578,-0.667969},1},{"Static_Offset2",{0.0861473,-0.648323},1},{},{"Static_Offset2",{0.175997,-0.650776},1},{"Static_Offset2",{0.170821,-0.631635},1},{},{"Static_Offset2",{0.260225,-0.622448},1},{"Static_Offset2",{0.252571,-0.604141},1},{},{"Static_Offset2",{-0.0887578,-0.667969},1},{"Static_Offset2",{-0.0861473,-0.648323},1},{},{"Static_Offset2",{-0.175997,-0.650776},1},{"Static_Offset2",{-0.170821,-0.631635},1},{},{"Static_Offset2",{-0.260225,-0.622448},1},{"Static_Offset2",{-0.252571,-0.604141},1},{}};
							};
							class StaticLight
							{
								type = "line";
								width = 2.0;
								points[] = {{"Static_Offset2",{0.360624,-0.357301},1},{"Static_Offset2",{0.344551,-0.372546},1},{"Static_Offset2",{0.327822,-0.387082},1},{"Static_Offset2",{0.310468,-0.400881},1},{"Static_Offset2",{0.292524,-0.413917},1},{"Static_Offset2",{0.274023,-0.426165},1},{"Static_Offset2",{0.255,-0.437602},1},{"Static_Offset2",{0.235492,-0.448206},1},{"Static_Offset2",{0.215535,-0.457957},1},{"Static_Offset2",{0.195169,-0.466836},1},{"Static_Offset2",{0.17443,-0.474826},1},{"Static_Offset2",{0.15336,-0.481913},1},{"Static_Offset2",{0.131998,-0.488082},1},{"Static_Offset2",{0.110384,-0.493322},1},{"Static_Offset2",{0.0885606,-0.497623},1},{"Static_Offset2",{0.0665684,-0.500977},1},{"Static_Offset2",{0.0444494,-0.503377},1},{"Static_Offset2",{0.0222459,-0.504819},1},{"Static_Offset2",{0,-0.5053},1},{"Static_Offset2",{-0.0222459,-0.504819},1},{"Static_Offset2",{-0.0444494,-0.503377},1},{"Static_Offset2",{-0.0665684,-0.500977},1},{"Static_Offset2",{-0.0885606,-0.497623},1},{"Static_Offset2",{-0.110384,-0.493322},1},{"Static_Offset2",{-0.131998,-0.488082},1},{"Static_Offset2",{-0.15336,-0.481913},1},{"Static_Offset2",{-0.17443,-0.474826},1},{"Static_Offset2",{-0.195169,-0.466836},1},{"Static_Offset2",{-0.215535,-0.457957},1},{"Static_Offset2",{-0.235492,-0.448206},1},{"Static_Offset2",{-0.255,-0.437602},1},{"Static_Offset2",{-0.274023,-0.426165},1},{"Static_Offset2",{-0.292524,-0.413917},1},{"Static_Offset2",{-0.310468,-0.400881},1},{"Static_Offset2",{-0.327822,-0.387082},1},{"Static_Offset2",{-0.344551,-0.372546},1},{"Static_Offset2",{-0.360624,-0.357301},1},{},{"Static_Offset2",{0.240416,-0.238201},1},{"Static_Offset2",{0.229701,-0.248364},1},{"Static_Offset2",{0.218548,-0.258055},1},{"Static_Offset2",{0.206979,-0.267254},1},{"Static_Offset2",{0.195016,-0.275945},1},{"Static_Offset2",{0.182682,-0.28411},1},{"Static_Offset2",{0.17,-0.291735},1},{"Static_Offset2",{0.156995,-0.298804},1},{"Static_Offset2",{0.14369,-0.305305},1},{"Static_Offset2",{0.130112,-0.311224},1},{"Static_Offset2",{0.116287,-0.316551},1},{"Static_Offset2",{0.10224,-0.321275},1},{"Static_Offset2",{0.0879985,-0.325388},1},{"Static_Offset2",{0.0735895,-0.328881},1},{"Static_Offset2",{0.0590404,-0.331749},1},{"Static_Offset2",{0.0443789,-0.333984},1},{"Static_Offset2",{0.029633,-0.335584},1},{"Static_Offset2",{0.0148306,-0.336546},1},{"Static_Offset2",{0,-0.336866},1},{"Static_Offset2",{-0.0148306,-0.336546},1},{"Static_Offset2",{-0.029633,-0.335584},1},{"Static_Offset2",{-0.0443789,-0.333984},1},{"Static_Offset2",{-0.0590404,-0.331749},1},{"Static_Offset2",{-0.0735895,-0.328881},1},{"Static_Offset2",{-0.0879985,-0.325388},1},{"Static_Offset2",{-0.10224,-0.321275},1},{"Static_Offset2",{-0.116287,-0.316551},1},{"Static_Offset2",{-0.130112,-0.311224},1},{"Static_Offset2",{-0.14369,-0.305305},1},{"Static_Offset2",{-0.156995,-0.298804},1},{"Static_Offset2",{-0.17,-0.291735},1},{"Static_Offset2",{-0.182682,-0.28411},1},{"Static_Offset2",{-0.195016,-0.275945},1},{"Static_Offset2",{-0.206979,-0.267254},1},{"Static_Offset2",{-0.218548,-0.258055},1},{"Static_Offset2",{-0.229701,-0.248364},1},{"Static_Offset2",{-0.240416,-0.238201},1},{},{"Static_Offset2",{0.120208,-0.1191},1},{"Static_Offset2",{0.11485,-0.124182},1},{"Static_Offset2",{0.109274,-0.129027},1},{"Static_Offset2",{0.103489,-0.133627},1},{"Static_Offset2",{0.097508,-0.137972},1},{"Static_Offset2",{0.0913409,-0.142055},1},{"Static_Offset2",{0.085,-0.145867},1},{"Static_Offset2",{0.0784973,-0.149402},1},{"Static_Offset2",{0.0718451,-0.152652},1},{"Static_Offset2",{0.0650562,-0.155612},1},{"Static_Offset2",{0.0581434,-0.158275},1},{"Static_Offset2",{0.05112,-0.160638},1},{"Static_Offset2",{0.0439992,-0.162694},1},{"Static_Offset2",{0.0367947,-0.164441},1},{"Static_Offset2",{0.0295202,-0.165874},1},{"Static_Offset2",{0.0221895,-0.166992},1},{"Static_Offset2",{0.0148165,-0.167792},1},{"Static_Offset2",{0.0074153,-0.168273},1},{"Static_Offset2",{0,-0.168433},1},{"Static_Offset2",{-0.0074153,-0.168273},1},{"Static_Offset2",{-0.0148165,-0.167792},1},{"Static_Offset2",{-0.0221895,-0.166992},1},{"Static_Offset2",{-0.0295202,-0.165874},1},{"Static_Offset2",{-0.0367947,-0.164441},1},{"Static_Offset2",{-0.0439992,-0.162694},1},{"Static_Offset2",{-0.05112,-0.160638},1},{"Static_Offset2",{-0.0581434,-0.158275},1},{"Static_Offset2",{-0.0650562,-0.155612},1},{"Static_Offset2",{-0.0718451,-0.152652},1},{"Static_Offset2",{-0.0784973,-0.149402},1},{"Static_Offset2",{-0.085,-0.145867},1},{"Static_Offset2",{-0.0913409,-0.142055},1},{"Static_Offset2",{-0.097508,-0.137972},1},{"Static_Offset2",{-0.103489,-0.133627},1},{"Static_Offset2",{-0.109274,-0.129027},1},{"Static_Offset2",{-0.11485,-0.124182},1},{"Static_Offset2",{-0.120208,-0.1191},1},{},{"Static_Offset2",{0.0601041,-0.0595501},1},{"Static_Offset2",{0.0450431,-0.0714197},1},{},{"Static_Offset2",{0.180312,-0.17865},1},{"Static_Offset2",{0.163911,-0.193541},1},{},{"Static_Offset2",{0.30052,-0.297751},1},{"Static_Offset2",{0.284381,-0.312926},1},{},{"Static_Offset2",{0.420729,-0.416851},1},{"Static_Offset2",{0.405789,-0.431145},1},{},{"Static_Offset2",{-0.0601041,-0.0595501},1},{"Static_Offset2",{-0.0450431,-0.0714197},1},{},{"Static_Offset2",{-0.180312,-0.17865},1},{"Static_Offset2",{-0.163911,-0.193541},1},{},{"Static_Offset2",{-0.30052,-0.297751},1},{"Static_Offset2",{-0.284381,-0.312926},1},{},{"Static_Offset2",{-0.420729,-0.416851},1},{"Static_Offset2",{-0.405789,-0.431145},1},{}};
							};
							class TransponderID
							{
								type = "text";
								source = "static";
								text = "ELEV";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.005,0.66},1};
								right[] = {{0.035,0.66},1};
								down[] = {{0.005,0.69},1};
							};
							class ElevMode
							{
								type = "text";
								source = "static";
								text = "AUTO";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.005,0.72},1};
								right[] = {{0.035,0.72},1};
								down[] = {{0.005,0.75},1};
							};
							class ZoomBtn1
							{
								type = "text";
								source = "static";
								text = "Z";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.965,0.14},1};
								right[] = {{0.995,0.14},1};
								down[] = {{0.965,0.17},1};
							};
							class ZoomBtn2
							{
								type = "text";
								source = "static";
								text = "O";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.965,0.18},1};
								right[] = {{0.995,0.18},1};
								down[] = {{0.965,0.21},1};
							};
							class ZoomBtn3
							{
								type = "text";
								source = "static";
								text = "O";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.965,0.22},1};
								right[] = {{0.995,0.22},1};
								down[] = {{0.965,0.25},1};
							};
							class ZoomBtn4
							{
								type = "text";
								source = "static";
								text = "M";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.965,0.26},1};
								right[] = {{0.995,0.26},1};
								down[] = {{0.965,0.29},1};
							};
							class SensorGroup
							{
								class Sensor
								{
									type = "sensor";
									pos[] = {"Sensor_Offset",{"0+-0.18","0+-0.18"},1};
									down[] = {"Sensor_Offset",{"1--0.18","1--0.18"},1};
									showTargetTypes = "2+4+8+16+32+64+128+256+512+1024";
									width = 4;
									sensorLineType = 0;
									sensorLineWidth = 3;
									targetLineWidth = -0.00192;
									targetLineLength = 0.02;
									range = 8000;
									class MissileThreat
									{
										color[] = {1,0,0};
										class TargetLines
										{
											type = "line";
											width = 2;
											points[] = {{{0,-0.0198157},1},{{0.003472,-0.0195145},1},{{0.00684,-0.0186208},1},{{0.01,-0.0171604},1},{{0.012856,-0.0151788},1},{{0.01532,-0.0127375},1},{{0.01732,-0.00990783},1},{{0.018794,-0.00677696},1},{{0.019696,-0.00344},1},{{0.02,0},1},{{0.019696,0.00344},1},{{0.018794,0.00677696},1},{{0.01732,0.00990783},1},{{0.01532,0.0127375},1},{{0.012856,0.0151788},1},{{0.01,0.0171604},1},{{0.00684,0.0186208},1},{{0.003472,0.0195145},1},{{0,0.0198157},1},{{-0.003472,0.0195145},1},{{-0.00684,0.0186208},1},{{-0.01,0.0171604},1},{{-0.012856,0.0151788},1},{{-0.01532,0.0127375},1},{{-0.01732,0.00990783},1},{{-0.018794,0.00677696},1},{{-0.019696,0.00344},1},{{-0.02,0},1},{{-0.019696,-0.00344},1},{{-0.018794,-0.00677696},1},{{-0.01732,-0.00990783},1},{{-0.01532,-0.0127375},1},{{-0.012856,-0.0151788},1},{{-0.01,-0.0171604},1},{{-0.00684,-0.0186208},1},{{-0.003472,-0.0195145},1},{{0,-0.0198157},1}};
										};
										class TextM
										{
											type = "text";
											source = "static";
											text = "M";
											align = "center";
											scale = 1;
											pos[] = {{0.0,-0.01},1};
											right[] = {{0.02,-0.01},1};
											down[] = {{0.0,0.01},1};
										};
									};
									class lockingThreat
									{
										color[] = {1,0.3,0};
										class TargetLines
										{
											type = "line";
											points[] = {{{0.02,0},1},{{0,0.0198157},1},{{-0.02,0},1},{{0,-0.0198157},1},{{0.02,0},1}};
										};
									};
									class markingThreat: lockingThreat
									{
										class TargetLines: TargetLines{};
									};
									class rwr
									{
										class TargetLines
										{
											type = "line";
											width = 2;
											points[] = {{{0.02,0},1},{{0,0.0198157},1},{{-0.02,0},1},{{0,-0.0198157},1},{{0.02,0},1}};
										};
									};
									class rwrFriendly: rwr
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class rwrEnemy: rwr
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class rwrGroup: rwr
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class rwrDestroyed{};
									class markedTarget
									{
										color[] = {1,0.3,0};
										class TargetLines
										{
											type = "line";
											width = 3;
											points[] = {{{-0.017,-0.0168433},1},{{-0.01,-0.0168433},1},{},{{0.017,-0.0168433},1},{{0.01,-0.0168433},1},{},{{-0.017,-0.0168433},1},{{-0.017,-0.00990783},1},{},{{0.017,-0.0168433},1},{{0.017,-0.00990783},1},{},{{-0.017,0.0168433},1},{{-0.01,0.0168433},1},{},{{0.017,0.0168433},1},{{0.01,0.0168433},1},{},{{-0.017,0.0168433},1},{{-0.017,0.00990783},1},{},{{0.017,0.0168433},1},{{0.017,0.00990783},1},{}};
										};
									};
									class assignedTarget: markedTarget
									{
										color[] = {1,0.0,0};
										class TargetLines: TargetLines{};
									};
									class target
									{
										color[] = {1,0.3,0};
										class TargetLines
										{
											type = "polygon";
											points[] = {{{{-0.01,-0.01},1},{{0,-0.01},1},{{0,0},1},{{-0.01,0},1}}};
										};
									};
									class targetFriendly: target
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetEnemy: target
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroup: target
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetDestroyed{};
									class targetGround: target
									{
										class TargetLines: TargetLines
										{
											type = "polygon";
											points[] = {{{{-0.01,-0.01},1},{{0.015,-0.01},1},{{0.015,0},1},{{-0.01,0},1}},{{{-0.007,-0.018},1},{{-0.002,-0.018},1},{{-0.002,0.007},1},{{-0.007,0.007},1}},{{{0.007,-0.018},1},{{0.012,-0.018},1},{{0.012,0.007},1},{{0.007,0.007},1}}};
										};
									};
									class targetGroundFriendly: targetGround
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundEnemy: targetGround
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundGroup: targetGround
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundDestroyed{};
									class targetGroundRemote: target
									{
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteFriendly: targetGroundRemote
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteEnemy: targetGroundRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteGroup: targetGroundRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteDestroyed{};
									class targetLaser: target
									{
										class TargetLines: TargetLines
										{
											type = "line";
											width = 4;
											points[] = {{{0,-0.0198157},1},{{-1.74846e-09,0.0198157},1},{},{{0.02,8.6617e-10},1},{{-0.02,-2.36299e-10},1},{},{{0.0106066,-0.0105088},1},{{-0.0106066,0.0105088},1},{},{{0.0106066,0.0105088},1},{{-0.0106066,-0.0105088},1},{}};
										};
									};
									class targetLaserFriendly: targetLaser
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetLaserEnemy: targetLaser
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetLaserGroup: targetLaser
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetNVG: targetLaser
									{
										class TargetLines: TargetLines{};
									};
									class targetNVGFriendly: targetNVG
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetNVGEnemy: targetNVG
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetNVGGroup: targetNVG
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetMan: target
									{
										class TargetLines: TargetLines{};
									};
									class targetManFriendly: targetMan
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetManEnemy: targetMan
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetManGroup: targetMan
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetManRemote: target
									{
										class TargetLines: TargetLines{};
									};
									class targetManRemoteFriendly: targetManRemote
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetManRemoteEnemy: targetManRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetManRemoteGroup: targetManRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAir
									{
										color[] = {1,1,1};
										class TargetLines
										{
											type = "polygon";
											points[] = {{{{0.0,0.0},1},{{0.01,0.015},1},{{-0.01,0.015},1}},{{{0.0,0.0},1},{{0.01,-0.015},1},{{-0.01,-0.015},1}}};
										};
									};
									class targetAirFriendly: targetAir
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetAirEnemy: targetAir
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirGroup: targetAir
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirDestroyed{};
									class targetAirRemote: targetAir
									{
										color[] = {1,1,1};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteFriendly: targetAirRemote
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteEnemy: targetAirRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteGroup: targetAirRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteDestroyed{};
								};
							};
						};
						class RadarAir
						{
							condition = "user8";
							class Static
							{
								type = "line";
								width = 4;
								points[] = {{"Static_Offset_AA",{0,-0.356682},1},{"Static_Offset_AA",{0,-0.307143},1},{},{"Static_Offset_AA",{0.36,1.55911e-08},1},{"Static_Offset_AA",{0.31,1.34256e-08},1},{},{"Static_Offset_AA",{-3.14722e-08,0.356682},1},{"Static_Offset_AA",{-2.71011e-08,0.307143},1},{},{"Static_Offset_AA",{-0.36,-4.25339e-09},1},{"Static_Offset_AA",{-0.31,-3.66264e-09},1},{},{{0.0183731,0.711393},1},{{0.0183731,0.693483},1},{{0.0129005,0.693483},1},{{0.0278259,0.667114},1},{{0.0427512,0.693483},1},{{0.0367811,0.693483},1},{{0.0367811,0.711393},1},{{0.0183731,0.711393},1},{},{{0.0183731,0.762637},1},{{0.0183731,0.78005},1},{{0.0129005,0.78005},1},{{0.0278259,0.806915},1},{{0.0427512,0.78005},1},{{0.0367811,0.78005},1},{{0.0367811,0.762637},1},{{0.0183731,0.762637},1},{},{{0.437776,0.916866},1},{{0.441259,0.90791},1},{{0.451706,0.902438},1},{{0.551706,0.902438},1},{{0.562154,0.907413},1},{{0.565139,0.916866},1},{{0.565139,0.977065},1},{{0.562652,0.98204},1},{{0.557179,0.987015},1},{{0.552204,0.99},1},{{0.451706,0.99},1},{{0.445736,0.986517},1},{{0.440761,0.981542},1},{{0.437776,0.97607},1},{{0.437776,0.916866},1},{}};
							};
							class StaticBold
							{
								type = "line";
								width = 6;
								points[] = {{"Static_Offset_AA",{0,-0.356682},1},{"Static_Offset_AA",{0.062496,-0.35126},1},{"Static_Offset_AA",{0.12312,-0.335174},1},{"Static_Offset_AA",{0.18,-0.308887},1},{"Static_Offset_AA",{0.231408,-0.273218},1},{"Static_Offset_AA",{0.27576,-0.229275},1},{"Static_Offset_AA",{0.31176,-0.178341},1},{"Static_Offset_AA",{0.338292,-0.121985},1},{"Static_Offset_AA",{0.354528,-0.06192},1},{"Static_Offset_AA",{0.36,0},1},{"Static_Offset_AA",{0.354528,0.06192},1},{"Static_Offset_AA",{0.338292,0.121985},1},{"Static_Offset_AA",{0.31176,0.178341},1},{"Static_Offset_AA",{0.27576,0.229275},1},{"Static_Offset_AA",{0.231408,0.273218},1},{"Static_Offset_AA",{0.18,0.308887},1},{"Static_Offset_AA",{0.12312,0.335174},1},{"Static_Offset_AA",{0.062496,0.35126},1},{"Static_Offset_AA",{0,0.356682},1},{"Static_Offset_AA",{-0.062496,0.35126},1},{"Static_Offset_AA",{-0.12312,0.335174},1},{"Static_Offset_AA",{-0.18,0.308887},1},{"Static_Offset_AA",{-0.231408,0.273218},1},{"Static_Offset_AA",{-0.27576,0.229275},1},{"Static_Offset_AA",{-0.31176,0.178341},1},{"Static_Offset_AA",{-0.338292,0.121985},1},{"Static_Offset_AA",{-0.354528,0.06192},1},{"Static_Offset_AA",{-0.36,0},1},{"Static_Offset_AA",{-0.354528,-0.06192},1},{"Static_Offset_AA",{-0.338292,-0.121985},1},{"Static_Offset_AA",{-0.31176,-0.178341},1},{"Static_Offset_AA",{-0.27576,-0.229275},1},{"Static_Offset_AA",{-0.231408,-0.273218},1},{"Static_Offset_AA",{-0.18,-0.308887},1},{"Static_Offset_AA",{-0.12312,-0.335174},1},{"Static_Offset_AA",{-0.062496,-0.35126},1},{"Static_Offset_AA",{0,-0.356682},1},{},{"Static_Offset_AA",{0,-0.257604},1},{"Static_Offset_AA",{0.045136,-0.253688},1},{"Static_Offset_AA",{0.08892,-0.24207},1},{"Static_Offset_AA",{0.13,-0.223085},1},{"Static_Offset_AA",{0.167128,-0.197324},1},{"Static_Offset_AA",{0.19916,-0.165588},1},{"Static_Offset_AA",{0.22516,-0.128802},1},{"Static_Offset_AA",{0.244322,-0.0881005},1},{"Static_Offset_AA",{0.256048,-0.04472},1},{"Static_Offset_AA",{0.26,0},1},{"Static_Offset_AA",{0.256048,0.04472},1},{"Static_Offset_AA",{0.244322,0.0881005},1},{"Static_Offset_AA",{0.22516,0.128802},1},{"Static_Offset_AA",{0.19916,0.165588},1},{"Static_Offset_AA",{0.167128,0.197324},1},{"Static_Offset_AA",{0.13,0.223085},1},{"Static_Offset_AA",{0.08892,0.24207},1},{"Static_Offset_AA",{0.045136,0.253688},1},{"Static_Offset_AA",{0,0.257604},1},{"Static_Offset_AA",{-0.045136,0.253688},1},{"Static_Offset_AA",{-0.08892,0.24207},1},{"Static_Offset_AA",{-0.13,0.223085},1},{"Static_Offset_AA",{-0.167128,0.197324},1},{"Static_Offset_AA",{-0.19916,0.165588},1},{"Static_Offset_AA",{-0.22516,0.128802},1},{"Static_Offset_AA",{-0.244322,0.0881005},1},{"Static_Offset_AA",{-0.256048,0.04472},1},{"Static_Offset_AA",{-0.26,0},1},{"Static_Offset_AA",{-0.256048,-0.04472},1},{"Static_Offset_AA",{-0.244322,-0.0881005},1},{"Static_Offset_AA",{-0.22516,-0.128802},1},{"Static_Offset_AA",{-0.19916,-0.165588},1},{"Static_Offset_AA",{-0.167128,-0.197324},1},{"Static_Offset_AA",{-0.13,-0.223085},1},{"Static_Offset_AA",{-0.08892,-0.24207},1},{"Static_Offset_AA",{-0.045136,-0.253688},1},{"Static_Offset_AA",{0,-0.257604},1},{},{"Static_Offset_AA",{0,-0.168433},1},{"Static_Offset_AA",{0.029512,-0.165873},1},{"Static_Offset_AA",{0.05814,-0.158277},1},{"Static_Offset_AA",{0.085,-0.145863},1},{"Static_Offset_AA",{0.109276,-0.12902},1},{"Static_Offset_AA",{0.13022,-0.108269},1},{"Static_Offset_AA",{0.14722,-0.0842166},1},{"Static_Offset_AA",{0.159749,-0.0576042},1},{"Static_Offset_AA",{0.167416,-0.02924},1},{"Static_Offset_AA",{0.17,0},1},{"Static_Offset_AA",{0.167416,0.02924},1},{"Static_Offset_AA",{0.159749,0.0576042},1},{"Static_Offset_AA",{0.14722,0.0842166},1},{"Static_Offset_AA",{0.13022,0.108269},1},{"Static_Offset_AA",{0.109276,0.12902},1},{"Static_Offset_AA",{0.085,0.145863},1},{"Static_Offset_AA",{0.05814,0.158277},1},{"Static_Offset_AA",{0.029512,0.165873},1},{"Static_Offset_AA",{0,0.168433},1},{"Static_Offset_AA",{-0.029512,0.165873},1},{"Static_Offset_AA",{-0.05814,0.158277},1},{"Static_Offset_AA",{-0.085,0.145863},1},{"Static_Offset_AA",{-0.109276,0.12902},1},{"Static_Offset_AA",{-0.13022,0.108269},1},{"Static_Offset_AA",{-0.14722,0.0842166},1},{"Static_Offset_AA",{-0.159749,0.0576042},1},{"Static_Offset_AA",{-0.167416,0.02924},1},{"Static_Offset_AA",{-0.17,0},1},{"Static_Offset_AA",{-0.167416,-0.02924},1},{"Static_Offset_AA",{-0.159749,-0.0576042},1},{"Static_Offset_AA",{-0.14722,-0.0842166},1},{"Static_Offset_AA",{-0.13022,-0.108269},1},{"Static_Offset_AA",{-0.109276,-0.12902},1},{"Static_Offset_AA",{-0.085,-0.145863},1},{"Static_Offset_AA",{-0.05814,-0.158277},1},{"Static_Offset_AA",{-0.029512,-0.165873},1},{"Static_Offset_AA",{0,-0.168433},1},{},{"Static_Offset_AA",{0,-0.0792627},1},{"Static_Offset_AA",{0.013888,-0.0780579},1},{"Static_Offset_AA",{0.02736,-0.0744831},1},{"Static_Offset_AA",{0.04,-0.0686415},1},{"Static_Offset_AA",{0.051424,-0.0607152},1},{"Static_Offset_AA",{0.06128,-0.05095},1},{"Static_Offset_AA",{0.06928,-0.0396313},1},{"Static_Offset_AA",{0.075176,-0.0271078},1},{"Static_Offset_AA",{0.078784,-0.01376},1},{"Static_Offset_AA",{0.08,0},1},{"Static_Offset_AA",{0.078784,0.01376},1},{"Static_Offset_AA",{0.075176,0.0271078},1},{"Static_Offset_AA",{0.06928,0.0396313},1},{"Static_Offset_AA",{0.06128,0.05095},1},{"Static_Offset_AA",{0.051424,0.0607152},1},{"Static_Offset_AA",{0.04,0.0686415},1},{"Static_Offset_AA",{0.02736,0.0744831},1},{"Static_Offset_AA",{0.013888,0.0780579},1},{"Static_Offset_AA",{0,0.0792627},1},{"Static_Offset_AA",{-0.013888,0.0780579},1},{"Static_Offset_AA",{-0.02736,0.0744831},1},{"Static_Offset_AA",{-0.04,0.0686415},1},{"Static_Offset_AA",{-0.051424,0.0607152},1},{"Static_Offset_AA",{-0.06128,0.05095},1},{"Static_Offset_AA",{-0.06928,0.0396313},1},{"Static_Offset_AA",{-0.075176,0.0271078},1},{"Static_Offset_AA",{-0.078784,0.01376},1},{"Static_Offset_AA",{-0.08,0},1},{"Static_Offset_AA",{-0.078784,-0.01376},1},{"Static_Offset_AA",{-0.075176,-0.0271078},1},{"Static_Offset_AA",{-0.06928,-0.0396313},1},{"Static_Offset_AA",{-0.06128,-0.05095},1},{"Static_Offset_AA",{-0.051424,-0.0607152},1},{"Static_Offset_AA",{-0.04,-0.0686415},1},{"Static_Offset_AA",{-0.02736,-0.0744831},1},{"Static_Offset_AA",{-0.013888,-0.0780579},1},{"Static_Offset_AA",{0,-0.0792627},1},{},{"Static_Offset_AA",{0,-0.0148618},1},{"Static_Offset_AA",{0.002604,-0.0146359},1},{"Static_Offset_AA",{0.00513,-0.0139656},1},{"Static_Offset_AA",{0.0075,-0.0128703},1},{"Static_Offset_AA",{0.009642,-0.0113841},1},{"Static_Offset_AA",{0.01149,-0.00955313},1},{"Static_Offset_AA",{0.01299,-0.00743088},1},{"Static_Offset_AA",{0.0140955,-0.00508272},1},{"Static_Offset_AA",{0.014772,-0.00258},1},{"Static_Offset_AA",{0.015,0},1},{"Static_Offset_AA",{0.014772,0.00258},1},{"Static_Offset_AA",{0.0140955,0.00508272},1},{"Static_Offset_AA",{0.01299,0.00743088},1},{"Static_Offset_AA",{0.01149,0.00955313},1},{"Static_Offset_AA",{0.009642,0.0113841},1},{"Static_Offset_AA",{0.0075,0.0128703},1},{"Static_Offset_AA",{0.00513,0.0139656},1},{"Static_Offset_AA",{0.002604,0.0146359},1},{"Static_Offset_AA",{0,0.0148618},1},{"Static_Offset_AA",{-0.002604,0.0146359},1},{"Static_Offset_AA",{-0.00513,0.0139656},1},{"Static_Offset_AA",{-0.0075,0.0128703},1},{"Static_Offset_AA",{-0.009642,0.0113841},1},{"Static_Offset_AA",{-0.01149,0.00955313},1},{"Static_Offset_AA",{-0.01299,0.00743088},1},{"Static_Offset_AA",{-0.0140955,0.00508272},1},{"Static_Offset_AA",{-0.014772,0.00258},1},{"Static_Offset_AA",{-0.015,0},1},{"Static_Offset_AA",{-0.014772,-0.00258},1},{"Static_Offset_AA",{-0.0140955,-0.00508272},1},{"Static_Offset_AA",{-0.01299,-0.00743088},1},{"Static_Offset_AA",{-0.01149,-0.00955313},1},{"Static_Offset_AA",{-0.009642,-0.0113841},1},{"Static_Offset_AA",{-0.0075,-0.0128703},1},{"Static_Offset_AA",{-0.00513,-0.0139656},1},{"Static_Offset_AA",{-0.002604,-0.0146359},1},{"Static_Offset_AA",{0,-0.0148618},1},{}};
							};
							class SensorGroup
							{
								class Sensor
								{
									type = "sensor";
									pos[] = {"Sensor_Offset_AA",{"0+0.145","0+0.145"},1};
									down[] = {"Sensor_Offset_AA",{"1-0.145","1-0.145"},1};
									showTargetTypes = "2+4+8+16+32+64+128+256+512+1024";
									width = 4;
									sensorLineType = 0;
									sensorLineWidth = 3;
									targetLineWidth = -0.00192;
									targetLineLength = 0.02;
									range = 8000;
									class MissileThreat
									{
										color[] = {1,0,0};
										class TargetLines
										{
											type = "line";
											width = 2;
											points[] = {{{0,-0.0198157},1},{{0.003472,-0.0195145},1},{{0.00684,-0.0186208},1},{{0.01,-0.0171604},1},{{0.012856,-0.0151788},1},{{0.01532,-0.0127375},1},{{0.01732,-0.00990783},1},{{0.018794,-0.00677696},1},{{0.019696,-0.00344},1},{{0.02,0},1},{{0.019696,0.00344},1},{{0.018794,0.00677696},1},{{0.01732,0.00990783},1},{{0.01532,0.0127375},1},{{0.012856,0.0151788},1},{{0.01,0.0171604},1},{{0.00684,0.0186208},1},{{0.003472,0.0195145},1},{{0,0.0198157},1},{{-0.003472,0.0195145},1},{{-0.00684,0.0186208},1},{{-0.01,0.0171604},1},{{-0.012856,0.0151788},1},{{-0.01532,0.0127375},1},{{-0.01732,0.00990783},1},{{-0.018794,0.00677696},1},{{-0.019696,0.00344},1},{{-0.02,0},1},{{-0.019696,-0.00344},1},{{-0.018794,-0.00677696},1},{{-0.01732,-0.00990783},1},{{-0.01532,-0.0127375},1},{{-0.012856,-0.0151788},1},{{-0.01,-0.0171604},1},{{-0.00684,-0.0186208},1},{{-0.003472,-0.0195145},1},{{0,-0.0198157},1}};
										};
										class TextM
										{
											type = "text";
											source = "static";
											text = "M";
											align = "center";
											scale = 1;
											pos[] = {{0.0,-0.01},1};
											right[] = {{0.02,-0.01},1};
											down[] = {{0.0,0.01},1};
										};
									};
									class lockingThreat
									{
										color[] = {1,0.3,0};
										class TargetLines
										{
											type = "line";
											points[] = {{{0.02,0},1},{{0,0.0198157},1},{{-0.02,0},1},{{0,-0.0198157},1},{{0.02,0},1}};
										};
									};
									class markingThreat: lockingThreat
									{
										class TargetLines: TargetLines{};
									};
									class rwr
									{
										class TargetLines
										{
											type = "line";
											width = 2;
											points[] = {{{0.02,0},1},{{0,0.0198157},1},{{-0.02,0},1},{{0,-0.0198157},1},{{0.02,0},1}};
										};
									};
									class rwrFriendly: rwr
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class rwrEnemy: rwr
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class rwrGroup: rwr
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class rwrDestroyed{};
									class markedTarget
									{
										color[] = {1,0.3,0};
										class TargetLines
										{
											type = "line";
											width = 3;
											points[] = {{{-0.017,-0.0168433},1},{{-0.01,-0.0168433},1},{},{{0.017,-0.0168433},1},{{0.01,-0.0168433},1},{},{{-0.017,-0.0168433},1},{{-0.017,-0.00990783},1},{},{{0.017,-0.0168433},1},{{0.017,-0.00990783},1},{},{{-0.017,0.0168433},1},{{-0.01,0.0168433},1},{},{{0.017,0.0168433},1},{{0.01,0.0168433},1},{},{{-0.017,0.0168433},1},{{-0.017,0.00990783},1},{},{{0.017,0.0168433},1},{{0.017,0.00990783},1},{}};
										};
									};
									class assignedTarget: markedTarget
									{
										color[] = {1,0.0,0};
										class TargetLines: TargetLines{};
									};
									class target
									{
										color[] = {1,0.3,0};
										class TargetLines
										{
											type = "polygon";
											points[] = {{{{-0.01,-0.01},1},{{0,-0.01},1},{{0,0},1},{{-0.01,0},1}}};
										};
									};
									class targetFriendly: target
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetEnemy: target
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroup: target
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetDestroyed{};
									class targetGround: target
									{
										class TargetLines: TargetLines
										{
											type = "polygon";
											points[] = {{{{-0.01,-0.01},1},{{0.015,-0.01},1},{{0.015,0},1},{{-0.01,0},1}},{{{-0.007,-0.018},1},{{-0.002,-0.018},1},{{-0.002,0.007},1},{{-0.007,0.007},1}},{{{0.007,-0.018},1},{{0.012,-0.018},1},{{0.012,0.007},1},{{0.007,0.007},1}}};
										};
									};
									class targetGroundFriendly: targetGround
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundEnemy: targetGround
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundGroup: targetGround
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundDestroyed{};
									class targetGroundRemote: target
									{
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteFriendly: targetGroundRemote
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteEnemy: targetGroundRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteGroup: targetGroundRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteDestroyed{};
									class targetLaser: target
									{
										class TargetLines: TargetLines
										{
											type = "line";
											width = 4;
											points[] = {{{0,-0.0198157},1},{{-1.74846e-09,0.0198157},1},{},{{0.02,8.6617e-10},1},{{-0.02,-2.36299e-10},1},{},{{0.0106066,-0.0105088},1},{{-0.0106066,0.0105088},1},{},{{0.0106066,0.0105088},1},{{-0.0106066,-0.0105088},1},{}};
										};
									};
									class targetLaserFriendly: targetLaser
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetLaserEnemy: targetLaser
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetLaserGroup: targetLaser
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetNVG: targetLaser
									{
										class TargetLines: TargetLines{};
									};
									class targetNVGFriendly: targetNVG
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetNVGEnemy: targetNVG
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetNVGGroup: targetNVG
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetMan: target
									{
										class TargetLines: TargetLines{};
									};
									class targetManFriendly: targetMan
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetManEnemy: targetMan
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetManGroup: targetMan
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetManRemote: target
									{
										class TargetLines: TargetLines{};
									};
									class targetManRemoteFriendly: targetManRemote
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetManRemoteEnemy: targetManRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetManRemoteGroup: targetManRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAir
									{
										color[] = {1,1,1};
										class TargetLines
										{
											type = "polygon";
											points[] = {{{{0.0,0.0},1},{{0.01,0.015},1},{{-0.01,0.015},1}},{{{0.0,0.0},1},{{0.01,-0.015},1},{{-0.01,-0.015},1}}};
										};
									};
									class targetAirFriendly: targetAir
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetAirEnemy: targetAir
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirGroup: targetAir
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirDestroyed{};
									class targetAirRemote: targetAir
									{
										color[] = {1,1,1};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteFriendly: targetAirRemote
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteEnemy: targetAirRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteGroup: targetAirRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteDestroyed{};
								};
							};
						};
						class RadarGroup
						{
							condition = "activeSensorsOn";
							class RadarGround
							{
								condition = "1-user8";
								class TransText
								{
									type = "text";
									source = "static";
									text = "FCR/G";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.1-0.02",0.92},1};
									right[] = {{0.107,0.92},1};
									down[] = {{"0.1-0.02",0.947},1};
								};
								class DrawLines
								{
									type = "line";
									width = 4;
									points[] = {{"Static_Offset2",1,{"FCR_ScanLine_Bottom",0,-0.0495392},1},{"Static_Offset2",1,{"FCR_ScanLine_Bottom",0,-0.336866},1},{},{"Static_Offset2",1,{"FCR_ScanLine_Top",0,-0.336866},1},{"Static_Offset2",1,{"FCR_ScanLine_Top",0,-0.673733},1},{}};
								};
							};
							class RadarAir
							{
								condition = "user8>=1";
								class TransText
								{
									type = "text";
									source = "static";
									text = "FCR/A";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.1-0.02",0.92},1};
									right[] = {{0.107,0.92},1};
									down[] = {{"0.1-0.02",0.947},1};
								};
								class DrawLines
								{
									type = "line";
									width = 4;
									points[] = {{"Static_Offset_AA",1,{"FCR_ScanLine_AA",0,-0.0128802},1},{"Static_Offset_AA",1,{"FCR_ScanLine_AA",0,-0.356682},1},{}};
								};
								class RangeBottom_Null
								{
									condition = "altitudeAGL<=100";
									class RangeBottom
									{
										type = "text";
										source = "static";
										text = "30";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.5,0.955},1};
										right[] = {{0.524,0.955},1};
										down[] = {{0.5,0.979},1};
									};
								};
								class RangeBottom
								{
									condition = "altitudeAGL>=100";
									class RangeBottom
									{
										type = "text";
										source = "altitudeAGL";
										sourceScale = "3.2808399*0.6";
										sourceOffset = "-50*3.2808399*0.6";
										refreshRate = 0.1;
										align = "center";
										scale = 1;
										pos[] = {{0.5,"0.90+0.055"},1};
										right[] = {{0.524,"0.90+0.055"},1};
										down[] = {{0.5,0.979},1};
									};
								};
								class RangeTop
								{
									type = "text";
									source = "altitudeAGL";
									sourceScale = 3.28084;
									sourceOffset = "100*3.2808399";
									refreshRate = 0.1;
									align = "center";
									scale = 1;
									pos[] = {{0.5,"0.855+0.06"},1};
									right[] = {{0.524,"0.855+0.06"},1};
									down[] = {{0.5,0.939},1};
								};
							};
							class AutoRange
							{
								condition = "targetDist>=1";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "R";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.26-0.05",0.92},1};
									right[] = {{0.237,0.92},1};
									down[] = {{"0.26-0.05",0.947},1};
								};
								class RangeSource
								{
									type = "text";
									source = "targetDist";
									sourceScale = 0.001;
									sourceLength = 2;
									sourcePrecision = 1;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{"0.29-0.05","0.86+0.06"},1};
									right[] = {{0.267,"0.86+0.06"},1};
									down[] = {{"0.29-0.05",0.947},1};
								};
							};
							class LaserRange
							{
								condition = "targetDist<=0.99";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "*";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.26-0.05",0.92},1};
									right[] = {{0.237,0.92},1};
									down[] = {{"0.26-0.05",0.947},1};
								};
								class SpeedSource
								{
									type = "text";
									source = "laserDist";
									sourceScale = 1;
									sourceLength = 4;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{"0.29-0.05","0.86+0.06"},1};
									right[] = {{0.267,"0.86+0.06"},1};
									down[] = {{"0.29-0.05",0.947},1};
								};
							};
						};
						class TADSGroup
						{
							condition = "1-activeSensorsOn";
							class TransText
							{
								type = "text";
								source = "static";
								text = "TADS";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.1-0.02",0.92},1};
								right[] = {{0.107,0.92},1};
								down[] = {{"0.1-0.02",0.947},1};
							};
							class AutoRange
							{
								condition = "targetDist>=1";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "A";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.26-0.05",0.92},1};
									right[] = {{0.237,0.92},1};
									down[] = {{"0.26-0.05",0.947},1};
								};
								class RangeSource
								{
									type = "text";
									source = "targetDist";
									sourceScale = 0.001;
									sourceLength = 2;
									sourcePrecision = 1;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{"0.29-0.05","0.86+0.06"},1};
									right[] = {{0.267,"0.86+0.06"},1};
									down[] = {{"0.29-0.05",0.947},1};
								};
							};
							class LaserRange
							{
								condition = "targetDist<=0.99";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "*";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.26-0.05",0.92},1};
									right[] = {{0.237,0.92},1};
									down[] = {{"0.26-0.05",0.947},1};
								};
								class SpeedSource
								{
									type = "text";
									source = "laserDist";
									sourceScale = 1;
									sourceLength = 4;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{"0.29-0.05","0.86+0.06"},1};
									right[] = {{0.267,"0.86+0.06"},1};
									down[] = {{"0.29-0.05",0.947},1};
								};
							};
						};
						class MGun
						{
							condition = "mgun";
							class RangeText
							{
								type = "text";
								source = "static";
								text = "P GUN";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.61+0.05",0.92},1};
								right[] = {{0.687,0.92},1};
								down[] = {{"0.61+0.05",0.947},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								text = "GUN";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{"0.61+0.05","0.90+0.055"},1};
								right[] = {{0.687,"0.90+0.055"},1};
								down[] = {{"0.61+0.05",0.982},1};
							};
							class Ammo
							{
								type = "text";
								source = "ammo";
								sourceScale = 1;
								align = "left";
								scale = 0.5;
								pos[] = {{"0.85+0.05","0.86+0.06"},1};
								right[] = {{0.927,"0.86+0.06"},1};
								down[] = {{"0.85+0.05",0.947},1};
							};
						};
						class AAMissile
						{
							condition = "bomb";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P ATA";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.61+0.05",0.92},1};
								right[] = {{0.687,0.92},1};
								down[] = {{"0.61+0.05",0.947},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{"0.61+0.05","0.90+0.055"},1};
								right[] = {{0.687,"0.90+0.055"},1};
								down[] = {{"0.61+0.05",0.982},1};
							};
						};
						class ATMissile
						{
							condition = "ATmissile + AAmissile";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P MSL";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.61+0.05",0.92},1};
								right[] = {{0.687,0.92},1};
								down[] = {{"0.61+0.05",0.947},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{"0.61+0.05","0.90+0.055"},1};
								right[] = {{0.687,"0.90+0.055"},1};
								down[] = {{"0.61+0.05",0.982},1};
							};
						};
						class Rockets
						{
							condition = "rocket";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P RKT";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.61+0.05",0.92},1};
								right[] = {{0.687,0.92},1};
								down[] = {{"0.61+0.05",0.947},1};
							};
							class AmmoName
							{
								type = "text";
								source = "ammoFormat";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{"0.61+0.05","0.90+0.055"},1};
								right[] = {{0.687,"0.90+0.055"},1};
								down[] = {{"0.61+0.05",0.982},1};
							};
						};
					};
				};
				class MFD_Right_Flight
				{
					topLeft = "GUNNER_MFD_R_TL";
					topRight = "GUNNER_MFD_R_TR";
					bottomLeft = "GUNNER_MFD_R_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {-2};
					class Bones
					{
						class HUDCenter
						{
							type = "fixed";
							pos[] = {0.5,0.5};
						};
						class VelocityVector
						{
							type = "vector";
							source = "velocity";
							pos0[] = {0.5,0.5};
							pos10[] = {0.934,0.93};
						};
						class ForwardVector
						{
							type = "vector";
							source = "forward";
							pos0[] = {0,0};
							pos10[] = {0.434,0.43};
						};
						class HorizonVector
						{
							type = "horizon";
							pos0[] = {0.5,0.5};
							pos10[] = {1.11376,1.10811};
							angle = 0;
						};
						class GunnerAim
						{
							type = "vector";
							source = "turret";
							pos0[] = {0,-2.0};
							pos10[] = {0.0068,-0.01};
							projection = 0;
						};
						class VerticalSpeedBone
						{
							type = "linear";
							source = "vspeed";
							sourceScale = 1;
							min = -10;
							max = 10;
							minPos[] = {0,-0.26};
							maxPos[] = {0,0.26};
						};
						class TurnRate
						{
							type = "linear";
							source = "user";
							sourceIndex = 11;
							min = -4.8;
							max = 4.8;
							minPos[] = {0.36,0.87};
							maxPos[] = {0.64,0.87};
							aspectRatio = 1;
						};
						class FCR_Bearing
						{
							type = "linear";
							source = "user";
							sourceIndex = 17;
							min = -180;
							max = 180;
							minPos[] = {0.35,0.165};
							maxPos[] = {0.66,0.165};
						};
						class HorizonBankRot
						{
							type = "linear";
							source = "gmeterXgrav";
							min = -1;
							max = 1;
							minPos[] = {0.41,0.94};
							maxPos[] = {0.59,0.94};
							aspectRatio = 1;
						};
						class HorizonBankRot_Up
						{
							type = "rotational";
							source = "horizonBank";
							center[] = {0.5,0.5};
							min = "-rad(90)";
							max = "rad(90)";
							minAngle = "180.25-89";
							maxAngle = "180.75+89";
							aspectRatio = 1;
						};
						class HorizonBankRotFull
						{
							type = "rotational";
							source = "horizonBank";
							center[] = {0,0};
							min = -3.1416;
							max = 3.1416;
							minAngle = -180;
							maxAngle = 180;
							aspectRatio = 1;
						};
						class LimitWaypoint
						{
							type = "limit";
							limits[] = {0.23,0.14,0.77,0.14};
						};
						class WPPoint
						{
							type = "vector";
							source = "WPPoint";
							pos0[] = {0.5,0.5};
							pos10[] = {0.6,0.93};
						};
						class Level0
						{
							pos0[] = {0.5,0.5};
							pos10[] = {0.60416,0.6032};
							type = "horizon";
							angle = 0;
						};
						class LevelP05: Level0
						{
							angle = 5;
						};
						class LevelM05: Level0
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
						class LevelP60: Level0
						{
							angle = 60;
						};
						class LevelM60: Level0
						{
							angle = -60;
						};
						class LevelP70: Level0
						{
							angle = 70;
						};
						class LevelM70: Level0
						{
							angle = -70;
						};
						class LevelP80: Level0
						{
							angle = 80;
						};
						class LevelM80: Level0
						{
							angle = -80;
						};
						class LevelP90: Level0
						{
							angle = 90;
						};
						class LevelM90: Level0
						{
							angle = -90;
						};
						class RadarHeight
						{
							type = "linear";
							source = "altitudeAGL";
							sourceScale = 1;
							sourceOffset = -2;
							min = 0;
							max = 61;
							minPos[] = {0.973,0.25};
							maxPos[] = {0.973,0.78};
						};
					};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on*(user7>=0)*(user7<=0)";
						class Static
						{
							type = "line";
							width = 4.0;
							points[] = {{"VelocityVector",{0,-0.0198157},1},{"VelocityVector",{0.01,-0.0171604},1},{"VelocityVector",{0.01732,-0.00990783},1},{"VelocityVector",{0.02,0},1},{"VelocityVector",{0.01732,0.00990783},1},{"VelocityVector",{0.01,0.0171604},1},{"VelocityVector",{0,0.0198157},1},{"VelocityVector",{-0.01,0.0171604},1},{"VelocityVector",{-0.01732,0.00990783},1},{"VelocityVector",{-0.02,0},1},{"VelocityVector",{-0.01732,-0.00990783},1},{"VelocityVector",{-0.01,-0.0171604},1},{"VelocityVector",{0,-0.0198157},1},{},{"VelocityVector",{0.04,0},1},{"VelocityVector",{0.02,0},1},{},{"VelocityVector",{-0.04,0},1},{"VelocityVector",{-0.02,0},1},{},{"VelocityVector",{0,-0.0396313},1},{"VelocityVector",{0,-0.0198157},1},{},{{0.381182,0.224373},1},{{0.377688,0.21509},1},{},{{0.407028,0.226286},1},{{0.401394,0.207273},1},{},{{0.427728,0.210832},1},{{0.425602,0.201151},1},{},{{0.453036,0.216369},1},{{0.45019,0.196755},1},{},{{0.475745,0.203992},1},{{0.475031,0.194109},1},{},{{0.524255,0.203992},1},{{0.524969,0.194109},1},{},{{0.546964,0.216369},1},{{0.54981,0.196755},1},{},{{0.572272,0.210832},1},{{0.574398,0.201151},1},{},{{0.592972,0.226286},1},{{0.598606,0.207273},1},{},{{0.618818,0.224373},1},{{0.622312,0.21509},1},{},{{0.38,0.96},1},{{0.62,0.96},1},{},{{0.52,0.96},1},{{0.52,0.92},1},{},{{0.48,0.96},1},{{0.48,0.92},1},{},{{0.36,0.9},1},{{0.36,0.865},1},{},{{0.4,0.9},1},{{0.4,0.865},1},{},{{0.44,0.9},1},{{0.44,0.865},1},{},{{0.48,0.9},1},{{0.48,0.865},1},{},{{0.52,0.9},1},{{0.52,0.865},1},{},{{0.56,0.9},1},{{0.56,0.865},1},{},{{0.6,0.9},1},{{0.6,0.865},1},{},{{0.64,0.9},1},{{0.64,0.865},1},{},{{0.985,0.26},1},{{1.005,0.26},1},{},{{0.94,0.26},1},{{0.96,0.26},1},{},{{0.985,0.39},1},{{1.005,0.39},1},{},{{0.94,0.39},1},{{0.96,0.39},1},{},{{0.945,0.416},1},{{0.955,0.416},1},{},{{0.945,0.442},1},{{0.955,0.442},1},{},{{0.945,0.468},1},{{0.955,0.468},1},{},{{0.945,0.494},1},{{0.955,0.494},1},{},{{0.94,0.52},1},{{0.96,0.52},1},{},{{0.985,0.52},1},{{1.005,0.52},1},{},{{0.985,0.65},1},{{1.005,0.65},1},{},{{0.94,0.65},1},{{0.96,0.65},1},{},{{0.945,0.624},1},{{0.955,0.624},1},{},{{0.945,0.598},1},{{0.955,0.598},1},{},{{0.945,0.572},1},{{0.955,0.572},1},{},{{0.945,0.546},1},{{0.955,0.546},1},{},{{0.99,0.676},1},{{1,0.676},1},{},{{0.99,0.702},1},{{1,0.702},1},{},{{0.99,0.728},1},{{1,0.728},1},{},{{0.99,0.754},1},{{1,0.754},1},{},{{0.985,0.78},1},{{1.005,0.78},1},{},{{0.94,0.78},1},{{0.96,0.78},1},{},{{0.125,0.93},1},{{0.215,0.93},1},{{0.215,0.98},1},{{0.125,0.98},1},{{0.125,0.93},1},{},{{0.8,0.014},1},{{0.87,0.014},1},{},{{0.51,0.014},1},{{0.61,0.014},1},{},{{0.38,0.014},1},{{0.46,0.014},1},{},{{0.135,0.014},1},{{0.2,0.014},1},{}};
						};
						class StaticBold
						{
							type = "line";
							width = 6.0;
							points[] = {{{0.362913,0.242588},1},{{0.354605,0.224563},1},{},{{0.5,0.213041},1},{{0.5,0.16053},1},{},{{0.637087,0.242588},1},{{0.645395,0.224563},1},{},{"HUDCenter",{-0.108,0},1},{"HUDCenter",{-0.027,0},1},{"HUDCenter",{-0.0135,0.0285},1},{"HUDCenter",{0,0},1},{"HUDCenter",{0.0135,0.0285},1},{"HUDCenter",{0.027,0},1},{"HUDCenter",{0.108,0},1},{}};
						};
						class DrawBankLeft
						{
							condition = "(horizonBank<=-0.4)";
							color[] = {1,1,1};
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{{0.177542,0.4705},1},{{0.157999,0.466288},1},{},{{0.181437,0.422277},1},{{0.172068,0.418815},1},{},{{0.201589,0.378557},1},{{0.192812,0.373809},1},{},{{0.235821,0.344061},1},{{0.219811,0.332186},1},{},{{0.259584,0.3018},1},{{0.252513,0.294794},1},{},{{0.302238,0.278256},1},{{0.290253,0.262393},1},{},{{0.337055,0.244339},1},{{0.332263,0.235644},1},{}};
							};
						};
						class DrawBankRight
						{
							condition = "(horizonBank>=0.4)";
							color[] = {1,1,1};
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{{0.662945,0.244339},1},{{0.667737,0.235644},1},{},{{0.697762,0.278256},1},{{0.709747,0.262393},1},{},{{0.740416,0.3018},1},{{0.747487,0.294794},1},{},{{0.764179,0.344061},1},{{0.780189,0.332186},1},{},{{0.798411,0.378557},1},{{0.807188,0.373809},1},{},{{0.818563,0.422277},1},{{0.827932,0.418815},1},{},{{0.822458,0.4705},1},{{0.842001,0.466288},1},{}};
							};
						};
						class RadarAltitude
						{
							condition = "62-altitudeAGL";
							class RadarHeight
							{
								type = "line";
								width = 15;
								points[] = {{{0.973,0.78},1},{"RadarHeight",{0,0.0},1},{}};
							};
						};
						class HeadingHeadNumber
						{
							type = "text";
							source = "heading";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.5,"0.042+0.05"},1};
							right[] = {{0.54,"0.042+0.05"},1};
							down[] = {{0.5,0.132},1};
						};
						class HeadingScaleRight
						{
							clipTL[] = {0.55,0.0};
							clipBR[] = {0.77,0.5};
							class lines
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								width = 4.0;
								NeverEatSeaWeed = 1;
								top = 0.5;
								center = 0.5;
								bottom = 0.82;
								lineXleft = 0.16;
								lineYright = 0.15;
								lineXleftMajor = 0.16;
								lineYrightMajor = 0.14;
								majorLineEach = 3;
								numberEach = 3;
								step = 1;
								stepSize = 0.0263889;
								align = "center";
								scale = 1;
								pos[] = {0.495,"0.05+0.05"};
								right[] = {0.52,"0.05+0.05"};
								down[] = {0.495,"0.08+0.05"};
							};
						};
						class HeadingScaleMidle
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 0.1;
							width = 4.0;
							NeverEatSeaWeed = 1;
							top = 0.45;
							center = 0.5;
							bottom = 0.55;
							lineXleft = 0.16;
							lineYright = 0.15;
							lineXleftMajor = 0.16;
							lineYrightMajor = 0.15;
							majorLineEach = 2;
							step = 1;
							stepSize = 0.0263889;
							align = "center";
							scale = 1;
							numberEach = 0;
							pos[] = {0.47,"0.05+0.05"};
							right[] = {0.5,"0.05+0.05"};
							down[] = {0.45,"0.09+0.05"};
						};
						class HeadingScaleLeft
						{
							clipTL[] = {0.23,0.0};
							clipBR[] = {0.45,0.5};
							class lines
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								width = 4.0;
								NeverEatSeaWeed = 1;
								top = 0.17;
								center = 0.5;
								bottom = 0.55;
								lineXleft = 0.16;
								lineYright = 0.15;
								lineXleftMajor = 0.16;
								lineYrightMajor = 0.14;
								majorLineEach = 3;
								numberEach = 3;
								step = 1;
								stepSize = 0.0263889;
								align = "center";
								scale = 1;
								pos[] = {0.166,"0.05+0.05"};
								right[] = {0.191,"0.05+0.05"};
								down[] = {0.166,"0.08+0.05"};
							};
						};
						class HorizonBankRot
						{
							type = "polygon";
							width = 4.0;
							points[] = {{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.00260472,-0.014636},1},{"HorizonBankRot",{0.0051303,-0.0139655},1},{"HorizonBankRot",{0.0075,-0.0128707},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0075,-0.0128707},1},{"HorizonBankRot",{0.00964181,-0.0113848},1},{"HorizonBankRot",{0.0114907,-0.00955295},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0114907,-0.00955295},1},{"HorizonBankRot",{0.0129904,-0.00743088},1},{"HorizonBankRot",{0.0140954,-0.00508302},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0140954,-0.00508302},1},{"HorizonBankRot",{0.0147721,-0.00258072},1},{"HorizonBankRot",{0.015,6.49628e-10},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.015,6.49628e-10},1},{"HorizonBankRot",{0.0147721,0.00258072},1},{"HorizonBankRot",{0.0140954,0.00508302},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0140954,0.00508302},1},{"HorizonBankRot",{0.0129904,0.00743088},1},{"HorizonBankRot",{0.0114907,0.00955295},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0114907,0.00955295},1},{"HorizonBankRot",{0.00964181,0.0113848},1},{"HorizonBankRot",{0.0075,0.0128707},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0075,0.0128707},1},{"HorizonBankRot",{0.0051303,0.0139655},1},{"HorizonBankRot",{0.00260472,0.014636},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.00260472,0.014636},1},{"HorizonBankRot",{-1.31134e-09,0.0148618},1},{"HorizonBankRot",{-0.00260473,0.014636},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.00260473,0.014636},1},{"HorizonBankRot",{-0.0051303,0.0139655},1},{"HorizonBankRot",{-0.0075,0.0128707},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0075,0.0128707},1},{"HorizonBankRot",{-0.00964181,0.0113848},1},{"HorizonBankRot",{-0.0114907,0.00955295},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0114907,0.00955295},1},{"HorizonBankRot",{-0.0129904,0.00743087},1},{"HorizonBankRot",{-0.0140954,0.00508302},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0140954,0.00508302},1},{"HorizonBankRot",{-0.0147721,0.00258072},1},{"HorizonBankRot",{-0.015,-1.77225e-10},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.015,-1.77225e-10},1},{"HorizonBankRot",{-0.0147721,-0.00258072},1},{"HorizonBankRot",{-0.0140954,-0.00508302},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0140954,-0.00508302},1},{"HorizonBankRot",{-0.0129904,-0.00743088},1},{"HorizonBankRot",{-0.0114907,-0.00955295},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0114907,-0.00955295},1},{"HorizonBankRot",{-0.00964181,-0.0113848},1},{"HorizonBankRot",{-0.0075,-0.0128707},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0075,-0.0128707},1},{"HorizonBankRot",{-0.00513031,-0.0139655},1},{"HorizonBankRot",{-0.00260472,-0.014636},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.00260472,-0.014636},1},{"HorizonBankRot",{2.62268e-09,-0.0148618},1},{"HorizonBankRot",{0.00260472,-0.014636},1}},{{"FCR_Bearing",{-0.019,0},1},{"FCR_Bearing",{-0.008,0},1},{"FCR_Bearing",{-0.008,0.011},1},{"FCR_Bearing",{-0.019,0.011},1}},{{"FCR_Bearing",{-0.003,0},1},{"FCR_Bearing",{0.008,0},1},{"FCR_Bearing",{0.008,0.011},1},{"FCR_Bearing",{-0.003,0.011},1}},{{"FCR_Bearing",{0.008,0},1},{"FCR_Bearing",{0.014,0.0055},1},{"FCR_Bearing",{0.008,0.011},1}},{{"FCR_Bearing",{-0.019,0},1},{"FCR_Bearing",{-0.025,0.0055},1},{"FCR_Bearing",{-0.019,0.011},1}},{{"TurnRate",{-0.013,0},1},{"TurnRate",{0.017,0},1},{"TurnRate",{0.017,0.03},1},{"TurnRate",{-0.013,0.03},1}},{{{0.4,0.865},1},{{0.42,0.845},1},{{0.44,0.865},1}},{{{0.48,0.865},1},{{0.5,0.845},1},{{0.52,0.865},1}},{{{0.56,0.865},1},{{0.58,0.845},1},{{0.6,0.865},1}},{{"HorizonBankRot_Up",{0,-0.287327},1},{"HorizonBankRot_Up",{0.01,-0.267512},1},{"HorizonBankRot_Up",{-0.01,-0.267512},1}},{{{0.87,0.0068},1},{{0.89,0.014},1},{{0.87,0.0212},1}},{{{0.59,0.0068},1},{{0.61,0.014},1},{{0.59,0.0212},1}},{{{0.46,0.0068},1},{{0.48,0.014},1},{{0.46,0.0212},1}},{{{0.19,0.0068},1},{{0.21,0.014},1},{{0.19,0.0212},1}},{{"VerticalSpeedBone",{0.92,0.508},1},{"VerticalSpeedBone",{0.94,0.52},1},{"VerticalSpeedBone",{0.92,0.532},1}}};
						};
						class CollectiveGroup
						{
							condition = "simulRTD";
							class CollectiveText
							{
								type = "text";
								source = "static";
								text = "%";
								align = "right";
								scale = 1;
								pos[] = {{0.11,0.13},1};
								right[] = {{0.15,0.13},1};
								down[] = {{0.11,0.17},1};
							};
							class CollectiveNumber
							{
								type = "text";
								source = "rtdRotorTorque";
								sourceScale = 200;
								align = "left";
								scale = 1;
								pos[] = {{0.11,0.13},1};
								right[] = {{0.15,0.13},1};
								down[] = {{0.11,0.17},1};
							};
						};
						class Speed_Normal
						{
							condition = "speed<=108";
							class SpeedNumber
							{
								type = "text";
								source = "speed";
								sourceScale = 1.9438444;
								align = "right";
								scale = 1;
								pos[] = {{0.07,0.48},1};
								right[] = {{0.11,0.48},1};
								down[] = {{0.07,0.52},1};
							};
						};
						class Speed_VNE: Speed_Normal
						{
							condition = "speed>=108";
							color[] = {1,0,0};
							class SpeedNumber: SpeedNumber{};
						};
						class AltNumber
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 3.28084;
							sourceOffset = -6.88976;
							align = "left";
							scale = 1;
							pos[] = {{0.91,0.505},1};
							right[] = {{0.94,0.505},1};
							down[] = {{0.91,0.535},1};
						};
						class AslNumber
						{
							type = "text";
							source = "altitudeASL";
							sourceScale = 3.28084;
							sourceOffset = -6.56168;
							align = "left";
							scale = 1;
							pos[] = {{0.92,0.115},1};
							right[] = {{0.96,0.115},1};
							down[] = {{0.92,0.155},1};
						};
						class WP
						{
							condition = "wpvalid";
							class WPdist
							{
								type = "text";
								source = "wpdist";
								sourceScale = 0.001;
								sourcePrecision = 1;
								align = "left";
								scale = 1;
								pos[] = {{"0.26+-0.03","0.735+0.05"},1};
								right[] = {{0.265,"0.735+0.05"},1};
								down[] = {{"0.26+-0.03",0.82},1};
							};
							class WPIndex
							{
								type = "text";
								source = "wpIndex";
								sourceScale = 1;
								sourceLength = 2;
								align = "right";
								scale = 1;
								pos[] = {{"0.09+-0.03","0.735+0.05"},1};
								right[] = {{0.095,"0.735+0.05"},1};
								down[] = {{"0.09+-0.03",0.82},1};
							};
							class WPGroundSpeed
							{
								type = "text";
								source = "speed";
								sourceScale = 1.9438444;
								align = "right";
								scale = 1;
								pos[] = {{"0.055+-0.03","0.735+0.055+0.05"},1};
								right[] = {{0.06,"0.735+0.055+0.05"},1};
								down[] = {{"0.055+-0.03",0.875},1};
							};
							class WPstatic
							{
								type = "text";
								source = "static";
								text = "W";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"-0.03 + 0.055",0.785},1};
								right[] = {{0.06,0.785},1};
								down[] = {{"-0.03 + 0.055",0.82},1};
							};
							class WPAuto
							{
								type = "text";
								source = "static";
								text = "";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"-0.03 + 0.055 +0.035",0.84},1};
								right[] = {{0.095,0.84},1};
								down[] = {{"-0.03 + 0.055 +0.035",0.875},1};
							};
							class WPKM
							{
								type = "text";
								source = "static";
								text = "KM";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"-0.03 + 0.055 +0.21",0.785},1};
								right[] = {{0.27,0.785},1};
								down[] = {{"-0.03 + 0.055 +0.21",0.82},1};
							};
							class WPTime_NoEst
							{
								condition = "(speed<=5)+(wpdist<=1)";
								class WPTime
								{
									type = "text";
									source = "static";
									text = "-:--";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"-0.03 + 0.055 +0.15",0.84},1};
									right[] = {{0.21,0.84},1};
									down[] = {{"-0.03 + 0.055 +0.15",0.875},1};
								};
							};
							class WPTime_Est
							{
								condition = "(speed>=5)*(wpdist>=1)";
								class WPTime
								{
									type = "text";
									source = "userText";
									sourceIndex = 1;
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.175,0.84},1};
									right[] = {{0.21,0.84},1};
									down[] = {{0.175,0.875},1};
								};
							};
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{"WPPoint",1,"LimitWaypoint",1,{-0.01,0.04},1},{"WPPoint",1,"LimitWaypoint",1,{0.0,0.02},1},{"WPPoint",1,"LimitWaypoint",1,{0.01,0.04},1},{},{{0.0174,0.774},1},{{0.01195,0.781},1},{{0.00650001,0.788},1},{{0.00650001,0.872},1},{{0.01195,0.879},1},{{0.0174,0.886},1},{{0.3008,0.886},1},{{0.30625,0.879},1},{{0.3117,0.872},1},{{0.3117,0.788},1},{{0.30625,0.781},1},{{0.3008,0.774},1},{{0.0174,0.774},1},{}};
							};
						};
						class Cyan
						{
							color[] = {0.01,0.36,0.83};
							alpha = 0.5;
							class HorizontalLine
							{
								clipTL[] = {0.2,0.25};
								clipBR[] = {0.8,0.75};
								class LevelP05
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP05",{-0.005,0},1},{"LevelP05",{0.025,0},1}};
								};
								class LevelP15
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP15",{-0.005,0},1},{"LevelP15",{0.025,0},1}};
								};
								class LevelP25
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP25",{-0.005,0},1},{"LevelP25",{0.025,0},1}};
								};
								class LevelP35
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP35",{-0.005,0},1},{"LevelP35",{0.025,0},1}};
								};
								class LevelP45
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP45",{-0.005,0},1},{"LevelP45",{0.025,0},1}};
								};
								class LevelP10
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP10",{-0.166,0.02},1},{"LevelP10",{-0.166,0},1},{"LevelP10",{-0.04,0},1},{},{"LevelP10",{0.054,0},1},{"LevelP10",{0.194,0},1},{"LevelP10",{0.194,0.02},1}};
								};
								class VALP_1_10
								{
									type = "text";
									source = "static";
									text = "10";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP10",{-0.19,-0.017},1};
									right[] = {"LevelP10",{-0.15,-0.017},1};
									down[] = {"LevelP10",{-0.19,0.031},1};
								};
								class VALP_1_10_R
								{
									type = "text";
									source = "static";
									text = "10";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP10",{0.21,-0.017},1};
									right[] = {"LevelP10",{0.25,-0.017},1};
									down[] = {"LevelP10",{0.21,0.031},1};
								};
								class LevelP20
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP20",{-0.166,0.02},1},{"LevelP20",{-0.166,0},1},{"LevelP20",{-0.04,0},1},{},{"LevelP20",{0.054,0},1},{"LevelP20",{0.194,0},1},{"LevelP20",{0.194,0.02},1}};
								};
								class VALP_1_20
								{
									type = "text";
									source = "static";
									text = "20";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP20",{-0.19,-0.017},1};
									right[] = {"LevelP20",{-0.15,-0.017},1};
									down[] = {"LevelP20",{-0.19,0.031},1};
								};
								class VALP_1_20_R
								{
									type = "text";
									source = "static";
									text = "20";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP20",{0.21,-0.017},1};
									right[] = {"LevelP20",{0.25,-0.017},1};
									down[] = {"LevelP20",{0.21,0.031},1};
								};
								class LevelP30
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP30",{-0.166,0.02},1},{"LevelP30",{-0.166,0},1},{"LevelP30",{-0.04,0},1},{},{"LevelP30",{0.054,0},1},{"LevelP30",{0.194,0},1},{"LevelP30",{0.194,0.02},1}};
								};
								class VALP_1_30
								{
									type = "text";
									source = "static";
									text = "30";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP30",{-0.19,-0.017},1};
									right[] = {"LevelP30",{-0.15,-0.017},1};
									down[] = {"LevelP30",{-0.19,0.031},1};
								};
								class VALP_1_30_R
								{
									type = "text";
									source = "static";
									text = "30";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP30",{0.21,-0.017},1};
									right[] = {"LevelP30",{0.25,-0.017},1};
									down[] = {"LevelP30",{0.21,0.031},1};
								};
								class LevelP40
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP40",{-0.166,0.02},1},{"LevelP40",{-0.166,0},1},{"LevelP40",{-0.04,0},1},{},{"LevelP40",{0.054,0},1},{"LevelP40",{0.194,0},1},{"LevelP40",{0.194,0.02},1}};
								};
								class VALP_1_40
								{
									type = "text";
									source = "static";
									text = "40";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP40",{-0.19,-0.017},1};
									right[] = {"LevelP40",{-0.15,-0.017},1};
									down[] = {"LevelP40",{-0.19,0.031},1};
								};
								class VALP_1_40_R
								{
									type = "text";
									source = "static";
									text = "40";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP40",{0.21,-0.017},1};
									right[] = {"LevelP40",{0.25,-0.017},1};
									down[] = {"LevelP40",{0.21,0.031},1};
								};
								class LevelP50
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP50",{-0.166,0.02},1},{"LevelP50",{-0.166,0},1},{"LevelP50",{-0.04,0},1},{},{"LevelP50",{0.054,0},1},{"LevelP50",{0.194,0},1},{"LevelP50",{0.194,0.02},1}};
								};
								class VALP_1_50
								{
									type = "text";
									source = "static";
									text = "50";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP50",{-0.19,-0.017},1};
									right[] = {"LevelP50",{-0.15,-0.017},1};
									down[] = {"LevelP50",{-0.19,0.031},1};
								};
								class VALP_1_50_R
								{
									type = "text";
									source = "static";
									text = "50";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP50",{0.21,-0.017},1};
									right[] = {"LevelP50",{0.25,-0.017},1};
									down[] = {"LevelP50",{0.21,0.031},1};
								};
								class LevelP60
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP60",{-0.166,0.02},1},{"LevelP60",{-0.166,0},1},{"LevelP60",{-0.04,0},1},{},{"LevelP60",{0.054,0},1},{"LevelP60",{0.194,0},1},{"LevelP60",{0.194,0.02},1}};
								};
								class VALP_1_60
								{
									type = "text";
									source = "static";
									text = "60";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP60",{-0.19,-0.017},1};
									right[] = {"LevelP60",{-0.15,-0.017},1};
									down[] = {"LevelP60",{-0.19,0.031},1};
								};
								class VALP_1_60_R
								{
									type = "text";
									source = "static";
									text = "60";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP60",{0.21,-0.017},1};
									right[] = {"LevelP60",{0.25,-0.017},1};
									down[] = {"LevelP60",{0.21,0.031},1};
								};
								class LevelP70
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP70",{-0.166,0.02},1},{"LevelP70",{-0.166,0},1},{"LevelP70",{-0.04,0},1},{},{"LevelP70",{0.054,0},1},{"LevelP70",{0.194,0},1},{"LevelP70",{0.194,0.02},1}};
								};
								class VALP_1_70
								{
									type = "text";
									source = "static";
									text = "70";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP70",{-0.19,-0.017},1};
									right[] = {"LevelP70",{-0.15,-0.017},1};
									down[] = {"LevelP70",{-0.19,0.031},1};
								};
								class VALP_1_70_R
								{
									type = "text";
									source = "static";
									text = "70";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP70",{0.21,-0.017},1};
									right[] = {"LevelP70",{0.25,-0.017},1};
									down[] = {"LevelP70",{0.21,0.031},1};
								};
								class LevelP80
								{
									type = "line";
									width = 3;
									points[] = {{"LevelP80",{-0.166,0.02},1},{"LevelP80",{-0.166,0},1},{"LevelP80",{-0.04,0},1},{},{"LevelP80",{0.054,0},1},{"LevelP80",{0.194,0},1},{"LevelP80",{0.194,0.02},1}};
								};
								class VALP_1_80
								{
									type = "text";
									source = "static";
									text = "80";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP80",{-0.19,-0.017},1};
									right[] = {"LevelP80",{-0.15,-0.017},1};
									down[] = {"LevelP80",{-0.19,0.031},1};
								};
								class VALP_1_80_R
								{
									type = "text";
									source = "static";
									text = "80";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP80",{0.21,-0.017},1};
									right[] = {"LevelP80",{0.25,-0.017},1};
									down[] = {"LevelP80",{0.21,0.031},1};
								};
							};
						};
						class Brown
						{
							color[] = {0.94,0.18,0};
							alpha = 0.5;
							class HorizontalLine
							{
								clipTL[] = {0.2,0.25};
								clipBR[] = {0.8,0.75};
								class Level0
								{
									type = "line";
									source = "Level0";
									width = 3;
									points[] = {{"Level0",{-0.54,0},1},{"Level0",{-0.0675,0},1},{},{"Level0",{0.0675,0},1},{"Level0",{0.54,0},1}};
								};
								class LevelM05
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM05",{-0.005,0},1},{"LevelM05",{0.025,0},1}};
								};
								class LevelM15
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM15",{-0.005,0},1},{"LevelM15",{0.025,0},1}};
								};
								class LevelM25
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM25",{-0.005,0},1},{"LevelM25",{0.025,0},1}};
								};
								class LevelM35
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM35",{-0.005,0},1},{"LevelM35",{0.025,0},1}};
								};
								class LevelM45
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM45",{-0.005,0},1},{"LevelM45",{0.025,0},1}};
								};
								class LevelM10
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM10",{-0.166,-0.02},1},{"LevelM10",{-0.166,0},1},{"LevelM10",{-0.138,0},1},{},{"LevelM10",{-0.124,0},1},{"LevelM10",{-0.096,0},1},{},{"LevelM10",{-0.082,0},1},{"LevelM10",{-0.054,0},1},{},{},{"LevelM10",{0.166,-0.02},1},{"LevelM10",{0.166,0},1},{"LevelM10",{0.138,0},1},{},{"LevelM10",{0.124,0},1},{"LevelM10",{0.096,0},1},{},{"LevelM10",{0.082,0},1},{"LevelM10",{0.054,0},1},{}};
								};
								class VALM_1_10
								{
									type = "text";
									source = "static";
									text = 10;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM10",{-0.18,-0.032},1};
									right[] = {"LevelM10",{-0.14,-0.032},1};
									down[] = {"LevelM10",{-0.18,0.016},1};
								};
								class VALM_1_10_R
								{
									type = "text";
									source = "static";
									text = 10;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM10",{0.18,-0.032},1};
									right[] = {"LevelM10",{0.22,-0.032},1};
									down[] = {"LevelM10",{0.18,0.016},1};
								};
								class LevelM20
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM20",{-0.166,-0.02},1},{"LevelM20",{-0.166,0},1},{"LevelM20",{-0.138,0},1},{},{"LevelM20",{-0.124,0},1},{"LevelM20",{-0.096,0},1},{},{"LevelM20",{-0.082,0},1},{"LevelM20",{-0.054,0},1},{},{},{"LevelM20",{0.166,-0.02},1},{"LevelM20",{0.166,0},1},{"LevelM20",{0.138,0},1},{},{"LevelM20",{0.124,0},1},{"LevelM20",{0.096,0},1},{},{"LevelM20",{0.082,0},1},{"LevelM20",{0.054,0},1},{}};
								};
								class VALM_1_20
								{
									type = "text";
									source = "static";
									text = 20;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM20",{-0.18,-0.032},1};
									right[] = {"LevelM20",{-0.14,-0.032},1};
									down[] = {"LevelM20",{-0.18,0.016},1};
								};
								class VALM_1_20_R
								{
									type = "text";
									source = "static";
									text = 20;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM20",{0.18,-0.032},1};
									right[] = {"LevelM20",{0.22,-0.032},1};
									down[] = {"LevelM20",{0.18,0.016},1};
								};
								class LevelM30
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM30",{-0.166,-0.02},1},{"LevelM30",{-0.166,0},1},{"LevelM30",{-0.138,0},1},{},{"LevelM30",{-0.124,0},1},{"LevelM30",{-0.096,0},1},{},{"LevelM30",{-0.082,0},1},{"LevelM30",{-0.054,0},1},{},{},{"LevelM30",{0.166,-0.02},1},{"LevelM30",{0.166,0},1},{"LevelM30",{0.138,0},1},{},{"LevelM30",{0.124,0},1},{"LevelM30",{0.096,0},1},{},{"LevelM30",{0.082,0},1},{"LevelM30",{0.054,0},1},{}};
								};
								class VALM_1_30
								{
									type = "text";
									source = "static";
									text = 30;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM30",{-0.18,-0.032},1};
									right[] = {"LevelM30",{-0.14,-0.032},1};
									down[] = {"LevelM30",{-0.18,0.016},1};
								};
								class VALM_1_30_R
								{
									type = "text";
									source = "static";
									text = 30;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM30",{0.18,-0.032},1};
									right[] = {"LevelM30",{0.22,-0.032},1};
									down[] = {"LevelM30",{0.18,0.016},1};
								};
								class LevelM40
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM40",{-0.166,-0.02},1},{"LevelM40",{-0.166,0},1},{"LevelM40",{-0.138,0},1},{},{"LevelM40",{-0.124,0},1},{"LevelM40",{-0.096,0},1},{},{"LevelM40",{-0.082,0},1},{"LevelM40",{-0.054,0},1},{},{},{"LevelM40",{0.166,-0.02},1},{"LevelM40",{0.166,0},1},{"LevelM40",{0.138,0},1},{},{"LevelM40",{0.124,0},1},{"LevelM40",{0.096,0},1},{},{"LevelM40",{0.082,0},1},{"LevelM40",{0.054,0},1},{}};
								};
								class VALM_1_40
								{
									type = "text";
									source = "static";
									text = 40;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM40",{-0.18,-0.032},1};
									right[] = {"LevelM40",{-0.14,-0.032},1};
									down[] = {"LevelM40",{-0.18,0.016},1};
								};
								class VALM_1_40_R
								{
									type = "text";
									source = "static";
									text = 40;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM40",{0.18,-0.032},1};
									right[] = {"LevelM40",{0.22,-0.032},1};
									down[] = {"LevelM40",{0.18,0.016},1};
								};
								class LevelM50
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM50",{-0.166,-0.02},1},{"LevelM50",{-0.166,0},1},{"LevelM50",{-0.138,0},1},{},{"LevelM50",{-0.124,0},1},{"LevelM50",{-0.096,0},1},{},{"LevelM50",{-0.082,0},1},{"LevelM50",{-0.054,0},1},{},{},{"LevelM50",{0.166,-0.02},1},{"LevelM50",{0.166,0},1},{"LevelM50",{0.138,0},1},{},{"LevelM50",{0.124,0},1},{"LevelM50",{0.096,0},1},{},{"LevelM50",{0.082,0},1},{"LevelM50",{0.054,0},1},{}};
								};
								class VALM_1_50
								{
									type = "text";
									source = "static";
									text = 50;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM50",{-0.18,-0.032},1};
									right[] = {"LevelM50",{-0.14,-0.032},1};
									down[] = {"LevelM50",{-0.18,0.016},1};
								};
								class VALM_1_50_R
								{
									type = "text";
									source = "static";
									text = 50;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM50",{0.18,-0.032},1};
									right[] = {"LevelM50",{0.22,-0.032},1};
									down[] = {"LevelM50",{0.18,0.016},1};
								};
								class LevelM60
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM60",{-0.166,-0.02},1},{"LevelM60",{-0.166,0},1},{"LevelM60",{-0.138,0},1},{},{"LevelM60",{-0.124,0},1},{"LevelM60",{-0.096,0},1},{},{"LevelM60",{-0.082,0},1},{"LevelM60",{-0.054,0},1},{},{},{"LevelM60",{0.166,-0.02},1},{"LevelM60",{0.166,0},1},{"LevelM60",{0.138,0},1},{},{"LevelM60",{0.124,0},1},{"LevelM60",{0.096,0},1},{},{"LevelM60",{0.082,0},1},{"LevelM60",{0.054,0},1},{}};
								};
								class VALM_1_60
								{
									type = "text";
									source = "static";
									text = 60;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM60",{-0.18,-0.032},1};
									right[] = {"LevelM60",{-0.14,-0.032},1};
									down[] = {"LevelM60",{-0.18,0.016},1};
								};
								class VALM_1_60_R
								{
									type = "text";
									source = "static";
									text = 60;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM60",{0.18,-0.032},1};
									right[] = {"LevelM60",{0.22,-0.032},1};
									down[] = {"LevelM60",{0.18,0.016},1};
								};
								class LevelM70
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM70",{-0.166,-0.02},1},{"LevelM70",{-0.166,0},1},{"LevelM70",{-0.138,0},1},{},{"LevelM70",{-0.124,0},1},{"LevelM70",{-0.096,0},1},{},{"LevelM70",{-0.082,0},1},{"LevelM70",{-0.054,0},1},{},{},{"LevelM70",{0.166,-0.02},1},{"LevelM70",{0.166,0},1},{"LevelM70",{0.138,0},1},{},{"LevelM70",{0.124,0},1},{"LevelM70",{0.096,0},1},{},{"LevelM70",{0.082,0},1},{"LevelM70",{0.054,0},1},{}};
								};
								class VALM_1_70
								{
									type = "text";
									source = "static";
									text = 70;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM70",{-0.18,-0.032},1};
									right[] = {"LevelM70",{-0.14,-0.032},1};
									down[] = {"LevelM70",{-0.18,0.016},1};
								};
								class VALM_1_70_R
								{
									type = "text";
									source = "static";
									text = 70;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM70",{0.18,-0.032},1};
									right[] = {"LevelM70",{0.22,-0.032},1};
									down[] = {"LevelM70",{0.18,0.016},1};
								};
								class LevelM80
								{
									type = "line";
									width = 3;
									points[] = {{"LevelM80",{-0.166,-0.02},1},{"LevelM80",{-0.166,0},1},{"LevelM80",{-0.138,0},1},{},{"LevelM80",{-0.124,0},1},{"LevelM80",{-0.096,0},1},{},{"LevelM80",{-0.082,0},1},{"LevelM80",{-0.054,0},1},{},{},{"LevelM80",{0.166,-0.02},1},{"LevelM80",{0.166,0},1},{"LevelM80",{0.138,0},1},{},{"LevelM80",{0.124,0},1},{"LevelM80",{0.096,0},1},{},{"LevelM80",{0.082,0},1},{"LevelM80",{0.054,0},1},{}};
								};
								class VALM_1_80
								{
									type = "text";
									source = "static";
									text = 80;
									align = "left";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM80",{-0.18,-0.032},1};
									right[] = {"LevelM80",{-0.14,-0.032},1};
									down[] = {"LevelM80",{-0.18,0.016},1};
								};
								class VALM_1_80_R
								{
									type = "text";
									source = "static";
									text = 80;
									align = "right";
									scale = 1;
									sourceScale = 1;
									sourceLength = 2;
									pos[] = {"LevelM80",{0.18,-0.032},1};
									right[] = {"LevelM80",{0.22,-0.032},1};
									down[] = {"LevelM80",{0.18,0.016},1};
								};
							};
						};
						class Red
						{
							color[] = {1,0,0};
							alpha = 0.3;
							class LO_Alt
							{
								condition = "altitudeAGL <= 10";
								class Lo_ALT
								{
									type = "text";
									source = "static";
									text = "LO";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.91,0.57},1};
									right[] = {{0.95,0.57},1};
									down[] = {{0.91,0.61},1};
								};
							};
						};
						class Engine
						{
							type = "text";
							source = "static";
							text = "ENG";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.21,0.03},1};
							right[] = {{0.24,0.03},1};
							down[] = {{0.21,0.06},1};
						};
						class Fuel
						{
							type = "text";
							source = "static";
							text = "FUEL";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.48,0.03},1};
							right[] = {{0.51,0.03},1};
							down[] = {{0.48,0.06},1};
						};
						class Performance
						{
							type = "text";
							source = "static";
							text = "PERF";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.61,0.03},1};
							right[] = {{0.64,0.03},1};
							down[] = {{0.61,0.06},1};
						};
						class Utilities
						{
							type = "text";
							source = "static";
							text = "UTIL";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.89,0.03},1};
							right[] = {{0.92,0.03},1};
							down[] = {{0.89,0.06},1};
						};
						class Flight
						{
							type = "text";
							source = "static";
							text = "FLT";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.21,0.94},1};
							right[] = {{0.24,0.94},1};
							down[] = {{0.21,0.97},1};
						};
						class Set
						{
							type = "text";
							source = "static";
							text = "SET";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.89,0.94},1};
							right[] = {{0.92,0.94},1};
							down[] = {{0.89,0.97},1};
						};
						class Waterline
						{
							type = "text";
							source = "static";
							text = "-W-";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.08,0.69},1};
							right[] = {{0.11,0.69},1};
							down[] = {{0.08,0.72},1};
						};
					};
				};
				class MFD_Right_Weapons
				{
					topLeft = "GUNNER_MFD_R_TL";
					topRight = "GUNNER_MFD_R_TR";
					bottomLeft = "GUNNER_MFD_R_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {-2};
					class Bones
					{
						class HUDCenter
						{
							type = "fixed";
							pos[] = {0.5,0.5};
						};
					};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on*(user7>=1)*(user7<=1)";
						class Weapons
						{
							condition = "((mgun+rocket+missile+bomb)>=1)+(ammo<=0)";
							class Static
							{
								type = "line";
								width = 5.0;
								points[] = {{{0.213896,0.996468},1},{{0.138771,0.996468},1},{{0.138771,0.956169},1},{{0.213896,0.956169},1},{{0.213896,0.996468},1},{},{{0.999468,0.854677},1},{{0.923348,0.854677},1},{{0.923348,0.815373},1},{{0.999468,0.815373},1},{{0.999468,0.854677},1},{},{{0.999468,0.731294},1},{{0.880065,0.731294},1},{{0.880065,0.691493},1},{{0.999468,0.691493},1},{{0.999468,0.731294},1},{},{{0.437279,0.620846},1},{{0.440264,0.611891},1},{{0.445736,0.60592},1},{{0.454194,0.601443},1},{{0.549219,0.601443},1},{{0.556184,0.605423},1},{{0.563647,0.612886},1},{{0.565139,0.624826},1},{{0.565139,0.725821},1},{{0.564642,0.733284},1},{{0.558174,0.742239},1},{{0.547726,0.747711},1},{{0.452204,0.747711},1},{{0.445239,0.742736},1},{{0.438771,0.734776},1},{{0.437279,0.725821},1},{{0.437279,0.620846},1},{},{{0.257179,0.139254},1},{{0.259667,0.130796},1},{{0.265637,0.123831},1},{{0.276582,0.119353},1},{{0.365637,0.119353},1},{{0.378572,0.123831},1},{{0.384045,0.130796},1},{{0.386532,0.139254},1},{{0.386532,0.199453},1},{{0.384045,0.208408},1},{{0.378572,0.214876},1},{{0.365637,0.219851},1},{{0.276582,0.219851},1},{{0.265637,0.214876},1},{{0.259667,0.208408},1},{{0.257179,0.199453},1},{{0.257179,0.139254},1},{},{{0.618373,0.139254},1},{{0.620861,0.130796},1},{{0.626831,0.123831},1},{{0.638274,0.119353},1},{{0.726831,0.119353},1},{{0.740264,0.123831},1},{{0.745239,0.130796},1},{{0.747726,0.139254},1},{{0.747726,0.199453},1},{{0.745239,0.208408},1},{{0.740264,0.214876},1},{{0.726831,0.219851},1},{{0.638274,0.219851},1},{{0.626831,0.214876},1},{{0.620861,0.208408},1},{{0.618373,0.199453},1},{{0.618373,0.139254},1},{},{{0.642254,0.263134},1},{{0.644741,0.255672},1},{{0.649219,0.249701},1},{{0.658174,0.245721},1},{{0.730313,0.245721},1},{{0.741259,0.249701},1},{{0.745239,0.255672},1},{{0.747229,0.263134},1},{{0.747229,0.315373},1},{{0.745239,0.322836},1},{{0.741259,0.328308},1},{{0.730313,0.332786},1},{{0.658174,0.332786},1},{{0.649219,0.328308},1},{{0.644741,0.322836},1},{{0.642254,0.315373},1},{{0.642254,0.263134},1},{},{{0.257179,0.263134},1},{{0.259169,0.255672},1},{{0.263647,0.249701},1},{{0.2731,0.245721},1},{{0.345239,0.245721},1},{{0.355687,0.249701},1},{{0.360164,0.255672},1},{{0.362154,0.263134},1},{{0.362154,0.315373},1},{{0.360164,0.322836},1},{{0.355687,0.328308},1},{{0.345239,0.332786},1},{{0.2731,0.332786},1},{{0.263647,0.328308},1},{{0.259169,0.322836},1},{{0.257179,0.315373},1},{{0.257179,0.263134},1},{},{{0.495488,0.249701},1},{{0.495488,0.230299},1},{{0.50892,0.230299},1},{{0.50892,0.249701},1},{{0.495488,0.249701},1},{},{{0.49698,0.306915},1},{{0.49698,0.249701},1},{{0.507428,0.249701},1},{{0.507428,0.306915},1},{{0.49698,0.306915},1},{},{{0.479567,0.371095},1},{{0.479567,0.315871},1},{{0.48305,0.3099},1},{{0.489517,0.306915},1},{{0.515886,0.306915},1},{{0.521856,0.310398},1},{{0.525338,0.315871},1},{{0.525338,0.371095},1},{{0.479567,0.371095},1},{},{{0.439766,0.371095},1},{{0.564144,0.371095},1},{{0.564144,0.428806},1},{{0.439766,0.428806},1},{{0.439766,0.371095},1},{},{{0.421856,0.761144},1},{{0.420363,0.57607},1},{{0.18504,0.550199},1},{{0.18504,0.453682},1},{{0.419866,0.434776},1},{{0.419866,0.279552},1},{{0.425338,0.260647},1},{{0.430313,0.254179},1},{{0.439269,0.245224},1},{{0.453199,0.237264},1},{{0.462652,0.234279},1},{{0.470612,0.233284},1},{{0.471109,0.233284},1},{{0.471109,0.228806},1},{{0.473099,0.224328},1},{{0.47509,0.219353},1},{{0.478572,0.214876},1},{{0.484045,0.210398},1},{{0.490015,0.208408},1},{{0.493995,0.207413},1},{{0.510413,0.207413},1},{{0.516383,0.208905},1},{{0.522353,0.211393},1},{{0.526333,0.214378},1},{{0.529816,0.218856},1},{{0.532801,0.223831},1},{{0.534294,0.229303},1},{{0.534294,0.233781},1},{{0.541756,0.234279},1},{{0.550214,0.236269},1},{{0.559169,0.240746},1},{{0.566134,0.245224},1},{{0.573099,0.252189},1},{{0.577577,0.259652},1},{{0.580562,0.266617},1},{{0.582552,0.273085},1},{{0.583547,0.279552},1},{{0.584045,0.435274},1},{{0.819368,0.454179},1},{{0.819368,0.550697},1},{{0.584045,0.577065},1},{{0.583547,0.761144},1},{{0.421856,0.761144},1},{},{{0.8,0.014},1},{{0.87,0.014},1},{},{{0.68,0.014},1},{{0.76,0.014},1},{},{{0.51,0.014},1},{{0.61,0.014},1},{},{{0.135,0.014},1},{{0.2,0.014},1},{},{{0.265,0.014},1},{{0.33,0.014},1},{}};
							};
							class StaticBold
							{
								type = "line";
								width = 10.0;
								points[] = {};
							};
							class StaticThin
							{
								type = "line";
								width = 2.0;
								points[] = {};
							};
							class Polygons
							{
								type = "polygon";
								width = 4.0;
								points[] = {{{{0.87,0.0068},1},{{0.89,0.014},1},{{0.87,0.0212},1}},{{{0.75,0.0068},1},{{0.77,0.014},1},{{0.75,0.0212},1}},{{{0.59,0.0068},1},{{0.61,0.014},1},{{0.59,0.0212},1}},{{{0.32,0.0068},1},{{0.34,0.014},1},{{0.32,0.0212},1}},{{{0.19,0.0068},1},{{0.21,0.014},1},{{0.19,0.0212},1}}};
							};
							class Safemode
							{
								condition = "1-(bomb+mgun+atmissile+aamissile+rocket)";
								class Boresight
								{
									type = "text";
									source = "static";
									text = "BORESIGHT";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.005,0.683},1};
									right[] = {{0.032,0.683},1};
									down[] = {{0.005,0.713},1};
								};
								class Grayscale
								{
									type = "text";
									source = "static";
									text = "GRAYSCALE";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.005,0.8},1};
									right[] = {{0.032,0.8},1};
									down[] = {{0.005,0.83},1};
								};
								class Safemode
								{
									type = "text";
									source = "static";
									text = "SAFE";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.503,0.11},1};
									right[] = {{0.533,0.11},1};
									down[] = {{0.503,0.14},1};
								};
								class Static
								{
									type = "line";
									width = 5.0;
									points[] = {{{0.429318,0.0924876},1},{{0.432801,0.0830348},1},{{0.438771,0.0770647},1},{{0.448224,0.0735821},1},{{0.556682,0.0735821},1},{{0.567627,0.0785572},1},{{0.573099,0.0850249},1},{{0.57509,0.0944776},1},{{0.57509,0.157164},1},{{0.573099,0.165124},1},{{0.567129,0.171592},1},{{0.555189,0.17607},1},{{0.445736,0.17607},1},{{0.437279,0.171592},1},{{0.431308,0.164627},1},{{0.429318,0.157164},1},{{0.429318,0.0924876},1},{},{{0.013398,0.673085},1},{{0.20892,0.673085},1},{}};
								};
								class Polygons
								{
									type = "polygon";
									width = 4.0;
									points[] = {{{{0.195,0.6658},1},{{0.215,0.673},1},{{0.195,0.6802},1}}};
								};
							};
							class Armed
							{
								condition = "(bomb+mgun+missile+rocket)";
								color[] = {1,0.3,0};
								alpha = 0.3;
								class Static
								{
									type = "line";
									width = 12.0;
									points[] = {{{0.429318,0.0924876},1},{{0.432801,0.0830348},1},{{0.438771,0.0770647},1},{{0.448224,0.0735821},1},{{0.556682,0.0735821},1},{{0.567627,0.0785572},1},{{0.573099,0.0850249},1},{{0.57509,0.0944776},1},{{0.57509,0.157164},1},{{0.573099,0.165124},1},{{0.567129,0.171592},1},{{0.555189,0.17607},1},{{0.445736,0.17607},1},{{0.437279,0.171592},1},{{0.431308,0.164627},1},{{0.429318,0.157164},1},{{0.429318,0.0924876},1},{}};
								};
								class Polygons
								{
									type = "polygon";
									width = 4.0;
									points[] = {{{{0.43,0.075},1},{{0.57,0.075},1},{{0.57,0.175},1},{{0.43,0.175},1}}};
								};
								class BlackText
								{
									color[] = {0,0,0};
									alpha = 1;
									class Safemode
									{
										type = "text";
										source = "static";
										text = "ARM";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.11},1};
										right[] = {{0.543,0.11},1};
										down[] = {{0.503,0.15},1};
									};
									class Safemode1
									{
										type = "text";
										source = "static";
										text = "ARM";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.11},1};
										right[] = {{0.544,0.11},1};
										down[] = {{0.503,0.151},1};
									};
								};
							};
							class Rockets
							{
								condition = "rocket";
								class White
								{
									color[] = {1,1,1};
									class RocketCount
									{
										type = "text";
										source = "static";
										text = "TOTAL ROCKETS";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.78},1};
										right[] = {{0.529,0.78},1};
										down[] = {{0.503,0.808},1};
									};
									class RocketCountValue
									{
										type = "text";
										source = "ammo";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.82},1};
										right[] = {{0.529,0.82},1};
										down[] = {{0.503,0.848},1};
									};
								};
								class Quantity
								{
									type = "text";
									source = "static";
									text = "QTY";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.17},1};
									right[] = {{1.022,0.17},1};
									down[] = {{0.995,0.2},1};
								};
								class QuantityValue
								{
									type = "text";
									source = "weapon";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.21},1};
									right[] = {{1.022,0.21},1};
									down[] = {{0.995,0.24},1};
								};
								class FuzeSetting
								{
									type = "text";
									source = "static";
									text = "PEN";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.29},1};
									right[] = {{1.022,0.29},1};
									down[] = {{0.995,0.32},1};
								};
								class SuperQuickFuzing
								{
									type = "text";
									source = "static";
									text = "SPQ";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.33},1};
									right[] = {{1.022,0.33},1};
									down[] = {{0.995,0.36},1};
								};
								class INVENTORY1
								{
									type = "text";
									source = "static";
									text = "I";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.309},1};
									right[] = {{0.145,0.309},1};
									down[] = {{0.115,0.336},1};
								};
								class INVENTORY2
								{
									type = "text";
									source = "static";
									text = "N";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.339},1};
									right[] = {{0.145,0.339},1};
									down[] = {{0.115,0.366},1};
								};
								class INVENTORY3
								{
									type = "text";
									source = "static";
									text = "V";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.369},1};
									right[] = {{0.145,0.369},1};
									down[] = {{0.115,0.396},1};
								};
								class INVENTORY4
								{
									type = "text";
									source = "static";
									text = "E";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.399},1};
									right[] = {{0.145,0.399},1};
									down[] = {{0.115,0.426},1};
								};
								class INVENTORY5
								{
									type = "text";
									source = "static";
									text = "N";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.429},1};
									right[] = {{0.145,0.429},1};
									down[] = {{0.115,0.456},1};
								};
								class INVENTORY6
								{
									type = "text";
									source = "static";
									text = "T";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.459},1};
									right[] = {{0.145,0.459},1};
									down[] = {{0.115,0.486},1};
								};
								class INVENTORY7
								{
									type = "text";
									source = "static";
									text = "O";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.489},1};
									right[] = {{0.145,0.489},1};
									down[] = {{0.115,0.516},1};
								};
								class INVENTORY8
								{
									type = "text";
									source = "static";
									text = "R";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.519},1};
									right[] = {{0.145,0.519},1};
									down[] = {{0.115,0.546},1};
								};
								class INVENTORY9
								{
									type = "text";
									source = "static";
									text = "Y";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.549},1};
									right[] = {{0.145,0.549},1};
									down[] = {{0.115,0.576},1};
								};
								class Pylon2
								{
									type = "pylonicon";
									pos[] = {{0.005,0.15},1};
									pylon = 2;
									name = "RHS_AH64_Weap_MFD_Inventory";
								};
								class Pylon3: Pylon2
								{
									pos[] = {{0.005,0.27},1};
									pylon = 3;
								};
								class Pylon4: Pylon2
								{
									pos[] = {{0.005,0.39},1};
									pylon = 5;
								};
								class Pylon5: Pylon2
								{
									pos[] = {{0.005,0.51},1};
									pylon = 4;
								};
								class Static
								{
									type = "line";
									width = 5.0;
									points[] = {{{1.00046,0.364627},1},{{0.923846,0.364627},1},{{0.923846,0.324826},1},{{1.00046,0.324826},1},{{1.00046,0.364627},1},{},{{0.736781,0.997463},1},{{0.660662,0.997463},1},{{0.660662,0.956667},1},{{0.736781,0.956667},1},{{0.736781,0.997463},1},{},{{0.353199,0.783035},1},{{0.353199,0.843234},1},{{0.355687,0.847711},1},{{0.361159,0.853682},1},{{0.365637,0.855174},1},{{0.641756,0.855174},1},{{0.646731,0.853682},1},{{0.651706,0.851194},1},{{0.655687,0.843234},1},{{0.655687,0.783035},1},{{0.652204,0.777065},1},{{0.646731,0.77209},1},{{0.642751,0.7701},1},{{0.365139,0.7701},1},{{0.360662,0.77209},1},{{0.355687,0.777562},1},{{0.353199,0.783035},1},{},{{0.00941791,0.751692},1},{{0.10494,0.751692},1},{{0.10494,0.58403},1},{},{{0.00941791,0.140249},1},{{0.10494,0.140249},1},{{0.10494,0.307413},1},{}};
								};
								class BoxQuantity_1
								{
									condition = "user10<=4";
									class Static
									{
										type = "line";
										width = 5.0;
										points[] = {{{1.00046,0.241244},1},{{0.968124,0.241244},1},{{0.968124,0.201443},1},{{1.00046,0.201443},1},{{1.00046,0.241244},1},{}};
									};
								};
								class BoxQuantity_2: BoxQuantity_1
								{
									condition = "(user10>=5)*(user10<=6)";
									class Static: Static
									{
										points[] = {{{1.00046,0.241244},1},{{0.943249,0.241244},1},{{0.943249,0.201443},1},{{1.00046,0.201443},1},{{1.00046,0.241244},1},{}};
									};
								};
								class BoxQuantity_3: BoxQuantity_1
								{
									condition = "(user10>=7)";
									class Static: Static
									{
										points[] = {{{1.00046,0.241244},1},{{0.923348,0.241244},1},{{0.923348,0.201443},1},{{1.00046,0.201443},1},{{1.00046,0.241244},1},{}};
									};
								};
							};
							class Mgun
							{
								condition = "mgun";
								class GunMode
								{
									type = "text";
									source = "static";
									text = "MODE";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.29},1};
									right[] = {{1.022,0.29},1};
									down[] = {{0.995,0.32},1};
								};
								class GunModeValue
								{
									type = "text";
									source = "static";
									text = "NORM";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.33},1};
									right[] = {{1.022,0.33},1};
									down[] = {{0.995,0.36},1};
								};
								class Store1
								{
									type = "text";
									source = "static";
									text = "STORE";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.503,0.78},1};
									right[] = {{0.529,0.78},1};
									down[] = {{0.503,0.808},1};
								};
								class Store2
								{
									type = "text";
									source = "static";
									text = "ROUNDS IMPACT";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.503,0.82},1};
									right[] = {{0.529,0.82},1};
									down[] = {{0.503,0.848},1};
								};
								class Mode_1
								{
									type = "text";
									source = "static";
									text = "10";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.009,0.186},1};
									right[] = {{0.036,0.186},1};
									down[] = {{0.009,0.215},1};
								};
								class Mode_2
								{
									type = "text";
									source = "static";
									text = "20";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.009,0.31},1};
									right[] = {{0.036,0.31},1};
									down[] = {{0.009,0.339},1};
								};
								class Mode_3
								{
									type = "text";
									source = "static";
									text = "50";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.009,0.43},1};
									right[] = {{0.036,0.43},1};
									down[] = {{0.009,0.459},1};
								};
								class Mode_4
								{
									type = "text";
									source = "static";
									text = "100";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.009,0.553},1};
									right[] = {{0.036,0.553},1};
									down[] = {{0.009,0.582},1};
								};
								class Mode_5
								{
									type = "text";
									source = "static";
									text = "ALL";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.009,0.674},1};
									right[] = {{0.036,0.674},1};
									down[] = {{0.009,0.703},1};
								};
								class Harmonize
								{
									type = "text";
									source = "static";
									text = "HARMONIZE";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.009,0.8},1};
									right[] = {{0.036,0.8},1};
									down[] = {{0.009,0.829},1};
								};
								class BoxMode_1
								{
									condition = "user10<=0";
									class Static
									{
										type = "line";
										width = 5.0;
										points[] = {{{0.0576766,0.219353},1},{{0.00444279,0.219353},1},{{0.00444279,0.179552},1},{{0.0576766,0.179552},1},{{0.0576766,0.219353},1},{}};
									};
								};
								class BoxMode_2: BoxMode_1
								{
									condition = "(user10>=1)*(user10<=1)";
									class Static: Static
									{
										points[] = {{{0.0576766,0.344726},1},{{0.00444279,0.344726},1},{{0.00444279,0.305423},1},{{0.0576766,0.305423},1},{{0.0576766,0.344726},1},{}};
									};
								};
								class BoxMode_3: BoxMode_1
								{
									condition = "(user10>=2)*(user10<=2)";
									class Static: Static
									{
										points[] = {{{0.0576766,0.464627},1},{{0.00444279,0.464627},1},{{0.00444279,0.424826},1},{{0.0576766,0.424826},1},{{0.0576766,0.464627},1},{}};
									};
								};
								class BoxMode_4: BoxMode_1
								{
									condition = "(user10>=3)*(user10<=3)";
									class Static: Static
									{
										points[] = {{{0.0820547,0.587015},1},{{0.00444279,0.587015},1},{{0.00444279,0.547214},1},{{0.0820547,0.547214},1},{{0.0820547,0.587015},1},{}};
									};
								};
								class BoxMode_5: BoxMode_1
								{
									condition = "(user10>=4)*(user10<=4)";
									class Static: Static
									{
										points[] = {{{0.0820547,0.70791},1},{{0.00444279,0.70791},1},{{0.00444279,0.668109},1},{{0.0820547,0.668109},1},{{0.0820547,0.70791},1},{}};
									};
								};
								class BURSTLIMIT1
								{
									type = "text";
									source = "static";
									text = "B";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.282},1};
									right[] = {{0.145,0.282},1};
									down[] = {{0.115,0.309},1};
								};
								class BURSTLIMIT2
								{
									type = "text";
									source = "static";
									text = "U";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.312},1};
									right[] = {{0.145,0.312},1};
									down[] = {{0.115,0.339},1};
								};
								class BURSTLIMIT3
								{
									type = "text";
									source = "static";
									text = "R";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.342},1};
									right[] = {{0.145,0.342},1};
									down[] = {{0.115,0.369},1};
								};
								class BURSTLIMIT4
								{
									type = "text";
									source = "static";
									text = "S";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.372},1};
									right[] = {{0.145,0.372},1};
									down[] = {{0.115,0.399},1};
								};
								class BURSTLIMIT5
								{
									type = "text";
									source = "static";
									text = "T";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.402},1};
									right[] = {{0.145,0.402},1};
									down[] = {{0.115,0.429},1};
								};
								class BURSTLIMIT6
								{
									type = "text";
									source = "static";
									text = " ";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.432},1};
									right[] = {{0.145,0.432},1};
									down[] = {{0.115,0.459},1};
								};
								class BURSTLIMIT7
								{
									type = "text";
									source = "static";
									text = "L";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.462},1};
									right[] = {{0.145,0.462},1};
									down[] = {{0.115,0.489},1};
								};
								class BURSTLIMIT8
								{
									type = "text";
									source = "static";
									text = "I";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.492},1};
									right[] = {{0.145,0.492},1};
									down[] = {{0.115,0.519},1};
								};
								class BURSTLIMIT9
								{
									type = "text";
									source = "static";
									text = "M";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.522},1};
									right[] = {{0.145,0.522},1};
									down[] = {{0.115,0.549},1};
								};
								class BURSTLIMIT10
								{
									type = "text";
									source = "static";
									text = "I";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.552},1};
									right[] = {{0.145,0.552},1};
									down[] = {{0.115,0.579},1};
								};
								class BURSTLIMIT11
								{
									type = "text";
									source = "static";
									text = "T";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.115,0.582},1};
									right[] = {{0.145,0.582},1};
									down[] = {{0.115,0.609},1};
								};
								class Static
								{
									type = "line";
									width = 5.0;
									points[] = {{{0.99897,0.364627},1},{{0.899965,0.364627},1},{{0.899965,0.324826},1},{{0.99897,0.324826},1},{{0.99897,0.364627},1},{},{{0.343249,0.997463},1},{{0.267627,0.997463},1},{{0.267627,0.956667},1},{{0.343249,0.956667},1},{{0.343249,0.997463},1},{},{{0.353199,0.783035},1},{{0.353199,0.843234},1},{{0.355687,0.847711},1},{{0.361159,0.853682},1},{{0.365637,0.855174},1},{{0.641756,0.855174},1},{{0.646731,0.853682},1},{{0.651706,0.851194},1},{{0.655687,0.843234},1},{{0.655687,0.783035},1},{{0.652204,0.777065},1},{{0.646731,0.77209},1},{{0.642751,0.7701},1},{{0.365139,0.7701},1},{{0.360662,0.77209},1},{{0.355687,0.777562},1},{{0.353199,0.783035},1},{},{{0.00941791,0.753184},1},{{0.101955,0.753184},1},{{0.101955,0.612388},1},{},{{0.00941791,0.137761},1},{{0.101955,0.137761},1},{{0.101955,0.27607},1},{}};
								};
								class Bold{};
							};
							class Missiles
							{
								condition = "missile";
								class MissileType
								{
									type = "text";
									source = "static";
									text = "TYPE";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.17},1};
									right[] = {{1.022,0.17},1};
									down[] = {{0.995,0.2},1};
								};
								class MissileMode
								{
									type = "text";
									source = "static";
									text = "MODE";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.29},1};
									right[] = {{1.022,0.29},1};
									down[] = {{0.995,0.32},1};
								};
								class MissileModeNorm
								{
									type = "text";
									source = "static";
									text = "NORM";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.995,0.33},1};
									right[] = {{1.022,0.33},1};
									down[] = {{0.995,0.36},1};
								};
								class SAL
								{
									condition = "aamissile";
									class MissileTypeSAL
									{
										type = "text";
										source = "static";
										text = "SAL";
										scale = 1;
										sourceScale = 1;
										align = "left";
										pos[] = {{0.995,0.21},1};
										right[] = {{1.022,0.21},1};
										down[] = {{0.995,0.24},1};
									};
									class MissileTrajectory
									{
										type = "text";
										source = "static";
										text = "TRAJ";
										scale = 1;
										sourceScale = 1;
										align = "left";
										pos[] = {{0.995,0.41},1};
										right[] = {{1.022,0.41},1};
										down[] = {{0.995,0.44},1};
									};
									class DIR
									{
										condition = "(user10<=2)";
										class MissileMode
										{
											type = "text";
											source = "static";
											text = "DIR";
											scale = 1;
											sourceScale = 1;
											align = "left";
											pos[] = {{0.995,0.45},1};
											right[] = {{1.022,0.45},1};
											down[] = {{0.995,0.48},1};
										};
									};
									class LO
									{
										condition = "(user10>=3)*(user10<=3)";
										class MissileMode
										{
											type = "text";
											source = "static";
											text = "LO";
											scale = 1;
											sourceScale = 1;
											align = "left";
											pos[] = {{0.995,0.45},1};
											right[] = {{1.022,0.45},1};
											down[] = {{0.995,0.48},1};
										};
									};
									class HI
									{
										condition = "(user10>=4)";
										class MissileMode
										{
											type = "text";
											source = "static";
											text = "HI";
											scale = 1;
											sourceScale = 1;
											align = "left";
											pos[] = {{0.995,0.45},1};
											right[] = {{1.022,0.45},1};
											down[] = {{0.995,0.48},1};
										};
									};
									class PrimaryLaser
									{
										type = "text";
										source = "static";
										text = " PRI";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.005,0.17},1};
										right[] = {{0.032,0.17},1};
										down[] = {{0.005,0.2},1};
									};
									class PrimaryLaserValue
									{
										type = "text";
										source = "static";
										text = "B";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.01,0.21},1};
										right[] = {{0.037,0.21},1};
										down[] = {{0.01,0.24},1};
									};
									class PrimaryLaserValue1
									{
										type = "text";
										source = "static";
										text = "PRF";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.055,0.21},1};
										right[] = {{0.082,0.21},1};
										down[] = {{0.055,0.24},1};
									};
									class AlternativeLaser
									{
										type = "text";
										source = "static";
										text = " ALT";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.005,0.29},1};
										right[] = {{0.032,0.29},1};
										down[] = {{0.005,0.32},1};
									};
									class AlternativeLaserValue
									{
										type = "text";
										source = "static";
										text = "G";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.01,0.33},1};
										right[] = {{0.037,0.33},1};
										down[] = {{0.01,0.36},1};
									};
									class AlternativeLaserValue1
									{
										type = "text";
										source = "static";
										text = "PIM";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.055,0.33},1};
										right[] = {{0.082,0.33},1};
										down[] = {{0.055,0.36},1};
									};
									class SAL_Selected
									{
										type = "text";
										source = "static";
										text = "SAL SEL";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.005,0.41},1};
										right[] = {{0.032,0.41},1};
										down[] = {{0.005,0.44},1};
									};
									class Deice
									{
										type = "text";
										source = "static";
										text = "DEICE";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.005,0.683},1};
										right[] = {{0.032,0.683},1};
										down[] = {{0.005,0.713},1};
									};
									class MissileCounterCounterMeasuers
									{
										type = "text";
										source = "static";
										text = "   MSL CCM";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.005,0.8},1};
										right[] = {{0.032,0.8},1};
										down[] = {{0.005,0.83},1};
									};
									class Channels
									{
										type = "text";
										source = "static";
										text = "CHANNELS";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.78},1};
										right[] = {{0.529,0.78},1};
										down[] = {{0.503,0.808},1};
									};
									class Channels_a1
									{
										type = "text";
										source = "static";
										text = "1";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.33,0.84},1};
										right[] = {{0.356,0.84},1};
										down[] = {{0.33,0.868},1};
									};
									class Channels_a2
									{
										type = "text";
										source = "static";
										text = "A";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.33,0.88},1};
										right[] = {{0.356,0.88},1};
										down[] = {{0.33,0.908},1};
									};
									class Channels_b1
									{
										type = "text";
										source = "static";
										text = "";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.445,0.84},1};
										right[] = {{0.471,0.84},1};
										down[] = {{0.445,0.868},1};
									};
									class Channels_b2
									{
										type = "text";
										source = "static";
										text = "";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.445,0.88},1};
										right[] = {{0.471,0.88},1};
										down[] = {{0.445,0.908},1};
									};
									class Channels_c1
									{
										type = "text";
										source = "static";
										text = "3";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.555,0.84},1};
										right[] = {{0.581,0.84},1};
										down[] = {{0.555,0.868},1};
									};
									class Channels_c2
									{
										type = "text";
										source = "static";
										text = "D";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.555,0.88},1};
										right[] = {{0.581,0.88},1};
										down[] = {{0.555,0.908},1};
									};
									class Channels_d1
									{
										type = "text";
										source = "static";
										text = "ALT";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.67,0.84},1};
										right[] = {{0.696,0.84},1};
										down[] = {{0.67,0.868},1};
									};
									class Channels_d2
									{
										type = "text";
										source = "static";
										text = "G";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.67,0.88},1};
										right[] = {{0.696,0.88},1};
										down[] = {{0.67,0.908},1};
									};
									class White
									{
										color[] = {1,1,1};
										class Channels_b1
										{
											type = "text";
											source = "static";
											text = "PRI";
											scale = 1;
											sourceScale = 1;
											align = "center";
											pos[] = {{0.445,0.84},1};
											right[] = {{0.471,0.84},1};
											down[] = {{0.445,0.868},1};
										};
										class Channels_b2
										{
											type = "text";
											source = "static";
											text = "B";
											scale = 1;
											sourceScale = 1;
											align = "center";
											pos[] = {{0.445,0.88},1};
											right[] = {{0.471,0.88},1};
											down[] = {{0.445,0.908},1};
										};
										class Static
										{
											type = "line";
											width = 5.0;
											points[] = {{{0.487527,0.918856},1},{{0.403945,0.918856},1},{{0.403945,0.822338},1},{{0.487527,0.822338},1},{{0.487527,0.918856},1},{}};
										};
									};
									class Static
									{
										type = "line";
										width = 5.0;
										points[] = {{{0.0372786,0.364627},1},{{0.00543781,0.364627},1},{{0.00543781,0.324826},1},{{0.0372786,0.324826},1},{{0.0372786,0.364627},1},{},{{0.0372786,0.241244},1},{{0.00543781,0.241244},1},{{0.00543781,0.201443},1},{{0.0372786,0.201443},1},{{0.0372786,0.241244},1},{},{{0.0293184,0.818856},1},{{0.0218557,0.824328},1},{{0.013398,0.820348},1},{{0.0129005,0.810896},1},{{0.0203632,0.80592},1},{{0.0288209,0.809901},1},{{0.0293184,0.818856},1},{},{{0.998473,0.48602},1},{{0.922851,0.48602},1},{{0.922851,0.446716},1},{{0.998473,0.446716},1},{{0.998473,0.48602},1},{},{{0.998473,0.241741},1},{{0.922851,0.241741},1},{{0.922851,0.20194},1},{{0.998473,0.20194},1},{{0.998473,0.241741},1},{},{{0.27509,0.788507},1},{{0.276582,0.780547},1},{{0.280065,0.775572},1},{{0.286035,0.769602},1},{{0.292005,0.766617},1},{{0.29698,0.765124},1},{{0.70494,0.765622},1},{{0.709418,0.767114},1},{{0.713895,0.768607},1},{{0.718373,0.771095},1},{{0.722353,0.775075},1},{{0.724841,0.778557},1},{{0.726333,0.78204},1},{{0.727826,0.787015},1},{{0.727826,0.788507},1},{{0.727826,0.9099},1},{{0.726831,0.913383},1},{{0.725338,0.916368},1},{{0.723348,0.919353},1},{{0.721358,0.921841},1},{{0.717876,0.925821},1},{{0.714891,0.927811},1},{{0.7129,0.928308},1},{{0.709915,0.929801},1},{{0.704443,0.930299},1},{{0.297975,0.930299},1},{{0.294493,0.929801},1},{{0.290015,0.928806},1},{{0.284542,0.924826},1},{{0.280562,0.921343},1},{{0.277577,0.917363},1},{{0.275587,0.912388},1},{{0.27509,0.909403},1},{{0.27509,0.788507},1},{},{{0.709915,0.918856},1},{{0.626333,0.918856},1},{{0.626333,0.822338},1},{{0.709915,0.822338},1},{{0.709915,0.918856},1},{}};
									};
								};
								class RF
								{
									condition = "atmissile";
									class MissileTypeSAL
									{
										type = "text";
										source = "static";
										text = "RF";
										scale = 1;
										sourceScale = 1;
										align = "left";
										pos[] = {{0.995,0.21},1};
										right[] = {{1.022,0.21},1};
										down[] = {{0.995,0.24},1};
									};
									class LOBL_INHIBIT
									{
										type = "text";
										source = "static";
										text = "LOBL INHIBIT";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.005,0.683},1};
										right[] = {{0.032,0.683},1};
										down[] = {{0.005,0.713},1};
									};
									class Target_Inhibit
									{
										type = "text";
										source = "static";
										text = "2ND TARGET INHIBIT";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.005,0.8},1};
										right[] = {{0.032,0.8},1};
										down[] = {{0.005,0.83},1};
									};
									class Missile_Power_1
									{
										type = "text";
										source = "static";
										text = "ALL";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.009,0.19},1};
										right[] = {{0.036,0.19},1};
										down[] = {{0.009,0.22},1};
									};
									class Missile_Power_2
									{
										type = "text";
										source = "static";
										text = "AUTO";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.009,0.313},1};
										right[] = {{0.036,0.313},1};
										down[] = {{0.009,0.343},1};
									};
									class Missile_Power_3
									{
										type = "text";
										source = "static";
										text = "NONE";
										scale = 1;
										sourceScale = 1;
										align = "right";
										pos[] = {{0.009,0.436},1};
										right[] = {{0.036,0.436},1};
										down[] = {{0.009,0.466},1};
									};
									class Missile_Power_V1
									{
										type = "text";
										source = "static";
										text = "M";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.222},1};
										right[] = {{0.165,0.222},1};
										down[] = {{0.135,0.249},1};
									};
									class Missile_Power_V2
									{
										type = "text";
										source = "static";
										text = "S";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.252},1};
										right[] = {{0.165,0.252},1};
										down[] = {{0.135,0.279},1};
									};
									class Missile_Power_V3
									{
										type = "text";
										source = "static";
										text = "L";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.282},1};
										right[] = {{0.165,0.282},1};
										down[] = {{0.135,0.309},1};
									};
									class Missile_Power_V4
									{
										type = "text";
										source = "static";
										text = " ";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.312},1};
										right[] = {{0.165,0.312},1};
										down[] = {{0.135,0.339},1};
									};
									class Missile_Power_V5
									{
										type = "text";
										source = "static";
										text = "P";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.342},1};
										right[] = {{0.165,0.342},1};
										down[] = {{0.135,0.369},1};
									};
									class Missile_Power_V6
									{
										type = "text";
										source = "static";
										text = "W";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.372},1};
										right[] = {{0.165,0.372},1};
										down[] = {{0.135,0.399},1};
									};
									class Missile_Power_V7
									{
										type = "text";
										source = "static";
										text = "R";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.402},1};
										right[] = {{0.165,0.402},1};
										down[] = {{0.135,0.429},1};
									};
									class Missile_Power_V8
									{
										type = "text";
										source = "static";
										text = " ";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.135,0.432},1};
										right[] = {{0.165,0.432},1};
										down[] = {{0.135,0.459},1};
									};
									class Static
									{
										type = "line";
										width = 5.0;
										points[] = {{{0.99897,0.241741},1},{{0.945736,0.241741},1},{{0.945736,0.20194},1},{{0.99897,0.20194},1},{{0.99897,0.241741},1},{},{{0.103448,0.345224},1},{{0.00643284,0.345224},1},{{0.00643284,0.30592},1},{{0.103448,0.30592},1},{{0.103448,0.345224},1},{},{{0.0109104,0.510398},1},{{0.126831,0.510398},1},{{0.126831,0.434279},1},{},{{0.0109104,0.139751},1},{{0.126831,0.139751},1},{{0.126831,0.216368},1},{}};
									};
								};
								class Static
								{
									type = "line";
									width = 5.0;
									points[] = {{{0.998473,0.365124},1},{{0.896483,0.365124},1},{{0.896483,0.324826},1},{{0.998473,0.324826},1},{{0.998473,0.365124},1},{},{{0.475587,0.99597},1},{{0.399468,0.99597},1},{{0.399468,0.955672},1},{{0.475587,0.955672},1},{{0.475587,0.99597},1},{}};
								};
							};
							class Pylon1
							{
								type = "pylonicon";
								pos[] = {{0.13,0.45},1};
								pylon = 1;
								name = "RHS_AH64_Weap_MFD";
							};
							class Pylon2: Pylon1
							{
								pos[] = {{0.263,0.45},1};
								pylon = 2;
							};
							class Pylon3: Pylon1
							{
								pos[] = {{0.37,0.45},1};
								pylon = 3;
							};
							class Pylon4: Pylon1
							{
								pos[] = {{0.64,0.45},1};
								pylon = 4;
							};
							class Pylon5: Pylon1
							{
								pos[] = {{0.742,0.45},1};
								pylon = 5;
							};
							class Pylon6: Pylon1
							{
								pos[] = {{0.82,0.45},1};
								pylon = 6;
							};
							class ChaffText
							{
								type = "text";
								source = "static";
								text = "CHAFF";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.503,0.61},1};
								right[] = {{0.527,0.61},1};
								down[] = {{0.503,0.637},1};
							};
							class ChaffCount
							{
								type = "text";
								source = "cmammo";
								sourceIndex = 1;
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.503,0.644},1};
								right[] = {{0.527,0.644},1};
								down[] = {{0.503,0.671},1};
							};
							class FlareText
							{
								type = "text";
								source = "static";
								text = "FLARE";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.503,0.678},1};
								right[] = {{0.527,0.678},1};
								down[] = {{0.503,0.705},1};
							};
							class FlareCount
							{
								type = "text";
								source = "cmammo";
								sourceIndex = 1;
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.503,0.712},1};
								right[] = {{0.527,0.712},1};
								down[] = {{0.503,0.739},1};
							};
							class Train
							{
								type = "text";
								source = "static";
								text = "TRAIN";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.555},1};
								right[] = {{1.022,0.555},1};
								down[] = {{0.995,0.585},1};
							};
							class LRFD_1
							{
								type = "text";
								source = "static";
								text = "LRFD";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.66},1};
								right[] = {{1.022,0.66},1};
								down[] = {{0.995,0.69},1};
							};
							class LRFD_2
							{
								type = "text";
								source = "static";
								text = "FIRST";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.7},1};
								right[] = {{1.022,0.7},1};
								down[] = {{0.995,0.73},1};
							};
							class ACQ_1
							{
								type = "text";
								source = "static";
								text = "ACQ";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.781},1};
								right[] = {{1.022,0.781},1};
								down[] = {{0.995,0.811},1};
							};
							class ACQ_2
							{
								type = "text";
								source = "static";
								text = "T32";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.821},1};
								right[] = {{1.022,0.821},1};
								down[] = {{0.995,0.851},1};
							};
							class Acquistion_1
							{
								type = "text";
								source = "static";
								text = "ACQ";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.685,0.133},1};
								right[] = {{0.712,0.133},1};
								down[] = {{0.685,0.163},1};
							};
							class Acquistion_2
							{
								type = "text";
								source = "static";
								text = "T32";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.685,0.173},1};
								right[] = {{0.712,0.173},1};
								down[] = {{0.685,0.203},1};
							};
							class LaserRangeFinderChannel_1
							{
								type = "text";
								source = "static";
								text = "LRFD";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.695,0.26},1};
								right[] = {{0.722,0.26},1};
								down[] = {{0.695,0.29},1};
							};
							class LaserRangeFinderChannel_2
							{
								type = "text";
								source = "static";
								text = "B";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.695,0.295},1};
								right[] = {{0.722,0.295},1};
								down[] = {{0.695,0.325},1};
							};
							class Sight_1
							{
								type = "text";
								source = "static";
								text = "SIGHT";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.32,0.133},1};
								right[] = {{0.347,0.133},1};
								down[] = {{0.32,0.163},1};
							};
							class Sight
							{
								condition = "1-activeSensorsOn";
								class Sight_2
								{
									type = "text";
									source = "static";
									text = "TADS";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.32,0.173},1};
									right[] = {{0.347,0.173},1};
									down[] = {{0.32,0.203},1};
								};
							};
							class Radar
							{
								condition = "activeSensorsOn";
								class Sight_2
								{
									type = "text";
									source = "static";
									text = "FCR";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.32,0.173},1};
									right[] = {{0.347,0.173},1};
									down[] = {{0.32,0.203},1};
								};
							};
							class LaserTrackerChannel_1
							{
								type = "text";
								source = "static";
								text = "LST";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.31,0.26},1};
								right[] = {{0.337,0.26},1};
								down[] = {{0.31,0.29},1};
							};
							class LaserTrackerChannel_2
							{
								type = "text";
								source = "static";
								text = "G";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.31,0.295},1};
								right[] = {{0.337,0.295},1};
								down[] = {{0.31,0.325},1};
							};
							class WeaponBottom
							{
								type = "text";
								source = "static";
								text = "WPN";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.21,0.963},1};
								right[] = {{0.235,0.963},1};
								down[] = {{0.21,0.993},1};
							};
							class GunBottom
							{
								type = "text";
								source = "static";
								text = "GUN";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.34,0.963},1};
								right[] = {{0.365,0.963},1};
								down[] = {{0.34,0.993},1};
							};
							class MslBottom
							{
								type = "text";
								source = "static";
								text = "MSL";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.47,0.963},1};
								right[] = {{0.495,0.963},1};
								down[] = {{0.47,0.993},1};
							};
							class AtaBottom
							{
								type = "text";
								source = "static";
								text = "ATA";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.595,0.963},1};
								right[] = {{0.62,0.963},1};
								down[] = {{0.595,0.993},1};
							};
							class RktBottom
							{
								type = "text";
								source = "static";
								text = "RKT";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.73,0.963},1};
								right[] = {{0.755,0.963},1};
								down[] = {{0.73,0.993},1};
							};
							class Channel
							{
								type = "text";
								source = "static";
								text = "CHAN";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.21,0.03},1};
								right[] = {{0.24,0.03},1};
								down[] = {{0.21,0.06},1};
							};
							class ASE
							{
								type = "text";
								source = "static";
								text = "ASE";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.34,0.03},1};
								right[] = {{0.37,0.03},1};
								down[] = {{0.34,0.06},1};
							};
							class LaserCodes
							{
								type = "text";
								source = "static";
								text = "CODE";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.61,0.03},1};
								right[] = {{0.64,0.03},1};
								down[] = {{0.61,0.06},1};
							};
							class Coordinates
							{
								type = "text";
								source = "static";
								text = "COORD";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.77,0.03},1};
								right[] = {{0.8,0.03},1};
								down[] = {{0.77,0.06},1};
							};
							class Utilities
							{
								type = "text";
								source = "static";
								text = "UTIL";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.89,0.03},1};
								right[] = {{0.92,0.03},1};
								down[] = {{0.89,0.06},1};
							};
						};
						class Laser
						{
							condition = "((bomb+mgun+atmissile+aamissile+rocket)<=0)*(ammo>=1)";
							class Static
							{
								type = "line";
								width = 5.0;
								points[] = {{{0.0372786,0.201443},1},{{0.00643284,0.201443},1},{{0.00643284,0.162139},1},{{0.0372786,0.162139},1},{{0.0372786,0.201443},1},{},{{0.224841,0.0556716},1},{{0.127826,0.0556716},1},{{0.127826,0.00243781},1},{{0.224841,0.00243781},1},{{0.224841,0.0556716},1},{},{{0.322353,0.0626368},1},{{0.29101,0.0626368},1},{{0.29101,0.0223383},1},{{0.322353,0.0223383},1},{{0.322353,0.0626368},1},{},{{0.454194,0.0626368},1},{{0.422851,0.0626368},1},{{0.422851,0.0223383},1},{{0.454194,0.0223383},1},{{0.454194,0.0626368},1},{},{{0.715388,0.0626368},1},{{0.684045,0.0626368},1},{{0.684045,0.0223383},1},{{0.715388,0.0223383},1},{{0.715388,0.0626368},1},{},{{0.584542,0.0626368},1},{{0.552701,0.0626368},1},{{0.552701,0.0223383},1},{{0.584542,0.0223383},1},{{0.584542,0.0626368},1},{},{{0.440264,0.177562},1},{{0.563647,0.177562},1},{{0.568622,0.18005},1},{{0.576582,0.186517},1},{{0.577577,0.190498},1},{{0.577577,0.212886},1},{{0.576582,0.216866},1},{{0.568622,0.223333},1},{{0.564144,0.225323},1},{{0.440264,0.225323},1},{{0.436284,0.223333},1},{{0.428821,0.216866},1},{{0.427826,0.212388},1},{{0.427826,0.190498},1},{{0.428821,0.18602},1},{{0.432303,0.18005},1},{{0.440264,0.177562},1},{},{{0.273597,0.253184},1},{{0.749219,0.253184},1},{{0.757179,0.256169},1},{{0.761657,0.262139},1},{{0.762154,0.266119},1},{{0.762154,0.671095},1},{{0.759169,0.678557},1},{{0.753697,0.683035},1},{{0.749716,0.68403},1},{{0.275587,0.68403},1},{{0.271109,0.683035},1},{{0.265139,0.678557},1},{{0.262652,0.670597},1},{{0.262652,0.262637},1},{{0.263149,0.258159},1},{{0.269119,0.254677},1},{{0.273597,0.253184},1},{},{{0.555687,0.295473},1},{{0.688025,0.295473},1},{},{{0.272104,0.295473},1},{{0.512403,0.295473},1},{},{{0.236781,0.991493},1},{{0.236781,0.896468},1},{{0.770612,0.896468},1},{{0.770612,0.991493},1},{},{{0.771109,0.00791045},1},{{0.771109,0.0855224},1},{{0.584542,0.0855224},1},{},{{0.236284,0.00791045},1},{{0.236284,0.0855224},1},{{0.422851,0.0855224},1},{},{{0.993995,0.138756},1},{{0.881557,0.138756},1},{{0.881557,0.878557},1},{{0.993995,0.878557},1},{},{{0.0104129,0.138756},1},{{0.122851,0.138756},1},{{0.122851,0.878557},1},{{0.0104129,0.878557},1},{},{{0.785,0.014},1},{{0.87,0.014},1},{},{{0.135,0.014},1},{{0.22,0.014},1},{}};
							};
							class Polygons
							{
								type = "polygon";
								width = 4.0;
								points[] = {{{{0.858,0.0068},1},{{0.878,0.014},1},{{0.858,0.0212},1}},{{{0.2,0.0068},1},{{0.22,0.014},1},{{0.2,0.0212},1}},{{{-0.013,0.41},1},{{0.007,0.41},1},{{0.007,0.49},1},{{-0.013,0.49},1}},{{{-0.013,0.535},1},{{0.007,0.535},1},{{0.007,0.615},1},{{-0.013,0.615},1}},{{{-0.013,0.78},1},{{0.007,0.78},1},{{0.007,0.86},1},{{-0.013,0.86},1}}};
							};
							class Channel
							{
								type = "text";
								source = "static";
								text = "CHAN";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.22,0.025},1};
								right[] = {{0.246,0.025},1};
								down[] = {{0.22,0.052},1};
							};
							class Utilities
							{
								type = "text";
								source = "static";
								text = "UTIL";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.875,0.025},1};
								right[] = {{0.901,0.025},1};
								down[] = {{0.875,0.055},1};
							};
							class Chn1
							{
								type = "text";
								source = "static";
								text = "1";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.315,0.028},1};
								right[] = {{0.341,0.028},1};
								down[] = {{0.315,0.056},1};
							};
							class Chn2
							{
								type = "text";
								source = "static";
								text = "2";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.45,0.028},1};
								right[] = {{0.476,0.028},1};
								down[] = {{0.45,0.056},1};
							};
							class Chn3
							{
								type = "text";
								source = "static";
								text = "3";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.58,0.028},1};
								right[] = {{0.606,0.028},1};
								down[] = {{0.58,0.056},1};
							};
							class Chn4
							{
								type = "text";
								source = "static";
								text = "4";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.712,0.028},1};
								right[] = {{0.738,0.028},1};
								down[] = {{0.712,0.056},1};
							};
							class Chn_A
							{
								type = "text";
								source = "static";
								text = "A";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.17},1};
								right[] = {{0.036,0.17},1};
								down[] = {{0.009,0.2},1};
							};
							class Chn_A_Value
							{
								type = "text";
								source = "static";
								text = "1111";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.21},1};
								right[] = {{0.036,0.21},1};
								down[] = {{0.009,0.24},1};
							};
							class Chn_B
							{
								type = "text";
								source = "static";
								text = "B";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.293},1};
								right[] = {{0.036,0.293},1};
								down[] = {{0.009,0.323},1};
							};
							class Chn_B_Value
							{
								type = "text";
								source = "static";
								text = "2111";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.333},1};
								right[] = {{0.036,0.333},1};
								down[] = {{0.009,0.363},1};
							};
							class Chn_C
							{
								type = "text";
								source = "static";
								text = "C";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.416},1};
								right[] = {{0.036,0.416},1};
								down[] = {{0.009,0.446},1};
							};
							class Chn_C_Value
							{
								type = "text";
								source = "static";
								text = "4121";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.456},1};
								right[] = {{0.036,0.456},1};
								down[] = {{0.009,0.486},1};
							};
							class Chn_D
							{
								type = "text";
								source = "static";
								text = "D";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.539},1};
								right[] = {{0.036,0.539},1};
								down[] = {{0.009,0.569},1};
							};
							class Chn_D_Value
							{
								type = "text";
								source = "static";
								text = "4311";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.579},1};
								right[] = {{0.036,0.579},1};
								down[] = {{0.009,0.609},1};
							};
							class Chn_E
							{
								type = "text";
								source = "static";
								text = "E";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.662},1};
								right[] = {{0.036,0.662},1};
								down[] = {{0.009,0.692},1};
							};
							class Chn_E_Value
							{
								type = "text";
								source = "static";
								text = "4511";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.702},1};
								right[] = {{0.036,0.702},1};
								down[] = {{0.009,0.732},1};
							};
							class Chn_F
							{
								type = "text";
								source = "static";
								text = "F";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.785},1};
								right[] = {{0.036,0.785},1};
								down[] = {{0.009,0.815},1};
							};
							class Chn_F_Value
							{
								type = "text";
								source = "static";
								text = "4711";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.009,0.825},1};
								right[] = {{0.036,0.825},1};
								down[] = {{0.009,0.855},1};
							};
							class Chn_G
							{
								type = "text";
								source = "static";
								text = "G";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.311,0.923},1};
								right[] = {{0.337,0.923},1};
								down[] = {{0.311,0.951},1};
							};
							class Chn_G_Value
							{
								type = "text";
								source = "static";
								text = "5111";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.311,0.965},1};
								right[] = {{0.337,0.965},1};
								down[] = {{0.311,0.993},1};
							};
							class Chn_H
							{
								type = "text";
								source = "static";
								text = "H";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.44,0.923},1};
								right[] = {{0.466,0.923},1};
								down[] = {{0.44,0.951},1};
							};
							class Chn_H_Value
							{
								type = "text";
								source = "static";
								text = "5311";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.44,0.965},1};
								right[] = {{0.466,0.965},1};
								down[] = {{0.44,0.993},1};
							};
							class Chn_J
							{
								type = "text";
								source = "static";
								text = "J";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.57,0.923},1};
								right[] = {{0.596,0.923},1};
								down[] = {{0.57,0.951},1};
							};
							class Chn_J_Value
							{
								type = "text";
								source = "static";
								text = "5511";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.57,0.965},1};
								right[] = {{0.596,0.965},1};
								down[] = {{0.57,0.993},1};
							};
							class Chn_K
							{
								type = "text";
								source = "static";
								text = "K";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.702,0.923},1};
								right[] = {{0.728,0.923},1};
								down[] = {{0.702,0.951},1};
							};
							class Chn_K_Value
							{
								type = "text";
								source = "static";
								text = "5711";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.702,0.965},1};
								right[] = {{0.728,0.965},1};
								down[] = {{0.702,0.993},1};
							};
							class Chn_R
							{
								type = "text";
								source = "static";
								text = "R";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.17},1};
								right[] = {{1.022,0.17},1};
								down[] = {{0.995,0.2},1};
							};
							class Chn_R_Value
							{
								type = "text";
								source = "static";
								text = "1788";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.21},1};
								right[] = {{1.022,0.21},1};
								down[] = {{0.995,0.24},1};
							};
							class Chn_Q
							{
								type = "text";
								source = "static";
								text = "Q";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.293},1};
								right[] = {{1.022,0.293},1};
								down[] = {{0.995,0.323},1};
							};
							class Chn_Q_Value
							{
								type = "text";
								source = "static";
								text = "1782";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.333},1};
								right[] = {{1.022,0.333},1};
								down[] = {{0.995,0.363},1};
							};
							class Chn_P
							{
								type = "text";
								source = "static";
								text = "P";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.416},1};
								right[] = {{1.022,0.416},1};
								down[] = {{0.995,0.446},1};
							};
							class Chn_P_Value
							{
								type = "text";
								source = "static";
								text = "1777";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.456},1};
								right[] = {{1.022,0.456},1};
								down[] = {{0.995,0.486},1};
							};
							class Chn_N
							{
								type = "text";
								source = "static";
								text = "N";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.539},1};
								right[] = {{1.022,0.539},1};
								down[] = {{0.995,0.569},1};
							};
							class Chn_N_Value
							{
								type = "text";
								source = "static";
								text = "1732";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.579},1};
								right[] = {{1.022,0.579},1};
								down[] = {{0.995,0.609},1};
							};
							class Chn_M
							{
								type = "text";
								source = "static";
								text = "M";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.662},1};
								right[] = {{1.022,0.662},1};
								down[] = {{0.995,0.692},1};
							};
							class Chn_M_Value
							{
								type = "text";
								source = "static";
								text = "1666";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.702},1};
								right[] = {{1.022,0.702},1};
								down[] = {{0.995,0.732},1};
							};
							class Chn_L
							{
								type = "text";
								source = "static";
								text = "L";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.785},1};
								right[] = {{1.022,0.785},1};
								down[] = {{0.995,0.815},1};
							};
							class Chn_L_Value
							{
								type = "text";
								source = "static";
								text = "1621";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.995,0.825},1};
								right[] = {{1.022,0.825},1};
								down[] = {{0.995,0.855},1};
							};
							class Channel_Middle
							{
								type = "text";
								source = "static";
								text = "CHANNEL";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.505,0.085},1};
								right[] = {{0.53,0.085},1};
								down[] = {{0.505,0.115},1};
							};
							class Channel_3
							{
								type = "text";
								source = "static";
								text = "CHAN  3";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.505,0.188},1};
								right[] = {{0.531,0.188},1};
								down[] = {{0.505,0.218},1};
							};
							class CodeRanges
							{
								type = "text";
								source = "static";
								text = "CODE  RANGES";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.27,0.263},1};
								right[] = {{0.296,0.263},1};
								down[] = {{0.27,0.291},1};
							};
							class Status
							{
								type = "text";
								source = "static";
								text = "STATUS";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.555,0.263},1};
								right[] = {{0.581,0.263},1};
								down[] = {{0.555,0.291},1};
							};
							class CodeRanges_1
							{
								type = "text";
								source = "static";
								text = "1111";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.307},1};
								right[] = {{0.3,0.307},1};
								down[] = {{0.273,0.335},1};
							};
							class CodeRanges_2
							{
								type = "text";
								source = "static";
								text = "2111";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.3449},1};
								right[] = {{0.3,0.3449},1};
								down[] = {{0.273,0.3729},1};
							};
							class CodeRanges_3
							{
								type = "text";
								source = "static";
								text = "4111";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.3828},1};
								right[] = {{0.3,0.3828},1};
								down[] = {{0.273,0.4108},1};
							};
							class CodeRanges_4
							{
								type = "text";
								source = "static";
								text = "4311";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.4207},1};
								right[] = {{0.3,0.4207},1};
								down[] = {{0.273,0.4487},1};
							};
							class CodeRanges_5
							{
								type = "text";
								source = "static";
								text = "4511";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.4586},1};
								right[] = {{0.3,0.4586},1};
								down[] = {{0.273,0.4866},1};
							};
							class CodeRanges_6
							{
								type = "text";
								source = "static";
								text = "4711";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.4965},1};
								right[] = {{0.3,0.4965},1};
								down[] = {{0.273,0.5245},1};
							};
							class CodeRanges_7
							{
								type = "text";
								source = "static";
								text = "5111";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.5344},1};
								right[] = {{0.3,0.5344},1};
								down[] = {{0.273,0.5624},1};
							};
							class CodeRanges_8
							{
								type = "text";
								source = "static";
								text = "5311";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.5723},1};
								right[] = {{0.3,0.5723},1};
								down[] = {{0.273,0.6003},1};
							};
							class CodeRanges_9
							{
								type = "text";
								source = "static";
								text = "5511";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.6102},1};
								right[] = {{0.3,0.6102},1};
								down[] = {{0.273,0.6382},1};
							};
							class CodeRanges_10
							{
								type = "text";
								source = "static";
								text = "5711";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.273,0.6481},1};
								right[] = {{0.3,0.6481},1};
								down[] = {{0.273,0.6761},1};
							};
							class CodeRanges_Mid_1
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.307},1};
								right[] = {{0.41,0.307},1};
								down[] = {{0.383,0.335},1};
							};
							class CodeRanges_Mid_2
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.3449},1};
								right[] = {{0.41,0.3449},1};
								down[] = {{0.383,0.3729},1};
							};
							class CodeRanges_Mid_3
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.3828},1};
								right[] = {{0.41,0.3828},1};
								down[] = {{0.383,0.4108},1};
							};
							class CodeRanges_Mid_4
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.4207},1};
								right[] = {{0.41,0.4207},1};
								down[] = {{0.383,0.4487},1};
							};
							class CodeRanges_Mid_5
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.4586},1};
								right[] = {{0.41,0.4586},1};
								down[] = {{0.383,0.4866},1};
							};
							class CodeRanges_Mid_6
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.4965},1};
								right[] = {{0.41,0.4965},1};
								down[] = {{0.383,0.5245},1};
							};
							class CodeRanges_Mid_7
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.5344},1};
								right[] = {{0.41,0.5344},1};
								down[] = {{0.383,0.5624},1};
							};
							class CodeRanges_Mid_8
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.5723},1};
								right[] = {{0.41,0.5723},1};
								down[] = {{0.383,0.6003},1};
							};
							class CodeRanges_Mid_9
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.6102},1};
								right[] = {{0.41,0.6102},1};
								down[] = {{0.383,0.6382},1};
							};
							class CodeRanges_Mid_10
							{
								type = "text";
								source = "static";
								text = "-";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.383,0.6481},1};
								right[] = {{0.41,0.6481},1};
								down[] = {{0.383,0.6761},1};
							};
							class CodeRanges_Right_1
							{
								type = "text";
								source = "static";
								text = "1788";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.307},1};
								right[] = {{0.45,0.307},1};
								down[] = {{0.423,0.335},1};
							};
							class CodeRanges_Right_2
							{
								type = "text";
								source = "static";
								text = "2888";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.3449},1};
								right[] = {{0.45,0.3449},1};
								down[] = {{0.423,0.3729},1};
							};
							class CodeRanges_Right_3
							{
								type = "text";
								source = "static";
								text = "4288";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.3828},1};
								right[] = {{0.45,0.3828},1};
								down[] = {{0.423,0.4108},1};
							};
							class CodeRanges_Right_4
							{
								type = "text";
								source = "static";
								text = "4488";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.4207},1};
								right[] = {{0.45,0.4207},1};
								down[] = {{0.423,0.4487},1};
							};
							class CodeRanges_Right_5
							{
								type = "text";
								source = "static";
								text = "4688";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.4586},1};
								right[] = {{0.45,0.4586},1};
								down[] = {{0.423,0.4866},1};
							};
							class CodeRanges_Right_6
							{
								type = "text";
								source = "static";
								text = "4888";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.4965},1};
								right[] = {{0.45,0.4965},1};
								down[] = {{0.423,0.5245},1};
							};
							class CodeRanges_Right_7
							{
								type = "text";
								source = "static";
								text = "5288";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.5344},1};
								right[] = {{0.45,0.5344},1};
								down[] = {{0.423,0.5624},1};
							};
							class CodeRanges_Right_8
							{
								type = "text";
								source = "static";
								text = "5488";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.5723},1};
								right[] = {{0.45,0.5723},1};
								down[] = {{0.423,0.6003},1};
							};
							class CodeRanges_Right_9
							{
								type = "text";
								source = "static";
								text = "5688";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.6102},1};
								right[] = {{0.45,0.6102},1};
								down[] = {{0.423,0.6382},1};
							};
							class CodeRanges_Right_10
							{
								type = "text";
								source = "static";
								text = "5888";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.423,0.6481},1};
								right[] = {{0.45,0.6481},1};
								down[] = {{0.423,0.6761},1};
							};
							class WeaponBottom
							{
								type = "text";
								source = "static";
								text = "WPN";
								scale = 1;
								sourceScale = 1;
								align = "left";
								pos[] = {{0.21,0.963},1};
								right[] = {{0.235,0.963},1};
								down[] = {{0.21,0.993},1};
							};
						};
					};
				};
				class MFD_Right_Weapons_Gun
				{
					topLeft = "GUNNER_MFD_R_TL";
					topRight = "GUNNER_MFD_R_TR";
					bottomLeft = "GUNNER_MFD_R_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {0};
					class Bones{};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on*(user7>=1)*(user7<=1)";
						class Weapon
						{
							condition = "((mgun+rocket+missile+bomb)>=1)+(ammo<=0)";
							class Safemode
							{
								condition = "1-(mgun)";
								class AmmoCount
								{
									type = "text";
									source = "ammo";
									sourceIndex = 2;
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.503,0.385},1};
									right[] = {{0.533,0.385},1};
									down[] = {{0.503,0.419},1};
								};
							};
							class Selected
							{
								condition = "mgun";
								class Polygons
								{
									type = "polygon";
									width = 4.0;
									points[] = {{{{0.44,0.37},1},{{0.565,0.37},1},{{0.565,0.43},1},{{0.44,0.43},1}},{{{0.48,0.309},1},{{0.525,0.309},1},{{0.525,0.389},1},{{0.48,0.389},1}},{{{0.497,0.23},1},{{0.508,0.23},1},{{0.508,0.39},1},{{0.497,0.39},1}}};
								};
								class BlackText
								{
									color[] = {0,0,0};
									alpha = 1;
									class AmmoCount1
									{
										type = "text";
										source = "ammo";
										sourceIndex = 2;
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.385},1};
										right[] = {{0.533,0.385},1};
										down[] = {{0.503,0.419},1};
									};
									class AmmoCount2
									{
										type = "text";
										source = "ammo";
										sourceIndex = 2;
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.385},1};
										right[] = {{0.533,0.385},1};
										down[] = {{0.503,0.419},1};
									};
									class AmmoCount3
									{
										type = "text";
										source = "ammo";
										sourceIndex = 2;
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.503,0.385},1};
										right[] = {{0.533,0.385},1};
										down[] = {{0.503,0.419},1};
									};
								};
							};
						};
					};
				};
				class MFD_Right_Fuel
				{
					topLeft = "GUNNER_MFD_R_TL";
					topRight = "GUNNER_MFD_R_TR";
					bottomLeft = "GUNNER_MFD_R_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {-2};
					class Bones
					{
						class HUDCenter
						{
							type = "fixed";
							pos[] = {0.5,0.5};
						};
					};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on*(user7>=2)*(user7<=2)";
						class Static
						{
							type = "line";
							width = 5.0;
							points[] = {{{0.128821,0.956169},1},{{0.128821,0.996468},1},{{0.225836,0.996468},1},{{0.225836,0.956169},1},{{0.128821,0.956169},1},{},{{0.00792537,0.569104},1},{{0.00792537,0.608905},1},{{0.105438,0.608905},1},{{0.105438,0.569104},1},{{0.00792537,0.569104},1},{},{{0.923846,0.815871},1},{{0.923846,0.855174},1},{{0.99897,0.855174},1},{{0.99897,0.815871},1},{{0.923846,0.815871},1},{},{{0.901955,0.549204},1},{{0.901955,0.588507},1},{{0.99897,0.588507},1},{{0.99897,0.549204},1},{{0.901955,0.549204},1},{},{{0.417378,0.730796},1},{{0.417378,0.753184},1},{{0.419866,0.757164},1},{{0.425836,0.763632},1},{{0.430313,0.765622},1},{{0.574592,0.765622},1},{{0.579567,0.763134},1},{{0.58504,0.757164},1},{{0.587527,0.753184},1},{{0.587527,0.730796},1},{{0.58504,0.726318},1},{{0.579567,0.720348},1},{{0.574592,0.717861},1},{{0.429816,0.717861},1},{{0.425836,0.720846},1},{{0.419368,0.726318},1},{{0.417378,0.730796},1},{},{{0.68305,0.816368},1},{{0.683547,0.929303},1},{{0.687527,0.937761},1},{{0.695985,0.941741},1},{{0.886532,0.941741},1},{{0.89499,0.937761},1},{{0.899965,0.928806},1},{{0.899965,0.816368},1},{{0.894493,0.808408},1},{{0.886532,0.803433},1},{{0.696483,0.803433},1},{{0.688025,0.80791},1},{{0.68305,0.816368},1},{},{{0.0666318,0.856169},1},{{0.0666318,0.928806},1},{{0.072602,0.937264},1},{{0.0805622,0.942239},1},{{0.306433,0.942239},1},{{0.315388,0.937264},1},{{0.319368,0.929303},1},{{0.319368,0.856169},1},{{0.314891,0.848209},1},{{0.30693,0.842736},1},{{0.0810597,0.842736},1},{{0.0721045,0.847711},1},{{0.0666318,0.856169},1},{},{{0.341756,0.787015},1},{{0.341756,0.967114},1},{{0.344741,0.971095},1},{{0.350214,0.977065},1},{{0.355189,0.98005},1},{{0.647726,0.98005},1},{{0.652204,0.977065},1},{{0.658672,0.971095},1},{{0.661159,0.967114},1},{{0.661159,0.786517},1},{{0.658174,0.783035},1},{{0.652701,0.776567},1},{{0.648224,0.773582},1},{{0.355189,0.773582},1},{{0.350214,0.776567},1},{{0.344741,0.782537},1},{{0.341756,0.787015},1},{},{{0.438771,0.167114},1},{{0.438771,0.235274},1},{{0.443249,0.243234},1},{{0.451706,0.247711},1},{{0.548721,0.247711},1},{{0.556682,0.243234},1},{{0.562154,0.234776},1},{{0.561657,0.167114},1},{{0.557179,0.159154},1},{{0.548721,0.153682},1},{{0.452204,0.153682},1},{{0.443746,0.159154},1},{{0.438771,0.167114},1},{},{{0.446234,0.486517},1},{{0.449716,0.481542},1},{{0.453697,0.48005},1},{{0.457677,0.477562},1},{{0.542751,0.477562},1},{{0.547726,0.479552},1},{{0.551706,0.482537},1},{{0.554194,0.486517},1},{{0.556184,0.49},1},{{0.556184,0.604428},1},{{0.554194,0.609901},1},{{0.551209,0.613383},1},{{0.547229,0.615871},1},{{0.543249,0.618856},1},{{0.457677,0.618856},1},{{0.454194,0.616368},1},{{0.448224,0.611393},1},{{0.444741,0.604925},1},{{0.444741,0.49},1},{{0.446234,0.486517},1},{},{{0.880065,0.708905},1},{{0.880065,0.753682},1},{{0.993,0.753682},1},{},{{0.880065,0.433284},1},{{0.880065,0.386517},1},{{0.993,0.386517},1},{},{{0.8,0.014},1},{{0.87,0.014},1},{},{{0.51,0.014},1},{{0.61,0.014},1},{},{{0.135,0.014},1},{{0.2,0.014},1},{},{{0.265,0.014},1},{{0.33,0.014},1},{}};
						};
						class StaticBold
						{
							type = "line";
							width = 10.0;
							points[] = {{{0.521358,0.622338},1},{{0.521358,0.665124},1},{{0.638771,0.665124},1},{{0.638771,0.604428},1},{},{{0.360662,0.38403},1},{{0.360662,0.212388},1},{{0.434791,0.212388},1},{}};
						};
						class StaticThin
						{
							type = "line";
							width = 2.0;
							points[] = {{{0.60892,0.38602},1},{{0.59698,0.381542},1},{{0.591507,0.368607},1},{{0.59698,0.355672},1},{{0.60892,0.350199},1},{{0.621856,0.355672},1},{{0.626831,0.368109},1},{{0.621358,0.381542},1},{{0.60892,0.38602},1},{},{{0.390512,0.38602},1},{{0.378572,0.381542},1},{{0.3731,0.368607},1},{{0.378572,0.355672},1},{{0.390512,0.350199},1},{{0.403448,0.355672},1},{{0.408423,0.368109},1},{{0.40295,0.381542},1},{{0.390512,0.38602},1},{},{{0.418871,0.602935},1},{{0.418871,0.636269},1},{{0.581557,0.636269},1},{{0.581557,0.602935},1},{},{{0.647726,0.445721},1},{{0.817378,0.426816},1},{{0.817378,0.330299},1},{{0.581557,0.3099},1},{{0.58106,0.156667},1},{{0.57708,0.140249},1},{{0.565139,0.124328},1},{{0.549219,0.112388},1},{{0.541756,0.110896},1},{{0.531806,0.10791},1},{{0.528821,0.0979602},1},{{0.521856,0.0895025},1},{{0.513398,0.0840299},1},{{0.505438,0.0820398},1},{{0.494493,0.0820398},1},{{0.486532,0.0840299},1},{{0.478075,0.0895025},1},{{0.471607,0.0979602},1},{{0.468124,0.10791},1},{{0.458174,0.110896},1},{{0.451209,0.112388},1},{{0.434791,0.124328},1},{{0.422851,0.140249},1},{{0.418871,0.156667},1},{{0.418373,0.3099},1},{{0.182552,0.330299},1},{{0.182552,0.426816},1},{{0.352204,0.445721},1},{},{{0.580065,0.491493},1},{{0.564144,0.598458},1},{{0.655189,0.598458},1},{{0.639766,0.492488},1},{{0.655189,0.38602},1},{{0.564144,0.38602},1},{{0.580065,0.491493},1},{},{{0.360164,0.491493},1},{{0.344741,0.598458},1},{{0.435786,0.598458},1},{{0.420363,0.492488},1},{{0.435786,0.38602},1},{{0.344741,0.38602},1},{{0.360164,0.491493},1},{}};
						};
						class Polygons
						{
							type = "polygon";
							width = 4.0;
							points[] = {{{{0.87,0.0068},1},{{0.89,0.014},1},{{0.87,0.0212},1}},{{{0.59,0.0068},1},{{0.61,0.014},1},{{0.59,0.0212},1}},{{{0.32,0.0068},1},{{0.34,0.014},1},{{0.32,0.0212},1}},{{{0.19,0.0068},1},{{0.21,0.014},1},{{0.19,0.0212},1}}};
						};
						class IntFuel_1
						{
							type = "text";
							source = "static";
							text = "INT ";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.07,0.86},1};
							right[] = {{0.1,0.86},1};
							down[] = {{0.07,0.89},1};
						};
						class Fuel_Total_Ok
						{
							class IntFuel_Total
							{
								type = "text";
								source = "fuel";
								text = "%X";
								sourceScale = 2440;
								sourceLength = 4;
								align = "left";
								scale = 1;
								pos[] = {{0.26,0.855},1};
								right[] = {{0.292,0.855},1};
								down[] = {{0.26,0.89},1};
							};
						};
						class Fuel_Tank_1_Ok: Fuel_Total_Ok
						{
							class IntFuel_Tank1: IntFuel_Total
							{
								align = "center";
								sourceScale = 1010;
								pos[] = {{0.5,0.185},1};
								right[] = {{0.532,0.185},1};
								down[] = {{0.5,0.22},1};
							};
						};
						class Fuel_Tank_2_Ok: Fuel_Tank_1_Ok
						{
							class IntFuel_Tank2: IntFuel_Tank1
							{
								sourceScale = 1430;
								pos[] = {{0.5,0.53},1};
								right[] = {{0.532,0.53},1};
								down[] = {{0.5,0.565},1};
							};
						};
						class Fuel_Total_Low: Fuel_Total_Ok
						{
							color[] = {1,0.3,0};
						};
						class Fuel_Tank_1_Low: Fuel_Tank_1_Ok
						{
							color[] = {1,0.3,0};
						};
						class Fuel_Tank_2_Low: Fuel_Tank_2_Ok
						{
							color[] = {1,0.3,0};
						};
						class IntFuel_2
						{
							type = "text";
							source = "static";
							text = "LB ";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.265,0.86},1};
							right[] = {{0.295,0.86},1};
							down[] = {{0.265,0.89},1};
						};
						class Sfr_1
						{
							type = "text";
							source = "static";
							text = "SFR .16";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.5,0.73},1};
							right[] = {{0.53,0.73},1};
							down[] = {{0.5,0.76},1};
						};
						class CalculateFlow
						{
							type = "text";
							source = "static";
							text = "CALC FLOW";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.5,0.787},1};
							right[] = {{0.53,0.787},1};
							down[] = {{0.5,0.817},1};
						};
						class Flow_Eng1
						{
							type = "text";
							source = "static";
							text = "1";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.42,0.835},1};
							right[] = {{0.447,0.835},1};
							down[] = {{0.42,0.865},1};
						};
						class Flow_Eng2
						{
							type = "text";
							source = "static";
							text = "2";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.42,0.886},1};
							right[] = {{0.447,0.886},1};
							down[] = {{0.42,0.916},1};
						};
						class Flow_Total
						{
							type = "text";
							source = "static";
							text = "TOT";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.42,0.937},1};
							right[] = {{0.447,0.937},1};
							down[] = {{0.42,0.967},1};
						};
						class Flow_EngLBHR1
						{
							type = "text";
							source = "static";
							text = "LB/HR";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.54,0.835},1};
							right[] = {{0.567,0.835},1};
							down[] = {{0.54,0.865},1};
						};
						class Flow_EngLBHR2
						{
							type = "text";
							source = "static";
							text = "LB/HR";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.54,0.886},1};
							right[] = {{0.567,0.886},1};
							down[] = {{0.54,0.916},1};
						};
						class Flow_EngLBHR3
						{
							type = "text";
							source = "static";
							text = "LB/HR";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.54,0.937},1};
							right[] = {{0.567,0.937},1};
							down[] = {{0.54,0.967},1};
						};
						class FuelFlow_Eng1
						{
							type = "text";
							source = "rpm";
							text = "%X";
							sourceScale = 48;
							sourceLength = 1;
							refreshRate = 0.5;
							align = "left";
							scale = 1;
							pos[] = {{0.53,"0.835+0.051*0"},1};
							right[] = {{0.56,"0.835+0.051*0"},1};
							down[] = {{0.53,0.865},1};
						};
						class FuelFlow_Eng2: FuelFlow_Eng1
						{
							pos[] = {{0.53,"0.835+0.051*1"},1};
							right[] = {{0.56,"0.835+0.051*1"},1};
							down[] = {{0.53,0.916},1};
						};
						class FuelFlow_Total: FuelFlow_Eng1
						{
							sourceScale = 96;
							pos[] = {{0.53,"0.835+0.051*2"},1};
							right[] = {{0.56,"0.835+0.051*2"},1};
							down[] = {{0.53,0.967},1};
						};
						class Endurance
						{
							type = "text";
							source = "static";
							text = "ENDR";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.795,0.815},1};
							right[] = {{0.822,0.815},1};
							down[] = {{0.795,0.845},1};
						};
						class Endurance_Int
						{
							type = "text";
							source = "static";
							text = "INT";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.73,0.86},1};
							right[] = {{0.76,0.86},1};
							down[] = {{0.73,0.89},1};
						};
						class Endurance_Time
						{
							type = "text";
							source = "userText";
							sourceIndex = 2;
							text = "%X";
							sourceScale = 2;
							sourcePrecision = 2;
							sourceLength = 1;
							refreshRate = 0.5;
							align = "left";
							scale = 1;
							pos[] = {{0.89,0.86},1};
							right[] = {{0.92,0.86},1};
							down[] = {{0.89,0.89},1};
						};
						class Endurance_Dots
						{
							type = "text";
							source = "static";
							text = "";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.85,0.86},1};
							right[] = {{0.88,0.86},1};
							down[] = {{0.85,0.89},1};
						};
						class Eng_1
						{
							type = "text";
							source = "static";
							text = "1 ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.411,0.471},1};
							right[] = {{0.443,0.471},1};
							down[] = {{0.411,0.503},1};
						};
						class Eng_2
						{
							type = "text";
							source = "static";
							text = "2 ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.635,0.471},1};
							right[] = {{0.667,0.471},1};
							down[] = {{0.635,0.503},1};
						};
						class Transfer_1
						{
							type = "text";
							source = "static";
							text = "XFER ";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.014,0.538},1};
							right[] = {{0.039,0.538},1};
							down[] = {{0.014,0.565},1};
						};
						class Transfer_2
						{
							type = "text";
							source = "static";
							text = "AUTO ";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.014,0.578},1};
							right[] = {{0.039,0.578},1};
							down[] = {{0.014,0.605},1};
						};
						class Engine
						{
							type = "text";
							source = "static";
							text = "ENG";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.21,0.03},1};
							right[] = {{0.24,0.03},1};
							down[] = {{0.21,0.06},1};
						};
						class Flight
						{
							type = "text";
							source = "static";
							text = "FLT";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.34,0.03},1};
							right[] = {{0.37,0.03},1};
							down[] = {{0.34,0.06},1};
						};
						class Performance
						{
							type = "text";
							source = "static";
							text = "PERF";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.61,0.03},1};
							right[] = {{0.64,0.03},1};
							down[] = {{0.61,0.06},1};
						};
						class Utilities
						{
							type = "text";
							source = "static";
							text = "UTIL";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.89,0.03},1};
							right[] = {{0.92,0.03},1};
							down[] = {{0.89,0.06},1};
						};
						class Fuel
						{
							type = "text";
							source = "static";
							text = "FUEL";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.225,0.963},1};
							right[] = {{0.252,0.963},1};
							down[] = {{0.225,0.993},1};
						};
						class Check
						{
							type = "text";
							source = "static";
							text = "CHECK";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.963},1};
							right[] = {{0.922,0.963},1};
							down[] = {{0.895,0.993},1};
						};
						class Boost1
						{
							type = "text";
							source = "static";
							text = "BOOSTo ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{1,0.313},1};
							right[] = {{1.025,0.313},1};
							down[] = {{1,0.34},1};
						};
						class CROSSFEED1
						{
							type = "text";
							source = "static";
							text = "C";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.439},1};
							right[] = {{0.925,0.439},1};
							down[] = {{0.895,0.466},1};
						};
						class CROSSFEED2
						{
							type = "text";
							source = "static";
							text = "R";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.469},1};
							right[] = {{0.925,0.469},1};
							down[] = {{0.895,0.496},1};
						};
						class CROSSFEED3
						{
							type = "text";
							source = "static";
							text = "O";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.499},1};
							right[] = {{0.925,0.499},1};
							down[] = {{0.895,0.526},1};
						};
						class CROSSFEED4
						{
							type = "text";
							source = "static";
							text = "S";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.529},1};
							right[] = {{0.925,0.529},1};
							down[] = {{0.895,0.556},1};
						};
						class CROSSFEED5
						{
							type = "text";
							source = "static";
							text = "S";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.559},1};
							right[] = {{0.925,0.559},1};
							down[] = {{0.895,0.586},1};
						};
						class CROSSFEED6
						{
							type = "text";
							source = "static";
							text = "F";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.589},1};
							right[] = {{0.925,0.589},1};
							down[] = {{0.895,0.616},1};
						};
						class CROSSFEED7
						{
							type = "text";
							source = "static";
							text = "E";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.619},1};
							right[] = {{0.925,0.619},1};
							down[] = {{0.895,0.646},1};
						};
						class CROSSFEED8
						{
							type = "text";
							source = "static";
							text = "E";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.649},1};
							right[] = {{0.925,0.649},1};
							down[] = {{0.895,0.676},1};
						};
						class CROSSFEED9
						{
							type = "text";
							source = "static";
							text = "D";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.895,0.679},1};
							right[] = {{0.925,0.679},1};
							down[] = {{0.895,0.706},1};
						};
						class Fwd
						{
							type = "text";
							source = "static";
							text = "FWD ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{1,0.435},1};
							right[] = {{1.025,0.435},1};
							down[] = {{1,0.462},1};
						};
						class Auto
						{
							type = "text";
							source = "static";
							text = "NORM ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{1,0.557},1};
							right[] = {{1.025,0.557},1};
							down[] = {{1,0.584},1};
						};
						class Aft
						{
							type = "text";
							source = "static";
							text = "AFT ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{1,0.68},1};
							right[] = {{1.025,0.68},1};
							down[] = {{1,0.707},1};
						};
						class FuelType1
						{
							type = "text";
							source = "static";
							text = "TYPE ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{1,0.785},1};
							right[] = {{1.025,0.785},1};
							down[] = {{1,0.812},1};
						};
						class FuelType2
						{
							type = "text";
							source = "static";
							text = "JP4 ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{1,0.825},1};
							right[] = {{1.025,0.825},1};
							down[] = {{1,0.852},1};
						};
					};
				};
				class MFD_Right_Engine
				{
					topLeft = "GUNNER_MFD_R_TL";
					topRight = "GUNNER_MFD_R_TR";
					bottomLeft = "GUNNER_MFD_R_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {-2};
					class Bones
					{
						class HUDCenter
						{
							type = "fixed";
							pos[] = {0.5,0.5};
						};
						class Torque
						{
							type = "linear";
							source = "rpm";
							sourceScale = 10;
							min = 35;
							max = 160;
							minPos[] = {0.0,0.0};
							maxPos[] = {0.0,0.365};
						};
						class TurbineSpeed
						{
							type = "linear";
							source = "rpm";
							sourceScale = 1;
							min = 0;
							max = 13;
							minPos[] = {0.0,0.0};
							maxPos[] = {0.0,0.385};
						};
						class RotorSpeed
						{
							type = "linear";
							source = "rpm";
							sourceScale = 1;
							min = 0;
							max = 9.4;
							minPos[] = {0.0,0.06};
							maxPos[] = {0.0,0.26};
						};
						class RotorSpeed2: RotorSpeed
						{
							min = 9.4;
							max = 10;
							minPos[] = {0.0,-0.06};
							maxPos[] = {0.0,0.0};
						};
						class TGT_Temp
						{
							type = "linear";
							source = "rpm";
							sourceScale = 65;
							min = 0;
							max = 810;
							minPos[] = {0.0,0.0};
							maxPos[] = {0.0,0.26};
						};
						class RTD_Torque_1
						{
							type = "linear";
							source = "rtdRpm1";
							sourceIndex = 10;
							sourceScale = 216;
							refreshRate = 0.1;
							min = 0;
							max = 130;
							minPos[] = {0.0,0.0};
							maxPos[] = {0.0,0.275};
						};
						class RTD_Torque_2: RTD_Torque_1
						{
							source = "rtdRpm2";
							sourceIndex = 11;
						};
						class RTD_Torque_Level_1_1: RTD_Torque_1
						{
							max = 30;
							maxPos[] = {0.0,0.065};
						};
						class RTD_Torque_Level_1_2: RTD_Torque_2
						{
							max = 30;
							maxPos[] = {0.0,0.065};
						};
						class RTD_Torque_Level_1_Yellow_1: RTD_Torque_1
						{
							min = 30;
							max = 130;
							maxPos[] = {0.0,0.275};
						};
						class RTD_Torque_Level_1_Yellow_2: RTD_Torque_2
						{
							min = 30;
							max = 130;
							maxPos[] = {0.0,0.275};
						};
						class RTD_Torque_Level_2_1: RTD_Torque_1
						{
							max = 70;
							maxPos[] = {0.0,0.175};
						};
						class RTD_Torque_Level_2_2: RTD_Torque_2
						{
							max = 70;
							maxPos[] = {0.0,0.175};
						};
						class RTD_Torque_Level_2_Yellow_1: RTD_Torque_1
						{
							min = 70;
							max = 130;
							maxPos[] = {0.0,0.175};
						};
						class RTD_Torque_Level_2_Yellow_2: RTD_Torque_2
						{
							min = 70;
							max = 130;
							maxPos[] = {0.0,0.175};
						};
						class RTD_Torque_Level_3_1: RTD_Torque_1
						{
							max = 100;
							maxPos[] = {0.0,0.235};
						};
						class RTD_Torque_Level_3_2: RTD_Torque_2
						{
							max = 100;
							maxPos[] = {0.0,0.235};
						};
						class RTD_Torque_Level_3_Yellow_1: RTD_Torque_1
						{
							min = 101;
							max = 115;
							maxPos[] = {0.0,0.06};
						};
						class RTD_Torque_Level_3_Yellow_2: RTD_Torque_2
						{
							min = 101;
							max = 115;
							maxPos[] = {0.0,0.06};
						};
						class RTD_Torque_Level_3_Red_1: RTD_Torque_1
						{
							min = 115;
							max = 130;
							maxPos[] = {0.0,0.055};
						};
						class RTD_Torque_Level_3_Red_2: RTD_Torque_2
						{
							min = 115;
							max = 130;
							maxPos[] = {0.0,0.055};
						};
						class RTD_TurbineSpeed_1
						{
							type = "linear";
							source = "user";
							sourceIndex = 13;
							sourceScale = 1;
							min = 0;
							max = 105;
							minPos[] = {0.0,0.0};
							maxPos[] = {0.0,0.32};
						};
						class RTD_TurbineSpeed_2: RTD_TurbineSpeed_1
						{
							sourceIndex = 14;
						};
						class RTD_TurbineSpeed_Yellow_1: RTD_TurbineSpeed_1
						{
							min = 105;
							max = 120;
							minPos[] = {0.0,0.0};
							maxPos[] = {0.0,0.075};
						};
						class RTD_TurbineSpeed_Yellow_2: RTD_TurbineSpeed_2
						{
							min = 105;
							max = 120;
							minPos[] = {0.0,0.0};
							maxPos[] = {0.0,0.075};
						};
						class RTD_RotorSpeed
						{
							type = "linear";
							source = "user";
							sourceIndex = 12;
							min = 0;
							max = 94;
							minPos[] = {0.0,0.06};
							maxPos[] = {0.0,0.26};
						};
						class RTD_RotorSpeed2: RTD_RotorSpeed
						{
							min = 94;
							max = 100;
							minPos[] = {0.0,-0.06};
							maxPos[] = {0.0,0.0};
						};
					};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on*(user7>=3)*(user7<=3)";
						class Static
						{
							type = "line";
							width = 4.0;
							points[] = {{{0.105,0.93},1},{{0.195,0.93},1},{{0.195,0.98},1},{{0.105,0.98},1},{{0.105,0.93},1},{},{{0.8,0.014},1},{{0.87,0.014},1},{},{{0.51,0.014},1},{{0.61,0.014},1},{},{{0.38,0.014},1},{{0.46,0.014},1},{},{{0.265,0.014},1},{{0.33,0.014},1},{}};
						};
						class Polygons
						{
							type = "polygon";
							width = 4.0;
							points[] = {{{{0.87,0.0068},1},{{0.89,0.014},1},{{0.87,0.0212},1}},{{{0.59,0.0068},1},{{0.61,0.014},1},{{0.59,0.0212},1}},{{{0.46,0.0068},1},{{0.48,0.014},1},{{0.46,0.0212},1}},{{{0.32,0.0068},1},{{0.34,0.014},1},{{0.32,0.0212},1}}};
						};
						class GroundMode
						{
							condition = "(altitudeAGL<=6)";
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{{0.1462,0.642},1},{{0.1416,0.6555},1},{{0.137,0.669},1},{{0.137,0.831},1},{{0.1416,0.8445},1},{{0.1462,0.858},1},{{0.3854,0.858},1},{{0.39,0.8445},1},{{0.3946,0.831},1},{{0.3946,0.669},1},{{0.39,0.6555},1},{{0.3854,0.642},1},{{0.1462,0.642},1},{},{{0.4362,0.642},1},{{0.4316,0.6555},1},{{0.427,0.669},1},{{0.427,0.831},1},{{0.4316,0.8445},1},{{0.4362,0.858},1},{{0.6754,0.858},1},{{0.68,0.8445},1},{{0.6846,0.831},1},{{0.6846,0.669},1},{{0.68,0.6555},1},{{0.6754,0.642},1},{{0.4362,0.642},1},{}};
							};
							class Engine
							{
								type = "text";
								source = "static";
								text = "ENGINE";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.3	-0.08",0.65},1};
								right[] = {{0.245,0.65},1};
								down[] = {{"0.3	-0.08",0.675},1};
							};
							class EngineOilPsi
							{
								type = "text";
								source = "static";
								text = "OIL PSI";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.33-0.08",0.69},1};
								right[] = {{0.275,0.69},1};
								down[] = {{"0.33-0.08",0.715},1};
							};
							class EngineOilPsi1
							{
								type = "text";
								source = "static";
								text = "1";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.3	-0.08",0.82},1};
								right[] = {{0.245,0.82},1};
								down[] = {{"0.3	-0.08",0.845},1};
							};
							class EngineOilPsi2
							{
								type = "text";
								source = "static";
								text = "2";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.4	-0.08",0.82},1};
								right[] = {{0.345,0.82},1};
								down[] = {{"0.4	-0.08",0.845},1};
							};
							class HydPressure
							{
								type = "text";
								source = "static";
								text = "HYD PSI";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.57	-0.06",0.65},1};
								right[] = {{0.535,0.65},1};
								down[] = {{"0.57	-0.06",0.675},1};
							};
							class HydPressurePrimary
							{
								type = "text";
								source = "static";
								text = "PRI";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.52	-0.06",0.705},1};
								right[] = {{0.485,0.705},1};
								down[] = {{"0.52	-0.06",0.73},1};
							};
							class HydPressureUtility
							{
								type = "text";
								source = "static";
								text = "UTIL";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.52	-0.06",0.76},1};
								right[] = {{0.485,0.76},1};
								down[] = {{"0.52	-0.06",0.785},1};
							};
							class HydPressureAccumulator
							{
								type = "text";
								source = "static";
								text = "ACC";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.52	-0.06",0.815},1};
								right[] = {{0.485,0.815},1};
								down[] = {{"0.52	-0.06",0.84},1};
							};
							class HydPressureUtilityVal
							{
								type = "text";
								source = "static";
								text = "3000";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.62	-0.06",0.76},1};
								right[] = {{0.585,0.76},1};
								down[] = {{"0.62	-0.06",0.785},1};
							};
							class HydPressureAccumulatorVal
							{
								type = "text";
								source = "static";
								text = "3000";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.62	-0.06",0.815},1};
								right[] = {{0.585,0.815},1};
								down[] = {{"0.62	-0.06",0.84},1};
							};
							class Green
							{
								condition = "rpm>=2.5";
								class EngineOilPsiValue1
								{
									type = "text";
									source = "rpm";
									sourceScale = 8.8;
									sourceLength = 1;
									refreshRate = 0.13;
									align = "center";
									scale = 1;
									pos[] = {{"0.3	-0.08",0.775},1};
									right[] = {{0.245,0.775},1};
									down[] = {{"0.3	-0.08",0.8},1};
								};
								class EngineOilPsiValue2: EngineOilPsiValue1
								{
									pos[] = {{"0.4	-0.08",0.775},1};
									right[] = {{0.345,0.775},1};
									down[] = {{"0.4	-0.08",0.8},1};
									sourceScale = 9.0;
									refreshRate = 0.1;
								};
							};
							class Red: Green
							{
								condition = "rpm<=2.5";
								color[] = {1,0,0};
								alpha = 0.3;
								class EngineOilPsiValue1: EngineOilPsiValue1{};
								class EngineOilPsiValue2: EngineOilPsiValue2{};
							};
							class Hydraulics_OK
							{
								condition = "user15>=1300";
								class HydPressurePrimaryVal
								{
									type = "text";
									source = "user";
									sourceIndex = 15;
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.56,0.705},1};
									right[] = {{0.585,0.705},1};
									down[] = {{0.56,0.73},1};
								};
							};
							class Hydraulics_Low
							{
								condition = "user15<=1300";
								color[] = {1,0,0};
								class HydPressurePrimaryVal
								{
									type = "text";
									source = "user";
									sourceIndex = 15;
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.56,0.705},1};
									right[] = {{0.585,0.705},1};
									down[] = {{0.56,0.73},1};
								};
							};
						};
						class AirMode
						{
							condition = "(altitudeAGL>=6)";
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{{0.0390002,0.604},1},{{0.0220001,0.621},1},{{0.00500011,0.638},1},{{0.00500011,0.842},1},{{0.0220001,0.859},1},{{0.0390002,0.876},1},{{0.923,0.876},1},{{0.94,0.859},1},{{0.957,0.842},1},{{0.957,0.638},1},{{0.94,0.621},1},{{0.923,0.604},1},{{0.0390002,0.604},1},{},{{0.7362,0.122},1},{{0.7316,0.1355},1},{{0.727,0.149},1},{{0.727,0.311},1},{{0.7316,0.3245},1},{{0.7362,0.338},1},{{0.9754,0.338},1},{{0.98,0.3245},1},{{0.9846,0.311},1},{{0.9846,0.149},1},{{0.98,0.1355},1},{{0.9754,0.122},1},{{0.7362,0.122},1},{},{{0.505,0.62},1},{{0.505,0.86},1},{},{{0.495,0.62},1},{{0.495,0.86},1},{}};
							};
							class HydPressure
							{
								type = "text";
								source = "static";
								text = "HYD PSI";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{"0.57	-0.06+0.3",0.13},1};
								right[] = {{0.835,0.13},1};
								down[] = {{"0.57	-0.06+0.3",0.155},1};
							};
							class HydPressurePrimary
							{
								type = "text";
								source = "static";
								text = "PRI";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.52	-0.06+0.3",0.185},1};
								right[] = {{0.785,0.185},1};
								down[] = {{"0.52	-0.06+0.3",0.21},1};
							};
							class HydPressureUtility
							{
								type = "text";
								source = "static";
								text = "UTIL";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.52	-0.06+0.3",0.24},1};
								right[] = {{0.785,0.24},1};
								down[] = {{"0.52	-0.06+0.3",0.265},1};
							};
							class HydPressureAccumulator
							{
								type = "text";
								source = "static";
								text = "ACC";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.52	-0.06+0.3",0.295},1};
								right[] = {{0.785,0.295},1};
								down[] = {{"0.52	-0.06+0.3",0.32},1};
							};
							class HydPressureUtilityVal
							{
								type = "text";
								source = "static";
								text = "3000";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.62	-0.06+0.3",0.24},1};
								right[] = {{0.885,0.24},1};
								down[] = {{"0.62	-0.06+0.3",0.265},1};
							};
							class HydPressureAccumulatorVal
							{
								type = "text";
								source = "static";
								text = "3000";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.62	-0.06+0.3",0.295},1};
								right[] = {{0.885,0.295},1};
								down[] = {{"0.62	-0.06+0.3",0.32},1};
							};
							class Hydraulics_OK
							{
								condition = "user15>=1300";
								class HydPressurePrimaryVal
								{
									type = "text";
									source = "user";
									sourceIndex = 15;
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.86,0.185},1};
									right[] = {{0.885,0.185},1};
									down[] = {{0.86,0.21},1};
								};
							};
							class Hydraulics_Low
							{
								condition = "user15<=1300";
								color[] = {1,0,0};
								class HydPressurePrimaryVal
								{
									type = "text";
									source = "user";
									sourceIndex = 15;
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.86,0.185},1};
									right[] = {{0.885,0.185},1};
									down[] = {{0.86,0.21},1};
								};
							};
						};
						class Flight
						{
							type = "text";
							source = "static";
							text = "FLT";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.34,0.03},1};
							right[] = {{0.37,0.03},1};
							down[] = {{0.34,0.06},1};
						};
						class Fuel
						{
							type = "text";
							source = "static";
							text = "FUEL";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.48,0.03},1};
							right[] = {{0.51,0.03},1};
							down[] = {{0.48,0.06},1};
						};
						class Performance
						{
							type = "text";
							source = "static";
							text = "PERF";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.61,0.03},1};
							right[] = {{0.64,0.03},1};
							down[] = {{0.61,0.06},1};
						};
						class Utilities
						{
							type = "text";
							source = "static";
							text = "UTIL";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.89,0.03},1};
							right[] = {{0.92,0.03},1};
							down[] = {{0.89,0.06},1};
						};
						class Torque
						{
							type = "text";
							source = "static";
							text = "TORQUE %";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.015,0.11},1};
							right[] = {{0.04,0.11},1};
							down[] = {{0.015,0.135},1};
						};
						class TGT
						{
							type = "text";
							source = "static";
							text = "TGT   C";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.23+0.03",0.11},1};
							right[] = {{0.285,0.11},1};
							down[] = {{"0.23+0.03",0.135},1};
						};
						class TGT_o
						{
							type = "text";
							source = "static";
							text = "o";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.305+0.03",0.105},1};
							right[] = {{0.352,0.105},1};
							down[] = {{"0.305+0.03",0.122},1};
						};
						class EngPowerTurbineSpeed_1
						{
							type = "text";
							source = "static";
							text = "N   %";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.43,0.11},1};
							right[] = {{0.455,0.11},1};
							down[] = {{0.43,0.135},1};
						};
						class EngPowerTurbineSpeed_1P
						{
							type = "text";
							source = "static";
							text = "P";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.43+0.025",0.115},1};
							right[] = {{0.48,0.115},1};
							down[] = {{"0.43+0.025",0.14},1};
						};
						class RotorSpeed
						{
							type = "text";
							source = "static";
							text = "N   %";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.535,0.11},1};
							right[] = {{0.56,0.11},1};
							down[] = {{0.535,0.135},1};
						};
						class RotorSpeedR
						{
							type = "text";
							source = "static";
							text = "R";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.535+0.025",0.115},1};
							right[] = {{0.585,0.115},1};
							down[] = {{"0.535+0.025",0.14},1};
						};
						class EngPowerTurbineSpeed_2
						{
							type = "text";
							source = "static";
							text = "N   %";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.64,0.11},1};
							right[] = {{0.665,0.11},1};
							down[] = {{0.64,0.135},1};
						};
						class EngPowerTurbineSpeed_2P
						{
							type = "text";
							source = "static";
							text = "P";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.64+0.025",0.115},1};
							right[] = {{0.69,0.115},1};
							down[] = {{"0.64+0.025",0.14},1};
						};
						class EngPowerTurbineSpeed_Percent_2
						{
							type = "text";
							source = "static";
							text = "N   %";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.83,0.36},1};
							right[] = {{0.855,0.36},1};
							down[] = {{0.83,0.385},1};
						};
						class EngPowerTurbineSpeed_Percent_2P
						{
							type = "text";
							source = "static";
							text = "P";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.83+0.025",0.365},1};
							right[] = {{0.88,0.365},1};
							down[] = {{"0.83+0.025",0.39},1};
						};
						class EngGasGeneratorSpeed_Percent_2
						{
							type = "text";
							source = "static";
							text = "N   %";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.83,0.46},1};
							right[] = {{0.855,0.46},1};
							down[] = {{0.83,0.485},1};
						};
						class EngGasGeneratorSpeed_Percent_2P
						{
							type = "text";
							source = "static";
							text = "G";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.83+0.025",0.465},1};
							right[] = {{0.88,0.465},1};
							down[] = {{"0.83+0.025",0.49},1};
						};
						class StarterGroup
						{
							condition = "(rpm<=4.6)* (6-altitudeAGL)";
							class White
							{
								color[] = {1,1,1};
								class StarterOn
								{
									type = "text";
									source = "static";
									text = "ON";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{"0.14+0.79",0.6},1};
									right[] = {{0.955,0.6},1};
									down[] = {{"0.14+0.79",0.625},1};
								};
							};
							class Starter
							{
								type = "text";
								source = "static";
								text = "START";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.86,0.65},1};
								right[] = {{0.885,0.65},1};
								down[] = {{0.86,0.675},1};
							};
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{{0.7362,0.45},1},{{0.7316,0.465},1},{{0.727,0.48},1},{{0.727,0.66},1},{{0.7316,0.675},1},{{0.7362,0.69},1},{{0.9754,0.69},1},{{0.98,0.675},1},{{0.9846,0.66},1},{{0.9846,0.48},1},{{0.98,0.465},1},{{0.9754,0.45},1},{{0.7362,0.45},1},{}};
							};
						};
						class StandardFlightModel
						{
							condition = "simulArma";
							class TorqueLevel_0
							{
								condition = "rpm<=3.5";
								class TorqueEng1
								{
									type = "text";
									source = "static";
									text = "0";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.04,0.465},1};
									right[] = {{0.065,0.465},1};
									down[] = {{0.04,0.49},1};
								};
								class TorqueEng2
								{
									type = "text";
									source = "static";
									text = "0";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.14,0.465},1};
									right[] = {{0.165,0.465},1};
									down[] = {{0.14,0.49},1};
								};
								class Red
								{
									color[] = {1,0,0};
									alpha = 1;
									class DrawLines
									{
										type = "line";
										width = 6.0;
										points[] = {{{0.005,0.43},1},{{0.185,0.43},1},{}};
									};
									class DrawPolygons
									{
										type = "polygon";
										points[] = {{{{0.085,0.43},1},{{0.095,0.44},1},{{0.105,0.43},1},{{0.095,0.42},1}}};
									};
								};
							};
							class TorqueLevel_1: TorqueLevel_0
							{
								condition = "(rpm<=5)*(rpm>=3.5)";
								class Torque_Eng1
								{
									type = "text";
									source = "rpm";
									sourceScale = 12.1;
									sourceOffset = -35;
									sourceLength = 1;
									refreshRate = 0.13;
									align = "center";
									scale = 1;
									pos[] = {{0.04,0.465},1};
									right[] = {{0.065,0.465},1};
									down[] = {{0.04,0.49},1};
								};
								class Torque_Eng2: Torque_Eng1
								{
									pos[] = {{0.14,0.465},1};
									right[] = {{0.165,0.465},1};
									down[] = {{0.14,0.49},1};
									source = "rpm";
									sourceScale = 12.4;
									refreshRate = 0.1;
								};
								class Red: Red
								{
									class DrawLines: DrawLines{};
									class DrawPolygons: DrawPolygons{};
								};
							};
							class TorqueLevel_2: TorqueLevel_1
							{
								condition = "(rpm>=5)*(rpm<=9)";
								class Torque_Eng1: Torque_Eng1
								{
									pos[] = {{0.04,0.315},1};
									right[] = {{0.065,0.315},1};
									down[] = {{0.04,0.34},1};
								};
								class Torque_Eng2: Torque_Eng2
								{
									pos[] = {{0.14,0.315},1};
									right[] = {{0.165,0.315},1};
									down[] = {{0.14,0.34},1};
								};
								class Red: Red
								{
									class DrawLines: DrawLines
									{
										points[] = {{{0.005,0.28},1},{{0.185,0.28},1},{}};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.085,0.28},1},{{0.095,0.29},1},{{0.105,0.28},1},{{0.095,0.27},1}}};
									};
								};
							};
							class TorqueLevel_3: TorqueLevel_1
							{
								condition = "rpm>=9";
								class Torque_Eng1: Torque_Eng1
								{
									pos[] = {{0.04,0.25},1};
									right[] = {{0.065,0.25},1};
									down[] = {{0.04,0.275},1};
								};
								class Torque_Eng2: Torque_Eng2
								{
									pos[] = {{0.14,0.25},1};
									right[] = {{0.165,0.25},1};
									down[] = {{0.14,0.275},1};
								};
								class Red: Red
								{
									class DrawLines: DrawLines
									{
										points[] = {{{0.005,0.2},1},{{0.185,0.2},1},{}};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.085,0.2},1},{{0.095,0.21},1},{{0.105,0.2},1},{{0.095,0.19},1}}};
									};
								};
							};
							class RPM_Eng1
							{
								type = "text";
								source = "rpm";
								sourceScale = 10.1;
								sourceLength = 1;
								refreshRate = 0.13;
								align = "center";
								scale = 1;
								pos[] = {{"0.04+0.76",0.405},1};
								right[] = {{0.825,0.405},1};
								down[] = {{"0.04+0.76",0.43},1};
							};
							class RPM_Eng2: RPM_Eng1
							{
								pos[] = {{"0.14+0.78",0.405},1};
								right[] = {{0.945,0.405},1};
								down[] = {{"0.14+0.78",0.43},1};
								source = "rpm";
								sourceScale = 10.4;
								refreshRate = 0.1;
							};
							class TGT_Eng1
							{
								type = "text";
								source = "rpm";
								sourceScale = 71.9;
								refreshRate = 0.13;
								align = "center";
								scale = 1;
								pos[] = {{"0.04+0.23",0.255},1};
								right[] = {{0.295,0.255},1};
								down[] = {{"0.04+0.23",0.28},1};
							};
							class TGT_Eng2: TGT_Eng1
							{
								pos[] = {{"0.14+0.23",0.255},1};
								right[] = {{0.395,0.255},1};
								down[] = {{"0.14+0.23",0.28},1};
								sourceScale = 71.8;
								refreshRate = 0.1;
							};
							class GasGen_Ok
							{
								condition = "rpm>=6.3";
								class GasGen_Eng1
								{
									type = "text";
									source = "rpm";
									sourceScale = 9.9;
									sourceLength = 1;
									sourcePrecision = 1;
									refreshRate = 0.13;
									align = "center";
									scale = 1;
									pos[] = {{"0.04+0.76",0.505},1};
									right[] = {{0.825,0.505},1};
									down[] = {{"0.04+0.76",0.53},1};
								};
								class GasGen_Eng2: GasGen_Eng1
								{
									pos[] = {{"0.14+0.78",0.505},1};
									right[] = {{0.945,0.505},1};
									down[] = {{"0.14+0.78",0.53},1};
									sourceScale = 9.8;
									refreshRate = 0.1;
								};
							};
							class Red
							{
								color[] = {1,0,0};
								alpha = 0.1;
								class GasGen_Low
								{
									condition = "rpm<=6.3";
									class GasGen_Eng1
									{
										type = "text";
										source = "rpm";
										sourceScale = 9.9;
										sourceLength = 1;
										sourcePrecision = 1;
										refreshRate = 0.13;
										align = "center";
										scale = 1;
										pos[] = {{"0.04+0.76",0.505},1};
										right[] = {{0.825,0.505},1};
										down[] = {{"0.04+0.76",0.53},1};
									};
									class GasGen_Eng2: GasGen_Eng1
									{
										pos[] = {{"0.14+0.78",0.505},1};
										right[] = {{0.945,0.505},1};
										down[] = {{"0.14+0.78",0.53},1};
										sourceScale = 9.8;
										refreshRate = 0.1;
									};
								};
							};
							class DrawTGT_Green
							{
								alpha = 0.6;
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"Torque",1,{0.05,0.185},1},{"Torque",1,{0.03,0.185},1}},{{{0.13,0.55},1},{{0.15,0.55},1},{"Torque",1,{0.15,0.185},1},{"Torque",1,{0.13,0.185},1}},{{{0.26,0.55},1},{{0.28,0.55},1},{"TGT_Temp",1,{0.28,0.29},1},{"TGT_Temp",1,{0.26,0.29},1}},{{{0.36,0.55},1},{{0.38,0.55},1},{"TGT_Temp",1,{0.38,0.29},1},{"TGT_Temp",1,{0.36,0.29},1}},{{{0.45,0.55},1},{{0.47,0.55},1},{"TurbineSpeed",1,{0.47,0.165},1},{"TurbineSpeed",1,{0.45,0.165},1}},{{{0.66,0.55},1},{{0.68,0.55},1},{"TurbineSpeed",1,{0.68,0.175},1},{"TurbineSpeed",1,{0.66,0.175},1}}};
								};
							};
							class DrawRotor_Green
							{
								condition = "rpm>=9.4";
								alpha = 0.6;
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.525,0.55},1},{{0.615,0.55},1},{"RotorSpeed2",1,"RotorSpeed",1,{0.615,0.29},1},{"RotorSpeed2",1,"RotorSpeed",1,{0.525,0.29},1}}};
								};
								class RotorSpeed
								{
									type = "text";
									source = "rpm";
									sourceScale = 9.9;
									sourceLength = 1;
									sourcePrecision = 0;
									refreshRate = 0.13;
									align = "center";
									scale = 1;
									pos[] = {{0.57,0.255},1};
									right[] = {{0.595,0.255},1};
									down[] = {{0.57,0.28},1};
								};
							};
							class DrawRotor_Red: DrawRotor_Green
							{
								condition = "rpm<=9.4";
								color[] = {1,0,0};
								alpha = 0.3;
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.525,0.55},1},{{0.615,0.55},1},{"RotorSpeed2",1,"RotorSpeed",1,{0.615,0.29},1},{"RotorSpeed2",1,"RotorSpeed",1,{0.525,0.29},1}}};
								};
								class RotorSpeed: RotorSpeed{};
							};
							class DrawTGT_Yellow
							{
								color[] = {1,0.3,0};
								class DrawPolygon
								{
									type = "polygon";
									points[] = {};
								};
							};
						};
						class AdvancedFlightModel: StandardFlightModel
						{
							condition = "simulRTD";
							class TorqueLevel_1
							{
								condition = "(user12<=50)";
								class Red
								{
									color[] = {1,0,0};
									class DrawLines
									{
										type = "line";
										width = 4;
										points[] = {{{0.005,0.43},1},{{0.185,0.43},1},{}};
									};
									class DrawPolygons
									{
										type = "polygon";
										points[] = {{{{0.085,0.43},1},{{0.095,0.44},1},{{0.105,0.43},1},{{0.095,0.42},1}}};
									};
								};
								class Nominal_L
								{
									condition = "(rtdRpm1*216)<=30";
									class Torque_Eng1
									{
										type = "text";
										source = "rtdRpm1";
										sourceScale = 216;
										sourceIndex = 10;
										sourceLength = 1;
										refreshRate = 0.13;
										align = "center";
										scale = 1;
										pos[] = {{0.04,0.445},1};
										right[] = {{0.065,0.445},1};
										down[] = {{0.04,0.47},1};
									};
									class DrawPolygons
									{
										type = "polygon";
										points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"RTD_Torque_Level_1_1",1,{0.05,0.485},1},{"RTD_Torque_Level_1_1",1,{0.03,0.485},1}}};
									};
								};
								class Nominal_R: Nominal_L
								{
									condition = "(rtdRpm2*216)<=30";
									class Torque_Eng2: Torque_Eng1
									{
										pos[] = {{0.14,0.445},1};
										right[] = {{0.165,0.445},1};
										down[] = {{0.14,0.47},1};
										source = "rtdRpm2";
										sourceScale = 216;
										sourceIndex = 11;
										refreshRate = 0.1;
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.13,0.55},1},{{0.15,0.55},1},{"RTD_Torque_Level_1_2",1,{0.15,0.485},1},{"RTD_Torque_Level_1_2",1,{0.13,0.485},1}}};
									};
								};
								class Overtorque_L: Nominal_L
								{
									condition = "(rtdRpm1*216)>=30";
									color[] = {1,0,0};
									class Torque_Eng1: Torque_Eng1{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"RTD_Torque_Level_1_1",1,{0.05,0.485},1},{"RTD_Torque_Level_1_1",1,{0.03,0.485},1}},{{{0.02,0.43},1},{{0.06,0.43},1},{"RTD_Torque_Level_1_Yellow_1",1,{0.06,0.155},1},{"RTD_Torque_Level_1_Yellow_1",1,{0.02,0.155},1}}};
									};
								};
								class Overtorque_R: Nominal_R
								{
									condition = "(rtdRpm2*216)>=30";
									color[] = {1,0,0};
									class Torque_Eng2: Torque_Eng2{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.13,0.55},1},{{0.15,0.55},1},{"RTD_Torque_Level_1_2",1,{0.15,0.485},1},{"RTD_Torque_Level_1_2",1,{0.13,0.485},1}},{{{0.12,0.43},1},{{0.16,0.43},1},{"RTD_Torque_Level_1_Yellow_2",1,{0.16,0.155},1},{"RTD_Torque_Level_1_Yellow_2",1,{0.12,0.155},1}}};
									};
								};
							};
							class TorqueLevel_2: TorqueLevel_1
							{
								condition = "(user12>=50)*(user12<=90)";
								class Red: Red
								{
									class DrawLines: DrawLines
									{
										points[] = {{{0.005,0.33},1},{{0.185,0.33},1},{}};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.085,0.33},1},{{0.095,0.34},1},{{0.105,0.33},1},{{0.095,0.32},1}}};
									};
								};
								class Nominal_L: Nominal_L
								{
									condition = "(rtdRpm1*216)<=70";
									class Torque_Eng1: Torque_Eng1
									{
										pos[] = {{0.04,0.34},1};
										right[] = {{0.065,0.34},1};
										down[] = {{0.04,0.365},1};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"RTD_Torque_Level_2_1",1,{0.05,0.375},1},{"RTD_Torque_Level_2_1",1,{0.03,0.375},1}}};
									};
								};
								class Nominal_R: Nominal_R
								{
									condition = "(rtdRpm2*216)<=70";
									class Torque_Eng2: Torque_Eng2
									{
										pos[] = {{0.14,0.34},1};
										right[] = {{0.165,0.34},1};
										down[] = {{0.14,0.365},1};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.13,0.55},1},{{0.15,0.55},1},{"RTD_Torque_Level_2_2",1,{0.15,0.375},1},{"RTD_Torque_Level_2_2",1,{0.13,0.375},1}}};
									};
								};
								class Overtorque_L: Nominal_L
								{
									condition = "(rtdRpm1*216)>=70";
									color[] = {1,0,0};
									class Torque_Eng1: Torque_Eng1{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"RTD_Torque_Level_2_1",1,{0.05,0.375},1},{"RTD_Torque_Level_2_1",1,{0.03,0.375},1}},{{{0.02,0.33},1},{{0.06,0.33},1},{"RTD_Torque_Level_2_Yellow_1",1,{0.06,0.155},1},{"RTD_Torque_Level_2_Yellow_1",1,{0.02,0.155},1}}};
									};
								};
								class Overtorque_R: Nominal_R
								{
									condition = "(rtdRpm2*216)>=70";
									color[] = {1,0,0};
									class Torque_Eng2: Torque_Eng2{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.13,0.55},1},{{0.15,0.55},1},{"RTD_Torque_Level_2_2",1,{0.15,0.375},1},{"RTD_Torque_Level_2_2",1,{0.13,0.375},1}},{{{0.12,0.33},1},{{0.16,0.33},1},{"RTD_Torque_Level_2_Yellow_2",1,{0.16,0.155},1},{"RTD_Torque_Level_2_Yellow_2",1,{0.12,0.155},1}}};
									};
								};
							};
							class TorqueLevel_3: TorqueLevel_1
							{
								condition = "(user12>=90)";
								class Red: Red
								{
									class DrawLines: DrawLines
									{
										points[] = {{{0.005,0.21},1},{{0.185,0.21},1},{}};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.085,0.21},1},{{0.095,0.22},1},{{0.105,0.21},1},{{0.095,0.2},1}}};
									};
								};
								class Nominal_L: Nominal_L
								{
									condition = "(rtdRpm1*216)<=100";
									class Torque_Eng1: Torque_Eng1
									{
										pos[] = {{0.04,0.28},1};
										right[] = {{0.065,0.28},1};
										down[] = {{0.04,0.305},1};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"RTD_Torque_Level_3_1",1,{0.05,0.315},1},{"RTD_Torque_Level_3_1",1,{0.03,0.315},1}}};
									};
								};
								class Nominal_R: Nominal_R
								{
									condition = "(rtdRpm2*216)<=100";
									class Torque_Eng2: Torque_Eng2
									{
										pos[] = {{0.14,0.28},1};
										right[] = {{0.165,0.28},1};
										down[] = {{0.14,0.305},1};
									};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.13,0.55},1},{{0.15,0.55},1},{"RTD_Torque_Level_3_2",1,{0.15,0.315},1},{"RTD_Torque_Level_3_2",1,{0.13,0.315},1}}};
									};
								};
								class Overtorque_L: Nominal_L
								{
									condition = "((rtdRpm1*216)>=100)*((rtdRpm1*216)<=115)";
									color[] = {1,0.3,0};
									class Torque_Eng1: Torque_Eng1{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"RTD_Torque_Level_3_1",1,{0.05,0.315},1},{"RTD_Torque_Level_3_1",1,{0.03,0.315},1}},{{{0.02,0.27},1},{{0.06,0.27},1},{"RTD_Torque_Level_3_Yellow_1",1,{0.06,0.21},1},{"RTD_Torque_Level_3_Yellow_1",1,{0.02,0.21},1}}};
									};
								};
								class Overtorque_R: Nominal_R
								{
									condition = "((rtdRpm2*216)>=100)*((rtdRpm2*216)<=115)";
									color[] = {1,0.3,0};
									class Torque_Eng2: Torque_Eng2{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.13,0.55},1},{{0.15,0.55},1},{"RTD_Torque_Level_3_2",1,{0.15,0.315},1},{"RTD_Torque_Level_3_2",1,{0.13,0.315},1}},{{{0.12,0.27},1},{{0.16,0.27},1},{"RTD_Torque_Level_3_Yellow_2",1,{0.16,0.21},1},{"RTD_Torque_Level_3_Yellow_2",1,{0.12,0.21},1}}};
									};
								};
								class DoNotExceed_L: Nominal_L
								{
									condition = "((rtdRpm1*216)>=115)";
									color[] = {1,0,0};
									class Torque_Eng1: Torque_Eng1{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.03,0.55},1},{{0.05,0.55},1},{"RTD_Torque_Level_3_1",1,{0.05,0.315},1},{"RTD_Torque_Level_3_1",1,{0.03,0.315},1}},{{{0.02,0.27},1},{{0.06,0.27},1},{"RTD_Torque_Level_3_Yellow_1",1,{0.06,0.21},1},{"RTD_Torque_Level_3_Yellow_1",1,{0.02,0.21},1}},{{{0.01,0.21},1},{{0.07,0.21},1},{"RTD_Torque_Level_3_Red_1",1,{0.07,0.155},1},{"RTD_Torque_Level_3_Red_1",1,{0.01,0.155},1}}};
									};
								};
								class DoNotExceed_R: Nominal_R
								{
									condition = "((rtdRpm2*216)>=115)";
									color[] = {1,0,0};
									class Torque_Eng2: Torque_Eng2{};
									class DrawPolygons: DrawPolygons
									{
										points[] = {{{{0.13,0.55},1},{{0.15,0.55},1},{"RTD_Torque_Level_3_2",1,{0.15,0.315},1},{"RTD_Torque_Level_3_2",1,{0.13,0.315},1}},{{{0.12,0.27},1},{{0.16,0.27},1},{"RTD_Torque_Level_3_Yellow_2",1,{0.16,0.21},1},{"RTD_Torque_Level_3_Yellow_2",1,{0.12,0.21},1}},{{{0.11,0.21},1},{{0.17,0.21},1},{"RTD_Torque_Level_3_Red_2",1,{0.17,0.155},1},{"RTD_Torque_Level_3_Red_2",1,{0.11,0.155},1}}};
									};
								};
							};
							class RPM_Eng1: RPM_Eng1
							{
								source = "user";
								sourceIndex = 13;
								sourceScale = 1;
							};
							class RPM_Eng2: RPM_Eng2
							{
								source = "user";
								sourceIndex = 14;
								sourceScale = 1;
							};
							class TGT_Eng1: TGT_Eng1{};
							class TGT_Eng2: TGT_Eng2{};
							class GasGen_Ok: GasGen_Ok
							{
								condition = "rpm>=6.3";
								class GasGen_Eng1: GasGen_Eng1
								{
									type = "text";
									source = "rpm";
									sourceScale = 9.9;
									sourceLength = 1;
									sourcePrecision = 1;
									refreshRate = 0.13;
								};
								class GasGen_Eng2: GasGen_Eng1
								{
									pos[] = {{"0.14+0.78",0.505},1};
									right[] = {{0.945,0.505},1};
									down[] = {{"0.14+0.78",0.53},1};
									sourceScale = 9.8;
									refreshRate = 0.1;
								};
							};
							class Red: Red
							{
								class GasGen_Low: GasGen_Low
								{
									condition = "rpm<=6.3";
									class GasGen_Eng1: GasGen_Eng1
									{
										source = "rpm";
										sourceScale = 9.9;
										sourceLength = 1;
										sourcePrecision = 1;
										refreshRate = 0.13;
									};
									class GasGen_Eng2: GasGen_Eng1
									{
										pos[] = {{"0.14+0.78",0.505},1};
										right[] = {{0.945,0.505},1};
										down[] = {{"0.14+0.78",0.53},1};
										sourceScale = 9.8;
										refreshRate = 0.1;
									};
								};
							};
							class DrawTGT_Green
							{
								alpha = 0.6;
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.26,0.55},1},{{0.28,0.55},1},{"TGT_Temp",1,{0.28,0.29},1},{"TGT_Temp",1,{0.26,0.29},1}},{{{0.36,0.55},1},{{0.38,0.55},1},{"TGT_Temp",1,{0.38,0.29},1},{"TGT_Temp",1,{0.36,0.29},1}}};
								};
							};
							class DrawEngineP_1_Green
							{
								condition = "user13<=105";
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.45,0.55},1},{{0.47,0.55},1},{"RTD_TurbineSpeed_1",1,{0.47,0.23},1},{"RTD_TurbineSpeed_1",1,{0.45,0.23},1}}};
								};
							};
							class DrawEngineP_2_Green
							{
								condition = "user14<=105";
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.66,0.55},1},{{0.68,0.55},1},{"RTD_TurbineSpeed_2",1,{0.68,0.23},1},{"RTD_TurbineSpeed_2",1,{0.66,0.23},1}}};
								};
							};
							class DrawEngineP_1_Yellow: DrawEngineP_1_Green
							{
								condition = "user13>=105";
								color[] = {1,0.3,0};
								class DrawPolygon: DrawPolygon
								{
									points[] = {{{{0.45,0.55},1},{{0.47,0.55},1},{"RTD_TurbineSpeed_1",1,{0.47,0.23},1},{"RTD_TurbineSpeed_1",1,{0.45,0.23},1}},{{{0.44,0.23},1},{{0.48,0.23},1},{"RTD_TurbineSpeed_Yellow_1",1,{0.48,0.155},1},{"RTD_TurbineSpeed_Yellow_1",1,{0.44,0.155},1}}};
								};
							};
							class DrawEngineP_2_Yellow: DrawEngineP_2_Green
							{
								condition = "user14>=105";
								color[] = {1,0.3,0};
								class DrawPolygon: DrawPolygon
								{
									points[] = {{{{0.66,0.55},1},{{0.68,0.55},1},{"RTD_TurbineSpeed_2",1,{0.68,0.23},1},{"RTD_TurbineSpeed_2",1,{0.66,0.23},1}},{{{0.65,0.23},1},{{0.69,0.23},1},{"RTD_TurbineSpeed_Yellow_2",1,{0.69,0.155},1},{"RTD_TurbineSpeed_Yellow_2",1,{0.65,0.155},1}}};
								};
							};
							class DrawRotor_Green
							{
								condition = "user12>=94";
								alpha = 0.6;
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.525,0.55},1},{{0.615,0.55},1},{"RTD_RotorSpeed2",1,"RTD_RotorSpeed",1,{0.615,0.29},1},{"RTD_RotorSpeed2",1,"RTD_RotorSpeed",1,{0.525,0.29},1}}};
								};
								class RotorSpeed
								{
									type = "text";
									source = "user";
									sourceIndex = 12;
									sourceScale = 1;
									sourceLength = 1;
									sourcePrecision = 0;
									refreshRate = 0.13;
									align = "center";
									scale = 1;
									pos[] = {{0.57,0.255},1};
									right[] = {{0.595,0.255},1};
									down[] = {{0.57,0.28},1};
								};
							};
							class DrawRotor_Red: DrawRotor_Green
							{
								condition = "user12<=94";
								color[] = {1,0,0};
								alpha = 0.3;
								class DrawPolygon
								{
									type = "polygon";
									points[] = {{{{0.525,0.55},1},{{0.615,0.55},1},{"RTD_RotorSpeed2",1,"RTD_RotorSpeed",1,{0.615,0.29},1},{"RTD_RotorSpeed2",1,"RTD_RotorSpeed",1,{0.525,0.29},1}}};
								};
								class RotorSpeed: RotorSpeed{};
							};
						};
						class DrawBlackBackground
						{
							color[] = {0.0,0.0,0.0};
							alpha = 1;
							class DrawPolygon
							{
								type = "polygon";
								points[] = {{{{0.525,0.52},1},{{0.525,0.55},1},{{0.57,0.55},1}},{{{0.615,0.52},1},{{0.615,0.55},1},{{0.57,0.55},1}},{{{0.525,0.29},1},{{0.55,0.29},1},{{0.55,0.35},1},{{0.525,0.33},1}},{{{0.615,0.29},1},{{0.59,0.29},1},{{0.59,0.35},1},{{0.615,0.33},1}},{{{0.45,0.22},1},{{0.45,0.23},1},{{0.44,0.23},1}},{{{0.47,0.22},1},{{0.47,0.23},1},{{0.48,0.23},1}},{{{0.46,0.155},1},{{0.44,0.155},1},{{0.44,0.17},1}},{{{0.46,0.155},1},{{0.48,0.155},1},{{0.48,0.17},1}},{{{0.66,0.22},1},{{0.66,0.23},1},{{0.65,0.23},1}},{{{0.68,0.22},1},{{0.68,0.23},1},{{0.69,0.23},1}},{{{0.67,0.155},1},{{0.65,0.155},1},{{0.65,0.17},1}},{{{0.67,0.155},1},{{0.69,0.155},1},{{0.69,0.17},1}}};
							};
						};
						class Yellow
						{
							color[] = {1,0.3,0};
							alpha = 1;
							class DrawLines
							{
								type = "line";
								width = 6.0;
								points[] = {{{0.23,0.175},1},{{0.31,0.175},1},{},{{0.23,0.19},1},{{0.31,0.19},1},{},{{0.23,0.205},1},{{0.31,0.205},1},{},{{0.33,0.175},1},{{0.41,0.175},1},{},{{0.33,0.19},1},{{0.41,0.19},1},{},{{0.33,0.205},1},{{0.41,0.205},1},{}};
							};
						};
						class Red
						{
							color[] = {1,0,0};
							alpha = 1;
							class DrawLines
							{
								type = "line";
								width = 6.0;
								points[] = {{{0.23,0.16},1},{{0.41,0.16},1},{},{{0.525,0.22},1},{{0.57,0.19},1},{{0.615,0.22},1}};
							};
							class DrawPolygons
							{
								type = "polygon";
								points[] = {{{{0.31,0.16},1},{{0.32,0.17},1},{{0.33,0.16},1},{{0.32,0.15},1}},{{{0.51,0.19},1},{{0.52,0.2},1},{{0.53,0.19},1},{{0.52,0.18},1}},{{{0.61,0.19},1},{{0.62,0.2},1},{{0.63,0.19},1},{{0.62,0.18},1}}};
							};
						};
						class TorqueEng1
						{
							type = "text";
							source = "static";
							text = "1";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.04,0.56},1};
							right[] = {{0.065,0.56},1};
							down[] = {{0.04,0.585},1};
						};
						class TorqueEng2
						{
							type = "text";
							source = "static";
							text = "2";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.14,0.56},1};
							right[] = {{0.165,0.56},1};
							down[] = {{0.14,0.585},1};
						};
						class TGTEng1
						{
							type = "text";
							source = "static";
							text = "1";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{"0.04+0.23",0.56},1};
							right[] = {{0.295,0.56},1};
							down[] = {{"0.04+0.23",0.585},1};
						};
						class TGTEng2
						{
							type = "text";
							source = "static";
							text = "2";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{"0.14+0.23",0.56},1};
							right[] = {{0.395,0.56},1};
							down[] = {{"0.14+0.23",0.585},1};
						};
						class TurbineSpeed1
						{
							type = "text";
							source = "static";
							text = "1";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{"0.04+0.42",0.56},1};
							right[] = {{0.485,0.56},1};
							down[] = {{"0.04+0.42",0.585},1};
						};
						class TurbineSpeed2
						{
							type = "text";
							source = "static";
							text = "2";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{"0.14+0.53",0.56},1};
							right[] = {{0.695,0.56},1};
							down[] = {{"0.14+0.53",0.585},1};
						};
						class TurbineSpeed1_Percent
						{
							type = "text";
							source = "static";
							text = "1";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{"0.04+0.76",0.56},1};
							right[] = {{0.825,0.56},1};
							down[] = {{"0.04+0.76",0.585},1};
						};
						class TurbineSpeed2_Percent
						{
							type = "text";
							source = "static";
							text = "2";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{"0.14+0.78",0.56},1};
							right[] = {{0.945,0.56},1};
							down[] = {{"0.14+0.78",0.585},1};
						};
						class Engine
						{
							type = "text";
							source = "static";
							text = "ENG";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.19,0.94},1};
							right[] = {{0.22,0.94},1};
							down[] = {{0.19,0.97},1};
						};
						class System
						{
							type = "text";
							source = "static";
							text = "SYS";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.33,0.94},1};
							right[] = {{0.36,0.94},1};
							down[] = {{0.33,0.97},1};
						};
						class ETF
						{
							type = "text";
							source = "static";
							text = "ETF";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.47,0.94},1};
							right[] = {{0.5,0.94},1};
							down[] = {{0.47,0.97},1};
						};
						class WCA
						{
							type = "text";
							source = "static";
							text = "WCA";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.89,0.94},1};
							right[] = {{0.92,0.94},1};
							down[] = {{0.89,0.97},1};
						};
					};
				};
				class MFD_Right_TADS
				{
					topLeft = "GUNNER_MFD_R_TL";
					topRight = "GUNNER_MFD_R_TR";
					bottomLeft = "GUNNER_MFD_R_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {-2};
					class Bones
					{
						class HUDCenter
						{
							type = "fixed";
							pos[] = {0.5,0.5};
						};
						class VelocityVector
						{
							type = "vector";
							source = "velocityToView";
							pos0[] = {0.5,0.5};
							pos10[] = {0.934,0.93};
						};
						class ForwardVector
						{
							type = "vector";
							source = "forward";
							pos0[] = {0,0};
							pos10[] = {0.434,0.43};
						};
						class HorizonVector
						{
							type = "horizon";
							pos0[] = {0.5,0.5};
							pos10[] = {1.11376,1.10811};
							angle = 0;
						};
						class GunnerAim
						{
							type = "vector";
							source = "turret";
							pos0[] = {0,-2.0};
							pos10[] = {0.0068,-0.01};
							projection = 0;
						};
						class VerticalSpeedBone
						{
							type = "linear";
							source = "vspeed";
							sourceScale = 1;
							min = -10;
							max = 10;
							minPos[] = {0,-0.26};
							maxPos[] = {0,0.26};
						};
						class TurnRate
						{
							type = "linear";
							source = "gmeterxgrav";
							min = -2;
							max = 2;
							minPos[] = {0.36,0.87};
							maxPos[] = {0.64,0.87};
							aspectRatio = 1;
						};
						class FCR_Bearing
						{
							type = "linear";
							source = "user";
							sourceIndex = 17;
							min = -180;
							max = 180;
							minPos[] = {0.35,0.165};
							maxPos[] = {0.66,0.165};
						};
						class HorizonBankRot
						{
							type = "linear";
							source = "horizonBank";
							min = -0.5236;
							max = 0.5236;
							minPos[] = {0.41,0.94};
							maxPos[] = {0.59,0.94};
							aspectRatio = 1;
						};
						class HorizonBankRot_Up
						{
							type = "rotational";
							source = "horizonBank";
							center[] = {0.5,0.5};
							min = "-rad(30)";
							max = "rad(30)";
							minAngle = "180.25-29";
							maxAngle = "180.75+29";
							aspectRatio = 1;
						};
						class HorizonBankRotFull
						{
							type = "rotational";
							source = "horizonBank";
							center[] = {0,0};
							min = -3.1416;
							max = 3.1416;
							minAngle = -180;
							maxAngle = 180;
							aspectRatio = 1;
						};
						class LimitWaypoint
						{
							type = "limit";
							limits[] = {0.23,0.18,0.77,0.18};
						};
						class WPPoint
						{
							type = "vector";
							source = "WPPoint";
							pos0[] = {0.5,0.5};
							pos10[] = {0.934,0.93};
						};
					};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on*(user7>=4)*(user7<=4)";
						class CameraMode
						{
							type = "text";
							source = "userText";
							sourceIndex = 0;
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.2,0.3},1};
							right[] = {{0.24,0.3},1};
							down[] = {{0.2,0.34},1};
						};
						class Static
						{
							type = "line";
							width = 4.0;
							points[] = {{{0.4,0.86},1},{{0.4,0.94},1},{{0.6,0.94},1},{{0.6,0.86},1},{{0.4,0.86},1},{},{{0.4,0.885},1},{{0.408,0.885},1},{},{{0.6,0.885},1},{{0.592,0.885},1},{},{{0.5,0.86},1},{{0.5,0.868},1},{},{{0.5,0.94},1},{{0.5,0.932},1},{},{"HUDCenter",1,{-0.07,0.0},1},{"HUDCenter",1,{-0.02,0.0},1},{},{"HUDCenter",1,{0.02,0.0},1},{"HUDCenter",1,{0.07,0.0},1},{},{"HUDCenter",1,{0.0,-0.02},1},{"HUDCenter",1,{0.0,-0.07},1},{},{"HUDCenter",1,{0.0,0.07},1},{"HUDCenter",1,{0.0,0.02},1}};
						};
						class ZoomBox
						{
							condition = "user9<=2";
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{"HUDCenter",1,{-0.2,-0.1125},1},{"HUDCenter",1,{-0.2,-0.15},1},{"HUDCenter",1,{-0.1625,-0.15},1},{},{"HUDCenter",1,{-0.2,0.1125},1},{"HUDCenter",1,{-0.2,0.15},1},{"HUDCenter",1,{-0.1625,0.15},1},{},{"HUDCenter",1,{0.2,0.1125},1},{"HUDCenter",1,{0.2,0.15},1},{"HUDCenter",1,{0.1625,0.15},1},{},{"HUDCenter",1,{0.2,-0.1125},1},{"HUDCenter",1,{0.2,-0.15},1},{"HUDCenter",1,{0.1625,-0.15},1},{}};
							};
						};
						class ZoomBoxNarrow
						{
							condition = "(user9>=3)*(user9<=8)";
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{"HUDCenter",1,{-0.24,-0.1425},1},{"HUDCenter",1,{-0.24,-0.19},1},{"HUDCenter",1,{-0.1925,-0.19},1},{},{"HUDCenter",1,{-0.24,0.1425},1},{"HUDCenter",1,{-0.24,0.19},1},{"HUDCenter",1,{-0.1925,0.19},1},{},{"HUDCenter",1,{0.24,0.1425},1},{"HUDCenter",1,{0.24,0.19},1},{"HUDCenter",1,{0.1925,0.19},1},{},{"HUDCenter",1,{0.24,-0.1425},1},{"HUDCenter",1,{0.24,-0.19},1},{"HUDCenter",1,{0.1925,-0.19},1},{}};
							};
						};
						class StaticBold
						{
							type = "line";
							width = 6.0;
							points[] = {{{0.5,0.18},1},{{0.5,0.22},1},{}};
						};
						class DrawPolygons
						{
							type = "polygon";
							width = 4.0;
							points[] = {{{"FCR_Bearing",{-0.019,0},1},{"FCR_Bearing",{-0.008,0},1},{"FCR_Bearing",{-0.008,0.011},1},{"FCR_Bearing",{-0.019,0.011},1}},{{"FCR_Bearing",{-0.003,0},1},{"FCR_Bearing",{0.008,0},1},{"FCR_Bearing",{0.008,0.011},1},{"FCR_Bearing",{-0.003,0.011},1}},{{"FCR_Bearing",{0.008,0},1},{"FCR_Bearing",{0.014,0.0055},1},{"FCR_Bearing",{0.008,0.011},1}},{{"FCR_Bearing",{-0.019,0},1},{"FCR_Bearing",{-0.025,0.0055},1},{"FCR_Bearing",{-0.019,0.011},1}},{{"TurnRate",{-0.013,0},1},{"TurnRate",{0.017,0},1},{"TurnRate",{0.017,0.03},1},{"TurnRate",{-0.013,0.03},1}}};
						};
						class HeadingHeadNumber
						{
							type = "text";
							source = "heading";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.5,"0.042+0.077"},1};
							right[] = {{0.54,"0.042+0.077"},1};
							down[] = {{0.5,0.159},1};
						};
						class HeadingScaleRight
						{
							clipTL[] = {0.55,0.0};
							clipBR[] = {0.77,0.5};
							class lines
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								width = 4.0;
								NeverEatSeaWeed = 1;
								top = 0.5;
								center = 0.5;
								bottom = 0.82;
								lineXleft = 0.187;
								lineYright = 0.177;
								lineXleftMajor = 0.187;
								lineYrightMajor = 0.167;
								majorLineEach = 3;
								numberEach = 3;
								step = 1;
								stepSize = 0.0263889;
								align = "center";
								scale = 1;
								pos[] = {0.495,"0.05+0.077"};
								right[] = {0.52,"0.05+0.077"};
								down[] = {0.495,"0.08+0.077"};
							};
						};
						class HeadingScaleMidle
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 0.1;
							width = 4.0;
							NeverEatSeaWeed = 1;
							top = 0.45;
							center = 0.5;
							bottom = 0.55;
							lineXleft = 0.187;
							lineYright = 0.177;
							lineXleftMajor = 0.187;
							lineYrightMajor = 0.177;
							majorLineEach = 2;
							step = 1;
							stepSize = 0.0263889;
							align = "center";
							scale = 1;
							numberEach = 0;
							pos[] = {0.47,"0.05+0.077"};
							right[] = {0.5,"0.05+0.077"};
							down[] = {0.45,"0.09+0.077"};
						};
						class HeadingScaleLeft
						{
							clipTL[] = {0.23,0.0};
							clipBR[] = {0.45,0.5};
							class lines
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								width = 4.0;
								NeverEatSeaWeed = 1;
								top = 0.17;
								center = 0.5;
								bottom = 0.55;
								lineXleft = 0.187;
								lineYright = 0.177;
								lineXleftMajor = 0.187;
								lineYrightMajor = 0.167;
								majorLineEach = 3;
								numberEach = 3;
								step = 1;
								stepSize = 0.0263889;
								align = "center";
								scale = 1;
								pos[] = {0.166,"0.05+0.077"};
								right[] = {0.191,"0.05+0.077"};
								down[] = {0.166,"0.08+0.077"};
							};
						};
						class WP
						{
							condition = "wpvalid";
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{"WPPoint",1,"LimitWaypoint",1,{-0.01,0.04},1},{"WPPoint",1,"LimitWaypoint",1,{0.0,0.02},1},{"WPPoint",1,"LimitWaypoint",1,{0.01,0.04},1},{}};
							};
						};
						class LaserGroup
						{
							condition = "laseron";
							class Gunner
							{
								type = "line";
								width = 4.0;
								points[] = {{"HUDCenter",{0.04,0.038},1},{"HUDCenter",{0.015,0.01},1},{},{"HUDCenter",{-0.04,0.038},1},{"HUDCenter",{-0.015,0.01},1},{},{"HUDCenter",{0.04,-0.038},1},{"HUDCenter",{0.015,-0.01},1},{},{"HUDCenter",{-0.04,-0.038},1},{"HUDCenter",{-0.015,-0.01},1},{}};
							};
						};
						class RadarGroup
						{
							condition = "activeSensorsOn";
							class RadarGround
							{
								condition = "1-user8";
								class TransText
								{
									type = "text";
									source = "static";
									text = "FCR/G";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.1,0.86},1};
									right[] = {{0.127,0.86},1};
									down[] = {{0.1,0.887},1};
								};
								class DrawLine{};
							};
							class RadarAir
							{
								condition = "user8>=1";
								class TransText
								{
									type = "text";
									source = "static";
									text = "FCR/A";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.1,0.86},1};
									right[] = {{0.127,0.86},1};
									down[] = {{0.1,0.887},1};
								};
							};
							class AutoRange
							{
								condition = "targetDist>=1";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "R";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.26,0.86},1};
									right[] = {{0.287,0.86},1};
									down[] = {{0.26,0.887},1};
								};
								class RangeSource
								{
									type = "text";
									source = "targetDist";
									sourceScale = 0.001;
									sourceLength = 2;
									sourcePrecision = 1;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{0.29,0.86},1};
									right[] = {{0.317,0.86},1};
									down[] = {{0.29,0.887},1};
								};
							};
							class LaserRange
							{
								condition = "targetDist<=0.99";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "*";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.26,0.86},1};
									right[] = {{0.287,0.86},1};
									down[] = {{0.26,0.887},1};
								};
								class SpeedSource
								{
									type = "text";
									source = "laserDist";
									sourceScale = 1;
									sourceLength = 4;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{0.29,0.86},1};
									right[] = {{0.317,0.86},1};
									down[] = {{0.29,0.887},1};
								};
							};
						};
						class TADSGroup
						{
							condition = "1-activeSensorsOn";
							class TransText
							{
								type = "text";
								source = "static";
								text = "TADS";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.1,0.86},1};
								right[] = {{0.127,0.86},1};
								down[] = {{0.1,0.887},1};
							};
							class AutoRange
							{
								condition = "targetDist>=1";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "A";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.26,0.86},1};
									right[] = {{0.287,0.86},1};
									down[] = {{0.26,0.887},1};
								};
								class RangeSource
								{
									type = "text";
									source = "targetDist";
									sourceScale = 0.001;
									sourceLength = 2;
									sourcePrecision = 1;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{0.29,0.86},1};
									right[] = {{0.317,0.86},1};
									down[] = {{0.29,0.887},1};
								};
							};
							class LaserRange
							{
								condition = "targetDist<=0.99";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "*";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.26,0.86},1};
									right[] = {{0.287,0.86},1};
									down[] = {{0.26,0.887},1};
								};
								class SpeedSource
								{
									type = "text";
									source = "laserDist";
									sourceScale = 1;
									sourceLength = 4;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{0.29,0.86},1};
									right[] = {{0.317,0.86},1};
									down[] = {{0.29,0.887},1};
								};
							};
						};
						class Gunner
						{
							type = "line";
							width = 4.0;
							points[] = {{"GunnerAim",{0.485,0.892},1},{"GunnerAim",{0.485,0.908},1},{"GunnerAim",{0.515,0.908},1},{"GunnerAim",{0.515,0.892},1},{"GunnerAim",{0.485,0.892},1}};
						};
						class SpeedNumber
						{
							type = "text";
							source = "speed";
							sourceScale = 1.9438444;
							align = "left";
							scale = 1;
							pos[] = {{0.39,0.81},1};
							right[] = {{0.417,0.81},1};
							down[] = {{0.39,0.837},1};
						};
						class AltNumber
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 3.28084;
							sourceOffset = -6.88976;
							align = "right";
							scale = 1;
							pos[] = {{0.62,0.81},1};
							right[] = {{0.647,0.81},1};
							down[] = {{0.62,0.837},1};
						};
						class MGun
						{
							condition = "mgun";
							class RangeText
							{
								type = "text";
								source = "static";
								text = "P GUN";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.61,0.86},1};
								right[] = {{0.637,0.86},1};
								down[] = {{0.61,0.887},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								text = "GUN";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{0.61,0.9},1};
								right[] = {{0.637,0.9},1};
								down[] = {{0.61,0.927},1};
							};
							class Ammo
							{
								type = "text";
								source = "ammo";
								sourceScale = 1;
								align = "left";
								scale = 0.5;
								pos[] = {{0.93,0.9},1};
								right[] = {{0.957,0.9},1};
								down[] = {{0.93,0.927},1};
							};
						};
						class AAMissile
						{
							condition = "bomb";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P ATA";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.61,0.86},1};
								right[] = {{0.637,0.86},1};
								down[] = {{0.61,0.887},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{0.61,0.9},1};
								right[] = {{0.637,0.9},1};
								down[] = {{0.61,0.927},1};
							};
						};
						class ATMissile
						{
							condition = "ATmissile + AAmissile";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P MSL";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.61,0.86},1};
								right[] = {{0.637,0.86},1};
								down[] = {{0.61,0.887},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{0.61,0.9},1};
								right[] = {{0.637,0.9},1};
								down[] = {{0.61,0.927},1};
							};
						};
						class Rockets
						{
							condition = "rocket";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P RKT";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.61,0.86},1};
								right[] = {{0.637,0.86},1};
								down[] = {{0.61,0.887},1};
							};
							class AmmoName
							{
								type = "text";
								source = "ammoFormat";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{0.61,0.9},1};
								right[] = {{0.637,0.9},1};
								down[] = {{0.61,0.927},1};
							};
						};
					};
				};
				class MFD_Right_Radar
				{
					topLeft = "GUNNER_MFD_R_TL";
					topRight = "GUNNER_MFD_R_TR";
					bottomLeft = "GUNNER_MFD_R_BL";
					borderLeft = 0;
					borderRight = 0;
					borderTop = 0;
					borderBottom = 0;
					color[] = {1.0,1.0,1.0,1.0};
					helmetMountedDisplay = 0;
					helmetPosition[] = {-0.0375,0.0375,0.1};
					helmetRight[] = {0.075,0.0,0.0};
					helmetDown[] = {0.0,-0.075,0.0};
					font = "rhsusf_txled";
					turret[] = {-2};
					class Bones
					{
						class Sensor_Offset
						{
							type = "fixed";
							pos[] = {0.0,0.38};
						};
						class Static_Offset
						{
							type = "fixed";
							pos[] = {0.5,0.85};
						};
						class Static_Offset2: Static_Offset
						{
							pos[] = {0.5,0.88};
						};
						class Static_Offset_AA: Static_Offset
						{
							pos[] = {0.5,0.495};
						};
						class Sensor_Offset_AA: Static_Offset
						{
							pos[] = {0.0,-0.005};
						};
						class LimitWaypoint
						{
							type = "limit";
							limits[] = {0.22,0.06,0.78,0.06};
						};
						class FCR_Bearing
						{
							type = "linear";
							source = "user";
							sourceIndex = 17;
							min = -180;
							max = 180;
							minPos[] = {0.35,0.085};
							maxPos[] = {0.66,0.085};
						};
						class FCR_ScanLine_Bottom
						{
							type = "rotational";
							source = "user";
							sourceIndex = 16;
							min = 0;
							max = 0.5;
							pos0[] = {0.0,0.0};
							pos10[] = {0.0,0.0};
							center[] = {0.0,0.0};
							minAngle = 135;
							maxAngle = 225;
							aspectRatio = 1;
						};
						class FCR_ScanLine_Top: FCR_ScanLine_Bottom
						{
							min = 0.5;
							max = 1;
							minAngle = 225;
							maxAngle = 135;
						};
						class FCR_ScanLine_AA: FCR_ScanLine_Bottom
						{
							min = 0;
							max = 1;
							minAngle = 180;
							maxAngle = 540;
						};
						class WPPoint
						{
							type = "vector";
							source = "WPPoint";
							pos0[] = {0.5,0.5};
							pos10[] = {0.934,0.93};
						};
						class GunnerAim
						{
							type = "vector";
							source = "turret";
							pos0[] = {0,-2.0};
							pos10[] = {0.0068,-0.01};
							projection = 0;
						};
					};
					class Draw
					{
						alpha = 1.0;
						color[] = {0,0.12,0};
						condition = "on*(user7>=5)*(user7<=5)";
						class Static
						{
							type = "line";
							width = 5.0;
							points[] = {{{0.5,0.09},1},{{0.5,0.12},1},{},{{0.01,0.83},1},{{0.035,0.83},1},{},{{0.01,0.845},1},{{0.02,0.845},1},{},{{0.01,0.86},1},{{0.02,0.86},1},{},{{0.01,0.875},1},{{0.02,0.875},1},{},{{0.01,0.89},1},{{0.02,0.89},1},{},{{0.01,0.905},1},{{0.035,0.905},1},{},{{0.01,0.92},1},{{0.02,0.92},1},{},{{0.01,0.935},1},{{0.02,0.935},1},{},{{0.01,0.95},1},{{0.035,0.95},1},{},{{0.08,0.91},1},{{0.075,0.915},1},{{0.07,0.92},1},{{0.07,0.98},1},{{0.075,0.985},1},{{0.08,0.99},1},{{0.34,0.99},1},{{0.345,0.985},1},{{0.35,0.98},1},{{0.35,0.92},1},{{0.345,0.915},1},{{0.34,0.91},1},{{0.08,0.91},1},{},{{0.66,0.91},1},{{0.655,0.915},1},{{0.65,0.92},1},{{0.65,0.98},1},{{0.655,0.985},1},{{0.66,0.99},1},{{0.92,0.99},1},{{0.925,0.985},1},{{0.93,0.98},1},{{0.93,0.92},1},{{0.925,0.915},1},{{0.92,0.91},1},{{0.66,0.91},1},{},{},{{0.8,0.014},1},{{0.87,0.014},1},{},{{0.945239,0.335771},1},{{0.964144,0.335771},1},{{0.964144,0.341741},1},{{0.994492,0.325821},1},{{0.964144,0.309403},1},{{0.964144,0.315871},1},{{0.945239,0.315871},1},{{0.945239,0.335771},1},{},{{0.0596667,0.335771},1},{{0.0407612,0.335771},1},{{0.0407612,0.341741},1},{{0.0109104,0.325821},1},{{0.0407612,0.309403},1},{{0.0407612,0.315871},1},{{0.0596667,0.315871},1},{{0.0596667,0.335771},1},{}};
						};
						class ClassArrows
						{
							type = "polygon";
							points[] = {{{{0.87,0.0068},1},{{0.89,0.014},1},{{0.87,0.0212},1}},{{{0.06,0.8942},1},{{0.04,0.905},1},{{0.06,0.9158},1}},{{"FCR_Bearing",{-0.019,0},1},{"FCR_Bearing",{-0.008,0},1},{"FCR_Bearing",{-0.008,0.011},1},{"FCR_Bearing",{-0.019,0.011},1}},{{"FCR_Bearing",{-0.003,0},1},{"FCR_Bearing",{0.008,0},1},{"FCR_Bearing",{0.008,0.011},1},{"FCR_Bearing",{-0.003,0.011},1}},{{"FCR_Bearing",{0.008,0},1},{"FCR_Bearing",{0.014,0.0055},1},{"FCR_Bearing",{0.008,0.011},1}},{{"FCR_Bearing",{-0.019,0},1},{"FCR_Bearing",{-0.025,0.0055},1},{"FCR_Bearing",{-0.019,0.011},1}}};
						};
						class HeadingHeadNumber
						{
							type = "text";
							source = "heading";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{0.5,"0.042-0.03"},1};
							right[] = {{0.54,"0.042-0.03"},1};
							down[] = {{0.5,0.052},1};
						};
						class HeadingScaleRight
						{
							clipTL[] = {0.55,0.0};
							clipBR[] = {0.77,0.11};
							class lines
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								width = 4.0;
								NeverEatSeaWeed = 1;
								top = 0.5;
								center = 0.5;
								bottom = 0.82;
								lineXleft = 0.08;
								lineYright = 0.07;
								lineXleftMajor = 0.08;
								lineYrightMajor = 0.06;
								majorLineEach = 3;
								numberEach = 3;
								step = 1;
								stepSize = 0.0263889;
								align = "center";
								scale = 1;
								pos[] = {0.495,"0.05-0.03"};
								right[] = {0.52,"0.05-0.03"};
								down[] = {0.495,"0.08-0.03"};
							};
						};
						class HeadingScaleMidle
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 0.1;
							width = 4.0;
							NeverEatSeaWeed = 1;
							top = 0.45;
							center = 0.5;
							bottom = 0.55;
							lineXleft = 0.08;
							lineYright = 0.07;
							lineXleftMajor = 0.08;
							lineYrightMajor = 0.07;
							majorLineEach = 2;
							step = 1;
							stepSize = 0.0263889;
							align = "center";
							scale = 1;
							numberEach = 0;
							pos[] = {0.47,"0.05-0.03"};
							right[] = {0.5,"0.05-0.03"};
							down[] = {0.45,"0.09-0.03"};
						};
						class HeadingScaleLeft
						{
							clipTL[] = {0.23,0.0};
							clipBR[] = {0.45,0.11};
							class lines
							{
								type = "scale";
								horizontal = 1;
								source = "heading";
								sourceScale = 0.1;
								width = 4.0;
								NeverEatSeaWeed = 1;
								top = 0.17;
								center = 0.5;
								bottom = 0.55;
								lineXleft = 0.08;
								lineYright = 0.07;
								lineXleftMajor = 0.08;
								lineYrightMajor = 0.06;
								majorLineEach = 3;
								numberEach = 3;
								step = 1;
								stepSize = 0.0263889;
								align = "center";
								scale = 1;
								pos[] = {0.166,"0.05-0.03"};
								right[] = {0.191,"0.05-0.03"};
								down[] = {0.166,"0.08-0.03"};
							};
						};
						class WP
						{
							condition = "wpvalid";
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{"WPPoint",1,"LimitWaypoint",1,{-0.01,0.04},1},{"WPPoint",1,"LimitWaypoint",1,{0.0,0.02},1},{"WPPoint",1,"LimitWaypoint",1,{0.01,0.04},1},{}};
							};
						};
						class TgtStoreSelection1
						{
							type = "text";
							source = "static";
							text = "T";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.005,0.51},1};
							right[] = {{0.035,0.51},1};
							down[] = {{0.005,0.54},1};
						};
						class TgtStoreSelection2
						{
							type = "text";
							source = "static";
							text = "G";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.005,0.55},1};
							right[] = {{0.035,0.55},1};
							down[] = {{0.005,0.58},1};
						};
						class TgtStoreSelection3
						{
							type = "text";
							source = "static";
							text = "T";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.005,0.59},1};
							right[] = {{0.035,0.59},1};
							down[] = {{0.005,0.62},1};
						};
						class NextToShoot1
						{
							type = "text";
							source = "static";
							text = "N";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.005,0.14},1};
							right[] = {{0.035,0.14},1};
							down[] = {{0.005,0.17},1};
						};
						class NextToShoot2
						{
							type = "text";
							source = "static";
							text = "T";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.005,0.18},1};
							right[] = {{0.035,0.18},1};
							down[] = {{0.005,0.21},1};
						};
						class NextToShoot3
						{
							type = "text";
							source = "static";
							text = "S";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{0.005,0.22},1};
							right[] = {{0.035,0.22},1};
							down[] = {{0.005,0.25},1};
						};
						class RF_Sel1
						{
							type = "text";
							source = "static";
							text = "RF";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.995,0.55},1};
							right[] = {{1.025,0.55},1};
							down[] = {{0.995,0.58},1};
						};
						class RF_Sel2
						{
							type = "text";
							source = "static";
							text = "HO";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.995,0.59},1};
							right[] = {{1.025,0.59},1};
							down[] = {{0.995,0.62},1};
						};
						class AcquisitionBtn1
						{
							type = "text";
							source = "static";
							text = "ACQ";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.995,0.78},1};
							right[] = {{1.025,0.78},1};
							down[] = {{0.995,0.81},1};
						};
						class AcquisitionBtn2
						{
							type = "text";
							source = "static";
							text = "T32";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.995,0.84},1};
							right[] = {{1.025,0.84},1};
							down[] = {{0.995,0.87},1};
						};
						class CScope
						{
							type = "text";
							source = "static";
							text = "C SCP";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.23,0.03},1};
							right[] = {{0.26,0.03},1};
							down[] = {{0.23,0.06},1};
						};
						class Utilities
						{
							type = "text";
							source = "static";
							text = "UTIL";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.89,0.03},1};
							right[] = {{0.92,0.03},1};
							down[] = {{0.89,0.06},1};
						};
						class TotalTargetCount
						{
							type = "text";
							source = "static";
							text = "XXXX";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.97,0.08},1};
							right[] = {{1,0.08},1};
							down[] = {{0.97,0.11},1};
						};
						class RadarGround
						{
							condition = "1-user8";
							class Static
							{
								type = "line";
								width = 4;
								points[] = {{{0.4,0.91},1},{{0.4,0.99},1},{{0.6,0.99},1},{{0.6,0.91},1},{{0.4,0.91},1},{},{{0.4,0.935},1},{{0.408,0.935},1},{},{{0.6,0.935},1},{{0.592,0.935},1},{},{{0.5,0.91},1},{{0.5,0.918},1},{},{{0.5,0.99},1},{{0.5,0.982},1},{},{{0.001,0.71},1},{{0.111,0.71},1},{{0.111,0.76},1},{{0.001,0.76},1},{{0.001,0.71},1},{},{{0.915,0.83},1},{{1,0.83},1},{{1,0.88},1},{{0.915,0.88},1},{{0.915,0.83},1},{},{"GunnerAim",{0.485,0.942},1},{"GunnerAim",{0.485,0.958},1},{"GunnerAim",{0.515,0.958},1},{"GunnerAim",{0.515,0.942},1},{"GunnerAim",{0.485,0.942},1},{},{"Static_Offset2",{0.0353553,-0.0350295},1},{"Static_Offset2",{0.480833,-0.476401},1},{"Static_Offset2",{0.459401,-0.496728},1},{"Static_Offset2",{0.437096,-0.516109},1},{"Static_Offset2",{0.413958,-0.534508},1},{"Static_Offset2",{0.390032,-0.55189},1},{"Static_Offset2",{0.365364,-0.56822},1},{"Static_Offset2",{0.34,-0.58347},1},{"Static_Offset2",{0.313989,-0.597608},1},{"Static_Offset2",{0.28738,-0.610609},1},{"Static_Offset2",{0.260225,-0.622448},1},{"Static_Offset2",{0.232574,-0.633102},1},{"Static_Offset2",{0.20448,-0.64255},1},{"Static_Offset2",{0.175997,-0.650776},1},{"Static_Offset2",{0.147179,-0.657763},1},{"Static_Offset2",{0.118081,-0.663497},1},{"Static_Offset2",{0.0887578,-0.667969},1},{"Static_Offset2",{0.0592659,-0.671169},1},{"Static_Offset2",{0.0296612,-0.673092},1},{"Static_Offset2",{0,-0.673733},1},{"Static_Offset2",{-0.0296612,-0.673092},1},{"Static_Offset2",{-0.0592659,-0.671169},1},{"Static_Offset2",{-0.0887578,-0.667969},1},{"Static_Offset2",{-0.118081,-0.663497},1},{"Static_Offset2",{-0.147179,-0.657763},1},{"Static_Offset2",{-0.175997,-0.650776},1},{"Static_Offset2",{-0.20448,-0.64255},1},{"Static_Offset2",{-0.232574,-0.633102},1},{"Static_Offset2",{-0.260225,-0.622448},1},{"Static_Offset2",{-0.28738,-0.610609},1},{"Static_Offset2",{-0.313989,-0.597608},1},{"Static_Offset2",{-0.34,-0.58347},1},{"Static_Offset2",{-0.365364,-0.56822},1},{"Static_Offset2",{-0.390032,-0.55189},1},{"Static_Offset2",{-0.413958,-0.534508},1},{"Static_Offset2",{-0.437096,-0.516109},1},{"Static_Offset2",{-0.459401,-0.496728},1},{"Static_Offset2",{-0.480833,-0.476401},1},{"Static_Offset2",{-0.0353553,-0.0350295},1},{"Static_Offset2",{-0.480833,-0.476401},1},{},{"Static_Offset2",{0,-0.673733},1},{"Static_Offset2",{0,-0.653917},1},{},{"Static_Offset2",{0.0887578,-0.667969},1},{"Static_Offset2",{0.0861473,-0.648323},1},{},{"Static_Offset2",{0.175997,-0.650776},1},{"Static_Offset2",{0.170821,-0.631635},1},{},{"Static_Offset2",{0.260225,-0.622448},1},{"Static_Offset2",{0.252571,-0.604141},1},{},{"Static_Offset2",{-0.0887578,-0.667969},1},{"Static_Offset2",{-0.0861473,-0.648323},1},{},{"Static_Offset2",{-0.175997,-0.650776},1},{"Static_Offset2",{-0.170821,-0.631635},1},{},{"Static_Offset2",{-0.260225,-0.622448},1},{"Static_Offset2",{-0.252571,-0.604141},1},{}};
							};
							class StaticLight
							{
								type = "line";
								width = 2.0;
								points[] = {{"Static_Offset2",{0.360624,-0.357301},1},{"Static_Offset2",{0.344551,-0.372546},1},{"Static_Offset2",{0.327822,-0.387082},1},{"Static_Offset2",{0.310468,-0.400881},1},{"Static_Offset2",{0.292524,-0.413917},1},{"Static_Offset2",{0.274023,-0.426165},1},{"Static_Offset2",{0.255,-0.437602},1},{"Static_Offset2",{0.235492,-0.448206},1},{"Static_Offset2",{0.215535,-0.457957},1},{"Static_Offset2",{0.195169,-0.466836},1},{"Static_Offset2",{0.17443,-0.474826},1},{"Static_Offset2",{0.15336,-0.481913},1},{"Static_Offset2",{0.131998,-0.488082},1},{"Static_Offset2",{0.110384,-0.493322},1},{"Static_Offset2",{0.0885606,-0.497623},1},{"Static_Offset2",{0.0665684,-0.500977},1},{"Static_Offset2",{0.0444494,-0.503377},1},{"Static_Offset2",{0.0222459,-0.504819},1},{"Static_Offset2",{0,-0.5053},1},{"Static_Offset2",{-0.0222459,-0.504819},1},{"Static_Offset2",{-0.0444494,-0.503377},1},{"Static_Offset2",{-0.0665684,-0.500977},1},{"Static_Offset2",{-0.0885606,-0.497623},1},{"Static_Offset2",{-0.110384,-0.493322},1},{"Static_Offset2",{-0.131998,-0.488082},1},{"Static_Offset2",{-0.15336,-0.481913},1},{"Static_Offset2",{-0.17443,-0.474826},1},{"Static_Offset2",{-0.195169,-0.466836},1},{"Static_Offset2",{-0.215535,-0.457957},1},{"Static_Offset2",{-0.235492,-0.448206},1},{"Static_Offset2",{-0.255,-0.437602},1},{"Static_Offset2",{-0.274023,-0.426165},1},{"Static_Offset2",{-0.292524,-0.413917},1},{"Static_Offset2",{-0.310468,-0.400881},1},{"Static_Offset2",{-0.327822,-0.387082},1},{"Static_Offset2",{-0.344551,-0.372546},1},{"Static_Offset2",{-0.360624,-0.357301},1},{},{"Static_Offset2",{0.240416,-0.238201},1},{"Static_Offset2",{0.229701,-0.248364},1},{"Static_Offset2",{0.218548,-0.258055},1},{"Static_Offset2",{0.206979,-0.267254},1},{"Static_Offset2",{0.195016,-0.275945},1},{"Static_Offset2",{0.182682,-0.28411},1},{"Static_Offset2",{0.17,-0.291735},1},{"Static_Offset2",{0.156995,-0.298804},1},{"Static_Offset2",{0.14369,-0.305305},1},{"Static_Offset2",{0.130112,-0.311224},1},{"Static_Offset2",{0.116287,-0.316551},1},{"Static_Offset2",{0.10224,-0.321275},1},{"Static_Offset2",{0.0879985,-0.325388},1},{"Static_Offset2",{0.0735895,-0.328881},1},{"Static_Offset2",{0.0590404,-0.331749},1},{"Static_Offset2",{0.0443789,-0.333984},1},{"Static_Offset2",{0.029633,-0.335584},1},{"Static_Offset2",{0.0148306,-0.336546},1},{"Static_Offset2",{0,-0.336866},1},{"Static_Offset2",{-0.0148306,-0.336546},1},{"Static_Offset2",{-0.029633,-0.335584},1},{"Static_Offset2",{-0.0443789,-0.333984},1},{"Static_Offset2",{-0.0590404,-0.331749},1},{"Static_Offset2",{-0.0735895,-0.328881},1},{"Static_Offset2",{-0.0879985,-0.325388},1},{"Static_Offset2",{-0.10224,-0.321275},1},{"Static_Offset2",{-0.116287,-0.316551},1},{"Static_Offset2",{-0.130112,-0.311224},1},{"Static_Offset2",{-0.14369,-0.305305},1},{"Static_Offset2",{-0.156995,-0.298804},1},{"Static_Offset2",{-0.17,-0.291735},1},{"Static_Offset2",{-0.182682,-0.28411},1},{"Static_Offset2",{-0.195016,-0.275945},1},{"Static_Offset2",{-0.206979,-0.267254},1},{"Static_Offset2",{-0.218548,-0.258055},1},{"Static_Offset2",{-0.229701,-0.248364},1},{"Static_Offset2",{-0.240416,-0.238201},1},{},{"Static_Offset2",{0.120208,-0.1191},1},{"Static_Offset2",{0.11485,-0.124182},1},{"Static_Offset2",{0.109274,-0.129027},1},{"Static_Offset2",{0.103489,-0.133627},1},{"Static_Offset2",{0.097508,-0.137972},1},{"Static_Offset2",{0.0913409,-0.142055},1},{"Static_Offset2",{0.085,-0.145867},1},{"Static_Offset2",{0.0784973,-0.149402},1},{"Static_Offset2",{0.0718451,-0.152652},1},{"Static_Offset2",{0.0650562,-0.155612},1},{"Static_Offset2",{0.0581434,-0.158275},1},{"Static_Offset2",{0.05112,-0.160638},1},{"Static_Offset2",{0.0439992,-0.162694},1},{"Static_Offset2",{0.0367947,-0.164441},1},{"Static_Offset2",{0.0295202,-0.165874},1},{"Static_Offset2",{0.0221895,-0.166992},1},{"Static_Offset2",{0.0148165,-0.167792},1},{"Static_Offset2",{0.0074153,-0.168273},1},{"Static_Offset2",{0,-0.168433},1},{"Static_Offset2",{-0.0074153,-0.168273},1},{"Static_Offset2",{-0.0148165,-0.167792},1},{"Static_Offset2",{-0.0221895,-0.166992},1},{"Static_Offset2",{-0.0295202,-0.165874},1},{"Static_Offset2",{-0.0367947,-0.164441},1},{"Static_Offset2",{-0.0439992,-0.162694},1},{"Static_Offset2",{-0.05112,-0.160638},1},{"Static_Offset2",{-0.0581434,-0.158275},1},{"Static_Offset2",{-0.0650562,-0.155612},1},{"Static_Offset2",{-0.0718451,-0.152652},1},{"Static_Offset2",{-0.0784973,-0.149402},1},{"Static_Offset2",{-0.085,-0.145867},1},{"Static_Offset2",{-0.0913409,-0.142055},1},{"Static_Offset2",{-0.097508,-0.137972},1},{"Static_Offset2",{-0.103489,-0.133627},1},{"Static_Offset2",{-0.109274,-0.129027},1},{"Static_Offset2",{-0.11485,-0.124182},1},{"Static_Offset2",{-0.120208,-0.1191},1},{},{"Static_Offset2",{0.0601041,-0.0595501},1},{"Static_Offset2",{0.0450431,-0.0714197},1},{},{"Static_Offset2",{0.180312,-0.17865},1},{"Static_Offset2",{0.163911,-0.193541},1},{},{"Static_Offset2",{0.30052,-0.297751},1},{"Static_Offset2",{0.284381,-0.312926},1},{},{"Static_Offset2",{0.420729,-0.416851},1},{"Static_Offset2",{0.405789,-0.431145},1},{},{"Static_Offset2",{-0.0601041,-0.0595501},1},{"Static_Offset2",{-0.0450431,-0.0714197},1},{},{"Static_Offset2",{-0.180312,-0.17865},1},{"Static_Offset2",{-0.163911,-0.193541},1},{},{"Static_Offset2",{-0.30052,-0.297751},1},{"Static_Offset2",{-0.284381,-0.312926},1},{},{"Static_Offset2",{-0.420729,-0.416851},1},{"Static_Offset2",{-0.405789,-0.431145},1},{}};
							};
							class TransponderID
							{
								type = "text";
								source = "static";
								text = "ELEV";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.005,0.66},1};
								right[] = {{0.035,0.66},1};
								down[] = {{0.005,0.69},1};
							};
							class ElevMode
							{
								type = "text";
								source = "static";
								text = "AUTO";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.005,0.72},1};
								right[] = {{0.035,0.72},1};
								down[] = {{0.005,0.75},1};
							};
							class ZoomBtn1
							{
								type = "text";
								source = "static";
								text = "Z";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.965,0.14},1};
								right[] = {{0.995,0.14},1};
								down[] = {{0.965,0.17},1};
							};
							class ZoomBtn2
							{
								type = "text";
								source = "static";
								text = "O";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.965,0.18},1};
								right[] = {{0.995,0.18},1};
								down[] = {{0.965,0.21},1};
							};
							class ZoomBtn3
							{
								type = "text";
								source = "static";
								text = "O";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.965,0.22},1};
								right[] = {{0.995,0.22},1};
								down[] = {{0.965,0.25},1};
							};
							class ZoomBtn4
							{
								type = "text";
								source = "static";
								text = "M";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.965,0.26},1};
								right[] = {{0.995,0.26},1};
								down[] = {{0.965,0.29},1};
							};
							class SensorGroup
							{
								class Sensor
								{
									type = "sensor";
									pos[] = {"Sensor_Offset",{"0+-0.18","0+-0.18"},1};
									down[] = {"Sensor_Offset",{"1--0.18","1--0.18"},1};
									showTargetTypes = "2+4+8+16+32+64+128+256+512+1024";
									width = 4;
									sensorLineType = 0;
									sensorLineWidth = 3;
									targetLineWidth = -0.00192;
									targetLineLength = 0.02;
									range = 8000;
									class MissileThreat
									{
										color[] = {1,0,0};
										class TargetLines
										{
											type = "line";
											width = 2;
											points[] = {{{0,-0.0198157},1},{{0.003472,-0.0195145},1},{{0.00684,-0.0186208},1},{{0.01,-0.0171604},1},{{0.012856,-0.0151788},1},{{0.01532,-0.0127375},1},{{0.01732,-0.00990783},1},{{0.018794,-0.00677696},1},{{0.019696,-0.00344},1},{{0.02,0},1},{{0.019696,0.00344},1},{{0.018794,0.00677696},1},{{0.01732,0.00990783},1},{{0.01532,0.0127375},1},{{0.012856,0.0151788},1},{{0.01,0.0171604},1},{{0.00684,0.0186208},1},{{0.003472,0.0195145},1},{{0,0.0198157},1},{{-0.003472,0.0195145},1},{{-0.00684,0.0186208},1},{{-0.01,0.0171604},1},{{-0.012856,0.0151788},1},{{-0.01532,0.0127375},1},{{-0.01732,0.00990783},1},{{-0.018794,0.00677696},1},{{-0.019696,0.00344},1},{{-0.02,0},1},{{-0.019696,-0.00344},1},{{-0.018794,-0.00677696},1},{{-0.01732,-0.00990783},1},{{-0.01532,-0.0127375},1},{{-0.012856,-0.0151788},1},{{-0.01,-0.0171604},1},{{-0.00684,-0.0186208},1},{{-0.003472,-0.0195145},1},{{0,-0.0198157},1}};
										};
										class TextM
										{
											type = "text";
											source = "static";
											text = "M";
											align = "center";
											scale = 1;
											pos[] = {{0.0,-0.01},1};
											right[] = {{0.02,-0.01},1};
											down[] = {{0.0,0.01},1};
										};
									};
									class lockingThreat
									{
										color[] = {1,0.3,0};
										class TargetLines
										{
											type = "line";
											points[] = {{{0.02,0},1},{{0,0.0198157},1},{{-0.02,0},1},{{0,-0.0198157},1},{{0.02,0},1}};
										};
									};
									class markingThreat: lockingThreat
									{
										class TargetLines: TargetLines{};
									};
									class rwr
									{
										class TargetLines
										{
											type = "line";
											width = 2;
											points[] = {{{0.02,0},1},{{0,0.0198157},1},{{-0.02,0},1},{{0,-0.0198157},1},{{0.02,0},1}};
										};
									};
									class rwrFriendly: rwr
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class rwrEnemy: rwr
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class rwrGroup: rwr
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class rwrDestroyed{};
									class markedTarget
									{
										color[] = {1,0.3,0};
										class TargetLines
										{
											type = "line";
											width = 3;
											points[] = {{{-0.017,-0.0168433},1},{{-0.01,-0.0168433},1},{},{{0.017,-0.0168433},1},{{0.01,-0.0168433},1},{},{{-0.017,-0.0168433},1},{{-0.017,-0.00990783},1},{},{{0.017,-0.0168433},1},{{0.017,-0.00990783},1},{},{{-0.017,0.0168433},1},{{-0.01,0.0168433},1},{},{{0.017,0.0168433},1},{{0.01,0.0168433},1},{},{{-0.017,0.0168433},1},{{-0.017,0.00990783},1},{},{{0.017,0.0168433},1},{{0.017,0.00990783},1},{}};
										};
									};
									class assignedTarget: markedTarget
									{
										color[] = {1,0.0,0};
										class TargetLines: TargetLines{};
									};
									class target
									{
										color[] = {1,0.3,0};
										class TargetLines
										{
											type = "polygon";
											points[] = {{{{-0.01,-0.01},1},{{0,-0.01},1},{{0,0},1},{{-0.01,0},1}}};
										};
									};
									class targetFriendly: target
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetEnemy: target
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroup: target
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetDestroyed{};
									class targetGround: target
									{
										class TargetLines: TargetLines
										{
											type = "polygon";
											points[] = {{{{-0.01,-0.01},1},{{0.015,-0.01},1},{{0.015,0},1},{{-0.01,0},1}},{{{-0.007,-0.018},1},{{-0.002,-0.018},1},{{-0.002,0.007},1},{{-0.007,0.007},1}},{{{0.007,-0.018},1},{{0.012,-0.018},1},{{0.012,0.007},1},{{0.007,0.007},1}}};
										};
									};
									class targetGroundFriendly: targetGround
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundEnemy: targetGround
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundGroup: targetGround
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundDestroyed{};
									class targetGroundRemote: target
									{
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteFriendly: targetGroundRemote
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteEnemy: targetGroundRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteGroup: targetGroundRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteDestroyed{};
									class targetLaser: target
									{
										class TargetLines: TargetLines
										{
											type = "line";
											width = 4;
											points[] = {{{0,-0.0198157},1},{{-1.74846e-09,0.0198157},1},{},{{0.02,8.6617e-10},1},{{-0.02,-2.36299e-10},1},{},{{0.0106066,-0.0105088},1},{{-0.0106066,0.0105088},1},{},{{0.0106066,0.0105088},1},{{-0.0106066,-0.0105088},1},{}};
										};
									};
									class targetLaserFriendly: targetLaser
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetLaserEnemy: targetLaser
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetLaserGroup: targetLaser
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetNVG: targetLaser
									{
										class TargetLines: TargetLines{};
									};
									class targetNVGFriendly: targetNVG
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetNVGEnemy: targetNVG
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetNVGGroup: targetNVG
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetMan: target
									{
										class TargetLines: TargetLines{};
									};
									class targetManFriendly: targetMan
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetManEnemy: targetMan
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetManGroup: targetMan
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetManRemote: target
									{
										class TargetLines: TargetLines{};
									};
									class targetManRemoteFriendly: targetManRemote
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetManRemoteEnemy: targetManRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetManRemoteGroup: targetManRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAir
									{
										color[] = {1,1,1};
										class TargetLines
										{
											type = "polygon";
											points[] = {{{{0.0,0.0},1},{{0.01,0.015},1},{{-0.01,0.015},1}},{{{0.0,0.0},1},{{0.01,-0.015},1},{{-0.01,-0.015},1}}};
										};
									};
									class targetAirFriendly: targetAir
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetAirEnemy: targetAir
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirGroup: targetAir
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirDestroyed{};
									class targetAirRemote: targetAir
									{
										color[] = {1,1,1};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteFriendly: targetAirRemote
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteEnemy: targetAirRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteGroup: targetAirRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteDestroyed{};
								};
							};
						};
						class RadarAir
						{
							condition = "user8";
							class Static
							{
								type = "line";
								width = 4;
								points[] = {{"Static_Offset_AA",{0,-0.356682},1},{"Static_Offset_AA",{0,-0.307143},1},{},{"Static_Offset_AA",{0.36,1.55911e-08},1},{"Static_Offset_AA",{0.31,1.34256e-08},1},{},{"Static_Offset_AA",{-3.14722e-08,0.356682},1},{"Static_Offset_AA",{-2.71011e-08,0.307143},1},{},{"Static_Offset_AA",{-0.36,-4.25339e-09},1},{"Static_Offset_AA",{-0.31,-3.66264e-09},1},{},{{0.0183731,0.711393},1},{{0.0183731,0.693483},1},{{0.0129005,0.693483},1},{{0.0278259,0.667114},1},{{0.0427512,0.693483},1},{{0.0367811,0.693483},1},{{0.0367811,0.711393},1},{{0.0183731,0.711393},1},{},{{0.0183731,0.762637},1},{{0.0183731,0.78005},1},{{0.0129005,0.78005},1},{{0.0278259,0.806915},1},{{0.0427512,0.78005},1},{{0.0367811,0.78005},1},{{0.0367811,0.762637},1},{{0.0183731,0.762637},1},{},{{0.437776,0.916866},1},{{0.441259,0.90791},1},{{0.451706,0.902438},1},{{0.551706,0.902438},1},{{0.562154,0.907413},1},{{0.565139,0.916866},1},{{0.565139,0.977065},1},{{0.562652,0.98204},1},{{0.557179,0.987015},1},{{0.552204,0.99},1},{{0.451706,0.99},1},{{0.445736,0.986517},1},{{0.440761,0.981542},1},{{0.437776,0.97607},1},{{0.437776,0.916866},1},{}};
							};
							class StaticBold
							{
								type = "line";
								width = 6;
								points[] = {{"Static_Offset_AA",{0,-0.356682},1},{"Static_Offset_AA",{0.062496,-0.35126},1},{"Static_Offset_AA",{0.12312,-0.335174},1},{"Static_Offset_AA",{0.18,-0.308887},1},{"Static_Offset_AA",{0.231408,-0.273218},1},{"Static_Offset_AA",{0.27576,-0.229275},1},{"Static_Offset_AA",{0.31176,-0.178341},1},{"Static_Offset_AA",{0.338292,-0.121985},1},{"Static_Offset_AA",{0.354528,-0.06192},1},{"Static_Offset_AA",{0.36,0},1},{"Static_Offset_AA",{0.354528,0.06192},1},{"Static_Offset_AA",{0.338292,0.121985},1},{"Static_Offset_AA",{0.31176,0.178341},1},{"Static_Offset_AA",{0.27576,0.229275},1},{"Static_Offset_AA",{0.231408,0.273218},1},{"Static_Offset_AA",{0.18,0.308887},1},{"Static_Offset_AA",{0.12312,0.335174},1},{"Static_Offset_AA",{0.062496,0.35126},1},{"Static_Offset_AA",{0,0.356682},1},{"Static_Offset_AA",{-0.062496,0.35126},1},{"Static_Offset_AA",{-0.12312,0.335174},1},{"Static_Offset_AA",{-0.18,0.308887},1},{"Static_Offset_AA",{-0.231408,0.273218},1},{"Static_Offset_AA",{-0.27576,0.229275},1},{"Static_Offset_AA",{-0.31176,0.178341},1},{"Static_Offset_AA",{-0.338292,0.121985},1},{"Static_Offset_AA",{-0.354528,0.06192},1},{"Static_Offset_AA",{-0.36,0},1},{"Static_Offset_AA",{-0.354528,-0.06192},1},{"Static_Offset_AA",{-0.338292,-0.121985},1},{"Static_Offset_AA",{-0.31176,-0.178341},1},{"Static_Offset_AA",{-0.27576,-0.229275},1},{"Static_Offset_AA",{-0.231408,-0.273218},1},{"Static_Offset_AA",{-0.18,-0.308887},1},{"Static_Offset_AA",{-0.12312,-0.335174},1},{"Static_Offset_AA",{-0.062496,-0.35126},1},{"Static_Offset_AA",{0,-0.356682},1},{},{"Static_Offset_AA",{0,-0.257604},1},{"Static_Offset_AA",{0.045136,-0.253688},1},{"Static_Offset_AA",{0.08892,-0.24207},1},{"Static_Offset_AA",{0.13,-0.223085},1},{"Static_Offset_AA",{0.167128,-0.197324},1},{"Static_Offset_AA",{0.19916,-0.165588},1},{"Static_Offset_AA",{0.22516,-0.128802},1},{"Static_Offset_AA",{0.244322,-0.0881005},1},{"Static_Offset_AA",{0.256048,-0.04472},1},{"Static_Offset_AA",{0.26,0},1},{"Static_Offset_AA",{0.256048,0.04472},1},{"Static_Offset_AA",{0.244322,0.0881005},1},{"Static_Offset_AA",{0.22516,0.128802},1},{"Static_Offset_AA",{0.19916,0.165588},1},{"Static_Offset_AA",{0.167128,0.197324},1},{"Static_Offset_AA",{0.13,0.223085},1},{"Static_Offset_AA",{0.08892,0.24207},1},{"Static_Offset_AA",{0.045136,0.253688},1},{"Static_Offset_AA",{0,0.257604},1},{"Static_Offset_AA",{-0.045136,0.253688},1},{"Static_Offset_AA",{-0.08892,0.24207},1},{"Static_Offset_AA",{-0.13,0.223085},1},{"Static_Offset_AA",{-0.167128,0.197324},1},{"Static_Offset_AA",{-0.19916,0.165588},1},{"Static_Offset_AA",{-0.22516,0.128802},1},{"Static_Offset_AA",{-0.244322,0.0881005},1},{"Static_Offset_AA",{-0.256048,0.04472},1},{"Static_Offset_AA",{-0.26,0},1},{"Static_Offset_AA",{-0.256048,-0.04472},1},{"Static_Offset_AA",{-0.244322,-0.0881005},1},{"Static_Offset_AA",{-0.22516,-0.128802},1},{"Static_Offset_AA",{-0.19916,-0.165588},1},{"Static_Offset_AA",{-0.167128,-0.197324},1},{"Static_Offset_AA",{-0.13,-0.223085},1},{"Static_Offset_AA",{-0.08892,-0.24207},1},{"Static_Offset_AA",{-0.045136,-0.253688},1},{"Static_Offset_AA",{0,-0.257604},1},{},{"Static_Offset_AA",{0,-0.168433},1},{"Static_Offset_AA",{0.029512,-0.165873},1},{"Static_Offset_AA",{0.05814,-0.158277},1},{"Static_Offset_AA",{0.085,-0.145863},1},{"Static_Offset_AA",{0.109276,-0.12902},1},{"Static_Offset_AA",{0.13022,-0.108269},1},{"Static_Offset_AA",{0.14722,-0.0842166},1},{"Static_Offset_AA",{0.159749,-0.0576042},1},{"Static_Offset_AA",{0.167416,-0.02924},1},{"Static_Offset_AA",{0.17,0},1},{"Static_Offset_AA",{0.167416,0.02924},1},{"Static_Offset_AA",{0.159749,0.0576042},1},{"Static_Offset_AA",{0.14722,0.0842166},1},{"Static_Offset_AA",{0.13022,0.108269},1},{"Static_Offset_AA",{0.109276,0.12902},1},{"Static_Offset_AA",{0.085,0.145863},1},{"Static_Offset_AA",{0.05814,0.158277},1},{"Static_Offset_AA",{0.029512,0.165873},1},{"Static_Offset_AA",{0,0.168433},1},{"Static_Offset_AA",{-0.029512,0.165873},1},{"Static_Offset_AA",{-0.05814,0.158277},1},{"Static_Offset_AA",{-0.085,0.145863},1},{"Static_Offset_AA",{-0.109276,0.12902},1},{"Static_Offset_AA",{-0.13022,0.108269},1},{"Static_Offset_AA",{-0.14722,0.0842166},1},{"Static_Offset_AA",{-0.159749,0.0576042},1},{"Static_Offset_AA",{-0.167416,0.02924},1},{"Static_Offset_AA",{-0.17,0},1},{"Static_Offset_AA",{-0.167416,-0.02924},1},{"Static_Offset_AA",{-0.159749,-0.0576042},1},{"Static_Offset_AA",{-0.14722,-0.0842166},1},{"Static_Offset_AA",{-0.13022,-0.108269},1},{"Static_Offset_AA",{-0.109276,-0.12902},1},{"Static_Offset_AA",{-0.085,-0.145863},1},{"Static_Offset_AA",{-0.05814,-0.158277},1},{"Static_Offset_AA",{-0.029512,-0.165873},1},{"Static_Offset_AA",{0,-0.168433},1},{},{"Static_Offset_AA",{0,-0.0792627},1},{"Static_Offset_AA",{0.013888,-0.0780579},1},{"Static_Offset_AA",{0.02736,-0.0744831},1},{"Static_Offset_AA",{0.04,-0.0686415},1},{"Static_Offset_AA",{0.051424,-0.0607152},1},{"Static_Offset_AA",{0.06128,-0.05095},1},{"Static_Offset_AA",{0.06928,-0.0396313},1},{"Static_Offset_AA",{0.075176,-0.0271078},1},{"Static_Offset_AA",{0.078784,-0.01376},1},{"Static_Offset_AA",{0.08,0},1},{"Static_Offset_AA",{0.078784,0.01376},1},{"Static_Offset_AA",{0.075176,0.0271078},1},{"Static_Offset_AA",{0.06928,0.0396313},1},{"Static_Offset_AA",{0.06128,0.05095},1},{"Static_Offset_AA",{0.051424,0.0607152},1},{"Static_Offset_AA",{0.04,0.0686415},1},{"Static_Offset_AA",{0.02736,0.0744831},1},{"Static_Offset_AA",{0.013888,0.0780579},1},{"Static_Offset_AA",{0,0.0792627},1},{"Static_Offset_AA",{-0.013888,0.0780579},1},{"Static_Offset_AA",{-0.02736,0.0744831},1},{"Static_Offset_AA",{-0.04,0.0686415},1},{"Static_Offset_AA",{-0.051424,0.0607152},1},{"Static_Offset_AA",{-0.06128,0.05095},1},{"Static_Offset_AA",{-0.06928,0.0396313},1},{"Static_Offset_AA",{-0.075176,0.0271078},1},{"Static_Offset_AA",{-0.078784,0.01376},1},{"Static_Offset_AA",{-0.08,0},1},{"Static_Offset_AA",{-0.078784,-0.01376},1},{"Static_Offset_AA",{-0.075176,-0.0271078},1},{"Static_Offset_AA",{-0.06928,-0.0396313},1},{"Static_Offset_AA",{-0.06128,-0.05095},1},{"Static_Offset_AA",{-0.051424,-0.0607152},1},{"Static_Offset_AA",{-0.04,-0.0686415},1},{"Static_Offset_AA",{-0.02736,-0.0744831},1},{"Static_Offset_AA",{-0.013888,-0.0780579},1},{"Static_Offset_AA",{0,-0.0792627},1},{},{"Static_Offset_AA",{0,-0.0148618},1},{"Static_Offset_AA",{0.002604,-0.0146359},1},{"Static_Offset_AA",{0.00513,-0.0139656},1},{"Static_Offset_AA",{0.0075,-0.0128703},1},{"Static_Offset_AA",{0.009642,-0.0113841},1},{"Static_Offset_AA",{0.01149,-0.00955313},1},{"Static_Offset_AA",{0.01299,-0.00743088},1},{"Static_Offset_AA",{0.0140955,-0.00508272},1},{"Static_Offset_AA",{0.014772,-0.00258},1},{"Static_Offset_AA",{0.015,0},1},{"Static_Offset_AA",{0.014772,0.00258},1},{"Static_Offset_AA",{0.0140955,0.00508272},1},{"Static_Offset_AA",{0.01299,0.00743088},1},{"Static_Offset_AA",{0.01149,0.00955313},1},{"Static_Offset_AA",{0.009642,0.0113841},1},{"Static_Offset_AA",{0.0075,0.0128703},1},{"Static_Offset_AA",{0.00513,0.0139656},1},{"Static_Offset_AA",{0.002604,0.0146359},1},{"Static_Offset_AA",{0,0.0148618},1},{"Static_Offset_AA",{-0.002604,0.0146359},1},{"Static_Offset_AA",{-0.00513,0.0139656},1},{"Static_Offset_AA",{-0.0075,0.0128703},1},{"Static_Offset_AA",{-0.009642,0.0113841},1},{"Static_Offset_AA",{-0.01149,0.00955313},1},{"Static_Offset_AA",{-0.01299,0.00743088},1},{"Static_Offset_AA",{-0.0140955,0.00508272},1},{"Static_Offset_AA",{-0.014772,0.00258},1},{"Static_Offset_AA",{-0.015,0},1},{"Static_Offset_AA",{-0.014772,-0.00258},1},{"Static_Offset_AA",{-0.0140955,-0.00508272},1},{"Static_Offset_AA",{-0.01299,-0.00743088},1},{"Static_Offset_AA",{-0.01149,-0.00955313},1},{"Static_Offset_AA",{-0.009642,-0.0113841},1},{"Static_Offset_AA",{-0.0075,-0.0128703},1},{"Static_Offset_AA",{-0.00513,-0.0139656},1},{"Static_Offset_AA",{-0.002604,-0.0146359},1},{"Static_Offset_AA",{0,-0.0148618},1},{}};
							};
							class SensorGroup
							{
								class Sensor
								{
									type = "sensor";
									pos[] = {"Sensor_Offset_AA",{"0+0.145","0+0.145"},1};
									down[] = {"Sensor_Offset_AA",{"1-0.145","1-0.145"},1};
									showTargetTypes = "2+4+8+16+32+64+128+256+512+1024";
									width = 4;
									sensorLineType = 0;
									sensorLineWidth = 3;
									targetLineWidth = -0.00192;
									targetLineLength = 0.02;
									range = 8000;
									class MissileThreat
									{
										color[] = {1,0,0};
										class TargetLines
										{
											type = "line";
											width = 2;
											points[] = {{{0,-0.0198157},1},{{0.003472,-0.0195145},1},{{0.00684,-0.0186208},1},{{0.01,-0.0171604},1},{{0.012856,-0.0151788},1},{{0.01532,-0.0127375},1},{{0.01732,-0.00990783},1},{{0.018794,-0.00677696},1},{{0.019696,-0.00344},1},{{0.02,0},1},{{0.019696,0.00344},1},{{0.018794,0.00677696},1},{{0.01732,0.00990783},1},{{0.01532,0.0127375},1},{{0.012856,0.0151788},1},{{0.01,0.0171604},1},{{0.00684,0.0186208},1},{{0.003472,0.0195145},1},{{0,0.0198157},1},{{-0.003472,0.0195145},1},{{-0.00684,0.0186208},1},{{-0.01,0.0171604},1},{{-0.012856,0.0151788},1},{{-0.01532,0.0127375},1},{{-0.01732,0.00990783},1},{{-0.018794,0.00677696},1},{{-0.019696,0.00344},1},{{-0.02,0},1},{{-0.019696,-0.00344},1},{{-0.018794,-0.00677696},1},{{-0.01732,-0.00990783},1},{{-0.01532,-0.0127375},1},{{-0.012856,-0.0151788},1},{{-0.01,-0.0171604},1},{{-0.00684,-0.0186208},1},{{-0.003472,-0.0195145},1},{{0,-0.0198157},1}};
										};
										class TextM
										{
											type = "text";
											source = "static";
											text = "M";
											align = "center";
											scale = 1;
											pos[] = {{0.0,-0.01},1};
											right[] = {{0.02,-0.01},1};
											down[] = {{0.0,0.01},1};
										};
									};
									class lockingThreat
									{
										color[] = {1,0.3,0};
										class TargetLines
										{
											type = "line";
											points[] = {{{0.02,0},1},{{0,0.0198157},1},{{-0.02,0},1},{{0,-0.0198157},1},{{0.02,0},1}};
										};
									};
									class markingThreat: lockingThreat
									{
										class TargetLines: TargetLines{};
									};
									class rwr
									{
										class TargetLines
										{
											type = "line";
											width = 2;
											points[] = {{{0.02,0},1},{{0,0.0198157},1},{{-0.02,0},1},{{0,-0.0198157},1},{{0.02,0},1}};
										};
									};
									class rwrFriendly: rwr
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class rwrEnemy: rwr
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class rwrGroup: rwr
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class rwrDestroyed{};
									class markedTarget
									{
										color[] = {1,0.3,0};
										class TargetLines
										{
											type = "line";
											width = 3;
											points[] = {{{-0.017,-0.0168433},1},{{-0.01,-0.0168433},1},{},{{0.017,-0.0168433},1},{{0.01,-0.0168433},1},{},{{-0.017,-0.0168433},1},{{-0.017,-0.00990783},1},{},{{0.017,-0.0168433},1},{{0.017,-0.00990783},1},{},{{-0.017,0.0168433},1},{{-0.01,0.0168433},1},{},{{0.017,0.0168433},1},{{0.01,0.0168433},1},{},{{-0.017,0.0168433},1},{{-0.017,0.00990783},1},{},{{0.017,0.0168433},1},{{0.017,0.00990783},1},{}};
										};
									};
									class assignedTarget: markedTarget
									{
										color[] = {1,0.0,0};
										class TargetLines: TargetLines{};
									};
									class target
									{
										color[] = {1,0.3,0};
										class TargetLines
										{
											type = "polygon";
											points[] = {{{{-0.01,-0.01},1},{{0,-0.01},1},{{0,0},1},{{-0.01,0},1}}};
										};
									};
									class targetFriendly: target
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetEnemy: target
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroup: target
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetDestroyed{};
									class targetGround: target
									{
										class TargetLines: TargetLines
										{
											type = "polygon";
											points[] = {{{{-0.01,-0.01},1},{{0.015,-0.01},1},{{0.015,0},1},{{-0.01,0},1}},{{{-0.007,-0.018},1},{{-0.002,-0.018},1},{{-0.002,0.007},1},{{-0.007,0.007},1}},{{{0.007,-0.018},1},{{0.012,-0.018},1},{{0.012,0.007},1},{{0.007,0.007},1}}};
										};
									};
									class targetGroundFriendly: targetGround
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundEnemy: targetGround
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundGroup: targetGround
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundDestroyed{};
									class targetGroundRemote: target
									{
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteFriendly: targetGroundRemote
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteEnemy: targetGroundRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteGroup: targetGroundRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetGroundRemoteDestroyed{};
									class targetLaser: target
									{
										class TargetLines: TargetLines
										{
											type = "line";
											width = 4;
											points[] = {{{0,-0.0198157},1},{{-1.74846e-09,0.0198157},1},{},{{0.02,8.6617e-10},1},{{-0.02,-2.36299e-10},1},{},{{0.0106066,-0.0105088},1},{{-0.0106066,0.0105088},1},{},{{0.0106066,0.0105088},1},{{-0.0106066,-0.0105088},1},{}};
										};
									};
									class targetLaserFriendly: targetLaser
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetLaserEnemy: targetLaser
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetLaserGroup: targetLaser
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetNVG: targetLaser
									{
										class TargetLines: TargetLines{};
									};
									class targetNVGFriendly: targetNVG
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetNVGEnemy: targetNVG
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetNVGGroup: targetNVG
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetMan: target
									{
										class TargetLines: TargetLines{};
									};
									class targetManFriendly: targetMan
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetManEnemy: targetMan
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetManGroup: targetMan
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetManRemote: target
									{
										class TargetLines: TargetLines{};
									};
									class targetManRemoteFriendly: targetManRemote
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetManRemoteEnemy: targetManRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetManRemoteGroup: targetManRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAir
									{
										color[] = {1,1,1};
										class TargetLines
										{
											type = "polygon";
											points[] = {{{{0.0,0.0},1},{{0.01,0.015},1},{{-0.01,0.015},1}},{{{0.0,0.0},1},{{0.01,-0.015},1},{{-0.01,-0.015},1}}};
										};
									};
									class targetAirFriendly: targetAir
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetAirEnemy: targetAir
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirGroup: targetAir
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirDestroyed{};
									class targetAirRemote: targetAir
									{
										color[] = {1,1,1};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteFriendly: targetAirRemote
									{
										color[] = {0,1,0};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteEnemy: targetAirRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteGroup: targetAirRemote
									{
										color[] = {1,0,0};
										class TargetLines: TargetLines{};
									};
									class targetAirRemoteDestroyed{};
								};
							};
						};
						class RadarGroup
						{
							condition = "activeSensorsOn";
							class RadarGround
							{
								condition = "1-user8";
								class TransText
								{
									type = "text";
									source = "static";
									text = "FCR/G";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.1-0.02",0.92},1};
									right[] = {{0.107,0.92},1};
									down[] = {{"0.1-0.02",0.947},1};
								};
								class DrawLines
								{
									type = "line";
									width = 4;
									points[] = {{"Static_Offset2",1,{"FCR_ScanLine_Bottom",0,-0.0495392},1},{"Static_Offset2",1,{"FCR_ScanLine_Bottom",0,-0.336866},1},{},{"Static_Offset2",1,{"FCR_ScanLine_Top",0,-0.336866},1},{"Static_Offset2",1,{"FCR_ScanLine_Top",0,-0.673733},1},{}};
								};
							};
							class RadarAir
							{
								condition = "user8>=1";
								class TransText
								{
									type = "text";
									source = "static";
									text = "FCR/A";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.1-0.02",0.92},1};
									right[] = {{0.107,0.92},1};
									down[] = {{"0.1-0.02",0.947},1};
								};
								class DrawLines
								{
									type = "line";
									width = 4;
									points[] = {{"Static_Offset_AA",1,{"FCR_ScanLine_AA",0,-0.0128802},1},{"Static_Offset_AA",1,{"FCR_ScanLine_AA",0,-0.356682},1},{}};
								};
								class RangeBottom_Null
								{
									condition = "altitudeAGL<=100";
									class RangeBottom
									{
										type = "text";
										source = "static";
										text = "30";
										scale = 1;
										sourceScale = 1;
										align = "center";
										pos[] = {{0.5,0.955},1};
										right[] = {{0.524,0.955},1};
										down[] = {{0.5,0.979},1};
									};
								};
								class RangeBottom
								{
									condition = "altitudeAGL>=100";
									class RangeBottom
									{
										type = "text";
										source = "altitudeAGL";
										sourceScale = "3.2808399*0.6";
										sourceOffset = "-50*3.2808399*0.6";
										refreshRate = 0.1;
										align = "center";
										scale = 1;
										pos[] = {{0.5,"0.90+0.055"},1};
										right[] = {{0.524,"0.90+0.055"},1};
										down[] = {{0.5,0.979},1};
									};
								};
								class RangeTop
								{
									type = "text";
									source = "altitudeAGL";
									sourceScale = 3.28084;
									sourceOffset = "100*3.2808399";
									refreshRate = 0.1;
									align = "center";
									scale = 1;
									pos[] = {{0.5,"0.855+0.06"},1};
									right[] = {{0.524,"0.855+0.06"},1};
									down[] = {{0.5,0.939},1};
								};
							};
							class AutoRange
							{
								condition = "targetDist>=1";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "R";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.26-0.05",0.92},1};
									right[] = {{0.237,0.92},1};
									down[] = {{"0.26-0.05",0.947},1};
								};
								class RangeSource
								{
									type = "text";
									source = "targetDist";
									sourceScale = 0.001;
									sourceLength = 2;
									sourcePrecision = 1;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{"0.29-0.05","0.86+0.06"},1};
									right[] = {{0.267,"0.86+0.06"},1};
									down[] = {{"0.29-0.05",0.947},1};
								};
							};
							class LaserRange
							{
								condition = "targetDist<=0.99";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "*";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.26-0.05",0.92},1};
									right[] = {{0.237,0.92},1};
									down[] = {{"0.26-0.05",0.947},1};
								};
								class SpeedSource
								{
									type = "text";
									source = "laserDist";
									sourceScale = 1;
									sourceLength = 4;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{"0.29-0.05","0.86+0.06"},1};
									right[] = {{0.267,"0.86+0.06"},1};
									down[] = {{"0.29-0.05",0.947},1};
								};
							};
						};
						class TADSGroup
						{
							condition = "1-activeSensorsOn";
							class TransText
							{
								type = "text";
								source = "static";
								text = "TADS";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.1-0.02",0.92},1};
								right[] = {{0.107,0.92},1};
								down[] = {{"0.1-0.02",0.947},1};
							};
							class AutoRange
							{
								condition = "targetDist>=1";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "A";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.26-0.05",0.92},1};
									right[] = {{0.237,0.92},1};
									down[] = {{"0.26-0.05",0.947},1};
								};
								class RangeSource
								{
									type = "text";
									source = "targetDist";
									sourceScale = 0.001;
									sourceLength = 2;
									sourcePrecision = 1;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{"0.29-0.05","0.86+0.06"},1};
									right[] = {{0.267,"0.86+0.06"},1};
									down[] = {{"0.29-0.05",0.947},1};
								};
							};
							class LaserRange
							{
								condition = "targetDist<=0.99";
								class RangeText
								{
									type = "text";
									source = "static";
									text = "*";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.26-0.05",0.92},1};
									right[] = {{0.237,0.92},1};
									down[] = {{"0.26-0.05",0.947},1};
								};
								class SpeedSource
								{
									type = "text";
									source = "laserDist";
									sourceScale = 1;
									sourceLength = 4;
									refreshRate = 0.1;
									align = "right";
									scale = 1;
									pos[] = {{"0.29-0.05","0.86+0.06"},1};
									right[] = {{0.267,"0.86+0.06"},1};
									down[] = {{"0.29-0.05",0.947},1};
								};
							};
						};
						class MGun
						{
							condition = "mgun";
							class RangeText
							{
								type = "text";
								source = "static";
								text = "P GUN";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.61+0.05",0.92},1};
								right[] = {{0.687,0.92},1};
								down[] = {{"0.61+0.05",0.947},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								text = "GUN";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{"0.61+0.05","0.90+0.055"},1};
								right[] = {{0.687,"0.90+0.055"},1};
								down[] = {{"0.61+0.05",0.982},1};
							};
							class Ammo
							{
								type = "text";
								source = "ammo";
								sourceScale = 1;
								align = "left";
								scale = 0.5;
								pos[] = {{"0.85+0.05","0.86+0.06"},1};
								right[] = {{0.927,"0.86+0.06"},1};
								down[] = {{"0.85+0.05",0.947},1};
							};
						};
						class AAMissile
						{
							condition = "bomb";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P ATA";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.61+0.05",0.92},1};
								right[] = {{0.687,0.92},1};
								down[] = {{"0.61+0.05",0.947},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{"0.61+0.05","0.90+0.055"},1};
								right[] = {{0.687,"0.90+0.055"},1};
								down[] = {{"0.61+0.05",0.982},1};
							};
						};
						class ATMissile
						{
							condition = "ATmissile + AAmissile";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P MSL";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.61+0.05",0.92},1};
								right[] = {{0.687,0.92},1};
								down[] = {{"0.61+0.05",0.947},1};
							};
							class Weapons
							{
								type = "text";
								source = "weapon";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{"0.61+0.05","0.90+0.055"},1};
								right[] = {{0.687,"0.90+0.055"},1};
								down[] = {{"0.61+0.05",0.982},1};
							};
						};
						class Rockets
						{
							condition = "rocket";
							class ModeText
							{
								type = "text";
								source = "static";
								text = "P RKT";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.61+0.05",0.92},1};
								right[] = {{0.687,0.92},1};
								down[] = {{"0.61+0.05",0.947},1};
							};
							class AmmoName
							{
								type = "text";
								source = "ammoFormat";
								sourceScale = 1;
								align = "right";
								scale = 0.5;
								pos[] = {{"0.61+0.05","0.90+0.055"},1};
								right[] = {{0.687,"0.90+0.055"},1};
								down[] = {{"0.61+0.05",0.982},1};
							};
						};
					};
				};
			};
			gunnerDoor = "doorL";
			memoryPointsGetInGunner = "pos_gunner";
			memoryPointsGetInGunnerDir = "pos_gunner_dir";
			memorypointgunneroptics = "gunnerview";
			gunBeg = "machinegun";
			gunEnd = "machinegun_end";
			memoryPointGun = "machinegun";
			turretInfoType = "RHS_RscOptics_Heli_Attack_01_gunner";
			discretedistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
			discretedistanceinitindex = 3;
			canUseScanners = true;
			laserScanner = true;
			allowTabLock = true;
			gunnerOpticsModel = "\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64";
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.456;
					minFov = 0.456;
					maxFov = 0.456;
					directionStabilized = true;
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64";
				};
				class Medium: Wide
				{
					directionStabilized = true;
					opticsDisplayName = "M";
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
					gunnerOpticsModel = "\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64_2";
				};
				class Narrow: Medium
				{
					directionStabilized = true;
					opticsDisplayName = "N";
					gunnerOpticsModel = "\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64_3";
					initFov = 0.029;
					minFov = 0.029;
					maxFov = 0.029;
				};
			};
			class OpticsOut
			{
				class Monocular
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.1;
					minFov = 0.133;
					maxFov = 1.1;
					visionMode[] = {"Normal","NVG"};
					gunnerOpticsModel = "";
					gunnerOpticsEffect[] = {};
				};
			};
			class Components
			{
				class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
				{
					class Components: components
					{
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
						class MinimapDisplay
						{
							componentType = "MinimapDisplayComponent";
							resource = "RscCustomInfoMiniMap";
						};
						class CrewDisplay
						{
							componentType = "CrewDisplayComponent";
							resource = "RscCustomInfoCrew";
						};
						class VehiclePrimaryGunnerDisplay
						{
							componentType = "TransportFeedDisplayComponent";
							source = "PrimaryGunner";
						};
						class SensorDisplay
						{
							componentType = "SensorsDisplayComponent";
							range[] = {4000,8000,16000,25000};
							resource = "RscCustomInfoSensors";
						};
					};
				};
				class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
				{
					defaultDisplay = "SensorDisplay";
					class Components: components
					{
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
						class MinimapDisplay
						{
							componentType = "MinimapDisplayComponent";
							resource = "RscCustomInfoMiniMap";
						};
						class CrewDisplay
						{
							componentType = "CrewDisplayComponent";
							resource = "RscCustomInfoCrew";
						};
						class VehiclePrimaryGunnerDisplay
						{
							componentType = "TransportFeedDisplayComponent";
							source = "PrimaryGunner";
						};
						class SensorDisplay
						{
							componentType = "SensorsDisplayComponent";
							range[] = {4000,8000,16000,25000};
							resource = "RscCustomInfoSensors";
						};
					};
				};
			};
		};
	};
	class RenderTargets{};
	class UserActions
	{
		class SAFEMODE
		{
			displayName = "<t color='#00FF7F'>MASTERSAFE</t>";
			condition = "(call rhsusf_fnc_findPlayer) in this";
			statement = "(call rhsusf_fnc_findPlayer) action ['SwitchWeapon', this, (call rhsusf_fnc_findPlayer), (weapons this) find 'rhs_weap_MASTERSAFE'];";
			position = "";
			radius = 10;
			priority = 10.5;
			onlyforplayer = 1;
			showWindow = 0;
			shortcut = "user13";
			hideOnUse = 1;
		};
		class Toggle_Left_MFD
		{
			displayName = "<t color='#FBB829'>Left MFD Toggle</t>";
			condition = "(call rhsusf_fnc_findPlayer) in this";
			statement = "[this,4] call rhs_fnc_ah64_mfd_switch";
			position = "";
			radius = 10;
			priority = 10.5;
			onlyforplayer = 1;
			showWindow = 0;
			hideOnUse = 1;
			shortcut = "user1";
		};
		class Toggle_Right_MFD: Toggle_Left_MFD
		{
			displayName = "<t color='#FBB829'>Right MFD Toggle</t>";
			statement = "[this,5] call rhs_fnc_ah64_mfd_switch";
			shortcut = "user2";
		};
	};
	class EventHandlers: Eventhandlers
	{
		class RHSUSF_EventHandlers
		{
			postInit = "_this call rhs_fnc_reapplyTextures";
		};
	};
};