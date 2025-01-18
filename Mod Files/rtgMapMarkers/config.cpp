
class CfgPatches
{
	class rtgMapMarkers
	{
	author = "Shrike";
	version = 1.0;
	units[]={};
	weapons[]={};
	requiredAddons[]={"A3_UI_F"};
	};
};

class CfgMarkerColors
{

	class Default
	{
		scope=1;
	};

	class rtgHitman: Default
	{
		name="Hitman";
		color[]={0.7608, 0.1098, 1.0, 1};
		scope=2;
	};

	class rtgAres: Default
	{
		name="Ares";
		color[]={0.1765, 0.5882, 0.1843, 1};
		scope=2;
	};

	class rtgFenrir: Default
	{
		name="Fenrir";
		color[]={1.0, 0.5569, 0.1098, 1};
		scope=2;
	};

	class rtgSabre: Default
	{
		name="Sabre";
		color[]={0.1098, 0.2863, 1.0, 1};
		scope=2;
	};

	class rtgFirebrand: Default
  	{
		name="Firebrand";
    	color[]={0.109, 1, 0.956, 1};
		scope=2;
	};
};
