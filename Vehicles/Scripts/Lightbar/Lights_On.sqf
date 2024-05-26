diag_log "POLICE LIGHTS WORKING";
private["_vcl","_policelights","_GreenLight","_BlueLight"];
_vcl = _this;
_policelights = "\\d3s_cars_core\\data\\ems\\emergpolicelights1.paa";
_GreenLight = "Reflector_Cone_01_green_F"; // Luz verde aproximada
_BlueLight = "Reflector_Cone_01_blue_F"; // Luz azul aproximada

if((_vcl getVariable "policelights")) exitWith
{
/*
_vcl setVariable["policelights",FALSE,true];
*/ 
}; // END WHILE
exit;

diag_log "POLICE LIGHTS WORKING";
private["_vcl","_policelights","_GreenLight","_BlueLight"];
_vcl = _this;
_policelights = "\\d3s_cars_core\\data\\ems\\emergpolicelights1.paa";
_GreenLight = "Reflector_Cone_01_green_F"; // Luz verde aproximada
_BlueLight = "Reflector_Cone_01_blue_F"; // Luz azul aproximada

_vcl setVariable["policelights",FALSE,true];  ///-------------NEW ADDITION
_vcl setVariable["policelights",TRUE,true];

while {(alive _vcl) && (_vcl getVariable "policelights")} do
{
    _GreenLight = "Reflector_Cone_01_green_F" createVehicle position _vcl;
    _GreenLight attachTo [_vcl, [0.55,-0.2,0.33]];_GreenLight setDir 33;sleep 0.07;
    _GreenLight attachTo [_vcl, [0.55,-0.2,0.33]];_GreenLight setDir 66;sleep 0.07;
    _GreenLight attachTo [_vcl, [0.55,-0.2,0.33]];_GreenLight setDir 100;sleep 0.07;
    deleteVehicle _GreenLight;
    _BlueLight = "Reflector_Cone_01_blue_F" createVehicle position _vcl;
    _BlueLight attachTo [_vcl, [-0.55,-0.2,0.33]];_BlueLight setDir -45;sleep 0.07;
    _BlueLight attachTo [_vcl, [-0.55,-0.2,0.33]];_BlueLight setDir -135;sleep 0.07;
    deleteVehicle _BlueLight;
    _GreenLight = "Reflector_Cone_01_green_F" createVehicle position _vcl;
    _GreenLight attachTo [_vcl, [-0.55,-0.2,0.33]];_GreenLight setDir -33;sleep 0.07;
    _GreenLight attachTo [_vcl, [-0.55,-0.2,0.33]];_GreenLight setDir -66;sleep 0.07;
    _GreenLight attachTo [_vcl, [-0.55,-0.2,0.33]];_GreenLight setDir -100;sleep 0.07;
    deleteVehicle _GreenLight;
    _BlueLight = "Reflector_Cone_01_blue_F" createVehicle position _vcl;
    _BlueLight attachTo [_vcl, [0.55,-0.2,0.33]];_BlueLight setDir 45;sleep 0.07;
    _BlueLight attachTo [_vcl, [0.55,-0.2,0.33]];_BlueLight setDir 135;sleep 0.07;
    deleteVehicle _BlueLight;
    sleep 0.2;
}; // END WHILE
exit;
