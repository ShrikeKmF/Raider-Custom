#define ADD_ITEM(NAME, COUNT) class _xx_##NAME {name = #NAME; count = COUNT;}
#define ADD_WEAPON(NAME, COUNT) class _xx_##NAME {weapon = #NAME; count = COUNT;}
#define ADD_MAGAZINE(NAME, COUNT) class _xx_##NAME {magazine = #NAME; count = COUNT;}

#define RTG_Vehicle_Gear \
class TransportItems \
{ \
	ADD_ITEM(rtg_pvs_15_black_gh, 4) \
	ADD_ITEM(ACE_personalAidKit, 10) \
	ADD_ITEM(ACE_bodyBag, 10) \
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
class TransportWeapons {}; \
class TransportMagazines {}; \
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
} \
reportOwnPosition = true; \
receiveRemoteTargets = true; \
reportRemoteTargets = true;

#define 8E7 80000000

#define FUEL_CONSUMPTION(RPM, TIME) fuelCapacity = ((8E7 * RPM) + 0.001) * TIME;
#define HELICOPTER_FUEL_CONSUMPTION(TIME) fuelCapacity = 1000; fuelConsumptionRate = 1000 / TIME;


#define RTG_Vehicle_Gear_Tracked \
class TransportItems \
{ \
	class _xx_rtg_pvs_15_black_gh \
	{ \
		name = "rtg_pvs_15_black_gh"; \
		count = 8; \
	}; \
	class _xx_ACE_personalAidKit \
	{ \
		name = "ACE_personalAidKit"; \
		count = 8; \
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
class TransportWeapons {}; \
class TransportMagazines {}; \
class ace_cargo \
{ \
	class Cargo \
	{ \
		class ACE_Track \
		{ \
			type = "ACE_Track"; \
			amount = 4; \
		}; \
	}; \
} \
reportOwnPosition = true; \
receiveRemoteTargets = true; \
reportRemoteTargets = true;

#define RTG_Vehicle_Gear_Rotary \
class TransportItems \
{ \
	class _xx_rtg_pvs_15_black_gh \
	{ \
		name = "rtg_pvs_15_black_gh"; \
		count = 8; \
	}; \
	class _xx_ACE_personalAidKit \
	{ \
		name = "ACE_personalAidKit"; \
		count = 8; \
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
class TransportWeapons {}; \
class TransportMagazines {}; \
reportOwnPosition = true; \
receiveRemoteTargets = true; \
reportRemoteTargets = true;