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
            "521.197021 4.000000 993.689758",
            "626.459961 16.100000 1644.544189",
            "627.494202 7.100000 954.253723",
            "647.846375 14.400000 1860.984009",
            "657.630554 11.300000 1225.115845",
            "688.981873 21.250000 2084.899414",
            "697.149170 40.950000 843.116577",
            "703.759705 83.100000 1481.154663",
            "704.648865 24.950000 595.885254",
            "706.920837 4.350000 2285.627441",
            "814.867798 42.750000 1343.780273",
            "832.315369 41.050000 1047.422729",
            "938.202148 8.000000 2545.526367",
            "952.964233 17.600000 2331.123535",
            "979.634216 12.800000 714.423584",
            "999.961792 49.500000 1200.786255",
            "1086.213989 74.300000 1002.673828",
            "1088.931641 38.700000 1454.735474",
            "1118.063232 97.500000 2420.846436",
            "1316.120483 82.000000 1524.378418",
            "1335.175659 25.100000 1195.356567",
            "1476.559570 75.000000 1404.727783",
            "1639.076660 50.950000 1537.885498",
            "1670.963135 17.800000 1286.978271",
            "1982.732178 23.700000 1335.397705"
        };

        string characterType;
        vector pos1 = positions.GetRandomElement();

        SyncRespawnModeInfo(identity);

        if (ProcessLoginData(ctx) && (m_RespawnMode == GameConstants.RESPAWN_MODE_CUSTOM) && !GetGame().GetMenuDefaultCharacterData(false).IsRandomCharacterForced())
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