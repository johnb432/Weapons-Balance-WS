class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class Change_Barrel {
                    displayName = "Change Barrel";
                    condition = "[this] call WB_fnc_checkShowAceActions";

                    class hlc_switch_barrel_standard {
                        displayName = "Change Barrel (Standard)";
                        condition = "HLC_ShowBarrelAceActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_standard_compatible_weapons) && ('hlc_barrel_standard' in items player)}";
                        statement = "[this,'hlc_barrel_standard'] spawn hlc_fnc_barrelswitch";
                    };

                    class hlc_switch_barrel_carbine {
                        displayName = "Change Barrel (Carbine)";
                        condition = "HLC_ShowBarrelAceActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_carbine_compatible_weapons) && ('hlc_barrel_carbine' in items player)}";
                        statement = "[this,'hlc_barrel_carbine'] spawn hlc_fnc_barrelswitch";
                    };

                    class hlc_switch_barrel_hbar {
                        displayName = "Change Barrel (HBAR)";
                        condition = "HLC_ShowBarrelAceActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_hbar_compatible_weapons) && ('hlc_barrel_hbar' in items player)}";
                        statement = "[this,'hlc_barrel_hbar'] spawn hlc_fnc_barrelswitch";
                    };

                    class hlc_switch_barrel_9mm {
                        displayName = "Change Barrel (9MM PARA)";
                        condition = "HLC_ShowBarrelAceActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_9mm_compatible_weapons) && ('hlc_barrel_9mm' in items player)}";
                        statement = "[this,'hlc_barrel_9mm'] spawn hlc_fnc_barrelswitch";
                    };



                    class hlc_switch_barrel_compact_ACR_556 {
                        displayName = "Change Barrel (Compact/5.56)";
                        condition = "HLC_ShowBarrelAceActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_compact_ACR_556_compatible_weapons) && ('hlc_barrel_compact_ACR_556' in items player)}";
                        statement = "[this,'hlc_barrel_compact_ACR_556'] call WB_fnc_barrelswitch_ACR";
                    };

                    class hlc_switch_barrel_carbine_ACR_556 {
                        displayName = "Change Barrel (Carbine/5.56)";
                        condition = "HLC_ShowBarrelAceActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_carbine_ACR_556_compatible_weapons) && ('hlc_barrel_carbine_ACR_556' in items player)}";
                        statement = "[this,'hlc_barrel_carbine_ACR_556'] call WB_fnc_barrelswitch_ACR";
                    };

                    class hlc_switch_barrel_mid_ACR_556 {
                        displayName = "Change Barrel (Mid/5.56)";
                        condition = "HLC_ShowBarrelAceActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_mid_ACR_556_compatible_weapons) && ('hlc_barrel_mid_ACR_556' in items player)}";
                        statement = "[this,'hlc_barrel_mid_ACR_556'] call WB_fnc_barrelswitch_ACR";
                    };

                    class hlc_switch_barrel_full_ACR_556 {
                        displayName = "Change Barrel (Long/5.56)";
                        condition = "HLC_ShowBarrelAceActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_full_ACR_556_compatible_weapons) && ('hlc_barrel_full_ACR_556' in items player)}";
                        statement = "[this,'hlc_barrel_full_ACR_556'] call WB_fnc_barrelswitch_ACR";
                    };



                    class hlc_switch_barrel_compact_ACR_68 {
                        displayName = "Change Barrel (Compact/6.8)";
                        condition = "HLC_ShowBarrelAceActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_compact_ACR_68_compatible_weapons) && ('hlc_barrel_compact_ACR_68' in items player)}";
                        statement = "[this,'hlc_barrel_compact_ACR_68'] call WB_fnc_barrelswitch_ACR";
                    };

                    class hlc_switch_barrel_carbine_ACR_68 {
                        displayName = "Change Barrel (Carbine/6.8)";
                        condition = "HLC_ShowBarrelAceActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_carbine_ACR_68_compatible_weapons) && ('hlc_barrel_carbine_ACR_68' in items player)}";
                        statement = "[this,'hlc_barrel_carbine_ACR_68'] call WB_fnc_barrelswitch_ACR";
                    };

                    class hlc_switch_barrel_mid_ACR_68 {
                        displayName = "Change Barrel (Mid/6.8)";
                        condition = "HLC_ShowBarrelAceActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_mid_ACR_68_compatible_weapons) && ('hlc_barrel_mid_ACR_68' in items player)}";
                        statement = "[this,'hlc_barrel_mid_ACR_68'] call WB_fnc_barrelswitch_ACR";
                    };

                    class hlc_switch_barrel_full_ACR_68 {
                        displayName = "Change Barrel (Long/6.8)";
                        condition = "HLC_ShowBarrelAceActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_full_ACR_68_compatible_weapons) && ('hlc_barrel_full_ACR_68' in items player)}";
                        statement = "[this,'hlc_barrel_full_ACR_68'] call WB_fnc_barrelswitch_ACR";
                    };
                };
            };
        };
    };
};
