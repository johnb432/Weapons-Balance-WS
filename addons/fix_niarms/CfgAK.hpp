class hlc_ak_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};

class hlc_rifle_ak12: hlc_ak_base {
    displayName = "Izhmash AK-12";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};
class hlc_rifle_ak12GL: hlc_rifle_ak12 {
    displayName = "Izhmash AK-12 (GL)";
    class WeaponSlotsInfo {
        mass = 106;
    };
};
class hlc_rifle_aku12: hlc_rifle_ak12 {
    displayName = "Izhmash AK-12K";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 67;
    };
};
class hlc_rifle_RPK12: hlc_rifle_ak12 {
    displayName = "Izhmash RPK-16";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class GripodSlot: fk_rifle_grips_slot {};
        class UnderBarrelSlot: fk_rifle_grips_slot {};
    };
};

class hlc_rifle_ak74: hlc_ak_base {
    displayName = "Izhmash AK-74N";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};
class hlc_rifle_ak74_dirty: hlc_rifle_ak74 {
    displayName = "Izhmash AK-74N (Worn)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};
class hlc_rifle_ak74_dirty2: hlc_rifle_ak74 {
    displayName = "Izhmash AK-74N (Worn)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};
class hlc_rifle_ak74_MTK: hlc_rifle_ak74 {
    displayName = "Izhmash AK-74N (MTK)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
    };
};
class hlc_rifle_aks74: hlc_rifle_ak74 {
    displayName = "Izhmash AKS-74N";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 66;
    };
};
class hlc_rifle_aks74_GL: hlc_rifle_aks74 {
    displayName = "Izhmash AKS-74N (GL)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 99;
    };
};
class hlc_rifle_aks74_MTK: hlc_rifle_aks74 {
    displayName = "Izhmash AKS-74N (MTK)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70;
    };
};
class hlc_rifle_ak74m: hlc_rifle_ak74 {
    displayName = "Izhmash AK-74M";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 74.8;
    };
};
class hlc_rifle_ak74m_gl: hlc_rifle_ak74m {
    displayName = "Izhmash AK-74M (GL)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 107.8;
    };
};
class hlc_rifle_ak74m_MTK: hlc_rifle_ak74m {
    displayName = "Izhmash AK-74M (MTK)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.8;
    };
};

class hlc_rifle_aks74u: hlc_ak_base {
    displayName = "Izhmash AKS-74UN";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 60.6;
    };
};
class hlc_rifle_aks74u_MTK: hlc_rifle_aks74u {
    displayName = "Izhmash AKS-74UN (MTK)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 64.6;
    };
};

class hlc_rifle_ak47: hlc_ak_base {
    displayName = "Izhmash AK-47";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76.5;
    };
};
class hlc_rifle_akm: hlc_rifle_ak47 {
    displayName = "Izhmash AKMN";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70.1;
    };
};
class hlc_rifle_akm_MTK: hlc_rifle_akm {
    displayName = "Izhmash AKMN (MTK)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 74.1;
    };
};
class hlc_rifle_akmgl: hlc_rifle_akm {
    displayName = "Izhmash AKMN (GL)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 103.1;
    };
};

class hlc_rifle_slr107u: hlc_ak_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 61;
    };
};
class hlc_rifle_slr107u_MTK: hlc_rifle_slr107u {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 65;
    };
};

class hlc_rifle_aek971: hlc_rifle_ak74 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};
class hlc_rifle_aek971_mtk: hlc_rifle_aek971 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
    };
};
class hlc_rifle_aek971worn: hlc_rifle_aek971 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};

class hlc_rifle_RK62: hlc_ak_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
    };
};

class hlc_rifle_rpk: hlc_ak_base {
    displayName = "Molot RPKN";
    modes[] = {"FullAuto","Single","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar","AI_far_optic1","AI_toofar_optic1","AI_far_optic2","AI_toofar_optic2"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 107;
    };
};
class hlc_rifle_rpk74n: hlc_ak_base {
    displayName = "Molot RPK-74N";
    modes[] = {"FullAuto","Single","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar","AI_far_optic1","AI_toofar_optic1","AI_far_optic2","AI_toofar_optic2"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101;
    };
};

class hlc_rifle_saiga12k: hlc_ak_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 79.6;
    };
};
