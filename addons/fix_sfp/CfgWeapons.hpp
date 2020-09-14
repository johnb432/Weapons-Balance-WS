class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class Pistol_Base_F;
    class hgun_P07_F;
    class launch_RPG32_F;
    class sfp_ak4;
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };
    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };

    class sfp_kpistm45_base: Rifle_Base_F  {
        class WeaponSlotsInfo {
            mass = 75;
        };
    };

    class sfp_flashlight: hgun_P07_F  {
        modes[] = {"this"};
        class WeaponSlotsInfo {
            mass = 20;
            allowedSlots[] = {701,801,901};
        };
    };
    class sfp_imgint_1010 : sfp_flashlight  {
        class WeaponSlotsInfo {
            mass = 20;
            allowedSlots[] = {701,801,901};
        };
    };

    class sfp_ak4_base: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_G3_L"};
        class WeaponSlotsInfo {};
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"g3_Shot_SoundSet", "g3_Tail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"g3_Shot_SoundSet", "g3_Tail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet"};
            };
        };
    };

    class sfp_ak5_base: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"nia_sg550_Shot_SoundSet", "nia_sg550_Tail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"nia_sg550_silencerShot_SoundSet", "nia_sg550_silencerTail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"nia_sg550_Shot_SoundSet", "nia_sg550_Tail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"nia_sg550_silencerShot_SoundSet", "nia_sg550_silencerTail_SoundSet"};
            };
        };
    };

    class sfp_cbj_ms_base : Rifle_Base_F {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"RHSGREF_scorp_Shot_SoundSet", "RHSGREF_pistol1_Tail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"SMGVermin_silencerShot_SoundSet", "SMGVermin_silencerTail_SoundSet", "SMGVermin_silencerInteriorTail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"RHSGREF_scorp_Shot_SoundSet", "RHSGREF_pistol1_Tail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"SMGVermin_silencerShot_SoundSet", "SMGVermin_silencerTail_SoundSet", "SMGVermin_silencerInteriorTail_SoundSet"};
            };
        };
    };

    class sfp_mp5_base: Rifle_Base_F {
        class WeaponSlotsInfo {};
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"mp5_Shot_SoundSet", "mp5_tail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"mp5_Shot_SoundSet", "mp5_tail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet"};
            };
        };
    };

    class sfp_ksp58: Rifle_Long_Base_F {
        UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 260;
        };
        class manual: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"RHSUSF_m240_Shot_SoundSet", "RHSUSF_rifle_med_Tail_SoundSet", "RHSUSF_m240_stereoLayer_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"RHSUSF_sd_M240_Shot_SoundSet", "RHSUSF_sd_mmg1_Tail_SoundSet"};
            };
        };
    };
    class sfp_ksp58B2: sfp_ksp58 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 262;
        };
    };

    class sfp_ksp90b: Rifle_Long_Base_F {
        UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 157.5;
        };
        class manual: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"RHSUSF_m249_Closure_SoundSet", "RHSUSF_m249_Shot_SoundSet", "RHSUSF_rifle1_Tail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"RHSUSF_m249_Closure_SoundSet", "RHSUSF_m249_ShotSD_SoundSet", "RHSUSF_rifle1_SD_Tail_SoundSet"};
            };
        };
    };
    class sfp_ksp90c: sfp_ksp90b {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 161.5;
        };
    };

    class sfp_p88: Pistol_Base_F {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"P07_Shot_SoundSet", "P07_Tail_SoundSet", "P07_InteriorTail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"P07_silencerShot_SoundSet", "P07_silencerTail_SoundSet", "P07_InteriorTail_SoundSet"};
            };
        };
    };

    class sfp_remington870_base: Rifle_Base_F {
        reloadAction = "RHS_GestureReloadM590";
        reloadSound[] = {"A3\sounds_f\weapons\M320\M320_reload",0.1,1,30};
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                delete soundBegin;
                soundSetShot[] = {"RHSUSF_m590_Shot_SoundSet", "RHSUSF_MMG1_Tail_SoundSet"};
            };
        };
    };

    class sfp_ak4b: sfp_ak4 {
        discreteDistanceCameraPoint[] = {"eye_100"};
        class WeaponSlotsInfo {
            mass = 96;
        };
    };
    class sfp_ak4_m203: sfp_ak4 {
        class WeaponSlotsInfo {
            mass = 127;
        };
    };
    class sfp_ak4b_m203: sfp_ak4_m203 {
        discreteDistanceCameraPoint[] = {"eye_100"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 129;
        };
    };
    class sfp_ak4c: sfp_ak4b {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 96;
        };
    };
    class sfp_ak4d: sfp_ak4c {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 98;
        };
    };

    class sfp_ak5b: sfp_ak5_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 105.8;
        };
    };
    class sfp_ak5: sfp_ak5b {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class sfp_ak5_m203: sfp_ak5 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 119;
        };
    };
    class sfp_ak5c: sfp_ak5_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class sfp_ak5c_alt: sfp_ak5c {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 85;
        };
    };
    class sfp_ak5c_blk: sfp_ak5c_alt {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 85;
        };
    };

    class sfp_cbj_ms: sfp_cbj_ms_base {
        scope = 0;
    };
    class sfp_cbj_ms_aimpoint: sfp_cbj_ms_base {
        scope = 0;
    };
    class sfp_cbj_ms_aimpoint_sd: sfp_cbj_ms_base {
        scope = 0;
    };

    class sfp_g36c_base: Rifle_Base_F {
        class WeaponSlotsInfo {};
    };
    class sfp_g36c: sfp_g36c_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 65.7;
        };
    };

    class sfp_mp5: sfp_mp5_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 62.8;
        };
    };
    class sfp_mp5_rail: sfp_mp5_base {
        displayName = "MP5 (Rail)";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 63.8;
        };
    };

    class sfp_psg90_base: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 151.8;
        };
    };
    class sfp_psg90_camo: sfp_psg90_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 151.8;
        };
    };

    class sfp_pskott68: launch_RPG32_F {
        magazineWell[] = {""};
    };
    class sfp_pskott86: launch_RPG32_F {
        magazineWell[] = {""};
    };
};
