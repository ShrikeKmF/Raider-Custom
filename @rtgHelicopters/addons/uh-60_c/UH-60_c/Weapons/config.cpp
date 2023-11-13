////////////////////////////////////////////////////////////////////
//DeRap: uh-60_c\Weapons\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 08 18:52:17 2023 : 'file' last modified on Thu Jan 01 13:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Ej_UH60M_weapons
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class CfgWeapons
{
	class Default;
	class M134_minigun;
	class LauncherCore;
	class CannonCore;
	class MissileLauncher;
	class MGun;
	class missiles_DAR;
	class ej_missiles_DAR: missiles_DAR
	{
		magazines[] = {"ej_38Rnd_missiles","ej_76Rnd_missiles"};
	};
	class M240_veh: MGun
	{
		scope = 1;
		displayName = "M240";
		soundContinuous = 0;
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		magazines[] = {"100Rnd_762x51_M240"};
		magazineReloadTime = 3;
		canLock = 0;
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		cursorSize = 1;
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "M240";
			autoFire = 1;
			reloadTime = 0.075;
			dispersion = 0.0012;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
	};
	class M240_veh_2: M240_veh{};
	class HellfireLauncher: MissileLauncher
	{
		scope = 2;
		CanLock = 2;
		autoFire = 0;
		displayName = "HELLFIRE";
		minRange = 100;
		minRangeProbab = 0.6;
		midRange = 4000;
		midRangeProbab = 0.9;
		maxRange = 8000;
		maxRangeProbab = 0.1;
		nameSound = "MissileLauncher";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_7",1.7782794,1.2,1600};
			soundBegin[] = {"begin1",1};
		};
		soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.2,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.31622776,2.5};
		reloadTime = 1;
		magazines[] = {"4Rnd_Hellfire","8Rnd_Hellfire","16Rnd_Hellfire"};
		weaponLockDelay = 3;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 8000;
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		cursorSize = 1;
		textureType = "fullAuto";
	};
	class RattlerLauncher: HellfireLauncher
	{
		scope = 2;
		autoFire = 0;
		displayName = "Rattler";
		minRange = 50;
		minRangeProbab = 0.6;
		midRange = 5000;
		midRangeProbab = 0.9;
		maxRange = 10000;
		maxRangeProbab = 0.1;
		nameSound = "MissileLauncher";
		WeaponLockSystem = 4;
		cmImmunity = 0.95;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_7",1.7782794,1.2,1600};
			soundBegin[] = {"begin1",1};
		};
		soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.2,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.31622776,2.5};
		reloadTime = 1;
		magazines[] = {"4Rnd_Rattler","8Rnd_Rattler"};
		weaponLockDelay = 3;
		CanLock = 2;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 8000;
		cursorAim = "EmptyCursor";
		missileLockCone = 40;
		cursor = "EmptyCursor";
		cursorSize = 1;
		textureType = "fullAuto";
	};
	class M230: CannonCore
	{
		scope = 1;
		displayName = "M230";
		nameSound = "cannon";
		autoFire = 1;
		magazines[] = {"1200Rnd_30x113mm_M789_HEDP"};
		canLock = 2;
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		cursorSize = 1;
		flash = "gunfire";
		flashSize = 0.1;
		recoil = "Empty";
		ballisticsComputer = 2;
		modes[] = {"manual","close","short","medium","far"};
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class manual: CannonCore
		{
			displayName = "M230";
			autoFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\cannons\cannon_30mm",1.1220185,1,1100};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.09677419;
			dispersion = 0.0011636;
			soundContinuous = 0;
			soundBurst = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			textureType = "fullAuto";
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 15;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.4;
			maxRange = 1500;
			maxRangeProbab = 0.01;
		};
	};
	class M197_MH60: CannonCore
	{
		scope = 1;
		displayName = "M197";
		nameSound = "cannon";
		autoFire = 1;
		magazines[] = {"750Rnd_M197_MH60"};
		canLock = 2;
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		cursorSize = 1;
		flash = "gunfire";
		flashSize = 0.1;
		recoil = "Empty";
		ballisticsComputer = 2;
		modes[] = {"manual","close","short","medium","far"};
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class manual: CannonCore
		{
			displayName = "M197";
			autoFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\gatling\gatling4",1.1220185,1,1100};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.04;
			dispersion = 0.0011636;
			soundContinuous = 0;
			soundBurst = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			textureType = "fullAuto";
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 15;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.4;
			maxRange = 1500;
			maxRangeProbab = 0.01;
		};
	};
	class CMFlareLauncher;
	class EricJ_CMFlareLauncher: CMFlareLauncher
	{
		modes[] = {"Single","Burst1","Burst2","Burst3","Burst4","Burst5","Burst6","Burst7","Burst8","AIBurst"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.25;
			autoFire = "false";
			displayName = "A- 2F/-";
			burst = 1;
			multiplier = 2;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Burst1: Mode_Burst
		{
			reloadTime = 0.125;
			autoFire = "true";
			displayName = "B - 8F/0.5S";
			burst = 4;
			multiplier = 2;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Burst2: Burst1
		{
			reloadTime = 0.25;
			autoFire = "true";
			displayName = "C - 8F/1S";
			burst = 4;
			multiplier = 2;
		};
		class Burst3: Burst1
		{
			reloadTime = 0.5;
			autoFire = "true";
			displayName = "D - 8F/2S";
			burst = 4;
			multiplier = 2;
		};
		class Burst4: Burst1
		{
			reloadTime = 1;
			autoFire = "true";
			displayName = "E - 8F/4S";
			burst = 4;
			multiplier = 2;
		};
		class Burst5: Burst1
		{
			reloadTime = 0.125;
			autoFire = "true";
			displayName = "F - 16F/1S";
			burst = 8;
			multiplier = 2;
		};
		class Burst6: Burst1
		{
			reloadTime = 0.25;
			autoFire = "true";
			displayName = "G - 16F/2S";
			burst = 8;
			multiplier = 2;
		};
		class Burst7: Burst1
		{
			reloadTime = 0.5;
			autoFire = "true";
			displayName = "H - 16F/4S";
			burst = 8;
			multiplier = 2;
		};
		class Burst8: Burst1
		{
			reloadTime = 1;
			autoFire = "true";
			displayName = "I - 16F/8S";
			burst = 8;
			multiplier = 2;
		};
	};
	class EricJ_CMFlareLauncherDAP: CMFlareLauncher
	{
		modes[] = {"Single","Burst1","Burst2","Burst3","Burst4","Burst5","Burst6","Burst7","Burst8","AIBurst"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.25;
			autoFire = "false";
			displayName = "A- 3F/-";
			burst = 1;
			multiplier = 3;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Burst1: Mode_Burst
		{
			reloadTime = 0.125;
			autoFire = "true";
			displayName = "B - 9F/0.5S";
			burst = 3;
			multiplier = 3;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Burst2: Burst1
		{
			reloadTime = 0.25;
			autoFire = "true";
			displayName = "C - 9F/1S";
			burst = 3;
			multiplier = 3;
		};
		class Burst3: Burst1
		{
			reloadTime = 0.5;
			autoFire = "true";
			displayName = "D - 9F/2S";
			burst = 3;
			multiplier = 3;
		};
		class Burst4: Burst1
		{
			reloadTime = 1;
			autoFire = "true";
			displayName = "E - 9F/4S";
			burst = 3;
			multiplier = 3;
		};
		class Burst5: Burst1
		{
			reloadTime = 0.125;
			autoFire = "true";
			displayName = "F - 18F/1S";
			burst = 9;
			multiplier = 2;
		};
		class Burst6: Burst1
		{
			reloadTime = 0.25;
			autoFire = "true";
			displayName = "G - 18F/2S";
			burst = 9;
			multiplier = 2;
		};
		class Burst7: Burst1
		{
			reloadTime = 0.5;
			autoFire = "true";
			displayName = "H - 18F/4S";
			burst = 9;
			multiplier = 2;
		};
		class Burst8: Burst1
		{
			reloadTime = 1;
			autoFire = "true";
			displayName = "I - 18F/8S";
			burst = 9;
			multiplier = 2;
		};
	};
	class EricJ_CMFlareLauncherUH92: CMFlareLauncher
	{
		modes[] = {"Single","Burst1","Burst2","Burst3","Burst4","Burst5","Burst6","Burst7","Burst8","AIBurst"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.25;
			autoFire = "false";
			displayName = "A- 4F/-";
			burst = 1;
			multiplier = 4;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Burst1: Mode_Burst
		{
			reloadTime = 0.125;
			autoFire = "true";
			displayName = "B - 12F/0.5S";
			burst = 4;
			multiplier = 3;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Burst2: Burst1
		{
			reloadTime = 0.25;
			autoFire = "true";
			displayName = "C - 12F/1S";
			burst = 4;
			multiplier = 3;
		};
		class Burst3: Burst1
		{
			reloadTime = 0.5;
			autoFire = "true";
			displayName = "D - 12F/2S";
			burst = 4;
			multiplier = 3;
		};
		class Burst4: Burst1
		{
			reloadTime = 1;
			autoFire = "true";
			displayName = "E - 12F/4S";
			burst = 4;
			multiplier = 3;
		};
		class Burst5: Burst1
		{
			reloadTime = 0.125;
			autoFire = "true";
			displayName = "F - 20F/1S";
			burst = 10;
			multiplier = 2;
		};
		class Burst6: Burst1
		{
			reloadTime = 0.25;
			autoFire = "true";
			displayName = "G - 20F/2S";
			burst = 10;
			multiplier = 2;
		};
		class Burst7: Burst1
		{
			reloadTime = 0.5;
			autoFire = "true";
			displayName = "H - 20F/4S";
			burst = 10;
			multiplier = 2;
		};
		class Burst8: Burst1
		{
			reloadTime = 1;
			autoFire = "true";
			displayName = "I - 20F/8S";
			burst = 10;
			multiplier = 2;
		};
	};
	class SmokeLauncher;
	class kuy_IR_Jammer_Weapon: SmokeLauncher
	{
		scope = 2;
		displayName = "IR Jammer";
		magazines[] = {"kuy_IR_Jammer_Magazine"};
		magazineReloadTime = 60;
		simulation = "cmlauncher";
		modes[] = {"Burst1"};
		class Burst1: Mode_Burst
		{
			displayName = "IR Jammer";
			reloadTime = 0.25;
			burst = 120;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"",1,1,300};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "";
			};
			showToPlayer = 1;
			multiplier = 1;
			minRange = 0;
			maxRange = 200;
			soundBurst = 0;
		};
	};
	class RocketPods;
	class ej_master_arms_safe: RocketPods
	{
		CanLock = 0;
		displayName = "MASTER ARM - SAFE";
		displayNameMagazine = "MASTER ARM - SAFE";
		shortNameMagazine = "MASTER ARM - SAFE";
		nameSound = "";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] = {};
		burst = 0;
		reloadTime = 0.01;
		magazineReloadTime = 0.1;
	};
	class InventoryItem_Base_F;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	class ItemCore;
	class Uniform_Base;
	class U_B_RWGPilotCoveralls: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Raven Warfare Group Coveralls";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\uh-60\Data\Uniforms\coveralls_sand_rwg_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "RWG_Helipilot_F";
			containerClass = "Supply40";
			mass = 60;
		};
	};
	class U_160thFlightSuit_ej: Uniform_Base
	{
		author = "EricJ";
		scope = 2;
		displayName = "Multicam Flight Suit";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\uh-60\Data\Uniforms\Mcamfs_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "160th_SOAR_Pilot";
			containerClass = "Supply40";
			mass = 60;
		};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 1200Rnd_30x113mm_M789_HEDP: VehicleMagazine
	{
		scope = 1;
		displayName = "1200Rnd 30x113mm M789 HEDP";
		ammo = "B_30x113mm_M789_HEDP";
		count = 1200;
		initSpeed = 805;
		tracersEvery = 1;
		maxLeadSpeed = 500;
		nameSound = "cannon";
		airLock = 1;
	};
	class 4Rnd_Hellfire: VehicleMagazine
	{
		scope = 2;
		displayName = "HELLFIRE";
		count = 4;
		ammo = "M_Hellfire_AT";
		initSpeed = 450;
		maxLeadSpeed = 200;
		nameSound = "missiles";
	};
	class 8Rnd_Hellfire: VehicleMagazine
	{
		scope = 2;
		displayName = "HELLFIRE";
		count = 8;
		ammo = "M_Hellfire_AT";
		initSpeed = 450;
		maxLeadSpeed = 200;
		nameSound = "missiles";
	};
	class 16Rnd_Hellfire: VehicleMagazine
	{
		scope = 2;
		displayName = "HELLFIRE";
		count = 16;
		ammo = "M_Hellfire_AT";
		initSpeed = 450;
		maxLeadSpeed = 200;
		nameSound = "missiles";
	};
	class 4Rnd_Rattler: VehicleMagazine
	{
		scope = 2;
		displayName = "AGM-117 Rattler";
		count = 4;
		ammo = "M_Rattler_AT";
		initSpeed = 700;
		maxLeadSpeed = 200;
		nameSound = "missiles";
	};
	class 8Rnd_Rattler: VehicleMagazine
	{
		scope = 2;
		displayName = "AGM-117 Rattler";
		count = 8;
		ammo = "M_Rattler_AT";
		initSpeed = 0;
		maxLeadSpeed = 700;
		nameSound = "missiles";
	};
	class 100Rnd_762x51_M240: VehicleMagazine
	{
		scope = 1;
		displayName = "100rnd_M240";
		count = 100;
		ammo = "ej_762m240";
		initSpeed = 900;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "100RND_M240";
	};
	class 750Rnd_M197_MH60: VehicleMagazine
	{
		scope = 2;
		displayName = "M197";
		ammo = "ej_B_20mm_AP";
		count = 750;
		initSpeed = 1036;
		maxLeadSpeed = 200;
		tracersEvery = 2;
		nameSound = "cannon";
	};
	class CA_Magazine;
	class kuy_IR_Jammer_Magazine: CA_Magazine
	{
		count = 120;
		ammo = "kuy_IR_Jammer_Ammo";
		initSpeed = 30;
	};
	class 24Rnd_missiles;
	class ej_76Rnd_missiles: 24Rnd_missiles
	{
		count = 76;
	};
	class ej_38Rnd_missiles: 24Rnd_missiles
	{
		count = 38;
	};
};
class CfgAmmo
{
	class Default;
	class RocketCore;
	class RocketBase;
	class BulletBase;
	class MissileCore;
	class MissileBase;
	class B_762x51_Ball;
	class B_30mm_HE;
	class B_20mm;
	class ej_B_20mm_AP: B_20mm
	{
		hit = 61.242485;
		indirectHit = 15;
		indirectHitRange = 3;
		visibleFire = 28;
		audibleFire = 28;
		visibleFireTime = 3;
		cost = 25;
		airLock = 1;
		explosive = 0.3;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.000633942;
		caliber = 2.33;
	};
	class B_30x113mm_M789_HEDP: B_30mm_HE
	{
		hit = 70.39158;
		indirectHit = 15;
		indirectHitRange = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		explosive = 0.3;
		airFriction = -0.0010785541;
		caliber = 1.242236;
		allowAgainstInfantry = 1;
	};
	class M_Hellfire_AT: MissileBase
	{
		model = "\UH-60\Misc\Weapons\AGM114\AGM114Hellfire.p3d";
		proxyShape = "\UH-60\Misc\Weapons\AGM114\AGM114Hellfire_proxy";
		hit = 1400;
		indirectHit = 20;
		indirectHitRange = 2;
		cost = 10000;
		caliber = 2.222222;
		maxSpeed = 1800;
		irLock = 1;
		nvLock = 1;
		laserLock = 1;
		airLock = 0;
		maxControlRange = 8000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 30;
		timeToLive = 20;
		simulationStep = 0.01;
		airFriction = 0.1;
		sideAirFriction = 0.3;
		initTime = 0;
		thrustTime = 4;
		thrust = 450;
		fuseDistance = 5;
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile2";
		weaponLockSystem = 16;
		manualControl = 0;
		whistleDist = 4;
		missileLockCone = 60;
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.00025;
			maxDeflection = 0.001;
			incDeflection = 0.0005;
			canVanillaLock = 1;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH","LIDAR","SARH","Optic","Thermal","GPS","SACLOS","MCLOS"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL","LOBL"};
			seekerAngle = 90;
			seekerAccuracy = 1;
			seekerMinRange = 1;
			seekerMaxRange = 8000;
			defaultAttackProfile = "LIN";
			attackProfiles[] = {"LIN","DIR","MID","HI"};
		};
	};
	class M_Rattler_AT: MissileBase
	{
		model = "\UH-60\Misc\Weapons\AGM117\AGM117.p3d";
		proxyShape = "\UH-60\Misc\Weapons\AGM117\AGM117_proxy";
		hit = 1500;
		indirectHit = 20;
		indirectHitRange = 2;
		caliber = 1.9342359;
		cost = 10000;
		maxSpeed = 1000;
		irLock = 1;
		nvLock = 1;
		laserLock = 1;
		airLock = 0;
		maxControlRange = 10000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 30;
		timeToLive = 20;
		simulationStep = 0.01;
		airFriction = 0.1;
		sideAirFriction = 0.3;
		initTime = 0;
		thrustTime = 10;
		thrust = 700;
		fuseDistance = 5;
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile2";
		weaponLockSystem = 16;
		manualControl = 0;
		whistleDist = 4;
		missileLockCone = 90;
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.00025;
			maxDeflection = 0.001;
			incDeflection = 0.0005;
			canVanillaLock = 1;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH","LIDAR","SARH","Optic","Thermal","GPS","SACLOS","MCLOS"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL","LOBL"};
			seekerAngle = 90;
			seekerAccuracy = 1;
			seekerMinRange = 1;
			seekerMaxRange = 10000;
			defaultAttackProfile = "LIN";
			attackProfiles[] = {"LIN","DIR","MID","HI"};
		};
	};
	class ej_762m240: B_762x51_Ball
	{
		hit = 10.119186;
		typicalSpeed = 811.1094;
		airFriction = -0.00077031;
		caliber = 0.449;
		deflecting = 18;
		visibleFire = 2.95;
		audibleFire = 6.1;
		cost = 1.2;
		airLock = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgonly = 0;
		tracerendtime = 0;
		tracerscale = 0;
		tracerstarttime = 0;
		suppressionRadiusBulletClose = 1;
		suppressionRadiusHit = 0.5;
		dangerRadiusHit = 1;
	};
	class kuy_IR_Jammer_Ammo: BulletBase
	{
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		timeToLive = 0.1;
		thrustTime = 2;
		airFriction = -0.01;
		simulation = "shotCM";
		weaponLockSystem = "2 + 8";
		model = "\A3\weapons_f\empty";
		maxControlRange = -1;
		initTime = 0;
	};
};
class CfgNonAIVehicles
{
	class ProxyDriver;
	class ProxyWeapon;
	class ProxyAGM114Hellfire: ProxyWeapon
	{
		model = "\UH-60\Misc\Weapons\AGM114\AGM114Hellfire";
		simulation = "maverickweapon";
	};
	class ProxyAGM117: ProxyWeapon
	{
		model = "\UH-60\Misc\Weapons\AGM117\AGM117";
		simulation = "maverickweapon";
	};
};
class cfgMods
{
	author = "EricJ";
	timepacked = "1699000307";
};
