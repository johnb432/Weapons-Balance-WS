class CfgPatches {
    class WB_fix_niarms {
        author = "johnb43";
        name = "Weapons balance - Fix NIArms";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
            "hlcweapons_core",
            "hlcweapons_ACR",
            "hlcweapons_AKs",
            "hlcweapons_AR15",
            "hlcweapons_AUG",
            "hlcweapons_falpocalypse",
            "hlcweapons_FHAWCovert",
            "hlcweapons_FN3011",
            "hlcweapons_g3",
            "hlcweapons_G36",
            "hlcweapons_M14",
            "hlcweapons_M16A2",
            "hlcweapons_M60E4",
            "hlcweapons_MG3s",
            "hlcweapons_M134",
            "hlcweapons_MP5",
            "niaweapons_226",
            "hlcweapons_saw",
            "hlcweapons_stgw57",
            "hlcweapons_Springfield1903",
            "niaweapons_C96",
            "niarms_416",
            "hlcweapons_SG550"
        };
    };

};
class Extended_PreInit_EventHandlers {
	   class WB_fix_niarms {
		      init = "call compile preprocessFileLineNumbers '\fix_niarms\preInit.sqf'";
	   };
};

//called in postInit because it's overwritten by NIArms if it is done in preInit
class Extended_PostInit_EventHandlers {
	   class WB_fix_niarms {
		      init = "call compile preprocessFileLineNumbers '\fix_niarms\postInit.sqf'";
	   };
};

class CfgFunctions {
    class WB {
        class common {
            class barrelswitch_ACR {file = "\fix_niarms\fnc_barrelswitch.sqf";};
            class checkShowAceActions {file = "\fix_niarms\fnc_checkShowAceActions.sqf";};
        };
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"

class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;

class asdg_OpticRailL1A1;
class fk_rifle_grips_slot;
class nia_rifle_gripod_slot;

class CfgWeapons {
   class Rifle;
   class Rifle_Base_F: Rifle {
       class WeaponSlotsInfo {};
   };
   #include "CfgWeapons.hpp"
   #include "CfgACR.hpp"
   #include "CfgAK.hpp"
   #include "CfgAR15.hpp"
   #include "CfgAUG.hpp"
   #include "CfgAWM.hpp"
   #include "CfgFAL.hpp"
   #include "CfgG36.hpp"
   #include "CfgHK416.hpp"
   #include "CfgMP5.hpp"
   #include "CfgSAW.hpp"
   #include "CfgSG550.hpp"
};
