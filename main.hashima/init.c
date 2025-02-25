void main()
{
    Hive ce = CreateHive();

    if (ce) {
        ce.InitOffline();
    };

    // GetCEApi().ExportProxyData("2560 0 2560", 5120);
    // GetCEApi().ExportClusterData();

    int year, month, day, hour, minute;
    int reset_month = 9, reset_day = 20;

    GetGame().GetWorld().GetDate(year, month, day, hour, minute);

    if ((month == reset_month) && (day < reset_day))
    {
        GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
    }
    else
    {
        if ((month == reset_month + 1) && (day > reset_day))
        {
            GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
        }
        else
        {
            if ((month < reset_month) || (month > reset_month + 1))
            {
                GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
            };
        };
    };
};

class CustomMission : MissionServer
{
    override void OnInit()
    {
        super.OnInit();
    };

    void SetRandomHealth(EntityAI itemEnt)
    {
        if (itemEnt)
        {
            float rndHlt = Math.RandomFloat(0.50, 0.73);
            itemEnt.SetHealth01("", "", rndHlt);
        };
    };

    override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
    {
        Entity playerEnt;
        playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");
        Class.CastTo(m_player, playerEnt);

        GetGame().SelectPlayer(identity, m_player);

        return m_player;
    };

    override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
    {
        player.RemoveAllItems();

        EntityAI itemEnt;
        ItemBase itemBs;
        float rand;

        switch (Math.RandomInt(0, 7))
        {
            case 0:
            // Outfit 1

            // Top
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_TShirt_CupNoodle");
            itemBs = ItemBase.Cast(itemEnt);

            // Bottom
            player.GetInventory().CreateInInventory("Jeans_Black");
            itemBs = ItemBase.Cast(itemEnt);

            // Shoes
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_Sneaker_Black");
            itemBs = ItemBase.Cast(itemEnt);

            // Food
            player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_1");
            itemBs = ItemBase.Cast(itemEnt);

            // Medical
            player.GetInventory().CreateInInventory("CCS_Toilet_Paper");
            itemBs = ItemBase.Cast(itemEnt);

            // Tool
            player.GetInventory().CreateInInventory("Chemlight_Blue");
            itemBs = ItemBase.Cast(itemEnt);

            break;

            case 1:
            // Outfit 2

            // Top
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_TShirt_XXXXXXXOOO");
            itemBs = ItemBase.Cast(itemEnt);

            // Bottom
            player.GetInventory().CreateInInventory("Jeans_Grey");
            itemBs = ItemBase.Cast(itemEnt);

            // Shoes
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_Sneaker_Gray");
            itemBs = ItemBase.Cast(itemEnt);

            // Food
            player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_2");
            itemBs = ItemBase.Cast(itemEnt);

            // Medical
            player.GetInventory().CreateInInventory("CCS_Toilet_Paper");
            itemBs = ItemBase.Cast(itemEnt);

            // Tool
            player.GetInventory().CreateInInventory("Chemlight_Green");
            itemBs = ItemBase.Cast(itemEnt);

            break;

            case 2:
            // Outfit 3

            // Top
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_TShirt_Junji_Ito");
            itemBs = ItemBase.Cast(itemEnt);

            // Bottom
            player.GetInventory().CreateInInventory("Jeans_Grey");
            itemBs = ItemBase.Cast(itemEnt);

            // Shoes
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_Sneaker_White");
            itemBs = ItemBase.Cast(itemEnt);

            // Food
            player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_3");
            itemBs = ItemBase.Cast(itemEnt);

            // Medical
            player.GetInventory().CreateInInventory("CCS_Toilet_Paper");
            itemBs = ItemBase.Cast(itemEnt);

            // Tool
            player.GetInventory().CreateInInventory("Chemlight_White");
            itemBs = ItemBase.Cast(itemEnt);

            break;

            case 3:
            // Outfit 4

            // Top
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_TShirt_Nintendo");
            itemBs = ItemBase.Cast(itemEnt);

            // Bottom
            player.GetInventory().CreateInInventory("Jeans_Blue");
            itemBs = ItemBase.Cast(itemEnt);

            // Shoes
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_Sneaker_Black");
            itemBs = ItemBase.Cast(itemEnt);

            // Food
            player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_4");
            itemBs = ItemBase.Cast(itemEnt);

            // Medical
            player.GetInventory().CreateInInventory("CCS_Toilet_Paper");
            itemBs = ItemBase.Cast(itemEnt);

            // Tool
            player.GetInventory().CreateInInventory("Chemlight_Red");
            itemBs = ItemBase.Cast(itemEnt);

            break;

            case 4:
            // Outfit 5

            // Top
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_TShirt_PlayStation");
            itemBs = ItemBase.Cast(itemEnt);

            // Bottom
            player.GetInventory().CreateInInventory("Jeans_BlueDark");
            itemBs = ItemBase.Cast(itemEnt);

            // Shoes
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_Sneaker_Red");
            itemBs = ItemBase.Cast(itemEnt);

            // Food
            player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_1");
            itemBs = ItemBase.Cast(itemEnt);

            // Medical
            player.GetInventory().CreateInInventory("CCS_Toilet_Paper");
            itemBs = ItemBase.Cast(itemEnt);

            // Tool
            player.GetInventory().CreateInInventory("Chemlight_Yellow");
            itemBs = ItemBase.Cast(itemEnt);

            break;

            case 5:
            // Outfit 6

            // Top
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_TShirt_Casio");
            itemBs = ItemBase.Cast(itemEnt);

            // Bottom
            player.GetInventory().CreateInInventory("Jeans_Black");
            itemBs = ItemBase.Cast(itemEnt);

            // Shoes
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_Sneaker_Black");
            itemBs = ItemBase.Cast(itemEnt);

            // Food
            player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_2");
            itemBs = ItemBase.Cast(itemEnt);

            // Medical
            player.GetInventory().CreateInInventory("CCS_Toilet_Paper");
            itemBs = ItemBase.Cast(itemEnt);

            // Tool
            player.GetInventory().CreateInInventory("Chemlight_Red");
            itemBs = ItemBase.Cast(itemEnt);

            break;

            case 6:
            // Outfit 7

            // Top
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_TShirt_CreepyCrappyShirt");
            itemBs = ItemBase.Cast(itemEnt);

            // Bottom
            player.GetInventory().CreateInInventory("Jeans_Black");
            itemBs = ItemBase.Cast(itemEnt);

            // Shoes
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_Sneaker_Green");
            itemBs = ItemBase.Cast(itemEnt);

            // Food
            player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_3");
            itemBs = ItemBase.Cast(itemEnt);

            // Medical
            player.GetInventory().CreateInInventory("CCS_Toilet_Paper");
            itemBs = ItemBase.Cast(itemEnt);

            // Tool
            player.GetInventory().CreateInInventory("Chemlight_Red");
            itemBs = ItemBase.Cast(itemEnt);

            break;
        };

        // Tourist Map

        // itemEnt = player.GetInventory().CreateInInventory("ChernarusMap");
        // itemBs = ItemBase.Cast(itemEnt);
        // itemBs.SetQuantity(1);
    };

