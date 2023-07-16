class hlc_ar15_base;
class hlc_rifle_RU556 : hlc_ar15_base {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	magazines[] = {"rtg_30rnd_556"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "ru556";
		calibre = "N556";
	};
};
class hlc_rifle_RU5562: hlc_rifle_RU556 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	magazineWell[] = {"CBA_300BLK_STANAG"};
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "ru556";
		calibre = "N300";
	};
};
class hlc_rifle_CQBR: hlc_rifle_RU556 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	magazines[] = {"rtg_30rnd_556"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "cqbr";
		calibre = "N556";
	};
};
class hlc_rifle_bcmjack: hlc_ar15_base {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	magazines[] = {"rtg_30rnd_556"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "jack";
		calibre = "N556";
	};
};
class hlc_rifle_bcmblackjack: hlc_rifle_bcmjack {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "jack";
		calibre = "N300";
	};
};	
class hlc_rifle_Bushmaster300: hlc_ar15_base {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "bush";
		calibre = "N300";
	};
};
class hlc_rifle_vendimus: hlc_rifle_Bushmaster300 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "dissipator";
		calibre = "N300";
	};
};
class hlc_rifle_honeybase: hlc_rifle_Bushmaster300 {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	magazines[] = {"rtg_30rnd_556"};
	class XtdGearInfo
	{
		model = "";
	};
};
class hlc_rifle_honeybadger : hlc_rifle_honeybase {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	magazines[] = {"rtg_30rnd_300_blk"};
	class XtdGearInfo
	{
		model = "rtg_ace_expanded_ar15";
		form = "honeybadger";
		calibre = "N300";
	};
};
class hlc_rifle_mk18mod0: hlc_rifle_CQBR {
	scope = 2;
	dlc = "raiderTactical";
	Author = "Shrike";
	magazines[] = {"rtg_30rnd_556"};
	class XtdGearInfo
	{
		model = "";
	};
};