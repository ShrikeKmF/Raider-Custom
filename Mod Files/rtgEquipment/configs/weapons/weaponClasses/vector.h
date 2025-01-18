// Vector
class SMG_01_F;
class rtg_vector_9mm : SMG_01_F
{
	RTG_WEAPON_BASE
	recoil = "rtg_9mm_primary";
	baseWeapon = "rtg_vector_9mm";
	
	displayName = "Vector 9mm SMG";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_vector";
		calibre = "N9";
	};
};
class rtg_vector_9mm_carbon : rtg_vector_9mm
{
	RTG_WEAPON_BASE
	recoil = "rtg_9mm_primary";
	baseWeapon = "rtg_vector_9mm_carbon";
	
	displayName = "Vector 9mm SMG (Carbon)";
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\vectorSkin.paa","\a3\weapons_f\data\vectoratt_co.paa","\a3\weapons_f\acc\data\battlesight_co.paa"};
	RTG_ACEAX_EMPTY 
};

class rtg_vector_9mm_fish : rtg_vector_9mm
{
	RTG_WEAPON_BASE
	recoil = "rtg_9mm_primary";
	baseWeapon = "rtg_vector_9mm_fish";
	
	displayName = "Vector 9mm SMG (Fish)";
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\fishvectorSkin.paa","\a3\weapons_f\data\vectoratt_co.paa","\a3\weapons_f\acc\data\battlesight_co.paa"};
	RTG_ACEAX_EMPTY 
};

class rtg_vector_50ae : SMG_01_F
{
	RTG_WEAPON_BASE
	baseWeapon = "rtg_vector_50ae";
	
	displayName = "Vector .50 SMG";
	recoil = "rtg_50ae_primary";
	magazineWell[] = {"RTG_50_AE"};
	magazines[] = {"rtg_50_ae_20rnd_mag"};
	mode[] = {"Single", "FullAuto"};
	class Single : Single
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";

			closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
			closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
			soundClosure[] = {closure1, 0.5, closure2, 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
		};
	};
	class FullAuto : FullAuto
	{
		sounds[] = {"StandardSound", "SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";

			closure1[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
			closure2[] = {"\hlc_wp_aug\snd\f88a1_first", 1, 1, 10};
			soundClosure[] = {closure1, 0.5, closure2, 0.5};
		};
		class StandardSound : BaseSoundModeType
		{
			soundSetShot[] = {"aug_Shot_SoundSet", "aug_Tail_SoundSet"};
		};
		class SilencedSound : BaseSoundModeType
		{
			soundSetShot[] = {"aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet"};
		};
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_vector";
		calibre = "N50";
	};
};