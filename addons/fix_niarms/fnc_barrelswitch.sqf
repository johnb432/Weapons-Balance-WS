/*
    Author: Kerc, johnb43

   	Description:
   	Changes the currently held Remington ACR's barrel to another type

   	Parameters:
   	0: OBJECT - Unit making the change
   	1: STRING - Barrel classname that is being swapped in place

   	Example:
   		[player,"hlc_barrel_compact_ACR_556"] call WB_fnc_barrelswitch_ACR;

   	Returns:
   	Nothing
*/

params ["_unit", "_replaceBarrel"];

// Check config for compatible classes
private _primaryWeap = primaryWeapon _unit;
private _weaponClasses = getArray (configFile >> "CfgWeapons" >> _primaryWeap >> "HLC_CompatibleBarrels_Classes");

if (count _weaponClasses == 6 && {_replaceBarrel == "hlc_barrel_full_ACR_68" || {_replaceBarrel == "hlc_barrel_full_ACR_556"}}) exitWith {
    hint "You can't put long barrels on grenade launcher variants!";
};

_unit setVariable ["isInProgress", true];

//Animation for changing barrel
_unit playActionNow "HLC_GestureSwapBarrelAUG";
_unit say3D "hlc_barrelswapaug";

[{
    params ["_unit", "_replaceBarrel", "_primaryWeap", "_weaponClasses"];


    private _primaryAcc = _unit weaponAccessories _primaryWeap;

    private _weaponMag = [];
    {
       	if ((_x select 4) == _primaryWeap) then {
       		   _weaponMag pushBack _x;
       	};
    } foreach (magazinesAmmoFull _unit);

    {
        if (_x select 1 > 0) then {
            _unit addMagazine [_x select 0, _x select 1];
        };
    } forEach _weaponMag;

    _unit removeItem _replaceBarrel;
    _unit removeWeapon _primaryWeap;
    _unit addItem (getText (configFile >> "CfgWeapons" >> _primaryWeap >> "HLC_CurrentBarrel"));

    if (count _weaponClasses > 6) then {
        switch (_replaceBarrel) do {
           	case "hlc_barrel_compact_ACR_556": {_unit addWeapon (_weaponClasses select 0);};
           	case "hlc_barrel_carbine_ACR_556": {_unit addWeapon (_weaponClasses select 1);};
           	case "hlc_barrel_mid_ACR_556": {_unit addWeapon (_weaponClasses select 2);};
           	case "hlc_barrel_full_ACR_556": {_unit addWeapon (_weaponClasses select 3);};
            case "hlc_barrel_compact_ACR_68": {_unit addWeapon (_weaponClasses select 4);};
           	case "hlc_barrel_carbine_ACR_68": {_unit addWeapon (_weaponClasses select 5);};
           	case "hlc_barrel_mid_ACR_68": {_unit addWeapon (_weaponClasses select 6);};
           	case "hlc_barrel_full_ACR_68": {_unit addWeapon (_weaponClasses select 7);};
           	default {_unit addWeapon _primaryWeap;};
        };
    } else {
        switch (_replaceBarrel) do {
            case "hlc_barrel_compact_ACR_556": {_unit addWeapon (_weaponClasses select 0);};
            case "hlc_barrel_carbine_ACR_556": {_unit addWeapon (_weaponClasses select 1);};
            case "hlc_barrel_mid_ACR_556": {_unit addWeapon (_weaponClasses select 2);};
            case "hlc_barrel_compact_ACR_68": {_unit addWeapon (_weaponClasses select 3);};
            case "hlc_barrel_carbine_ACR_68": {_unit addWeapon (_weaponClasses select 4);};
            case "hlc_barrel_mid_ACR_68": {_unit addWeapon (_weaponClasses select 5);};
            default {_unit addWeapon _primaryWeap;};
        };
    };


    private _compatItems = [primaryWeapon _unit] call CBA_fnc_compatibleItems;

    {
        if !(_x == "") then {
            if (_x in _compatItems) then {
                _unit addPrimaryWeaponItem _x;
            } else {
                _unit addItem _x;
                systemChat format ["%1 is not compatible", _x];
            };
      	 };
    } foreach _primaryAcc;

    //Need to run this otherwise they'll switch to their handgun
    _unit selectWeapon (primaryWeapon _unit);
    _unit setVariable ["isInProgress", false];
}, [_unit, _replaceBarrel, _primaryWeap, _weaponClasses], 4.7] call CBA_fnc_waitAndExecute; //4.7s is the time for the animation to complete
