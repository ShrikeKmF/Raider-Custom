class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_03: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};

class LandVehicle;
class Tank: LandVehicle
{
	class NewTurret;
	class Sounds;
	class HitPoints;
	class CommanderOptics;
};
class LT_M10_base: Tank
{
	class Turrets
	{
		class MainTurret: NewTurret
		{
			class ViewGunner;
			class Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					class ViewGunner;
				};
			};
		};
	};
	class AnimationSources;
	class ViewPilot;
	class ViewOptics;
	class ViewCargo;
	class HeadLimits;
	class HitPoints: HitPoints
	{
		class HitHull;
		class HitFuel;
		class HitEngine;
		class HitLTrack;
		class HitRTrack;
	};
	class Sounds: Sounds
	{
		class Engine;
		class Movement;
	};
	class EventHandlers;
};

class rtg_ravn_base: LT_M10_base
{
	vehicleClass="Armored";
	displayName="M10 booker";
	accuracy=0.30000001;
	author="[CN]Lurker1011,真红战队";
	destrType="DestructDefault";
	model="\M10_booker\m10_booker";
	picture="\M10_booker\tex\ui\m10_booker_ca.paa";
	icon="\M10_booker\tex\ui\m10_booker_map_ca.paa";
	weapons[] = {"SmokeLauncher","TruckHorn"};
	magazines[] = {"SmokeLauncherMag"};
	smokeLauncherGrenadeCount = 4;
	smokeLauncherVelocity = 14;
	smokeLauncherOnTurret = 0;
	smokeLauncherAngle = 160;

	ace_hunterkiller[] = {{{0}, 1}, {{0,0}, 3}};
	ace_vehicles_engineStartDelay = 7.2;
	canAccessMineDetector = 1;

