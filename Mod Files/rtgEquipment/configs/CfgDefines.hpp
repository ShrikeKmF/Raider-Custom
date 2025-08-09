// https://community.bistudio.com/wiki/PreProcessor_Commands

// Weapon Defines
#define RTG_STANDARD_ZOOM opticsZoomInit=0.75; opticsZoomMax=0.75; opticsZoomMin=0.50;

#define RTG_WEAPON_BASE scope=2; dlc="raiderTactical"; author="Shrike"; initSpeed=0;

#define RTG_ACEAX_EMPTY class XtdGearInfo { model = ""; };

#define RTG_AMMO_DEFAULTS \
    model                   = "\A3\Weapons_f\Data\bullettracer\tracer_yellow"; /* 3d Model to use for the tracers */ \
    ACE_dragModel           = 7; /* Drag model to use for the bullets */ \
    ACE_standardAtmosphere  = "ASM"; /* Atmosphere model to use for the ammo */

#define RTG_PISTOL_AMMO_DEFAULTS \
    model                   = "\A3\Weapons_f\Data\bullettracer\tracer_yellow"; /* 3d Model to use for the tracers */ \
    ACE_dragModel           = 1; /* Drag model to use for the bullets */ \
    ACE_standardAtmosphere  = "ASM"; /* Atmosphere model to use for the ammo */

#define RTG_WEAPON_HANDLING(weight)                 \
    dexterity           = 1.2      / (weight * 1.2);      \
    inertia             = 0.7      * (weight * 1.1);      \
    aimTransitionSpeed  = 1.5      / (weight * 0.8);              

#define RTG_RECOIL_SETUP(name, leftRightPercentage, upDownPercentage, strength, shake) \
    class rtg_recoil_##name : recoil_default { \
        muzzleOuter[] = { \
            0.0 + (1.0 * (leftRightPercentage)), \
            0.4 + (1.0 * (upDownPercentage)), \
            0.6 * strength, \
            0.5 * strength \
        }; \
        kickBack[] = { \
            0.0375 * strength, \
            0.0375 * strength \
        }; \
        permanent = 0.1 * strength; \
        temporary = 0.01 * shake; \
    };


#define RTG_PASTE(a,b) a##b

#define RTG_STRINGIFY(x) #x

#define RTG_RECOIL(name) \
    recoil = RTG_STRINGIFY(RTG_PASTE(rtg_recoil_,name));

#define MOA_TO_DISPERSION(moa) ((moa) * 0.000290888)


// Backpack Defines
#define TRANSPORT_MAGAZINE(id,qty) class _xx_##id { magazine = #id; count = qty; };
#define TRANSPORT_ITEM(id,qty) class _xx_##id { name = #id; count = qty; };
#define TRANSPORT_WEAPON(id,qty) class _xx_##id { weapon = #id; count = qty; };
#define TRANSPORT_BACKPACK(id,qty) class _xx_##id { backpack = #id; count = qty; };

// Armour Define
#define RTG_HELMET_ARMOUR \
class ItemInfo: ItemInfo \
{ \
    class HitpointsProtectionInfo \
    { \
        class head \
        { \
            HitpointName="HitHead"; \
            armor=2.0; \
            PassThrough=0.6; \
        }; \
    }; \
};


#define RTG_VEST_ARMOUR \
    armor = 4; \
    class ItemInfo: ItemInfo \
    { \
        containerClass = "Supply180"; \
        class HitpointsProtectionInfo \
        { \
            class Chest \
            { \
                HitpointName = "HitChest"; \
                armor = 4; \
                PassThrough = 0.6 \
            }; \
            class Diaphragm \
            { \
                HitpointName = "HitDiaphragm"; \
                armor = 4; \
                PassThrough = 0.6 \
            }; \
            class Abdomen \
            { \
                hitpointName = "HitAbdomen"; \
                armor = 4; \
                passThrough = 0.6 \
            }; \
            class Body \
            { \
                hitpointName = "HitBody"; \
                passThrough = 0.6 \
            }; \
        }; \
    }
