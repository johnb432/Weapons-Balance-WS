class asdg_SlotInfo;

class UnderBarrelSlot;
class UnderBarrelSlot_rail: UnderBarrelSlot {
    class compatibleItems {
        rhs_acc_harris_swivel = 1;
        rhsusf_acc_harris_bipod = 1;
        hlc_isopod = 1;
        hlc_bipod_utgshooters = 1;
    };
};
class nia_rifle_grips_slot: UnderBarrelSlot {
    displayName = "Gripod slot";
    class compatibleItems {
        hlc_grip_AFG2 = 1;
        hlc_grip_PMVFG = 1;
        rhsusf_acc_grip1 = 1;
        rhsusf_acc_grip2 = 1;
        rhsusf_acc_grip2_tan = 1;
        rhsusf_acc_grip2_wd = 1;
        rhsusf_acc_grip3 = 1;
        rhsusf_acc_grip3_tan = 1;
        rhs_acc_grip_rk2 = 1;
        rhs_acc_grip_rk6 = 1;
        rhs_acc_grip_ffg2 = 1;
        rhsusf_acc_rvg_blk = 1;
        rhsusf_acc_rvg_de = 1;
        rhsusf_acc_tacsac_blk = 1;
        rhsusf_acc_tacsac_tan = 1;
        rhsusf_acc_tacsac_blue = 1;
        rhsusf_acc_tdstubby_blk = 1;
        rhsusf_acc_tdstubby_tan = 1;
        rhsusf_acc_kac_grip = 1;
        bipod_01_F_blk = 1;
        bipod_01_F_khk = 1;
        bipod_01_F_mtp = 1;
        bipod_01_F_snd = 1;
        bipod_02_F_arid = 1;
        bipod_02_F_blk = 1;
        bipod_02_F_hex = 1;
        bipod_02_F_lush = 1;
        bipod_02_F_tan = 1;
        bipod_03_F_blk = 1;
        bipod_03_F_oli = 1;
        HLC_bipod_UTGShooters = 1;
        rhsusf_acc_harris_bipod = 1;
        rhs_acc_harris_swivel = 1;
    };
};

class asdg_UnderSlot: asdg_SlotInfo {
    class compatibleItems {};
};
class nia_rifle_bipodsgrips_slot: asdg_UnderSlot {
    class compatibleItems: compatibleItems {
        rhsusf_acc_grip1 = 1;
        rhsusf_acc_grip2 = 1;
        rhsusf_acc_grip2_tan = 1;
        rhsusf_acc_grip2_wd = 1;
        rhsusf_acc_grip3 = 1;
        rhsusf_acc_grip3_tan = 1;
        rhs_acc_grip_rk2 = 1;
        rhs_acc_grip_rk6 = 1;
        rhs_acc_grip_ffg2 = 1;
        rhsusf_acc_rvg_blk = 1;
        rhsusf_acc_rvg_de = 1;
        rhsusf_acc_tacsac_blk = 1;
        rhsusf_acc_tacsac_tan = 1;
        rhsusf_acc_tacsac_blue = 1;
        rhsusf_acc_tdstubby_blk = 1;
        rhsusf_acc_tdstubby_tan = 1;
        rhsusf_acc_kac_grip = 1;
    };
};
class fk_rifle_grips_slot: asdg_SlotInfo {
    iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
    iconPinpoint = "Bottom";
    linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
    class compatibleItems {
        hlc_grip_AFG2 = 1;
        hlc_grip_PMVFG = 1;
        hlc_grip_saw_grip1 = 1;
        hlc_grip_saw_grip2 = 1;
        rhs_acc_grip_ffg2 = 1;
        rhs_acc_grip_rk2 = 1;
        rhs_acc_grip_rk6 = 1;
        rhsusf_acc_grip1 = 1;
        rhsusf_acc_grip2 = 1;
        rhsusf_acc_grip2_tan = 1;
        rhsusf_acc_grip2_wd = 1;
        rhsusf_acc_grip3 = 1;
        rhsusf_acc_grip3_tan = 1;
        rhsusf_acc_kac_grip = 1;
        rhsusf_acc_rvg_blk = 1;
        rhsusf_acc_rvg_de = 1;
        rhsusf_acc_tacsac_blk = 1;
        rhsusf_acc_tacsac_blue = 1;
        rhsusf_acc_tacsac_tan = 1;
        rhsusf_acc_tdstubby_blk = 1;
        rhsusf_acc_tdstubby_tan = 1;
    };
};

