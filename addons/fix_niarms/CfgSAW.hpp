class hlc_saw_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_lmg_minimipara: hlc_saw_base {
    magazineWell[] += {"CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 155.5;
    };
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_lmg_minimipara_30Rnd";
        30Rnd_556x45_Stanag_Sand_red = "hlc_lmg_minimipara_30Rnd";
        30Rnd_556x45_Stanag_Sand = "hlc_lmg_minimipara_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_lmg_minimipara_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_lmg_minimipara_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_lmg_minimipara_30Rnd";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_lmg_minimipara_30Rnd";
        150Rnd_556x45_Drum_Mag_F = "hlc_lmg_minimipara_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_lmg_minimipara_30Rnd";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_lmg_minimipara_30Rnd";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_lmg_minimipara_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_lmg_minimipara_30Rnd";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_lmg_minimipara_30Rnd";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_minimipara_30Rnd";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_lmg_minimipara_30Rnd";
        UK3CB_M16_20Rnd_Mag_T = "hlc_lmg_minimipara_30Rnd";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_lmg_minimipara_30Rnd";
        UK3CB_BAF_556_30Rnd = "hlc_lmg_minimipara_30Rnd";
        UK3CB_BAF_556_30Rnd_T = "hlc_lmg_minimipara_30Rnd";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_lmg_minimipara_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_lmg_minimipara_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_lmg_minimipara_30Rnd";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_lmg_minimipara_30Rnd";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_lmg_minimipara_30Rnd";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_lmg_minimipara_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_lmg_minimipara_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_lmg_minimipara_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_lmg_minimipara_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_lmg_minimipara_30Rnd";
    };
};
class hlc_lmg_minimipara_railed: hlc_lmg_minimipara {
    displayName = "FN Minimi Para (Short/Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 157.5;
    };
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_lmg_minimipara_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand_red = "hlc_lmg_minimipara_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand = "hlc_lmg_minimipara_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_lmg_minimipara_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_lmg_minimipara_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_lmg_minimipara_railed_30Rnd";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_lmg_minimipara_railed_30Rnd";
        150Rnd_556x45_Drum_Mag_F = "hlc_lmg_minimipara_railed_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_lmg_minimipara_railed_30Rnd";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_lmg_minimipara_railed_30Rnd";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_lmg_minimipara_railed_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_lmg_minimipara_railed_30Rnd";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_minimipara_railed_30Rnd";
        //C-Mags
        rhs_mag_100Rnd_556x45_M855A1_cmag = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_100Rnd_556x45_M855A1_cmag_mixed = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_100Rnd_556x45_M855_cmag = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_100Rnd_556x45_M855_cmag_mixed = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_100Rnd_556x45_Mk318_cmag = "hlc_lmg_minimipara_railed_30Rnd";
        rhs_mag_100Rnd_556x45_Mk262_cmag = "hlc_lmg_minimipara_railed_30Rnd";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_lmg_minimipara_railed_30Rnd";
        UK3CB_M16_20Rnd_Mag_T = "hlc_lmg_minimipara_railed_30Rnd";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_lmg_minimipara_railed_30Rnd";
        UK3CB_BAF_556_30Rnd = "hlc_lmg_minimipara_railed_30Rnd";
        UK3CB_BAF_556_30Rnd_T = "hlc_lmg_minimipara_railed_30Rnd";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_lmg_minimipara_railed_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_lmg_minimipara_railed_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_lmg_minimipara_railed_30Rnd";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_lmg_minimipara_railed_30Rnd";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_lmg_minimipara_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_lmg_minimipara_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_lmg_minimipara_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_lmg_minimipara_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_lmg_minimipara_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_lmg_minimipara_railed_30Rnd";
    };
};
class hlc_lmg_minimi: hlc_lmg_minimipara {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 164;
    };
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_lmg_minimi_30Rnd";
        30Rnd_556x45_Stanag_Sand_red = "hlc_lmg_minimi_30Rnd";
        30Rnd_556x45_Stanag_Sand = "hlc_lmg_minimi_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_lmg_minimi_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_lmg_minimi_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_lmg_minimi_30Rnd";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_lmg_minimi_30Rnd";
        150Rnd_556x45_Drum_Mag_F = "hlc_lmg_minimi_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_lmg_minimi_30Rnd";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_lmg_minimi_30Rnd";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_lmg_minimi_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_lmg_minimi_30Rnd";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_lmg_minimi_30Rnd";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_lmg_minimi_30Rnd";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_lmg_minimi_30Rnd";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_minimi_30Rnd";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_lmg_minimi_30Rnd";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_lmg_minimi_30Rnd";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_lmg_minimi_30Rnd";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_lmg_minimi_30Rnd";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_minimi_30Rnd";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_lmg_minimi_30Rnd";
        UK3CB_M16_20Rnd_Mag_T = "hlc_lmg_minimi_30Rnd";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_lmg_minimi_30Rnd";
        UK3CB_BAF_556_30Rnd = "hlc_lmg_minimi_30Rnd";
        UK3CB_BAF_556_30Rnd_T = "hlc_lmg_minimi_30Rnd";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_lmg_minimi_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_lmg_minimi_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_lmg_minimi_30Rnd";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_lmg_minimi_30Rnd";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_lmg_minimi_30Rnd";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_lmg_minimi_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_lmg_minimi_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_lmg_minimi_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_lmg_minimi_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_lmg_minimi_30Rnd";
    };
};
class hlc_lmg_minimi_railed: hlc_lmg_minimipara {
    displayName = "FN Minimi (Long/Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 166;
    };
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_lmg_minimi_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand_red = "hlc_lmg_minimi_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand = "hlc_lmg_minimi_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_lmg_minimi_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_lmg_minimi_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_lmg_minimi_railed_30Rnd";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_lmg_minimi_railed_30Rnd";
        150Rnd_556x45_Drum_Mag_F = "hlc_lmg_minimi_railed_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_lmg_minimi_railed_30Rnd";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_lmg_minimi_railed_30Rnd";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_lmg_minimi_railed_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_lmg_minimi_railed_30Rnd";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_lmg_minimi_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_minimi_railed_30Rnd";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_lmg_minimi_railed_30Rnd";
        UK3CB_M16_20Rnd_Mag_T = "hlc_lmg_minimi_railed_30Rnd";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_lmg_minimi_railed_30Rnd";
        UK3CB_BAF_556_30Rnd = "hlc_lmg_minimi_railed_30Rnd";
        UK3CB_BAF_556_30Rnd_T = "hlc_lmg_minimi_railed_30Rnd";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_lmg_minimi_railed_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_lmg_minimi_railed_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_lmg_minimi_railed_30Rnd";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_lmg_minimi_railed_30Rnd";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_lmg_minimi_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_lmg_minimi_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_lmg_minimi_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_lmg_minimi_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_lmg_minimi_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_lmg_minimi_railed_30Rnd";
    };
};
class hlc_lmg_minimipara_long: hlc_lmg_minimipara {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 160.5;
    };
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_lmg_minimipara_long_30Rnd";
        30Rnd_556x45_Stanag_Sand_red = "hlc_lmg_minimipara_long_30Rnd";
        30Rnd_556x45_Stanag_Sand = "hlc_lmg_minimipara_long_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_lmg_minimipara_long_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_lmg_minimipara_long_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_lmg_minimipara_long_30Rnd";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_lmg_minimipara_long_30Rnd";
        150Rnd_556x45_Drum_Mag_F = "hlc_lmg_minimipara_long_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_lmg_minimipara_long_30Rnd";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_lmg_minimipara_long_30Rnd";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_lmg_minimipara_long_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_lmg_minimipara_long_30Rnd";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_lmg_minimipara_long_30Rnd";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_minimipara_long_30Rnd";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_lmg_minimipara_long_30Rnd";
        UK3CB_M16_20Rnd_Mag_T = "hlc_lmg_minimipara_long_30Rnd";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_lmg_minimipara_long_30Rnd";
        UK3CB_BAF_556_30Rnd = "hlc_lmg_minimipara_long_30Rnd";
        UK3CB_BAF_556_30Rnd_T = "hlc_lmg_minimipara_long_30Rnd";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_lmg_minimipara_long_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_lmg_minimipara_long_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_lmg_minimipara_long_30Rnd";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_lmg_minimipara_long_30Rnd";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_lmg_minimipara_long_30Rnd";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_lmg_minimipara_long_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_lmg_minimipara_long_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_lmg_minimipara_long_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_lmg_minimipara_long_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_lmg_minimipara_long_30Rnd";
    };
};
class hlc_lmg_minimipara_long_railed: hlc_lmg_minimipara {
    displayName = "FN Minimi Para (Long/Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 162.5;
    };
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_lmg_minimipara_long_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand_red = "hlc_lmg_minimipara_long_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand = "hlc_lmg_minimipara_long_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_lmg_minimipara_long_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_lmg_minimipara_long_railed_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_lmg_minimipara_long_railed_30Rnd";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_lmg_minimipara_long_railed_30Rnd";
        150Rnd_556x45_Drum_Mag_F = "hlc_lmg_minimipara_long_railed_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_lmg_minimipara_long_railed_30Rnd";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_lmg_minimipara_long_railed_30Rnd";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_lmg_minimipara_long_railed_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_lmg_minimipara_long_railed_30Rnd";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_lmg_minimipara_long_railed_30Rnd";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_minimipara_long_railed_30Rnd";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_lmg_minimipara_long_railed_30Rnd";
        UK3CB_M16_20Rnd_Mag_T = "hlc_lmg_minimipara_long_railed_30Rnd";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_lmg_minimipara_long_railed_30Rnd";
        UK3CB_BAF_556_30Rnd = "hlc_lmg_minimipara_long_railed_30Rnd";
        UK3CB_BAF_556_30Rnd_T = "hlc_lmg_minimipara_long_railed_30Rnd";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_lmg_minimipara_long_railed_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_lmg_minimipara_long_railed_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_lmg_minimipara_long_railed_30Rnd";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_lmg_minimipara_long_railed_30Rnd";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_lmg_minimipara_long_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_lmg_minimipara_long_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_lmg_minimipara_long_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_lmg_minimipara_long_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_lmg_minimipara_long_railed_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_lmg_minimipara_long_railed_30Rnd";
    };
};

