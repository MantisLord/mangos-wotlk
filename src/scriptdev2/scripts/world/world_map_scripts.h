/* This file is part of the ScriptDev2 Project. See AUTHORS file for Copyright information
 * This program is free software licensed under GPL version 2
 * Please see the included DOCS/LICENSE.TXT for more information */

#ifndef DEF_WORLD_MAP_SCRIPTS_H
#define DEF_WORLD_MAP_SCRIPTS_H

enum
{
    // Quest 4740
    NPC_GREYMIST_COASTRUNNNER   = 2202,
    NPC_GREYMIST_WARRIOR        = 2205,
    NPC_GREYMIST_HUNTER         = 2206,
    NPC_MURKDEEP                = 10323,
    QUEST_WANTED_MURKDEEP       = 4740,

    // Quest 6403
    NPC_JONATHAN                = 466,
    NPC_WRYNN                   = 1747,
    NPC_BOLVAR                  = 1748,
    NPC_PRESTOR                 = 1749,
    NPC_WINDSOR                 = 12580,

    // Quest 11538
    NPC_EMISSARY_OF_HATE        = 25003,
    NPC_IRESPEAKER              = 24999,
    NPC_UNLEASHED_HELLION       = 25002,

	// Quest 10867/10675
	NPC_RAZAANI_NEXUS_STALKER	= 20609,
	NPC_RAZAANI_RAIDER			= 20601,
	NPC_RAZAANI_SPELL_THIEF		= 20614,
	NPC_PRINCE_RAZAAN			= 21057,
	NPC_DEADSOUL_ORB			= 20845
};

enum SpawnIndexes
{
    POS_IDX_EMISSARY_SPAWN      = 0,
    POS_IDX_MURKDEEP_SPAWN      = 1,
    POS_IDX_MURKDEEP_MOVE       = 2,
	POS_IDX_PRINCE_RAZAAN		= 3,
	POS_IDX_MAX					= 4
};

static const float aSpawnLocations[POS_IDX_MAX][4] =
{
    {12583.019f, -6916.194f,  4.601f, 6.18f},           // Emissary of Hate, guesswork
    {4981.031f,    597.955f, -1.361f, 4.82f},           // Murkdeep spawn, guesswork
    {4988.970f,    547.002f,  5.379f, 0.0f},            // Murkdeep move, guesswork
	{2814.703f, 5243.525f, 264.444f, 5.37f},			// Nexus-Prince Razaan spawn, guesswork
};

#endif
