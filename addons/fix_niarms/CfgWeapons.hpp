class InventoryOpticsItem_Base_F;
class bipod_01_F_snd;
class hlc_optic_PVS4base;

class hlc_STGW_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_STGW57: hlc_STGW_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 125.6;
    };
};
class hlc_rifle_stgw57_RIS: hlc_STGW_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 127.6;
    };
};
class hlc_rifle_stgw57_commando: hlc_rifle_stgw57_RIS {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 110;
    };
};
class hlc_rifle_sig5104: hlc_STGW_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.3;
    };
};
class hlc_rifle_amt: hlc_rifle_sig5104 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 90;
    };
};

class hlc_g3_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_psg1: hlc_g3_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_psg1A1: hlc_rifle_psg1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_PSG1A1_RIS: hlc_rifle_psg1A1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 143;
    };
};

class hlc_rifle_g3sg1: hlc_g3_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 113;
    };
};
class hlc_rifle_g3sg1ris: hlc_rifle_g3sg1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 115;
    };
};
class hlc_rifle_hk51: hlc_rifle_g3sg1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.3;
    };
};
class hlc_rifle_g3a3: hlc_rifle_g3sg1 {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_g3a3ris: hlc_rifle_g3a3 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 98.9;
    };
};
class hlc_rifle_g3a3vris: hlc_rifle_g3a3 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 98.9;
    };
};
class hlc_rifle_g3ka4: hlc_rifle_g3a3 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.9;
    };
};
class HLC_Rifle_g3ka4_GL: hlc_rifle_g3ka4 {
    class WeaponSlotsInfo {
        mass = 129.9;
    };
};

class hlc_rifle_hk53: hlc_g3_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_hk53RAS : hlc_rifle_hk53 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72;
    };
};
class hlc_rifle_hk33a2: hlc_g3_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_hk33a2RIS: hlc_rifle_hk33a2 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 85.5;
    };
};
class hlc_rifle_hk33a2RIS_GL: hlc_rifle_hk33a2RIS {
    class WeaponSlotsInfo {
        mass = 118.5;
    };
};
class hlc_rifle_hk33ka3: hlc_rifle_hk33a2 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
};

class HLC_wp_M134Painless: Rifle_Base_F {
    ACE_Overheating_allowSwapBarrel = 1;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 592;
    };
};

class hlc_M14_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_M14: hlc_M14_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 90.2;
    };
};
class hlc_rifle_M14_Bipod: hlc_rifle_M14 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 92.2;
    };
};
class hlc_rifle_M14_Bipod_Rail: hlc_rifle_M14 {
    displayName = "M14 (Bipod/Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 94.2;
    };
};
class hlc_rifle_M14_Rail: hlc_rifle_M14 {
    displayName = "M14 (Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 92.2;
    };
};

class hlc_rifle_M21: hlc_M14_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 116;
    };
};
class hlc_rifle_M21_Rail: hlc_rifle_M21 {
    displayName = "M21 (Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 118;
    };
};
class hlc_rifle_m14dmr: hlc_rifle_M21 {
    displayName = "M14 DMR";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.2;
    };
};
class hlc_rifle_M14dmr_Rail: hlc_rifle_m14dmr {
    displayName = "M14 DMR (Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 99.2;
    };
};

class hlc_MG42_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_lmg_MG42: hlc_MG42_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 254.5;
    };
};
class hlc_lmg_mg42_bakelite: hlc_lmg_MG42 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 254.5;
    };
};
class hlc_lmg_MG42KWS_t: hlc_lmg_MG42 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 258.5;
    };
};
class hlc_lmg_mg42kws_b: hlc_lmg_MG42KWS_t {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 258.5;
    };
};
class hlc_lmg_mg42kws_g: hlc_lmg_MG42KWS_t {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 258.5;
    };
};
class hlc_lmg_MG3: hlc_MG42_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 253.5;
    };
};
class hlc_lmg_MG3KWS: hlc_lmg_MG3 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 257.5;
    };
};
class hlc_lmg_MG3KWS_b: hlc_lmg_MG3KWS {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 257.5;
    };
};
class hlc_lmg_MG3KWS_g: hlc_lmg_MG3KWS {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 257.5;
    };
};
class hlc_lmg_MG3_optic: hlc_lmg_MG3 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 255.5;
    };
};

class hlc_Springfield_base;
class hlc_rifle_M1903A1_unertl: hlc_Springfield_base {
    displayName = "M1903A1 (Sniper)";
};

class hlc_grip_saw_grip1: bipod_01_F_snd {
    inertia = -0.2;
    displayName = "SAW Pistol Grip (Black)";
    picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_grip4_ca.paa";
    rhs_grip_type = "rhs_grip2_change";
    weaponInfoType = "RHS_Gripod4";
};
class hlc_grip_saw_grip2: hlc_grip_saw_grip1 {
    inertia = -0.2;
    displayName = "SAW Pistol Grip (Tan)";
    picture = "\a3\Weapons_F_Mark\Data\UI\icon_bipod_01_F_snd_ca.paa";
    rhs_grip_type = "rhs_grip2_change";
    weaponInfoType = "RHS_Gripod4";
};

class HLC_bipod_UTGShooters: bipod_01_F_snd {
    picture = "\a3\Weapons_F_Mark\Data\UI\icon_bipod_01_F_blk_ca.paa";
};
class hlc_grip_AFG2: HLC_bipod_UTGShooters {
    inertia = -0.2;
    picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_grip2_ca.paa";
    rhs_grip_type = "rhs_grip2_change";
    weaponInfoType = "RHS_Gripod2";
};
class hlc_grip_PMVFG: HLC_bipod_UTGShooters {
    inertia = -0.2;
    picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_grip3_tan_ca.paa";
    rhs_grip_type = "rhs_grip3_change";
    weaponInfoType = "RHS_Gripod3";
};

class hlc_optic_PVS4FAL: hlc_optic_PVS4base {
    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 36;
    };
};
class hlc_optic_PVS4G3: hlc_optic_PVS4base {
    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 36;
    };
};
class hlc_optic_PVS4M14: hlc_optic_PVS4base {
    class ItemInfo: InventoryOpticsItem_Base_F {
        mass = 36;
    };
};
