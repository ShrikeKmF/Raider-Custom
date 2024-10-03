// 9mm
class hlc_MP5_base;
class hlc_smg_mp5a2: hlc_MP5_base {
    RTG_WEAPON_BASE
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "a2";
		calibre = "N9";
        grip = "std";
	};
};
class hlc_smg_mp5a2_tac: hlc_smg_mp5a2 {
    RTG_WEAPON_BASE
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "a2";
		calibre = "N9";
        grip = "tac";
	};
};
class hlc_smg_mp5A2_Sfire : hlc_smg_mp5a2 {
    RTG_WEAPON_BASE
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	RTG_ACEAX_EMPTY 
};

class hlc_smg_mp5a3: hlc_smg_mp5a2 {
    RTG_WEAPON_BASE
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "a3";
		calibre = "N9";
        grip = "std";
	};
};
class hlc_smg_mp5a3_tac: hlc_smg_mp5a2 {
    RTG_WEAPON_BASE
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "a3";
		calibre = "N9";
        grip = "tac";
	};
};

class hlc_smg_mp5a4: hlc_MP5_base {
    RTG_WEAPON_BASE
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "a4";
		calibre = "N9";
        grip = "std";
	};
};
class hlc_smg_mp5a4_tac: hlc_smg_mp5a4 {
    RTG_WEAPON_BASE
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "a4";
		calibre = "N9";
        grip = "tac";
	};
};

class hlc_smg_MP5N: hlc_MP5_base {
    RTG_WEAPON_BASE
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "a5";
		calibre = "N9";
        grip = "std";
	};
};
class hlc_smg_mp5N_tac: hlc_smg_MP5N {
    RTG_WEAPON_BASE
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "a5";
		calibre = "N9";
        grip = "tac";
	};
};

class hlc_smg_mp5sd5: hlc_MP5_base {
    RTG_WEAPON_BASE
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "sd5";
		calibre = "N9";
        grip = "std";
	};
};
class hlc_smg_mp5sd6: hlc_smg_mp5sd5 {
    RTG_WEAPON_BASE
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "sd6";
		calibre = "N9";
        grip = "std";
	};
};
// .50
class hlc_smg_mp510: hlc_smg_MP5N {
    RTG_WEAPON_BASE
    displayName = "H&K MP5/50A4";
	magazineWell[] = {""};
	magazines[] = {"rtg_50_ae_20rnd_mag"};
	recoil = "rtg_50ae_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "a4";
		calibre = "N50";
        grip = "std";
	};
};
class hlc_mp510_tac: hlc_smg_mp510 {
    RTG_WEAPON_BASE
    displayName = "H&K MP5/50A4 (TAC)";
	magazineWell[] = {""};
	magazines[] = {"rtg_50_ae_20rnd_mag"};
	recoil = "rtg_50ae_primary";
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_mp5";
		form = "a4";
		calibre = "N50";
        grip = "tac";
	};
};

class hlc_smg_9mmar: hlc_smg_MP5N {
    RTG_WEAPON_BASE
	magazineWell[] = {"RTG_9x19"};
	magazines[] = {"rtg_9mm_35Rnd_mag"};
	recoil = "rtg_9mm_primary";
	RTG_ACEAX_EMPTY 
};