class CfgPatches {
    class WB_fix_ACE {
        name = "Weapons balance - Fix ACE";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
            "cba_main",
            "ace_ballistics",
            "ace_medical_treatment"
        };
        author = "johnb43";
    };
};

#include "CfgMagazines.hpp"

class ace_medical_replacementItems {
    ItemType_401[] = {{"ACE_packingBandage",2},{"ACE_morphine",1},{"ACE_tourniquet",1}};
    ItemType_619[] = {{"ACE_packingBandage",4},{"ACE_epinephrine",1},{"ACE_morphine",1},{"ACE_bloodIV_500",3},{"ACE_tourniquet",1},{"ACE_splint",2}};
};
