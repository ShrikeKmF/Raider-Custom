["CES Utility", "JAM NVGs", 
{
	params ["_modulePosASL","_attachedObject"];
	private _modulePosAGL = ASLToAGL _modulePosASL;

	private _onConfirm = {
		_dialogReturn = _this select 0;
		_dialogReturn params ["_selection", "_radius"];
		
		private _arguments = _this select 1; //passed arguments from zen_dialog_fnc_create
		_arguments params ["_modulePosASL", "_attachedObject", "_modulePosAGL"];
		
		private _myNearVehicles;
		_myNearVehicles = nearestObjects [_modulePosAGL, ["AllVehicles"], _radius];
		private _myMen = [];
		{
			_myMen = _myMen + crew _x;
		} forEach _myNearVehicles;
		_myMen = _myMen arrayIntersect _myMen;

		switch (true) do {
			case (_selection == "Disable"): { 
				{	
					[_x] remoteExec ["NVGJammer_fnc_utility_AddRemoteEventHandler", 0, true];
				} forEach _myMen;
			};
			case (_selection == "Enable"): { 
				{	
					[_x] remoteExec ["NVGJammer_fnc_utility_RemoveRemoteEventHandler", 0, true];
				} forEach _myMen;
			};	
			default { 
				hint "CES Utility error getting NVG status selection";
			};
		};	
	};

	[
		"Disable / Enable NVGs within given radius", 
		[
			["LIST",["Toggle", ""],[["Disable","Enable"], [["Disable NVGs", ""], ["	Enable NVGs", ""]], 0, 5]],
			["SLIDER:RADIUS",["Radius", "Effect distance from the center of the module position"],[0, 1000, 500, 0, _modulePosAGL, [255,255,0,75]]] //1 to 15, default is 4 - Radius center module pos, Radius color blue
		],
		_onConfirm,
		{},
		[_modulePosASL, _attachedObject, _modulePosAGL]
	] call zen_dialog_fnc_create;

}, "\CES_Resupply\data\UtilityNoNVGs.paa"] call zen_custom_modules_fnc_register;