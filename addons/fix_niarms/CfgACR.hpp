//5.56mm
class hlc_acr_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_acr556_base: hlc_acr_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_ACR_SBR_tan: hlc_acr556_base {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
    HLC_CurrentBarrel = "hlc_barrel_compact_ACR_556";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 75.6;
    };
};
class hlc_rifleACR_SBR_cliffhanger: hlc_rifle_ACR_SBR_tan {
    displayName = "Remington ACR-E (Compact/'Cliffhanger')";
    HLC_CompatibleBarrels_Classes[] = {};
    HLC_CurrentBarrel = "";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 75.6;
    };
};
class hlc_rifle_ACR_SBR_green: hlc_rifle_ACR_SBR_tan {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 75.6;
    };
};
class hlc_rifle_ACR_SBR_black: hlc_rifle_ACR_SBR_tan {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 75.6;
    };
};

class hlc_rifle_ACR_GL_SBR_black: hlc_rifle_ACR_SBR_black {
    displayName = "Remington ACR-E (Compact/GL/Black)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_black","hlc_rifle_ACR_GL_Carb_black","hlc_rifle_ACR_GL_mid_black","hlc_rifle_ACR68_GL_SBR_black","hlc_rifle_ACR68_GL_Carb_black","hlc_rifle_ACR68_GL_mid_black"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 108.6;
    };
};
class hlc_rifle_ACR_GL_SBR_cliffhanger: hlc_rifle_ACR_GL_SBR_black {
    displayName = "Remington ACR-E (Compact/GL/'Cliffhanger')";
    HLC_CompatibleBarrels_Classes[] = {};
    HLC_CurrentBarrel = "";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 108.6;
    };
};
class hlc_rifle_ACR_GL_SBR_green: hlc_rifle_ACR_GL_SBR_black {
    displayName = "Remington ACR-E (Compact/GL/Green)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_green","hlc_rifle_ACR_GL_Carb_green","hlc_rifle_ACR_GL_mid_green","hlc_rifle_ACR68_GL_SBR_green","hlc_rifle_ACR68_GL_Carb_green","hlc_rifle_ACR68_GL_mid_green"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 108.6;
    };
};
class hlc_rifle_ACR_GL_SBR_tan: hlc_rifle_ACR_GL_SBR_black {
    displayName = "Remington ACR-E (Compact/GL/Tan)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_tan","hlc_rifle_ACR_GL_Carb_tan","hlc_rifle_ACR_GL_mid_tan","hlc_rifle_ACR68_GL_SBR_tan","hlc_rifle_ACR68_GL_Carb_tan","hlc_rifle_ACR68_GL_mid_tan"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 108.6;
    };
};

class hlc_rifle_ACR_Carb_black: hlc_rifle_ACR_SBR_tan {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
    HLC_CurrentBarrel = "hlc_barrel_carbine_ACR_556";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80.8;
    };
};
class hlc_rifle_ACR_Carb_green: hlc_rifle_ACR_Carb_black {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80.8;
    };
};
class hlc_rifle_ACR_Carb_tan: hlc_rifle_ACR_Carb_black {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80.8;
    };
};

class hlc_rifle_ACR_GL_Carb_black: hlc_rifle_ACR_Carb_black {
    displayName = "Remington ACR-E (Carbine/GL/Black)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_black","hlc_rifle_ACR_GL_Carb_black","hlc_rifle_ACR_GL_mid_black","hlc_rifle_ACR68_GL_SBR_black","hlc_rifle_ACR68_GL_Carb_black","hlc_rifle_ACR68_GL_mid_black"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 113.8;
    };
};
class hlc_rifle_ACR_GL_Carb_green: hlc_rifle_ACR_GL_Carb_black {
    displayName = "Remington ACR-E (Carbine/GL/Green)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_green","hlc_rifle_ACR_GL_Carb_green","hlc_rifle_ACR_GL_mid_green","hlc_rifle_ACR68_GL_SBR_green","hlc_rifle_ACR68_GL_Carb_green","hlc_rifle_ACR68_GL_mid_green"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 113.8;
    };
};
class hlc_rifle_ACR_GL_Carb_tan: hlc_rifle_ACR_GL_Carb_black {
    displayName = "Remington ACR-E (Carbine/GL/Tan)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_tan","hlc_rifle_ACR_GL_Carb_tan","hlc_rifle_ACR_GL_mid_tan","hlc_rifle_ACR68_GL_SBR_tan","hlc_rifle_ACR68_GL_Carb_tan","hlc_rifle_ACR68_GL_mid_tan"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 113.8;
    };
};