class hlc_lmg_M249E1: hlc_lmg_minimipara {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 165;
    };
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_lmg_M249E1_30Rnd";
        30Rnd_556x45_Stanag_Sand_red = "hlc_lmg_M249E1_30Rnd";
        30Rnd_556x45_Stanag_Sand = "hlc_lmg_M249E1_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_lmg_M249E1_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_lmg_M249E1_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_lmg_M249E1_30Rnd";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_lmg_M249E1_30Rnd";
        150Rnd_556x45_Drum_Mag_F = "hlc_lmg_M249E1_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_lmg_M249E1_30Rnd";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_lmg_M249E1_30Rnd";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_lmg_M249E1_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_lmg_M249E1_30Rnd";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_M249E1_30Rnd";
        //C-Mags
        rhs_mag_100Rnd_556x45_M855A1_cmag = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_100Rnd_556x45_M855A1_cmag_mixed = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_100Rnd_556x45_M855_cmag = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_100Rnd_556x45_M855_cmag_mixed = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_100Rnd_556x45_Mk318_cmag = "hlc_lmg_M249E1_30Rnd";
        rhs_mag_100Rnd_556x45_Mk262_cmag = "hlc_lmg_M249E1_30Rnd";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_lmg_M249E1_30Rnd";
        UK3CB_M16_20Rnd_Mag_T = "hlc_lmg_M249E1_30Rnd";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_lmg_M249E1_30Rnd";
        UK3CB_BAF_556_30Rnd = "hlc_lmg_M249E1_30Rnd";
        UK3CB_BAF_556_30Rnd_T = "hlc_lmg_M249E1_30Rnd";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_lmg_M249E1_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_lmg_M249E1_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_lmg_M249E1_30Rnd";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_lmg_M249E1_30Rnd";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_lmg_M249E1_30Rnd";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_lmg_M249E1_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_lmg_M249E1_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_lmg_M249E1_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_lmg_M249E1_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_lmg_M249E1_30Rnd";
    };
};
class hlc_lmg_M249E2: hlc_lmg_minimipara {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 166;
    };
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_lmg_M249E2_30Rnd";
        30Rnd_556x45_Stanag_Sand_red = "hlc_lmg_M249E2_30Rnd";
        30Rnd_556x45_Stanag_Sand = "hlc_lmg_M249E2_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_lmg_M249E2_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_lmg_M249E2_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_lmg_M249E2_30Rnd";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_lmg_M249E2_30Rnd";
        150Rnd_556x45_Drum_Mag_F = "hlc_lmg_M249E2_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_lmg_M249E2_30Rnd";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_lmg_M249E2_30Rnd";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_lmg_M249E2_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_lmg_M249E2_30Rnd";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_M249E2_30Rnd";
        //C-Mags
        rhs_mag_100Rnd_556x45_M855A1_cmag = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_100Rnd_556x45_M855A1_cmag_mixed = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_100Rnd_556x45_M855_cmag = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_100Rnd_556x45_M855_cmag_mixed = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_100Rnd_556x45_Mk318_cmag = "hlc_lmg_M249E2_30Rnd";
        rhs_mag_100Rnd_556x45_Mk262_cmag = "hlc_lmg_M249E2_30Rnd";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_lmg_M249E2_30Rnd";
        UK3CB_M16_20Rnd_Mag_T = "hlc_lmg_M249E2_30Rnd";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_lmg_M249E2_30Rnd";
        UK3CB_BAF_556_30Rnd = "hlc_lmg_M249E2_30Rnd";
        UK3CB_BAF_556_30Rnd_T = "hlc_lmg_M249E2_30Rnd";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_lmg_M249E2_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_lmg_M249E2_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_lmg_M249E2_30Rnd";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_lmg_M249E2_30Rnd";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_lmg_M249E2_30Rnd";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_lmg_M249E2_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_lmg_M249E2_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_lmg_M249E2_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_lmg_M249E2_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_lmg_M249E2_30Rnd";
    };
};
class hlc_lmg_m249para: hlc_lmg_minimipara {
    displayName = "M249E2 (Short/Para)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 157.5;
    };
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_lmg_m249para_30Rnd";
        30Rnd_556x45_Stanag_Sand_red = "hlc_lmg_m249para_30Rnd";
        30Rnd_556x45_Stanag_Sand = "hlc_lmg_m249para_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_lmg_m249para_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_lmg_m249para_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_lmg_m249para_30Rnd";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_lmg_m249para_30Rnd";
        150Rnd_556x45_Drum_Mag_F = "hlc_lmg_m249para_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_lmg_m249para_30Rnd";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_lmg_m249para_30Rnd";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_lmg_m249para_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_lmg_m249para_30Rnd";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_lmg_m249para_30Rnd";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_lmg_m249para_30Rnd";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_lmg_m249para_30Rnd";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_m249para_30Rnd";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_lmg_m249para_30Rnd";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_lmg_m249para_30Rnd";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_lmg_m249para_30Rnd";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_lmg_m249para_30Rnd";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_lmg_m249para_30Rnd";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_lmg_m249para_30Rnd";
        UK3CB_M16_20Rnd_Mag_T = "hlc_lmg_m249para_30Rnd";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_lmg_m249para_30Rnd";
        UK3CB_BAF_556_30Rnd = "hlc_lmg_m249para_30Rnd";
        UK3CB_BAF_556_30Rnd_T = "hlc_lmg_m249para_30Rnd";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_lmg_m249para_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_lmg_m249para_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_lmg_m249para_30Rnd";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_lmg_m249para_30Rnd";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_lmg_m249para_30Rnd";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_lmg_m249para_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_lmg_m249para_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_lmg_m249para_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_lmg_m249para_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_lmg_m249para_30Rnd";
    };
};
class hlc_m249_pip1: hlc_lmg_minimi_railed {
    displayName = "M249 PIP (Long/Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 168;
    };
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_m249_pip1_30Rnd";
        30Rnd_556x45_Stanag_Sand_red = "hlc_m249_pip1_30Rnd";
        30Rnd_556x45_Stanag_Sand = "hlc_m249_pip1_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_m249_pip1_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_m249_pip1_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_m249_pip1_30Rnd";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_m249_pip1_30Rnd";
        150Rnd_556x45_Drum_Mag_F = "hlc_m249_pip1_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_m249_pip1_30Rnd";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_m249_pip1_30Rnd";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_m249_pip1_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_m249_pip1_30Rnd";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_m249_pip1_30Rnd";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_m249_pip1_30Rnd";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_m249_pip1_30Rnd";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_pip1_30Rnd";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_m249_pip1_30Rnd";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_m249_pip1_30Rnd";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_m249_pip1_30Rnd";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_m249_pip1_30Rnd";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_pip1_30Rnd";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_m249_pip1_30Rnd";
        UK3CB_M16_20Rnd_Mag_T = "hlc_m249_pip1_30Rnd";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_m249_pip1_30Rnd";
        UK3CB_BAF_556_30Rnd = "hlc_m249_pip1_30Rnd";
        UK3CB_BAF_556_30Rnd_T = "hlc_m249_pip1_30Rnd";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_m249_pip1_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_m249_pip1_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_m249_pip1_30Rnd";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_m249_pip1_30Rnd";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_m249_pip1_30Rnd";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_m249_pip1_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_m249_pip1_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_m249_pip1_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_m249_pip1_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_m249_pip1_30Rnd";
    };
};
class hlc_m249_pip2: hlc_lmg_minimi_railed {
    displayName = "M249E2 (Short/Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 163.5;
    };
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_m249_pip2_30Rnd";
        30Rnd_556x45_Stanag_Sand_red = "hlc_m249_pip2_30Rnd";
        30Rnd_556x45_Stanag_Sand = "hlc_m249_pip2_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_m249_pip2_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_m249_pip2_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_m249_pip2_30Rnd";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_m249_pip2_30Rnd";
        150Rnd_556x45_Drum_Mag_F = "hlc_m249_pip2_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_m249_pip2_30Rnd";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_m249_pip2_30Rnd";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_m249_pip2_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_m249_pip2_30Rnd";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_m249_pip2_30Rnd";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_m249_pip2_30Rnd";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_m249_pip2_30Rnd";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_pip2_30Rnd";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_m249_pip2_30Rnd";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_m249_pip2_30Rnd";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_m249_pip2_30Rnd";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_m249_pip2_30Rnd";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_pip2_30Rnd";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_m249_pip2_30Rnd";
        UK3CB_M16_20Rnd_Mag_T = "hlc_m249_pip2_30Rnd";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_m249_pip2_30Rnd";
        UK3CB_BAF_556_30Rnd = "hlc_m249_pip2_30Rnd";
        UK3CB_BAF_556_30Rnd_T = "hlc_m249_pip2_30Rnd";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_m249_pip2_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_m249_pip2_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_m249_pip2_30Rnd";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_m249_pip2_30Rnd";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_m249_pip2_30Rnd";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_m249_pip2_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_m249_pip2_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_m249_pip2_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_m249_pip2_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_m249_pip2_30Rnd";
    };
};
class hlc_m249_pip3: hlc_lmg_minimi_railed {
    displayName = "M249 PIP (Short/Savit/Rail)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 160.5;
    };
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_m249_pip3_30Rnd";
        30Rnd_556x45_Stanag_Sand_red = "hlc_m249_pip3_30Rnd";
        30Rnd_556x45_Stanag_Sand = "hlc_m249_pip3_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_m249_pip3_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_m249_pip3_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_m249_pip3_30Rnd";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_m249_pip3_30Rnd";
        150Rnd_556x45_Drum_Mag_F = "hlc_m249_pip3_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_m249_pip3_30Rnd";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_m249_pip3_30Rnd";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_m249_pip3_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_m249_pip3_30Rnd";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_m249_pip3_30Rnd";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_m249_pip3_30Rnd";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_m249_pip3_30Rnd";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_pip3_30Rnd";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_m249_pip3_30Rnd";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_m249_pip3_30Rnd";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_m249_pip3_30Rnd";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_m249_pip3_30Rnd";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_pip3_30Rnd";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_m249_pip3_30Rnd";
        UK3CB_M16_20Rnd_Mag_T = "hlc_m249_pip3_30Rnd";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_m249_pip3_30Rnd";
        UK3CB_BAF_556_30Rnd = "hlc_m249_pip3_30Rnd";
        UK3CB_BAF_556_30Rnd_T = "hlc_m249_pip3_30Rnd";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_m249_pip3_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_m249_pip3_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_m249_pip3_30Rnd";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_m249_pip3_30Rnd";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_m249_pip3_30Rnd";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_m249_pip3_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_m249_pip3_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_m249_pip3_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_m249_pip3_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_m249_pip3_30Rnd";
    };
};
class hlc_m249_pip4: hlc_lmg_minimi_railed {
    displayName = "M249 PIP (Long/Savit)";
    class WeaponSlotsInfo {
        mass = 167.5;
    };
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_m249_pip4_30Rnd";
        30Rnd_556x45_Stanag_Sand_red = "hlc_m249_pip4_30Rnd";
        30Rnd_556x45_Stanag_Sand = "hlc_m249_pip4_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_m249_pip4_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_m249_pip4_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_m249_pip4_30Rnd";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_m249_pip4_30Rnd";
        150Rnd_556x45_Drum_Mag_F = "hlc_m249_pip4_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_m249_pip4_30Rnd";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_m249_pip4_30Rnd";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_m249_pip4_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_m249_pip4_30Rnd";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_m249_pip4_30Rnd";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_m249_pip4_30Rnd";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_m249_pip4_30Rnd";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_pip4_30Rnd";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_m249_pip4_30Rnd";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_m249_pip4_30Rnd";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_m249_pip4_30Rnd";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_m249_pip4_30Rnd";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_pip4_30Rnd";
        //C-Mags
        rhs_mag_100Rnd_556x45_M855A1_cmag = "hlc_m249_pip4_30Rnd";
        rhs_mag_100Rnd_556x45_M855A1_cmag_mixed = "hlc_m249_pip4_30Rnd";
        rhs_mag_100Rnd_556x45_M855_cmag = "hlc_m249_pip4_30Rnd";
        rhs_mag_100Rnd_556x45_M855_cmag_mixed = "hlc_m249_pip4_30Rnd";
        rhs_mag_100Rnd_556x45_Mk318_cmag = "hlc_m249_pip4_30Rnd";
        rhs_mag_100Rnd_556x45_Mk262_cmag = "hlc_m249_pip4_30Rnd";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_m249_pip4_30Rnd";
        UK3CB_M16_20Rnd_Mag_T = "hlc_m249_pip4_30Rnd";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_m249_pip4_30Rnd";
        UK3CB_BAF_556_30Rnd = "hlc_m249_pip4_30Rnd";
        UK3CB_BAF_556_30Rnd_T = "hlc_m249_pip4_30Rnd";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_m249_pip4_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_m249_pip4_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_m249_pip4_30Rnd";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_m249_pip4_30Rnd";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_m249_pip4_30Rnd";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_m249_pip4_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_m249_pip4_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_m249_pip4_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_m249_pip4_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_m249_pip4_30Rnd";
    };
};
class hlc_m249_pip4_grip: hlc_m249_pip4 {
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_m249_pip4_30Rnd_grip";
        30Rnd_556x45_Stanag_Sand_red = "hlc_m249_pip4_30Rnd_grip";
        30Rnd_556x45_Stanag_Sand = "hlc_m249_pip4_30Rnd_grip";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_m249_pip4_30Rnd_grip";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_m249_pip4_30Rnd_grip";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_m249_pip4_30Rnd_grip";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_m249_pip4_30Rnd_grip";
        150Rnd_556x45_Drum_Mag_F = "hlc_m249_pip4_30Rnd_grip";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_m249_pip4_30Rnd_grip";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_m249_pip4_30Rnd_grip";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_m249_pip4_30Rnd_grip";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_m249_pip4_30Rnd_grip";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_m249_pip4_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_pip4_30Rnd_grip";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_m249_pip4_30Rnd_grip";
        UK3CB_M16_20Rnd_Mag_T = "hlc_m249_pip4_30Rnd_grip";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_m249_pip4_30Rnd_grip";
        UK3CB_BAF_556_30Rnd = "hlc_m249_pip4_30Rnd_grip";
        UK3CB_BAF_556_30Rnd_T = "hlc_m249_pip4_30Rnd_grip";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_m249_pip4_30Rnd_grip";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_m249_pip4_30Rnd_grip";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_m249_pip4_30Rnd_grip";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_m249_pip4_30Rnd_grip";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_m249_pip4_30Rnd_grip";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_m249_pip4_30Rnd_grip";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_m249_pip4_30Rnd_grip";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_m249_pip4_30Rnd_grip";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_m249_pip4_30Rnd_grip";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_m249_pip4_30Rnd_grip";
    };
};
class hlc_m249_pip4_grip2: hlc_m249_pip4 {
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_m249_pip4_30Rnd_grip2";
        30Rnd_556x45_Stanag_Sand_red = "hlc_m249_pip4_30Rnd_grip2";
        30Rnd_556x45_Stanag_Sand = "hlc_m249_pip4_30Rnd_grip2";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_m249_pip4_30Rnd_grip2";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_m249_pip4_30Rnd_grip2";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_m249_pip4_30Rnd_grip2";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_m249_pip4_30Rnd_grip2";
        150Rnd_556x45_Drum_Mag_F = "hlc_m249_pip4_30Rnd_grip2";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_m249_pip4_30Rnd_grip2";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_m249_pip4_30Rnd_grip2";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_m249_pip4_30Rnd_grip2";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_m249_pip4_30Rnd_grip2";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_m249_pip4_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_pip4_30Rnd_grip2";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_m249_pip4_30Rnd_grip2";
        UK3CB_M16_20Rnd_Mag_T = "hlc_m249_pip4_30Rnd_grip2";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_m249_pip4_30Rnd_grip2";
        UK3CB_BAF_556_30Rnd = "hlc_m249_pip4_30Rnd_grip2";
        UK3CB_BAF_556_30Rnd_T = "hlc_m249_pip4_30Rnd_grip2";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_m249_pip4_30Rnd_grip2";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_m249_pip4_30Rnd_grip2";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_m249_pip4_30Rnd_grip2";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_m249_pip4_30Rnd_grip2";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_m249_pip4_30Rnd_grip2";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_m249_pip4_30Rnd_grip2";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_m249_pip4_30Rnd_grip2";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_m249_pip4_30Rnd_grip2";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_m249_pip4_30Rnd_grip2";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_m249_pip4_30Rnd_grip2";
    };
};
class hlc_m249_pip4_grip3: hlc_m249_pip4 {
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_m249_pip4_30Rnd_grip3";
        30Rnd_556x45_Stanag_Sand_red = "hlc_m249_pip4_30Rnd_grip3";
        30Rnd_556x45_Stanag_Sand = "hlc_m249_pip4_30Rnd_grip3";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_m249_pip4_30Rnd_grip3";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_m249_pip4_30Rnd_grip3";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_m249_pip4_30Rnd_grip3";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_m249_pip4_30Rnd_grip3";
        150Rnd_556x45_Drum_Mag_F = "hlc_m249_pip4_30Rnd_grip3";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_m249_pip4_30Rnd_grip3";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_m249_pip4_30Rnd_grip3";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_m249_pip4_30Rnd_grip3";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_m249_pip4_30Rnd_grip3";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_m249_pip4_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_pip4_30Rnd_grip3";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_m249_pip4_30Rnd_grip3";
        UK3CB_M16_20Rnd_Mag_T = "hlc_m249_pip4_30Rnd_grip3";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_m249_pip4_30Rnd_grip3";
        UK3CB_BAF_556_30Rnd = "hlc_m249_pip4_30Rnd_grip3";
        UK3CB_BAF_556_30Rnd_T = "hlc_m249_pip4_30Rnd_grip3";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_m249_pip4_30Rnd_grip3";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_m249_pip4_30Rnd_grip3";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_m249_pip4_30Rnd_grip3";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_m249_pip4_30Rnd_grip3";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_m249_pip4_30Rnd_grip3";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_m249_pip4_30Rnd_grip3";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_m249_pip4_30Rnd_grip3";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_m249_pip4_30Rnd_grip3";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_m249_pip4_30Rnd_grip3";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_m249_pip4_30Rnd_grip3";
    };
};

