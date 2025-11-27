params ["_giver", "_receiver", ["_mode","self"]];

if (isNull _giver || isNull _receiver) exitWith {};
if (!alive _giver || !alive _receiver) exitWith {};
if ((_giver distance _receiver) > 3) exitWith { hint "Too far."; };

// --- Find a pouch with uses left ---
private _pouches = _giver getVariable ["RTG_PouchList", []];
private _index = _pouches findIf {(_x select 1) > 0};
if (_index < 0) exitWith { hint "No usable pouches left."; };

private _uid = _pouches select _index select 0;

[
    "Resupplying...",
    2,
    {},
    {
        params ["_args"];
        _args params ["_giver", "_receiver", "_uid"];
        [_giver, _receiver, _uid] remoteExecCall ["RTG_fnc_finishResupply", 2];
    },
    {},
    [_giver, _receiver, _uid]
] call CBA_fnc_progressBar;
 
