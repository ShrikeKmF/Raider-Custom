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

#define Intercom_Condition(chan) [ARR_3(_target,_player,chan)] call TFAR_fnc_canSetIntercomChannel
#define Intercom_Statement(chan) [ARR_3(_target,_player,chan)] call TFAR_fnc_setIntercomChannel

#define IntercomMacro class ACE_SelfActions : ACE_SelfActions { \
    class TFAR_IntercomChannel { \
        displayName = "Intercom Channel"; \
        condition = "true"; \
        statement = ""; \
        icon = ""; \
        class TFAR_IntercomChannel_disabled { \
            displayName = "Disabled"; \
            condition = QUOTE(Intercom_Condition(-1)); \
            statement = QUOTE(Intercom_Statement(-1)); \
        }; \
        class TFAR_IntercomChannel_1 { \
            displayName = CSTRING(Intercom_ACESelfAction_Channel1); \
            condition = QUOTE(Intercom_Condition(0)); \
            statement = QUOTE(Intercom_Statement(0)); \
        }; \
        class TFAR_IntercomChannel_2 { \
            displayName = CSTRING(Intercom_ACESelfAction_Channel2); \
            condition = QUOTE(Intercom_Condition(1)); \
            statement = QUOTE(Intercom_Statement(1)); \
        }; \
        class TFAR_IntercomChannel_Misc_1 { \
            displayName = "Misc channel 1"; \
            condition = QUOTE(Intercom_Condition(2)); \
            statement = QUOTE(Intercom_Statement(2)); \
        }; \
        class TFAR_IntercomChannel_Misc_2 { \
            displayName = "Misc channel 2"; \
            condition = QUOTE(Intercom_Condition(3)); \
            statement = QUOTE(Intercom_Statement(3)); \
        }; \
        class TFAR_IntercomChannel_Misc_3 { \
            displayName = "Misc channel 3"; \
            condition = QUOTE(Intercom_Condition(4)); \
            statement = QUOTE(Intercom_Statement(4)); \
        }; \
    }; \
};