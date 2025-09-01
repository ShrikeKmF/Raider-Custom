/*
    File: fn_moduleAISkill.sqf
    Author: TAG
    Description:
        Applies AI skill settings to a faction based on training level.
*/

params ["_logic"];   // module logic object
if (isNil "_logic") exitWith {};

private _side  = _logic getVariable ["TAG_ModuleAISkill_Side", "west"];
private _training = _logic getVariable ["TAG_ModuleAISkill_Training", "Trained"];

// Map training levels to skill values
// [aimingAccuracy, aimingShake, aimingSpeed, spotDistance, spotTime, courage, commanding, general]
private _skillMap = [
    ["Green",         [0.55, 0.58, 0.58, 0.61, 0.61, 0.64, 0.58, 0.61]],
    ["Milita",        [0.64, 0.67, 0.67, 0.70, 0.70, 0.73, 0.67, 0.70]],
    ["Trained",       [0.73, 0.76, 0.76, 0.79, 0.79, 0.82, 0.79, 0.79]],
    ["Veteran",       [0.82, 0.85, 0.85, 0.88, 0.88, 0.91, 0.88, 0.88]],
    ["SpecialForces", [0.91, 0.94, 0.94, 0.97, 0.97, 1.00, 0.97, 0.97]]
];

private _skills = (_skillMap select { _x select 0 isEqualTo _training }) param [0, ["", [0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]]];
_skills = _skills select 1;

// function to apply skill array to a unit
private _applySkill = {
    params ["_unit", "_skills"];
    _unit setSkill ["aimingAccuracy", _skills select 0];
    _unit setSkill ["aimingShake",    _skills select 1];
    _unit setSkill ["aimingSpeed",    _skills select 2];
    _unit setSkill ["spotDistance",   _skills select 3];
    _unit setSkill ["spotTime",       _skills select 4];
    _unit setSkill ["courage",        _skills select 5];
    _unit setSkill ["commanding",     _skills select 6];
    _unit setSkill ["general",        _skills select 7];
};

// 1. Apply immediately to all existing units of that faction
[{
    if (side _x == _side) then {
        [_x, _skills] call _applySkill;
        "Ran Skill Func" remoteExec ['globalChat', -2, false];
    };
} forEach allUnits;] spawn BIS_fnc_spawn;

// 2. Ensure new units also get the skill
_eh = addMissionEventHandler ["CuratorObjectPlaced", {
    params ["_curator", "_entity"];
    
    // Only apply to AI units of the chosen faction
    if (_entity isKindOf "Man" && {!(isPlayer _entity)}) then {
        if (side _entity isEqualTo _side) then {
            // Call the skill function, passing the entity and the args array
            [_entity, _thisArgs] call (_thisArgs select 0);
        };
    };
}, [_applySkill, _skills]];