    override PlayerBase OnClientNewEvent(PlayerIdentity identity, vector pos, ParamsReadContext ctx)
    {
        ref array<vector> positions =
        {
            "621.717 5.05475 952.71",
            "522.687 4.28336 990.848",
            "750.417 23.8078 1226.03",
            "945.158 94.2327 895.05",
            "729.506 20.751 575.697",
            "655.587 11.0051 1222.99",
            "836.633 89.8329 932.155",
            "738.823 40.7641 948.56",
            "768.184 84.9511 678.734",
            "700.515 43.1604 836.105",
            "730.377 18.7271 1182.48",
            "792.554 16.3638 1221.54",

            "682.117 13.7361 2118.61",
            "645.213 12.8687 1861.39",
            "902.234 5.21478 2436.08",
            "956.537 17.3357 2338.05",
            "934.673 6.61758 2548.15",
            "1417.52 91.3714 1492.15",
            "1118.06 97.3787 2420.84",
            "938.199 7.98381 2545.52",
            "1007.02 58.0468 2469.19"
        };

        string characterType;
        vector pos1 = positions.GetRandomElement();

        SyncRespawnModeInfo(identity);

        if ( ProcessLoginData(ctx) && (m_RespawnMode == GameConstants.RESPAWN_MODE_CUSTOM) && !GetGame().GetMenuDefaultCharacterData(false).IsRandomCharacterForced() )
        {
            if (GetGame().ListAvailableCharacters().Find(GetGame().GetMenuDefaultCharacterData().GetCharacterType()) > -1)
                characterType = GetGame().GetMenuDefaultCharacterData().GetCharacterType();
            else
                characterType = GetGame().CreateRandomPlayer();
        }
        else
        {
            characterType = GetGame().CreateRandomPlayer();
            GetGame().GetMenuDefaultCharacterData().GenerateRandomEquip();
        }

        if (CreateCharacter(identity, pos1, ctx, characterType))
        {
            EquipCharacter(GetGame().GetMenuDefaultCharacterData());
            m_player.SetPosition(pos1);
        }

        return m_player;
    }
};

Mission CreateCustomMission(string path)
{
    return new CustomMission();
};