class hlc_rifle_ACR_MID_black: hlc_rifle_ACR_SBR_tan {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
    HLC_CurrentBarrel = "hlc_barrel_mid_ACR_556";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 82.7;
    };
};
class hlc_rifle_ACR_MID_green: hlc_rifle_ACR_MID_black {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 82.7;
    };
};
class hlc_rifle_ACR_MID_tan: hlc_rifle_ACR_MID_black {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 82.7;
    };
};

class hlc_rifle_ACR_GL_mid_black: hlc_rifle_ACR_MID_black {
    displayName = "Remington ACR-E (Mid/GL/Black)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_black","hlc_rifle_ACR_GL_Carb_black","hlc_rifle_ACR_GL_mid_black","hlc_rifle_ACR68_GL_SBR_black","hlc_rifle_ACR68_GL_Carb_black","hlc_rifle_ACR68_GL_mid_black"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 115.7;
    };
};
class hlc_rifle_ACR_GL_mid_green: hlc_rifle_ACR_GL_mid_black {
    displayName = "Remington ACR-E (Mid/GL/Green)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_green","hlc_rifle_ACR_GL_Carb_green","hlc_rifle_ACR_GL_mid_green","hlc_rifle_ACR68_GL_SBR_green","hlc_rifle_ACR68_GL_Carb_green","hlc_rifle_ACR68_GL_mid_green"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 115.7;
    };
};
class hlc_rifle_ACR_GL_mid_tan: hlc_rifle_ACR_GL_mid_black {
    displayName = "Remington ACR-E (Mid/GL/Tan)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_tan","hlc_rifle_ACR_GL_Carb_tan","hlc_rifle_ACR_GL_mid_tan","hlc_rifle_ACR68_GL_SBR_tan","hlc_rifle_ACR68_GL_Carb_tan","hlc_rifle_ACR68_GL_mid_tan"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 115.7;
    };
};

class hlc_rifle_ACR_full_black: hlc_rifle_ACR_SBR_tan {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
    HLC_CurrentBarrel = "hlc_barrel_full_ACR_556";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 85.3;
    };
};
class hlc_rifle_ACR_full_green: hlc_rifle_ACR_full_black {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 85.3;
    };
};
class hlc_rifle_ACR_full_tan: hlc_rifle_ACR_full_black {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 85.3;
    };
};

//6.8mm
class hlc_rifle_ACR68_SBR_tan: hlc_acr_base {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
    HLC_CurrentBarrel = "hlc_barrel_compact_ACR_68";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77.6;
    };
};
class hlc_rifle_ACR68_SBR_green: hlc_rifle_ACR68_SBR_tan {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77.6;
    };
};
class hlc_rifle_ACR68_SBR_black: hlc_rifle_ACR68_SBR_tan {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77.6;
    };
};
class hlc_rifle_ACR68_Squant: hlc_rifle_ACR68_SBR_tan {
    displayName = "Remington ACR-E 6.8mm (Compact/SQ/Tan)";
    HLC_CompatibleBarrels_Classes[] = {};
    HLC_CurrentBarrel = "";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77.6;
    };
};

class hlc_rifle_ACR68_GL_SBR_black: hlc_rifle_ACR68_SBR_black {
    displayName = "Remington ACR-E 6.8mm (Compact/GL/Black)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_black","hlc_rifle_ACR_GL_Carb_black","hlc_rifle_ACR_GL_mid_black","hlc_rifle_ACR68_GL_SBR_black","hlc_rifle_ACR68_GL_Carb_black","hlc_rifle_ACR68_GL_mid_black"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 110.6;
    };
};
class hlc_rifle_ACR68_GL_SBR_green: hlc_rifle_ACR68_GL_SBR_black {
    displayName = "Remington ACR-E 6.8mm (Compact/GL/Green)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_green","hlc_rifle_ACR_GL_Carb_green","hlc_rifle_ACR_GL_mid_green","hlc_rifle_ACR68_GL_SBR_green","hlc_rifle_ACR68_GL_Carb_green","hlc_rifle_ACR68_GL_mid_green"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 110.6;
    };
};
class hlc_rifle_ACR68_GL_SBR_tan: hlc_rifle_ACR68_GL_SBR_black {
    displayName = "Remington ACR-E 6.8mm (Compact/GL/Tan)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_tan","hlc_rifle_ACR_GL_Carb_tan","hlc_rifle_ACR_GL_mid_tan","hlc_rifle_ACR68_GL_SBR_tan","hlc_rifle_ACR68_GL_Carb_tan","hlc_rifle_ACR68_GL_mid_tan"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 110.6;
    };
};

