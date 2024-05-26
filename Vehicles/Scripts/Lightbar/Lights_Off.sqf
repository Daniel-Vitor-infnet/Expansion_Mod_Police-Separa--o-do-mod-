diag_log "POLICE LIGHTS WORKING";
private["_vcl","_policelights","_BlueLight","_RedLight"];
_vcl = _this;
_policelights = "\d3s_cars_core\data\ems\emergpolicelights1.paa";
_BlueLight = "Reflector_Cone_01_blue_F";
_RedLight = "Reflector_Cone_01_red_F";

	hint localize "STR_Veh_Lightbar_ON_NEW";

if((_vcl getVariable "policelights")) exitWith 
{

hint localize "STR_Veh_Lightbar_OFF";
_vcl setVariable["policelights",FALSE,true];

}; // END WHILE
exit;