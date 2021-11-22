//===========================================================================
//
// Name:			bones_c.c
// Function:		bones, rank 2
// Programmer:		MrElusive (MrElusive@idsoftware.com)
// version:			1
// Tab Size:		4 (real tabs)
//===========================================================================

#include "chars.h"

skill 1
{
	CHARACTERISTIC_NAME							"Daemia"
	CHARACTERISTIC_GENDER						"female"
	CHARACTERISTIC_ATTACK_SKILL					0.5
	CHARACTERISTIC_WEAPONWEIGHTS				"bots/daemia_w.c"
	CHARACTERISTIC_AIM_SKILL					0.5
	CHARACTERISTIC_AIM_ACCURACY					0.5
	CHARACTERISTIC_VIEW_FACTOR					0.25
	CHARACTERISTIC_VIEW_MAXCHANGE				180
	CHARACTERISTIC_REACTIONTIME					3.5

	CHARACTERISTIC_CHAT_FILE					"bots/daemia_t.c"
	CHARACTERISTIC_CHAT_NAME					"daemia"
	CHARACTERISTIC_CHAT_CPM						400
	CHARACTERISTIC_CHAT_INSULT					0.375
	CHARACTERISTIC_CHAT_MISC					0.5
	CHARACTERISTIC_CHAT_STARTENDLEVEL			0.5
	CHARACTERISTIC_CHAT_ENTEREXITGAME			0.5
	CHARACTERISTIC_CHAT_KILL					0.5
	CHARACTERISTIC_CHAT_DEATH					0.5
	CHARACTERISTIC_CHAT_ENEMYSUICIDE			0.5
	CHARACTERISTIC_CHAT_HITTALKING				0.15
	CHARACTERISTIC_CHAT_HITNODEATH				0.5
	CHARACTERISTIC_CHAT_HITNOKILL				0.5
	CHARACTERISTIC_CHAT_RANDOM					0.5
	CHARACTERISTIC_CHAT_REPLY					0.3

	CHARACTERISTIC_CROUCHER						0.1
	CHARACTERISTIC_JUMPER						0.1
	CHARACTERISTIC_WEAPONJUMPING				0.1
	CHARACTERISTIC_GRAPPLE_USER					0.1

	CHARACTERISTIC_ITEMWEIGHTS					"bots/daemia_i.c"
	CHARACTERISTIC_AGGRESSION					0.5
	CHARACTERISTIC_SELFPRESERVATION				0.5
	CHARACTERISTIC_VENGEFULNESS					0.5
	CHARACTERISTIC_CAMPER						0.5

	CHARACTERISTIC_EASY_FRAGGER					0.5
	CHARACTERISTIC_ALERTNESS					0.5
}

skill 4
{
	CHARACTERISTIC_NAME							"Daemia"
	CHARACTERISTIC_GENDER						"female"
	CHARACTERISTIC_ATTACK_SKILL					1.0
	CHARACTERISTIC_WEAPONWEIGHTS				"bots/daemia_w.c"
	CHARACTERISTIC_AIM_SKILL					1.0
	CHARACTERISTIC_AIM_ACCURACY					1.0
	CHARACTERISTIC_VIEW_FACTOR					1.0
	CHARACTERISTIC_VIEW_MAXCHANGE				280
	CHARACTERISTIC_REACTIONTIME					1.0

	CHARACTERISTIC_CHAT_FILE					"bots/daemia_t.c"
	CHARACTERISTIC_CHAT_NAME					"daemia"
	CHARACTERISTIC_CHAT_CPM						400
	CHARACTERISTIC_CHAT_INSULT					0.375
	CHARACTERISTIC_CHAT_MISC					0.5
	CHARACTERISTIC_CHAT_STARTENDLEVEL			0.5
	CHARACTERISTIC_CHAT_ENTEREXITGAME			0.5
	CHARACTERISTIC_CHAT_KILL					0.5
	CHARACTERISTIC_CHAT_DEATH					0.5
	CHARACTERISTIC_CHAT_ENEMYSUICIDE			0.5
	CHARACTERISTIC_CHAT_HITTALKING				0.15
	CHARACTERISTIC_CHAT_HITNODEATH				0.5
	CHARACTERISTIC_CHAT_HITNOKILL				0.5
	CHARACTERISTIC_CHAT_RANDOM					0.5
	CHARACTERISTIC_CHAT_REPLY					0.125

	CHARACTERISTIC_CROUCHER						0.1
	CHARACTERISTIC_JUMPER						0.3
	CHARACTERISTIC_WEAPONJUMPING				0.3
	CHARACTERISTIC_GRAPPLE_USER					0.1

	CHARACTERISTIC_ITEMWEIGHTS					"bots/daemia_i.c"
	CHARACTERISTIC_AGGRESSION					1.0
	CHARACTERISTIC_SELFPRESERVATION				0.0
	CHARACTERISTIC_VENGEFULNESS					1.0
	CHARACTERISTIC_CAMPER						0.5

	CHARACTERISTIC_EASY_FRAGGER					1.0
	CHARACTERISTIC_ALERTNESS					0.5

	CHARACTERISTIC_AIM_ACCURACY_MACHINEGUN		0.5
	CHARACTERISTIC_AIM_ACCURACY_SHOTGUN			0.8
	CHARACTERISTIC_AIM_ACCURACY_ROCKETLAUNCHER	0.8
	CHARACTERISTIC_AIM_ACCURACY_GRENADELAUNCHER	0.8
	CHARACTERISTIC_AIM_ACCURACY_LIGHTNING		0.8
	CHARACTERISTIC_AIM_ACCURACY_PLASMAGUN		0.8
	CHARACTERISTIC_AIM_ACCURACY_RAILGUN			0.8
	CHARACTERISTIC_AIM_ACCURACY_BFG10K			0.8
	CHARACTERISTIC_AIM_SKILL_ROCKETLAUNCHER		0.8
	CHARACTERISTIC_AIM_SKILL_GRENADELAUNCHER	0.8
	CHARACTERISTIC_AIM_SKILL_PLASMAGUN			0.8
	CHARACTERISTIC_AIM_SKILL_BFG10K				0.8

	CHARACTERISTIC_FIRETHROTTLE					0.9
}