class hlc_rifle_ACR68_Carb_black: hlc_rifle_ACR68_SBR_tan {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
    HLC_CurrentBarrel = "hlc_barrel_carbine_ACR_68";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 82.8;
    };
};
class hlc_rifle_ACR68_Carb_green: hlc_rifle_ACR68_Carb_black {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 82.8;
    };
};
class hlc_rifle_ACR68_Carb_tan: hlc_rifle_ACR68_Carb_black {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 82.8;
    };
};
class hlc_rifle_ACR68_aron: hlc_rifle_ACR68_Carb_black {
    displayName = "Remington ACR-E 6.8mm (Carbine/SQ/Black)";
    HLC_CompatibleBarrels_Classes[] = {};
    HLC_CurrentBarrel = "";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 82.8;
    };
};

class hlc_rifle_ACR68_GL_Carb_black: hlc_rifle_ACR68_Carb_black {
    displayName = "Remington ACR-E 6.8mm (Carbine/GL/Black)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_black","hlc_rifle_ACR_GL_Carb_black","hlc_rifle_ACR_GL_mid_black","hlc_rifle_ACR68_GL_SBR_black","hlc_rifle_ACR68_GL_Carb_black","hlc_rifle_ACR68_GL_mid_black"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 115.8;
    };
};
class hlc_rifle_ACR68_GL_Carb_green: hlc_rifle_ACR68_GL_Carb_black {
    displayName = "Remington ACR-E 6.8mm (Carbine/GL/Green)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_green","hlc_rifle_ACR_GL_Carb_green","hlc_rifle_ACR_GL_mid_green","hlc_rifle_ACR68_GL_SBR_green","hlc_rifle_ACR68_GL_Carb_green","hlc_rifle_ACR68_GL_mid_green"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 115.8;
    };
};
class hlc_rifle_ACR68_GL_Carb_tan: hlc_rifle_ACR68_GL_Carb_black {
    displayName = "Remington ACR-E 6.8mm (Carbine/GL/Tan)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_tan","hlc_rifle_ACR_GL_Carb_tan","hlc_rifle_ACR_GL_mid_tan","hlc_rifle_ACR68_GL_SBR_tan","hlc_rifle_ACR68_GL_Carb_tan","hlc_rifle_ACR68_GL_mid_tan"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 115.8;
    };
};

class hlc_rifle_ACR68_MID_black: hlc_rifle_ACR68_SBR_tan {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
    HLC_CurrentBarrel = "hlc_barrel_mid_ACR_68";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 84.7;
    };
};
class hlc_rifle_ACR68_MID_green: hlc_rifle_ACR68_MID_black {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 84.7;
    };
};
class hlc_rifle_ACR68_MID_tan: hlc_rifle_ACR68_MID_black {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 84.7;
    };
};

class hlc_rifle_ACR68_GL_mid_black: hlc_rifle_ACR68_MID_black {
    displayName = "Remington ACR-E 6.8mm (Mid/GL/Black)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_black","hlc_rifle_ACR_GL_Carb_black","hlc_rifle_ACR_GL_mid_black","hlc_rifle_ACR68_GL_SBR_black","hlc_rifle_ACR68_GL_Carb_black","hlc_rifle_ACR68_GL_mid_black"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 117.7;
    };
};
class hlc_rifle_ACR68_GL_mid_green: hlc_rifle_ACR68_GL_mid_black {
    displayName = "Remington ACR-E 6.8mm (Mid/GL/Green)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_green","hlc_rifle_ACR_GL_Carb_green","hlc_rifle_ACR_GL_mid_green","hlc_rifle_ACR68_GL_SBR_green","hlc_rifle_ACR68_GL_Carb_green","hlc_rifle_ACR68_GL_mid_green"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 117.7;
    };
};
class hlc_rifle_ACR68_GL_mid_tan: hlc_rifle_ACR68_GL_mid_black {
    displayName = "Remington ACR-E 6.8mm (Mid/GL/Tan)";
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_tan","hlc_rifle_ACR_GL_Carb_tan","hlc_rifle_ACR_GL_mid_tan","hlc_rifle_ACR68_GL_SBR_tan","hlc_rifle_ACR68_GL_Carb_tan","hlc_rifle_ACR68_GL_mid_tan"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 117.7;
    };
};

class hlc_rifle_ACR68_full_black: hlc_rifle_ACR68_SBR_tan {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
    HLC_CurrentBarrel = "hlc_barrel_full_ACR_68";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 87.3;
    };
};
class hlc_rifle_ACR68_full_green: hlc_rifle_ACR68_full_black {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
    picture = "\hlc_wp_acr\tex\ui\gear_rifle-green_ca";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 87.3;
    };
};
class hlc_rifle_ACR68_full_tan: hlc_rifle_ACR68_full_black {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 87.3;
    };
};

