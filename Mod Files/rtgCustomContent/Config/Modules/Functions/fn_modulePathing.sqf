/*
    File: fn_modulePathing.sqf
    Author: Shrike
    Description:
    Disables pathing for all synced units.
*/

params ["_logic"];   // module logic object

diag_log format ["Running Pathing Disable"];

// Grab all synced objects
private _units = synchronizedObjects _logic;

// Filter for men only (AI infantry)
_units = _units select { _x isKindOf "Man" && {alive _x} };

// Disable pathing
{
    _x disableAI "PATH";
} forEach _units;

_count = count _units;
_count