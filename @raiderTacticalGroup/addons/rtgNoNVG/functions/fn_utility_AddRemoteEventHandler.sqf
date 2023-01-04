params ["_myPlayer"]; 

_myPlayer addEventHandler ["VisionModeChanged", {
	params ["_person", "_visionMode"];
	if (_visionMode > 0) then {
		_person action ["nvGogglesOff", _person];
		NVGindex = _thisEventHandler;
	};
}];
