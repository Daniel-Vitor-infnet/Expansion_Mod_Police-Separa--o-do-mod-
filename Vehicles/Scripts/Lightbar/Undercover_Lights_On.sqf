
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


diag_log "POLICE LIGHTS WORKING";
private["_vcl","_policelights","_BlueLight","_RedLight"];
_vcl = _this;
_policelights = "\d3s_cars_core\data\ems\emergpolicelights1.paa";
_BlueLight = "Reflector_Cone_01_blue_F";
_RedLight = "Reflector_Cone_01_red_F";

_vcl setVariable["policelights",FALSE,true];  ///-------------NEW ADDITION
_vcl setVariable["policelights",TRUE,true];

while {(alive _vcl) && (_vcl getVariable "policelights")} do
{
	_BlueLight = "Reflector_Cone_01_wide_blue_F" createVehicle position _vcl;
	_BlueLight attachTo [_vcl, [-0.3,0.92,0.19]];_BlueLight setDir -45;sleep 0.1;					//front upper L
	_BlueLight attachTo [_vcl, [0.3,0.92,0.19]];_BlueLight setDir 45;sleep 0.1;					//front upper R
	_BlueLight attachTo [_vcl, [0.25,2.45,-0.55]];_BlueLight setDir 45;sleep 0.05;				//front Lower R
	_BlueLight attachTo [_vcl, [-0.25,2.45,-0.55]];_BlueLight setDir -45;sleep 0.05;			//front Lower L
	_BlueLight attachTo [_vcl, [0.3,-2,-0.1]];_BlueLight setDir 135;sleep 0.1; 					//rear upper R
	_BlueLight attachTo [_vcl, [-0.3,-2,-0.1]];_BlueLight setDir 225;sleep 0.1; 			//rear upper L
	_BlueLight attachTo [_vcl, [0.65,-2.55,-0.31]];_BlueLight setDir 135;sleep 0.05; 		//rear lower R
	_BlueLight attachTo [_vcl, [-0.65,-2.55,-0.31]];_BlueLight setDir 225;sleep 0.05; 		//rear lower L
	deleteVehicle _BlueLight;
	sleep 0.1;
	deleteVehicle _BlueLight;
	sleep 0.1;
	deleteVehicle _BlueLight;
	sleep 0.1;
}; // END WHILE
exit;

//[0,0,0] = [left/right,forward/back,up/down]