class Man;
class CAManBase: Man
{
    class ViewPilot: ViewPilot
    {
        initFov = 0.75; 
        minFov = 0.5;
        maxFov = 0.75;
    };

    class ACE_SelfActions {
        class ACE_Equipment {
            class RTG_UsePouch_Self {
                displayName = "Use Ammo Pouch";
                condition = "({(_x select 1) > 0} count (player getVariable ['RTG_PouchList', []])) > 0";
                statement = "[player, player, 'self'] call rtg_fnc_useResupply;";
                exceptions[] = {"isNotInside"};
            };
            class RTG_Pouch_Check {
                displayName = "Check Pouch Uses";
                condition = "count (player getVariable ['RTG_PouchList', []]) > 0";
                statement = "[player] call rtg_fnc_checkPouchUses;";
                exceptions[] = {"isNotInside"};
            };
        };
    };

    class ACE_TargetActions {
        class RTG_UsePouch_Target {
            displayName = "Resupply Soldier";
            distance = 3;
            condition = "({(_x select 1) > 0} count (_player getVariable ['RTG_PouchList', []])) > 0 && alive _target";
            statement = "[_player, _target, 'target'] call rtg_fnc_useResupply;";
            exceptions[] = {"isNotInside"};
        };
    };
};