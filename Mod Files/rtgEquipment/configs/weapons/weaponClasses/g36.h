class rtg_g36_v_556 : arifle_SPAR_01_blk_F {
	RTG_WEAPON_BASE
	baseWeapon = "rtg_g36_v_556";
    displayName="G36V 5.56mm";
	AB_barrelTwist = 12;
	AB_barrelLength = 18.9;
	ACE_barrelTwist = 178;
	ACE_barrelLength = 480;
	reloadAction = "NIA_GestureReloadG36V";
	reloadmagazinesound[] = {"hlc_wp_g36\snd\G36EV_reload",0.9,1,35};
	model = "hlc_wp_g36\mesh\G36V\G36.p3d";
	picture = "\hlc_wp_g36\tex\ui\gear_g36V_ca.paa";
	handanim[] = {"OFP2_ManSkeleton","hlc_wp_g36\anim\varient\gesture_g36V_STD.rtm"};
	memoryPointCamera = "eye";
	hiddenSelections[] = {"Reciever","Optics","Magwell","Stock"};
	hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_v_co.paa","hlc_wp_g36\tex\placeholder\g36_opticrails_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\g36_ag36_co.paa"};
	discretedistance[] = {200};
	discretedistanceinitindex = 0;
	modes[] = {"Single", "FullAuto"};
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "long";
		calibre = "N556";
		style = "full";
	};
	class Single: Single
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
		};
		weaponSoundEffect = "DefaultRifle";
		reloadTime = 0.076923;
		dispersion = 0.00031;
	};
	class FullAuto: FullAuto
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"ACWP_416SBR_Shot_SoundSet","ACWP_416SBR_Tail_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[] = {"ACWP_416SBR_silencerShot_SoundSet","ACWP_416SBR_silencerTail_SoundSet"};
		};
		weaponSoundEffect = "DefaultRifle";
		reloadTime = 0.076923;
		dispersion = 0.00031;
	};
};
class rtg_g36_cv_556 : rtg_g36_v_556 {
	RTG_WEAPON_BASE
    displayName="G36CV 5.56mm";
	baseWeapon = "rtg_g36_cv_556";
	AB_barrelTwist = 12;
	AB_barrelLength = 9;
	ACE_barrelTwist = 178;
	ACE_barrelLength = 228 ;
	reloadAction = "NIA_GestureReloadG36V";
	reloadmagazinesound[] = {"hlc_wp_g36\snd\G36EV_reload",0.9,1,35};
	model = "hlc_wp_g36\mesh\G36V\G36C.p3d";
	picture = "\hlc_wp_g36\tex\ui\gear_g36CV_ca.paa";
	hiddenSelections[] = {"Reciever","Optics","Magwell","Stock","AG36"};
	hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_cv_co.paa","hlc_wp_g36\tex\placeholder\g36_opticrails_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\g36_ag36_co.paa"};
	recoil = "rtg_556_pdw";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "short";
		calibre = "N556";
		style = "full";
	};
};
class rtg_g36_kv_556 : rtg_g36_v_556 {
	RTG_WEAPON_BASE
    displayName="G36KV 5.56mm";
	baseWeapon = "rtg_g36_kv_556";
	ACE_barrelTwist = 178;
	ACE_barrelLength = 318;
	reloadAction = "NIA_GestureReloadG36V";
	reloadmagazinesound[] = {"hlc_wp_g36\snd\G36EV_reload",0.9,1,35};
	model = "hlc_wp_g36\mesh\G36V\G36K.p3d";
	picture = "\hlc_wp_g36\tex\ui\gear_g36KV_ca.paa";
	hiddenSelections[] = {"Reciever","Optics","Magwell","Stock","AG36"};
	hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_kv_co.paa","hlc_wp_g36\tex\placeholder\g36_opticrails_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\g36_ag36_co.paa"};
	recoil = "rtg_556_carbine";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "carbine";
		calibre = "N556";
		style = "full";
	};
};
class rtg_g36_v_300 : rtg_g36_v_556 {
	RTG_WEAPON_BASE
    displayName="G36V .300";
	baseWeapon = "rtg_g36_v_300";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	recoil = "rtg_300_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "long";
		calibre = "N300";
		style = "full";
	};
};
class rtg_g36_cv_300 : rtg_g36_cv_556 {
	RTG_WEAPON_BASE
    displayName="G36CV .300";
	baseWeapon = "rtg_g36_cv_300";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	recoil = "rtg_300_pdw";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "short";
		calibre = "N300";
		style = "full";
	};
};
class rtg_g36_kv_300 : rtg_g36_kv_556 {
	RTG_WEAPON_BASE
    displayName="G36KV .300";
	baseWeapon = "rtg_g36_kv_300";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	recoil = "rtg_300_carbine";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "carbine";
		calibre = "N300";
		style = "full";
	};
};
class rtg_g36_v_556_tac : rtg_g36_v_556 {
	RTG_WEAPON_BASE
    displayName="G36V 5.56mm Tac";
	baseWeapon = "rtg_g36_v_556_tac";
	model = "hlc_wp_g36\mesh\G36tactical\G36.p3d";
	handanim[] = {"OFP2_ManSkeleton","hlc_wp_g36\anim\MLI\gesture_g36TAC_STD.rtm"};
	hiddenSelections[] = {"Reciever","Optics","Magwell","Stock","Rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_v_co.paa","hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\G36_MountsrailsFin_co.paa"};	
	
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "long";
		calibre = "N556";
		style = "tac";
	};
};
class rtg_g36_cv_556_tac : rtg_g36_cv_556 {
	RTG_WEAPON_BASE
    displayName="G36CV 5.56mm Tac";
	baseWeapon = "rtg_g36_cv_556_tac";
	model = "hlc_wp_g36\mesh\G36tactical\G36C.p3d";
	handanim[] = {"OFP2_ManSkeleton","hlc_wp_g36\anim\MLI\gesture_g36TAC_STD.rtm"};
	hiddenSelections[] = {"Reciever","Optics","Magwell","Stock","Rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_cv_co.paa","hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\G36_MountsrailsFin_co.paa"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "short";
		calibre = "N556";
		style = "tac";
	};
};
class rtg_g36_kv_556_tac : rtg_g36_kv_556 {
	RTG_WEAPON_BASE
    displayName="G36KV 5.56mm Tac";
	baseWeapon = "rtg_g36_kv_556_tac";
	handanim[] = {"OFP2_ManSkeleton","hlc_wp_g36\anim\MLI\gesture_g36TAC_STD.rtm"};
	hiddenSelections[] = {"Reciever","Optics","Magwell","Stock","Rail"};
	hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_kv_co.paa","hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\G36_MountsrailsFin_co.paa"};
	model = "hlc_wp_g36\mesh\G36tactical\G36K.p3d";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "carbine";
		calibre = "N556";
		style = "tac";
	};
};
class rtg_g36_v_300_tac : rtg_g36_v_556_tac {
	RTG_WEAPON_BASE
    displayName="G36V .300 Tac";
	baseWeapon = "rtg_g36_v_300_tac";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	recoil = "rtg_300_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "long";
		calibre = "N300";
		style = "tac";
	};
};
class rtg_g36_cv_300_tac : rtg_g36_cv_556_tac {
	RTG_WEAPON_BASE
    displayName="G36CV .300 Tac";
	baseWeapon = "rtg_g36_cv_300_tac";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	recoil = "rtg_300_pdw";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "short";
		calibre = "N300";
		style = "tac";
	};
};
class rtg_g36_kv_300_tac : rtg_g36_kv_556_tac {
	RTG_WEAPON_BASE
    displayName="G36KV .300 Tac";
	baseWeapon = "rtg_g36_kv_300_tac";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	recoil = "rtg_300_carbine";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "carbine";
		calibre = "N300";
		style = "tac";
	};
};

class rtg_g36_cv_9 : rtg_g36_cv_556 {
	RTG_WEAPON_BASE
    displayName="G36KV 9mm";
	baseWeapon = "rtg_g36_cv_9";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "short";
		calibre = "N9";
		style = "full";
	};
};
class rtg_g36_cv_9_tac : rtg_g36_cv_556_tac {
	RTG_WEAPON_BASE
    displayName="G36KV 9mm Tac";
	baseWeapon = "rtg_g36_cv_9_tac";
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_g36";
		barrel = "short";
		calibre = "N9";
		style = "tac";
	};
};