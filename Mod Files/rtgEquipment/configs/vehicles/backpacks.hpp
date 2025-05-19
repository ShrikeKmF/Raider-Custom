#include "backpacks/vsm backpacks.h"
#include "backpacks/radio backpacks.h"
#include "backpacks/medical packs.h"
#include "backpacks/custom backpacks.h"

// Medical Grabbag For Vehicles
class rtg_medical_grabpack : B_Kitbag_rgr {
    scope = 1;
    
    displayname = "Medical Grabbag";
    maximumLoad = 450;

    class TransportItems {
        TRANSPORT_ITEM(kat_larynx, 8)
        TRANSPORT_ITEM(ACE_bloodIV, 3)
        TRANSPORT_ITEM(ACE_bloodIV_500, 4)
        TRANSPORT_ITEM(ACE_plasmaIV_500, 4)
        TRANSPORT_ITEM(kat_AED, 1)
        TRANSPORT_ITEM(kat_Pulseoximeter, 10)
        TRANSPORT_ITEM(ACE_epinephrine, 15)
        TRANSPORT_ITEM(ACE_surgicalKit, 1)
        TRANSPORT_ITEM(kat_fentanyl, 15)
        TRANSPORT_ITEM(kat_chestSeal, 10)
        TRANSPORT_ITEM(kat_atropine, 15)
        TRANSPORT_ITEM(ACE_elasticBandage, 45)
        TRANSPORT_ITEM(ACE_packingBandage, 10)
        TRANSPORT_ITEM(ACE_quikclot, 10)
        TRANSPORT_ITEM(ACE_morphine, 15)
        TRANSPORT_ITEM(kat_BVM, 15)
        TRANSPORT_ITEM(kat_Pervitin, 2)
    };    
};

class rhs_assault_umbts_engineer_empty;
class rtg_engineer_grabpack : rhs_assault_umbts_engineer_empty
{
    scope = 1;
    
    displayname = "Engineer Grabbag";
    maximumLoad = 450;

    class TransportItems {
        TRANSPORT_ITEM(Toolkit, 1)
        TRANSPORT_ITEM(ACE_DefusalKit, 1)
        TRANSPORT_ITEM(MineDetector, 1)
        TRANSPORT_ITEM(ACE_EntrenchingTool, 1)
        TRANSPORT_ITEM(ACE_rope12, 3)
        TRANSPORT_ITEM(ACE_wirecutter, 1)        
    };    
};