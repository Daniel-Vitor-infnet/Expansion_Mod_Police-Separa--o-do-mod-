class cfgPatches
{
	class Police_Uniform // Name as you wish
	{
		units[] = {};
		weapons[] =
			{

		};
		requiredVersion = 0.1;
		requiredAddons[] =
			{
				"A3_Characters_F",
				"A3_Characters_F_Beta",
				"A3_Characters_F_Bootcamp"};
	};
};

class cfgVehicles
{
	class B_Soldier_04_f;
	class Police_Heli_Pilot : B_Soldier_04_f
	{
		author = "Noob Supremo 43";
		editorPreview = "\Expansion_Mod_Police\Fatigues\UI\Icon_Fatigues_Pilot.paa";
		_generalMacro = "Police_Heli_Pilot";
		scope = 1;
		modelSides[] = {3, 2, 1, 0};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Player_1.paa"};
		uniformClass = "GDC_player_1";
		displayName = "";
	};
	class C_Uniform_Scientist_01_formal_F;
	class Police_Captain_Uniform : C_Uniform_Scientist_01_formal_F
	{
		author = "Jakes";
		_generalMacro = "Police_Captain_Uniform";
		scope = 1;
		modelSides[] = {3, 2, 1, 0};
		editorPreview = "\Expansion_Mod_Police\Fatigues\UI\Icon_Captian.paa";
		model = "\a3\Characters_F\Civil\Scientist_01_formal_F.p3d";
		uniformClass = "Police_Captain_Unit";
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Captain.paa",
				"",
				"\Expansion_Mod_Police\Fatigues\Police_Captain.paa"};
	};
	class Police_Detective1 : C_Uniform_Scientist_01_formal_F
	{
		author = "Jakes";
		_generalMacro = "Police_Detective1";
		scope = 1;
		modelSides[] = {3, 2, 1, 0};
		model = "\a3\Characters_F\Civil\Scientist_01_formal_F.p3d";
		uniformClass = "Police_Detective_Unit1";
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Detective_1.paa",
				"",
				"\Expansion_Mod_Police\Fatigues\Detective_4.paa"};
	};
	class Police_Detective2 : C_Uniform_Scientist_01_formal_F
	{
		author = "Jakes";
		_generalMacro = "Police_Detective2";
		scope = 1;
		modelSides[] = {3, 2, 1, 0};
		model = "\a3\Characters_F\Civil\Scientist_01_formal_F.p3d";
		uniformClass = "Police_Detective_Unit2";
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Detective_2.paa",
				"",
				"\Expansion_Mod_Police\Fatigues\Detective_4.paa"};
	};
	class Police_Detective3 : C_Uniform_Scientist_01_formal_F
	{
		author = "Jakes";
		_generalMacro = "Police_Detective3";
		scope = 1;
		modelSides[] = {3, 2, 1, 0};
		model = "\a3\Characters_F\Civil\Scientist_01_formal_F.p3d";
		uniformClass = "Police_Detective_Unit3";
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Detective_3.paa",
				"",
				"\Expansion_Mod_Police\Fatigues\Detective_4.paa"};
	};
	class Police_Detective4 : C_Uniform_Scientist_01_formal_F
	{
		author = "Jakes";
		_generalMacro = "Police_Detective4";
		scope = 1;
		modelSides[] = {3, 2, 1, 0};
		model = "\a3\Characters_F\Civil\Scientist_01_formal_F.p3d";
		uniformClass = "Police_Detective_Unit4";
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Detective_4.paa",
				"",
				"\Expansion_Mod_Police\Fatigues\Detective_4.paa"};
	};
	class B_Soldier_base_F;
	class Police_Unit_Fatigues_Long : B_Soldier_base_F
	{
		scope = 1;
		displayName = "";
		editorPreview = "\Expansion_Mod_Police\Fatigues\UI\Icon_Fatigues_long.jpg";
		modelSides[] = {3, 2, 1, 0};
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d" hiddenSelections[] =
			{
				"Camo",
				"insignia"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Fatigues.paa"};
		uniformClass = "Police_Uniform_Long";
	};
	class Police_Unit_Fatigues_Rolled : B_Soldier_base_F
	{
		scope = 1;
		displayName = "";
		modelSides[] = {3, 2, 1, 0};
		editorPreview = "\Expansion_Mod_Police\Fatigues\UI\Icon_Fatigues_Rolled.jpg";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d" hiddenSelections[] =
			{
				"Camo",
				"insignia"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Fatigues.paa"};
		uniformClass = "Police_Uniform_Rolled";
	};
	class Police_Unit_PDUniform : B_Soldier_base_F
	{
		scope = 1;
		displayName = "";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3, 2, 1, 0};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Uniform.paa"};
		uniformClass = "Police_uniform_Officer";
	};
	class Police_Unit_PDUniform1 : B_Soldier_base_F
	{
		scope = 1;
		displayName = "";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3, 2, 1, 0};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Uniform_1.paa"};
		uniformClass = "Police_uniform_Officer1";
	};
	class Police_Unit_PDUniform2 : B_Soldier_base_F
	{
		scope = 1;
		displayName = "";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3, 2, 1, 0};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Uniform_2.paa"};
		uniformClass = "Police_uniform_Officer2";
	};
	class Police_Unit_PDUniform3 : B_Soldier_base_F
	{
		scope = 1;
		displayName = "";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3, 2, 1, 0};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Uniform_3.paa"};
		uniformClass = "Police_uniform_Officer3";
	};
	class I_G_Soldier_base_F;
	class SWAT_Unit_Jersey : I_G_Soldier_base_F
	{
		author = "Jakes";
		editorPreview = "\Expansion_Mod_Police\Fatigues\UI\Icon_Fatigues_Rolled.jpg";
		scope = 1;
		modelSides[] = {3, 2, 1, 0};
		displayName = "";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		hiddenSelections[] =
			{
				"camo",
				"insignia"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Jersey.paa"};
		uniformClass = "SWAT_Uniform_Jersey";
	};
};
class cfgWeapons
{
	class ItemCore;
	class Default;
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	class GDC_player_1 : Uniform_Base
	{
		author = "Noob Supremo 43";
		scope = 2;
		displayName = "Player 1";
		picture = "\Expansion_Mod_Police\Fatigues\UI\Icon_Fatigues_Pilot.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Player_1.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Police_Heli_Pilot";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class Police_Captain_Unit : Uniform_Base
	{
		author = "Jakes";
		scope = 2;
		displayName = "PD Captian";
		picture = "\Expansion_Mod_Police\Fatigues\UI\Icon_Captian.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Captain.paa"};
		DLC = "Enoch";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Police_Captain_Uniform";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class Police_Detective_Unit1 : Uniform_Base
	{
		author = "Jakes";
		scope = 2;
		displayName = "PD Detective (Blue/Black)";
		picture = "\Expansion_Mod_Police\Fatigues\UI\Icon_Detect1.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Detective_1.paa"};
		DLC = "Enoch";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Police_Detective1";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class Police_Detective_Unit2 : Uniform_Base
	{
		author = "Jakes";
		scope = 2;
		displayName = "PD Detective (Light Blue/black)";
		picture = "\Expansion_Mod_Police\Fatigues\UI\Icon_Detect2.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Detective_2.paa"};
		DLC = "Enoch";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Police_Detective2";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class Police_Detective_Unit3 : Uniform_Base
	{
		author = "Jakes";
		scope = 2;
		displayName = "PD Detective (Black/Jeans)";
		picture = "\Expansion_Mod_Police\Fatigues\UI\Icon_Detect3.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Detective_3.paa"};
		DLC = "Enoch";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Police_Detective3";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class Police_Detective_Unit4 : Uniform_Base
	{
		author = "Jakes";
		scope = 2;
		displayName = "PD Detective (Red/Jeans)";
		picture = "\Expansion_Mod_Police\Fatigues\UI\Icon_Detect4.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Detective_4.paa"};
		DLC = "Enoch";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Police_Detective4";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class Police_Uniform_Long : Uniform_Base
	{
		author = "Jakes";
		scope = 2;
		displayName = "SWAT Uniform (Long Sleeve)";
		picture = "\Expansion_Mod_Police\Fatigues\UI\Icon_Fatigues_long.paa";
		model = "\A3\characters_f_beta\indep\ia_soldier_01.p3d";
		hiddenSelections[] =
			{
				"camo",
				"insignia"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Fatigues.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Police_Unit_Fatigues_Long";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class Police_Uniform_Rolled : Uniform_Base
	{
		author = "Jakes";
		scope = 2;
		displayName = "SWAT Uniform (Rolled Sleeve)";
		picture = "\Expansion_Mod_Police\Fatigues\UI\Icon_Fatigues_Rolled.paa";
		model = "\A3\characters_f_beta\indep\ia_soldier_02.p3d";
		hiddenSelections[] =
			{
				"camo",
				"insignia"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Fatigues.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Police_Unit_Fatigues_Rolled";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class Police_uniform_Officer : Uniform_Base
	{
		author = "Jakes";
		scope = 2;
		displayName = "PD Uniform (Rookie)";
		picture = "\Expansion_Mod_Police\Fatigues\UI\Icon_Fatigues_Officer.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] =
			{
				"camo"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Uniform.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Police_Unit_PDUniform";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class Police_uniform_Officer1 : Uniform_Base
	{
		author = "Jakes";
		scope = 2;
		displayName = "PD Uniform (Officer)";
		picture = "\Expansion_Mod_Police\Fatigues\UI\Icon_Fatigues_Officer.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] =
			{
				"camo"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Uniform_1.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Police_Unit_PDUniform1";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class Police_uniform_Officer2 : Uniform_Base
	{
		author = "Jakes";
		scope = 2;
		displayName = "PD Uniform (Corporal)";
		picture = "\Expansion_Mod_Police\Fatigues\UI\Icon_Fatigues_Officer.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] =
			{
				"camo"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Uniform_2.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Police_Unit_PDUniform2";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class Police_uniform_Officer3 : Uniform_Base
	{
		author = "Jakes";
		scope = 2;
		displayName = "PD Uniform (Sergeant)";
		picture = "\Expansion_Mod_Police\Fatigues\UI\Icon_Fatigues_Officer.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] =
			{
				"camo"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Uniform_3.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Police_Unit_PDUniform3";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class SWAT_Uniform_Jersey : Uniform_Base
	{
		author = "Jakes";
		scope = 2;
		displayName = "SWAT Uniform (Jersey)";
		picture = "\Expansion_Mod_Police\Fatigues\UI\Icon_Fatigues_long.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] =
			{
				"camo"};
		hiddenSelectionsTextures[] =
			{
				"\Expansion_Mod_Police\Fatigues\Police_Jersey.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "SWAT_Unit_Jersey";
			containerClass = "Supply60";
			mass = 20;
		};
	};
};
