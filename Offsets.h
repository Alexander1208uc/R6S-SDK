#pragma once
#define ADDRESS_GAMEMANAGER 0x4eaa460 // 48 8B 0D ? ? ? ? 83 B9 ? ? ? ? ? 77 07 33 D2 E8 ? ? ? ? 48 8D 05
#define ADDRESS_GAMERENDERER 0x4d8fea8 // 4C 89 0D ? ? ? ? 48 8D 0D ? ? ? ? 45 33 C9 BA ? ? ? ? 41 B8 ? ? ? ? E8 ? ? ? ?
#define ADDRESS_NETWORKMANAGER 0x4d83078 // 48 8B 05 ? ? ? ? 48 85 C0 74 37
#define ADDRESS_INTERFACE 0x4ea8a60 // 48 8B 0D ? ? ? ? 48 8B D0 C6 44 24 ? ? E8 ? ? ? ? 48 8B 47 ? 48 8D 55 ?
#define ADDRESS_LOCALPLAYER 0x4eaa468
#define ADDRESS_STATUSMANAGER 0x4e6d1d8 // 48 89 35 ? ? ? ? 48 8B CF
#define ADDRESS_WEAPONMANAGER 0x36B5ED8 // no pattern

#define INTERFACE_PTR 0x400
#define INTERFACE_L1 0x3F0
#define INTERFACE_L2 0x138
#define INTERFACE_L3 0x0

#define OFFSET_MISC_INGAME 0x38C 

#define OFFSET_MISC_PLAYER_VIEWANGLE_1 0x620 // 0x600?
#define OFFSET_MISC_PLAYER_VIEWANGLE_2 0x498
#define OFFSET_MISC_PLAYER_VIEWANGLE_3 0x10

#define OFFSET_ENTITY_LIST 0x20
#define OFFSET_ENTITY_ENT 0xE0
#define OFFSET_ENTITY_INFO 0x120
#define OFFSET_ENTITY_INFO2 0x110
#define OFFSET_ENTITY_SPREAD 0x70
#define OFFSET_ENTITY_RECOIL 0xA8

#define OFFSET_GAMERENDERER_ENGINELINK 0x120 // GameRenderer->
#define OFFSET_ENGINELINK_ENGINE 0x230 // GameRenderer->EngineLink->
#define OFFSET_ENGINE_CAMERA 0x40 // GameRenderer->EngineLink->Engine->

#define OFFSET_CAMERA_VIEWRIGHT 0xB0 // Camera->
#define OFFSET_CAMERA_VIEWUP 0xC0 // Camera->
#define OFFSET_CAMERA_VIEFORWARD 0xD0 // Camera->
#define OFFSET_CAMERA_VIEWTRANSLATION 0xE0 // Camera->
#define OFFSET_CAMERA_VIEWFOVX 0xF0 // Camera->
#define OFFSET_CAMERA_VIEWFOVY 0x104 // Camera->

#define OFFSET_GAMEMANAGER_ENTITYLIST 0xC8 // GameManager->

#define OFFSET_ENTITY_ENTITYINFO 0x18 // Entity->
#define OFFSET_ENTITY_PLAYERINFO 0x2B8 // Entity->

#define OFFSET_ENTITYINFO_MAINCOMPONENT 0xA8 // Entity->EntityInfo->
#define OFFSET_MAINCOMPONENT_CHILDCOMPONENT 0x8 // Entity->EntityInfo->MainComponent->
#define OFFSET_CHILDCOMPONENT_HEALTH 0x148 // Entity->EntityInfo->MainComponent->ChildComponent->

#define OFFSET_PLAYERINFO_COMPONENT_TEAM 0x146 // Entity->PlayerInfo->
#define OFFSET_PLAYERINFO_COMPONENT_NAME 0x178  // Entity->PlayerInfo->

#define OFFSET_ENTITY_POSITION 0x1D0 // Entity->
#define OFFSET_ENTITY_NECK 0x2E0 // Entity->
#define OFFSET_ENTITY_HEAD 0x180 // Entity->
#define OFFSET_ENTITY_RIGHTHAND 0xD20 // Entity->
#define OFFSET_ENTITY_LEFTHAND 0x340 // Entity->

// Game -> GameManager -> EntityList -> INDEX -> Entity -> EntityInfo -> MainComponent ->
#define OFFSET_MAINCOMPONENT_ESPCHAIN1 0x30
#define OFFSET_ESPCHAIN1_ESPCHAIN2 0x78 // ESPCHAIN1 ->
#define OFFSET_ESPCHAIN2_ESPCHAIN3 0x2E4 // ESPCHAIN2 ->