class hlc_m249_SQuantoon: hlc_m249_pip4 {
    displayName = "M249 PIP (Long/Savit/'Squantoon')";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 167.5;
    };
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_m249_SQuantoon_30Rnd";
        30Rnd_556x45_Stanag_Sand_red = "hlc_m249_SQuantoon_30Rnd";
        30Rnd_556x45_Stanag_Sand = "hlc_m249_SQuantoon_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_m249_SQuantoon_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_m249_SQuantoon_30Rnd";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_m249_SQuantoon_30Rnd";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_m249_SQuantoon_30Rnd";
        150Rnd_556x45_Drum_Mag_F = "hlc_m249_SQuantoon_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_m249_SQuantoon_30Rnd";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_m249_SQuantoon_30Rnd";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_m249_SQuantoon_30Rnd";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_m249_SQuantoon_30Rnd";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_m249_SQuantoon_30Rnd";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_SQuantoon_30Rnd";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_m249_SQuantoon_30Rnd";
        UK3CB_M16_20Rnd_Mag_T = "hlc_m249_SQuantoon_30Rnd";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_m249_SQuantoon_30Rnd";
        UK3CB_BAF_556_30Rnd = "hlc_m249_SQuantoon_30Rnd";
        UK3CB_BAF_556_30Rnd_T = "hlc_m249_SQuantoon_30Rnd";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_m249_SQuantoon_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_m249_SQuantoon_30Rnd";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_m249_SQuantoon_30Rnd";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_m249_SQuantoon_30Rnd";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_m249_SQuantoon_30Rnd";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_m249_SQuantoon_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_m249_SQuantoon_30Rnd";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_m249_SQuantoon_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_m249_SQuantoon_30Rnd";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_m249_SQuantoon_30Rnd";
    };
};
class hlc_m249_SQuantoon_grip: hlc_m249_SQuantoon {
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_m249_SQuantoon_30Rnd_grip";
        30Rnd_556x45_Stanag_Sand_red = "hlc_m249_SQuantoon_30Rnd_grip";
        30Rnd_556x45_Stanag_Sand = "hlc_m249_SQuantoon_30Rnd_grip";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_m249_SQuantoon_30Rnd_grip";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_m249_SQuantoon_30Rnd_grip";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_m249_SQuantoon_30Rnd_grip";
        150Rnd_556x45_Drum_Mag_F = "hlc_m249_SQuantoon_30Rnd_grip";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_m249_SQuantoon_30Rnd_grip";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_m249_SQuantoon_30Rnd_grip";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_m249_SQuantoon_30Rnd_grip";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_m249_SQuantoon_30Rnd_grip";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_m249_SQuantoon_30Rnd_grip";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_m249_SQuantoon_30Rnd_grip";
        UK3CB_M16_20Rnd_Mag_T = "hlc_m249_SQuantoon_30Rnd_grip";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_m249_SQuantoon_30Rnd_grip";
        UK3CB_BAF_556_30Rnd = "hlc_m249_SQuantoon_30Rnd_grip";
        UK3CB_BAF_556_30Rnd_T = "hlc_m249_SQuantoon_30Rnd_grip";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_m249_SQuantoon_30Rnd_grip";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_m249_SQuantoon_30Rnd_grip";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_m249_SQuantoon_30Rnd_grip";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_m249_SQuantoon_30Rnd_grip";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_m249_SQuantoon_30Rnd_grip";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_m249_SQuantoon_30Rnd_grip";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_m249_SQuantoon_30Rnd_grip";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_m249_SQuantoon_30Rnd_grip";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_m249_SQuantoon_30Rnd_grip";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_m249_SQuantoon_30Rnd_grip";
    };
};
class hlc_m249_SQuantoon_grip2: hlc_m249_SQuantoon {
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_m249_SQuantoon_30Rnd_grip2";
        30Rnd_556x45_Stanag_Sand_red = "hlc_m249_SQuantoon_30Rnd_grip2";
        30Rnd_556x45_Stanag_Sand = "hlc_m249_SQuantoon_30Rnd_grip2";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_m249_SQuantoon_30Rnd_grip2";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip2";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_m249_SQuantoon_30Rnd_grip2";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_m249_SQuantoon_30Rnd_grip2";
        150Rnd_556x45_Drum_Mag_F = "hlc_m249_SQuantoon_30Rnd_grip2";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_m249_SQuantoon_30Rnd_grip2";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_m249_SQuantoon_30Rnd_grip2";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_m249_SQuantoon_30Rnd_grip2";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_m249_SQuantoon_30Rnd_grip2";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_m249_SQuantoon_30Rnd_grip2";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip2";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_m249_SQuantoon_30Rnd_grip2";
        UK3CB_M16_20Rnd_Mag_T = "hlc_m249_SQuantoon_30Rnd_grip2";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_m249_SQuantoon_30Rnd_grip2";
        UK3CB_BAF_556_30Rnd = "hlc_m249_SQuantoon_30Rnd_grip2";
        UK3CB_BAF_556_30Rnd_T = "hlc_m249_SQuantoon_30Rnd_grip2";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_m249_SQuantoon_30Rnd_grip2";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_m249_SQuantoon_30Rnd_grip2";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_m249_SQuantoon_30Rnd_grip2";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_m249_SQuantoon_30Rnd_grip2";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_m249_SQuantoon_30Rnd_grip2";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_m249_SQuantoon_30Rnd_grip2";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_m249_SQuantoon_30Rnd_grip2";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_m249_SQuantoon_30Rnd_grip2";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_m249_SQuantoon_30Rnd_grip2";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_m249_SQuantoon_30Rnd_grip2";
    };
};
class hlc_m249_SQuantoon_grip3: hlc_m249_SQuantoon {
    class nia_magSwitch {
        //BI mags
        30Rnd_556x45_Stanag_Sand_green = "hlc_m249_SQuantoon_30Rnd_grip3";
        30Rnd_556x45_Stanag_Sand_red = "hlc_m249_SQuantoon_30Rnd_grip3";
        30Rnd_556x45_Stanag_Sand = "hlc_m249_SQuantoon_30Rnd_grip3";
        30Rnd_556x45_Stanag_Sand_Tracer_Green = "hlc_m249_SQuantoon_30Rnd_grip3";
        30Rnd_556x45_Stanag_Sand_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip3";
        30Rnd_556x45_Stanag_Sand_Tracer_Yellow = "hlc_m249_SQuantoon_30Rnd_grip3";
        //BI C-mags
        150Rnd_556x45_Drum_Green_Mag_F = "hlc_m249_SQuantoon_30Rnd_grip3";
        150Rnd_556x45_Drum_Mag_F = "hlc_m249_SQuantoon_30Rnd_grip3";
        150Rnd_556x45_Drum_Sand_Mag_F = "hlc_m249_SQuantoon_30Rnd_grip3";
        150Rnd_556x45_Drum_Green_Mag_Tracer_F = "hlc_m249_SQuantoon_30Rnd_grip3";
        150Rnd_556x45_Drum_Mag_Tracer_F = "hlc_m249_SQuantoon_30Rnd_grip3";
        150Rnd_556x45_Drum_Sand_Mag_Tracer_F = "hlc_m249_SQuantoon_30Rnd_grip3";
        //RHS
        rhs_mag_20Rnd_556x45_M193_2MAG_Stanag = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_20Rnd_556x45_M193_Stanag = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_20Rnd_556x45_M200_Stanag = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_20Rnd_556x45_M855_Stanag = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_20Rnd_556x45_M855A1_Stanag = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_20Rnd_556x45_Mk262_Stanag = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_EPM = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_Mk318_SCAR = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M193_Stanag = "hlc_m249_SQuantoon_30Rnd_grip3";
        rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red = "hlc_m249_SQuantoon_30Rnd_grip3";
        //UK3CB BAF & Factions
        UK3CB_M16_20Rnd_Mag = "hlc_m249_SQuantoon_30Rnd_grip3";
        UK3CB_M16_20Rnd_Mag_T = "hlc_m249_SQuantoon_30Rnd_grip3";
        UK3CB_BAF_556_30Rnd_Blank = "hlc_m249_SQuantoon_30Rnd_grip3";
        UK3CB_BAF_556_30Rnd = "hlc_m249_SQuantoon_30Rnd_grip3";
        UK3CB_BAF_556_30Rnd_T = "hlc_m249_SQuantoon_30Rnd_grip3";
        //ACE
        ACE_30Rnd_556x45_Stanag_M995_AP_mag = "hlc_m249_SQuantoon_30Rnd_grip3";
        ACE_30Rnd_556x45_Stanag_Mk262_mag = "hlc_m249_SQuantoon_30Rnd_grip3";
        ACE_30Rnd_556x45_Stanag_Mk318_mag = "hlc_m249_SQuantoon_30Rnd_grip3";
        ACE_30Rnd_556x45_Stanag_Tracer_Dim = "hlc_m249_SQuantoon_30Rnd_grip3";
        //SFP
        sfp_30Rnd_556x45_Stanag = "hlc_m249_SQuantoon_30Rnd_grip3";
        sfp_30Rnd_556x45_Stanag_plastic = "hlc_m249_SQuantoon_30Rnd_grip3";
        sfp_30Rnd_556x45_Stanag_irtracer = "hlc_m249_SQuantoon_30Rnd_grip3";
        sfp_30Rnd_556x45_Stanag_irtracer_plastic = "hlc_m249_SQuantoon_30Rnd_grip3";
        sfp_30Rnd_556x45_Stanag_tracer = "hlc_m249_SQuantoon_30Rnd_grip3";
        sfp_30Rnd_556x45_Stanag_tracer_plastic = "hlc_m249_SQuantoon_30Rnd_grip3";
    };
};

class hlc_lmg_mk46: hlc_lmg_minimi_railed {
    class WeaponSlotsInfo {
        mass = 154.4;
        class GripodSlot: nia_rifle_gripod_slot {};
        class UnderBarrelSlot: fk_rifle_grips_slot {};
    };
};
class hlc_lmg_mk46mod1: hlc_lmg_mk46 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 152.4;
        class GripodSlot: nia_rifle_gripod_slot {};
        class UnderBarrelSlot: fk_rifle_grips_slot {};
    };
};

class hlc_lmg_mk48: hlc_saw_base {
    class WeaponSlotsInfo {
        mass = 182.6;
    };
};
class hlc_lmg_mk48mod1: hlc_lmg_mk48 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 186.6;
        class GripodSlot: nia_rifle_gripod_slot {};
        class UnderBarrelSlot: fk_rifle_grips_slot {};
    };
};
