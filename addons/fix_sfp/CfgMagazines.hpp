class CfgMagazines {
    class CA_Magazine;
    class 150Rnd_762x51_Box;
    class 30Rnd_9x21_Mag;
    class 30Rnd_556x45_Stanag;
    class 200Rnd_556x45_Box_Red_F;

    class sfp_50Rnd_762x51_ksp58: 150Rnd_762x51_Box {
        mass = 26.5;
    };
    class sfp_50Rnd_762x51_ksp58_ap: sfp_50Rnd_762x51_ksp58 {
        mass = 26.5;
    };
    class sfp_50Rnd_762x51_ksp58_irTracer: sfp_50Rnd_762x51_ksp58 {
        mass = 26.5;
    };
    class sfp_100Rnd_762x51_ksp58: sfp_50Rnd_762x51_ksp58 {
        mass = 34;
    };
    class sfp_249Rnd_762x51_ksp58: sfp_50Rnd_762x51_ksp58 {
        mass = 72;
    };

    class sfp_30Rnd_9mm_mp5: 30Rnd_9x21_Mag {
        mass = 10;
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        modelSpecial = "hlc_wp_mp5\mesh\magazine\proxy\30Rnd_9x19_MP5";
        modelSpecialIsProxy = 1;
    };
    class sfp_30Rnd_9mm_mp5_JHP: 30Rnd_9x21_Mag {
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        modelSpecial = "hlc_wp_mp5\mesh\magazine\proxy\30Rnd_9x19_MP5";
        modelSpecialIsProxy = 1;
    };

    class sfp_200Rnd_556x45_ksp90: 200Rnd_556x45_Box_Red_F {
        mass = 52;
    };
    class sfp_200Rnd_556x45_ksp90_irtracer: sfp_200Rnd_556x45_ksp90 {
        mass = 52;
    };

    class sfp_30Rnd_556x45_Stanag: 30Rnd_556x45_Stanag {
        mass = 9.3;
    };
    class sfp_30Rnd_556x45_Stanag_irtracer: sfp_30Rnd_556x45_Stanag {
        mass = 9.3;
    };
    class sfp_30Rnd_556x45_Stanag_irtracer_plastic: sfp_30Rnd_556x45_Stanag_irtracer {
        mass = 9.3;
    };
    class sfp_30Rnd_556x45_Stanag_plastic: sfp_30Rnd_556x45_Stanag {
        mass = 9.3;
    };
    class sfp_30Rnd_556x45_Stanag_tracer: sfp_30Rnd_556x45_Stanag {
        mass = 9.3;
    };
    class sfp_30Rnd_556x45_Stanag_tracer_plastic: sfp_30Rnd_556x45_Stanag_tracer {
        mass = 9.3;
    };

    class sfp_30Rnd_556x45_Stanag_g36: sfp_30Rnd_556x45_Stanag {
        mass = 8;
    };

    class sfp_20Rnd_762x51_ak4: CA_Magazine {
        mass = 16.24;
    };
    class sfp_20Rnd_762x51_ak4_ap: sfp_20Rnd_762x51_ak4 {
        mass = 16.24;
    };
    class sfp_20Rnd_762x51_ak4_irtracer: sfp_20Rnd_762x51_ak4 {
        mass = 16.24;
    };
    class sfp_20Rnd_762x51_ak4_tracer: sfp_20Rnd_762x51_ak4 {
        mass = 16.24;
    };

    class sfp_riflegrenade_smoke_ak4: sfp_20Rnd_762x51_ak4 {
        mass = 8;
    };

    class sfp_12Gauge_8rd_Slug: 30Rnd_556x45_Stanag {
        displayname = "12G 8Rnd Buckshot";
        mass = 8.8;
        modelSpecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_slug_1rnd.p3d";
    };
    class sfp_12Gauge_8rd_Pellets: 30Rnd_556x45_Stanag {
        displayname = "12G 8Rnd Slug";
        mass = 8.8;
        modelSpecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_buckshot_1rnd.p3d";
    };
};
