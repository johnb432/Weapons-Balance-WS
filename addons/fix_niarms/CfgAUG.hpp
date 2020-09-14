class hlc_aug_base: Rifle_Base_F {
    modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
    class Single: Mode_SemiAuto {
        showToPlayer = 1;
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_aug: hlc_aug_base {
    modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
    class Single: Single {
        showToPlayer = 1;
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_auga1_b: hlc_rifle_aug {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga1_b","hlc_rifle_auga1carb_B","hlc_rifle_aughbar_B","hlc_rifle_augpara_b"};
    modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
};
class hlc_rifle_auga1carb: hlc_rifle_aug {
    modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
    class Single: Single {
        showToPlayer = 1;
    };
};
class hlc_rifle_auga1carb_B: hlc_rifle_auga1carb {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga1_b","hlc_rifle_auga1carb_B","hlc_rifle_aughbar_B","hlc_rifle_augpara_b"};
    modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
};
class hlc_rifle_auga1carb_t: hlc_rifle_auga1carb {
    modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
};

class hlc_rifle_aughbar: hlc_rifle_aug {
    modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
    class Single: Single {
        showToPlayer = 1;
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class hlc_rifle_aughbar_B: hlc_rifle_aughbar {
    HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga1_b","hlc_rifle_auga1carb_B","hlc_rifle_aughbar_B","hlc_rifle_augpara_b"};
    modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
};
class hlc_rifle_aughbar_t: hlc_rifle_aughbar {
    modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
};
class hlc_rifle_auga2lsw: hlc_rifle_aughbar {
    modes[] = {"Single","FullAuto","close","short","medium","far_optic1","far_optic2"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
};
class hlc_rifle_auga2lsw_b: hlc_rifle_auga2lsw {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
};
class hlc_rifle_auga2lsw_t: hlc_rifle_auga2lsw {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
};
class hlc_rifle_augsrhbar: hlc_rifle_auga2lsw {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
};
class hlc_rifle_augsrhbar_b: hlc_rifle_augsrhbar {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
};
class hlc_rifle_augsrhbar_t: hlc_rifle_augsrhbar {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
};

class hlc_rifle_augpara: hlc_rifle_aug {
    modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
    class Single: Single {
        showToPlayer = 1;
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};
class hlc_rifle_augpara_b: hlc_rifle_augpara {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};
class hlc_rifle_augpara_t: hlc_rifle_augpara {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};

class hlc_rifle_auga2: hlc_rifle_aug {
    modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
    class Single: Single {
        showToPlayer = 1;
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 79;
    };
};
class hlc_rifle_auga2_b: hlc_rifle_auga2 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 79;
    };
};
class hlc_rifle_auga2_t: hlc_rifle_auga2 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 79;
    };
};
class hlc_rifle_augsr: hlc_rifle_auga2 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 79;
    };
};
class hlc_rifle_augsr_b: hlc_rifle_augsr {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 79;
    };
};
class hlc_rifle_augsr_t: hlc_rifle_augsr {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 79;
    };
};
class hlc_rifle_auga2carb: hlc_rifle_aug {
    modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
    class Single: Single {
        showToPlayer = 1;
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72;
    };
};
class hlc_rifle_auga2carb_b: hlc_rifle_auga2carb {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72;
    };
};
class hlc_rifle_auga2carb_t: hlc_rifle_auga2carb {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72;
    };
};
class hlc_rifle_augsrcarb: hlc_rifle_auga2carb {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72;
    };
};
class hlc_rifle_augsrcarb_b: hlc_rifle_augsrcarb {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72;
    };
};
class hlc_rifle_augsrcarb_t: hlc_rifle_augsrcarb {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72;
    };
};

class hlc_rifle_auga2para: hlc_rifle_aug {
    modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
    class Single: Single {
        showToPlayer = 1;
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};
class hlc_rifle_auga2para_b: hlc_rifle_auga2para {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};
class hlc_rifle_auga2para_t: hlc_rifle_auga2para {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};

class hlc_rifle_auga3: hlc_rifle_aug {
    modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
    class Single: Single {
        showToPlayer = 1;
    };
};
class hlc_rifle_auga3_GL: hlc_rifle_auga3 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 114;
    };
};
class hlc_rifle_auga3_GL_B: hlc_rifle_auga3_GL {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 114;
    };
};
class hlc_rifle_auga3_GL_BL: hlc_rifle_auga3_GL {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 114;
    };
};
