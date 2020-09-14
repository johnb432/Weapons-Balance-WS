class CfgPatches {
    class WB_fix_FIR {
        name = "Weapons balance - Fix FIR";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
            "cba_main",
            "ace_ballistics",
            "FIR_PilotCrewPack_US"
        };
        author = "johnb43";
    };
};

#include "CfgWeapons.hpp"
