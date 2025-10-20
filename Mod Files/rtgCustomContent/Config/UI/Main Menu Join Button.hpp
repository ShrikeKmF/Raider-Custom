class RscControlsGroupNoScrollbars;
class RscStandardDisplay;


class RscDisplayMain: RscStandardDisplay {
    class controls {
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };
        class GroupMultiplayer: GroupSingleplayer {
            h = "(6 * 	1.5) * 	(pixelH * pixelGrid * 2)";
            class Controls: Controls {
                class ServerBrowser;
                class JoinMainServer: ServerBrowser {
                    idc = -1;
                    text = "RTG Main Server";
                    tooltip = "Connect to RTG Main Server";
                    y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    // Buttons are 1.5 tall, 3rd item in the drop down
                    onbuttonclick = "connectToServer ['144.6.36.191', 2302, '']";
                    // IP, Port, Password
                };
                class JoinTrainingServer: ServerBrowser {
                    idc = -1;
                    text = "RTG Training Server";
                    tooltip = "Connect to RTG Training Server";
                    y = "(4 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    // Buttons are 1.5 tall, 4th item in the drop down
                    onbuttonclick = "connectToServer ['144.6.26.217', 2302, '']";

                };
            };
        };
    };
};
