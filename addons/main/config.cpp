#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ws_norway",
            "ws_uniforms2",
            "ws_russia"
        };
        author = "johnb43";
        url = "https://github.com/johnb432/Weapons-Balance-WS";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "Weapons Balance - WS (Extra RHS Retextures)";
        author = "johnb43";
        tooltipOwned = "Weapons Balance - WS (Extra RHS Retextures)";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-WS";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_ws\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_ws\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_ws\addons\main\ui\logo_weapons_balance.paa";
    };
};

#include "CfgWeapons.hpp"
