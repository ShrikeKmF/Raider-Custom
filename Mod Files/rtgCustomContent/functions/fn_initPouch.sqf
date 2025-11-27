/*
    File: fn_initPouch.sqf
    Registers new pouches with unique IDs for use tracking.
*/
params ["_unit"];

private _pouches = _unit getVariable ["RTG_PouchList", []];

// Get how many physical items of that class exist
private _count = {_x == "RTG_Resupply_Pouch"} count items _unit;

// Ensure we have entries for all
while {count _pouches < _count} do {
    private _uid = format["%1_%2", getPlayerUID _unit, diag_tickTime + random 999];
    _pouches pushBack [_uid, 3];
};

// Remove extra entries if player dropped some
while {count _pouches > _count} do {
    _pouches deleteAt (count _pouches - 1);
};

_unit setVariable ["RTG_PouchList", _pouches, true];
