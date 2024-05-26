class CfgPatches
{
	class Police_Gear
	{
		author="Jakes";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Characters_F_BLUFOR"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
            "Police_Riot_Vest",
            "Police_Smersh_Pack_Radio",
            "Police_Tactical_Vest",
            "Police_OfficerVest",
            "Police_SoldierVest",
            "Police_Modular_lite",
            "Police_Modular_Plain",
            "SWAT_Modular_lite",
            "SWAT_Modular_Combat",
            "SWAT_Modular_Heavy",
            "Police_Rangemaster_Combo",
            "Police_Rangemaster",
            "Police_Riot_Helmet",
            "Police_PilotHelmet",
            "Police_Headset1",
            "SWAT_Modular_Helmet",
            "SWAT_Modular_Helmet_Peltor",
            "SWAT_Modular_Helmet_Chops",
            "SWAT_Modular_Helmet_EarGuard",
            "Patrol_Cap",
            "Patrol_Cap_Badge",
            "Police_Beret_CMND",
            "Police_Beret",
            "V_Safety_yellow_F",
            "Police_Messenger_Bag",
            "Police_LegStrap",
            "Police_AssaultPack",
            "Police_Chestrig_v2",
            "POLICE_SoldierVestPack",
            "POLICE_Modular_litePack",
            "SWAT_Modular_litePack",
            "Police_Headset_Facewear",
            "Police_Balaclava",
            "Ballistic_Goggles"
		};
	};
};
class CfgWeapons
{
 	class ItemInfo;
    class HeadgearItem;
    class ItemCore;
    class Vest_NoCamo_Base;
//----------------------------------------------------------------------------VESTS 	
    class V_EOD_base_F;
    class Police_Riot_Vest: V_EOD_base_F
    {
        author = "Jakes";
        _generalMacro = "Police_Riot_Vest";
        scope = 2;
        displayName="PD Riot Vest";
        containerClass = "Supply80";
        mass = 60;
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_Riot_vest.paa";
        hiddenSelections[]={"Camo1","Camo2"};
        hiddenSelectionsTextures[]=
        {
            "\Expansion_Mod_Police\Gear\Vest_Riot_1.paa",
            "\Expansion_Mod_Police\Gear\Vest_Riot_2.paa"
        };
    };
    class Police_SmershVest_base: Vest_NoCamo_Base
    {
        scope = 0;
        model = "\A3\Characters_F_Enoch\Vests\V_SmershVest_01_F.p3d";
        hiddenSelections[] = {"Camo", "Camo2", "Radio1_hide"};
        descriptionShort = "No Armor";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_Enoch\Vests\V_SmershVest_01_F.p3d";
            hiddenSelections[] = {"Camo", "Camo2", "Radio1_hide"};
            containerClass = "Supply160";
            mass = 30;
            class HitpointsProtectionInfo
            {
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 1;
                };
            };
        };
    };
    class Police_Smersh_Pack_Radio: Police_SmershVest_base
    {
        author = "Jakes";
        _generalMacro = "SANDF_Smersh_Pack_Radio";
        scope = 2;
        displayName = "(Combo) PD Harness";
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_Vest_Smerch.paa";
        hiddenSelectionsTextures[] = 
        {
            "\Expansion_Mod_Police\Gear\Vest_Smerch_1.paa",
            "\Expansion_Mod_Police\Gear\Vest_Smerch_2.paa"
        };
        containerClass = "Supply150";
        mass = 30;
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.4;
                };
            };
        };
    };
    class V_DeckCrew_brown_F;
    class Police_Tactical_Vest: V_DeckCrew_brown_F
    {
		scope = 2;
		author = "Jakes";	   
		containerClass = "Supply80";
        mass = 30;
        displayName = "PD Tactical Vest";
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_TacVest.paa";
        hiddenSelectionsTextures[] = 
        {
            "\Expansion_Mod_Police\Gear\Vest_Tactical.paa"
        };
    };
    class V_Press_F;
    class Police_OfficerVest: V_Press_F
    {
        author = "Jakes";
        _generalMacro = "Police_OfficerVest";
        scope = 2;
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_Officer_Vest.paa";
        displayName = "PD Ballistic Vest (CMND)";
        model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
        hiddenSelectionsTextures[] = 
        {
            "\Expansion_Mod_Police\Gear\Vest_Flak_Officer.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
            containerClass = "Supply100";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.4;
                };
            };
        };
    };
    class Police_SoldierVest: V_Press_F
    {
        author = "Jakes";
        _generalMacro = "Police_SoldierVest";
        scope = 2;
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_Officer_Vest.paa";
        displayName = "PD Ballistic Vest (Officer)";
        model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
        hiddenSelectionsTextures[] = 
        {
            "\Expansion_Mod_Police\Gear\Vest_Flak.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
            containerClass = "Supply100";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.4;
                };
            };
        };
    };
        class Vest_Camo_Base;
        class V_CarrierRigKBT_01_base_F: Vest_Camo_Base
        {
            scope = 0;
            model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
            hiddenSelections[] = {"Camo"};
            DLC = "Enoch";
            descriptionShort = "Armor Level III";
            class ItemInfo: ItemInfo
            {
                uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
                hiddenSelections[] = {"Camo"};
                containerClass = "Supply60";
                mass = 60;
                class HitpointsProtectionInfo
                {
                    class Chest
                    {
                        hitpointName = "HitChest";
                        armor = 25;
                        passThrough = 0.3;
                    };
                    class Diaphragm
                    {
                        hitpointName = "HitDiaphragm";
                        armor = 25;
                        passThrough = 0.3;
                    };
                    class Abdomen
                    {
                        hitpointName = "HitAbdomen";
                        armor = 35;
                        passThrough = 0.3;
                    };
                    class Body
                    {
                        hitpointName = "HitBody";
                        passThrough = 0.3;
                    };
                };
            };
        };
        class V_CarrierRigKBT_01_light_base_F: V_CarrierRigKBT_01_base_F
        {
            model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
            descriptionShort = "Armor Level III";
            class ItemInfo: ItemInfo
            {
                uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
                containerClass = "Supply130";
                mass = 70;
            };
        };
        class V_CarrierRigKBT_01_heavy_base_F: V_CarrierRigKBT_01_base_F
        {
            model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
            descriptionShort = "Explosive Resistant";
            class ItemInfo: ItemInfo
            {
                uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
                containerClass = "Supply130";
                mass = 80;
                class HitpointsProtectionInfo
                {
                    class Neck
                    {
                        hitpointName = "HitNeck";
                        armor = 0.5;
                        passThrough = 0.5;
                    };
                    class Arms
                    {
                        hitpointName = "HitArms";
                        armor = 20;
                        passThrough = 0.5;
                    };
                    class Chest
                    {
                        hitpointName = "HitChest";
                        armor = 25;
                        passThrough = 0.6;
                    };
                    class Diaphragm
                    {
                        hitpointName = "HitDiaphragm";
                        armor = 35;
                        passThrough = 0.6;
                    };
                    class Abdomen
                    {
                        hitpointName = "HitAbdomen";
                        armor = 25;
                        passThrough = 0.3;
                    };
                    class Pelvis
                    {
                        hitpointName = "HitPelvis";
                        armor = 25;
                        passThrough = 0.3;
                    };
                    class Body
                    {
                        hitpointName = "HitBody";
                        passThrough = 0.6;
                    };
                };
            };
        };
        class Police_Modular_lite: V_CarrierRigKBT_01_base_F
        {
            author = "Jakes";
            _generalMacro = "SWAT_Modular_Combat";
            scope = 2;
            displayName = "SWAT Modular lite";
            picture = "\Expansion_Mod_Police\Gear\UI\Icon_Modular_Light.paa";
            hiddenSelectionsTextures[]=
            {
                "\Expansion_Mod_Police\Gear\Vest_Modular_Police.paa"
            };
        };
        class Police_Modular_Plain: V_CarrierRigKBT_01_base_F
        {
            author = "Jakes";
            _generalMacro = "SWAT_Modular_Combat";
            scope = 2;
            displayName = "PD Modular lite (Unmarked)";
            picture = "\Expansion_Mod_Police\Gear\UI\Icon_Modular_Light.paa";
            hiddenSelectionsTextures[]=
            {
                "\Expansion_Mod_Police\Gear\Vest_Modular_Plain.paa"
            };
        };
        class SWAT_Modular_lite: V_CarrierRigKBT_01_light_base_F
        {
            author = "Jakes";
            _generalMacro = "SWAT_Modular_lite";
            scope = 2;
            displayName = "SWAT Modular Combat";
            picture = "\Expansion_Mod_Police\Gear\UI\Icon_Modular_Light.paa";
            hiddenSelectionsTextures[]=
            {
                "\Expansion_Mod_Police\Gear\Vest_Modular_SWAT.paa"
            };
        };
        class SWAT_Modular_Combat: V_CarrierRigKBT_01_base_F
        {
            author = "Jakes";
            _generalMacro = "SWAT_Modular_Combat";
            scope = 2;
            displayName = "SWAT Modular lite";
            picture = "\Expansion_Mod_Police\Gear\UI\Icon_Modular_Combat.paa";
            hiddenSelectionsTextures[]=
            {
                "\Expansion_Mod_Police\Gear\Vest_Modular_SWAT.paa"
            };
        };
        class SWAT_Modular_Heavy: V_CarrierRigKBT_01_heavy_base_F
        {
            author = "Jakes";
            _generalMacro = "SWAT_Modular_Heavy";
            scope = 2;
            displayName = "SWAT Modular Heavy";
            picture = "\Expansion_Mod_Police\Gear\UI\Icon_Modular_Heavy.paa";
            hiddenSelectionsTextures[]=
            {
                "\Expansion_Mod_Police\Gear\Vest_Modular_SWAT.paa"
            };
        };
    class V_Rangemaster_belt;
    class Police_Rangemaster_Combo: V_Rangemaster_belt
    {
        author = "Jakes";
        scope = 2;
        displayName = "(Combo) PD Utility Belt";
        picture = "\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_belt";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = 
        {
            "\Expansion_Mod_Police\Gear\Vest_SideArm_Belt.paa"
        };
//---------------------------------------------------------------------------------NEW TEST armor value
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
            containerClass = "Supply100";
            mass = 40;
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = 
            {
                "\Expansion_Mod_Police\Gear\Vest_SideArm_Belt.paa"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 22;
                    passThrough = 0.4;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.4;
                };
            };
        };
    };
    class Police_Rangemaster: V_Rangemaster_belt
    {
        author = "Jakes";
        scope = 2;
        displayName = "PD Utility Belt";
        picture = "\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_belt";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = 
        {
            "\Expansion_Mod_Police\Gear\Vest_SideArm_Belt.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
            containerClass = "Supply40";
            mass = 30;
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = 
            {
                "\Expansion_Mod_Police\Gear\Vest_SideArm_Belt.paa"
            };
        };
    };