class rhs_rifle_gripod_slot: UnderBarrelSlot {
    class compatibleItems {
        hlc_grip_AFG2 = 1;
        hlc_grip_PMVFG = 1;
    };
};

class rhs_western_rifle_gripod_slot : rhs_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        bipod_01_F_blk = 1;
        bipod_01_F_khk = 1;
        bipod_01_F_mtp = 1;
        bipod_01_F_snd = 1;
        bipod_02_F_arid = 1;
        bipod_02_F_blk = 1;
        bipod_02_F_hex = 1;
        bipod_02_F_lush = 1;
        bipod_02_F_tan = 1;
        bipod_03_F_blk = 1;
        bipod_03_F_oli = 1;
        HLC_bipod_UTGShooters = 1;
        HLC_ISOPOD = 1;
        hlc_grip_saw_grip1 = 1;
        hlc_grip_saw_grip2 = 1;
        rhsusf_acc_harris_bipod = 1;
        rhs_acc_harris_swivel = 1;
    };
};

class rhs_western_mg_gripod_slot: rhs_western_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        rhsusf_acc_grip2 = 1;
        rhsusf_acc_grip2_tan = 1;
        rhsusf_acc_grip2_wd = 1;
        hlc_grip_saw_grip1 = 1;
        hlc_grip_saw_grip2 = 1;
    };
};

class rhs_western_m14_underbarrel_slot: UnderBarrelSlot {
    class compatibleItems {
        rhs_acc_harris_swivel = 1;
    };
};


