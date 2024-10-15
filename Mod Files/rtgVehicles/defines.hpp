#define ADD_ITEM(NAME, COUNT) class _xx_##NAME {name = #NAME; count = COUNT;}
#define ADD_WEAPON(NAME, COUNT) class _xx_##NAME {weapon = #NAME; count = COUNT;}
#define ADD_MAGAZINE(NAME, COUNT) class _xx_##NAME {magazine = #NAME; count = COUNT;}

#define RTG_Vehicle_Gear \
class TransportItems \
{ \
	class _xx_rtg_pvs_15_black_gh \
	{ \
		name = "rtg_pvs_15_black_gh"; \
		count = 8; \
	}; \
	class _xx_ACRE_PRC343 \
	{ \
		name = "ACRE_PRC343"; \
		count = 2; \
	}; \
	class _xx_ACRE_PRC152 \
	{ \
		name = "ACRE_PRC152"; \
		count = 2; \
	}; \
	class _xx_ACE_personalAidKit \
	{ \
		name = "ACE_personalAidKit"; \
		count = 8; \
	}; \
	class _xx_ACE_Canteen \
	{ \
		name = "ACE_Canteen"; \
		count = 5; \
	}; \
	class _xx_ACE_Can_Franta \
	{ \
		name = "ACE_Can_Franta"; \
		count = 9; \
	}; \
	class _xx_ACE_MRE_BeefStew \
	{ \
		name = "ACE_MRE_BeefStew"; \
		count = 5; \
	}; \
	class _xx_ACE_bodyBag \
	{ \
		name = "ACE_bodyBag"; \
		count = 9; \
	}; \
}; \
class TransportBackpacks \
{ \
	class _xx_rtg_medical_grabpack \
	{ \
		backpack = "rtg_medical_grabpack"; \
		count = 1; \
	}; \
	class _xx_rtg_engineer_grabpack \
	{ \
		backpack = "rtg_engineer_grabpack"; \
		count = 1; \
	}; \
}; \
class TransportWeapons \
{ \
	class _xx_rhs_weap_m16a4_carryhandle \
	{ \
		weapon = "rhs_weap_m16a4_carryhandle"; \
		count = 2; \
	}; \
}; \
class TransportMagazines \
{ \
	class _xx_rtg_30rnd_556_45 \
	{ \
		magazine = "rtg_30rnd_556_45"; \
		count = 10; \
	}; \
	class _xx_rtg_200Rnd_762x51 \
	{ \
		magazine = "rtg_200Rnd_762x51"; \
		count = 5; \
	}; \
}; \
class ace_cargo \
{ \
	class Cargo \
	{ \
		class ACE_Wheel \
		{ \
			type = "ACE_Wheel"; \
			amount = 4; \
		}; \
	}; \
}

#define RTG_Vehicle_Radios \
class AcreIntercoms \
{ \
	class Intercom_1 \
	{ \
		displayName = "Crew Intercom"; \
		shortName = "Crew"; \
		allowedPositions[] = {"driver","commander",{"turret","all"}}; \
		limitedPositions[] = {}; \
		numLimitedPositions = 0; \
		masterPositions[] = {"driver"}; \
		connectedByDefault = 1; \
	}; \
}; \
class AcreRacks \
{ \
	class Rack_1 \
	{ \
		allowedPositions[] = {"driver","commander",{"turret","all"}}; \
		componentName = "ACRE_PRC152"; \
		displayName = "Dash"; \
		mountedRadio = "ACRE_PRC152"; \
		shortName = "Dash"; \
	}; \
}