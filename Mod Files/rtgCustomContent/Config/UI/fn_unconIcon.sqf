/*
    Shows a 3D heal icon over unconscious players
    Visible to anyone within 15m
*/

{
    _x addEventHandler ["Draw3D", {
        private _icon = "\A3\ui_f\data\igui\cfg\actions\heal_ca.paa";
        private _pos = ASLToAGL (getPosASL _this);
        _pos set [2, (_pos select 2) + 0.5];

        if (_this getVariable ["ACE_isUnconscious", false]) then {
            if (player distance _this <= 15) then {
                drawIcon3D [
                    _icon,
                    [1,0,0,0.33],
                    _pos,
                    1.5, 1.5, 0,
                    name _this,
                    1, 0.03, "TahomaB"
                ];
            };
        };
    }];
} forEach allPlayers;
