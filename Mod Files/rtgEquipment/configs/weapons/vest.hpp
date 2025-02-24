// VSM Vests
// Class Names
class dr_Alpinefacp_br;
class dr_Alpinefacp_mg;
class dr_Alpinefacp_op;
class CarrierRig_Breacher_Alpine;
class CarrierRig_Gunner_Alpine;
class CarrierRig_Operator_Alpine;
class dr_Alpinelbt_br;
class dr_Alpinelbt_mg;
class dr_Alpinelbt_op;
class dr_Alpinepar_br;
class dr_Alpinepar_mg;
class dr_Alpinepar_op;
class dr_ARDfacp_br;
class dr_ARDfacp_mg;
class dr_ARDfacp_op;
class CarrierRig_Breacher_Arid;
class CarrierRig_Gunner_Arid;
class CarrierRig_Operator_Arid;
class dr_ARDlbt_br;
class dr_ARDlbt_mg;
class dr_ARDlbt_op;
class dr_ARDpar_br;
class dr_ARDpar_mg;
class dr_ARDpar_op;
// Alpine
class rtg_dr_Alpinefacp_br : dr_Alpinefacp_br {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "facp";
        camo =  "alpine";
	};
};
class rtg_dr_Alpinefacp_mg : dr_Alpinefacp_mg {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "facp";
        camo =  "alpine";
	};
};
class rtg_dr_Alpinefacp_op : dr_Alpinefacp_op {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "facp";
        camo =  "alpine";
	};
};
class rtg_CarrierRig_Breacher_Alpine : CarrierRig_Breacher_Alpine {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "armatus";
        camo =  "alpine";
	};
};
class rtg_CarrierRig_Gunner_Alpine : CarrierRig_Gunner_Alpine {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "armatus";
        camo =  "alpine";
	};
};
class rtg_CarrierRig_Operator_Alpine : CarrierRig_Operator_Alpine {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "armatus";
        camo =  "alpine";
	};
};
class rtg_dr_Alpinelbt_br : dr_Alpinelbt_br {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "lbt6094";
        camo =  "alpine";
	};
};
class rtg_dr_Alpinelbt_mg : dr_Alpinelbt_mg {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "lbt6094";
        camo =  "alpine";
	};
};
class rtg_dr_Alpinelbt_op : dr_Alpinelbt_op {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "lbt6094";
        camo =  "alpine";
	};
};
class rtg_dr_Alpinepar_br : dr_Alpinepar_br {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "paraclete";
        camo =  "alpine";
	};
};
class rtg_dr_Alpinepar_mg : dr_Alpinepar_mg {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "paraclete";
        camo =  "alpine";
	};
};
class rtg_dr_Alpinepar_op : dr_Alpinepar_op {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "paraclete";
        camo =  "alpine";
	};
};
// Arid
class rtg_dr_ARDfacp_br : dr_ARDfacp_br {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "facp";
        camo =  "arid";
	};
};
class rtg_dr_ARDfacp_mg : dr_ARDfacp_mg {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "facp";
        camo =  "arid";
	};
}; 
class rtg_dr_ARDfacp_op : dr_ARDfacp_op {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "facp";
        camo =  "arid";
	};
};
class rtg_CarrierRig_Breacher_Arid : CarrierRig_Breacher_Arid {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "armatus";
        camo =  "arid";
	};
};
class rtg_CarrierRig_Gunner_Arid : CarrierRig_Gunner_Arid {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "armatus";
        camo =  "arid";
	};
};
class rtg_CarrierRig_Operator_Arid : CarrierRig_Operator_Arid {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "armatus";
        camo =  "arid";
	};
};
class rtg_dr_ARDlbt_br : dr_ARDlbt_br {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "lbt6094";
        camo =  "arid";
	};
};
class rtg_dr_ARDlbt_mg : dr_ARDlbt_mg {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "lbt6094";
        camo =  "arid";
	};
};
class rtg_dr_ARDlbt_op : dr_ARDlbt_op {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "lbt6094";
        camo =  "arid";
	};
};
class rtg_dr_ARDpar_br : dr_ARDpar_br {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "paraclete";
        camo =  "arid";
	};
};
class rtg_dr_ARDpar_mg : dr_ARDpar_mg {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "paraclete";
        camo =  "arid";
	};
};
class rtg_dr_ARDpar_op : dr_ARDpar_op {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "paraclete";
        camo =  "arid";
	};
};
// M81
class VSM_FAPC_Breacher_M81;
class VSM_FAPC_MG_M81;
class VSM_FAPC_Operator_M81;
class rtg_VSM_FAPC_Breacher_M81 : VSM_FAPC_Breacher_M81 {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "facp";
        camo =  "m81";
	};
};
class rtg_VSM_FAPC_Gunner_M81 : VSM_FAPC_MG_M81 {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "facp";
        camo =  "m81";
	};
};
class rtg_VSM_FAPC_Operator_M81 : VSM_FAPC_Operator_M81 {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "facp";
        camo =  "m81";
	};
};
class VSM_CarrierRig_Breacher_M81;
class VSM_CarrierRig_Gunner_M81;
class VSM_CarrierRig_Operator_M81;
class rtg_VSM_CarrierRig_Breacher_M81 : VSM_CarrierRig_Breacher_M81 {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "armatus";
        camo =  "m81";
	};
};
class rtg_VSM_CarrierRig_Gunner_M81 : VSM_CarrierRig_Gunner_M81 {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "armatus";
        camo =  "m81";
	};
};
class rtg_VSM_CarrierRig_Operator_M81 : VSM_CarrierRig_Operator_M81 {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "armatus";
        camo =  "m81";
	};
};
class VSM_LBT6094_Breacher_M81;
class VSM_LBT6094_MG_M81;
class VSM_LBT6094_Operator_M81;
class rtg_VSM_LBT6094_Breacher_M81 : VSM_LBT6094_Breacher_M81 {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "lbt6094";
        camo =  "m81";
	};
};
class rtg_VSM_LBT6094_Gunner_M81 : VSM_LBT6094_MG_M81 {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "lbt6094";
        camo =  "m81";
	};
};
class rtg_VSM_LBT6094_Operator_M81 : VSM_LBT6094_Operator_M81 {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "lbt6094";
        camo =  "m81";
	};
};
class VSM_RAV_Breacher_M81;
class VSM_RAV_MG_M81;
class VSM_RAV_Operator_M81;
class rtg_VSM_RAV_Breacher_M81 : VSM_RAV_Breacher_M81 {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "paraclete";
        camo =  "m81";
	};
};
class rtg_VSM_RAV_Gunner_M81 : VSM_RAV_MG_M81 {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "paraclete";
        camo =  "m81";
	};
};
class rtg_VSM_RAV_Operator_M81 : VSM_RAV_Operator_M81 {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "paraclete";
        camo =  "m81";
	};
};
// MCB
class dr_BLKfacp_br;
class dr_BLKfacp_mg;
class dr_BLKfacp_op;
class rtg_dr_BLKfacp_br : dr_BLKfacp_br {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "facp";
        camo =  "mcb";
	};
};
class rtg_dr_BLKfacp_mg : dr_BLKfacp_mg {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "facp";
        camo =  "mcb";
	};
};
class rtg_dr_BLKfacp_op : dr_BLKfacp_op {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "facp";
        camo =  "mcb";
	};
};
class dr_BLKlbt_br;
class dr_BLKlbt_mg;
class dr_BLKlbt_op;
class rtg_dr_BLKlbt_br : dr_BLKlbt_br {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "lbt6094";
        camo =  "mcb";
	};
};
class rtg_dr_BLKlbt_mg : dr_BLKlbt_mg {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "lbt6094";
        camo =  "mcb";
	};
};
class rtg_dr_BLKlbt_op : dr_BLKlbt_op {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "lbt6094";
        camo =  "mcb";
	};
};
class dr_BLKpar_br;
class dr_BLKpar_mg;
class dr_BLKpar_op;
class rtg_dr_BLKpar_br : dr_BLKpar_br {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "paraclete";
        camo =  "mcb";
	};
};
class rtg_dr_BLKpar_mg : dr_BLKpar_mg {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "paraclete";
        camo =  "mcb";
	};
};
class rtg_dr_BLKpar_op : dr_BLKpar_op {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "paraclete";
        camo =  "mcb";
	};
};
// MC
class VSM_FAPC_Breacher_MultiCam;
class VSM_FAPC_MG_MultiCam;
class VSM_FAPC_Operator_MultiCam;
class rtg_VSM_FAPC_Breacher_MultiCam : VSM_FAPC_Breacher_MultiCam {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "facp";
        camo =  "mc";
	};
};
class rtg_VSM_FAPC_Gunner_MultiCam : VSM_FAPC_MG_MultiCam {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "facp";
        camo =  "mc";
	};
};
class rtg_VSM_FAPC_Operator_MultiCam : VSM_FAPC_Operator_MultiCam {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "facp";
        camo =  "mc";
	};
};
class VSM_CarrierRig_Breacher_MultiCam;
class VSM_CarrierRig_Gunner_MultiCam;
class VSM_CarrierRig_Operator_MultiCam;
class rtg_VSM_CarrierRig_Breacher_MultiCam : VSM_CarrierRig_Breacher_MultiCam {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "armatus";
        camo =  "mc";
	};
};
class rtg_VSM_CarrierRig_Gunner_MultiCam : VSM_CarrierRig_Gunner_MultiCam {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "armatus";
        camo =  "mc";
	};
};
class rtg_VSM_CarrierRig_Operator_MultiCam : VSM_CarrierRig_Operator_MultiCam {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "armatus";
        camo =  "mc";
	};
};
class VSM_LBT6094_Breacher_MultiCam;
class VSM_LBT6094_MG_MultiCam;
class VSM_LBT6094_Operator_MultiCam;
class rtg_VSM_LBT6094_Breacher_MultiCam : VSM_LBT6094_Breacher_MultiCam {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "lbt6094";
        camo =  "mc";
	};
};
class rtg_VSM_LBT6094_Gunner_MultiCam : VSM_LBT6094_MG_MultiCam {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "lbt6094";
        camo =  "mc";
	};
};
class rtg_VSM_LBT6094_Operator_MultiCam : VSM_LBT6094_Operator_MultiCam {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "lbt6094";
        camo =  "mc";
	};
};
class VSM_RAV_Breacher_MultiCam;
class VSM_RAV_MG_MultiCam;
class VSM_RAV_Operator_MultiCam;
class rtg_VSM_RAV_Breacher_MultiCam : VSM_RAV_Breacher_MultiCam {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "paraclete";
        camo =  "mc";
	};
};
class rtg_VSM_RAV_Gunner_MultiCam : VSM_RAV_MG_MultiCam {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "paraclete";
        camo =  "mc";
	};
};
class rtg_VSM_RAV_Operator_MultiCam : VSM_RAV_Operator_MultiCam {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "paraclete";
        camo =  "mc";
	};
};
// MCT
class VSM_FAPC_Breacher_MultiCamTropic;
class VSM_FAPC_MG_MultiCamTropic;
class VSM_FAPC_Operator_MultiCamTropic;
class rtg_VSM_FAPC_Breacher_MultiCamTropic : VSM_FAPC_Breacher_MultiCamTropic {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "facp";
        camo =  "mct";
	};
};
class rtg_VSM_FAPC_Gunner_MultiCamTropic : VSM_FAPC_MG_MultiCamTropic {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "facp";
        camo =  "mct";
	};
};
class rtg_VSM_FAPC_Operator_MultiCamTropic : VSM_FAPC_Operator_MultiCamTropic {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "facp";
        camo =  "mct";
	};
};
class VSM_CarrierRig_Breacher_MultiCamTropic;
class VSM_CarrierRig_Gunner_MultiCamTropic;
class VSM_CarrierRig_Operator_MultiCamTropic;
class rtg_VSM_CarrierRig_Breacher_MultiCamTropic : VSM_CarrierRig_Breacher_MultiCamTropic {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "armatus";
        camo =  "mct";
	};
};
class rtg_VSM_CarrierRig_Gunner_MultiCamTropic : VSM_CarrierRig_Gunner_MultiCamTropic {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "armatus";
        camo =  "mct";
	};
};
class rtg_VSM_CarrierRig_Operator_MultiCamTropic : VSM_CarrierRig_Operator_MultiCamTropic {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "armatus";
        camo =  "mct";
	};
};
class VSM_LBT6094_Breacher_MultiCamTropic;
class VSM_LBT6094_MG_MultiCamTropic;
class VSM_LBT6094_Operator_MultiCamTropic;
class rtg_VSM_LBT6094_Breacher_MultiCamTropic : VSM_LBT6094_Breacher_MultiCamTropic {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "lbt6094";
        camo =  "mct";
	};
};
class rtg_VSM_LBT6094_Gunner_MultiCamTropic : VSM_LBT6094_MG_MultiCamTropic {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "lbt6094";
        camo =  "mct";
	};
};
class rtg_VSM_LBT6094_Operator_MultiCamTropic : VSM_LBT6094_Operator_MultiCamTropic {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "lbt6094";
        camo =  "mct";
	};
};
class VSM_RAV_Breacher_MultiCamTropic;
class VSM_RAV_MG_MultiCamTropic;
class VSM_RAV_Operator_MultiCamTropic;
class rtg_VSM_RAV_Breacher_MultiCamTropic : VSM_RAV_Breacher_MultiCamTropic {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "paraclete";
        camo =  "mct";
	};
};
class rtg_VSM_RAV_Gunner_MultiCamTropic : VSM_RAV_MG_MultiCamTropic {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "paraclete";
        camo =  "mct";
	};
};
class rtg_VSM_RAV_Operator_MultiCamTropic : VSM_RAV_Operator_MultiCamTropic {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "paraclete";
        camo =  "mct";
	};
};
// Tan
class VSM_FAPC_Breacher_OGA;
class VSM_FAPC_MG_OGA;
class VSM_FAPC_Operator_OGA;
class rtg_VSM_FAPC_Breacher_OGA : VSM_FAPC_Breacher_OGA {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "facp";
        camo =  "tan";
	};
};
class rtg_VSM_FAPC_Gunner_OGA : VSM_FAPC_MG_OGA {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "facp";
        camo =  "tan";
	};
};
class rtg_VSM_FAPC_Operator_OGA : VSM_FAPC_Operator_OGA {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "facp";
        camo =  "tan";
	};
};
class VSM_CarrierRig_Breacher_OGA;
class VSM_CarrierRig_Gunner_OGA;
class VSM_CarrierRig_Operator_OGA;
class rtg_VSM_CarrierRig_Breacher_OGA : VSM_CarrierRig_Breacher_OGA {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "armatus";
        camo =  "tan";
	};
};
class rtg_VSM_CarrierRig_Gunner_OGA : VSM_CarrierRig_Gunner_OGA {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "armatus";
        camo =  "tan";
	};
};
class rtg_VSM_CarrierRig_Operator_OGA : VSM_CarrierRig_Operator_OGA {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "armatus";
        camo =  "tan";
	};
};
class VSM_LBT6094_Breacher_OGA;
class VSM_LBT6094_MG_OGA;
class VSM_LBT6094_Operator_OGA;
class rtg_VSM_LBT6094_Breacher_OGA : VSM_LBT6094_Breacher_OGA {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "lbt6094";
        camo =  "tan";
	};
};
class rtg_VSM_LBT6094_Gunner_OGA : VSM_LBT6094_MG_OGA {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "lbt6094";
        camo =  "tan";
	};
};
class rtg_VSM_LBT6094_Operator_OGA : VSM_LBT6094_Operator_OGA {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "lbt6094";
        camo =  "tan";
	};
};
class VSM_RAV_Breacher_OGA;
class VSM_RAV_MG_OGA;
class VSM_RAV_Operator_OGA;
class rtg_VSM_RAV_Breacher_OGA : VSM_RAV_Breacher_OGA {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "paraclete";
        camo =  "tan";
	};
};
class rtg_VSM_RAV_Gunner_OGA : VSM_RAV_MG_OGA {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "paraclete";
        camo =  "tan";
	};
};
class rtg_VSM_RAV_Operator_OGA : VSM_RAV_Operator_OGA {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "paraclete";
        camo =  "tan";
	};
};
// OD
class VSM_FAPC_Breacher_OGA_OD;
class VSM_FAPC_MG_OGA_OD;
class VSM_FAPC_Operator_OGA_OD;
class rtg_VSM_FAPC_Breacher_OGA_OD : VSM_FAPC_Breacher_OGA_OD {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "facp";
        camo =  "od";
	};
};
class rtg_VSM_FAPC_MG_OGA_OD : VSM_FAPC_MG_OGA_OD {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "facp";
        camo =  "od";
	};
};
class rtg_VSM_FAPC_operator_OGA_OD : VSM_FAPC_Operator_OGA_OD {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "facp";
        camo =  "od";
	};
};
class VSM_CarrierRig_Breacher_OGA_OD;
class VSM_CarrierRig_Gunner_OGA_OD;
class VSM_CarrierRig_Operator_OGA_OD;
class rtg_VSM_CarrierRig_Breacher_OGA_OD : VSM_CarrierRig_Breacher_OGA_OD {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "armatus";
        camo =  "od";
	};
};
class rtg_VSM_CarrierRig_MG_OGA_OD : VSM_CarrierRig_Gunner_OGA_OD {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "armatus";
        camo =  "od";
	};
};
class rtg_VSM_CarrierRig_operator_OGA_OD : VSM_CarrierRig_Operator_OGA_OD {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "armatus";
        camo =  "od";
	};
};
class VSM_LBT6094_Breacher_OGA_OD;
class VSM_LBT6094_MG_OGA_OD;
class VSM_LBT6094_operator_OGA_OD;
class rtg_VSM_LBT6094_Breacher_OGA_OD : VSM_LBT6094_Breacher_OGA_OD {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "lbt6094";
        camo =  "od";
	};
};
class rtg_VSM_LBT6094_MG_OGA_OD : VSM_LBT6094_MG_OGA_OD {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "lbt6094";
        camo =  "od";
	};
};
class rtg_VSM_LBT6094_operator_OGA_OD : VSM_LBT6094_operator_OGA_OD {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "lbt6094";
        camo =  "od";
	};
};
class VSM_RAV_Breacher_OGA_OD;
class VSM_RAV_MG_OGA_OD;
class VSM_RAV_operator_OGA_OD;
class rtg_VSM_RAV_Breacher_OGA_OD : VSM_RAV_Breacher_OGA_OD {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "paraclete";
        camo =  "od";
	};
};
class rtg_VSM_RAV_MG_OGA_OD : VSM_RAV_MG_OGA_OD {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "paraclete";
        camo =  "od";
	};
};
class rtg_VSM_RAV_operator_OGA_OD : VSM_RAV_operator_OGA_OD {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "paraclete";
        camo =  "od";
	};
};
// Project Honor
class VSM_FAPC_Breacher_ProjectHonor;
class VSM_FAPC_MG_ProjectHonor;
class VSM_FAPC_Operator_ProjectHonor;
class rtg_VSM_FAPC_Breacher_ProjectHonor : VSM_FAPC_Breacher_ProjectHonor {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "facp";
        camo =  "ph";
	};
};
class rtg_VSM_FAPC_Gunner_ProjectHonor : VSM_FAPC_MG_ProjectHonor {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "facp";
        camo =  "ph";
	};
};
class rtg_VSM_FAPC_Operator_ProjectHonor : VSM_FAPC_Operator_ProjectHonor {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "facp";
        camo =  "ph";
	};
};
class VSM_CarrierRig_Breacher_ProjectHonor;
class VSM_CarrierRig_Gunner_ProjectHonor;
class VSM_CarrierRig_Operator_ProjectHonor;
class rtg_VSM_CarrierRig_Breacher_ProjectHonor : VSM_CarrierRig_Breacher_ProjectHonor {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "armatus";
        camo =  "ph";
	};
};
class rtg_VSM_CarrierRig_Gunner_ProjectHonor : VSM_CarrierRig_Gunner_ProjectHonor {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "armatus";
        camo =  "ph";
	};
};
class rtg_VSM_CarrierRig_Operator_ProjectHonor : VSM_CarrierRig_Operator_ProjectHonor {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "armatus";
        camo =  "ph";
	};
};
class VSM_LBT6094_Breacher_ProjectHonor;
class VSM_LBT6094_MG_ProjectHonor;
class VSM_LBT6094_Operator_ProjectHonor;
class rtg_VSM_LBT6094_Breacher_ProjectHonor : VSM_LBT6094_Breacher_ProjectHonor {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "lbt6094";
        camo =  "ph";
	};
};
class rtg_VSM_LBT6094_Gunner_ProjectHonor : VSM_LBT6094_MG_ProjectHonor {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "lbt6094";
        camo =  "ph";
	};
};
class rtg_VSM_LBT6094_Operator_ProjectHonor : VSM_LBT6094_Operator_ProjectHonor {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "lbt6094";
        camo =  "ph";
	};
};
class VSM_RAV_Breacher_ProjectHonor;
class VSM_RAV_MG_ProjectHonor;
class VSM_RAV_Operator_ProjectHonor;
class rtg_VSM_RAV_Breacher_ProjectHonor : VSM_RAV_Breacher_ProjectHonor {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "breacher";
        type =    "paraclete";
        camo =  "ph";
	};
};
class rtg_VSM_RAV_Gunner_ProjectHonor : VSM_RAV_MG_ProjectHonor {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "gunner";
        type =    "paraclete";
        camo =  "ph";
	};
};
class rtg_VSM_RAV_Operator_ProjectHonor : VSM_RAV_Operator_ProjectHonor {
    RTG_WEAPON_BASE
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
    class XtdGearInfo
	{
		model = "rtg_ace_expanded_vest";
		role =  "operator";
        type =    "paraclete";
        camo =  "ph";
	};
};

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
    displayName="Gunner OD - Pat";
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
class Crye_AVS_3_3_GRY;
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