class PointerSlot;
class PointerSlot_rail: PointerSlot {
    class compatibleItems {
        sfp_dbal2 = 1;
        rhs_acc_2dpzenit_ris = 1;
        rhs_acc_perst1ik_ris = 1;
        rhs_acc_perst3 = 1;
        rhsusf_acc_anpeq15side = 1;
        rhsusf_acc_anpeq15_top = 1;
        rhsusf_acc_anpeq15_wmx = 1;
        rhsusf_acc_anpeq15_wmx_light = 1;
        rhsusf_acc_anpeq15side_bk = 1;
        rhsusf_acc_anpeq15_bk_top = 1;
        rhsusf_acc_anpeq15 = 1;
        rhsusf_acc_anpeq15_light = 1;
        rhsusf_acc_anpeq15_bk = 1;
        rhsusf_acc_anpeq15_bk_light = 1;
        rhsusf_acc_anpeq15a = 1;
        rhsusf_acc_anpeq16a = 1;
        rhsusf_acc_anpeq16a_light = 1;
        rhsusf_acc_anpeq16a_top = 1;
        rhsusf_acc_anpeq16a_light_top = 1;
        rhsusf_acc_m952v = 1;
        rhsusf_acc_wmx = 1;
        rhsusf_acc_wmx_bk = 1;
        uk3cb_baf_llm_flashlight_black = 1;
        uk3cb_baf_llm_flashlight_tan = 1;
        uk3cb_baf_llm_ir_black = 1;
        uk3cb_baf_llm_ir_tan = 1;
    };
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        optic_yorris = 1;
        sfp_optic_aimpoint = 1;
        sfp_optic_3x_aimpoint = 1;
        sfp_optic_aimpoint_t1 = 1;
        sfp_optic_kikarsikte09_4x = 1;
        sfp_optic_kikarsikte90b_10x = 1;
        sfp_optic_susat_4x = 1;
        rhs_acc_rakurspm = 1;
        rhs_acc_1p87 = 1;
        rhs_acc_dh520x56 = 1;
        rhs_acc_ekp8_18 = 1;
        rhs_acc_okp7_picatinny = 1;
        rhsusf_acc_anpas13gv1 = 1;
        rhsusf_acc_acog2_usmc = 1;
        rhsusf_acc_acog3_usmc = 1;
        rhsusf_acc_acog_usmc = 1;
        rhsusf_acc_anpvs27 = 1;
        rhsusf_acc_eotech = 1;
        rhsusf_acc_g33_t1 = 1;
        rhsusf_acc_g33_xps3 = 1;
        rhsusf_acc_g33_xps3_tan = 1;
        rhsusf_acc_elcan = 1;
        rhsusf_acc_elcan_ard = 1;
        rhsusf_acc_acog = 1;
        rhsusf_acc_acog2 = 1;
        rhsusf_acc_acog3 = 1;
        rhsusf_acc_m2a1 = 1;
        rhsusf_acc_eotech_552 = 1;
        rhsusf_acc_eotech_552_d = 1;
        rhsusf_acc_eotech_552_wd = 1;
        rhsusf_acc_compm4 = 1;
        rhsusf_acc_m8541 = 1;
        rhsusf_acc_m8541_low = 1;
        rhsusf_acc_m8541_low_d = 1;
        rhsusf_acc_m8541_low_wd = 1;
        rhsusf_acc_m8541_mrds = 1;
        rhsusf_acc_premier_low = 1;
        rhsusf_acc_premier = 1;
        rhsusf_acc_premier_mrds = 1;
        rhsusf_acc_leupoldmk4 = 1;
        rhsusf_acc_leupoldmk4_2 = 1;
        rhsusf_acc_leupoldmk4_d = 1;
        rhsusf_acc_leupoldmk4_wd = 1;
        rhsusf_acc_leupoldmk4_2_d = 1;
        rhsusf_acc_leupoldmk4_2_mrds = 1;
        rhsusf_acc_mrds = 1;
        rhsusf_acc_mrds_c = 1;
        rhsusf_acc_rm05 = 1;
        rhsusf_acc_rx01_nofilter = 1;
        rhsusf_acc_rx01 = 1;
        rhsusf_acc_rx01_nofilter_tan = 1;
        rhsusf_acc_rx01_tan = 1;
        rhsusf_acc_su230 = 1;
        rhsusf_acc_su230_c = 1;
        rhsusf_acc_su230_mrds = 1;
        rhsusf_acc_su230_mrds_c = 1;
        rhsusf_acc_su230a = 1;
        rhsusf_acc_su230a_c = 1;
        rhsusf_acc_su230a_mrds = 1;
        rhsusf_acc_su230a_mrds_c = 1;
        rhsusf_acc_acog_mdo = 1;
        rhsusf_acc_t1_high = 1;
        rhsusf_acc_t1_low = 1;
        rhsusf_acc_acog_rmr = 1;
        rhsusf_acc_acog_d = 1;
        rhsusf_acc_acog_wd = 1;
        rhsusf_acc_eotech_xps3 = 1;
        rhsgref_acc_rx01_nofilter_camo = 1;
        rhsgref_acc_rx01_camo = 1;
        hlc_optic_docterr = 1;
        hlc_optic_hensoldtzo_lo = 1;
        hlc_optic_hensoldtzo_lo_2d = 1;
        hlc_optic_hensoldtzo_lo_docter = 1;
        hlc_optic_hensoldtzo_lo_docter_2d = 1;
        hlc_optic_hensoldtzo_hi = 1;
        hlc_optic_hensoldtzo_hi_2d = 1;
        hlc_optic_hensoldtzo_hi_docter = 1;
        hlc_optic_hensoldtzo_hi_docter_2d = 1;
        hlc_optic_zf95base = 1;
        hlc_optic_leupoldm3a = 1;
        hlc_optic_atacr = 1;
        hlc_optic_atacr_offset = 1;
        hlc_optic_vomz3d = 1;
        hlc_optic_vomz = 1;
        uk3cb_baf_kite = 1;
        uk3cb_baf_maxikite = 1;
        uk3cb_baf_specterlds = 1;
        uk3cb_baf_suit = 1;
        uk3cb_baf_susat = 1;
        uk3cb_baf_ta31f = 1;
        uk3cb_baf_ta31f_hornbill = 1;
        uk3cb_baf_ta648 = 1;
        uk3cb_baf_ta648_308 = 1;
        ace_optic_arco_pip = 1;
        ace_optic_arco_2d = 1;
        ace_optic_mrco_2d = 1;
        ace_optic_hamr_2d = 1;
        ace_optic_lrps_pip = 1;
        ace_optic_sos_2d = 1;
        ace_optic_sos_pip = 1;
        ace_optic_lrps_2d = 1;
        ace_optic_hamr_pip = 1;
        rksl_optic_eot552 = 1;
        rksl_optic_eot552_c = 1;
        rksl_optic_eot552x = 1;
        rksl_optic_eot552x_c = 1;
        rksl_optic_lds = 1;
        rksl_optic_lds_c = 1;
        rksl_optic_rmr_ms19 = 1;
        rksl_optic_rmr_ms19_fde = 1;
        rksl_optic_rmr_rm33 = 1;
        rksl_optic_rmr_rm33_fde = 1;
        rksl_optic_pmii_312 = 1;
        rksl_optic_pmii_312_des = 1;
        rksl_optic_pmii_312_sunshade = 1;
        rksl_optic_pmii_312_sunshade_des = 1;
        rksl_optic_pmii_312_sunshade_wdl = 1;
        rksl_optic_pmii_312_wdl = 1;
        rksl_optic_pmii_525 = 1;
        rksl_optic_pmii_525_des = 1;
        rksl_optic_pmii_525_wdl = 1;
    };
};

