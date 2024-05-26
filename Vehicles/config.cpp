 #include "\a3\ui_f\hpp\definedikcodes.inc"
 #include "\d3s_cars_core_18\macros.hpp"
 class CfgPatches
{
   	class EM_Police_Faction
    {
    	units[]=
    	{
    		"EM_Malibu",
    		"EM_Malibu_UM",
    		"EM_Police_Charger",
    		"EM_Police_CrownVic", 	//done
    		"EM_Police_Civic",		//done
    		"EM_Police_Explorer",	//done
    		"EM_Police_Explorer_UM",//done
    		"EM_Police_BMWX6",		//done
    		"EM_Police_BMWX6_UM",	//done
    		"EM_Police_BMWM5",		//done
    		"EM_Police_Insurgent", 	//done
    		"EM_Police_Raptor_UM",	//done
    		"EM_Police_Raptor",	 	//done
    		"EM_Police_Savana",		//done
    		"EM_Police_Taurus",		//done
    		"EM_Police_Taurus_UM",	//done
    		"EM_Police_F550_SWAT",	//done
    		"EM_Police_EC635"
    	};
    	weapons[]={};
    	requiredVersion = 0.1;
		requiredAddons[]=
		{
			"A3_Soft_F"
		};
    	author = "Jakes";
    };
};
class cfgFactionClasses
{ 
	class Expansion_Mod_Police
	{
		displayName = "[EM] Police";
		priority = 1;
		side = 1;
	};
};
class CfgEditorCategories
{
	class EM_Police
	{
		displayName = "[EM] Police";
	};
};
class CfgEditorSubcategories
{
    class EdSubcat_HighwayPatrol
    {
        displayName = "Vehicle Highway";
    };    
    class EdSubcat_Marked
    {
        displayName = "Vehicle Marked";
    };
    class EdSubcat_Unmarked
    {
        displayName = "Vehicle Unmarked";
    };
    class EdSubcat_Police_Aircraft
    {
        displayName = "Aircraft";
    };
};
/*
		editorCategory = "EM_Police";
		faction = "Expansion_Mod_Police";
		editorSubcategory = "EdSubcat_HighwayPatrol";
		editorSubcategory = "EdSubcat_Marked";
		editorSubcategory = "EdSubcat_HighwayPatrol";
		editorSubcategory = "EdSubcat_Unmarked";
		editorSubcategory = "EdSubcat_Police_Aircraft";
*/
class DefaultEventhandlers;
class cfgWeapons
{
	class Default;
	class Airhorn: Default
	{
		cursor = "";
		cursorAim = "";
		scope = 2;
		displayName = "AirHorn";
		reloadTime = 0;
		drySound[] = 
		{
			"\Expansion_Mod_Police\Vehicles\Sounds\beep.ogg", 5, 1, 200
		};
		canLock = 0;
		optics = 0;
		enableAttack = 0;
	};
	class Priority1: Airhorn
	{
		cursor = "";
		displayName = "Priority 1 (Beep)";
		drySound[] = 
		{
			"\Expansion_Mod_Police\Vehicles\Sounds\Priority1.ogg", 5, 1, 200
		};
	};
	class Priority2: Airhorn
	{
		cursor = "";
		displayName = "Priority 2 (Warble)";
		drySound[] = 
		{
			"\Expansion_Mod_Police\Vehicles\Sounds\Priority2.ogg", 5, 1, 200
		};
	};
	class Priority3: Airhorn
	{
		cursor = "";
		displayName = "Priority 3 (Whoop1)";
		drySound[] = 
		{
			"\Expansion_Mod_Police\Vehicles\Sounds\Priority3.ogg", 5, 1, 200
		};
	};
	class Priority4: Airhorn
	{
		cursor = "";
		displayName = "Priority 4 (Whoop2)";
		drySound[] = 
		{
			"\Expansion_Mod_Police\Vehicles\Sounds\Priority4.ogg", 5, 1, 200
		};
	};
	class Priority5: Airhorn
	{
		cursor = "";
		displayName = "Priority 5 (Piercer)";
		drySound[] = 
		{
			"\Expansion_Mod_Police\Vehicles\Sounds\Priority5.ogg", 5, 1, 200
		};
	};
	class Priority6: Airhorn
	{
		cursor = "";
		displayName = "Priority 6 (Crossing)";
		drySound[] = 
		{
			"\Expansion_Mod_Police\Vehicles\Sounds\Priority6.ogg", 5, 1, 200
		};
	};
};
//-----------------------------------------------------------------------------------Siren
class CfgSounds
{
	sounds[]=
	{
		"Police_Siren" //--shsgn
	};
	class Police_Siren
	{
		name="Police_Siren";
		sound[]=
		{
			"\Expansion_Mod_Police\Vehicles\Sounds\SA_Siren.ogg",
			5,
			1,
			250
		};
		titles[]={};
	};
};

