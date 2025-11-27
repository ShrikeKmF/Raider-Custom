/*
    Server-authoritative resupply finish logic
*/
params ["_giver", "_receiver", "_uid"];

if (!isServer) exitWith {
    [_giver, _receiver, _uid] remoteExecCall ["RTG_fnc_finishResupply", 2];
};

if (isNull _giver || isNull _receiver || {!alive _giver} || {!alive _receiver}) exitWith {};

private _pouches = _giver getVariable ["RTG_PouchList", []];
private _index = _pouches findIf {(_x select 0) == _uid};
if (_index < 0) exitWith { hint "Pouch not found"; };

// --- Apply loadout ---
private _loadout = _receiver getVariable ["loadout", getUnitLoadout _receiver]; 
_receiver setUnitLoadout (getUnitLoadout _receiver);

// --- Decrement use ---
private _entry = _pouches select _index;
_entry set [1, (_entry select 1) - 1];
_pouches set [_index, _entry];
_giver setVariable ["RTG_PouchList", _pouches, true];

// --- Remove if empty ---
if ((_entry select 1) <= 0) then {
    _giver removeItem "RTG_Resupply_Pouch";
    _pouches deleteAt _index;
    _giver setVariable ["RTG_PouchList", _pouches, true];
};