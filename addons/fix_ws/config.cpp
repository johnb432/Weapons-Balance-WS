class CfgPatches {
    class WB_fix_ws {
        name = "Weapons balance - Fix WS";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
            "ws_norway",
            "ws_uniforms2",
            "ws_russia"
        };
        author = "johnb43";
    };
};

#include "CfgWeapons.hpp"
