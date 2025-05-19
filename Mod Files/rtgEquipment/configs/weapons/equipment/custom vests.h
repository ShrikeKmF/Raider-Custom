// Badger
class M81_Vest_5;
class badgerVest : M81_Vest_5 {
	RTG_WEAPON_BASE
    displayName = "IOTV M81 - Rorey";
    hiddenSelectionsTextures[] = {"\rtgEquipment\tex\BadgerVest.paa"};
    armor = 10;
		class ItemInfo: ItemInfo
    {
		containerClass = "Supply180";
        class HitpointsProtectionInfo
		{
			class Chest
			{
				HitpointName = "HitChest";
				armor = 10;
				PassThrough = 0.3;
			};
			class Diaphragm
			{
				HitpointName = "HitDiaphragm";
				armor = 10;
				PassThrough = 0.3;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 10;
				passThrough = 0.3;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.3;
			};
		};
    };
};
class patVest : VSM_CarrierRig_Gunner_OGA_OD {
	RTG_WEAPON_BASE
    displayName="Gunner OD - Phoebe";
    hiddenSelectionsTextures[] = 
	{
		"\rtgEquipment\tex\patVest\patRig.paa",
		"\rtgEquipment\tex\patVest\vsm_battlebelt_OGA_OD.paa",
		"\rtgEquipment\tex\patVest\vsm_boxmag_oga_od.paa",
		"\rtgEquipment\tex\patVest\serpa.paa",
		"\rtgEquipment\tex\patVest\vsm_OGA_OD_gear_co.paa",
		"\rtgEquipment\tex\patVest\radio_pouch_green.paa",
		"\rtgEquipment\tex\patVest\patPlate.paa"
	};
    armor = 10;
	class ItemInfo: ItemInfo
    {
		containerClass = "Supply180";
        class HitpointsProtectionInfo
		{
			class Chest
			{
				HitpointName = "HitChest";
				armor = 10;
				PassThrough = 0.3;
			};
			class Diaphragm
			{
				HitpointName = "HitDiaphragm";
				armor = 10;
				PassThrough = 0.3;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 10;
				passThrough = 0.3;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.3;
			};
		};
    };
};

// Shrike
class shrike_crye : Crye_AVS_3_3_GRY {
    RTG_WEAPON_BASE
    displayName="AVS Comms - Shrike";
    hiddenSelectionsTextures[]=
		{
			"MoreAVS\data\Vest\GRY_co.paa",
			"MoreAVS\data\AVSPouchT\GRY_co.paa",
			"MoreAVS\data\Belt556\GRY_co.paa",
			"MoreAVS\data\BluforMed\GRY_co.paa",
			"MoreAVS\data\Cumberbands\GRY_co.paa",
			"MoreAVS\data\BeltGBRS\GRY_co.paa",
			"MoreAVS\data\GPpouch\GRY_co.paa",
			"MoreAVS\data\Radio\GRY_co.paa",
			"MoreAVS\data\Radio\GRY_co.paa",
			"MoreAVS\data\glockMags\GRY_co.paa",
			"MoreAVS\data\pouch556\GRY_co.paa",
			"MoreAVS\data\SFL_Holster\mcb_co.paa",
			"MoreAVS\data\Sideplate\GRY_co.paa",
			"MoreAVS\data\S20\S20_co.paa"
		};
    armor = 10;
		class ItemInfo: ItemInfo
    {
		containerClass = "Supply180";
        class HitpointsProtectionInfo
		{
			class Chest
			{
				HitpointName = "HitChest";
				armor = 10;
				PassThrough = 0.3;
			};
			class Diaphragm
			{
				HitpointName = "HitDiaphragm";
				armor = 10;
				PassThrough = 0.3;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 10;
				passThrough = 0.3;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.3;
			};
		};
    };
};

class rhsusf_plateframe_medic;
class torbsVest : rhsusf_plateframe_medic 
{
	RTG_WEAPON_BASE
    displayName = "Plateframe - Torbs";
	hiddenSelectionsTextures[] =
	{
		"\rtgEquipment\tex\torbsVest.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear1_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear2_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_drab_co.paa",
		"rhsusf\addons\rhsusf_weapons3\mk17\data\mk17_co.paa"
	};
    	armor = 10;
		class ItemInfo: ItemInfo
    {
		containerClass = "Supply180";
        class HitpointsProtectionInfo
		{
			class Chest
			{
				HitpointName = "HitChest";
				armor = 10;
				PassThrough = 0.3;
			};
			class Diaphragm
			{
				HitpointName = "HitDiaphragm";
				armor = 10;
				PassThrough = 0.3;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 10;
				passThrough = 0.3;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.3;
			};
		};
    };
}

class V_press_f;
class rtg_faris_vest : V_press_f
{
	RTG_WEAPON_BASE
    displayName = "Plateframe - Torbs";
	hiddenSelectionsTextures[] ={"\rtgEquipment\tex\Faris Vest.paa"};
	armor = 10;
	class ItemInfo: ItemInfo
    {
		containerClass = "Supply180";
        class HitpointsProtectionInfo
		{
			class Chest
			{
				HitpointName = "HitChest";
				armor = 10;
				PassThrough = 0.3;
			};
			class Diaphragm
			{
				HitpointName = "HitDiaphragm";
				armor = 10;
				PassThrough = 0.3;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 10;
				passThrough = 0.3;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.3;
			};
		};
    };
}