class CfgPatches {
    class WB_fix_sfp {
        name = "Weapons balance - Fix SFP";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
            "sfp_ak4",
            "sfp_ak5",
            "sfp_cbj_ms",
            "sfp_mp5",
            "sfp_ksp58",
            "sfp_ksp90w",
            "sfp_pistols",
            "sfp_remington870",
            "sfp_g36c",
            "sfp_saab340",
            "hlcweapons_g3", // AK4
            "hlcweapons_mp5", // MP5
            "hlcweapons_SG550", // AK5, CGA 5P
            "rhsgref_c_weapons", // CBJ MS
            "rhsusf_c_weaponsounds" // Ksp58, Ksp90, P88, R870
        };
        authors[] = {
            "ThePointForward",
            "johnb43"
        };
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