	soundGetIn[]=
	{
		"A3\sounds_f\vehicles\armor\noises\get_in_out",
		0.56234133,
		1
	};
	soundGetOut[]=
	{
		"A3\sounds_f\vehicles\armor\noises\get_in_out",
		0.56234133,
		1,
		20
	};
	soundDammage[]=
	{
		"",
		0.56234133,
		1
	};
	soundEngineOnInt[]=
	{
		"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_start",
		0.63095737,
		1
	};
	soundEngineOnExt[]=
	{
		"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_start",
		1,
		1,
		200
	};
	soundEngineOffInt[]=
	{
		"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_stop",
		0.63095737,
		1
	};
	soundEngineOffExt[]=
	{
		"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_stop",
		1,
		1,
		200
	};
	buildCrash0[]=
	{
		"A3\sounds_f\Vehicles\crashes\crash_08",
		1,
		1,
		200
	};
	buildCrash1[]=
	{
		"A3\sounds_f\Vehicles\crashes\crash_09",
		1,
		1,
		200
	};
	buildCrash2[]=
	{
		"A3\sounds_f\Vehicles\crashes\crash_10",
		1,
		1,
		200
	};
	buildCrash3[]=
	{
		"A3\sounds_f\Vehicles\crashes\crash_11",
		1,
		1,
		200
	};
	soundBuildingCrash[]=
	{
		"buildCrash0",
		0.25,
		"buildCrash1",
		0.25,
		"buildCrash2",
		0.25,
		"buildCrash3",
		0.25
	};
	WoodCrash0[]=
	{
		"A3\sounds_f\Vehicles\crashes\crash_08",
		1,
		1,
		200
	};
	WoodCrash1[]=
	{
		"A3\sounds_f\Vehicles\crashes\crash_09",
		1,
		1,
		200
	};
	WoodCrash2[]=
	{
		"A3\sounds_f\Vehicles\crashes\crash_10",
		1,
		1,
		200
	};
	WoodCrash3[]=
	{
		"A3\sounds_f\Vehicles\crashes\crash_11",
		1,
		1,
		200
	};
	WoodCrash4[]=
	{
		"A3\sounds_f\Vehicles\crashes\crash_01",
		1,
		1,
		200
	};
	WoodCrash5[]=
	{
		"A3\sounds_f\Vehicles\crashes\crash_08",
		1,
		1,
		200
	};
	soundWoodCrash[]=
	{
		"woodCrash0",
		0.16599999,
		"woodCrash1",
		0.16599999,
		"woodCrash2",
		0.16599999,
		"woodCrash3",
		0.16599999,
		"woodCrash4",
		0.16599999,
		"woodCrash5",
		0.16599999
	};
	ArmorCrash0[]=
	{
		"A3\sounds_f\Vehicles\crashes\crash_08",
		1,
		1,
		200
	};
	ArmorCrash1[]=
	{
		"A3\sounds_f\Vehicles\crashes\crash_09",
		1,
		1,
		200
	};
	ArmorCrash2[]=
	{
		"A3\sounds_f\Vehicles\crashes\crash_10",
		1,
		1,
		200
	};
	ArmorCrash3[]=
	{
		"A3\sounds_f\Vehicles\crashes\crash_11",
		1,
		1,
		200
	};
	soundArmorCrash[]=
	{
		"ArmorCrash0",
		0.25,
		"ArmorCrash1",
		0.25,
		"ArmorCrash2",
		0.25,
		"ArmorCrash3",
		0.25
	};
	class Sounds
	{
		class Idle_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_1",
				0.56234133,
				1,
				160
			};
			frequency="0.3	+	((rpm/	2600) factor[(100/	2600),(250/	2600)])*0.1";
			volume="engineOn*camPos*(((rpm/	2600) factor[(100/	2600),(400/	2600)])	*	((rpm/	2600) factor[(730/	2600),(610/	2600)]))";
		};
		class Engine
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_2",
				0.79432821,
				1,
				200
			};
			frequency="0.8	+	((rpm/	2600) factor[(600/	2600),(1100/	2600)])*0.2";
			volume="engineOn*camPos*(((rpm/	2600) factor[(550/	2600),(700/	2600)])	*	((rpm/	2600) factor[(1100/	2600),(760/	2600)]))";
		};
		class Engine1_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_3",
				0.89125091,
				1,
				260
			};
			frequency="0.8	+	((rpm/	2600) factor[(770/	2600),(1400/	2600)])*0.2";
			volume="engineOn*camPos*(((rpm/	2600) factor[(720/	2600),(1060/	2600)])	*	((rpm/	2600) factor[(1400/	2600),(1180/	2600)]))";
		};
		class Engine2_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_4",
				1,
				1,
				280
			};
			frequency="0.8	+	((rpm/	2600) factor[(1150/	2600),(1700/	2600)])*0.2";
			volume="engineOn*camPos*(((rpm/	2600) factor[(1130/	2600),(1370/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1500/	2600)]))";
		};
		class Engine3_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_5",
				1.1220185,
				1,
				300
			};
			frequency="0.8	+	((rpm/	2600) factor[(1500/	2600),(2100/	2600)])*0.1";
			volume="engineOn*camPos*(((rpm/	2600) factor[(1460/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2100/	2600),(1800/	2600)]))";
		};
		class Engine4_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_6",
				1.2589254,
				1,
				320
			};
			frequency="0.8	+	((rpm/	2600) factor[(1800/	2600),(2600/	2600)])*0.1";
			volume="engineOn*camPos*((rpm/	2600) factor[(1750/	2600),(2050/	2600)])";
		};
		class IdleThrust
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_1",
				1,
				1,
				250
			};
			frequency="0.8	+	((rpm/	2600) factor[(500/	2600),(650/	2600)])*0.15";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(100/	2600),(400/	2600)])	*	((rpm/	2600) factor[(730/	2600),(610/	2600)]))";
		};
		class EngineThrust
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_2",
				1.1220185,
				1,
				280
			};
			frequency="0.8	+	((rpm/	2600) factor[(600/	2600),(1100/	2600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(550/	2600),(700/	2600)])	*	((rpm/	2600) factor[(1100/	2600),(760/	2600)]))";
		};
		class Engine1_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_3",
				1.2589254,
				1,
				300
			};
			frequency="0.8	+	((rpm/	2600) factor[(770/	2600),(1400/	2600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(720/	2600),(1060/	2600)])	*	((rpm/	2600) factor[(1400/	2600),(1180/	2600)]))";
		};
		class Engine2_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_4",
				1.4125376,
				1,
				340
			};
			frequency="0.8	+	((rpm/	2600) factor[(1150/	2600),(1700/	2600)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1130/	2600),(1370/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1500/	2600)]))";
		};
		class Engine3_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_5",
				1.7782794,
				1,
				360
			};
			frequency="0.8	+	((rpm/	2600) factor[(1500/	2600),(2100/	2600)])*0.1";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1460/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2100/	2600),(1800/	2600)]))";
		};
		class Engine4_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_6",
				1.9952624,
				1,
				380
			};
			frequency="0.8	+	((rpm/	2600) factor[(1800/	2600),(2600/	2600)])*0.1";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2600) factor[(1750/	2600),(2050/	2600)])";
		};
		class Idle_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_1",
				0.31622776,
				1
			};
			frequency="0.8	+	((rpm/	2600) factor[(500/	2600),(650/	2600)])*0.15";
			volume="engineOn*(1-camPos)*(((rpm/	2600) factor[(100/	2600),(400/	2600)])	*	((rpm/	2600) factor[(730/	2600),(610/	2600)]))";
		};
		class Engine_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_2",
				0.35481337,
				1
			};
			frequency="0.8	+	((rpm/	2600) factor[(600/	2600),(1100/	2600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	2600) factor[(550/	2600),(700/	2600)])	*	((rpm/	2600) factor[(1100/	2600),(760/	2600)]))";
		};
		class Engine1_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_3",
				0.39810717,
				1
			};
			frequency="0.8	+	((rpm/	2600) factor[(770/	2600),(1400/	2600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	2600) factor[(720/	2600),(1060/	2600)])	*	((rpm/	2600) factor[(1400/	2600),(1180/	2600)]))";
		};
		class Engine2_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_4",
				0.44668359,
				1
			};
			frequency="0.8	+	((rpm/	2600) factor[(1150/	2600),(1700/	2600)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	2600) factor[(1130/	2600),(1370/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1500/	2600)]))";
		};
		class Engine3_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_5",
				0.50118721,
				1
			};
			frequency="0.8	+	((rpm/	2600) factor[(1500/	2600),(2100/	2600)])*0.1";
			volume="engineOn*(1-camPos)*(((rpm/	2600) factor[(1460/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2100/	2600),(1800/	2600)]))";
		};
		class Engine4_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_6",
				0.56234133,
				1
			};
			frequency="0.8	+	((rpm/	2600) factor[(1800/	2600),(2600/	2600)])*0.1";
			volume="engineOn*(1-camPos)*((rpm/	2600) factor[(1750/	2600),(2050/	2600)])";
		};
		class IdleThrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_1",
				0.35481337,
				1
			};
			frequency="0.8	+	((rpm/	2600) factor[(500/	2600),(650/	2600)])*0.15";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(100/	2600),(400/	2600)])	*	((rpm/	2600) factor[(730/	2600),(610/	2600)]))";
		};
		class EngineThrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_2",
				0.39810717,
				1
			};
			frequency="0.8	+	((rpm/	2600) factor[(600/	2600),(1100/	2600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(550/	2600),(700/	2600)])	*	((rpm/	2600) factor[(1100/	2600),(760/	2600)]))";
		};
		class Engine1_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_3",
				0.44668359,
				1
			};
			frequency="0.8	+	((rpm/	2600) factor[(770/	2600),(1400/	2600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(720/	2600),(1060/	2600)])	*	((rpm/	2600) factor[(1400/	2600),(1180/	2600)]))";
		};
		class Engine2_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_4",
				0.44668359,
				1
			};
			frequency="0.8	+	((rpm/	2600) factor[(1150/	2600),(1700/	2600)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1130/	2600),(1370/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1500/	2600)]))";
		};
		class Engine3_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_5",
				0.50118721,
				1
			};
			frequency="0.8	+	((rpm/	2600) factor[(1500/	2600),(2100/	2600)])*0.1";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1460/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2100/	2600),(1800/	2600)]))";
		};
		class Engine4_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_6",
				0.56234133,
				1
			};
			frequency="0.8	+	((rpm/	2600) factor[(1800/	2600),(2600/	2600)])*0.1";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2600) factor[(1750/	2600),(2050/	2600)])";
		};
		class NoiseInt
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
				3.1622777,
				1
			};
			frequency="1";
			volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
		};
		class NoiseExt
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
				3.1622777,
				1,
				250
			};
			frequency="1";
			volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
		};
		class ThreadsOutH0
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_01",
				0.39810717,
				1,
				140
			};
			frequency="1";
			volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
		};
		class ThreadsOutH1
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_02",
				0.44668359,
				1,
				160
			};
			frequency="1";
			volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
		};
		class ThreadsOutH2
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_03",
				0.50118721,
				1,
				180
			};
			frequency="1";
			volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
		};
		class ThreadsOutH3
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_04",
				0.56234133,
				1,
				200
			};
			frequency="1";
			volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
		};
		class ThreadsOutH4
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_05",
				0.56234133,
				1,
				220
			};
			frequency="1";
			volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
		};
		class ThreadsOutS0
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_01",
				0.31622776,
				1,
				120
			};
			frequency="1";
			volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
		};
		class ThreadsOutS1
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_02",
				0.35481337,
				1,
				140
			};
			frequency="1";
			volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
		};
		class ThreadsOutS2
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_03",
				0.39810717,
				1,
				160
			};
			frequency="1";
			volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
		};
		class ThreadsOutS3
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_04",
				0.44668359,
				1,
				180
			};
			frequency="1";
			volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
		};
		class ThreadsOutS4
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_05",
				0.50118721,
				1,
				200
			};
			frequency="1";
			volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
		};
		class ThreadsInH0
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01",
				0.44668359,
				1
			};
			frequency="1";
			volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
		};
		class ThreadsInH1
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02",
				0.50118721,
				1
			};
			frequency="1";
			volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
		};
		class ThreadsInH2
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03",
				0.56234133,
				1
			};
			frequency="1";
			volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
		};
		class ThreadsInH3
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04",
				0.63095737,
				1
			};
			frequency="1";
			volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
		};
		class ThreadsInH4
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05",
				0.70794576,
				1
			};
			frequency="1";
			volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
		};
		class ThreadsInS0
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01",
				0.39810717,
				1
			};
			frequency="1";
			volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
		};
		class ThreadsInS1
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02",
				0.44668359,
				1
			};
			frequency="1";
			volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
		};
		class ThreadsInS2
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03",
				0.50118721,
				1
			};
			frequency="1";
			volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
		};
		class ThreadsInS3
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04",
				0.63095737,
				1
			};
			frequency="1";
			volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
		};
		class ThreadsInS4
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05",
				0.70794576,
				1
			};
			frequency="1";
			volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
		};
	};
	simulation="tankX";
	fuelCapacity=19;
	brakeIdleSpeed=0.1;
	maxSpeed=72;
	normalSpeedForwardCoef=0.61000001;
	slowSpeedForwardCoef=0.25;
	waterResistanceCoef=0.25;
	enginePower=596;
	maxOmega=314.159;
	minOmega=146.608;
	redRpm=3000;
	idleRpm=1400;
	peakTorque=2000;
	tracksSpeed=1;
	torqueCurve[]=
	{
		{0.42424199,0.80000001},
		{0.54545498,0.94999999},
		{0.60606098,0.99000001},
		{0.63636398,1},
		{0.66666698,0.98000002},
		{0.72727299,0.93000001},
		{0.87878799,0.75999999},
		{1,0.60000002}
	};
	thrustDelay=0.5;
	engineMOI=15;
	dampingRateFullThrottle=1.3;
	dampingRateZeroThrottleClutchEngaged=6;
	dampingRateZeroThrottleClutchDisengaged=1;
	clutchStrength=40;
	latency=1.2;
	switchTime=0;
	changeGearType="rpmratio";
	changeGearOmegaRatios[]={1,0.42424199,0.45454499,0.33333299,0.98484802,0.42424199,0.98484802,0.60606098,0.98484802,0.57575798,0.98484802,0.54545498,0.98484802,0.54545498,1,0.54545498};
	class complexGearbox
	{
		GearboxRatios[]=
		{
			"R1",
			-3.4000001,
			"N",
			0,
			"D1",
			4.4000001,
			"D2",
			3,
			"D3",
			1.75,
			"D4",
			1.3,
			"D5",
			1,
			"D6",
			0.69999999
		};
		transmissionRatios[]=
		{
			"High",
			17.33
		};
		gearBoxMode="auto";
		moveOffGear=1;
		driveString="D";
		neutralString="N";
		reverseString="R";
	};
	tankTurnForce=1100000;
	tankTurnForceAngMinSpd=0.75999999;
	tankTurnForceAngSpd=0.80000001;
	accelAidForceCoef=1.5;
	accelAidForceYOffset=-1;
	accelAidForceSpd=1.4;
	class Wheels
	{
		class L2
		{
			side="left";
			suspTravelDirection[]={-0.125,-1,0};
			boneName="wheel_podkoloL1";
			center="wheel_1_2_axis";
			boundary="wheel_1_2_bound";
			steering=0;
			width=0.5;
			mass=200;
			MOI=8.8209;
			dampingRate=200;
			dampingRateInAir=200;
			dampingRateDestroyed=3000;
			maxDroop=0.12;
			maxCompression=0.12;
			sprungMass=3500;
			springStrength=350000;
			springDamperRate=20000;
			maxBrakeTorque=30000;
			latStiffX=1;
			latStiffY=35;
			longitudinalStiffnessPerUnitGravity=14000;
			rictionVsSlipGraph[]=
			{
				{0,0.75},
				{0.050000001,1.5},
				{0.5,0.89999998}
			};
		};
		class L3: L2
		{
			boneName="wheel_podkolol2";
			center="wheel_1_3_axis";
			boundary="wheel_1_3_bound";
		};
		class L4: L2
		{
			boneName="wheel_podkolol3";
			center="wheel_1_4_axis";
			boundary="wheel_1_4_bound";
		};
		class L5: L2
		{
			boneName="wheel_podkolol4";
			center="wheel_1_5_axis";
			boundary="wheel_1_5_bound";
		};
		class L6: L2
		{
			boneName="wheel_podkolol5";
			center="wheel_1_6_axis";
			boundary="wheel_1_6_bound";
		};
		class L7: L2
		{
			boneName="wheel_podkolol6";
			center="wheel_1_7_axis";
			boundary="wheel_1_7_bound";
		};
		class L9: L2
		{
			boneName="wheel_podkolol9";
			center="wheel_1_9_axis";
			boundary="wheel_1_9_bound";
			suspForceAppPointOffset="wheel_1_9_axis";
			sprungMass=1500;
			springStrength=37500;
			springDamperRate=7500;
			maxDroop=0;
			maxCompression=0;
		};
		class L1: L2
		{
			width=0.5;
			boneName="";
			center="wheel_1_1_axis";
			boundary="wheel_1_1_bound";
			suspForceAppPointOffset="wheel_1_1_axis";
			sprungMass=1500;
			springStrength=37500;
			springDamperRate=7500;
			maxDroop=0;
			maxCompression=0;
		};
		class R2: L2
		{
			boneName="wheel_podkolop1";
			center="wheel_2_2_axis";
			boundary="wheel_2_2_bound";
			suspForceAppPointOffset="wheel_2_2_axis";
			side="right";
		};
		class R3: R2
		{
			boneName="wheel_podkolop2";
			center="wheel_2_3_axis";
			boundary="wheel_2_3_bound";
			suspForceAppPointOffset="wheel_2_3_axis";
		};
		class R4: R2
		{
			boneName="wheel_podkolop3";
			center="wheel_2_4_axis";
			boundary="wheel_2_4_bound";
			suspForceAppPointOffset="wheel_2_4_axis";
		};
		class R5: R2
		{
			boneName="wheel_podkolop4";
			center="wheel_2_5_axis";
			boundary="wheel_2_5_bound";
			suspForceAppPointOffset="wheel_2_5_axis";
		};
		class R6: R2
		{
			boneName="wheel_podkolop5";
			center="wheel_2_6_axis";
			boundary="wheel_2_6_bound";
			suspForceAppPointOffset="wheel_2_6_axis";
		};
		class R7: R2
		{
			boneName="wheel_podkolop6";
			center="wheel_2_7_axis";
			boundary="wheel_2_7_bound";
			suspForceAppPointOffset="wheel_2_7_axis";
		};
		class R9: R2
		{
			boneName="wheel_podkolop9";
			center="wheel_2_9_axis";
			boundary="wheel_2_9_bound";
			suspForceAppPointOffset="wheel_2_9_axis";
			sprungMass=1500;
			springStrength=37500;
			springDamperRate=7500;
			maxDroop=0;
			maxCompression=0;
		};
		class R1: R2
		{
			width=0.5;
			boneName="";
			center="wheel_2_1_axis";
			boundary="wheel_2_1_bound";
			suspForceAppPointOffset="wheel_2_1_axis";
			sprungMass=1500;
			springStrength=37500;
			springDamperRate=7500;
			maxDroop=0;
			maxCompression=0;
		};
	};
	cost=1500000;
	damageResistance=0.02;
	crewVulnerable=0;
	armor=800;
	armorStructural=6;
	class HitPoints: HitPoints
	{
		class HitAmmoHull
		{
			name="Hit_AmmoHull";
			armorComponent="Hit_AmmoHull";
			armor=-100;
			material=-1;
			passThrough=0;
			minimalHit=0.14;
			explosionShielding=0;
			radius=0.15000001;
		};
		class HitAmmo
		{
			name="Hit_Ammo";
			armorComponent="Hit_AmmoTurret";
			armor=-100;
			material=-1;
			passThrough=0;
			minimalHit=0.14;
			explosionShielding=0;
			radius=0.15000001;
		};
		class HitHull: HitHull
		{
			armor=0.80000001;
			material=-1;
			armorComponent="hit_hull";
			name="hit_hull_point";
			visual="zbytek";
			passThrough=1;
			minimalHit=0.2;
			explosionShielding=0.2;
			radius=0.30000001;
			depends="(HitAmmo factor [0.9,1])+(HitAmmoHull factor [0.9,1])";
		};
		class HitEngine: HitEngine
		{
			armor=0.60000002;
			material=-1;
			armorComponent="hit_engine";
			name="hit_engine_point";
			visual="-";
			passThrough=0.5;
			minimalHit=0.2;
			explosionShielding=0.2;
			radius=0.30000001;
		};
		class HitLTrack: HitLTrack
		{
			material=-1;
			armorComponent="hit_trackL";
			name="hit_trackL_point";
			visual="pas_L";
			radius=0.2;
			armor=-650;
			minimalHit=0.073846199;
			explosionShielding=0.80000001;
			passThrough=0;
		};
		class HitRTrack: HitRTrack
		{
			material=-1;
			armorComponent="hit_trackR";
			name="hit_trackR_point";
			visual="pas_P";
			radius=0.2;
			armor=-650;
			minimalHit=0.073846199;
			explosionShielding=0.80000001;
			passThrough=0;
		};
		class HitFuel: HitFuel
		{
			armor=0.5;
			material=-1;
			armorComponent="hit_fuel";
			name="hit_fuel_point";
			visual="-";
			passThrough=0.1;
			minimalHit=0.1;
			explosionShielding=0.60000002;
			radius=0.1;
		};
		class HitArmor
		{
			armor=3;
			material=-1;
			armorComponent="hit_Armor";
			name="hit_Armor_points";
			visual="Armor";
			passThrough=0;
			minimalHit=0.1;
			explosionShielding=2;
			radius=0.1;
			isTurret=0;
		};
	};
	driverOpticsModel="\A3\weapons_f\reticle\Optics_Driver_01_F.p3d";
	viewDriverInExternal=1;
	LODDriverTurnedOut=0;
	driverInfoPanelCameraPos="driverview";
	driverAction="Driver_MBT_03_cannon_F_out";
	driverInAction="Driver_MBT_03_cannon_F_in";
	driverLeftHandAnimName="";
	driverRightHandAnimName="";
	driverLeftLegAnimName="";
	driverRightLegAnimName="";
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4",
		"camo5",
		"camo6",
		"camo7",
		"camo8"
	};
	hiddenSelectionsTextures[]=
	{
		"\M10_booker\tex\Hull_co.paa",
		"\M10_booker\tex\Turret_co.paa",
		"\M10_booker\tex\Aditional_Sides_co.paa",
		"\M10_booker\tex\Sides2_co.paa",
		"\M10_booker\tex\Gun_co.paa",
		"\M10_booker\tex\Mantlet_co.paa",
		"\M10_booker\tex\Wheels_co.paa",
		"\M10_booker\tex\plate_co.paa"
	};
	class TextureSources
	{
		class Woodcamo
		{
			displayName="Desert";
			author="Lurker1011";
			textures[]=
			{
				"\M10_booker\tex\Hull_co.paa",
				"\M10_booker\tex\Turret_co.paa",
				"\M10_booker\tex\Aditional_Sides_co.paa",
				"\M10_booker\tex\Sides2_co.paa",
				"\M10_booker\tex\Gun_co.paa",
				"\M10_booker\tex\Mantlet_co.paa",
				"\M10_booker\tex\Wheels_co.paa",
				"\M10_booker\tex\plate_co.paa"
			};
			factions[]=
			{
				"BLU_F",
				"rhs_faction_usarmy_d",
				"rhs_faction_usarmy_wd"
			};
		};
		class Olive
		{
			displayName="Olive";
			author="Lurker1011";
			textures[]=
			{
				"\M10_booker\tex\Hull_O_co.paa",
				"\M10_booker\tex\Turret_O_co.paa",
				"\M10_booker\tex\Aditional_Sides_O_co.paa",
				"\M10_booker\tex\Sides2_O_co.paa",
				"\M10_booker\tex\Gun_O_co.paa",
				"\M10_booker\tex\Mantlet_O_co.paa",
				"\M10_booker\tex\Wheels_O_co.paa",
				"\M10_booker\tex\plate_O_co.paa"
			};
			factions[]=
			{
				"BLU_F",
				"rhs_faction_usarmy_d",
				"rhs_faction_usarmy_wd"
			};
		};
	};
	textureList[]=
	{
		"Woodcamo2",
		0.80000001,
		"Olive",
		0.2
	};
	class AnimationSources: AnimationSources
	{
		class muzzle_hide_cannon
		{
			source="reload";
			weapon="lk_weap_xm35";
		};
		class muzzle_rot_cannon
		{
			source="ammorandom";
			weapon="lk_weap_xm35";
		};
		class muzzle_rot_coax
		{
			source="ammorandom";
			weapon="rhs_weap_m240_bradley_coax";
		};
		class recoil_source
		{
			source="reload";
			weapon="lk_weap_xm35";
		};
		class lower_body
		{
			source="user";
			initPhase=0;
			animPeriod=0.1;
		};
		class ReloadAnim
		{
			source="reload";
			weapon="RHS_M2_Abrams_Commander";
		};
		class ReloadMagazine
		{
			source="reloadmagazine";
			weapon="RHS_M2_Abrams_Commander";
		};
		class Revolving
		{
			source="revolving";
			weapon="RHS_M2_Abrams_Commander";
		};
		class muzzle_rot_MG
		{
			source="ammorandom";
			weapon="RHS_M2_Abrams_Commander";
		};
		class muzzle_hide_MG
		{
			source="reload";
			weapon="RHS_M2_Abrams_Commander";
		};
	};
	class UserActions
	{
		class trunk_open
		{
			displayName="Use M2";
			position="trunk_action";
			radius=4;
			onlyForplayer=0;
			shortcut="turnOut";
			condition="this animationPhase 'hatchcommander'>0.5 and ((call rhsusf_fnc_findPlayer) == commander this)";
			statement="(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,2]];[this,[[0,0],true]] remoteExecCall ['lockTurret']";
		};
		class trunk_close: trunk_open
		{
			displayName="Leave M2";
			shortcut="turnIn";
			condition="vehicle (call rhsusf_fnc_findPlayer) turretUnit [0,2] == (call rhsusf_fnc_findPlayer)";
			statement="(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,0]];[this,[[0,0],false]] remoteExecCall ['lockTurret']";
		};
		class lower_commander_body
		{
			displayName="Lower body";
			position="pos commander";
			radius=15;
			showwindow=0;
			condition="this animationPhase 'hatchcommander'>0.5 and ((call rhsusf_fnc_findPlayer) == commander this)";
			statement="this animate ['lower_body', 1]";
			onlyforplayer=0;
		};
		class reset_commander_body
		{
			displayName="Raise";
			position="pos commander";
			radius=15;
			showwindow=0;
			condition="this animationPhase 'hatchcommander'>0.5 and ((call rhsusf_fnc_findPlayer) == commander this)";
			statement="this animate ['lower_body', 0]";
			onlyForplayer=0;
		};
	};
	class EventHandlers: EventHandlers
	{
		class RHSUSF_EventHandlers
		{
			init="_this call m10_fnc_init";
			getOut="_this call m10_fnc_hatch";
		};
	};
	class Damage
	{
		tex[]={};
		mat[]=
		{
			"M10_booker\tex\Hull.rvmat",
			"M10_booker\tex\Hull_damage.rvmat",
			"M10_booker\tex\Hull_destruct.rvmat",
			"M10_booker\tex\Turret.rvmat",
			"M10_booker\tex\Turret_damage.rvmat",
			"M10_booker\tex\Turret_destruct.rvmat",
			"M10_booker\tex\Aditional_Sides.rvmat",
			"M10_booker\tex\Aditional_Sides_damage.rvmat",
			"M10_booker\tex\Aditional_Sides_destruct.rvmat",
			"M10_booker\tex\Sides2.rvmat",
			"M10_booker\tex\Sides2_damage.rvmat",
			"M10_booker\tex\Sides2_destruct.rvmat",
			"M10_booker\tex\Gun.rvmat",
			"M10_booker\tex\Gun_damage.rvmat",
			"M10_booker\tex\Gun_destruct.rvmat",
			"M10_booker\tex\Mantlet.rvmat",
			"M10_booker\tex\Mantlet_damage.rvmat",
			"M10_booker\tex\Mantlet_destruct.rvmat",
			"M10_booker\tex\Wheels.rvmat",
			"M10_booker\tex\Wheels_damage.rvmat",
			"M10_booker\tex\Wheels_destruct.rvmat",
			"M10_booker\tex\plate.rvmat",
			"M10_booker\tex\plate_damage.rvmat",
			"M10_booker\tex\plate_destruct.rvmat"
		};
	};
	class Exhausts
	{
		class Exhaust1
		{
			position="exhaust";
			direction="exhaust_dir";
			effect="ExhaustEffectTankSide";
		};
		class Exhaust2
		{
			position="exhaust2";
			direction="exhaust_dir2";
			effect="ExhaustEffectTankSide";
		};
	};
	class Reflectors
	{
		class Left
		{
			color[]={1900,1300,950};
			ambient[]={5,5,5};
			position="Light_L";
			direction="Light_L_end";
			hitpoint="Light_L";
			selection="Light_L";
			size=1;
			innerAngle=60;
			outerAngle=90;
			coneFadeCoef=10;
			intensity=1;
			useFlare=0;
			dayLight=0;
			flareSize=1;
			class Attenuation
			{
				start=1;
				constant=0;
				linear=0;
				quadratic=0.25;
				hardLimitStart=30;
				hardLimitEnd=60;
			};
		};
		class Left2: Left
		{
			position="light_L_flare";
			useFlare=1;
		};
		class right: Left
		{
			position="Light_R";
			direction="Light_R_end";
			hitpoint="Light_R";
			selection="Light_R";
		};
		class right2: right
		{
			position="light_R_flare";
			useFlare=1;
		};
	};
	aggregateReflectors[]=
	{
		
		{
			"Left",
			"Left2"
		},
		
		{
			"right",
			"right2"
		}
	};
	class ViewOptics: ViewOptics
	{
		visionMode[]=
		{
			"Normal",
			"NVG",
			"Ti"
		};
		thermalMode[]={2,3};
		initFov=0.69999999;
		minFov=0.69999999;
		maxFov=0.69999999;
	};
	class DriverOpticsIn
	{
		class Wide: ViewOptics
		{
			camPos="view_driver";
			opticsModel="\rhsusf\addons\rhsusf_optics\data\rhs_m1_triplex";
			visionMode[]=
			{
				"Normal",
				"NVG",
				"Ti"
			};
		};
		class DVE_Wide: Wide
		{
			opticsModel="rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
			visionMode[]=
			{
				"Normal",
				"NVG",
				"Ti"
			};
			initFov=1.07692;
			minFov=1.07692;
			maxFov=1.07692;
		};
		class DVS_Rear: DVE_Wide
		{
			opticsModel="rhsusf\addons\rhsusf_optics\data\rhsusf_DVE2_4x3";
			camPos="view_rear";
			camDir="view_rear_dir";
		};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					body="obsturret";
					gun="obsgun";
					memoryPointGunnerOutOptics="commanderview";
					memoryPointGunnerOptics="commanderview";
					gunBeg="";
					gunEnd="";
					memoryPointGun="commanderview";
					minElev=-25;
					maxElev=60;
					initElev=0;
					minTurn=-360;
					maxTurn=360;
					initTurn=0;
					minOutElev=-10;
					maxOutElev=25;
					initOutElev=0;
					minOutTurn=-95;
					maxOutTurn=95;
					initOutTurn=0;
					weapons[]={};
					magazines[]={};
					soundServo[]=
					{
						"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
						0.56234133,
						1,
						30
					};
					soundServoVertical[]=
					{
						"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
						0.56234133,
						1,
						30
					};
					outGunnerMayFire=0;
					inGunnerMayFire=1;
					isPersonTurret=1;
					gunnerAction="Commander_MBT_01_cannon_F_out";
					gunnerInAction="Commander_MBT_01_cannon_F_in";
					personTurretAction="vehicle_turnout_2";
					gunnerGetInAction="GetInLow";
					gunnerGetOutAction="GetOutLow";
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
					discreteDistanceInitIndex=2;
					gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
					gunnerOutOpticsModel="";
					gunnerOpticsEffect[]={};
					gunnerForceOptics=1;
					usePip=2;
					LODOpticsIn=0;
					animationSourceStickX="com_turret_control_x";
					animationSourceStickY="com_turret_control_y";
					gunnerRightHandAnimName="com_turret_control";
					class dynamicViewLimits
					{
						MainTurret[]={-135,75};
					};
					class ViewGunner: ViewGunner
					{
						initAngleX=-5;
						initAngleY=0;
						initFov=0.89999998;
						minFov=0.25;
						maxFov=1.25;
						minAngleX=-65;
						maxAngleX=85;
						minAngleY=-150;
						maxAngleY=150;
						minMoveX=-0.075000003;
						maxMoveX=0.075000003;
						minMoveY=-0.075000003;
						maxMoveY=0.075000003;
						minMoveZ=-0.075000003;
						maxMoveZ=0.1;
					};
					class ViewOptics: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.31;
						minFov=0.034000002;
						maxFov=0.31;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={2,3};
					};
					class OpticsIn: Optics_Commander_01
					{
						class Wide: Wide
						{
							initFov=0.23333301;
							minFov=0.23333301;
							maxFov=0.23333301;
							hitpoint="Hit_Optic_CITV";
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={2,3};
							gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_CITV_w";
						};
						class Medium: Wide
						{
							initFov=0.116667;
							minFov=0.116667;
							maxFov=0.116667;
							hitpoint="Hit_Optic_CITV";
							gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_CITV_m";
						};
						class Narrow: Medium
						{
							initFov=0.014;
							minFov=0.014;
							maxFov=0.014;
							gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_CITV_n";
						};
					};
					viewGunnerShadowAmb=0.5;
					viewGunnerShadowDiff=0.050000001;
					turretInfoType="RscOptics_APC_Wheeled_03_commander";
					showCrewAim=1;
					startEngine=0;
					gunnerHasFlares=1;
					stabilizedInAxes=3;
					maxHorizontalRotSpeed=1.8;
					maxVerticalRotSpeed=1.8;
					viewGunnerInExternal=1;
					LODTurnedIn=1000;
					LODTurnedOut=1000;
					class HitPoints
					{
						class HitComTurret
						{
							armor=0.1;
							material=-1;
							armorComponent="hit_com_turret";
							name="hit_com_turret_point";
							visual="vezVelitele";
							passThrough=0;
							minimalHit=0.1;
							explosionShielding=1;
							radius=0.15000001;
							isTurret=1;
						};
						class HitComGun
						{
							armor=0.1;
							material=-1;
							armorComponent="hit_com_gun";
							name="hit_com_gun_point";
							visual="zbranVelitele";
							passThrough=0;
							minimalHit=0.1;
							explosionShielding=1;
							radius=0.15000001;
							isGun=1;
						};
					};
				};
				class loader: CommanderOptics
				{
					commanding=-3;
					gunnername="Loader";
					proxyindex=2;
					body="loaderTurret";
					gun="loaderOptic";
					primaryObserver=0;
					animationSourceBody="loaderTurret";
					animationSourceGun="loaderGun";
					animationSourceHatch="hatchGunner";
					memoryPointsGetInGunner="pos gunner";
					memoryPointsGetInGunnerDir="pos gunner dir";
					memoryPointGunnerOutOptics="loaderview";
					memoryPointGunnerOptics="loaderview";
					weapons[]=
					{
						"FakeHorn"
					};
					outGunnerMayFire=0;
					inGunnerMayFire=1;
					isPersonTurret=1;
					gunnerAction="Commander_MBT_01_cannon_F_out";
					gunnerInAction="Commander_MBT_01_cannon_F_in";
					personTurretAction="vehicle_turnout_2";
					magazines[]={};
					minElev=-10;
					maxElev=10;
					initElev=0;
					minTurn=-40;
					maxTurn=40;
					minOutElev=-10;
					maxOutElev=25;
					initOutElev=0;
					minOutTurn=-95;
					maxOutTurn=95;
					initOutTurn=0;
					class HitPoints
					{
					};
					class OpticsIn
					{
						class Wide
						{
							initAngleX=10;
							minAngleX=-9;
							maxAngleX=20;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.40000001;
							minFov=0.40000001;
							maxFov=0.40000001;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Driver_01_F.p3d";
							gunnerOpticsEffect[]={};
						};
					};
				};
				class CommanderMG: CommanderOptics
				{
					gunnername="Commander MG";
					proxyindex=3;
					dontCreateAi=1;
					cantCreateAI=1;
					isPersonTurret=0;
					outGunnerMayFire=1;
					inGunnerMayFire=1;
					body="HMG_turret";
					gun="HMG_gun";
					gunBeg="usti hlavne3";
					gunEnd="konec hlavne3";
					memoryPointGun="usti hlavne3";
					animationSourceBody="HmgTurret";
					animationSourceGun="HmgGun";
					animationSourceStickX="CommanderTurret_Inertia";
					animationSourceStickY="CommanderGun_Inertia";
					gunnerDoor="";
					stabilizedInAxes=0;
					gunnerAction="gunner_offroad01";
					gunnerInAction="gunner_offroad01";
					canHideGunner=0;
					memoryPointGunnerOutOptics="hmg_gunnerview";
					gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
					soundAttenuationTurret="HeliAttenuationGunner";
					disableSoundAttenuation=0;
					LODOpticsIn=1000;
					LODOpticsOut=1000;
					gunnerLeftHandAnimName="handleL";
					gunnerRightHandAnimName="handleR";
					minElev=-20;
					maxElev=45;
					minTurn=-180;
					maxTurn=180;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
					discreteDistanceInitIndex=2;
					turretInfoType="RscOptics_Offroad_01";
					optics=0;
					usePip=0;
					weapons[]=
					{
						"RHS_M2_Abrams_Commander"
					};
					magazines[]=
					{
						"rhs_mag_100rnd_127x99_mag_Tracer_Red",
						"rhs_mag_100rnd_127x99_mag_Tracer_Red",
						"rhs_mag_100rnd_127x99_mag_Tracer_Red",
						"rhs_mag_100rnd_127x99_mag_Tracer_Red",
						"rhs_mag_100rnd_127x99_mag_Tracer_Red",
						"rhs_mag_100rnd_127x99_mag_Tracer_Red",
						"rhs_mag_100rnd_127x99_mag_Tracer_Red",
						"rhs_mag_100rnd_127x99_mag_Tracer_Red",
						"rhs_mag_100rnd_127x99_mag_Tracer_Red",
						"rhs_mag_100rnd_127x99_mag_Tracer_Red",
						"rhs_mag_100rnd_127x99_mag_Tracer_Red"
					};
					selectionFireAnim="zasleh2";
					class OpticsIn: Optics_Commander_01
					{
						class Wide: Wide
						{
							visionMode[]=
							{
								"Normal"
							};
							initFov=0.5;
							minFov=0.5;
							maxFov=0.5;
						};
						class narrow: Wide
						{
							initFov=0.34999999;
							minFov=0.34999999;
							maxFov=0.34999999;
						};
					};
					class ViewOptics: ViewOptics
					{
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
					};
					class ViewGunner: ViewGunner
					{
					};
					gunnercompartments="Compartment5";
				};
			};
			gunBeg="Usti hlavne";
			gunEnd="Konec hlavne";
			gunnerInAction="Gunner_MBT_03_cannon_F_in";
			gunnerAction="Gunner_MBT_03_cannon_F_out";
			gunnerGetInAction="GetInLow";
			gunnerGetOutAction="GetOutLow";
			weapons[]=
			{
				"lk_weap_xm35",
				"rhs_weap_m240_bradley_coax",
				"rhs_weap_fcs"
			};
			magazines[]=
			{
				"RTG_8Rnd_M900_APFSDS",
				"RTG_4Rnd_m900a1_APFSDS",
				"RTG_16Rnd_M456A2_HEAT",
				"RTG_24Rnd_M393A3_HE",
				"rhs_mag_762x51_M240_1200",
				"rhs_mag_762x51_M240_1200",
				"rhs_mag_762x51_M240_1200",
				"rhs_mag_762x51_M240_1200",
				"rhs_mag_762x51_M240_1200",
				"rhs_laserfcsmag",
				"rhs_laserfcsmag"
			};
			soundServo[]=
			{
				"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
				0.15848932,
				1,
				50
			};
			soundServoVertical[]=
			{
				"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
				0.15848932,
				1,
				50
			};
			forceHideGunner=1;
			usePip=2;
			LODOpticsIn=0;
			animationSourceHatch="";
			animationSourceStickX="turret_control_x";
			animationSourceStickY="turret_control_y";
			gunnerRightHandAnimName="turret_control";
			viewGunnerShadowAmb=0.5;
			viewGunnerShadowDiff=0.050000001;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000,4100,4200,4300,4400,4500,4600,4700,4800,4900,5000};
			discreteDistanceInitIndex=5;
			memoryPointGunnerOptics="gunnerview";
			memoryPointGun="usti hlavne2";
			minElev=-8;
			maxElev=20;
			initElev=10;
			gunnerOutOpticsModel="";
			gunnerOutOpticsEffect[]={};
			gunnerOpticsEffect[]={};
			gunnerForceOptics=1;
			startEngine=0;
			inGunnerMayFire=1;
			viewGunnerInExternal=1;
			isPersonTurret=0;
			class dynamicViewLimits
			{
				CommanderOptics[]={-65,90};
			};
			minOutElev=-10;
			maxOutElev=15;
			initOutElev=0;
			minOutTurn=-135;
			maxOutTurn=90;
			initOutTurn=0;
			class OpticsIn
			{
				class Wide: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.23333301;
					minFov=0.23333301;
					maxFov=0.23333301;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={2,3};
					gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2";
					gunnerOpticsEffect[]={};
					hitpoint="Hit_Optic_GPS";
				};
				class Medium: Wide
				{
					gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1_2";
					initFov=0.07;
					minFov=0.07;
					maxFov=0.07;
				};
				class Narrow: Medium
				{
					gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_4";
					initFov=0.014;
					minFov=0.014;
					maxFov=0.014;
				};
			};
			class ViewGunner: ViewGunner
			{
				initAngleX=-13;
				initAngleY=0;
				initFov=0.89999998;
				minFov=0.25;
				maxFov=1.25;
				minAngleX=-65;
				maxAngleX=85;
				minAngleY=-150;
				maxAngleY=150;
				minMoveX=-0.075000003;
				maxMoveX=0.075000003;
				minMoveY=-0.075000003;
				maxMoveY=0.075000003;
				minMoveZ=-0.075000003;
				maxMoveZ=0.1;
			};
			turretInfoType="RHS_RscWeaponM1_FCS";
			showCrewAim=2;
			class TurnOut
			{
				limitsArrayTop[]=
				{
					{20.1126,-107.5349},
					{19.8932,99.317703}
				};
				limitsArrayBottom[]=
				{
					{-9.1273003,-108.1836},
					{-7.1046,-44.255001},
					{-9.1674995,31.497801},
					{-9.0504999,102.8447}
				};
			};
			class TurnIn: TurnOut
			{
				limitsArrayTop[]=
				{
					{19.9995,-180},
					{19.998501,180}
				};
				limitsArrayBottom[]=
				{
					{-2,-180},
					{-1,-154.4525},
					{-5.8804998,-82.711601},
					{-8,20.756201},
					{-7,-20.756201},
					{-5.8804998,82.711601},
					{-1,153.1266},
					{-2,180}
				};
			};
			class HitPoints
			{
				class HitTurret
				{
					armor=0.80000001;
					material=-1;
					armorComponent="hit_main_turret";
					name="hit_main_turret_point";
					visual="vez";
					passThrough=0;
					minimalHit=0.1;
					explosionShielding=0.2;
					radius=0.25;
					isTurret=1;
				};
				class HitGun
				{
					armor=0.60000002;
					material=-1;
					armorComponent="hit_main_gun";
					name="hit_main_gun_point";
					visual="zbran";
					passThrough=0;
					minimalHit=0.1;
					explosionShielding=0.40000001;
					radius=0.2;
					isGun=1;
				};
			};
		};
	};
};

