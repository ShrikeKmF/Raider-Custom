////////////////////////////////////////////////////////////////////
//DeRap: uh-60_c\SmallArms\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 08 18:52:16 2023 : 'file' last modified on Thu Jan 01 13:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Ej_UH60M_smallarms
	{
		units[] = {};
		weapons[] = {"Ej_Flaregun","ej_hk41610_160th"};
		magazines[] = {"41630mk318_stanag_mag","41630mk262_stanag_mag","41630m855a1_stanag_mag","41630mk318d_100mag","41630mk262d_100mag","41630m855a1d_100mag","41630mk318_100mag","41630mk262_100mag","41630m855a1_100mag","41630mk318_mag","41630mk262_mag","41630m855a1_mag","41630mk318d_mag","41630mk262d_mag","41630m855a1d_mag","41630mk318_60mag","41630mk262_60mag","41630m855a1_60mag"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Soft_F","A3_UI_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};
class UnderBarrelSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class asdg_SlotInfo;
class SlotInfo;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_long;
class asdg_OpticSideMount;
class asdg_UnderSlot;
class CfgRecoils
{
	class recoil_ej_556M4VG
	{
		kickBack[] = {0.015246,0.0317625};
		muzzleInner[] = {0,0,0,0.1588125,0.1588125};
		muzzleOuter[] = {0.1588125,0.4764375,0.63525003,0.023821875};
		permanent = 0.15;
		temporary = 0.01;
	};
};
class CfgWeapons
{
	class Default;
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class ej_flaregun_base: Pistol_Base_F
	{
		scope = 0;
		displayname = "Flare Gun";
		dexterity = 1;
		recoil = "recoil_pistol_4five";
		magazines[] = {"FlareGreen_F","FlareWhite_F","FlareRed_F","FlareYellow_F"};
		model = "\uh-60\Misc\Weapons\FlareGun\ej_FlareGun.p3d";
		modes[] = {"Single"};
		muzzles[] = {"this","securite"};
		class securite: Default
		{
			displayName = "$STR_R3F_SAFE";
			magazines[] = {"R3F_securite_mag"};
			begin1[] = {"",1,1,1};
			soundBegin[] = {"begin1",1};
			reloadMagazineSound[] = {"",1,1,1};
			drySound[] = {"",1,1,1};
			optics = "true";
			modelOptics = "-";
			opticsZoomMin = 0.375;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.75;
			memoryPointCamera = "eye";
		};
		picture = "\uh-60\data\ui\flaregun_x_ca.paa";
		reloadaction = "GestureReloadPistol";
		class Library
		{
			libtextdesc = "Flare Gun";
		};
		drySound[] = {"",1,1,1};
		caseless[] = {"",1,1,1};
		soundBullet[] = {"caseless",1};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\Pistols\p07_reload",0.56234133,1,30};
		class WeaponSlotsInfo{};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "caselessstart";
				directionName = "caselessend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.25118864,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.25118864,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_01",2.5118864,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_02",2.5118864,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_03",2.5118864,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			reloadTime = 0.030000001;
			dispersion = 0.00087;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
	};
	class Ej_Flaregun: ej_flaregun_base
	{
		dlc = "uh60";
		scope = 2;
		scopeCurator = 2;
		descriptionshort = "Flare Gun";
		picture = "\uh-60\data\UI\flaregun_x_ca.paa";
		displayname = "Flare Gun";
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class Ej_hk416_base: Rifle_Base_F
	{
		changeFiremodeSound[] = {"\UH-60\sound\Safety.wav",0.5,1};
		descriptionshort = "HK316<br />Caliber: 5.56";
		discretedistance[] = {100,200,300,400,500,600};
		discretedistanceinitindex = 1;
		displayname = "H&K 416";
		dexterity = 1.52;
		drySound[] = {"",0.56234133,1,10};
		handanim[] = {"OFP2_ManSkeleton","\uh-60\Data\Anim\SCAR.rtm"};
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 3;
		inertia = 1e-05;
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		cursorSize = 1;
		magazines[] = {"41630mk318_stanag_mag","41630mk262_stanag_mag","41630m855a1_stanag_mag","41630mk318d_100mag","41630mk262d_100mag","41630m855a1d_100mag","41630mk318d_mag","41630mk262d_mag","41630m855a1d_mag","41630mk262_60mag","41630m855a1_60mag","41630mk318_60mag","41630mk262_mag","41630m855a1_mag","41630mk318_mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand_green","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_Tracer_Red","30Rnd_556x45_Stanag_Sand_Tracer_Green","30Rnd_556x45_Stanag_Sand_Tracer_Yellow","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_Tracer_F","150Rnd_556x45_Drum_Green_Mag_F","150Rnd_556x45_Drum_Green_Mag_Tracer_F"};
		model = "uh-60\Misc\Weapons\HK416\ej_hk41610_160th.p3d";
		modes[] = {"416Single","416FullAuto","416close","416short","416medium","416fullauto_medium","416single_medium_optics1","416far_optic1","416far_optic2","416single_far_optics2"};
		muzzles[] = {"this","securite"};
		class securite: Rifle
		{
			displayName = "$STR_R3F_SAFE";
			magazines[] = {"R3F_securite_mag"};
			begin1[] = {"",1,1,1};
			soundBegin[] = {"begin1",1};
			reloadMagazineSound[] = {"",1,1,1};
			drySound[] = {"",1,1,1};
			optics = "true";
			modelOptics = "-";
			opticsZoomMin = 0.375;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.75;
			memoryPointCamera = "eye";
		};
		picture = "\Uh-60\data\UI\iar3010_x_ca.paa";
		recoil = "recoil_ej_556M4VG";
		reloadAction = "GestureReloadSMG_02";
		reloadMagazineSound[] = {"uh-60\sound\HK416reload.wav",0.398107,1,30};
		reloadsound[] = {"A3\sounds_f\weapons\reloads\new_trg.wav",0.1,1,30};
		reloadtime = 5.1;
		scope = 0;
		selectionFireAnim = "muzzleFlash";
		weaponinfotype = "RscWeaponZeroing";
		class Library
		{
			libtextdesc = "Ultimax 100";
		};
		class GunClouds
		{
			access = 0;
			cloudletaccy = 0;
			cloudletalpha = 0.3;
			cloudletanimperiod = 1;
			cloudletcolor[] = {1,1,1,0};
			cloudletduration = 0.05;
			cloudletfadein = 0;
			cloudletfadeout = 0.1;
			cloudletgrowup = 0.05;
			cloudletmaxyspeed = 100;
			cloudletminyspeed = -100;
			cloudletshape = "cloudletClouds";
			cloudletsize = 1;
			deltat = 0;
			initt = 0;
			interval = -0.02;
			size = 0.3;
			sourcesize = 0.02;
			timetolive = 0;
			class Table
			{
				class T0
				{
					color[] = {1,1,1,0};
					maxt = 0;
				};
			};
		};
		class WeaponSlotsInfo
		{
			allowedslots[] = {901};
			mass = 60;
			class MuzzleSlot: SlotInfo
			{
				access = 1;
				compatibleitems[] = {"muzzle_snds_M"};
				displayname = "Muzzle Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope = 0;
			};
			class asdg_OpticRail1913_IAR: asdg_OpticRail1913{};
			class asdg_FrontSideRail_IAR: asdg_FrontSideRail{};
			class UnderBarrelSlot: asdg_UnderSlot{};
		};
		class 416Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"HK416_SoundSet","HK416_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"SF556Suppressed_SoundSet","SF556Suppressed_SoundSet"};
			};
			reloadTime = 0.096;
			dispersion = 0.0011636;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class 416FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"HK416_SoundSet","HK416_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"SF556Suppressed_SoundSet","SF556Suppressed_SoundSet"};
			};
			reloadTime = 0.085;
			dispersion = 0.0011636;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class 416close: 416FullAuto
		{
			burst = 3;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class 416short: 416close
		{
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class 416medium: 416close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class 416fullauto_medium: 416FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class 416single_medium_optics1: 416Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class 416far_optic1: 416medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class 416far_optic2: 416far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		class 416single_far_optics2: 416single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
	};
	class ej_hk41610_160th: Ej_hk416_base
	{
		dlc = "uh-60";
		changeFiremodeSound[] = {"\uh-60\sound\HKSafety.wav",0.5,1};
		dexterity = 1.52;
		scope = 2;
		recoil = "recoil_ej_556M4VG";
		descriptionshort = "HK416 10-inch barrel<br />Caliber: 5.56";
		picture = "\uh-60\data\UI\iar3010_x_ca.paa";
		displayname = "HK416 160th";
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class 41630mk318_mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_mk318105in";
		displayNameShort = "Mk318";
		displayname = "HK416 Mk318 30-round Magazine";
		initspeed = 857.0976;
		lastroundstracer = 5;
		scope = 2;
		mass = 8;
		model = "\Uh-60\Mags\30HK_Ground.p3d";
		modelSpecial = "\Uh-60\proxies\30HK.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630mk262_mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_mk262105in";
		displayNameShort = "Mk262";
		displayname = "HK416 Mk262 30-round Magazine";
		initspeed = 765.048;
		lastroundstracer = 5;
		scope = 2;
		mass = 8;
		model = "\Uh-60\Mags\30HK_Ground.p3d";
		modelSpecial = "\Uh-60\proxies\30HK.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630m855a1_mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_m855a1105in";
		displayNameShort = "M855A1";
		displayname = "HK416 M855A1 30-round Magazine";
		initspeed = 862.584;
		lastroundstracer = 5;
		mass = 8;
		model = "\Uh-60\Mags\30HK_Ground.p3d";
		modelSpecial = "\Uh-60\proxies\30HK.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630mk318d_mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_mk318105in";
		displayNameShort = "Mk318";
		displayname = "HK416 Mk318 Desert 30-round";
		initspeed = 857.0976;
		lastroundstracer = 5;
		scope = 2;
		mass = 8;
		model = "\Uh-60\Mags\30HKD_Ground.p3d";
		modelSpecial = "\Uh-60\proxies\30hkD.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630mk262d_mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_mk262105in";
		displayNameShort = "Mk262";
		displayname = "HK416 Mk262 Desert 30-round";
		initspeed = 765.048;
		lastroundstracer = 5;
		scope = 2;
		mass = 8;
		model = "\Uh-60\Mags\30HKD_Ground.p3d";
		modelSpecial = "\Uh-60\proxies\30hkD.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630m855a1d_mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_m855a1105in";
		displayNameShort = "M855A1";
		displayname = "HK416 M855A1 Desert 30-round";
		initspeed = 862.584;
		lastroundstracer = 5;
		mass = 8;
		model = "\Uh-60\Mags\30HKD_Ground.p3d";
		modelSpecial = "\Uh-60\proxies\30hkD.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630mk318_60mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_mk318105in";
		displayNameShort = "Mk318";
		displayname = "HK416 Mk318 60-round Magazine";
		initspeed = 857.0976;
		lastroundstracer = 5;
		scope = 2;
		count = 60;
		mass = 15;
		model = "\Uh-60\Mags\60M4_Ground.p3d";
		modelSpecial = "\Uh-60\proxies\60M4.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630mk262_60mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_mk262105in";
		displayNameShort = "Mk262";
		displayname = "HK416 Mk262 60-round Magazine";
		initspeed = 765.048;
		lastroundstracer = 5;
		scope = 2;
		count = 60;
		mass = 15;
		model = "\Uh-60\Mags\60M4_Ground.p3d";
		modelSpecial = "\Uh-60\proxies\60M4.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630m855a1_60mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_m855a1105in";
		displayNameShort = "M855A1";
		displayname = "HK416 M855A1 60-round Magazine";
		initspeed = 862.584;
		lastroundstracer = 5;
		count = 60;
		mass = 15;
		model = "\uh-60\Mags\60M4_Ground.p3d";
		modelSpecial = "\uh-60\proxies\60M4.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630mk318_100mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_mk318105in";
		displayNameShort = "Mk318";
		displayname = "HK416 Mk318 100-round Magazine";
		initspeed = 857.0976;
		lastroundstracer = 5;
		scope = 2;
		count = 100;
		mass = 24;
		model = "\uh-60\Mags\HK100_Ground.p3d";
		modelSpecial = "\uh-60\proxies\HK100.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630mk262_100mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_mk262105in";
		displayNameShort = "Mk262";
		displayname = "HK416 Mk262 100-round Magazine";
		initspeed = 765.048;
		lastroundstracer = 5;
		scope = 2;
		count = 100;
		mass = 24;
		model = "\Uh-60\Mags\HK100_Ground.p3d";
		modelSpecial = "\Uh-60\proxies\HK100.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630m855a1_100mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_m855a1105in";
		displayNameShort = "M855A1";
		displayname = "HK416 M855A1 100-round Magazine";
		initspeed = 862.584;
		lastroundstracer = 5;
		count = 100;
		mass = 24;
		model = "\Uh-60\Mags\HK100_Ground.p3d";
		modelSpecial = "\Uh-60\proxies\HK100.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630mk318d_100mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_mk318105in";
		displayNameShort = "Mk318";
		displayname = "HK416 Mk318 Desert 100-round C-mag";
		initspeed = 857.0976;
		lastroundstracer = 5;
		scope = 2;
		count = 100;
		mass = 24;
		picture = "\uh-60\data\UI\gear_uh-60d_magazine_x_ca.paa";
		model = "\uh-60\Mags\HK100D_Ground.p3d";
		modelSpecial = "\uh-60\proxies\HK100D.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630mk262d_100mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_mk262105in";
		displayNameShort = "Mk262";
		displayname = "HK416 Mk262 Desert 100-round C-mag";
		initspeed = 765.048;
		lastroundstracer = 5;
		scope = 2;
		count = 100;
		mass = 24;
		picture = "\uh-60\data\UI\gear_uh-60d_magazine_x_ca.paa";
		model = "\uh-60\Mags\HK100D_Ground.p3d";
		modelSpecial = "\uh-60\proxies\HK100D.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630m855a1d_100mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_m855a1105in";
		displayNameShort = "M855A1";
		displayname = "HK416 M855A1 Desert 100-round C-mag";
		initspeed = 862.584;
		lastroundstracer = 5;
		count = 100;
		mass = 24;
		picture = "\uh-60\data\UI\gear_uh-60d_magazine_x_ca.paa";
		model = "\uh-60\Mags\HK100D_Ground.p3d";
		modelSpecial = "\uh-60\proxies\HK100D.p3d";
		modelSpecialIsProxy = 1;
	};
	class 41630mk318_stanag_mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_mk318105in";
		displayNameShort = "Mk318";
		displayname = "HK416 Mk318 30-rnd STANAG Mag";
		initspeed = 857.0976;
		lastroundstracer = 5;
		scope = 2;
		mass = 8;
	};
	class 41630mk262_stanag_mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_mk262105in";
		displayNameShort = "Mk262";
		displayname = "HK416 Mk262 30-rnd STANAG Mag";
		initspeed = 765.048;
		lastroundstracer = 5;
		scope = 2;
		mass = 8;
	};
	class 41630m855a1_stanag_mag: 30Rnd_556x45_Stanag
	{
		ammo = "ej_B_m855a1105in";
		displayNameShort = "M855A1";
		displayname = "HK416 M855A1 30-rnd STANAG Mag";
		initspeed = 862.584;
		lastroundstracer = 5;
		mass = 8;
	};
	class CA_Magazine;
	class R3F_securite_mag: CA_Magazine
	{
		scope = 2;
		displayName = "R3F Safety Magazine";
		count = 0;
		initSpeed = 0;
		tracersEvery = 0;
		ammo = "R3F_securite_Ball";
		picture = "\uh-60\data\window_ca.paa";
		model = "";
		descriptionShort = "";
		mass = 0;
		class Library
		{
			libTextDesc = "";
		};
	};
};
class CfgAmmo
{
	class B_556x45_Ball;
	class ej_B_m855a1105in: B_556x45_Ball
	{
		hit = 7.7320757;
		typicalSpeed = 862.584;
		airFriction = -0.0011840584;
		caliber = 0.855;
		deflecting = 21;
		visibleFire = 3.15;
		audibleFire = 6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgonly = 0;
		tracerendtime = 1;
		tracerscale = 1;
		tracerstarttime = 0.05;
		suppressionRadiusBulletClose = 1;
		suppressionRadiusHit = 0.5;
		dangerRadiusHit = 1;
	};
	class ej_B_mk318105in: B_556x45_Ball
	{
		hit = 9.038702;
		typicalSpeed = 857.0976;
		airFriction = -0.0012817576;
		caliber = 0.755;
		deflecting = 18;
		visibleFire = 3.1;
		audibleFire = 5.5;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgonly = 0;
		tracerendtime = 1;
		tracerscale = 1;
		tracerstarttime = 0.05;
		suppressionRadiusBulletClose = 1;
		suppressionRadiusHit = 0.5;
		dangerRadiusHit = 1;
	};
	class ej_B_mk262105in: B_556x45_Ball
	{
		hit = 10.18994;
		typicalSpeed = 765.048;
		airFriction = -0.0011942625;
		caliber = 0.615;
		deflecting = 15;
		visibleFire = 2.75;
		audibleFire = 5;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgonly = 0;
		tracerendtime = 1;
		tracerscale = 1;
		tracerstarttime = 0.05;
		suppressionRadiusBulletClose = 1;
		suppressionRadiusHit = 0.5;
		dangerRadiusHit = 1;
	};
	class BulletBase;
	class R3F_securite_Ball: BulletBase
	{
		hit = 0;
		cartridge = "FxCartridge_Small";
		cost = 0;
		typicalSpeed = 0;
		airFriction = 0;
		caliber = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0;
		tracerStartTime = 0;
		tracerEndTime = 0;
		nvgOnly = 0;
	};
};
class cfgMods
{
	author = "EricJ";
	timepacked = "1699000307";
};
