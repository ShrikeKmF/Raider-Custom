rtg_WP = true;
if (isDedicated) exitWith {};
if (isServer && (not hasInterface)) exitWith {};
waitUntil{!(isNull player)};

FL_Handle = ppEffectCreate ["colorCorrections", 1501];
FL_Handle ppEffectAdjust [1, 0.6, 0, [0, 0.1, 0.2, 0], [0.4, 1.4, 2.4, 0], [1, 1, 1, 0]];
FL_Handle ppEffectForceInNVG true;  
FL_Handle ppEffectCommit 0; 

//while {alive player} do 
while {true} do 
{
	if (((currentVisionMode player) == 1) && rtg_WP) then
	{
		FL_Handle ppEffectEnable true; 
	}
	else
	{
		FL_Handle ppEffectEnable false; 
	};

	sleep 0.02;	//Limit to ~50Hz
};
	  
FL_Handle ppEffectEnable false;  
ppEffectDestroy FL_Handle; 
FL_Handle = nil;