class rtg_ravn: rtg_ravn_base
{
	displayNameShort = "RAVN [4/0]";
	displayName = "RAVN [4/0]";
	editorSubcategory = "RTG_HEAVY_ASSETS";
	author = "Shrike";
	scope = 2;
	side = 1;
	faction = "Raider_Tactical_F";
	ace_cargo_space = 8;
	mineDetectorRange = 50;
	canAccessMineDetector = 1;
	RTG_Vehicle_Gear_Tracked 

	crew="B_crew_F";
	typicalCargo[]=
	{
		"B_Soldier_F"
	};
	accuracy=1000;
	vehicleClass="rhs_vehclass_tank";
	editorPreview="\M10_booker\tex\ui\m10_booker_olive_pre.jpg";
	hiddenSelectionsTextures[]=
	{
		"\M10_booker\tex\Hull_O_co.paa",
		"\M10_booker\tex\Turret_O_co.paa",
		"\M10_booker\tex\Aditional_Sides_O_co.paa",
		"\M10_booker\tex\Sides2_O_co.paa",
		"\M10_booker\tex\Gun_O_co.paa",
		"\M10_booker\tex\Mantlet_O_co.paa",
		"\M10_booker\tex\Wheels_O_co.paa",
		"\M10_booker\tex\plate_O_co.paa"
	};

