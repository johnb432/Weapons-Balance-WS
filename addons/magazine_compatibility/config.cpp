class CfgPatches {
    class WB_magazine_compatibility {
        name = "Weapons balance - Magazine Compatibility";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
            "cba_main",
            "ace_ballistics",
            "rhsusf_main",
            "rhs_main",
            "rhsusf_c_weapons",
            "rhsgref_c_weapons",
            "hlcweapons_core",
            "uk3cb_factions_Weapons"
        };
        authors[] = {
            "ThePointForward",
            "johnb43"
        };
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