//----------------------------------------------------------------------------HEADGEAR
    class H_PASGT_neckprot_base_F;
    class Police_Riot_Helmet: H_PASGT_neckprot_base_F
    {
        author = "Jakes";
        _generalMacro = "Police_Riot_Helmet";
        scope = 2;
        displayName = "PD Riot Helmet";
        picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_PASGT_neckprot_blue_press_CA.paa";
        hiddenSelectionsTextures[] = 
        {
            "\Expansion_Mod_Police\Gear\Headgear_Riot.paa"
        };
    };
    class H_HelmetB;
    class Police_PilotHelmet: H_HelmetB
    {
        author = "Jakes";
        _generalMacro = "Police_PilotHelmet";
        displayName = "PD Heli Helmet";
        picture = "\A3\characters_f\Data\UI\icon_H_Pilot_Helmet_Heli_B_CA.paa";
        model = "A3\Characters_F\Common\headgear_helmet_heli";
        hiddenSelectionsTextures[] = 
        {
            "\Expansion_Mod_Police\Gear\Headgear_Pilot.paa"
        };
        class ItemInfo: ItemInfo
        {
        mass = 30;
        uniformModel = "A3\Characters_F\Common\headgear_helmet_heli";
        modelSides[] = {3, 1};
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
                };
            };
        };
    };/*
    class Default;
    class Police_Headset: Default
    {
        author = "Jakes";
        scope = 1;
        _generalMacro = "Police_Headset";
        picture = "\A3\characters_f_EPB\Data\UI\icon_bandana_green_hs_ca.paa";
        displayName = "";
        model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
        hiddenSelectionsTextures[]={""};
        class ItemInfo: ItemInfo
        {
            uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
        };
    };
    class H_Bandanna_khk;
    class Police_Headset1: H_Bandanna_khk
    {
        author = "Jakes";
        scope = 2;
        _generalMacro = "Police_Headset";
        picture = "\A3\characters_f_EPB\Data\UI\icon_bandana_green_hs_ca.paa";
        displayName = "PD Headset";
        model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
        hiddenSelectionsTextures[]={""};
        class ItemInfo: ItemInfo
        {
            uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
        };
    };*/
    class H_HelmetHBK_base_F;
    class SWAT_Modular_Helmet: H_HelmetHBK_base_F
    {
        author="Jakes";
        scope=2;
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_Modular_Helmet.paa";
        displayName="SWAT Modular Helmet (Lite)";
        hiddenSelectionsTextures[]=
        {
            "\Expansion_Mod_Police\Gear\Police_Modular_Helmet.paa"
        };
    };
    class H_HelmetHBK_headset_base_F;
    class SWAT_Modular_Helmet_Peltor: H_HelmetHBK_headset_base_F
    {
        author="Jakes";
        scope=2;
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_Modular_Helmet.paa";
        displayName="SWAT Modular Helmet (Headset)";
        hiddenSelectionsTextures[]=
        {
            "\Expansion_Mod_Police\Gear\Police_Modular_Helmet.paa"
        };
    };
    class H_HelmetHBK_chops_base_F;
    class SWAT_Modular_Helmet_Chops: H_HelmetHBK_chops_base_F
    {
        author="Jakes";
        scope=2;
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_Modular_Helmet.paa";
        displayName="SWAT Modular Helmet (Chops)";
        hiddenSelectionsTextures[]=
        {
            "\Expansion_Mod_Police\Gear\Police_Modular_Helmet.paa"
        };
    };
    class H_HelmetHBK_ear_base_F;
    class SWAT_Modular_Helmet_EarGuard: H_HelmetHBK_ear_base_F
    {
        author="Jakes";
        scope=2;
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_Modular_Helmet.paa";
        displayName="SWAT Modular Helmet (Earguard)";
        hiddenSelectionsTextures[]=
        {
            "\Expansion_Mod_Police\Gear\Police_Modular_Helmet.paa"
        };
    };
    class H_Cap_red;
	class Patrol_Cap: H_Cap_red
	{
		author = "Jakes";
		_generalMacro = "Patrol_Cap";
		displayName = "Cap (Police)";
		picture = "\Expansion_Mod_Police\Gear\UI\Icons_Cap.paa";
		hiddenSelectionsTextures[] = 
		{
			"\Expansion_Mod_Police\Gear\Headgear_CapPolice.paa"
		};
	};        author = "Jakes";
	class Patrol_Cap_Badge: H_Cap_red
	{
		author = "Jakes";
		_generalMacro = "Patrol_Cap";
		displayName = "Cap (Badge)";
		picture = "\Expansion_Mod_Police\Gear\UI\Icons_Cap.paa";
		hiddenSelectionsTextures[] = 
		{
			"\Expansion_Mod_Police\Gear\Headgear_CapBadge.paa"
		};
	};
    class Police_Beret_CMND : ItemCore 
    {
        author = "Jakes";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "PD Beret (CMND)";
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_Beret.paa";
        model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = 
        {
             "\Expansion_Mod_Police\Gear\Headgear_BeretCMND.paa"
        };
        class ItemInfo : HeadgearItem 
        {
            mass = 6;
            uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
            modelSides[] = {3, 1};
            armor = 0;
            passThrough = 1;
            hiddenSelections[] = {"camo"};
        };
    };
    class Police_Beret : ItemCore 
    {
        author = "Jakes";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "PD Beret (Officer)";
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_Beret.paa";
        model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = 
        {
             "\Expansion_Mod_Police\Gear\Headgear_BeretOfficer.paa"
        };
        class ItemInfo : HeadgearItem 
        {
            mass = 6;
            uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
            modelSides[] = {3, 1};
            armor = 0;
            passThrough = 1;
            hiddenSelections[] = {"camo"};
        };
    };
};
//----------------------------------------------------------------------------BACKPACKS
class CfgVehicles
{
	class ItemCore;
	class VestItem;
	class ReammoBox;
	class ThingX;
	class ItemInfo;
	class ReammoBox_F;
	class NATO_Box_Base;
	class IND_Box_Base: ReammoBox_F
	{};
	class ContainerSupply;
	class Bag_Base: ReammoBox
	{};
	class Vest_Camo_Base: Bag_Base
	{};
    class V_CarrierRigKBT_01_base_F: Bag_Base
    {};
    class V_Press_F: Bag_Base
    {};
	class V_Safety_yellow_F: Vest_Camo_Base
	{
        author = "Jakes";
		_generalMacro = "V_Safety_yellow_F";
		model = "\A3\Characters_F_Orange\Vests\V_Safety_cloth_F.p3d";
		scope = 2;
		displayName = "PD HiVis Vest";
		picture = "\A3\Characters_F_Orange\Vests\Data\UI\icon_V_Safety_yellow_CA.paa";
        hiddenSelectionsTextures[] = 
        {
            "\Expansion_Mod_Police\Gear\Vest_Safety.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\A3\Characters_F_Orange\Vests\V_Safety_cloth_F.p3d";
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = 
            {
                "\Expansion_Mod_Police\Gear\Vest_Safety.paa"
            };
            containerClass = "Supply20";
            mass = 5;
        };
	};
    class B_Messenger_Base_F;
    class Police_Messenger_Bag: B_Messenger_Base_F
    {
        author = "Jakes";
        scope = 2;
        displayName = "PD Messenger Bag";
        picture = "\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Black_CA.paa";
        hiddenSelectionsTextures[] = 
        {
            "\Expansion_Mod_Police\Gear\BackPack_MessengerBag.paa"
        };
        maximumLoad=100;
        mass=10;
    };
    class B_LegStrapBag_base_F;
	class Police_LegStrap: B_LegStrapBag_base_F
	{
		author = "Jakes";
		_generalMacro = "B_LegStrapBag_black_F";
		scope = 2;
		displayName = "PD Leg Strap";
		picture = "\Expansion_Mod_Police\Gear\UI\Icon_Vest_LegStrap.paa";
		hiddenSelectionsTextures[] = 
		{
			"\Expansion_Mod_Police\Gear\Backpack_LegStrap.paa"
		};
        maximumLoad = 70;
        mass = 10;
	};
    class B_AssaultPack_khk;
    class Police_AssaultPack: B_AssaultPack_khk
    {
        author = "Jakes";
        scope=2;
        displayName="PD Assault Pack";
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_Backpack_assault.paa";
        hiddenSelectionsTextures[]=
        {
            "\Expansion_Mod_Police\Gear\Backpack_Assaultpack.paa"
        };
        maximumLoad = 140;
        mass = 20;
    };
	class Police_Chestrig_v2: Vest_Camo_Base
	{
		author="Jakes";
		scope=2;
		displayName="PD ChestRig";
		picture = "\Expansion_Mod_Police\Gear\UI\Icon_Vest_harness.paa";
		model="\A3\Characters_F\Common\equip_chestrig_light.p3d";
		maximumLoad=120;
        mass=10;
        hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\Expansion_Mod_Police\Gear\BackPack_ChestRig.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\Common\equip_chestrig_light.p3d";
			containerClass="Supply140";
			mass=20;
			hiddenSelections[]=
			{
				"camo1"
			};
            hiddenSelectionsTextures[]=
            {
                "\Expansion_Mod_Police\Gear\BackPack_ChestRig.paa"
            };
		};
	};
   class POLICE_SoldierVestPack: Vest_Camo_Base
    {
        author = "Jakes";
        scope = 2;
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_Officer_Vest.paa";
        displayName = "(Combo) PD Ballistic Vest";
        model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
        hiddenSelectionsTextures[] = 
        {
            "\Expansion_Mod_Police\Gear\Vest_Flak.paa"
        };
        maximumLoad=120;
        mass=10;
    };
    class POLICE_Modular_litePack: Vest_Camo_Base
    {
        author="Jakes";
        scope=2;
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_Modular_Light.paa";
        displayName = "(Combo) PD Modular Vest";
        model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
        hiddenSelectionsTextures[]=
        {
            "\Expansion_Mod_Police\Gear\Vest_Modular_Police.paa"
        };
        maximumLoad=120;
        mass=10;
    };
    class SWAT_Modular_litePack: Vest_Camo_Base
    {
        author="Jakes";
        scope=2;
        picture = "\Expansion_Mod_Police\Gear\UI\Icon_Modular_Light.paa";
        displayName = "(Combo) SWAT Modular Vest";
        model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
        hiddenSelectionsTextures[]=
        {
            "\Expansion_Mod_Police\Gear\Vest_Modular_SWAT.paa"
        };
        maximumLoad=120;
        mass=10;
    };
};