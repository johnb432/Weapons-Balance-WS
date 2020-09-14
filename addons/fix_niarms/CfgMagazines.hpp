class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_30rnd_556x45_EPR;
    class hlc_20Rnd_762x51_B_M14;
    class hlc_20rnd_762x51_b_G3;
    class hlc_50Rnd_45ACP_B_1921;

    class hlc_50rnd_556x45_EPR: hlc_30rnd_556x45_EPR {
        mass = 22.5;
    };
    class hlc_50rnd_556x45_M: hlc_50rnd_556x45_EPR {
        mass = 22.5;
    };
    class hlc_50rnd_556x45_MDim: hlc_50rnd_556x45_EPR {
        mass = 22.5;
    };
    class hlc_50rnd_556x45_SOST: hlc_50rnd_556x45_EPR {
        mass = 22.5;
    };
    class hlc_50rnd_556x45_SPR: hlc_50rnd_556x45_EPR {
        mass = 22.5;
    };

    class hlc_5rnd_3006_1903: 30Rnd_556x45_Stanag {
        mass = 3;
    };
    class hlc_5rnd_3006_T_1903: hlc_5rnd_3006_1903 {
        ammo = "HLC_3006_T";
        mass = 3;
    };

    class 29rnd_300BLK_STANAG: 30Rnd_556x45_Stanag {
        mass = 10;
    };
    class 29rnd_300BLK_STANAG_S: 29rnd_300BLK_STANAG {
        mass = 10;
    };
    class 29rnd_300BLK_STANAG_T: 29rnd_300BLK_STANAG {
        mass = 10;
    };

    class hlc_50rnd_300BLK_STANAG_EPR: 29rnd_300BLK_STANAG {
        mass = 25;
    };

    class hlc_50Rnd_762x51_B_fal: 30Rnd_556x45_Stanag {
        mass = 30;
    };
    class hlc_50rnd_762x51_MDIM_FAL: hlc_50Rnd_762x51_B_fal {
        mass = 30;
    };
    class hlc_50rnd_762x51_M_FAL: hlc_50Rnd_762x51_B_fal {
        mass = 30;
    };
    class hlc_50Rnd_762x51_T_fal: hlc_50Rnd_762x51_B_fal {
        mass = 30;
    };
    class hlc_50Rnd_762x51_TDim_fal: hlc_50Rnd_762x51_B_fal {
        mass = 30;
    };

    class hlc_50Rnd_762x51_B_G3: 30Rnd_556x45_Stanag {
        mass = 30;
    };
    class hlc_50Rnd_762x51_T_G3: hlc_50Rnd_762x51_B_G3 {
        mass = 30;
    };
    class hlc_50Rnd_762x51_TDim_G3: hlc_50Rnd_762x51_B_G3 {
        mass = 30;
    };
    class hlc_50rnd_762x51_M_G3: hlc_20rnd_762x51_b_G3 {
        mass = 30;
    };
    class hlc_50rnd_762x51_MDIM_G3: hlc_20rnd_762x51_b_G3 {
        mass = 30;
    };

    class hlc_50Rnd_762x51_B_M14: hlc_20Rnd_762x51_B_M14 {
        mass = 30;
    };
    class hlc_50Rnd_762x51_M_M14: hlc_20Rnd_762x51_B_M14 {
        mass = 30;
    };
    class hlc_50Rnd_762x51_MDIM_M14: hlc_20Rnd_762x51_B_M14 {
        mass = 30;
    };
    class hlc_50Rnd_762x51_T_M14: hlc_20Rnd_762x51_B_M14 {
        mass = 30;
    };
    class hlc_50Rnd_762x51_TDIM_M14: hlc_20Rnd_762x51_B_M14 {
        mass = 30;
    };

    class hlc_50Rnd_792x57_B_MG42: 30Rnd_556x45_Stanag {
        mass = 31;
    };
    class hlc_50Rnd_762x51_B_MG3: hlc_50Rnd_792x57_B_MG42 {
        mass = 26.5;
    };
    class hlc_50Rnd_762x51_Barrier_MG3: hlc_50Rnd_762x51_B_MG3 {
        mass = 26.5;
    };
    class hlc_50Rnd_762x51_M_MG3: hlc_50Rnd_762x51_B_MG3 {
        mass = 26.5;
    };
    class hlc_50Rnd_762x51_mdim_MG3: hlc_50Rnd_762x51_B_MG3 {
        mass = 26.5;
    };
    class hlc_50Rnd_762x51_T_MG3: hlc_50Rnd_762x51_B_MG3 {
        mass = 26.5;
    };

    class hlc_100Rnd_762x51_Barrier_MG3: hlc_50Rnd_762x51_Barrier_MG3 {
        mass = 34;
    };
    class hlc_100Rnd_762x51_B_MG3: hlc_50Rnd_762x51_B_MG3 {
        mass = 34;
    };
    class hlc_100Rnd_762x51_M_MG3: hlc_50Rnd_762x51_M_MG3 {
        mass = 34;
    };
    class hlc_100Rnd_762x51_mdim_MG3: hlc_50Rnd_762x51_mdim_MG3 {
        mass = 34;
    };
    class hlc_100Rnd_762x51_T_MG3: hlc_50Rnd_762x51_T_MG3 {
        mass = 34;
    };

    class hlc_250Rnd_762x51_B_MG3: hlc_50Rnd_762x51_B_MG3 {
        mass = 72;
    };
    class hlc_250Rnd_762x51_Barrier_MG3: hlc_50Rnd_762x51_Barrier_MG3 {
        mass = 72;
    };
    class hlc_250Rnd_762x51_M_MG3: hlc_50Rnd_762x51_M_MG3 {
        mass = 72;
    };
    class hlc_250Rnd_762x51_mdim_MG3: hlc_50Rnd_762x51_mdim_MG3 {
        mass = 72;
    };
    class hlc_250Rnd_762x51_T_MG3: hlc_50Rnd_762x51_T_MG3 {
        mass = 72;
    };

    class hlc_50Rnd_792x57_M_MG42: hlc_50Rnd_792x57_B_MG42 {
        mass = 31;
    };
    class hlc_50Rnd_792x57_T_MG42: hlc_50Rnd_792x57_B_MG42 {
        mass = 31;
    };
    class hlc_50Rnd_792x57_AP_MG42: hlc_50Rnd_792x57_B_MG42 {
        mass = 31;
    };
    class hlc_100Rnd_792x57_B_MG42: hlc_50Rnd_792x57_B_MG42 {
        mass = 48;
    };
    class hlc_100Rnd_792x57_M_MG42: hlc_50Rnd_792x57_M_MG42 {
        mass = 48;
    };
    class hlc_100Rnd_792x57_T_MG42: hlc_50Rnd_792x57_T_MG42 {
        mass = 48;
    };
    class hlc_200Rnd_792x57_AP_MG42: hlc_50Rnd_792x57_AP_MG42 {
        mass = 74;
    };
    class hlc_200Rnd_792x57_B_MG42: hlc_50Rnd_792x57_B_MG42 {
        mass = 74;
    };
    class hlc_200Rnd_792x57_M_MG42: hlc_50Rnd_792x57_M_MG42 {
        mass = 74;
    };
    class hlc_200Rnd_792x57_T_MG42: hlc_50Rnd_792x57_T_MG42 {
        mass = 74;
    };

    class hlc_30rnd_556x45_EPR_G36: 30Rnd_556x45_Stanag {
        mass = 8;
    };
    class hlc_30rnd_556x45_M_G36: 30Rnd_556x45_Stanag {
        mass = 8;
    };
    class hlc_30rnd_556x45_MDIM_G36: 30Rnd_556x45_Stanag {
        mass = 8;
    };
    class hlc_30rnd_556x45_S_G36: hlc_30rnd_556x45_EPR_G36 {
        mass = 8;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_s_ca.paa";
    };
    class hlc_30rnd_556x45_SOST_G36: 30Rnd_556x45_Stanag {
        mass = 8;
    };
    class hlc_30rnd_556x45_SPR_G36: 30Rnd_556x45_Stanag {
        mass = 8;
    };
    class hlc_30rnd_556x45_TDIM_G36: 30Rnd_556x45_Stanag {
        mass = 8;
    };
    class hlc_30rnd_556x45_Tracers_G36: 30Rnd_556x45_Stanag {
        mass = 8;
    };

    class hlc_100rnd_556x45_EPR_G36: 30Rnd_556x45_Stanag {
        mass = 35.2;
    };
    class hlc_100rnd_556x45_M_G36: 30Rnd_556x45_Stanag {
        mass = 35.2;
    };
    class hlc_100rnd_556x45_Mdim_G36: 30Rnd_556x45_Stanag {
        mass = 35.2;
    };

    class hlc_200rnd_556x45_M_SAW: 30Rnd_556x45_Stanag {
        mass = 52;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
    };
    class hlc_200rnd_556x45_B_SAW: hlc_200rnd_556x45_M_SAW {
        mass = 52;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
    };
    class hlc_200rnd_556x45_Mdim_SAW: hlc_200rnd_556x45_M_SAW {
        mass = 52;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
    };
    class hlc_200rnd_556x45_T_SAW: hlc_200rnd_556x45_M_SAW {
        mass = 52;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
    };

    class hlc_100Rnd_762x51_B_M60E4: 30Rnd_556x45_Stanag {
        mass = 34;
    };
    class hlc_100Rnd_762x51_M_M60E4: hlc_100Rnd_762x51_B_M60E4 {
        mass = 34;
    };
    class hlc_100Rnd_762x51_T_M60E4: hlc_100Rnd_762x51_B_M60E4 {
        mass = 34;
    };
    class hlc_100Rnd_762x51_Barrier_M60E4: hlc_100Rnd_762x51_B_M60E4 {
        displayName = "7.62mm SOST 100Rnd M13-linked belt (Tracers Every 4)";
        mass = 34;
    };

    class hlc_200Rnd_762x51_B_M60E4: 30Rnd_556x45_Stanag {
        mass = 62;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };
    class hlc_200Rnd_762x51_Barrier_M60E4: hlc_200Rnd_762x51_B_M60E4 {
        displayName = "7.62mm SOST 200Rnd M13-linked belt (Tracers Every 4)";
        mass = 62;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };
    class hlc_200Rnd_762x51_M_M60E4: hlc_200Rnd_762x51_B_M60E4 {
        mass = 62;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };
    class hlc_200Rnd_762x51_Mdim_M60E4: hlc_200Rnd_762x51_B_M60E4 {
        mass = 62;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };
    class hlc_200Rnd_762x51_T_M60E4: hlc_200Rnd_762x51_B_M60E4 {
        mass = 62;
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };

    class hlc_10rnd_12g_buck_S12: 30Rnd_556x45_Stanag {
        descriptionshort = "Caliber: 12 Gauge 00-Buck<br/>Type: Lead Pellets<br/>Rounds: 8";
        displayname = "12 Gauge Buckshot 8Rnd Saiga Magazine";
    };
    class hlc_10rnd_12g_slug_S12: 30Rnd_556x45_Stanag {
        descriptionshort = "Caliber: 12 Gauge Slug<br/>Type: Single-piece Lead Slug<br/>Rounds: 8";
        displayname = "12 Gauge Slug 8Rnd Saiga Magazine";
    };
    class hlc_12rnd_12g_buck_S12: hlc_10rnd_12g_buck_S12 {
        author = "Toadie, johnb43";
        count = 12;
        descriptionshort = "Caliber: 12 Gauge 00-Buck<br/>Type: Lead Pellets<br/>Rounds: 12";
        displayname = "12 Gauge Buckshot 12Rnd Saiga Magazine";
        mass = 16;
    };
    class hlc_12rnd_12g_slug_S12: hlc_10rnd_12g_slug_S12 {
        author = "Toadie, johnb43";
        count = 12;
        descriptionshort = "Caliber: 12 Gauge Slug<br/>Type: Single-piece Lead Slug<br/>Rounds: 12";
        displayname = "12 Gauge Slug 12Rnd Saiga Magazine";
        mass = 16;
    };

    class hlc_30Rnd_556x45_EPR_sg550: 30Rnd_556x45_Stanag {
        mass = 9.3;
    };
    class hlc_30rnd_556x45_M_sg550: 30Rnd_556x45_Stanag {
        mass = 9.3;
    };
    class hlc_30Rnd_556x45_MDIM_sg550: 30Rnd_556x45_Stanag {
        mass = 9.3;
    };
    class hlc_30Rnd_556x45_SOST_sg550: 30Rnd_556x45_Stanag {
        mass = 9.3;
    };
    class hlc_30Rnd_556x45_SPR_sg550: 30Rnd_556x45_Stanag {
        mass = 9.3;
    };
    class hlc_30Rnd_556x45_T_sg550: 30Rnd_556x45_Stanag {
        mass = 9.3;
    };
    class hlc_30Rnd_556x45_TDIM_sg550: 30Rnd_556x45_Stanag {
        mass = 9.3;
    };

    class hlc_24Rnd_75x55_B_stgw: 30Rnd_556x45_Stanag {
        mass = 20;
    };
    class hlc_24Rnd_75x55_ap_stgw: hlc_24Rnd_75x55_B_stgw {
        mass = 20;
    };
    class hlc_24Rnd_75x55_T_stgw: hlc_24Rnd_75x55_B_stgw {
        mass = 20;
    };

    class hlc_20Rnd_762x51_b_amt: hlc_24Rnd_75x55_B_stgw {
        mass = 16.7;
    };
    class hlc_20Rnd_762x51_mk316_amt: hlc_24Rnd_75x55_B_stgw {
        mass = 16.7;
        modelSpecial = "\hlc_wp_sigamt\mesh\magazine\Proxy\20rnd_762NATO_STGW";
    };
    class hlc_20Rnd_762x51_bball_amt: hlc_24Rnd_75x55_B_stgw {
        mass = 16.7;
        modelSpecial = "\hlc_wp_sigamt\mesh\magazine\Proxy\20rnd_762NATO_STGW";
    };
    class hlc_20Rnd_762x51_T_amt: hlc_20Rnd_762x51_b_amt {
        mass = 16.3;
    };

    class hlc_5rnd_300WM_FMJ_AWM: 30Rnd_556x45_Stanag {
        mass = 2.6;
    };
    class hlc_5rnd_300WM_mk248_AWM: hlc_5rnd_300WM_FMJ_AWM {
        mass = 2.6;
    };
    class hlc_5rnd_300WM_BTSP_AWM: hlc_5rnd_300WM_FMJ_AWM {
        mass = 2.6;
    };
    class hlc_5rnd_300WM_AP_AWM: hlc_5rnd_300WM_FMJ_AWM {
        mass = 2.6;
    };
    class hlc_5rnd_300WM_SBT_AWM: hlc_5rnd_300WM_FMJ_AWM {
        mass = 2.6;
    };
    class hlc_5rnd_300WM_T_AWM: hlc_5rnd_300WM_FMJ_AWM {
        mass = 2.6;
    };

    //Bren Gun Magazines
    class hlc_30Rnd_303_B_bren : hlc_50Rnd_45ACP_B_1921 {
        ammo = "HLC_303Brit_B";
        author = "Toadie, johnb43";
        count = 30;
        descriptionshort = "Caliber: .303British Ball<br />Rounds: 30<br />Used in: Bren";
        displayname = ".303 Ball 30Rnd Bren Magazine";
        displaynameshort = ".303 British Ball";
        initspeed = 840;
        lastroundstracer = 1;
        mass = 12;
        picture = "\hlc_core\tex\ui\ammo\m_brenball_ca.paa";
        scope = 2;
    };
    class hlc_30Rnd_303_T_bren : hlc_30Rnd_303_B_bren {
        ammo = "HLC_303Brit_T";
        author = "Toadie, johnb43";
        count = 30;
        descriptionshort = "Caliber: .303British Tracer<br />Rounds: 30<br />Used in: Bren";
        displayname = ".303 Tracer 30Rnd Bren Magazine";
        displaynameshort = ".303 British Tracer";
        initspeed = 770;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_brentracer_ca.paa";
        tracersevery = 3;
    };
    class hlc_30Rnd_303_AP_bren : hlc_30Rnd_303_B_bren {
        ammo = "HLC_303Brit_AP";
        author = "Toadie, johnb43";
        count = 30;
        descriptionshort = "Caliber: .303British Armour-Piercing<br />Rounds: 30<br />Used in: Bren";
        displayname = ".303 AP 30Rnd Bren Magazine";
        displaynameshort = ".303 British AP";
        initspeed = 720;
        lastroundstracer = 0;
        picture = "\hlc_core\tex\ui\ammo\m_brenap_ca.paa";
        tracersevery = 1;
    };

    //Lee-Enfield Stipper Clips
    class hlc_10Rnd_303_B_enfield : hlc_30Rnd_303_B_bren {
        count = 10;
        scope = 2;
        descriptionshort = "Caliber: .303British Ball<br />Rounds: 10<br />Used in: SMLE,No.4,No.5";
        displayname = ".303 Ball 10Rnd Enfield Clip";
        initspeed = 744;
        mass = 4.4;
        displaynameshort = ".303 Ball";
        picture = "\hlc_core\tex\ui\ammo\m_enfieldball_ca.paa";
    };
    class hlc_10Rnd_303_T_enfield : hlc_30Rnd_303_T_bren {
        count = 10;
        descriptionshort = "Caliber: .303British Tracer<br />Rounds: 10<br />Used in: SMLE,No.4,No.5";
        displayname = ".303 Tracer 10Rnd Enfield Clip";
        tracersevery = 1;
        scope = 2;
        initspeed = 720;
        mass = 4.4;
        displaynameshort = ".303 Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_enfieldtracer_ca.paa";
    };
    class hlc_10Rnd_303_AP_enfield : hlc_30Rnd_303_AP_bren {
        count = 10;
        descriptionshort = "Caliber: .303British Armour-Piercing<br />Rounds: 10<br />Used in: SMLE,No.4,No.5";
        displayname = ".303 AP 10Rnd Enfield Clip";
        tracersevery = 1;
        initspeed = 840;
        scope = 2;
        mass = 4.4;
        displaynameshort = ".303 AP";
        picture = "\hlc_core\tex\ui\ammo\m_enfieldap_ca.paa";
    };

    //Kar98k Clips
    class hlc_5Rnd_792_B_Kar98 : hlc_10Rnd_303_B_enfield {
        ammo = "HLC_792x57_Ball";
        count = 5;
        descriptionshort = "Caliber: 7.92x57mm sS (Ball)<br />Rounds: 5<br />Used in: Kar98";
        displayname = "7.92mm FMJ 5Rnd Mauser Clip";
        displaynameshort = "7.92x57mm Ball";
        initspeed = 770;
        lastroundstracer = 1;
        mass = 2.95;
        picture = "\hlc_core\tex\ui\ammo\m_k98ball_ca.paa";
        tracersevery = 0;
    };
    class hlc_5Rnd_792_T_Kar98 : hlc_10Rnd_303_B_enfield {
        ammo = "HLC_792x57_Tracer";
        count = 5;
        descriptionshort = "Caliber: 7.92x57mm Tracer<br />Rounds: 5<br />Used in: Kar98";
        displayname = "7.92mm Tracer 5Rnd G98 Clip";
        displaynameshort = "7.92x57mm Tracer";
        initspeed = 762;
        lastroundstracer = 2;
        mass = 2.95;
        picture = "\hlc_core\tex\ui\ammo\m_k98tracer_ca.paa";
        tracersevery = 1;
    };
    class hlc_5Rnd_792_AP_Kar98 : hlc_10Rnd_303_B_enfield {
        ammo = "HLC_792x57_AP";
        count = 5;
        descriptionshort = "Caliber: 7.92x57mm PmK (AP)<br />Rounds: 5<br />Used in: Kar98";
        displayname = "7.92mm AP 5Rnd G98 Clip";
        displaynameshort = "7.92x57mm Armour Piercing";
        initspeed = 840;
        lastroundstracer = 3;
        mass = 2.95;
        picture = "\hlc_core\tex\ui\ammo\m_k98ap_ca.paa";
        tracersevery = 0;
    };

    //P90 Magazines
    class hlc_50Rnd_57x28_JHP_P90 : 30Rnd_556x45_Stanag {
        ammo = "HLC_57x28mm_JHP";
        author = "Toadie, johnb43";
        count = 50;
        descriptionshort = "Caliber: 5.7x28mm SS195LF Blue VMax <br />Rounds: 50<br />Used in: P90";
        displayname = "5.7mm JHP 50Rnd P90 Magazine";
        displaynameshort = "5.7x28mm SS195LF Blue VMax";
        initspeed = 715;
        lastroundstracer = 0;
        mass = 12;
        picture = "\hlc_core\tex\ui\ammo\m_p90ss195_ca.paa";
        scope = 2;
        tracersevery = 0;

    };
    class hlc_50Rnd_57x28_FMJ_P90 : hlc_50Rnd_57x28_JHP_P90 {
        ammo = "HLC_57x28mm_FMJ";
        descriptionshort = "Caliber: 5.7x28mm SS190 Black-Tip<br />Rounds: 50<br />Used in: P90";
        displayname = "5.7mm FMJ 50Rnd P90 Magazine";
        displaynameshort = "5.7x28mm SS190 Black-Tip";
        lastroundstracer = 0;
        mass = 12;
        picture = "\hlc_core\tex\ui\ammo\m_p90ss190_ca.paa";
        scope = 2;
        tracersevery = 0;
    };

    //PKM boxes
    class hlc_100Rnd_762x54_B_PKM : 30Rnd_556x45_Stanag {
        ammo = "HLC_762x54_ball";
        author = "Toadie, johnb43";
        count = 100;
        descriptionshort = "Caliber: 7.62x54mm Ball<br />Rounds: 100<br />Used in: PKM";
        displayname = "7.62mm FMJ 100Rnd Maxim-Link Belt";
        displaynameshort = "7.62x54mm Ball";
        initspeed = 825;
        lastroundstracer = 1;
        mass = 43;
        picture = "\hlc_core\tex\ui\ammo\m_pkm100ball_ca.paa";
        scope = 2;
        tracersevery = 0;
    };
    class hlc_100Rnd_762x54_M_PKM : 30Rnd_556x45_Stanag {
        ammo = "HLC_762x54_tracer";
        author = "Toadie, johnb43";
        count = 100;
        descriptionshort = "Caliber: 7.62x54mm Ball/Tracer Mix<br />Rounds: 100<br />Used in: PKM";
        displayname = "7.62mm FMJ 100Rnd Maxim-Link Belt (Tracers every 4)";
        displaynameshort = "7.62x54mm Ball/Tracer";
        initspeed = 798;
        lastroundstracer = 1;
        mass = 43;
        picture = "\hlc_core\tex\ui\ammo\m_pkm100mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
    };
    class hlc_100Rnd_762x54_T_PKM : 30Rnd_556x45_Stanag {
        ammo = "HLC_762x54_tracer";
        author = "Toadie, johnb43";
        count = 100;
        descriptionshort = "Caliber: 7.62x54mm 7T2 Tracer<br />Rounds: 100<br />Used in: PKM";
        displayname = "7.62mm Tracers 100Rnd Maxim-Link Belt";
        displaynameshort = "7.62x54mm 7T2 Tracer";
        initspeed = 798;
        lastroundstracer = 1;
        mass = 43;
        picture = "\hlc_core\tex\ui\ammo\m_pkm100tracer_ca.paa";
        scope = 2;
        tracersevery = 1;
    };
    class hlc_250Rnd_762x54_B_PKM : 30Rnd_556x45_Stanag {
        ammo = "HLC_762x54_ball";
        author = "Toadie, johnb43";
        count = 250;
        descriptionshort = "Caliber: 7.62x54mm Ball<br />Rounds: 250<br />Used in: PKM";
        displayname = "7.62mm FMJ 250Rnd Maxim-Link Belt";
        displaynameshort = "7.62x54mm Ball";
        initspeed = 825;
        lastroundstracer = 1;
        mass = 91;
        picture = "\hlc_core\tex\ui\ammo\m_pkm250ball_ca.paa";
        scope = 2;
        tracersevery = 0;
    };
    class hlc_250Rnd_762x54_M_PKM : 30Rnd_556x45_Stanag {
        ammo = "HLC_762x54_tracer";
        author = "Toadie, johnb43";
        count = 250;
        descriptionshort = "Caliber: 7.62x54mm Ball/Tracer Mix<br />Rounds: 250<br />Used in: PKM";
        displayname = "7.62mm FMJ 250Rnd Maxim-Link Belt (Tracers Every 4)";
        displaynameshort = "7.62x54mm Ball/Tracer";
        initspeed = 798;
        lastroundstracer = 1;
        mass = 91;
        picture = "\hlc_core\tex\ui\ammo\m_pkm250mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
    };
    class hlc_250Rnd_762x54_T_PKM : 30Rnd_556x45_Stanag {
        ammo = "HLC_762x54_tracer";
        author = "Toadie, johnb43";
        count = 250;
        descriptionshort = "Caliber: 7.62x54mm 7T2 Tracer<br />Rounds: 250<br />Used in: PKM";
        displayname = "7.62mm Tracers 250Rnd Maxim-Link Belt";
        displaynameshort = "7.62x54mm 7T2 Tracer";
        initspeed = 798;
        lastroundstracer = 1;
        mass = 91;
        picture = "\hlc_core\tex\ui\ammo\m_pkm250tracer_ca.paa";
        scope = 2;
        tracersevery = 1;
    };
    class hlc_100Rnd_762x54_AP_PKM : 30Rnd_556x45_Stanag {
        ammo = "HLC_762x54_AP";
        author = "Toadie, johnb43";
        count = 100;
        descriptionshort = "Caliber: 7.62x54mm 7N13 AP<br />Rounds: 250<br />Used in: PKM";
        displayname = "7.62mm AP 100Rnd Maxim-Link Belt";
        displaynameshort = "7.62x54mm 7N13 AP";
        initspeed = 825;
        lastroundstracer = 3;
        picture = "\hlc_core\tex\ui\ammo\m_pkm100ap_ca.paa";
        mass = 43;
        scope = 2;
        tracersevery = 0;
    };
    class hlc_250Rnd_762x54_AP_PKM : hlc_100Rnd_762x54_AP_PKM {
        ammo = "HLC_762x54_AP";
        count = 250;
        descriptionshort = "Caliber: 7.62x54mm 7N13 AP<br />Rounds: 250<br />Used in: PKM";
        displayname = "7.62mm AP 250Rnd Maxim-Link Belt";
        displaynameshort = "7.62x54mm 7N13 AP";
        initspeed = 825;
        lastroundstracer = 3;
        mass = 91;
        picture = "\hlc_core\tex\ui\ammo\m_pkm250ap_ca.paa";
        scope = 2;
        tracersevery = 0;
    };

    //MG34 Boxes
    class hlc_75rnd_792_B_MG34 : hlc_5Rnd_792_B_Kar98 {
        count = 75;
        descriptionshort = "Caliber: 7.92x57mm sS (Ball)<br />Rounds: 75<br />Used in: MG34";
        displayname = "MG34 (Ball) 75rnd 7.92mm";
        displaynameshort = "7.92x57mm Ball";
        initspeed = 762;
        mass = 39;
        model = "hlc_wp_mg3\mesh\magazine\magazine_42.p3d";
        modelSpecial = "hlc_wp_mg3\mesh\magazine\proxy\50rnd_792x57_Gurt34.p3d";
        modelSpecialIsProxy = 1;
        picture = "\hlc_core\tex\ui\ammo\m_mg34ball_ca.paa";
        tracersevery = 3;
    };
    class hlc_75rnd_792_T_MG34 : hlc_75rnd_792_B_MG34 {
        ammo = "HLC_792x57_Tracer";
        count = 75;
        descriptionshort = "Caliber: 7.92x57mm Tracer<br />Rounds: 75<br />Used in: MG34";
        displayname = "MG34 (Tracer) 75rnd 7.92mm";
        displaynameshort = "7.92x57mm Tracer";
        mass = 39;
        picture = "\hlc_core\tex\ui\ammo\m_mg34tracer_ca.paa";
        tracersevery = 3;
    };
    class hlc_75rnd_792_AP_MG34 : hlc_75rnd_792_B_MG34 {
        ammo = "HLC_792x57_AP";
        count = 75;
        descriptionshort = "Caliber: 7.92x57mm PmK (AP)<br />Rounds: 75<br />Used in: MG34";
        displayname = "MG34 (AP) 75rnd 7.92mm";
        displaynameshort = "7.92x57mm Armour-Piercing";
        mass = 39;
        picture = "\hlc_core\tex\ui\ammo\m_mg34ap_ca.paa";
        tracersevery = 3;
    };

    //TAC50 Magazines
    class hlc_5Rnd_50BMG_B_TAC50 : hlc_50Rnd_45ACP_B_1921 {
        ammo = "B_127x99_Ball";
        author = "Toadie, johnb43";
        count = 5;
        descriptionshort = "Caliber: .50 BMG Ball<br />Rounds: 5<br />Used in: TAC-50";
        displayname = "TAC-50 Ball 5rnd .50BMG";
        displaynameshort = ".50 BMG Ball";
        lastroundstracer = 0;
        initspeed = 1024;
        mass = 16;
        picture = "\hlc_core\tex\ui\ammo\m_tac50ball_ca.paa";
        scope = 2;
    };
    class hlc_5Rnd_50BMG_T_TAC50 : hlc_5Rnd_50BMG_B_TAC50 {
        ammo = "B_127x99_Ball_Tracer_Red";
        count = 5;
        descriptionshort = "Caliber: .50 BMG Tracer<br />Rounds: 5<br />Used in: TAC-50";
        displayname = "TAC-50 Tracer 5rnd .50BMG";
        displaynameshort = ".50 BMG Tracer";
        lastroundstracer = 0;
        initspeed = 928;
        tracersevery = 1;
        mass = 16;
        picture = "\hlc_core\tex\ui\ammo\m_tac50tracer_ca.paa";
        scope = 2;
    };
    class hlc_5Rnd_50BMG_SLAP_TAC50 : hlc_5Rnd_50BMG_B_TAC50 {
        ammo = "FH_50BMG_SLAP";
        count = 5;
        descriptionshort = "Caliber: .50 BMG SLAP<br />Rounds: 5<br />Used in: TAC-50";
        displayname = "TAC-50 SLAP 5rnd .50BMG";
        displaynameshort = ".50 BMG SLAP";
        lastroundstracer = 0;
        initspeed = 1219;
        tracersevery = 1;
        mass = 16;
        picture = "\hlc_core\tex\ui\ammo\m_tac50slap_ca.paa";
        scope = 2;
    };
    class hlc_5Rnd_50BMG_Raufoss_TAC50 : hlc_5Rnd_50BMG_B_TAC50 {
        ammo = "FH_50BMG_Raufoss";
        count = 5;
        descriptionshort = "Caliber: .50 BMG Raufoss<br />Rounds: 5<br />Used in: TAC-50";
        displayname = "TAC-50 Raufoss (Mk211) HEIAP 5rnd .50BMG";
        displaynameshort = ".50 BMG Raufoss";
        lastroundstracer = 0;
        initspeed = 889;
        tracersevery = 1;
        mass = 16;
        picture = "\hlc_core\tex\ui\ammo\m_tac50raufoss_ca.paa";
        scope = 2;
    };
};
