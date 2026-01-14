class Car;
class Car_F: Car
{
    class Sounds;
	class HitPoints
	{
		class HitBody;
		class HitEngine;
		class HitFuel;
		class HitHull;
		class HitLFWheel;
		class HitLBWheel;
		class HitLMWheel;
		class HitLF2Wheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitRMWheel;
		class HitRF2Wheel;
	};
    class ViewPilot: ViewPilot
    {
        initFov = 0.75; 
        minFov = 0.5;
        maxFov = 0.75;
    };
    class ViewCargo: ViewCargo
    {
        initFov = 0.75;
        minFov = 0.5;
        maxFov = 0.75;
    };
    class ViewOptics: ViewOptics
    {
        initFov = 0.75;
        minFov = 0.5;
        maxFov = 0.75;
    };
};