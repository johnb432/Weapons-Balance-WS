class CfgPatches {
    class WB_fix_vanilla {
        name = "Weapons balance - Fix basegame";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
            "cba_main",
            "ace_ballistics",
            "A3_Weapons_F",
            "A3_weapons_f_beta",
            "A3_weapons_f_bootcamp",
            "A3_weapons_f_epa",
            "A3_weapons_f_epb",
            "A3_weapons_f_epc",
            "A3_weapons_f_gamma",
            "A3_weapons_f_mod"
        };
        author = "johnb43";
    };
};

#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
