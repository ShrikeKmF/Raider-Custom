////////////////////////////////////////////////////////////////////
//DeRap: uh-60_c\SoundSets\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 08 18:52:16 2023 : 'file' last modified on Thu Jan 01 13:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Ej_uh60_soundsets
	{
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		author[] = {"EricJ"};
	};
};
class CfgSoundCurves
{
	class Generic_InverseSquareCurve
	{
		points[] = {{0,1},{0.05,0.615},{0.1,0.4194},{0.15,0.3015},{0.2,0.225},{0.25,0.1725},{0.3,0.135},{0.35,0.1072},{0.4,0.0861},{0.45,0.0697},{0.5,0.0566},{0.6,0.0375},{0.7,0.0244},{0.8,0.015},{0.9,0.0081},{1,0}};
	};
};
class cfgSound3DProcessors
{
	class Generic_Shot3DProcessingType
	{
		type = "panner";
		innerRange = 0;
		range = 5;
		rangeCurve = "LinearCurve";
	};
	class Generic_ShotTail3DProcessingType
	{
		type = "panner";
		innerRange = 5;
		range = 160;
		rangeCurve = "InverseSquare1Curve";
	};
};
class cfgDistanceFilters
{
	class Generic_ShotDistanceFreqAttenuationFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 300;
		qFactor = 1;
		innerRange = 10;
		range = 2000;
		powerFactor = 32;
	};
	class Generic_ShotTailDistanceFreqAttenuationFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 300;
		qFactor = 1;
		innerRange = 10;
		range = 1500;
		powerFactor = 32;
	};
};
class CfgSoundSets
{
	class HK416_SoundSet
	{
		soundShaders[] = {"Generic_Closure_SoundShader","HK416_closeShot_SoundShader","HK416_midShot_SoundShader","HK416_distShot_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "Generic_InverseSquareCurve";
		sound3DProcessingType = "Generic_Shot3DProcessingType";
		distanceFilter = "Generic_ShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class HK416_Tail_SoundSet
	{
		soundShaders[] = {"Generic_tailInterior_SoundShader","Generic_tailTrees_SoundShader","Generic_tailForest_SoundShader","Generic_tailMeadows_SoundShader","Generic_tailHouses_SoundShader"};
		soundShadersLimit = 2;
		volumeFactor = 1;
		volumeCurve = "Generic_InverseSquareCurve";
		frequencyRandomizerMin = 0.01;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "Generic_ShotTail3DProcessingType";
		distanceFilter = "Generic_ShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SF556Suppressed_SoundSet
	{
		soundShaders[] = {"SF556Suppressed_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "Generic_InverseSquareCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "Generic_Shot3DProcessingType";
	};
	class SF556SuppressedTail_SoundSet
	{
		soundShaders[] = {"SuppressedTailTrees_SoundShader","SuppressedTailForest_SoundShader","SuppressedTailMeadows_SoundShader","SuppressedTailHouses_SoundShader","SuppressedTailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "Generic_InverseSquareCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "Generic_ShotTail3DProcessingType";
	};
};
class CfgSoundShaders
{
	class HK416_closeShot_SoundShader
	{
		samples[] = {{"uh-60\sound\HK416.wav",1},{"uh-60\sound\HK416.wav",1},{"uh-60\sound\HK416.wav",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class HK416_midShot_SoundShader
	{
		samples[] = {{"uh-60\sound\HK416.wav",1},{"uh-60\sound\HK416.wav",1},{"uh-60\sound\HK416.wav",1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class HK416_distShot_SoundShader
	{
		samples[] = {{"uh-60\sound\HK416.wav",1},{"uh-60\sound\HK416.wav",1},{"uh-60\sound\HK416.wav",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class SF556Suppressed_SoundShader
	{
		samples[] = {{"Uh-60\sound\SF.wav",1},{"uh-60\sound\SF.wav",1},{"uh-60\sound\SF.wav",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Generic_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_02",1}};
		volume = 0.4466836;
		range = 5;
	};
	class Generic_tailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailInterior",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class Generic_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class Generic_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class Generic_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class Generic_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
	class SuppressedTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SuppressedTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class SuppressedTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class SuppressedTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SuppressedTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
};
class cfgMods
{
	author = "EricJ";
	timepacked = "1699000307";
};
