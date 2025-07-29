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

#include "defines.hpp"

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
				soundSetShot[] = ACR_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
			};
		};	
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = ACR_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
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
				soundSetShot[] = ACR_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
			};
		};	
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = ACR_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
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
				soundSetShot[] = ACR_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
			};
		};	
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = ACR_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
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
				soundSetShot[] = ACR_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
			};
		};	
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = ACR_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
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
				soundSetShot[] = ACR_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
			};
		};	
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = ACR_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
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
				soundSetShot[] = VHSD2_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = M4_SILENCED_SOUNDSET		
			};
		};
		class FullAuto: FullAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = VHSD2_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = M4_SILENCED_SOUNDSET				
			};
		};
	};

	class rtg_mg3;
	class rtg_ameli : rtg_mg3
	{
		class FullAuto1: FullAuto{
			class basesoundmodetype;
			class standardsound: basesoundmodetype{
				soundSetShot[] = M249_STANDARD_SOUNDSET
			};
			class silencedsound: basesoundmodetype{
				soundSetShot[] = M249_SILENCED_SOUNDSET
			};
		};
	};

	// F2000
	class arifle_Mk20_plain_F;
	class rtg_f2000_tan : arifle_Mk20_plain_F
	{
		class Single : Single {
			class BaseSoundModeType;	// External class reference
			
			class StandardSound: BaseSoundModeType{
				SoundSetShot[] = SCORPION_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
			};
		};	
		class FullAuto : FullAuto {
			class BaseSoundModeType;	// External class reference
			
			class StandardSound: BaseSoundModeType{
				SoundSetShot[] = SCORPION_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
			};
		};
	};
	class arifle_Mk20_F;
	class rtg_f2000_camo : arifle_Mk20_F {
		class Single : Single {
			class BaseSoundModeType;	// External class reference
			
			class StandardSound: BaseSoundModeType{
				SoundSetShot[] = SCORPION_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
			};
		};	
		class FullAuto : FullAuto {
			class BaseSoundModeType;	// External class reference
			
			class StandardSound: BaseSoundModeType{
				SoundSetShot[] = SCORPION_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
			};
		};
	};
	class arifle_Mk20C_plain_F;
	class rtg_f2000C_tan : arifle_Mk20C_plain_F
	{
		class Single : Single {
			class BaseSoundModeType;	// External class reference
			
			class StandardSound: BaseSoundModeType{
				SoundSetShot[] = SCORPION_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
			};
		};	
		class FullAuto : FullAuto {
			class BaseSoundModeType;	// External class reference
			
			class StandardSound: BaseSoundModeType{
				SoundSetShot[] = SCORPION_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
			};
		};
	};
	class arifle_Mk20C_F;
	class rtg_f2000C_camo : arifle_Mk20C_F {
		class Single : Single {
			class BaseSoundModeType;	// External class reference
			
			class StandardSound: BaseSoundModeType{
				SoundSetShot[] = SCORPION_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
			};
		};	
		class FullAuto : FullAuto {
			class BaseSoundModeType;	// External class reference
			
			class StandardSound: BaseSoundModeType{
				SoundSetShot[] = SCORPION_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = AKM_SILENCED_SOUNDSET
			};
		};
	};
	// 50 BW 
	class ACWP_M4A5_145_troy_base_BLK;
	class texRifle : ACWP_M4A5_145_troy_base_BLK {
		class Single: Single{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = M110_STANDARD_SOUNDSET	
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = M110_SILENCED_SOUNDSET
			};
		};
	};

	class rtg_rifle_samr2_50bw : arifle_SPAR_01_blk_F {
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = M110_STANDARD_SOUNDSET
			};
			class SilencedSound : BaseSoundModeType {
				soundSetShot[] = M110_SILENCED_SOUNDSET
			};
		};

	};

	class rhs_weap_vhsk2;
	class rtg_vhsk2 : rhs_weap_vhsk2 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = VHSD2_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = VHSD2_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
	};

	class rhs_weap_vhsd2;
	class rtg_vhsd2 : rhs_weap_vhsd2 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = VHSD2_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = VHSD2_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
	};

	class UK3CB_FAMAS_F1;
	class rtg_famas_f1_ris : UK3CB_FAMAS_F1 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = SCORPION_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = SCORPION_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
	};

	class hlc_ar15_base;
	class hlc_rifle_RU556 : hlc_ar15_base 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
	};

	class hlc_rifle_RU5562: hlc_rifle_RU556 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
	};

	class hlc_rifle_CQBR : hlc_rifle_RU556 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
	};

	class hlc_rifle_bcmjack : hlc_ar15_base 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
	};

	class hlc_rifle_bcmblackjack : hlc_rifle_bcmjack 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
	};

	class hlc_rifle_Bushmaster300 : hlc_ar15_base 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
	};

	class hlc_rifle_vendimus : hlc_rifle_Bushmaster300 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
	};

	class hlc_rifle_honeybase : hlc_rifle_Bushmaster300 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
	};

	class hlc_rifle_mk18mod0 : hlc_rifle_CQBR 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
	};

	class arifle_SPAR_01_blk_f;
	class rtg_c8a2 : arifle_SPAR_01_blk_f 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = HK416_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M4_SILENCED_SOUNDSET
			};
		};
	};

	class KAR_XM250;
	class rtg_XM250 : KAR_XM250 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		modes[] = {"Single", "FullAuto"};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = M110_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M110_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = M110_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M110_SILENCED_SOUNDSET
			};
		};
	};

	class KAR_XM250_BLK;
	class rtg_XM250_BLK : KAR_XM250_BLK 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		modes[] = {"Single", "FullAuto"};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = M110_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M110_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = M110_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M110_SILENCED_SOUNDSET
			};
		};
	};

	class rtg_hk417_blk;
	class rtg_m110a3_blk : rtg_hk417_blk 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = M110_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M110_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = M110_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M110_SILENCED_SOUNDSET
			};
		};
	};

	class rtg_hk417_khk;
	class rtg_m110a3_khk : rtg_hk417_khk 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = M110_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M110_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = M110_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M110_SILENCED_SOUNDSET
			};
		};
	};

	class rtg_hk417_snd;
	class rtg_m110a3_snd : rtg_hk417_snd 
	{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
		class Single : Single {
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = M110_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M110_SILENCED_SOUNDSET
			};
		};
		class FullAuto : FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = M110_STANDARD_SOUNDSET
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = M110_SILENCED_SOUNDSET
			};
		};
	};
};