class ItemCore;
class hlc_barrel_compact_ACR_556: Itemcore {
    dlc = "Niarms_acr";
    author = "johnb43";
    displayName = "ACR Barrel (Compact/5.56)";
    descriptionshort = "10.5'' 5.56mm Quick-Detach Barrel for ACR";
    picture = "\hlc_wp_aug\tex\ui\gear_barrel_carbine_ca.paa";
    model = "hlc_wp_aug\mesh\pickup\Carbine_barrel.p3d";
    scope = 2;
    class ItemInfo {
        mass = 13;
        type = 201;
    };
};
class hlc_barrel_carbine_ACR_556: Itemcore {
    dlc = "Niarms_acr";
    author = "johnb43";
    displayName = "ACR Barrel (Carbine/5.56)";
    descriptionshort = "14.5'' 5.56mm Quick-Detach Barrel for ACR";
    picture = "\hlc_wp_aug\tex\ui\gear_barrel_carbine_ca.paa";
    model = "hlc_wp_aug\mesh\pickup\Carbine_barrel.p3d";
    scope = 2;
    class ItemInfo {
        mass = 18.2;
        type = 201;
    };
};
class hlc_barrel_mid_ACR_556: Itemcore {
    dlc = "Niarms_acr";
    author = "johnb43";
    displayName = "ACR Barrel (Mid/5.56)";
    descriptionshort = "16.5'' 5.56mm Quick-Detach Barrel for ACR";
    picture = "\hlc_wp_aug\tex\ui\gear_barrel_standard_ca.paa";
    model = "hlc_wp_aug\mesh\pickup\Standard_barrel.p3d";
    scope = 2;
    class ItemInfo  {
        mass = 20.1;
        type = 201;
    };
};
class hlc_barrel_full_ACR_556: Itemcore {
    dlc = "Niarms_acr";
    author = "johnb43";
    displayName = "ACR Barrel (Long/5.56)";
    descriptionshort = "18.5'' 5.56mm Quick-Detach Barrel for ACR";
    picture = "\hlc_wp_aug\tex\ui\gear_barrel_hbar_ca.paa";
    model = "hlc_wp_aug\mesh\pickup\HBAR_barrel.p3d";
    scope = 2;
    class ItemInfo {
        mass = 22.7;
        type = 201;
    };
};

class hlc_barrel_compact_ACR_68: Itemcore {
    dlc = "Niarms_acr";
    author = "johnb43";
    displayName = "ACR Barrel (Compact/6.8)";
    descriptionshort = "10.5'' 6.8mm Quick-Detach Barrel for ACR";
    picture = "\hlc_wp_aug\tex\ui\gear_barrel_carbine_ca.paa";
    model = "hlc_wp_aug\mesh\pickup\Carbine_barrel.p3d";
    scope = 2;
    class ItemInfo {
        mass = 15;
        type = 201;
    };
};
class hlc_barrel_carbine_ACR_68: Itemcore {
    dlc = "Niarms_acr";
    author = "johnb43";
    displayName = "ACR Barrel (Carbine/6.8)";
    descriptionshort = "14.5'' 6.8mm Quick-Detach Barrel for ACR";
    picture = "\hlc_wp_aug\tex\ui\gear_barrel_carbine_ca.paa";
    model = "hlc_wp_aug\mesh\pickup\Carbine_barrel.p3d";
    scope = 2;
    class ItemInfo {
        mass = 20.2;
        type = 201;
    };
};
class hlc_barrel_mid_ACR_68: Itemcore {
    dlc = "Niarms_acr";
    author = "johnb43";
    displayName = "ACR Barrel (Mid/6.8)";
    descriptionshort = "16.5'' 6.8mm Quick-Detach Barrel for ACR";
    picture = "\hlc_wp_aug\tex\ui\gear_barrel_standard_ca.paa";
    model = "hlc_wp_aug\mesh\pickup\Standard_barrel.p3d";
    scope = 2;
    class ItemInfo  {
        mass = 22.1;
        type = 201;
    };
};
class hlc_barrel_full_ACR_68: Itemcore {
    dlc = "Niarms_acr";
    author = "johnb43";
    displayName = "ACR Barrel (Long/6.8)";
    descriptionshort = "18.5'' 6.8mm Quick-Detach Barrel for ACR";
    picture = "\hlc_wp_aug\tex\ui\gear_barrel_hbar_ca.paa";
    model = "hlc_wp_aug\mesh\pickup\HBAR_barrel.p3d";
    scope = 2;
    class ItemInfo {
        mass = 24.7;
        type = 201;
    };
};
