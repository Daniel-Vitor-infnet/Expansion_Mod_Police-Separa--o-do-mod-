
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
_RedLight = "Reflector_Cone_01_red_F";

_vcl setVariable["policelights",FALSE,true];  ///-------------NEW ADDITION
_vcl setVariable["policelights",TRUE,true];

while {(alive _vcl) && (_vcl getVariable "policelights")} do
{
	_BlueLight = "Reflector_Cone_01_blue_F" createVehicle position _vcl;
	_BlueLight attachTo [_vcl, [-0.4,1.2,0.68]];_BlueLight setDir -20;sleep 0.10;				//front Lower 	LL
	_BlueLight attachTo [_vcl, [-0.6,1.2,0.68]];_BlueLight setDir -40;sleep 0.15;				//front Lower 	LLL
	_BlueLight attachTo [_vcl, [-0.66,-2.75,-0.5]];_BlueLight setDir -165;sleep 0.08;				//front Lower 	LLL	rear	
	_BlueLight attachTo [_vcl, [-0.6,1.2,0.68]];_BlueLight setDir -40;sleep 0.15;				//front Lower 	LLL
	_BlueLight attachTo [_vcl, [-0.4,1.2,0.68]];_BlueLight setDir -20;sleep 0.10;				//front Lower 	LL
	_BlueLight attachTo [_vcl, [-0.2,1.2,0.68]];_BlueLight setDir 0;sleep 0.05;				//front center 	L
	_BlueLight attachTo [_vcl, [0.2,1.2,0.68]];_BlueLight setDir 0;sleep 0.05;					//front center 	R
	_BlueLight attachTo [_vcl, [0.4,1.2,0.68]];_BlueLight setDir 20;sleep 0.10;				//front upper 	RR
	_BlueLight attachTo [_vcl, [0.6,1.2,0.68]];_BlueLight setDir 40;sleep 0.15;				//front upper 	RRR
	_BlueLight attachTo [_vcl, [0.66,-2.75,-0.5]];_BlueLight setDir 165;sleep 0.08;					//front upper 	RRR	 rear
	_BlueLight attachTo [_vcl, [0.6,1.2,0.68]];_BlueLight setDir 40;sleep 0.15;				//front upper 	RRR	
	_BlueLight attachTo [_vcl, [0.4,1.2,0.68]];_BlueLight setDir 20;sleep 0.10;				//front upper 	RR
	deleteVehicle _BlueLight;
	sleep 0.01;
	deleteVehicle _BlueLight;
	sleep 0.01;	
}; // END WHILE
exit;