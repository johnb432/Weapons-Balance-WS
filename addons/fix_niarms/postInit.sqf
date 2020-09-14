hlc_barrel_standard_compatible_weapons = [
    "hlc_rifle_auga1carb",
    "hlc_rifle_auga1carb_t",
    "hlc_rifle_auga1carb_B",
    "hlc_rifle_auga2carb",
    "hlc_rifle_auga2carb_t",
    "hlc_rifle_auga2carb_b",
    "hlc_rifle_augsrcarb",
    "hlc_rifle_augsrcarb_t",
    "hlc_rifle_augsrcarb_b",
    "hlc_rifle_augpara",
    "hlc_rifle_augpara_b",
    "hlc_rifle_augpara_t",
    "hlc_rifle_auga2para",
    "hlc_rifle_auga2para_b",
    "hlc_rifle_auga2para_t",
    "hlc_rifle_aughbar",
    "hlc_rifle_aughbar_B",
    "hlc_rifle_aughbar_t",
    "hlc_rifle_auga2lsw",
    "hlc_rifle_auga2lsw_t",
    "hlc_rifle_auga2lsw_b",
    "hlc_rifle_augsrhbar",
    "hlc_rifle_augsrhbar_b",
    "hlc_rifle_augsrhbar_t"
];

hlc_barrel_carbine_compatible_weapons = [
    "hlc_rifle_aug",
    "hlc_rifle_auga1_t",
    "hlc_rifle_auga1_b",
    "hlc_rifle_auga2",
    "hlc_rifle_auga2_b",
    "hlc_rifle_auga2_t",
    "hlc_rifle_augsr",
    "hlc_rifle_augsr_b",
    "hlc_rifle_augsr_t",
    "hlc_rifle_augpara",
    "hlc_rifle_augpara_b",
    "hlc_rifle_augpara_t",
    "hlc_rifle_auga2para",
    "hlc_rifle_auga2para_b",
    "hlc_rifle_auga2para_t",
    "hlc_rifle_aughbar",
    "hlc_rifle_aughbar_B",
    "hlc_rifle_aughbar_t",
    "hlc_rifle_auga2lsw",
    "hlc_rifle_auga2lsw_t",
    "hlc_rifle_auga2lsw_b",
    "hlc_rifle_augsrhbar",
    "hlc_rifle_augsrhbar_b",
    "hlc_rifle_augsrhbar_t"
];

hlc_barrel_hbar_compatible_weapons = [
    "hlc_rifle_aug",
    "hlc_rifle_auga1_t",
    "hlc_rifle_auga1_b",
    "hlc_rifle_auga2",
    "hlc_rifle_auga2_b",
    "hlc_rifle_auga2_t",
    "hlc_rifle_augsr",
    "hlc_rifle_augsr_b",
    "hlc_rifle_augsr_t",
    "hlc_rifle_auga1carb",
    "hlc_rifle_auga1carb_t",
    "hlc_rifle_auga1carb_B",
    "hlc_rifle_auga2carb",
    "hlc_rifle_auga2carb_t",
    "hlc_rifle_auga2carb_b",
    "hlc_rifle_augsrcarb",
    "hlc_rifle_augsrcarb_t",
    "hlc_rifle_augsrcarb_b",
    "hlc_rifle_augpara",
    "hlc_rifle_augpara_b",
    "hlc_rifle_augpara_t",
    "hlc_rifle_auga2para",
    "hlc_rifle_auga2para_b",
    "hlc_rifle_auga2para_t"
];

hlc_barrel_9mm_compatible_weapons = [
    "hlc_rifle_aug",
    "hlc_rifle_auga1_t",
    "hlc_rifle_auga1_b",
    "hlc_rifle_auga2",
    "hlc_rifle_auga2_b",
    "hlc_rifle_auga2_t",
    "hlc_rifle_auga1carb",
    "hlc_rifle_auga1carb_t",
    "hlc_rifle_auga1carb_B",
    "hlc_rifle_auga2carb",
    "hlc_rifle_auga2carb_t",
    "hlc_rifle_auga2carb_b",
    "hlc_rifle_aughbar",
    "hlc_rifle_aughbar_B",
    "hlc_rifle_aughbar_t",
    "hlc_rifle_auga2lsw",
    "hlc_rifle_auga2lsw_t",
    "hlc_rifle_auga2lsw_b"
];

if (!isClass (configFile >> "CfgPatches" >> "ace_interaction")) then {
	   HLC_ShowBarrelActions = true;
    HLC_ShowBarrelAceActions = false;
} else {
	   HLC_ShowBarrelActions = false;
    HLC_ShowBarrelAceActions = true;
};
