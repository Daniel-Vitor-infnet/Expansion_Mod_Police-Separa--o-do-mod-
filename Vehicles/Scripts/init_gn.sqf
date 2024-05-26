_car = _this select 0;
if(isNil "_car" || !hasInterface)exitWith{};
[_car] execVM "\Expansion_Mod_Police\Vehicles\Scripts\Siren_Gn.sqf";