/*
    File: fn_moduleVCOM.sqf
    Author: Shrike
    Description:
    Disables VCOM for all synced units groups.
*/

params ["_logic"];   // module logic object

diag_log format ["Running VCOM Disabler"];

// Grab all synced objects
private _units = synchronizedObjects _logic;

// Filter for men only (AI infantry)
_units = _units select { _x isKindOf "Man" && {alive _x} };

private _disableVCOM = {
    params ["_unit"];
    private _grp = group _unit;
    _grp setVariable ["Vcm_Disable", true, true];
};

// Disable VCOM
{
    [_x] remoteExecCall [_disableVCOM, 2]; // 2 = server
} forEach _units;

_count = count _units;
_count