class asdg_OpticRail: asdg_SlotInfo {
    class compatibleItems {};
};
class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems {
        optic_mrd = 1;
        optic_mrd_black = 1;
    };
};

class asdg_OpticRail1913_3CB_FNFAL: asdg_OpticRail {
    class compatibleItems {
        hlc_optic_pvs4fal = 1;
        hlc_optic_suit = 1;
        uk3cb_baf_suit = 1;
    };
};
class asdg_OpticRail1913_3CB_G3: asdg_OpticRail {
    class compatibleItems {
        hlc_optic_pvs4g3 = 1;
        hlc_optic_stanagzf_g3 = 1;
        hlc_optic_stanagzf2d_g3 = 1;
        hlc_optic_zf95_g3 = 1;
        hlc_optic_leupoldm3a_g3 = 1;
        hlc_optic_accupoint_g3 = 1;
        hlc_optic_zfsg1 = 1;
    };
};
class asdg_OpticRail1913_3CB_M14: asdg_OpticRail {
    class compatibleItems {
        hlc_optic_pvs4m14 = 1;
        hlc_optic_lrt_m14 = 1;
        hlc_optic_artel_m14 = 1;
    };
};

class niarms_m14_OpticRail: asdg_OpticRail {
    class compatibleItems: compatibleItems {
        uk3cb_optic_pvs4_m14 = 1;
        uk3cb_optic_artel_m14 = 1;
    };
};

class asdg_OpticRailL1A1: asdg_OpticRail {
    class compatibleItems: compatibleItems {
        hlc_optic_pvs4fal = 1;
        hlc_optic_suit = 1;
        uk3cb_baf_suit = 1;
        uk3cb_optic_suit_fnfal = 1;
    };
};

class asdg_OpticSideMount: asdg_OpticRail {
    class compatibleItems {};
};

class rhs_russian_rifle_scopes_slot: asdg_OpticSideMount {
    class compatibleItems: compatibleItems {
        hlc_optic_pso1 = 1;
        hlc_optic_goshawk = 1;
        hlc_optic_kobra = 1;
        hlc_optic_1p29 = 1;
    };
};

class SlotInfo;
class rhs_russian_svd_scopes_slot: SlotInfo {
    class compatibleItems {
        hlc_optic_pso1 = 1;
        hlc_optic_goshawk = 1;
    };
};

class asdg_MuzzleSlot: asdg_SlotInfo {
    class compatibleItems {};
};

class asdg_MuzzleSlot_762: asdg_MuzzleSlot {
    class compatibleItems {
        rhsusf_acc_aac_m14dcqd_silencer = 1;
        rhsusf_acc_aac_m14dcqd_silencer_d = 1;
        rhsusf_acc_aac_m14dcqd_silencer_wd = 1;
        rhsusf_acc_m14_flashsuppresor = 1;
        uk3cb_muzzle_snds_M14 = 1;
        uk3cb_muzzle_snds_g3 = 1;
    };
};

class asdg_MuzzleSlot_762R: asdg_MuzzleSlot {
    class compatibleItems {
        rhs_acc_dtkakm = 1;
        rhs_acc_dtk1l = 1;
    };
};

class asdg_MuzzleSlot_556: asdg_MuzzleSlot {
    class compatibleItems {
        uk3cb_muzzle_snds_hk33 = 1;
    };
};

