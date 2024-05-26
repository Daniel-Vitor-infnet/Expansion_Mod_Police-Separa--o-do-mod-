
#include "BIS_AddonInfo.hpp"
class cfgPatches
{
  class Expansion_Mod_Police
  {
    units[]={"Expansion_Mod_Police_Captain","Expansion_Mod_Police_Corporal","Expansion_Mod_Police_Officer","Expansion_Mod_Police_Rookie","Expansion_Mod_Police_Sergeant","Expansion_Mod_Police_RoitControl","Expansion_Mod_Police_Detective2","Expansion_Mod_Police_Detective3","Expansion_Mod_Police_Detective4","Expansion_Mod_SWAT_Breacher","Expansion_Mod_SWAT_Grenadier","Expansion_Mod_SWAT_Marksman","Expansion_Mod_SWAT_Officer","Expansion_Mod_SWAT_Sniper","Expansion_Mod_Police_Detective1"};
    weapons[]={"XX_prpl_benelli_14_rail_prpl_benelli_muzzle_breakacc_flashlightoptic_Aco_smg","XX_hgun_Rook40_F","XX_SMG_03C_black","XX_arifle_SPAR_02_blk_F_optic_Holosight_blk_Fbipod_01_F_blk","XX_prpl_benelli_rail_prpl_benelli_muzzle_breakacc_pointer_IRoptic_Aco_smg","XX_hgun_Pistol_heavy_01_green_F_muzzle_snds_acpacc_flashlight_pistoloptic_MRD_black","XX_arifle_SPAR_01_GL_blk_F_acc_pointer_IRoptic_ERCO_blk_F","XX_arifle_SPAR_03_blk_F_acc_pointer_IRoptic_AMSbipod_01_F_blk","XX_arifle_SPAR_02_blk_F_acc_pointer_IRoptic_ERCO_blk_Fbipod_01_F_blk","XX_srifle_LRR_F_optic_LRPS"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","Police_Gear","A3_Characters_F","CuratorOnly_Characters_F_BLUFOR","prpl_benelliM4_wps","A3_Weapons_F_Pistols_Rook40","A3_Weapons_F_Mod_SMGs_SMG_03","A3_Weapons_F_Exp_Rifles_SPAR_02","A3_Characters_F_Orange_Vests","A3_Weapons_F_Enoch_Pistols_Pistol_Heavy_01","A3_Weapons_F_Exp_Rifles_SPAR_01","A3_Weapons_F_Exp_Rifles_SPAR_03","A3_Weapons_F_LongRangeRifles_M320"};
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
    class EdSubcat_Officers
    {
        displayName = "Men";
    };    
};
/*
    editorCategory = "EM_Police";editorSubcategory = "EdSubcat_Officers";
*/


class cfgWeapons
{
  class ItemCore;
  class InventoryItem_Base_F;
  class prpl_benelli_14_rail;
  class hgun_Rook40_F;
  class SMG_03C_black;
  class arifle_SPAR_02_blk_F;
  class prpl_benelli_rail;
  class hgun_Pistol_heavy_01_green_F;
  class arifle_SPAR_01_GL_blk_F;
  class arifle_SPAR_03_blk_F;
  class srifle_LRR_F;

  class XX_prpl_benelli_14_rail_prpl_benelli_muzzle_breakacc_flashlightoptic_Aco_smg: prpl_benelli_14_rail
  {
    displayName="M4 Shotgun (6rnd)";
    scope=2;
    class ItemInfo: InventoryItem_Base_F {
        scope = 2;
        displayName = "M4 Shotgun Item";
        model = "\path\to\model.p3d";
        picture = "\path\to\picture.paa";
    };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Aco_smg";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class XX_hgun_Rook40_F: hgun_Rook40_F
  {
    displayName="Rook-40 9 mm";
    scope=2;
    class ItemInfo: InventoryItem_Base_F {
        scope = 2;
        displayName = "Rook-40 Item";
        model = "\path\to\model.p3d";
        picture = "\path\to\picture.paa";
    };
  };

  class XX_SMG_03C_black: SMG_03C_black
  {
    displayName="ADR-97C 5.7 mm (Black)";
    scope=2;
    class ItemInfo: InventoryItem_Base_F {
        scope = 2;
        displayName = "ADR-97C Item";
        model = "\path\to\model.p3d";
        picture = "\path\to\picture.paa";
    };
  };

  class XX_arifle_SPAR_02_blk_F: arifle_SPAR_02_blk_F
  {
    displayName="SPAR-16S 5.56 mm (Black)";
    scope=2;
    class ItemInfo: InventoryItem_Base_F {
        scope = 2;
        displayName = "SPAR-16S Item";
        model = "\path\to\model.p3d";
        picture = "\path\to\picture.paa";
    };
  };

  // Continue adicionando as outras armas aqui
};

class CfgVehicles {
    class ItemCore;
    class InventoryItem_Base_F;

    class MyVehicle: ItemCore {
        scope = 2;
        displayName = "My Custom Vehicle";
        model = "\path\to\model.p3d";
        side = 1;
        faction = "BLU_F";
        crew = "B_Soldier_F";
        typicalCargo[] = {"B_Soldier_F"};
    };

    // Continue adicionando os outros veículos aqui
};

class CfgFunctions {
    class MyMod {
        class MyFunctions {
            file = "MyMod\functions";
            class checkFiles {
                postInit = 1;
            };
        };
    };
};
