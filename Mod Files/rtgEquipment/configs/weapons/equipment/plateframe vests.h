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