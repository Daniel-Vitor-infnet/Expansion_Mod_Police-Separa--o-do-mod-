params ["_vcl"];

while {alive _vcl} do
{
    while {_vcl getVariable ['Police_Sound',0] == 1 && !isNull driver _vcl} do
    {
		if(!isNull driver _vcl) then {	
			_vcl say3D ["Police_Siren",500,1];
			sleep 15.0;
		};
    };
    sleep 1;
};