// AVS Classes
	// Assualter
	class Crye_AVS_1_GRY;
	class Crye_AVS_1;
	class Crye_AVS_1_MCB;
	class Crye_AVS_1_MCT;
	class Crye_AVS_1_RG;
	class Crye_AVS_1_Tan;

	class Crye_AVS_1_1_GRY;
	class Crye_AVS_1_1;
	class Crye_AVS_1_1_MCB;
	class Crye_AVS_1_1_MCT;
	class Crye_AVS_1_1_RG;
	class Crye_AVS_1_1_Tan;

	class Crye_AVS_1_2_GRY;
	class Crye_AVS_1_2;
	class Crye_AVS_1_2_MCB;
	class Crye_AVS_1_2_MCT;
	class Crye_AVS_1_2_RG;
	class Crye_AVS_1_2_Tan;

	class Crye_AVS_1_3_GRY;
	class Crye_AVS_1_3;
	class Crye_AVS_1_3_MCB;
	class Crye_AVS_1_3_MCT;
	class Crye_AVS_1_3_RG;
	class Crye_AVS_1_3_Tan;
	// Gunner
	class Crye_AVS_2_GRY;
	class Crye_AVS_2;
	class Crye_AVS_2_MCB;
	class Crye_AVS_2_MCT;
	class Crye_AVS_2_RG;
	class Crye_AVS_2_Tan;
	// Comms
	class Crye_AVS_3_GRY;
	class Crye_AVS_3;
	class Crye_AVS_3_MCB;
	class Crye_AVS_3_MCT;
	class Crye_AVS_3_RG;
	class Crye_AVS_3_Tan;

	class Crye_AVS_3_1_GRY;
	class Crye_AVS_3_1;
	class Crye_AVS_3_1_MCB;
	class Crye_AVS_3_1_MCT;
	class Crye_AVS_3_1_RG;
	class Crye_AVS_3_1_Tan;

	class Crye_AVS_3_2_GRY;
	class Crye_AVS_3_2;
	class Crye_AVS_3_2_MCB;
	class Crye_AVS_3_2_MCT;
	class Crye_AVS_3_2_RG;
	class Crye_AVS_3_2_Tan;

	class Crye_AVS_3_3;
	class Crye_AVS_3_3_MCB;
	class Crye_AVS_3_3_MCT;
	class Crye_AVS_3_3_RG;
	class Crye_AVS_3_3_Tan;

	// New Classes
	class rtg_Crye_AVS_1_GRY : Crye_AVS_1_GRY {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "assaulter";
			camo =  "grey";
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
	class rtg_Crye_AVS_1 : Crye_AVS_1 {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "assaulter";
			camo =  "mc";
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
	class rtg_Crye_AVS_1_MCB : Crye_AVS_1_MCB {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "assaulter";
			camo =  "mcb";
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
	class rtg_Crye_AVS_1_MCT : Crye_AVS_1_MCT {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "assaulter";
			camo =  "mct";
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
	class rtg_Crye_AVS_1_RG : Crye_AVS_1_RG {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "assaulter";
			camo =  "od";
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
	class rtg_Crye_AVS_1_Tan : Crye_AVS_1_Tan {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "assaulter";
			camo =  "tan";
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

	class rtg_Crye_AVS_1_1_GRY : Crye_AVS_1_1_GRY {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N2";
			type =    "assaulter";
			camo =  "grey";
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
	class rtg_Crye_AVS_1_1 : Crye_AVS_1_1 {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N2";
			type =    "assaulter";
			camo =  "mc";
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
	class rtg_Crye_AVS_1_1_MCB : Crye_AVS_1_1_MCB {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N2";
			type =    "assaulter";
			camo =  "mcb";
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
	class rtg_Crye_AVS_1_1_MCT : Crye_AVS_1_1_MCT {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N2";
			type =    "assaulter";
			camo =  "mct";
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
	class rtg_Crye_AVS_1_1_RG : Crye_AVS_1_1_RG {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N2";
			type =    "assaulter";
			camo =  "od";
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
	class rtg_Crye_AVS_1_1_Tan : Crye_AVS_1_1_Tan {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N2";
			type =    "assaulter";
			camo =  "tan";
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

	class rtg_Crye_AVS_1_2_GRY : Crye_AVS_1_2_GRY {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N3";
			type =    "assaulter";
			camo =  "grey";
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
	class rtg_Crye_AVS_1_2 : Crye_AVS_1_2 {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N3";
			type =    "assaulter";
			camo =  "mc";
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
	class rtg_Crye_AVS_1_2_MCB : Crye_AVS_1_2_MCB {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N3";
			type =    "assaulter";
			camo =  "mcb";
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
	class rtg_Crye_AVS_1_2_MCT : Crye_AVS_1_2_MCT {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N3";
			type =    "assaulter";
			camo =  "mct";
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
	class rtg_Crye_AVS_1_2_RG : Crye_AVS_1_2_RG {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N3";
			type =    "assaulter";
			camo =  "od";
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
	class rtg_Crye_AVS_1_2_Tan : Crye_AVS_1_2_Tan {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N3";
			type =    "assaulter";
			camo =  "tan";
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

	class rtg_Crye_AVS_1_3_GRY : Crye_AVS_1_3_GRY {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N4";
			type =    "assaulter";
			camo =  "grey";
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
	class rtg_Crye_AVS_1_3 : Crye_AVS_1_3 {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N4";
			type =    "assaulter";
			camo =  "mc";
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
	class rtg_Crye_AVS_1_3_MCB : Crye_AVS_1_3_MCB {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N4";
			type =    "assaulter";
			camo =  "mcb";
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
	class rtg_Crye_AVS_1_3_MCT : Crye_AVS_1_3_MCT {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N4";
			type =    "assaulter";
			camo =  "mct";
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
	class rtg_Crye_AVS_1_3_RG : Crye_AVS_1_3_RG {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N4";
			type =    "assaulter";
			camo =  "od";
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
	class rtg_Crye_AVS_1_3_Tan : Crye_AVS_1_3_Tan {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N4";
			type =    "assaulter";
			camo =  "tan";
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

	// Gunner
	class rtg_Crye_AVS_2_GRY : Crye_AVS_2_GRY {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "gunner";
			camo =  "grey";
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
	class rtg_Crye_AVS_2 : Crye_AVS_2 {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "gunner";
			camo =  "mc";
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
	class rtg_Crye_AVS_2_MCB : Crye_AVS_2_MCB {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "gunner";
			camo =  "mcb";
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
	class rtg_Crye_AVS_2_MCT : Crye_AVS_2_MCT {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "gunner";
			camo =  "mct";
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
	class rtg_Crye_AVS_2_RG : Crye_AVS_2_RG {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "gunner";
			camo =  "od";
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
	class rtg_Crye_AVS_2_Tan : Crye_AVS_2_Tan {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "gunner";
			camo =  "tan";
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

	// Comms
	class rtg_Crye_AVS_3_GRY : Crye_AVS_3_GRY {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "comms";
			camo =  "grey";
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
	class rtg_Crye_AVS_3 : Crye_AVS_3 {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "comms";
			camo =  "mc";
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
	class rtg_Crye_AVS_3_MCB : Crye_AVS_3_MCB {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "comms";
			camo =  "mcb";
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
	class rtg_Crye_AVS_3_MCT : Crye_AVS_3_MCT {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "comms";
			camo =  "mct";
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
	class rtg_Crye_AVS_3_RG : Crye_AVS_3_RG {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "comms";
			camo =  "od";
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
	class rtg_Crye_AVS_3_Tan : Crye_AVS_3_Tan {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N1";
			type =    "comms";
			camo =  "tan";
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

	class rtg_Crye_AVS_3_1_GRY : Crye_AVS_3_1_GRY {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N2";
			type =    "comms";
			camo =  "grey";
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
	class rtg_Crye_AVS_3_1 : Crye_AVS_3_1 {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N2";
			type =    "comms";
			camo =  "mc";
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
	class rtg_Crye_AVS_3_1_MCB : Crye_AVS_3_1_MCB {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N2";
			type =    "comms";
			camo =  "mcb";
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
	class rtg_Crye_AVS_3_1_MCT : Crye_AVS_3_1_MCT {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N2";
			type =    "comms";
			camo =  "mct";
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
	class rtg_Crye_AVS_3_1_RG : Crye_AVS_3_1_RG {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N2";
			type =    "comms";
			camo =  "od";
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
	class rtg_Crye_AVS_3_1_Tan : Crye_AVS_3_1_Tan {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N2";
			type =    "comms";
			camo =  "tan";
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

	class rtg_Crye_AVS_3_2_GRY : Crye_AVS_3_2_GRY {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N3";
			type =    "comms";
			camo =  "grey";
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
	class rtg_Crye_AVS_3_2 : Crye_AVS_3_2 {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N3";
			type =    "comms";
			camo =  "mc";
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
	class rtg_Crye_AVS_3_2_MCB : Crye_AVS_3_2_MCB {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N3";
			type =    "comms";
			camo =  "mcb";
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
	class rtg_Crye_AVS_3_2_MCT : Crye_AVS_3_2_MCT {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N3";
			type =    "comms";
			camo =  "mct";
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
	class rtg_Crye_AVS_3_2_RG : Crye_AVS_3_2_RG {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N3";
			type =    "comms";
			camo =  "od";
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
	class rtg_Crye_AVS_3_2_Tan : Crye_AVS_3_2_Tan {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N3";
			type =    "comms";
			camo =  "tan";
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

	class rtg_Crye_AVS_3_3_GRY : Crye_AVS_3_3_GRY {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N4";
			type =    "comms";
			camo =  "grey";
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
	class rtg_Crye_AVS_3_3 : Crye_AVS_3_3 {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N4";
			type =    "comms";
			camo =  "mc";
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
	class rtg_Crye_AVS_3_3_MCB : Crye_AVS_3_3_MCB {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N4";
			type =    "comms";
			camo =  "mcb";
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
	class rtg_Crye_AVS_3_3_MCT : Crye_AVS_3_3_MCT {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N4";
			type =    "comms";
			camo =  "mct";
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
	class rtg_Crye_AVS_3_3_RG : Crye_AVS_3_3_RG {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N4";
			type =    "comms";
			camo =  "od";
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
	class rtg_Crye_AVS_3_3_Tan : Crye_AVS_3_3_Tan {
		RTG_WEAPON_BASE
		class XtdGearInfo
		{
			model = "rtg_ace_expanded_avs";
			variant =  "N4";
			type =    "comms";
			camo =  "tan";
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

// PJV Classes
	class V_PlateCarrier1_rgr;
	class V_thor: V_PlateCarrier1_rgr {
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
	class V_thor2: V_PlateCarrier1_rgr {
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
	class V_thor_rgr: V_thor {
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
	class V_thor_rgr2: V_thor {
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
	class V_thor_wdl: V_thor {
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
	class V_thor_wdl2: V_thor {
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
	class V_thor02: V_PlateCarrier1_rgr {
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
	class V_thor02_rgr: V_PlateCarrier1_rgr {
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
	class V_thor02_wdl: V_PlateCarrier1_rgr {
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
	class V_thor03: V_PlateCarrier1_rgr {
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
	class V_thor03_rgr: V_PlateCarrier1_rgr {
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
	class V_thor03_wdl: V_PlateCarrier1_rgr {
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
	class V_thor_r: V_PlateCarrier1_rgr {
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
	class V_thor_r_rgr: V_PlateCarrier1_rgr {
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
	class V_thor_r2: V_PlateCarrier1_rgr {
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
	class V_thor_r2_rgr: V_PlateCarrier1_rgr {
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
	class V_thor_sl: V_PlateCarrier1_rgr {
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
	class V_thor_sl_rgr: V_PlateCarrier1_rgr {
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
	class V_thor_tl: V_PlateCarrier1_rgr 
	{
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
	class V_thor_tl_rgr: V_PlateCarrier1_rgr 
	{
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
// Plateframes 
	class rhsusf_iotv_ocp_base;
	class rhsusf_plateframe_sapi: rhsusf_iotv_ocp_base {
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
	class rhsusf_plateframe_light: rhsusf_plateframe_sapi {
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
	class rhsusf_plateframe_rifleman: rhsusf_plateframe_sapi {
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
	class rhsusf_plateframe_teamleader: rhsusf_plateframe_rifleman {
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