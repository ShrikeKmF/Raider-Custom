/*
    Shows a 3D heal icon over unconscious players
    Visible to anyone within Uncon_ICON_RANGE
*/

#define Uncon_ICON_RANGE 15
#define Uncon_ICON_ALPHA 0.33

addMissionEventHandler [
     "Draw3D",
     {
         // Only medics can see icons
         if !((player getVariable ["role", ""]) isEqualTo "MED") exitWith {};
 
         {
             if (
                 alive _x &&
                 {side player getFriend side _x > 0.5} &&
                 {(lifeState _x) isEqualTo "INCAPACITATED"} // If unit is down
             ) then {
                 private _dist = player distance _x;
 
                 if (_dist <= Uncon_ICON_RANGE) then {
                     drawIcon3D [
                         "a3\ui_f\data\igui\cfg\revive\overlayiconsgroup\u100_ca.paa", // ICON
                         [1, 0, 0, Uncon_ICON_ALPHA - (_dist / Uncon_ICON_RANGE)], // Colour, & alpha with fading
                         getPosATLVisual _x,
                         1,
                         1,
                         0,
                         name _x, // Text
                         1,
                         0.04,
                         "PuristaMedium"
                     ];
                 };
             };
         } forEach (call BIS_fnc_listPlayers - [player]); // Only Runs on players
     }
 ];