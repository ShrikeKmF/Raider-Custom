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

class Crye_AVS_3_3_GRY;
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