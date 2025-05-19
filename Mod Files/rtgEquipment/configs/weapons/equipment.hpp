#include "equipment/pmc uniforms.h"
#include "equipment/vsm uniforms.h"
#include "equipment/suits.h"
#include "equipment/cbrn.h"
#include "equipment/ptv helmet.h"
#include "equipment/rhs_helmet.h"
#include "equipment/vsm helmet.h"
#include "equipment/boonies.h"
#include "equipment/cap.h"
#include "equipment/beanie.h"
#include "equipment/custom uniforms.h"
#include "equipment/custom helmets.h"

// RTG Beret
class rhssaf_beret_red;
class rtg_beret : rhssaf_beret_red
{
  RTG_WEAPON_BASE 
    displayName="[RTG] Beret";
    mass = 2;
    hiddenSelectionsTextures[] ={"\rtgEquipment\tex\rhssaf_beret_red_co_RTG.paa"};
    RTG_HELMET_ARMOUR
    RTG_ACEAX_EMPTY
}