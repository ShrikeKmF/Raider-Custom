class Car;
class Car_F: Car
{
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