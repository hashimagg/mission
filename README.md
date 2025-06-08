# Hashima Islands 端島 — Mission Files

Mission files for Hashima Islands, a DayZ Modded Map inspired by Hashima, commonly called Gunkanjima (meaning Battleship Island), an abandoned island off Nagasaki.

---

## File Structure

##### Economy Editor Source Files:

```
ce.hashima/
├── layers/
│   └── ...
├── map/
│   └── hashima.map
├── territoryTypes/
│   ├── bear_territories.xml
│   ├── cattle_territories.xml
│   ├── hare_territories.xml
│   ├── hen_territories.xml
│   ├── pig_territories.xml
│   ├── red_deer_territories.xml
│   ├── roe_deer_territories.xml
│   ├── sheep_goat_territories.xml
│   ├── wild_boar_territories.xml
│   ├── wolf_territories.xml
│   └── zombie_territories.xml
├── hashima-5120.png
└── hashima.xml
```

##### Empty Mission Files:

```
empty.hashima/
└── init.c
```

##### Vanilla Mission Files:

```
main.hashima/
├── ccs_ce/
│   ├── ccs_events_misc.xml
│   ├── ccs_events_zombie.xml
│   ├── ccs_spawnabletypes_ammo.xml
│   ├── ccs_spawnabletypes_bag.xml
│   ├── ccs_spawnabletypes_clothing.xml
│   ├── ccs_spawnabletypes_medical.xml
│   ├── ccs_spawnabletypes_tool.xml
│   ├── ccs_spawnabletypes_weapon.xml
│   ├── ccs_spawnabletypes_zombie.xml
│   ├── ccs_types_ammo.xml
│   ├── ccs_types_bag.xml
│   ├── ccs_types_beer.xml
│   ├── ccs_types_can.xml
│   ├── ccs_types_candy.xml
│   ├── ccs_types_clothing.xml
│   ├── ccs_types_collectable.xml
│   ├── ccs_types_drink.xml
│   ├── ccs_types_event.xml
│   ├── ccs_types_jar.xml
│   ├── ccs_types_medical.xml
│   ├── ccs_types_seasonal.xml
│   ├── ccs_types_snack.xml
│   ├── ccs_types_tool.xml
│   ├── ccs_types_weapon.xml
│   └── ccs_types_zombie.xml
├── db/
│   ├── economy.xml
│   ├── events.xml
│   ├── globals.xml
│   ├── messages.xml
│   └── types.xml
├── dz_ce/
│   ├── dz_events_animal.xml
│   ├── dz_events_misc.xml
│   ├── dz_spawnabletypes_bag.xml
│   ├── dz_spawnabletypes_clothing.xml
│   ├── dz_spawnabletypes_tool.xml
│   ├── dz_spawnabletypes_weapon.xml
│   ├── dz_types_animal.xml
│   ├── dz_types_bag.xml
│   ├── dz_types_clothing.xml
│   ├── dz_types_event.xml
│   ├── dz_types_food.xml
│   ├── dz_types_seasonal.xml
│   ├── dz_types_tool.xml
│   └── dz_types_weapon.xml
├── env/
│   ├── bear_territories.xml
│   ├── cattle_territories.xml
│   ├── hare_territories.xml
│   ├── hen_territories.xml
│   ├── pig_territories.xml
│   ├── red_deer_territories.xml
│   ├── roe_deer_territories.xml
│   ├── sheep_goat_territories.xml
│   ├── wild_boar_territories.xml
│   ├── wolf_territories.xml
│   └── zombie_territories.xml
├── areaflags.map
├── cfgeconomycore.xml
├── cfgeffectarea.json
├── cfgenvironment.xml
├── cfgeventgroups.xml
├── cfgeventspawns.xml
├── cfggameplay.json
├── cfgignorelist.xml
├── cfglimitsdefinition.xml
├── cfglimitsdefinitionuser.xml
├── cfgplayerspawnpoints.xml
├── cfgrandompresets.xml
├── cfgspawnabletypes.xml
├── cfgundergroundtriggers.json
├── cfgweather.xml
├── init.c
├── mapclusterproto.xml
├── mapgroupcluster.xml
├── mapgroupdirt.xml
├── mapgrouppos.xml
└── mapgroupproto.xml
```

##### SpawnerBubaku File:

```
profiles/
└── SpawnerBubaku/
    └── SpawnerBubakuV2.json
```
---

## Installation

#### 1. Download Mission Files

- **[Download all mission files (.zip) 🡥](https://github.com/hashimagg/mission/archive/refs/heads/main.zip)**
- **[Download areaflags.map only 🡥](https://github.com/hashimagg/mission/raw/refs/heads/main/main.hashima/areaflags.map)**

#### 2. Extract and Copy

- Extract the downloaded `.zip` file.
- Copy the `main.hashima` folder to your DayZ server's `mpmissions` directory.
- Replace the `areaflags.map` inside `main.hashima` with the downloaded version.

---

## Server Setup

#### 1. Required Mods

**Client Mods:**
- **[Hashima Islands 🡥](https://steamcommunity.com/sharedfiles/filedetails/?id=2781560371)**
- **[Hashima Islands Assets 🡥](https://steamcommunity.com/sharedfiles/filedetails/?id=3001202420)**

**Server Mod:**
- **[SpawnerBubaku 🡥](https://steamcommunity.com/sharedfiles/filedetails/?id=2482312670)**

> **Note:** All players must have the client mods installed. The server must load both the client and server mods.

#### 2. SpawnerBubaku Setup

- Download and install SpawnerBubaku as per **[Steam Workshop instructions](https://steamcommunity.com/sharedfiles/filedetails/?id=2482312670)**.
- Replace the file `SpawnerBubakuV2.json` on your server with the one provided in this repository.

#### 3. Startup Parameters

Example server start command (adjust paths as needed):

```sh
./DayZServer_x64.exe -config=serverDZ.cfg -port=2302 -profiles=profiles -mod=@HashimaAssets;@Hashima;@HashimaServer -serverMod=@SpawnerBubaku -mission=main.hashima
```

`-mod` should include all required client mods.
`-serverMod` should include SpawnerBubaku.
`-mission` should point to the `main.hashima` folder.

---

## Disclaimer

Hashima Islands is based on real history and real terrains. However, some aspects of the content have been fictionalized for the purposes of gameplay. I do not claim ownership over any copyrighted material that may be present in Hashima Islands. All copyrighted material belongs to their respective owners. This mod is intended for personal and non-commercial use only. I'm not responsible for any damage that may occur to your game while using this mod. Use at your own risk.

---

**[HASHIMA.GG](https://hashima.gg)** — **[Join the Discord](https://discord.gg/Uap8rwekfA)**