class CfgVehicles
{
	class HoodA;
	class HoodB;
	class Bump;
	class Bump1;
	class Extra;
	class PLTN;
	class LMTD;
	class Pbar;
	class pstroke;
	class COP;
	class CHR;
	class BLK;
	class rearlights_1;
	class rearlights_2;
	class Extra1;
	class Extra2;
	class Top;
	class Top1;
	class Mirrors;
	class Mirrors1;
	class Diffuser;
	class Diffuser1;
	class Chrome;
	class Chrome1;
	class Radar;
	class SpotLight;
	class Bar;
	class TopLightbar;
	class Copadd;
	class PStark;
	class PBar2;
	class PBar3;
	class PSpotlight;
	class PSpotlight2;
	class PRadar;
	class PSpoiler2;
	class PUnm;
	class Unmadd;
	class CIV;
	class Caution;
	class AnimationSources;
	class nomerf;
	class UNM;
	class toplight;
	class d3s_malibu_18_COP;
	class EM_Malibu: d3s_malibu_18_COP
	{
		author="DANZ";
		displayName="Malibu";
		vehicleClass="CAR";
        scope = 2;
        scopeCurator = 2;
        crew = "Expansion_Mod_Police_Corporal";
        side = 1;
		faction="Expansion_Mod_Police";
		editorSubcategory = "EdSubcat_HighwayPatrol";
		armor=60;
		maxSpeed=295;
		enginePower=345;
		peakTorque=600;
		weapons[]=
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
		hiddenSelectionsTextures[]=
		{
			"Expansion_Mod_Police\Vehicles\Malibu.paa",
			"#(argb,8,8,3)color(0.501961,0.501961,0.501961,1.0,CO)",
			"d3s_malibu_18\data\mal_window.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class AnimationSources: AnimationSources
		{
			class nomerf: nomerf
			{
				initPhase=1;
			};
			class UNM: UNM
			{
				initPhase=1;
			};
			class toplight: toplight
			{
				initPhase=1;
			};
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
		};
	};
	class d3s_malibu_18_UNM;
	class EM_Malibu_UM: d3s_malibu_18_UNM
	{
		author="Jakes";
		scope=2;
		scopeCurator=2;
        crew = "Expansion_Mod_Police_Detective1";
        side = 1;
		editorCategory = "EM_Police";
        faction="Expansion_Mod_Police";
        editorSubcategory="EdSubcat_Unmarked";
		armor=60;
		maxSpeed=295;
		enginePower=345;
		peakTorque=600;
		displayName="Malibu";
		weapons[]=
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};		
		hiddenSelectionsTextures[]=
		{
			"d3s_cars_core\data\black.paa",
			"#(argb,8,8,3)color(0.501961,0.501961,0.501961,1.0,CO)",
			"d3s_charger_15\data\CHR_window.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class AnimationSources: AnimationSources
		{
			class nomerf: nomerf
			{
				initPhase=1;
			};
			class UNM: UNM
			{
				initPhase=1;
			};
			class toplight: toplight
			{
				initPhase=0;
			};
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
		};
	};	
	class d3s_charger_15_CPP;
	class EM_Police_Charger: d3s_charger_15_CPP
	{
		editorPreview = "\Expansion_Mod_Police\Vehicles\ui\Charger.jpg";
		author="Jakes";
		model="\d3s_charger_15\CHARGER_15_CPP";
		displayName="Charger";
		vehicleClass="CAR";
		scope=2;
		scopeCurator=2;
		crew="Expansion_Mod_Police_Officer";
		side=1;
		editorCategory = "EM_Police";
		faction = "Expansion_Mod_Police";
		editorSubcategory = "EdSubcat_Marked";
        armor=60;
		maxSpeed=270;
		enginePower=345;
		peakTorque=550;
		weapons[]=
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
		hiddenSelectionsTextures[]=
		{
			"Expansion_Mod_Police\Vehicles\charger.paa",
			"d3s_cars_core\data\black_co.paa",
			"d3s_charger_15\data\CHR_window.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class AnimationSources: AnimationSources
		{
			class PBar: PBar
			{
				initPhase=1;
			};
			class PStark: PStark
			{
				initPhase=1;
			};
			class PBar2: PBar2
			{
				initPhase=1;
			};
			class PBar3: PBar3
			{
				initPhase=0;
			};
			class PSpotlight: PSpotlight
			{
				initPhase=0;
			};
			class PSpotlight2: PSpotlight2
			{
				initPhase=0;
			};
			class PRadar: PRadar
			{
				initPhase=1;
			};
			class PSpoiler2: PSpoiler2
			{
				initPhase=1;
			};
			class PUnm: PUnm
			{
				initPhase=0;
			};
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class Pcam
			{
				displayName="Camera";
				position="drivewheel";
				radius=1000;
				condition="driver this == player";
				statement="this execVM '\d3s_charger_15\scripts\Pcam.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
		};
	};	
	class d3s_crown_98_PD;
	class EM_Police_CrownVic: d3s_crown_98_PD
	{
		editorPreview = "\Expansion_Mod_Police\Vehicles\ui\Crownvic.jpg";
		author="DANZ";
		model="\d3s_crown_98\CROWN_98_CVPI";
		displayName="Crown Vic";
		vehicleClass="CAR";
		scope=2;
		scopeCurator=2;
		crew="Expansion_Mod_Police_Officer";
		side=1;
		faction="Expansion_Mod_Police";
		editorSubcategory="EdSubcat_Marked";
		terrainCoef=2;
		armor=60;
		maxSpeed=230;
		enginePower=200;
		peakTorque=280;
		weapons[] = 
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
		hiddenSelectionsTextures[]=
		{
			"Expansion_Mod_Police\Vehicles\CrownVic.paa",
			"",
			"d3s_crown_98\data\cvpi_window.paa",
			"",
			"",
			"",
			""
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE 
			MACRO_TURN_RIGHT_ETEINT
		};
	};
//--------------------------------------------------------------------------------Civic
	class HitLFWheel;
	class HitLF2Wheel;
	class HitRFWheel;
	class HitRF2Wheel;
	class HitFuel;
	class HitEngine;
	class HitBody;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	class HitGlass5;
	class HitGlass6;
	class HitPoints;
	class spoilerR;
	class bodyshell2;
	class EventHandlers;
	class d3s_civic_17_COP;
	class EM_Police_Civic: d3s_civic_17_COP
	{
        author = "DANZ";
        editorPreview = "\Expansion_Mod_Police\Vehicles\ui\Civic.jpg";
        vehicleClass = "CAR";
        displayName = "Civic";
        model = "\d3s_civic_17\civic_17_COP";
        scope = 2;
        scopeCurator = 2;
        crew = "Expansion_Mod_Police_Corporal";
        side = 1;
		faction="Expansion_Mod_Police";
		editorSubcategory = "EdSubcat_HighwayPatrol";
        frontRearSplit = 0.8;
        armor=60;
		maxSpeed=290;
		enginePower=335;
		peakTorque=550;
        class HitPoints: HitPoints {
            class HitLFWheel: HitLFWheel {
                armor = 3.5;
                passThrough = 0;
            };
            class HitLF2Wheel: HitLF2Wheel {
                armor = 3.5;
                passThrough = 0;
            };
            class HitRFWheel: HitRFWheel {
                armor = 3.5;
                passThrough = 0;
            };
            class HitRF2Wheel: HitRF2Wheel {
                armor = 3.5;
                passThrough = 0;
            };
            class HitFuel: HitFuel {
                armor = 15;
                material = -1;
                name = "fueltank";
                passThrough = 0.2;
            };
            class HitEngine: HitEngine {
                armor = 15;
                material = -1;
                name = "engine";
                passThrough = 0.2;
            };
            class HitBody: HitBody {
                passThrough = 1;
                name = "body";
                visual = "camo1";
            };
            class HitGlass1: HitGlass1 {
                armor = 3.5;
                passThrough = 1;
            };
            class HitGlass2: HitGlass2 {
                armor = 3.5;
                passThrough = 1;
            };
            class HitGlass3: HitGlass3 {
                armor = 3.5;
                passThrough = 1;
            };
            class HitGlass4: HitGlass4 {
                armor = 3.5;
                passThrough = 1;
            };
            class HitGlass5: HitGlass5 {
                armor = 3.5;
                passThrough = 1;
            };
            class HitGlass6: HitGlass6 {
                armor = 3.5;
                passThrough = 1;
            };
        };
		weapons[] = 
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
        hiddenSelectionsTextures[] = {
            "Expansion_Mod_Police\Vehicles\HondaCivic.paa",
            "d3s_civic_17\data\Wheel1B.paa",
            "d3s_charger_15\data\CHR_window.paa",
            "","","","","","","","","","","","","","","","","","","","","","","","","","","",""
        };
        class top1;
        class top2;
        class mir1;
        class mir2;
        class AnimationSources: AnimationSources {
            class spoilerR: spoilerR {
                initPhase = 1;
            };
            class top1: top1 {
                initPhase = 0;
            };
            class top2: top2 {
                initPhase = 1;
            };
            class mir1: mir1 {
                initPhase = 0;
            };
            class mir2: mir2 {
                initPhase = 1;
            };
        };
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
        };
    };
 //-------------------------------------------------------------------------------Explorer
    class d3s_FPIU_13;
	class EM_Police_Explorer: d3s_FPIU_13
	{
		author="DANZ";
		editorPreview = "\Expansion_Mod_Police\Vehicles\ui\Explorer.jpg";
		model="\d3s_explorer_13\FPIU_13";
		displayName="Explorer";
		vehicleClass="CAR";
		scope=2;
		scopeCurator=2;
		crew="Expansion_Mod_Police_Sergeant";
		side=1;
		editorCategory="EM_Police";
		editorSubcategory="EdSubcat_Marked";
		faction="Expansion_Mod_Police";
		switchTime=0.1;
		armor=90;
		maxSpeed=255;
		enginePower=470;
		peakTorque=790;
		weapons[] = 
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
		hiddenSelectionsTextures[]=
		{
			"Expansion_Mod_Police\Vehicles\Explorer.paa",
			"d3s_cars_core\data\black_co.paa",
			"d3s_explorer_13\data\exp_windows.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class Pcam
			{
				displayName="$STR_Veh_Camera";
				position="drivewheel";
				radius=1000;
				condition="driver this == player";
				statement="this execVM '\d3s_explorer_13\data\scripts\Pcam.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
		};
	};    
	class d3s_tahoe_UNM;
	class EM_Police_Explorer_UM: d3s_tahoe_UNM
	{
        author = "DANZ";
        editorPreview = "\Expansion_Mod_Police\Vehicles\ui\Explorer_um.jpg";
        model = "\d3s_explorer_13\EXPLORER_UNM_13";
        displayName = "Explorer";
        vehicleClass = "CAR";
        scope = 2;
        scopeCurator = 2;
        crew = "Expansion_Mod_Police_Detective1";
        side = 1;
		editorCategory = "EM_Police";
        faction="Expansion_Mod_Police";
        editorSubcategory="EdSubcat_Unmarked";
        switchTime = 0.1;
        armor = 90;
		maxSpeed=255;
		enginePower=480;
		peakTorque=780;
		weapons[] = 
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
        hiddenSelectionsTextures[] = {
            "d3s_cars_core\data\black_co.paa",
            "d3s_explorer_13\data\exp_wheel_black.paa",
            "d3s_charger_15\data\CHR_window.paa",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
        };
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Undercover_Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Undercover_Lights_On.sqf';";
				onlyForplayer=0;
			};
            class Pcam {
                displayName = "$STR_Veh_Camera";
                position = "drivewheel";
                radius = 1000;
                condition = "driver this == player";
                statement = "this execVM '\d3s_explorer_13\data\scripts\Pcam.sqf';";
                onlyForplayer = 0;
            };
            MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
        };
		class TextureSources
		{
			class Baby_blue
			{
				displayName="Baby_blue";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Baby_Blue.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Grey
			{
				displayName="Grey";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Grey.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Navy_Blue
			{
				displayName="Navy Blue";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Navy_Blue.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Red
			{
				displayName="Red";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Red.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class White
			{
				displayName="White";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_White.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Black
			{
				displayName="Black";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Black.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
		};
		textureList[]=
		{
			"Baby_blue",
			1,
			"Grey",
			1,
			"Navy_Blue",
			1,
			"Red",
			1,
			"White",
			1,
			"Black",
			1
		};
    };    
//--------------------------------------------------------------------------------BMW X6
	class d3s_f86_15_base;
	class EM_Police_BMWX6: d3s_f86_15_base
	{
		author="DANZ";
		editorPreview = "\Expansion_Mod_Police\Vehicles\ui\BMW_x6.jpg";
		model="\d3s_f86_15\F86_15_COP";
		displayName="X6";
		vehicleClass="CAR";
		scope=2;
		scopeCurator=2;
		crew="Expansion_Mod_Police_Sergeant";
		side=1;
		faction="Expansion_Mod_Police";
		editorSubcategory = "EdSubcat_HighwayPatrol";
		switchTime=0.1;
		armor=100;
		maxSpeed=275;
		enginePower=5200;
		peakTorque=850;
		weapons[] = 
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
		hiddenSelectionsTextures[]=
		{
			"Expansion_Mod_Police\Vehicles\BMW_X6.paa",
			"#(argb,8,8,3)color(0.752941,0.752941,0.752941,1.0,co)",
			"d3s_f86_15\data\f86_window.paa",
			"d3s_f86_15\data\f86_caliper_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class AnimationSources: AnimationSources
		{
			class HoodA: HoodA
			{
				initPhase=1;
			};
			class HoodB: HoodB
			{
				initPhase=0;
			};
			class Bump: Bump
			{
				initPhase=1;
			};
			class Bump1: Bump1
			{
				initPhase=0;
			};
			class Extra: Extra
			{
				initPhase=0;
			};
			class Extra1: Extra1
			{
				initPhase=0;
			};
			class Extra2: Extra2
			{
				initPhase=0;
			};
			class Top: Top
			{
				initPhase=1;
			};
			class Top1: Top1
			{
				initPhase=0;
			};
			class Mirrors: Mirrors
			{
				initPhase=1;
			};
			class Mirrors1: Mirrors1
			{
				initPhase=0;
			};
			class Diffuser: Diffuser
			{
				initPhase=0;
			};
			class Diffuser1: Diffuser1
			{
				initPhase=1;
			};
			class Chrome: Chrome
			{
				initPhase=1;
			};
			class Chrome1: Chrome1
			{
				initPhase=0;
			};
			class Radar: Radar
			{
				initPhase=1;
			};
			class Spotlight: Spotlight
			{
				initPhase=1;
			};
			class Bar: Bar
			{
				initPhase=1;
			};
			class Toplightbar: Toplightbar
			{
				initPhase=1;
			};
			class Copadd: Copadd
			{
				initPhase=1;
			};
			class Unmadd: Unmadd
			{
				initPhase=1;
			};
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class Pcam
			{
				displayName="$STR_Veh_Camera";
				position="drivewheel";
				radius=1000;
				condition="driver this == player";
				statement="this execVM '\d3s_explorer_13\data\scripts\Pcam.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
		};
	};
	class d3s_f86_15_UNM;
	class EM_Police_BMWX6_UM: d3s_f86_15_UNM
	{
		author="DANZ";
		editorPreview = "\Expansion_Mod_Police\Vehicles\ui\BMW_x6_um.jpg";
		model="\d3s_f86_15\F86_15_COP";
		displayName="X6";
		vehicleClass="CAR";
		scope=2;
		scopeCurator=2;
		crew="Expansion_Mod_Police_Detective2";
		side=1;
		faction="Expansion_Mod_Police";
		editorSubcategory="EdSubcat_Unmarked";
		switchTime=0.1;
		armor=100;
		maxSpeed=275;
		enginePower=520;
		peakTorque=850;
		weapons[] = 
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
		hiddenSelectionsTextures[]=
		{
			"d3s_f86_15\data\skins\F86_Black_Sapphire.paa",
			"#(argb,8,8,3)color(0.752941,0.752941,0.752941,1.0,co)",
			"d3s_charger_15\data\CHR_window.paa",
			"d3s_f86_15\data\f86_caliper_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class AnimationSources: AnimationSources
		{
			class HoodA: HoodA
			{
				initPhase=1;
			};
			class HoodB: HoodB
			{
				initPhase=0;
			};
			class Bump: Bump
			{
				initPhase=1;
			};
			class Bump1: Bump1
			{
				initPhase=0;
			};
			class Extra: Extra
			{
				initPhase=1;
			};
			class Extra1: Extra1
			{
				initPhase=0;
			};
			class Extra2: Extra2
			{
				initPhase=0;
			};
			class Top: Top
			{
				initPhase=1;
			};
			class Top1: Top1
			{
				initPhase=0;
			};
			class Mirrors: Mirrors
			{
				initPhase=1;
			};
			class Mirrors1: Mirrors1
			{
				initPhase=0;
			};
			class Diffuser: Diffuser
			{
				initPhase=0;
			};
			class Diffuser1: Diffuser1
			{
				initPhase=1;
			};
			class Chrome: Chrome
			{
				initPhase=1;
			};
			class Chrome1: Chrome1
			{
				initPhase=0;
			};
			class Radar: Radar
			{
				initPhase=0;
			};
			class Spotlight: Spotlight
			{
				initPhase=0;
			};
			class Bar: Bar
			{
				initPhase=0;
			};
			class Toplightbar: Toplightbar
			{
				initPhase=0;
			};
			class Copadd: Copadd
			{
				initPhase=0;
			};
			class Unmadd: Unmadd
			{
				initPhase=1;
			};
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Undercover_Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Undercover_Lights_On.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
		};
		class TextureSources
		{
			class Baby_blue
			{
				displayName="Baby_blue";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Baby_Blue.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Grey
			{
				displayName="Grey";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Grey.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Navy_Blue
			{
				displayName="Navy Blue";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Navy_Blue.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Red
			{
				displayName="Red";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Red.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class White
			{
				displayName="White";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_White.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Black
			{
				displayName="Black";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Black.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
		};
		textureList[]=
		{
			"Baby_blue",
			1,
			"Grey",
			1,
			"Navy_Blue",
			1,
			"Red",
			1,
			"White",
			1,
			"Black",
			1
		};
	};
//--------------------------------------------------------------------------------BMW M5
	class d3s_f90_18_base;
	class EM_Police_BMWM5: d3s_f90_18_base
	{
		author="DANZ";
		editorPreview = "\Expansion_Mod_Police\Vehicles\ui\m5.jpg";
		vehicleClass="CAR";
		model="\d3s_f90_18\F90_18_COP";
		displayName="M5";
		scope=2;
		scopeCurator=2;
		crew="Expansion_Mod_Police_Sergeant";
		side=1;
		faction="Expansion_Mod_Police";
		editorSubcategory = "EdSubcat_HighwayPatrol";
		terrainCoef=2;
		armor=60;
		maxSpeed=335;
		enginePower=375;
		peakTorque=690;
		weapons[] = 
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
		hiddenSelectionsTextures[]=
		{
			"Expansion_Mod_Police\Vehicles\BMW_M5.paa",
			"d3s_f90_18\data\f90_wheel_co.paa",
			"d3s_f90_18\data\F90_window.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class Pcam
			{
				displayName="$STR_Veh_Camera";
				position="drivewheel";
				radius=1000;
				condition="driver this == player";
				statement="this execVM '\d3s_f90_18\data\scripts\Pcam.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
		};
	};
//--------------------------------------------------------------------------------Insurgent
	class d3s_insurgent_gtaV_base;
	class EM_Police_Insurgent: d3s_insurgent_gtaV_base
	{
		author="DANZ";
		editorCategory="EM_Police";
		editorPreview = "\Expansion_Mod_Police\Vehicles\ui\Insurgent.jpg";
		displayName="Insurgent (SWAT)";
		scope=2;
		scopeCurator=2;
		crew="Expansion_Mod_SWAT_Officer";
		side=1;
		faction="Expansion_Mod_Police";
		editorSubcategory="EdSubcat_Marked";
		maxSpeed=150;
		enginePower=355;
		peakTorque=580;
		weapons[] = 
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
		hiddenSelectionsTextures[]=
		{
			"Expansion_Mod_Police\Vehicles\Insurgent.paa",
			"d3s_insurgent_gtav\data\vehicle_generic_tyrewallblack.paa",
			"d3s_insurgent_gtav\data\vehicle_generic_glasswindows2.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=1;
				explosionShielding=4;
				radius=0.33000001;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=1;
				explosionShielding=4;
				radius=0.33000001;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=1;
				explosionShielding=4;
				radius=0.33000001;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=1;
				explosionShielding=4;
				radius=0.33000001;
			};
			class HitFuel
			{
				armor=0.5;
				material=-1;
				name="palivo";
				visual="";
				passThrough=0.5;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.25;
			};
			class HitHull
			{
				armor=1;
				material=-1;
				name="palivo";
				visual="";
				passThrough=0.5;
				minimalHit=0.2;
				explosionShielding=0.60000002;
				radius=0.25;
			};
			class HitEngine
			{
				armor=1;
				material=-1;
				name="motor";
				visual="";
				passThrough=0.30000001;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.44999999;
			};
			class HitBody
			{
				armor=6;
				material=-1;
				name="karoserie";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.0099999998;
				explosionShielding=1.5;
				radius=0.44999999;
			};
			class HitGlass1: HitGlass1
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass5: HitGlass5
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass6: HitGlass6
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
		};
		class AnimationSources: AnimationSources
		{
			class bodyshell2: bodyshell2
			{
				initPhase=0.5;
			};
			class COP: COP
			{
				initPhase=1;
			};
			class CIV: CIV
			{
				initPhase=0;
			};
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Insurgent_Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Insurgent_Lights_On.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
		};
	};
//--------------------------------------------------------------------------------Raptor
	class d3s_raptor_17_base;
	class EM_Police_Raptor_UM: d3s_raptor_17_base
	{
		author="DANZ";
		editorPreview = "\Expansion_Mod_Police\Vehicles\ui\Raptor_um.jpg";
		model="\d3s_raptor_17\RAPTOR_UNM_17";
		displayName="Raptor";
		vehicleClass="CAR";
		scope=2;
		scopeCurator=2;
		crew="Expansion_Mod_Police_Detective3";
		side=1;
		faction="Expansion_Mod_Police";
		editorSubcategory="EdSubcat_Unmarked";
		switchTime=0.1;
		armor=100;
		maxSpeed=245;
		enginePower=440;
		peakTorque=790;
		weapons[] = 
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0,0,0,1.0,CO)",
			"#(argb,8,8,3)color(0.501961,0.501961,0.501961,1.0,co)",
			"d3s_charger_15\data\CHR_window.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"d3s_raptor_17\data\metallic.rvmat",
			"d3s_cars_core\data\wheel.rvmat",
			"d3s_cars_core\data\glass_window.rvmat",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Undercover_Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Undercover_Lights_On.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
		};
		class TextureSources
		{
			class Baby_blue
			{
				displayName="Baby_blue";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Baby_Blue.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Grey
			{
				displayName="Grey";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Grey.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Navy_Blue
			{
				displayName="Navy Blue";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Navy_Blue.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Red
			{
				displayName="Red";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Red.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class White
			{
				displayName="White";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_White.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Black
			{
				displayName="Black";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Black.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
		};
		textureList[]=
		{
			"Baby_blue",
			1,
			"Grey",
			1,
			"Navy_Blue",
			1,
			"Red",
			1,
			"White",
			1,
			"Black",
			1
		};
	};
	class EM_Police_Raptor: d3s_raptor_17_base
	{
		author="DANZ";
		editorPreview = "\Expansion_Mod_Police\Vehicles\ui\Raptor.jpg";
		model="\d3s_raptor_17\RAPTOR_PRP_17";
		displayName="Raptor";
		wheelDestroyRadiusCoef=0.69999999;
		transportSoldier=6;
		scope=2;
		scopeCurator=2;
		crew="Expansion_Mod_Police_Corporal";
		side=1;
		faction="Expansion_Mod_Police";
		editorSubcategory="EdSubcat_Marked";
		switchTime=0.1;
		armor=100;
		maxSpeed=245;
		enginePower=440;
		peakTorque=790;
		weapons[] = 
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
		hiddenSelectionsTextures[]=
		{
			"Expansion_Mod_Police\Vehicles\Raptor.paa",
			"#(argb,8,8,3)color(0,0,0,1.0,CO)",
			"d3s_raptor_17\data\raptor_window.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class AnimationSources: AnimationSources
		{
			class Caution: Caution
			{
				initPhase=0;
			};
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
		};
	};
//--------------------------------------------------------------------------------Savana
	class d3s_savana_05_base;
	class EM_Police_Savana: d3s_savana_05_base
	{
		author="DANZ";
		editorPreview = "\Expansion_Mod_Police\Vehicles\ui\Savana.jpg";
		model="\d3s_savana_05\SAVANA_PSV_05";
		displayName="Savana";
		scope=2;
		scopeCurator=2;
		crew="Expansion_Mod_Police_Rookie";
		side=1;
		editorCategory = "EM_Police";
		faction = "Expansion_Mod_Police";
		editorSubcategory = "EdSubcat_Marked";
		terrainCoef=0;
		switchTime=0.1;
		armor=60;
		enginePower = 300;
		peakTorque = 690;
		maxSpeed = 165;
		weapons[] = 
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
		hiddenSelectionsTextures[]=
		{
			"Expansion_Mod_Police\Vehicles\Savana.paa",
			"d3s_savana_05\data\GMC_wheel_black.paa",
			"d3s_savana_05\data\GMC_windows.paa",
			"d3s_savana_05\data\GMC2_wheel_black.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class Pcam
			{
				displayName="$STR_Veh_Camera";
				position="drivewheel";
				radius=1000;
				condition="driver this == player";
				statement="this execVM '\d3s_explorer_13\data\scripts\Pcam.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
		};
	};
//--------------------------------------------------------------------------------Taurus
	class d3s_taurus_FPI_10;
	class EM_Police_Taurus: d3s_taurus_FPI_10
	{
		author="DANZ";
		editorPreview = "\Expansion_Mod_Police\Vehicles\ui\Taurus.jpg";
		model="\d3s_taurus_10\TAURUS_10_FPI";
		displayName="Taurus";
		vehicleClass="CAR";
		scope=2;
		scopeCurator=2;
		crew="Expansion_Mod_Police_Officer";
		side=1;
		editorCategory = "EM_Police";
		faction = "Expansion_Mod_Police";
		editorSubcategory = "EdSubcat_Marked";
		terrainCoef=2;
		armor=60;
		maxSpeed=275;
		enginePower=340;
		peakTorque=490;
		weapons[] = 
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
		hiddenSelectionsTextures[]=
		{
			"Expansion_Mod_Police\Vehicles\Taurus.paa",
			"d3s_taurus_10\data\sho_windows.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_On.sqf';";
				onlyForplayer=0;
			};
			class Pcam
			{
				displayName="$STR_Veh_Camera";
				position="drivewheel";
				radius=1000;
				condition="driver this == player";
				statement="this execVM '\d3s_explorer_13\data\scripts\Pcam.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
		};
	};
	class d3s_taurus_UNM_10;
	class EM_Police_Taurus_UM: d3s_taurus_UNM_10
	{
		author="DANZ";
		editorPreview = "\Expansion_Mod_Police\Vehicles\ui\Taurus_um.jpg";
		model="\d3s_taurus_10\TAURUS_10_UNM";
		displayName="Taurus";
		vehicleClass="CAR";
		scope=2;
		scopeCurator=2;
		crew="Expansion_Mod_Police_Detective4";
		side=1;
		editorCategory = "EM_Police";
		faction = "Expansion_Mod_Police";
		editorSubcategory = "EdSubcat_Unmarked";
		terrainCoef=2;
		armor=60;
		maxSpeed=275;
		enginePower=340;
		peakTorque=490;
		weapons[] = 
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
		hiddenSelectionsTextures[]=
		{
			"Expansion_Mod_Police\Vehicles\Black.paa",
			"d3s_charger_15\data\CHR_window.paa",
			"d3s_taurus_10\data\sho_wheel_black.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Undercover_Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Undercover_Lights_On.sqf';";
				onlyForplayer=0;
			};
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
		};
		class TextureSources
		{
			class Baby_blue
			{
				displayName="Baby_blue";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Baby_Blue.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Grey
			{
				displayName="Grey";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Grey.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Navy_Blue
			{
				displayName="Navy Blue";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Navy_Blue.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Red
			{
				displayName="Red";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_Red.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class White
			{
				displayName="White";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Alt_White.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class Black
			{
				displayName="Black";
				textures[]=
				{
					"Expansion_Mod_Police\Vehicles\Black.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class ginger_ale
			{
				displayName="Ginger Ale";
				textures[]=
				{
					"\d3s_taurus_10\data\skins\ginger_ale.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class green_gem
			{
				displayName="Green Gem";
				textures[]=
				{
					"\d3s_taurus_10\data\skins\green_gem.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
			class kodial_brown
			{
				displayName="Kodial Brown";
				textures[]=
				{
					"\d3s_taurus_10\data\skins\kodial_brown.paa"
				};
				factions[]={"Expansion_Mod_Police"};
			};
		};
		textureList[]=
		{
			"Baby_blue",
			1,
			"Grey",
			1,
			"Navy_Blue",
			1,
			"Red",
			1,
			"White",
			1,
			"ginger_ale",
			1,
			"green_gem",
			1,
			"kodial_brown",
			1,
			"Black",
			1
		};
	};
	class d3s_fseries_LTD_17;
	class EM_Police_F550_SWAT: d3s_fseries_LTD_17
	{
		author="DANZ";
		editorPreview = "\Expansion_Mod_Police\Vehicles\ui\F550.jpg";
		model="\d3s_fseries_15\F550_17_P3E";
		displayName="F550 (SWAT Utility)";
		vehicleClass="CAR";
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_low01",
			"passenger_low01",
			"passenger_low01"
		};
		cargoInAction[]=
		{
			"passenger_low01",
			"passenger_low01",
			"passenger_low01",
			"passenger_low01"
		};
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInCargo[]=
		{
			"pos cargo 1",
			"pos cargo 2",
			"pos cargo 3",
			"pos cargo 4",
			"pos cargo 5"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo 1 dir",
			"pos cargo 2 dir",
			"pos cargo 3 dir",
			"pos cargo 4 dir",
			"pos cargo 5 dir"
		};
		extCameraPosition[]={0,3,-10};
		scope=2;
		scopeCurator=2;
		transportSoldier=4;
		crew="Expansion_Mod_SWAT_Breacher";
		side=1;
		editorCategory = "EM_Police";
		faction = "Expansion_Mod_Police";
		editorSubcategory = "EdSubcat_Marked";
		terrainCoef=2;
		switchTime=0.1;
		armor=60;
		enginePower = 320;
		peakTorque = 790;
		maxSpeed = 145;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=1;
				explosionShielding=4;
				radius=0.33000001;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=1;
				explosionShielding=4;
				radius=0.33000001;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=1;
				explosionShielding=4;
				radius=0.33000001;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=1;
				explosionShielding=4;
				radius=0.33000001;
			};
			class HitFuel
			{
				armor=0.5;
				material=-1;
				name="palivo";
				visual="";
				passThrough=0.5;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.25;
			};
			class HitHull
			{
				armor=1;
				material=-1;
				name="palivo";
				visual="";
				passThrough=0.5;
				minimalHit=0.2;
				explosionShielding=0.60000002;
				radius=0.25;
			};
			class HitEngine
			{
				armor=1;
				material=-1;
				name="motor";
				visual="";
				passThrough=0.30000001;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.44999999;
			};
			class HitBody
			{
				armor=6;
				material=-1;
				name="karoserie";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.0099999998;
				explosionShielding=1.5;
				radius=0.44999999;
			};
			class HitGlass1: HitGlass1
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass5: HitGlass5
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass6: HitGlass6
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
		};
		weapons[] = 
		{
			"Airhorn",
			"Priority1",
			"Priority2",
			"Priority3",
			"Priority4",
			"Priority5",
			"Priority6"
		};
		hiddenSelectionsTextures[]=
		{
			"\Expansion_Mod_Police\Vehicles\F550_SWAT_1.paa",
			"\Expansion_Mod_Police\Vehicles\F550_SWAT_2.paa",
			"d3s_fseries_15\data\base2.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class EventHandlers
		{
			init="_this execVM ""\Expansion_Mod_Police\Vehicles\Scripts\init_gn.sqf"";if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";			
		};
		class UserActions
		{
			class CODE_1
			{
				displayName="<t color='#ff0301'>Desligado (STAFF) 1</t>";
				position="drivewheel";
				shortcut = "lookLeftDown";
				radius=1000;
				condition="driver this isEqualTo player";
				statement="this setVariable ['Code2',1,true];this setVariable ['Code3',1,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_Off.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Lights_Off.sqf';";
				onlyForplayer=0;
			};
			class CODE_2
			{
				displayName="<t color='#2411ff'>Giroflex (STAFF) 2</t>";
				position="drivewheel";
				shortcut = "lookDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code2',0]) == 1";
				statement="this setVariable ['code2',0,true];this setVariable ['code3',0,true];this setVariable ['Police_Sound',0,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Undercover_Lights_On.sqf';";
				onlyForplayer=0;
			};
			class CODE_3
			{
				displayName="<t color='#720070'>Sirene (STAFF) 3</t>";
				position="drivewheel";
				shortcut = "lookRightDown";
				radius=1000;
				condition="player IN this && (this getVariable ['code3',0]) == 1";
				statement="this setVariable ['code3',0,true];this setVariable ['code2',0,true];this setVariable ['Police_Sound',1,true];this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\CODE2_On.sqf';this execVM '\Expansion_Mod_Police\Vehicles\Scripts\Lightbar\Undercover_Lights_On.sqf';";
				onlyForplayer=0;
			};
			/*class code2
			{
				displayName="Lights";
				position="drivewheel";
				radius=1000;
				condition="driver this==player";
				statement="this execVM '\d3s_fseries_15\scripts\code4.sqf';";
				onlyForplayer=0;
				showWindow=0;
			};*/
			MACRO_TURN_LEFT_ALLUMAGE
			MACRO_TURN_LEFT_ETEINT
			MACRO_TURN_RIGHT_ALLUMAGE
			MACRO_TURN_RIGHT_ETEINT
			class LeftRump_1
			{
				displayNameDefault="";
				displayName="Left Ramp Raise";
				position="drivewheel";
				radius=1000;
				onlyForPlayer=1;
				condition="this animationPhase ""Door_4_rot""<0.5 AND Alive(this)AND driver this==player;this animationPhase ""Door_5_rot""<0.5 AND Alive(this)AND driver this==player;this animationPhase ""Door_6_rot""<0.5 AND Alive(this)AND driver this==player;this animationPhase ""Door_7_rot""<0.5 AND Alive(this)AND driver this==player";
				statement="this animate[""Door_4_rot"",1];this animate[""Door_5_rot"",1];this animate[""Door_6_rot"",1];this animate[""Door_7_rot"",1]";
			};
			class LeftRump_2: LeftRump_1
			{
				displayName="Left Ramp Lower";
				condition="this animationPhase ""Door_4_rot"">=0.5 AND Alive(this)AND driver this==player;this animationPhase ""Door_5_rot"">=0.5 AND Alive(this)AND driver this==player;this animationPhase ""Door_6_rot"">=0.5 AND Alive(this)AND driver this==player;this animationPhase ""Door_7_rot"">=0.5 AND Alive(this)AND driver this==player";
				statement="this animate[""Door_4_rot"",0];this animate[""Door_5_rot"",0];this animate[""Door_6_rot"",0];this animate[""Door_7_rot"",0]";
			};
			class RightRump_1
			{
				displayNameDefault="";
				displayName="Right Ramp Raise";
				position="drivewheel";
				radius=1000;
				onlyForPlayer=1;
				condition="this animationPhase ""Door_8_rot""<0.5 AND Alive(this)AND driver this==player;this animationPhase ""Door_9_rot""<0.5 AND Alive(this)AND driver this==player;this animationPhase ""Door_10_rot""<0.5 AND Alive(this)AND driver this==player;this animationPhase ""Door_11_rot""<0.5 AND Alive(this)AND driver this==player";
				statement="this animate[""Door_8_rot"",1];this animate[""Door_9_rot"",1];this animate[""Door_10_rot"",1];this animate[""Door_11_rot"",1]";
			};
			class RightRump_2: RightRump_1
			{
				displayName="Right Ramp Lower";
				condition="this animationPhase ""Door_8_rot"">=0.5 AND Alive(this)AND driver this==player;this animationPhase ""Door_9_rot"">=0.5 AND Alive(this)AND driver this==player;this animationPhase ""Door_10_rot"">=0.5 AND Alive(this)AND driver this==player;this animationPhase ""Door_11_rot"">=0.5 AND Alive(this)AND driver this==player";
				statement="this animate[""Door_8_rot"",0];this animate[""Door_9_rot"",0];this animate[""Door_10_rot"",0];this animate[""Door_11_rot"",0]";
			};
		};
		class AnimationSources: AnimationSources
		{
			class PLTN: PLTN
			{
				initPhase=0;
			};
			class LMTD: LMTD
			{
				initPhase=0;
			};
			class pstroke: pstroke
			{
				initPhase=1;
			};
			class COP: COP
			{
				initPhase=1;
			};
			class CHR: CHR
			{
				initPhase=0;
			};
			class BLK: BLK
			{
				initPhase=0;
			};
			class rearlights_1: rearlights_1
			{
				initPhase=0;
			};
			class rearlights_2: rearlights_2
			{
				initPhase=0;
			};
		};
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=20;
				MOI=5.3000002;
				dampingRate=0.5;
				dampingRateDamaged=5;
				dampingRateDestroyed=5000;
				maxBrakeTorque=3500;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.1;
				mMaxDroop=0.1;
				sprungMass=650;
				springStrength=100000;
				springDamperRate=4000;
				longitudinalStiffnessPerUnitGravity=100000;
				latStiffX=18;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=4000;
				maxCompression=0.1;
				mMaxDroop=0.1;
				sprungMass=900;
				latStiffX=18;
				latStiffY=18000;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
				maxCompression=0.1;
				mMaxDroop=0.1;
				sprungMass=650;
				latStiffX=18;
				latStiffY=180;
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=4000;
				maxCompression=0.1;
				mMaxDroop=0.1;
				sprungMass=900;
				latStiffX=18;
				latStiffY=18000;
			};
		};
	};
//--------------------------------------------------------------------------------EC635
	class EC135GNlu;
	class EM_Police_EC635: EC135GNlu
	{
		author = "Jakes";
		editorPreview = "\Expansion_Mod_Police\Vehicles\ui\EC635.jpg";
		displayName="EC 635";
		scope = 2;
		side = 1;
		editorCategory = "EM_Police";
		faction = "Expansion_Mod_Police";
		editorSubcategory = "EdSubcat_Police_Aircraft";
		crew = "Expansion_Mod_Police_Rookie"
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[] = 
		{
			"\Expansion_Mod_Police\Vehicles\EC635_1.paa",
			"\Expansion_Mod_Police\Vehicles\EC635_2.paa",
			"\Expansion_Mod_Police\Vehicles\EC635_3.paa",
			"\Expansion_Mod_Police\Vehicles\EC635_4.paa",
			"\Expansion_Mod_Police\Vehicles\EC635_5.paa",
			""
		};
	};
	class I_Heli_light_03_unarmed_F;
	class Lynx_300_Trans: I_Heli_light_03_unarmed_F
	{
		author="Jakes";
		_generalMacro="Lynx_300_Trans";
		scope=1;
		scopeCurator=1;
		side = 1;
		editorCategory = "EM_Police";
		faction = "Expansion_Mod_Police";
		editorSubcategory = "EdSubcat_Police_Aircraft";
		displayName="Lynx";
		crew="Expansion_Mod_Police_Rookie";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]=
		{
			"SANDF_SAAF\Data\Lynx_300.paa"
		};
	};
};