skill 5
{
	CHARACTERISTIC_NAME							"Daemia"
	CHARACTERISTIC_GENDER						"female"
	CHARACTERISTIC_ATTACK_SKILL					1.0
	CHARACTERISTIC_WEAPONWEIGHTS				"bots/daemia_w.c"
	CHARACTERISTIC_AIM_SKILL					1.0
	CHARACTERISTIC_AIM_ACCURACY					1.0
	CHARACTERISTIC_VIEW_FACTOR					1.0
	CHARACTERISTIC_VIEW_MAXCHANGE				280
	CHARACTERISTIC_REACTIONTIME					0.0

	CHARACTERISTIC_CHAT_FILE					"bots/daemia_t.c"
	CHARACTERISTIC_CHAT_NAME					"daemia"
	CHARACTERISTIC_CHAT_CPM						400
	CHARACTERISTIC_CHAT_INSULT					0.375
	CHARACTERISTIC_CHAT_MISC					0.5
	CHARACTERISTIC_CHAT_STARTENDLEVEL			0.5
	CHARACTERISTIC_CHAT_ENTEREXITGAME			0.5
	CHARACTERISTIC_CHAT_KILL					0.5
	CHARACTERISTIC_CHAT_DEATH					0.5
	CHARACTERISTIC_CHAT_ENEMYSUICIDE			0.5
	CHARACTERISTIC_CHAT_HITTALKING				0.15
	CHARACTERISTIC_CHAT_HITNODEATH				0.5
	CHARACTERISTIC_CHAT_HITNOKILL				0.5
	CHARACTERISTIC_CHAT_RANDOM					0.5
	CHARACTERISTIC_CHAT_REPLY					0.1

	CHARACTERISTIC_CROUCHER						0.3
	CHARACTERISTIC_JUMPER						0.1
	CHARACTERISTIC_WEAPONJUMPING				0.1
	CHARACTERISTIC_GRAPPLE_USER					0.0

	CHARACTERISTIC_ITEMWEIGHTS					"bots/daemia_i.c"
	CHARACTERISTIC_AGGRESSION					1.0
	CHARACTERISTIC_SELFPRESERVATION				0.0
	CHARACTERISTIC_VENGEFULNESS					1.0
	CHARACTERISTIC_CAMPER						0.5

	CHARACTERISTIC_EASY_FRAGGER					1.0
	CHARACTERISTIC_ALERTNESS					0.5

	CHARACTERISTIC_AIM_ACCURACY_MACHINEGUN		0.8
	CHARACTERISTIC_AIM_ACCURACY_SHOTGUN			1.0
	CHARACTERISTIC_AIM_ACCURACY_ROCKETLAUNCHER	1.0
	CHARACTERISTIC_AIM_ACCURACY_GRENADELAUNCHER	1.0
	CHARACTERISTIC_AIM_ACCURACY_LIGHTNING		1.0
	CHARACTERISTIC_AIM_ACCURACY_PLASMAGUN		1.0
	CHARACTERISTIC_AIM_ACCURACY_RAILGUN			1.0
	CHARACTERISTIC_AIM_ACCURACY_BFG10K			1.0
	CHARACTERISTIC_AIM_SKILL_ROCKETLAUNCHER		1.0
	CHARACTERISTIC_AIM_SKILL_GRENADELAUNCHER	1.0
	CHARACTERISTIC_AIM_SKILL_PLASMAGUN			1.0
	CHARACTERISTIC_AIM_SKILL_BFG10K				1.0

	CHARACTERISTIC_FIRETHROTTLE					1.0
}