	class TextureSources
	{
		class Woodcamo
		{
			displayName="Desert";
			author="Lurker1011";
			textures[]=
			{
				"\M10_booker\tex\Hull_co.paa",
				"\M10_booker\tex\Turret_co.paa",
				"\M10_booker\tex\Aditional_Sides_co.paa",
				"\M10_booker\tex\Sides2_co.paa",
				"\M10_booker\tex\Gun_co.paa",
				"\M10_booker\tex\Mantlet_co.paa",
				"\M10_booker\tex\Wheels_co.paa",
				"\M10_booker\tex\plate_co.paa"
			};
			factions[]=
			{
				"BLU_F",
				"rhs_faction_usarmy_d",
				"rhs_faction_usarmy_wd",
				"Raider_Tactical_F"
			};
		};
		class Olive
		{
			displayName="Olive";
			author="Lurker1011";
			textures[]=
			{
				"\M10_booker\tex\Hull_O_co.paa",
				"\M10_booker\tex\Turret_O_co.paa",
				"\M10_booker\tex\Aditional_Sides_O_co.paa",
				"\M10_booker\tex\Sides2_O_co.paa",
				"\M10_booker\tex\Gun_O_co.paa",
				"\M10_booker\tex\Mantlet_O_co.paa",
				"\M10_booker\tex\Wheels_O_co.paa",
				"\M10_booker\tex\plate_O_co.paa"
			};
			factions[]=
			{
				"BLU_F",
				"rhs_faction_usarmy_d",
				"rhs_faction_usarmy_wd",
				"Raider_Tactical_F"
			};
		};
	};
	textureList[]=
	{
		"Woodcamo2",
		0.80000001,
		"Olive",
		0.2
	};
};

class rtg_ravn_g : rtg_ravn
{
	side = 4;
	faction = "Raider_Tactical_G_F";
}