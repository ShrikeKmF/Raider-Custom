/*
    fn_changeFaction.sqf
    Eden module version of ZEN's Change Group Side
    Author: Converted from SilentSpike ZEN logic
*/

params ["_module"];

private _units = _module getVariable "RTG_Module_ChangeFaction_Units";
private _faction = _module getVariable "RTG_Module_ChangeFaction_TargetFaction";

// Validation
if (isNil "_units" || count _units == 0) exitWith {
    hint "No units synced!";
};

// Get the group from the first unit (assumes all synced units are in same group)
private _unit = _units select 0;
if !(_unit isKindOf "CAManBase") exitWith { hint "Only infantry units are supported"; };
if !(alive _unit) exitWith { hint "Unit must be alive"; };

private _group = group _unit;

// Create a new group for the target faction
private _newGroup = createGroup _faction;

// Move all units into the new group
{
    _x joinSilent _newGroup;
} forEach _units;

// Make first unit the leader
if (count _units > 0) then { (_units select 0) selectLeader _newGroup };

// Feedback
hint format ["Group %1 converted to faction %2", name _group, _faction];
