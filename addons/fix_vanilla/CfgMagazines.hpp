class CfgMagazines {
    class CA_Magazine;
    class 10Rnd_762x51_Mag;
    class 30Rnd_9x21_Mag;
    class 30Rnd_762x39_Mag_F;
    class 30Rnd_65x39_caseless_mag;

    class 2Rnd_12Gauge_Pellets: CA_Magazine {
        mass = 2.2;
    };
    class 2Rnd_12Gauge_Slug: 2Rnd_12Gauge_Pellets {
        mass = 2.2;
    };

    class 6Rnd_12Gauge_Pellets: 2Rnd_12Gauge_Pellets {
        mass = 6.6;
    };
    class 6Rnd_12Gauge_Slug: 2Rnd_12Gauge_Pellets {
        mass = 6.6;
    };

    class 10Rnd_762x54_Mag: 10Rnd_762x51_Mag {
        mass = 5.1;
    };

    class 150Rnd_556x45_Drum_Mag_F: CA_Magazine {
        mass = 42;
    };
    class 150Rnd_556x45_Drum_Green_Mag_F: 150Rnd_556x45_Drum_Mag_F {
        mass = 42;
    };
    class 150Rnd_556x45_Drum_Green_Mag_Tracer_F: 150Rnd_556x45_Drum_Green_Mag_F {
        mass = 42;
    };
    class 150Rnd_556x45_Drum_Mag_Tracer_F: 150Rnd_556x45_Drum_Mag_F {
        mass = 42;
    };
    class 150Rnd_556x45_Drum_Sand_Mag_F: 150Rnd_556x45_Drum_Mag_F {
        mass = 42;
    };
    class 150Rnd_556x45_Drum_Sand_Mag_Tracer_F: 150Rnd_556x45_Drum_Sand_Mag_F {
        mass = 42;
    };

    class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag {
        descriptionShort = "Caliber: .45 ACP<br />Rounds: 25<br />Used in: Vermin SMG";
        displayName = ".45 ACP 25Rnd Vermin Mag";
    };
    class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_45ACP_Mag_SMG_01 {
        descriptionShort = "Caliber: .45 ACP Tracers - Green<br />Rounds: 25<br />Used in: Vermin SMG";
        displayName = ".45 ACP 25Rnd Vermin Tracers (Green) Mag";
    };
    class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red: 30Rnd_45ACP_Mag_SMG_01 {
        descriptionShort = "Caliber: .45 ACP Tracers - Red<br />Rounds: 25<br />Used in: Vermin SMG";
        displayName = ".45 ACP 25Rnd Vermin Tracers (Red) Mag";
    };
    class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow: 30Rnd_45ACP_Mag_SMG_01 {
        descriptionShort = "Caliber: .45 ACP Tracers - Yellow<br />Rounds: 25<br />Used in: Vermin SMG";
        displayName = ".45 ACP 25Rnd Vermin Tracers (Yellow) Mag";
    };

    class 30Rnd_9x21_Mag_SMG_02: 30Rnd_9x21_Mag {
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        modelSpecial = "hlc_wp_mp5\mesh\magazine\proxy\30Rnd_9x19_MP5";
        modelSpecialIsProxy = 1;
    };
    class 30Rnd_9x21_Mag_SMG_02_Tracer_Green: 30Rnd_9x21_Mag_SMG_02 {
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        modelSpecial = "hlc_wp_mp5\mesh\magazine\proxy\30Rnd_9x19_MP5";
        modelSpecialIsProxy = 1;
    };
    class 30Rnd_9x21_Mag_SMG_02_Tracer_Red: 30Rnd_9x21_Mag_SMG_02 {
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        modelSpecial = "hlc_wp_mp5\mesh\magazine\proxy\30Rnd_9x19_MP5";
        modelSpecialIsProxy = 1;
    };
    class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow: 30Rnd_9x21_Mag_SMG_02 {
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        modelSpecial = "hlc_wp_mp5\mesh\magazine\proxy\30Rnd_9x19_MP5";
        modelSpecialIsProxy = 1;
    };

    class 150Rnd_762x51_Box: CA_Magazine {
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };
    class 150Rnd_762x51_Box_Tracer: 150Rnd_762x51_Box {
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };

    class 200Rnd_556x45_Box_F: CA_Magazine {
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
        modelSpecialIsProxy = 1;
    };
    class 200Rnd_556x45_Box_Red_F: 200Rnd_556x45_Box_F {
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
        modelSpecialIsProxy = 1;
    };
    class 200Rnd_556x45_Box_Tracer_F: 200Rnd_556x45_Box_F {
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
        modelSpecialIsProxy = 1;
    };
    class 200Rnd_556x45_Box_Tracer_Red_F: 200Rnd_556x45_Box_Tracer_F {
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
        modelSpecialIsProxy = 1;
    };

    class 30Rnd_762x39_AK12_Mag_F: 30Rnd_762x39_Mag_F {
        descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: RPK, AK-15, AK-15 GL, AKM";
        displayName = "7.62 mm 30rnd AK-15 Mag";
    };
    class 30rnd_762x39_AK12_Arid_Mag_F: 30Rnd_762x39_AK12_Mag_F {
        displayName = "7.62 mm 30rnd AK-15 Sand Mag";
    };
    class 30rnd_762x39_AK12_Lush_Mag_F: 30Rnd_762x39_AK12_Mag_F {
        displayName = "7.62 mm 30rnd AK-15 Khaki Mag";
    };
    class 30Rnd_762x39_AK12_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_F {
        displayName = "7.62 mm 30rnd AK-15 Tracer Mag";
    };
    class 30rnd_762x39_AK12_Arid_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_Tracer_F {
        displayName = "7.62 mm 30rnd AK-15 Tracer Sand Mag";
    };
    class 30rnd_762x39_AK12_Lush_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_Tracer_F {
        displayName = "7.62 mm 30rnd AK-15 Tracer Khaki Mag";
    };

    class 75rnd_762x39_AK12_Mag_F: 30Rnd_762x39_AK12_Mag_F {
        descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 75<br />Used in: RPK, AK-15, AK-15 GL, AKM";
        displayName = "7.62 mm 75rnd AK-15 Mag";
    };
    class 75rnd_762x39_AK12_Arid_Mag_F: 75rnd_762x39_AK12_Mag_F {
        displayName = "7.62 mm 75rnd AK-15 Arid Mag";
    };
    class 75rnd_762x39_AK12_Lush_Mag_F: 75rnd_762x39_AK12_Mag_F {
        displayName = "7.62 mm 75rnd AK-15 Lush Mag";
    };
    class 75rnd_762x39_AK12_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_F {
        displayName = "7.62 mm 75rnd AK-15 Tracer Mag";
    };
    class 75rnd_762x39_AK12_Arid_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_Tracer_F {
        displayName = "7.62 mm 75rnd AK-15 Tracer Arid Mag";
    };
    class 75rnd_762x39_AK12_Lush_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_Tracer_F {
        displayName = "7.62 mm 75rnd AK-15 Tracer Lush Mag";
    };

    class 30Rnd_65x39_caseless_msbs_mag: 30Rnd_65x39_caseless_mag {
        displayName = "6.5 mm 30Rnd MSBS Mag";
    };
    class 30Rnd_65x39_caseless_msbs_mag_Tracer: 30Rnd_65x39_caseless_msbs_mag {
        displayName = "6.5 mm 30Rnd MSBS Tracer Mag";
    };

    class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag {
        count = 16;
    };
};
