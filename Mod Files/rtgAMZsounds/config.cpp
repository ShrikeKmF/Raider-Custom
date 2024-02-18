/*
Raider Tacical Group Custom Content
rtgAMZsounds
Author: Shrike

Repo:
https://github.com/ShrikeKmF/Raider-Custom

Discord:
https://discord.gg/D55THJWxn4
*/

class CfgPatches {
    class rtgAMZsounds {
        name = "rtgAMZsounds";
        units[] = {""};
        weapons[] = {""};
        magazines[] = {""};
        requiredVersion = "1.5";
        requiredAddons[] = {"A3_Sounds_F", "rtgEquipment","A3_Sounds_F_exp","A3_Weapons_F","A3_Weapons_f_exp","A3_Weapons_F_Enoch"};
        author = "";
        authors[] = {"Shrike"};
        authorUrl = "";
    };
};

class CfgWeapons
{
	class FullAuto;
	class Single;
    class hlc_aug_base;
    class hlc_rifle_aug : hlc_aug_base
    {	
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};					
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_ACR_Sets","Medium_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_AKMSuppressed_Sets","Medium_SD_Reflection_SoundSet","Squad762_BulletCasings_Sets","MX_silencerTail_SoundSet"};
			};
		};	
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"Squad_ACR_Sets","Medium_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_AKMSuppressed_Sets","Medium_SD_Reflection_SoundSet","Squad762_BulletCasings_Sets","MX_silencerTail_SoundSet"};
			};
		};
    };

	class hlc_SCARL_Base;
	class hlc_wp_SCARL_STD : hlc_SCARL_Base
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};					
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_ACR_Sets","Medium_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_AKMSuppressed_Sets","Medium_SD_Reflection_SoundSet","Squad762_BulletCasings_Sets","MX_silencerTail_SoundSet"};
			};
		};	
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"Squad_ACR_Sets","Medium_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_AKMSuppressed_Sets","Medium_SD_Reflection_SoundSet","Squad762_BulletCasings_Sets","MX_silencerTail_SoundSet"};
			};
		};
	};

	class hlc_wp_SCAR_PDW : hlc_wp_SCARL_STD
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};					
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_ACR_Sets","Medium_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_AKMSuppressed_Sets","Medium_SD_Reflection_SoundSet","Squad762_BulletCasings_Sets","MX_silencerTail_SoundSet"};
			};
		};	
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"Squad_ACR_Sets","Medium_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_AKMSuppressed_Sets","Medium_SD_Reflection_SoundSet","Squad762_BulletCasings_Sets","MX_silencerTail_SoundSet"};
			};
		};
	};

	class hlc_wp_SCARL_STD_300AAC : hlc_SCARL_Base
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};					
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_ACR_Sets","Medium_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_AKMSuppressed_Sets","Medium_SD_Reflection_SoundSet","Squad762_BulletCasings_Sets","MX_silencerTail_SoundSet"};
			};
		};	
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"Squad_ACR_Sets","Medium_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_AKMSuppressed_Sets","Medium_SD_Reflection_SoundSet","Squad762_BulletCasings_Sets","MX_silencerTail_SoundSet"};
			};
		};
	};

	class hlc_wp_SCARL_STD_EGLM : hlc_SCARL_Base
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};					
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_ACR_Sets","Medium_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_AKMSuppressed_Sets","Medium_SD_Reflection_SoundSet","Squad762_BulletCasings_Sets","MX_silencerTail_SoundSet"};
			};
		};	
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"Squad_ACR_Sets","Medium_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_AKMSuppressed_Sets","Medium_SD_Reflection_SoundSet","Squad762_BulletCasings_Sets","MX_silencerTail_SoundSet"};
			};
		};
	};

	class arifle_SPAR_01_blk_F;
	class rtg_g36_v_556 : arifle_SPAR_01_blk_F
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};					
		class Single: Single{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_VHSD2_Sets","Medium_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_M4Suppressed_Sets","Squad556_BulletCasings_Sets","MX_silencerTail_SoundSet"};				
			};
		};
		class FullAuto: FullAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_VHSD2_Sets","Medium_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_M4Suppressed_Sets","Squad556_BulletCasings_Sets","MX_silencerTail_SoundSet"};				
			};
		};
	};

	class rtg_mg3;
	class rtg_ameli : rtg_mg3
	{
		class FullAuto1: FullAuto{
			class basesoundmodetype;
			class standardsound: basesoundmodetype{
				soundSetShot[] = {"Squad_M249_Sets","SyndikatLMG_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
			class silencedsound: basesoundmodetype{
				soundSetShot[] = {"Squad_M249Suppressed_Sets","Squad556_BulletCasings_Sets"};
			};
		};
	};
};