/*
    File: fn_checkPouchUses.sqf
    Displays a summary of remaining uses for all carried pouches.
*/
params ["_unit"];

private _pouches = _unit getVariable ["RTG_PouchList", []];

if (_pouches isEqualTo []) exitWith {
    hint "You are not carrying any resupply pouches.";
};

private _msg = format ["You are carrying %1 pouch(es):\n\n", count _pouches];

{
    private _id = _x select 0;
    private _uses = _x select 1;
    _msg = _msg + format ["• Pouch %1: %2 use(s) remaining\n", _forEachIndex + 1, _uses];
} forEach _pouches;

hintSilent _msg;

// Clear hint after 5 seconds
[{hintSilent "";}, [], 5] call CBA_fnc_waitAndExecute;