class rhs_western_rifle_muzzle_slot: asdg_MuzzleSlot_556 {
    class compatibleItems: compatibleItems {
        muzzle_snds_M = 1;
        uk3cb_muzzle_snds_hk33 = 1;
    };
};

class asdg_MuzzleSlot_556_3CB_HK33: asdg_MuzzleSlot {
    class compatibleItems {
        muzzle_snds_m = 1;
        muzzle_snds_m_khk_f = 1;
        muzzle_snds_m_snd_f = 1;
        rhsusf_acc_nt4_black = 1;
        rhsusf_acc_nt4_tan = 1;
        rhsusf_acc_rotex5_grey = 1;
        rhsusf_acc_rotex5_tan = 1;
        rhsusf_acc_sf3p556 = 1;
        rhsusf_acc_sfmb556 = 1;
        hlc_muzzle_556nato_m42000 = 1;
        hlc_muzzle_snds_rotex3p = 1;
        hlc_muzzle_556nato_rotexiiic_grey = 1;
        hlc_muzzle_556nato_rotexiiic_tan = 1;
        hlc_muzzle_gunfighter_comp = 1;
        hlc_muzzle_556nato_kac = 1;
        hlc_muzzle_kx3_comp = 1;
        hlc_muzzle_sf3p_556 = 1;
        ace_muzzle_mzls_l = 1;
    };
};

class asdg_MuzzleSlot_762_3CB_G3: asdg_MuzzleSlot {
    class compatibleItems {
        muzzle_snds_b = 1;
        muzzle_snds_b_khk_f = 1;
        muzzle_snds_b_snd_f = 1;
        muzzle_snds_b_arid_f = 1;
        muzzle_snds_b_lush_f = 1;
        rhsusf_acc_aac_762sd_silencer = 1;
        rhsusf_acc_aac_762sdn6_silencer = 1;
        rhsusf_acc_aac_scarh_silencer = 1;
        rhsusf_acc_aac_m14dcqd_silencer = 1;
        rhsusf_acc_aac_m14dcqd_silencer_d = 1;
        rhsusf_acc_aac_m14dcqd_silencer_wd = 1;
        rhsusf_acc_m14_flashsuppresor = 1;
        rhsgref_sdn6_suppressor = 1;
        hlc_muzzle_snds_rotex3p = 1;
        hlc_muzzle_gunfighter_comp = 1;
        hlc_muzzle_mag58_brake = 1;
        hlc_muzzle_kx3_comp = 1;
        hlc_muzzle_300blk_kac = 1;
        hlc_muzzle_sf3p_762r = 1;
        ace_muzzle_mzls_b = 1;
        uk3cb_muzzle_snds_m14 = 1;
    };
};
class asdg_MuzzleSlot_762_3CB_M14: asdg_MuzzleSlot {
    class compatibleItems {
        muzzle_snds_b = 1;
        muzzle_snds_b_khk_f = 1;
        muzzle_snds_b_snd_f = 1;
        muzzle_snds_b_arid_f = 1;
        muzzle_snds_b_lush_f = 1;
        rhsusf_acc_aac_762sd_silencer = 1;
        rhsusf_acc_aac_762sdn6_silencer = 1;
        rhsusf_acc_aac_scarh_silencer = 1;
        rhsusf_acc_aac_m14dcqd_silencer = 1;
        rhsusf_acc_aac_m14dcqd_silencer_d = 1;
        rhsusf_acc_aac_m14dcqd_silencer_wd = 1;
        rhsusf_acc_m14_flashsuppresor = 1;
        rhsgref_sdn6_suppressor = 1;
        hlc_muzzle_snds_rotex3p = 1;
        hlc_muzzle_gunfighter_comp = 1;
        hlc_muzzle_mag58_brake = 1;
        hlc_muzzle_kx3_comp = 1;
        hlc_muzzle_300blk_kac = 1;
        hlc_muzzle_sf3p_762r = 1;
        ace_muzzle_mzls_b = 1;
        uk3cb_muzzle_snds_g3 = 1;
    };
};

class asdg_MuzzleSlot_900_3CB: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_agendasix = 1;
        ace_muzzle_mzls_smg_02 = 1;
        muzzle_snds_l = 1;
    };
};
class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_agendasix = 1;
        uk3cb_baf_silencer_l91a1 = 1;
    };
};

