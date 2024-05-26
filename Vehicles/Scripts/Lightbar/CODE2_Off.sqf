diag_log "LIGHTS WORKING";
private["_vcl","_lights"];
_vcl = _this;
_lights = "\d3s_cars_core\data\ems\emerglights1.paa";

	hint localize "STR_Veh_Lightbar_ON";

if((_vcl getVariable "lights")) exitWith {

	hint localize "STR_Veh_Lightbar_OFF";

_vcl setVariable["lights",FALSE,true];

	sleep 0.5;

	_vcl setObjectTextureGlobal [4,""]; 
	_vcl setObjectTextureGlobal [5,""];
	_vcl setObjectTextureGlobal [6,""];
	_vcl setObjectTextureGlobal [7,""];
	_vcl setObjectTextureGlobal [8,""];
	_vcl setObjectTextureGlobal [9,""];
	_vcl setObjectTextureGlobal [10,""]; 
	_vcl setObjectTextureGlobal [11,""];
	_vcl setObjectTextureGlobal [12,""];
	_vcl setObjectTextureGlobal [13,""];
	_vcl setObjectTextureGlobal [14,""];
	_vcl setObjectTextureGlobal [15,""];
	_vcl setObjectTextureGlobal [16,""];
	_vcl setObjectTextureGlobal [17,""];
}; // END WHILE
exit;