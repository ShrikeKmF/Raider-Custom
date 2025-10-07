#define MarkerColour(r,g,b,colourName) class colourName { \
name = #colourName; \
color[] = {r,g,b,1.0}; \
scope = 2; \
}

class CfgMarkerColors
{
    MarkerColour(0.7608, 0.1098, 1.0, Hitman);
    MarkerColour(0.1765, 0.5882, 0.1843, Ares);
    MarkerColour(1.0, 0.5569, 0.1098, Fenrir);
    MarkerColour(0.1098, 0.2863, 1.0, Sabre);
    MarkerColour(1.0, 0.341, 0.474, Armoured);
    MarkerColour(0.109, 1.0, 0.956, Air);
    MarkerColour(1.0, 1.0, 1.0, Other);

    class Default { scope = 1; };
};