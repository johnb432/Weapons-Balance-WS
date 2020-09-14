class CfgMagazines {
    class CA_Magazine;
    class 20Rnd_762x51_Mag;
    class 150Rnd_762x51_Box;
    class 150Rnd_762x51_Box_Tracer;
    class 30Rnd_9x21_Mag;
    class 100Rnd_127x99_mag;
    class 100Rnd_127x99_mag_Tracer_Red;
    class UK3CB_BAF_556_30Rnd;
    class UK3CB_BAF_556_30Rnd_Blank;
    class UK3CB_BAF_556_30Rnd_T;

    class UK3CB_BAF_762_L42A1_20Rnd: 20Rnd_762x51_Mag {
       mass = 16.24;
    };
    class UK3CB_BAF_762_L42A1_20Rnd_Blank: UK3CB_BAF_762_L42A1_20Rnd {
        mass = 16.24;
    };
    class UK3CB_BAF_762_L42A1_20Rnd_T: 20Rnd_762x51_Mag {
        mass = 16.24;
    };

    class UK3CB_BAF_762_L42A1_10Rnd: UK3CB_BAF_762_L42A1_20Rnd {
       mass = 8.9;
    };
    class UK3CB_BAF_762_L42A1_10Rnd_Blank: UK3CB_BAF_762_L42A1_20Rnd_Blank {
        mass = 8.9;
    };
    class UK3CB_BAF_762_L42A1_10Rnd_T: UK3CB_BAF_762_L42A1_20Rnd_T {
        mass = 8.9;
    };

    class UK3CB_BAF_762_20Rnd: UK3CB_BAF_762_L42A1_20Rnd {
        mass = 16.24;
    };
    class UK3CB_BAF_762_20Rnd_Blank: UK3CB_BAF_762_L42A1_20Rnd_Blank {
        mass = 16.24;
    };
    class UK3CB_BAF_762_20Rnd_T: UK3CB_BAF_762_L42A1_20Rnd_T {
        mass = 16.24;
    };

    class UK3CB_BAF_762_100Rnd: 150Rnd_762x51_Box {
        mass = 34;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };
    class UK3CB_BAF_762_100Rnd_Blank: UK3CB_BAF_762_100Rnd {
        mass = 34;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };
    class UK3CB_BAF_762_100Rnd_T: 150Rnd_762x51_Box_Tracer {
        mass = 34;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };

    class UK3CB_BAF_762_200Rnd_Blank: UK3CB_BAF_762_100Rnd_Blank {
        mass = 62;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };
    class UK3CB_BAF_762_200Rnd: UK3CB_BAF_762_100Rnd {
        mass = 62;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };
    class UK3CB_BAF_762_200Rnd_T: UK3CB_BAF_762_100Rnd_T {
        mass = 62;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };

    class UK3CB_BAF_556_100Rnd_Blank: UK3CB_BAF_556_30Rnd_Blank {
        mass = 27;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
    };
    class UK3CB_BAF_556_100Rnd: UK3CB_BAF_556_30Rnd {
        mass = 27;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
    };
    class UK3CB_BAF_556_100Rnd_T: UK3CB_BAF_556_30Rnd_T {
        mass = 27;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
    };

    class UK3CB_BAF_556_200Rnd_Blank: UK3CB_BAF_556_100Rnd_Blank {
        mass = 52;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
    };
    class UK3CB_BAF_556_200Rnd: UK3CB_BAF_556_100Rnd {
        mass = 52;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
    };
    class UK3CB_BAF_556_200Rnd_T: UK3CB_BAF_556_100Rnd_T {
        mass = 52;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
    };

    class UK3CB_BAF_9_30Rnd: 30Rnd_9x21_Mag {
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        modelSpecial = "hlc_wp_mp5\mesh\magazine\proxy\30Rnd_9x19_MP5";
        modelSpecialIsProxy = 1;
    };

    class UK3CB_BAF_12G_Pellets: CA_Magazine {
        displayname = "12 Gauge 8Rnd Buckshot";
        mass = 8.8;
    };
    class UK3CB_BAF_12G_Slugs: UK3CB_BAF_12G_Pellets {
        displayname = "12 Gauge 8Rnd Slug";
        mass = 8.8;
    };

    class UK3CB_BAF_127_10Rnd: 100Rnd_127x99_mag {
        mass = 28;
        type = 256;
    };
    class UK3CB_BAF_127_10Rnd_AP: UK3CB_BAF_127_10Rnd {
        mass = 28;
        type = 256;
    };

    class UK3CB_BAF_127_100Rnd: 100Rnd_127x99_mag_Tracer_Red {
        mass = 96;
        type = 256;
    };
};
