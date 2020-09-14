class CfgWeapons {
    class ItemCore;
    class HeadgearItem;
    class Uniform_Base;
    class H_CrewHelmetHeli_B;
    class U_B_PilotCoveralls;
    class Vest_Camo_Base;
    class FIR_HGU33P;
    class FIR_HGU84P;
    class FIR_ScorpionHMCS;
    class FIR_USHelmetType1;
    class FIR_USHelmetType2;

    class H_HelmetB: ItemCore {
        class ItemInfo: HeadgearItem {};
    };
    class H_PilotHelmetHeli_B: H_HelmetB {
        class ItemInfo: ItemInfo {};
    };

    class FIR_GroundCrew_Headset: H_PilotHelmetHeli_B {
        descriptionShort = "No Armor";
        class ItemInfo: ItemInfo {
                class HitpointsProtectionInfo {
                    class Head {
                        armor = 0;
                };
            };
        };
    };
    class FIR_GroundCrew_Headset2: H_PilotHelmetHeli_B {
        descriptionShort = "No Armor";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    armor = 0;
                };
            };
        };
    };

    class FIR_Navy_SafetyHelmet_Brown: H_PilotHelmetHeli_B {
        descriptionShort = "No Armor";
        displayName = "Navy Safety Helmet (Brown)";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    armor = 0;
                };
            };
        };
    };

    class FIR_hgu26p_camo: FIR_HGU33P {
        displayName = "HGU-26/P (Camo)";
    };
    class FIR_hgu26p_camo_nomask: FIR_HGU33P {
        displayName = "HGU-26/P (Camo)";
    };
    class FIR_hgu26p_camo_openmask: FIR_HGU33P {
        displayName = "HGU-26/P (Camo)";
    };
    class FIR_hgu26p_camo_up: FIR_HGU33P {
        displayName = "HGU-26/P (Camo)";
    };
    class FIR_hgu26p_camo_up_nomask: FIR_HGU33P {
        displayName = "HGU-26/P (Camo)";
    };
    class FIR_hgu26p_camo_up_openmask: FIR_HGU33P {
        displayName = "HGU-26/P (Camo)";
    };

    class FIR_HGU33P_up: FIR_HGU33P {
        displayName = "HGU-33/P (visor up)";
    };

    class FIR_HGU33P_VF1: FIR_HGU33P {
        displayName = "HGU-33/P (VF1)";
    };
    class FIR_HGU33P_VF1_nomask: FIR_HGU33P {
        displayName = "HGU-33/P (VF1)";
    };
    class FIR_HGU33P_VF1_openmask: FIR_HGU33P {
        displayName = "HGU-33/P (VF1)";
    };

    class FIR_HGU33P_VF1_up: FIR_HGU33P_up {
        displayName = "HGU-33/P (VF1/visor up)";
    };

    class FIR_HGU33P_VF111: FIR_HGU33P {
        displayName = "HGU-33/P (VF111)";
    };
    class FIR_HGU33P_VF111_nomask: FIR_HGU33P {
        displayName = "HGU-33/P (VF111)";
    };
    class FIR_HGU33P_VF111_openmask: FIR_HGU33P {
        displayName = "HGU-33/P (VF111)";
    };

    class FIR_HGU33P_VF111_up: FIR_HGU33P_up {
        displayName = "HGU-33/P (VF111/visor up)";
    };

    class FIR_HGU33P_VF84: FIR_HGU33P {
        displayName = "HGU-33/P (VF84)";
    };
    class FIR_HGU33P_VF84_nomask: FIR_HGU33P {
        displayName = "HGU-33/P (VF84)";
    };
    class FIR_HGU33P_VF84_openmask: FIR_HGU33P {
        displayName = "HGU-33/P (VF84)";
    };

    class FIR_HGU33P_VF84_up: FIR_HGU33P_up {
        displayName = "HGU-33/P (VF84/visor up)";
    };

    class FIR_HGU56P_Skull: H_CrewHelmetHeli_B {
        displayName = "Heli Crew Helmet (US/Skull)";
    };
    class FIR_HGU56P_Skull_Death: H_CrewHelmetHeli_B {
        displayName = "Heli Crew Helmet (US/Skull- Meet the Death)";
    };

    class FIR_HGU84P_Black: FIR_HGU84P {
        displayName = "HGU-84/P (Black)";
    };
    class FIR_HGU84P_Custom_Example: FIR_HGU84P {
        displayName = "HGU-84/P (RISE UP!)";
    };
    class FIR_HGU84P_Green: FIR_HGU84P {
        displayName = "HGU-84/P (Green)";
    };
    class FIR_HGU84P_Marpat_D: FIR_HGU84P {
        displayName = "HGU-84/P (MARPAT D)";
    };
    class FIR_HGU84P_Marpat_W: FIR_HGU84P {
        displayName = "HGU-84/P (MARPAT WD)";
    };

    class FIR_ScorpionHMCS_Up: FIR_ScorpionHMCS {
        displayName = "Scorpion HMCS (visor up)";
    };
    class FIR_ScorpionHMCS_up_nomask: FIR_ScorpionHMCS {
        displayName = "Scorpion HMCS (visor up)";
    };
    class FIR_ScorpionHMCS_up_openmask: FIR_ScorpionHMCS {
        displayName = "Scorpion HMCS (visor up)";
    };

    class FIR_USHelmetType1_Navy: FIR_USHelmetType1 {
        displayName = "HGU-55/P / MBU-20/P (Navy)";
    };
    class FIR_USHelmetType1_Navy_nomask: H_PilotHelmetHeli_B {
        displayName = "HGU-55/P / MBU-20/P (Navy/no mask)";
    };
    class FIR_USHelmetType1_Navy_openmask: FIR_USHelmetType1_Navy {
        displayName = "HGU-55/P / MBU-20/P (Navy/open mask)";
    };

    class FIR_USHelmetType1_Agg_nomask: H_PilotHelmetHeli_B {
        displayName = "HGU-55/P / MBU-20/P (no mask)";
    };
    class FIR_USHelmetType1_Agg_openmask: FIR_USHelmetType1_Navy {
        displayName = "HGU-55/P / MBU-20/P (open mask)";
    };

    class FIR_USHelmetType1_nomask: H_PilotHelmetHeli_B {
        displayName = "HGU-55/P / MBU-20/P (no mask)";
    };
    class FIR_USHelmetType1_openmask: H_PilotHelmetHeli_B {
        displayName = "HGU-55/P / MBU-20/P (open mask)";
    };

    class FIR_USHelmetType1_USMC: FIR_USHelmetType1 {
        displayName = "HGU-55/P / MBU-20/P (MARPAT D)";
    };
    class FIR_USHelmetType1_USMC_nomask: FIR_USHelmetType1_USMC {
        displayName = "HGU-55/P / MBU-20/P (MARPAT D/no mask)";
    };
    class FIR_USHelmetType1_USMC_openmask: FIR_USHelmetType1_USMC {
        displayName = "HGU-55/P / MBU-20/P (MARPAT D/open mask)";
    };

    class FIR_USHelmetType1_VF31: FIR_USHelmetType1_Navy {
        displayName = "HGU-55/P / MBU-20/P (VF31)";
    };
    class FIR_USHelmetType1_VF31_nomask: FIR_USHelmetType1_VF31 {
        displayName = "HGU-55/P / MBU-20/P (VF31/no mask)";
    };
    class FIR_USHelmetType1_VF31_openmask: FIR_USHelmetType1_VF31 {
        displayName = "HGU-55/P / MBU-20/P (VF31/open mask)";
    };

    class FIR_USHelmetType2_nomask: FIR_USHelmetType2 {
        displayName = "HGU-55/P / MBU-12/P (no mask)";
    };
    class FIR_USHelmetType2_openmask: FIR_USHelmetType2 {
        displayName = "HGU-55/P / MBU-12/P (open mask)";
    };

    class FIR_USHelmetType2_Navy: FIR_USHelmetType2 {
        displayName = "HGU-55/P / MBU-12/P (Navy)";
    };
    class FIR_USHelmetType2_Navy_nomask: FIR_USHelmetType2_nomask {
        displayName = "HGU-55/P / MBU-12/P (Navy/no mask)";
    };
    class FIR_USHelmetType2_Navy_openmask: FIR_USHelmetType2_openmask {
        displayName = "HGU-55/P / MBU-12/P (Navy/open mask)";
    };

    class FIR_USHelmetType2_USAF_80s: FIR_USHelmetType2 {
        displayName = "HGU-55/P / MBU-12/P (USAF/80-90s)";
    };
    class FIR_USHelmetType2_USAF_80s_nomask: FIR_USHelmetType2_nomask {
        displayName = "HGU-55/P / MBU-12/P (USAF/80-90s/no mask)";
    };
    class FIR_USHelmetType2_USAF_80s_openmask: FIR_USHelmetType2_openmask {
        displayName = "HGU-55/P / MBU-12/P (USAF/80-90s/open mask)";
    };

    class FIR_USHelmetType2_USMC: FIR_USHelmetType2 {
        displayName = "HGU-55/P / MBU-12/P (MARPAT D)";
    };
    class FIR_USHelmetType2_USMC_nomask: FIR_USHelmetType2_nomask {
        displayName = "HGU-55/P / MBU-12/P (MARPAT D/no mask)";
    };
    class FIR_USHelmetType2_USMC_openmask: FIR_USHelmetType2_openmask {
        displayName = "HGU-55/P / MBU-12/P (MARPAT D/open mask)";
    };

    class FIR_USHelmetType2_VF103: FIR_USHelmetType2_Navy {
        displayName = "HGU-55/P / MBU-12/P (VF103)";
    };
    class FIR_USHelmetType2_VF103_nomask: FIR_USHelmetType2_Navy_nomask {
        displayName = "HGU-55/P / MBU-12/P (VF103/no mask)";
    };
    class FIR_USHelmetType2_VF103_openmask: FIR_USHelmetType2_Navy_openmask {
        displayName = "HGU-55/P / MBU-12/P (VF103/open mask)";
    };

    class FIR_USHelmetType2_VF154: FIR_USHelmetType2_Navy {
        displayName = "HGU-55/P / MBU-12/P (VF154)";
    };
    class FIR_USHelmetType2_VF154_nomask: FIR_USHelmetType2_Navy_nomask {
        displayName = "HGU-55/P / MBU-12/P (VF154/no mask)";
    };
    class FIR_USHelmetType2_VF154_openmask: FIR_USHelmetType2_Navy_openmask {
        displayName = "HGU-55/P / MBU-12/P (VF154/open mask)";
    };

    class FIR_USARMY_Heli_Uniform: U_B_PilotCoveralls {
        displayName = "US ARMY Helicopter Crew Uniform (UCP)";
    };
    class FIR_USARMY_Heli_Uniform_Multicam: U_B_PilotCoveralls {
        displayName = "US ARMY Helicopter Crew Uniform (Multicam)";
    };

    class fir_usarmy_pilot_multicam_vest: Vest_Camo_Base {
        displayName = "US ARMY Helicopter Crew Vest (Multicam)";
    };
    class fir_usarmy_pilot_vest: Vest_Camo_Base {
        displayName = "US ARMY Helicopter Crew Vest (UCP)";
    };

    class FIR_SaftyVest_Yellow: Vest_Camo_Base {
        displayName = "Ground Crew Safety Vest (Yellow)";
    };
    class FIR_SaftyVest_Orange: FIR_SaftyVest_Yellow {
        displayName = "Ground Crew Safety Vest (Orange)";
    };

    class FIR_GroundCrew_ABU_Shirt: Uniform_Base {
        displayName = "USAF Ground Crew ABU/TShirt";
    };
    class FIR_GroundCrew_OCP_Shirt: FIR_GroundCrew_ABU_Shirt {
        displayName = "USAF Ground Crew OCP/TShirt";
    };

    class FIR_GroundCrew_ABU_Uniform: Uniform_Base {
        displayName = "USAF Ground Crew ABU Uniform";
    };
    class FIR_GroundCrew_OCP_Uniform: FIR_GroundCrew_ABU_Uniform {
        displayName = "USAF Ground Crew OCP Uniform";
    };

    class FIR_GroundCrew_JASDF_Uniform: Uniform_Base {
        displayName = "JASDF Ground Crew Uniform/TShirt";
    };

    class FIR_GroundCrew_ROKAF_Uniform: Uniform_Base {
        displayName = "ROKAF Ground Crew Uniform";
    };
};
