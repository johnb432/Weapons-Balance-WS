class hlc_MP5_base: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_smg_mp5a2: hlc_MP5_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 63.8;
    };
};
class hlc_smg_mp5a2_tac: hlc_smg_mp5a2 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 64.8;
    };
};
class hlc_smg_mp5a3: hlc_smg_mp5a2 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.3;
    };
};
class hlc_smg_mp5a3_tac: hlc_smg_mp5a2 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 69.3;
    };
};
class hlc_smg_mp5a4: hlc_MP5_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 63.8;
    };
};
class hlc_smg_mp5a4_tac: hlc_smg_mp5a4 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 64.8;
    };
};
class hlc_smg_MP5N: hlc_MP5_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.3;
    };
};
class hlc_smg_mp5N_tac: hlc_smg_MP5N {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 69.3;
    };
};
class hlc_smg_mp5k_PDW: hlc_MP5_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 56;
    };
};
class hlc_smg_mp5k: hlc_smg_mp5k_PDW {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 44;
    };
};
class hlc_smg_mp5sd5: hlc_MP5_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70.5;
    };
};
class hlc_smg_mp5sd6: hlc_smg_mp5sd5 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 75;
    };
};
class hlc_smg_mp510: hlc_smg_MP5N {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 64.4;
    };
};
class hlc_mp510_tac: hlc_smg_mp510 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 65.4;
    };
};

class hlc_smg_9mmar : hlc_smg_MP5N {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 98.3;
    };
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
    class Burst: Mode_Burst {
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
