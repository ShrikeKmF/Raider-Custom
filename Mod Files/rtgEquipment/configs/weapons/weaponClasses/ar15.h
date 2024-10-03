class hlc_ar15_base;
class hlc_rifle_RU556 : hlc_ar15_base {
	RTG_WEAPON_BASE
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_pdw";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "ru556";
		calibre = "N556";
	};
};
class hlc_rifle_RU5562: hlc_rifle_RU556 {
	RTG_WEAPON_BASE
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	recoil = "rtg_300_pdw";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "ru556";
		calibre = "N300";
	};
};
class hlc_rifle_CQBR: hlc_rifle_RU556 {
	RTG_WEAPON_BASE
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_pdw";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "cqbr";
		calibre = "N556";
	};
};
class hlc_rifle_bcmjack: hlc_ar15_base {
	RTG_WEAPON_BASE
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "jack";
		calibre = "N556";
	};
};
class hlc_rifle_bcmblackjack: hlc_rifle_bcmjack {
	RTG_WEAPON_BASE
	magazines[] = {"rtg_30rnd_300_blk"};
	recoil = "rtg_300_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "jack";
		calibre = "N300";
	};
};	
class hlc_rifle_Bushmaster300: hlc_ar15_base {
	RTG_WEAPON_BASE
	magazines[] = {"rtg_30rnd_300_blk"};
	recoil = "rtg_300_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "bush";
		calibre = "N300";
	};
};
class hlc_rifle_vendimus: hlc_rifle_Bushmaster300 {
	RTG_WEAPON_BASE
	magazines[] = {"rtg_30rnd_300_blk"};
	recoil = "rtg_300_rifle";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "dissipator";
		calibre = "N300";
	};
};
class hlc_rifle_honeybase: hlc_rifle_Bushmaster300 {
	RTG_WEAPON_BASE
	magazines[] = {"rtg_30rnd_300_blk"};
	RTG_ACEAX_EMPTY 
};
class hlc_rifle_honeybadger : hlc_rifle_honeybase {
	RTG_WEAPON_BASE
	magazines[] = {"rtg_30rnd_300_blk"};
	recoil = "rtg_300_carbine";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "honeybadger";
		calibre = "N300";
	};
};
class hlc_rifle_mk18mod0: hlc_rifle_CQBR {
	RTG_WEAPON_BASE
	magazines[] = {"rtg_30rnd_556_45"};
	recoil = "rtg_556_pdw";
	RTG_ACEAX_EMPTY 
};

class rtg_c8a2: arifle_SPAR_01_blk_f {
	RTG_WEAPON_BASE
	baseWeapon = "rtg_c8a2";
	
	displayName = "Colt Canada C8A2";
	deployedPivot = "deploypivot";
	hasBipod = 0;
	ACE_barrelLength = 368;
	recoil = "rtg_556_carbine";
	model = "hlc_wp_ar15\mesh\mill_bushmaster\car15.p3d";
	reloadAction = "NIA_GestureReload416";
	picture = "\hlc_wp_ar15\tex\ui\gear_bushmaster_ca";
	discretedistance[] = {100,200,300,400,500,600};
	discreteDistanceCameraPoint[] = {"eye_100","eye_200","eye_300","eye_400","eye_500","eye_600"};
	discretedistanceinitindex = 0;
	cameraDir = "look";
	magazineWell[] = {"CBA_556x45_STANAG"};
	magazines[] = {"rtg_30rnd_556_45"};
	bg_bipod = 0;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 62.039997;
	};
	inertia = 0.28;
	dexterity = 1.7388076;
	aimTransitionSpeed = 1.2171652;
	handAnim[] = {"OFP2_ManSkeleton","hlc_wp_ar15\gesture\newgesture\handpose_SMR.rtm"};
	hiddenSelections[] = {"Main"};
	hiddenSelectionsTextures[] = {"rtgEquipment\tex\c8.paa"};
	modes[] = {"Single", "FullAuto"};
	class Single: Single
	{
		reloadTime = 0.075;
		dispersion = 0.00031;
	};
	class FullAuto: FullAuto
	{
		reloadTime = 0.075;
		dispersion = 0.00031;
	};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "C8";
		calibre = "N556";
	};
};