// by ALIAS
// Searchlight DEMO
// Tutorial: https://www.youtube.com/user/aliascartoons

private ["_unghi_vert","_search_light_0","_search_light_31","_search_light_32","_poz_0","_poz_31","_poz_32","_pos_search_end","_poz_abs","_poz_rel","_unghi_search","_unghi_car","_poz_lit","_dir_gun","_flash_light","_vcl","_veh_turr_beg","_veh_turr_end","_search_light_1","_search_light_2","_search_light_3","_search_light_4","_search_light_5","_search_light_6","_search_light_7","_search_light_8","_search_light_9","_search_light_91","_search_light_92","_search_light_end","_poz_1","_poz_2","_poz_3","_poz_4","_poz_5","_poz_6","_poz_7","_poz_8","_poz_9","_poz_91","_poz_92","_poz_end"];

if (!hasInterface) exitWith {};

_vcl = _this select 0;

//_veh_turr_beg = getText (configfile >> "CfgVehicles" >> (typeOf _vcl) >> "Turrets" >> "MainTurret" >> "gunBeg");
//_veh_turr_end = getText (configfile >> "CfgVehicles" >> (typeOf _vcl) >> "Turrets" >> "MainTurret" >> "gunEnd");

while {alive _vcl} do 
{
/*	_vcl setVariable ["search_lit_ON",true,true];
	_obiect_lit = createSimpleObject ["Sign_Sphere10cm_F", [0,0,0]]; _obiect_lit setObjectTextureGlobal [0,"#(argb,8,8,3)color(0,0,0,0,ca)"]; _obiect_lit attachTo [_vcl, [0,0,-0.2], _veh_turr_end];
	_obiect_comp = createSimpleObject ["A3\data_f\VolumeLight_searchLight.p3d",[0,0,0]];_obiect_comp hideObjectGlobal true;	_obiect_comp attachTo [_obiect_lit, [0,-2,0]];
	_obiect_dec = createVehicle ["Land_FloodLight_F", getpos _vcl, [], 0, "CAN_COLLIDE"];	_obiect_dec disableCollisionWith _vcl;
	_obiect_dec attachTo [_vcl, [0,0,-0.2],_veh_turr_end];
*/	
//	_obiect_comp hideObjectGlobal false;
	_Searchlight_left = "Reflector_Cone_01_Long_white_F" createVehicle position _vcl;
	_Searchlight_left attachTo [_vcl, [-0.55,-0.2,0.33]];_Searchlight_left setDir -90;		//Search Light left

	
	while {(alive _vcl)and(_vcl getVariable "search_lit_ON")} do 
	{
	_Searchlight_left = "Reflector_Cone_01_Long_white_F" createVehicle position _vcl;
	_Searchlight_left attachTo [_vcl, [-0.55,-0.2,0.33]];_Searchlight_left setDir -90;		//Search Light left
	};
	deleteVehicle _Searchlight_left;
	waitUntil {sleep 0.5;(_vcl getVariable "search_lit_ON")};
};
_vcl setVariable ["search_lit_ON",false,true];