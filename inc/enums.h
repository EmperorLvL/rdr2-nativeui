/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#pragma once

enum eGameInputs : unsigned
{
	UNDEFINED_INPUT = 0x2417F471,
	INPUT_NEXT_CAMERA = 0x7F8D09B8,
	INPUT_LOOK_LR = 0xA987235F,
	INPUT_LOOK_UD = 0xD2047988,
	INPUT_LOOK_UP_ONLY = 0xC0651D40,
	INPUT_LOOK_DOWN_ONLY = 0x8ED92E16,
	INPUT_LOOK_LEFT_ONLY = 0x08F8BC6D,
	INPUT_LOOK_RIGHT_ONLY = 0xA1EB1353,
	INPUT_CINEMATIC_SLOWMO = 0x7A9093DE,
	INPUT_RADIAL_MENU_NAV_UD = 0xBA60039F,
	INPUT_RADIAL_MENU_NAV_LR = 0x390948DC,
	INPUT_RADIAL_MENU_SLOT_NAV_NEXT = 0xE71F89B8,
	INPUT_RADIAL_MENU_SLOT_NAV_PREV = 0x93D6723F,
	INPUT_RADIAL_MENU_SLOT_NAV_NEXT_ALTERNATE = 0x9E6A9358,
	INPUT_RADIAL_MENU_SLOT_NAV_PREV_ALTERNATE = 0xD33B28BE,
	INPUT_SELECT_NEXT_WHEEL = 0x77E56FB3,
	INPUT_SELECT_ITEM_WHEEL = 0x1F6D95E5,
	INPUT_QUICK_SELECT_INSPECT = 0xF09866F3,
	INPUT_QUICK_SELECT_SET_FOR_SWAP = 0xD45EC04F,
	INPUT_QUICK_SHORTCUT_ABILITIES_MENU = 0x9CC7A1A4,
	INPUT_QUICK_SELECT_SECONDARY_NAV_NEXT = 0xF1421CF5,
	INPUT_QUICK_SELECT_SECONDARY_NAV_PREV = 0xD9F9F017,
	INPUT_QUICK_SELECT_TOGGLE_SHORTCUT_ITEM = 0xFA0B29CD,
	INPUT_QUICK_SELECT_PUT_AWAY_ROD = 0x253FEC09,
	INPUT_EMOTES_FAVORITE = 0xA835261B,
	INPUT_EMOTES_MANAGE = 0x7E75F4DC,
	INPUT_EMOTES_SLOT_NAV_NEXT = 0xCBB12F87,
	INPUT_SELECT_NEXT_WEAPON = 0xD0842EDF,
	INPUT_SELECT_PREV_WEAPON = 0xF78D7337,
	INPUT_SKIP_CUTSCENE = 0xCDC4E4E9,
	INPUT_CHARACTER_WHEEL = 0x972F8D1E,
	INPUT_MULTIPLAYER_INFO = 0xE8342FF2,
	INPUT_SPRINT = 0x8FFC75D6,
	INPUT_JUMP = 0xD9D0E1C0,
	INPUT_ENTER = 0xCEFD9220,
	INPUT_ATTACK = 0x07CE1E61,
	INPUT_AIM = 0xF84FA74F,
	INPUT_LOOK_BEHIND = 0x9959A6F0,
	INPUT_PHONE = 0x4CF871D0,
	INPUT_SPECIAL_ABILITY = 0xCEE12B50,
	INPUT_SPECIAL_ABILITY_SECONDARY = 0x6328239B,
	INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY = 0x811F4A1A,
	INPUT_SPECIAL_ABILITY_ACTION = 0x1ECA87D4,
	INPUT_MOVE_LR = 0x4D8FB4C1,
	INPUT_MOVE_UD = 0xFDA83190,
	INPUT_MOVE_UP_ONLY = 0x8FD015D8,
	INPUT_MOVE_DOWN_ONLY = 0xD27782E3,
	INPUT_MOVE_LEFT_ONLY = 0x7065027D,
	INPUT_MOVE_RIGHT_ONLY = 0xB4E465B4,
	INPUT_DUCK = 0xDB096B85,
	INPUT_TWIRL_PISTOL = 0x938D4071,
	INPUT_TOGGLE_HOLSTER = 0xB238FE0B,
	INPUT_OPEN_WHEEL_MENU = 0xAC4BD4F1,
	INPUT_OPEN_SATCHEL_MENU = 0x4CC0E2FE,
	INPUT_OPEN_SATCHEL_HORSE_MENU = 0x5966D52A,
	INPUT_OPEN_CRAFTING_MENU = 0x734C6E39,
	INPUT_OPEN_JOURNAL = 0xF3830D8E,
	INPUT_PICKUP = 0xE6360A8E,
	INPUT_IGNITE = 0xC75C27B0,
	INPUT_SNIPER_ZOOM = 0x7ABC6A66,
	INPUT_SNIPER_ZOOM_IN_ONLY = 0xA5BDCD3C,
	INPUT_SNIPER_ZOOM_OUT_ONLY = 0x430593AA,
	INPUT_SNIPER_ZOOM_IN_SECONDARY = 0x6BE9C207,
	INPUT_SNIPER_ZOOM_OUT_SECONDARY = 0x8A7B8833,
	INPUT_TOGGLE_WEAPON_SCOPE = 0x3076E97C,
	INPUT_COVER = 0xDE794E3E,
	INPUT_COVER_TRANSITION = 0x750C8010,
	INPUT_RELOAD = 0xE30CD707,
	INPUT_TALK = 0x7DCA9C75,
	INPUT_DETONATE = 0x73846677,
	INPUT_HUD_SPECIAL = 0x580C4473,
	INPUT_ARREST = 0xA4F1006B,
	INPUT_ACCURATE_AIM = 0x406ADFAE,
	INPUT_SWITCH_SHOULDER = 0x827E9EE8,
	INPUT_IRON_SIGHT = 0x841240A9,
	INPUT_AIM_IN_AIR = 0xD8F73058,
	INPUT_SWITCH_FIRING_MODE = 0xEED15F18,
	INPUT_CONTEXT = 0xB73BCA77,
	INPUT_CONTEXT_SECONDARY = 0xF19BE385,
	INPUT_WEAPON_SPECIAL = 0x733901F3,
	INPUT_WEAPON_SPECIAL_TWO = 0x50BA1A77,
	INPUT_DIVE = 0x06052D11,
	INPUT_DROP_WEAPON = 0x7DBCD016,
	INPUT_DROP_AMMO = 0x4E42696E,
	INPUT_THROW_GRENADE = 0x0AF99998,
	INPUT_FOCUS_CAM = 0xE72B43F4,
	INPUT_INSPECT = 0xA61DC630,
	INPUT_INSPECT_ZOOM = 0x53296B75,
	INPUT_INSPECT_LR = 0x1788C283,
	INPUT_INSPECT_UD = 0xF9781997,
	INPUT_INSPECT_OPEN_SATCHEL = 0x9B1CA8DA,
	INPUT_DYNAMIC_SCENARIO = 0x2EAB0795,
	INPUT_PLAYER_MENU = 0x80F28E95,
	INPUT_OPEN_EMOTE_WHEEL = 0xE2B557A3,
	INPUT_OPEN_EMOTE_WHEEL_HORSE = 0x8B3FA65E,
	INPUT_EMOTE_GROUP_LINK = 0x1C826362,
	INPUT_EMOTE_GROUP_LINK_HORSE = 0x4FD1C57B,
	INPUT_REVEAL_HUD = 0xCF8A4ECA,
	INPUT_SELECT_RADAR_MODE = 0x0F39B3D4,
	INPUT_SIMPLE_RADAR = 0x5FEF1B6D,
	INPUT_EXPAND_RADAR = 0xCF0B11DE,
	INPUT_REGULAR_RADAR = 0x51AA7A35,
	INPUT_DISABLE_RADAR = 0x70CBD78D,
	INPUT_SURRENDER = 0xDB8D69B8,
	INPUT_WHISTLE = 0x24978A28,
	INPUT_WHISTLE_HORSEBACK = 0xE7EB9185,
	INPUT_STOP_LEADING_ANIMAL = 0x7914A3DD,
	INPUT_CINEMATIC_CAM = 0x620A6C5E,
	INPUT_CINEMATIC_CAM_HOLD = 0xD7E7B375,
	INPUT_CINEMATIC_CAM_CHANGE_SHOT = 0xA6C67243,
	INPUT_CINEMATIC_CAM_UD = 0x84574AE8,
	INPUT_CINEMATIC_CAM_UP_ONLY = 0xEFCFE6B7,
	INPUT_CINEMATIC_CAM_DOWN_ONLY = 0x23AE34A2,
	INPUT_CINEMATIC_CAM_LR = 0x6BC904FC,
	INPUT_ANIMAL_PLAY_DEAD = 0x81639BEE,
	INPUT_ANIMAL_EMOTE = 0x02CEC7D5,
	INPUT_CONTEXT_A = 0x5181713D,
	INPUT_CONTEXT_B = 0x3B24C470,
	INPUT_CONTEXT_X = 0xE3BF959B,
	INPUT_CONTEXT_Y = 0xD51B784F,
	INPUT_CONTEXT_LT = 0xC13A6564,
	INPUT_CONTEXT_RT = 0x07B8BEAF,
	INPUT_CONTEXT_ACTION = 0xB28318C0,
	INPUT_VEH_MOVE_LR = 0xF1E2852C,
	INPUT_VEH_MOVE_UD = 0x8A81C00C,
	INPUT_VEH_MOVE_UP_ONLY = 0xDEBD7EF6,
	INPUT_VEH_MOVE_DOWN_ONLY = 0x16D73E1D,
	INPUT_VEH_MOVE_LEFT_ONLY = 0x9DF54706,
	INPUT_VEH_MOVE_RIGHT_ONLY = 0x97A8FD98,
	INPUT_VEH_SPECIAL = 0x493919DB,
	INPUT_VEH_GUN_LR = 0xB6F3E4FE,
	INPUT_VEH_GUN_UD = 0x482560EE,
	INPUT_VEH_AIM = 0xD7CAFCEF,
	INPUT_VEH_ATTACK = 0xF4330038,
	INPUT_VEH_ATTACK2 = 0xF1C341BA,
	INPUT_VEH_ACCELERATE = 0x5B9FD4E2,
	INPUT_VEH_BRAKE = 0x6E1F639B,
	INPUT_VEH_DUCK = 0x5B3690F2,
	INPUT_VEH_HEADLIGHT = 0xF1301666,
	INPUT_VEH_EXIT = 0xFEFAB9B4,
	INPUT_VEH_HANDBRAKE = 0x65D24C98,
	INPUT_VEH_LOOK_BEHIND = 0xCAE9B017,
	INPUT_VEH_NEXT_RADIO = 0x22E0F7E7,
	INPUT_VEH_PREV_RADIO = 0x9785CE13,
	INPUT_VEH_NEXT_RADIO_TRACK = 0xF7FA2DDC,
	INPUT_VEH_PREV_RADIO_TRACK = 0x0A94C4FF,
	INPUT_VEH_RADIO_WHEEL = 0x4915AC0A,
	INPUT_VEH_HORN = 0x63A0D258,
	INPUT_VEH_FLY_THROTTLE_UP = 0x7232BAB3,
	INPUT_VEH_FLY_THROTTLE_DOWN = 0x084DFF95,
	INPUT_VEH_FLY_YAW_LEFT = 0x31589AD1,
	INPUT_VEH_FLY_YAW_RIGHT = 0xBD143FC6,
	INPUT_VEH_PASSENGER_AIM = 0xEE2804D0,
	INPUT_VEH_PASSENGER_ATTACK = 0x27AD4433,
	INPUT_VEH_SPECIAL_ABILITY_FRANKLIN = 0x5EC33578,
	INPUT_VEH_STUNT_UD = 0x4AA1560E,
	INPUT_VEH_SELECT_NEXT_WEAPON = 0x889A626F,
	INPUT_VEH_SELECT_PREV_WEAPON = 0x0C97BAC7,
	INPUT_VEH_ROOF = 0x3E7CF9A4,
	INPUT_VEH_JUMP = 0xAA56B926,
	INPUT_VEH_GRAPPLING_HOOK = 0xB985AA5E,
	INPUT_VEH_SHUFFLE = 0xC7083798,
	INPUT_VEH_TRAVERSAL = 0x739D6261,
	INPUT_VEH_DROP_PROJECTILE = 0xC61611E6,
	INPUT_VEH_MOUSE_CONTROL_OVERRIDE = 0x39CCABD5,
	INPUT_VEH_FLY_ROLL_LR = 0x3C8AB570,
	INPUT_VEH_FLY_ROLL_LEFT_ONLY = 0x56F84EA0,
	INPUT_VEH_FLY_ROLL_RIGHT_ONLY = 0x876B3361,
	INPUT_VEH_FLY_PITCH_UD = 0xE67E1E57,
	INPUT_VEH_FLY_PITCH_UP_ONLY = 0x6280BA1A,
	INPUT_VEH_FLY_PITCH_DOWN_ONLY = 0x0F4E369F,
	INPUT_VEH_FLY_UNDERCARRIAGE = 0xFE0FE518,
	INPUT_VEH_FLY_ATTACK = 0x1D71D7AA,
	INPUT_VEH_FLY_SELECT_NEXT_WEAPON = 0x24E94299,
	INPUT_VEH_FLY_SELECT_PREV_WEAPON = 0xC0D874E5,
	INPUT_VEH_FLY_SELECT_TARGET_LEFT = 0x307FC4C1,
	INPUT_VEH_FLY_SELECT_TARGET_RIGHT = 0x52F25C96,
	INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE = 0xE3238029,
	INPUT_VEH_FLY_DUCK = 0x378A10F7,
	INPUT_VEH_FLY_ATTACK_CAMERA = 0x2FBA3F0B,
	INPUT_VEH_FLY_MOUSE_CONTROL_OVERRIDE = 0x6C9810A5,
	INPUT_VEH_SUB_MOUSE_CONTROL_OVERRIDE = 0x2CAF327E,
	INPUT_VEH_SUB_TURN_LR = 0x627C4619,
	INPUT_VEH_SUB_TURN_LEFT_ONLY = 0x44E7E093,
	INPUT_VEH_SUB_TURN_RIGHT_ONLY = 0xE78A5A3C,
	INPUT_VEH_SUB_PITCH_UD = 0x469CE271,
	INPUT_VEH_SUB_PITCH_UP_ONLY = 0xF9EF072A,
	INPUT_VEH_SUB_PITCH_DOWN_ONLY = 0xBA2D22AA,
	INPUT_VEH_SUB_THROTTLE_UP = 0xD28C446F,
	INPUT_VEH_SUB_THROTTLE_DOWN = 0xF5B2CEFB,
	INPUT_VEH_SUB_ASCEND = 0xD7991F74,
	INPUT_VEH_SUB_DESCEND = 0x7D51DE24,
	INPUT_VEH_SUB_TURN_HARD_LEFT = 0x64214D49,
	INPUT_VEH_SUB_TURN_HARD_RIGHT = 0xA44C0F83,
	INPUT_VEH_PUSHBIKE_PEDAL = 0xFD8D64A7,
	INPUT_VEH_PUSHBIKE_SPRINT = 0xF03EE151,
	INPUT_VEH_PUSHBIKE_FRONT_BRAKE = 0x585E942D,
	INPUT_VEH_PUSHBIKE_REAR_BRAKE = 0xF8CBAFB5,
	INPUT_VEH_DRAFT_MOVE_UD = 0x23595CEA,
	INPUT_VEH_DRAFT_TURN_LR = 0xA7DFAE8A,
	INPUT_VEH_DRAFT_MOVE_UP_ONLY = 0x29A5E51E,
	INPUT_VEH_DRAFT_MOVE_DOWN_ONLY = 0x25493EB3,
	INPUT_VEH_DRAFT_TURN_LEFT_ONLY = 0x198AFC64,
	INPUT_VEH_DRAFT_TURN_RIGHT_ONLY = 0x5E371EA7,
	INPUT_VEH_DRAFT_ACCELERATE = 0xE99D2B05,
	INPUT_VEH_DRAFT_BRAKE = 0xD648E48D,
	INPUT_VEH_DRAFT_AIM = 0xBDD5830D,
	INPUT_VEH_DRAFT_ATTACK = 0xF40AB198,
	INPUT_VEH_DRAFT_ATTACK2 = 0x886F12DD,
	INPUT_VEH_DRAFT_SWITCH_DRIVERS = 0x70B87844,
	INPUT_VEH_BOAT_TURN_LR = 0xD8DFCAB3,
	INPUT_VEH_BOAT_TURN_LEFT_ONLY = 0x5BED7C91,
	INPUT_VEH_BOAT_TURN_RIGHT_ONLY = 0xF9780DFB,
	INPUT_VEH_BOAT_ACCELERATE = 0xB341E812,
	INPUT_VEH_BOAT_BRAKE = 0x428D5F39,
	INPUT_VEH_BOAT_AIM = 0x92F5F01E,
	INPUT_VEH_BOAT_ATTACK = 0x6866FA3A,
	INPUT_VEH_BOAT_ATTACK2 = 0x876096E9,
	INPUT_VEH_CAR_TURN_LR = 0x3BD38D43,
	INPUT_VEH_CAR_TURN_LEFT_ONLY = 0x07D1654C,
	INPUT_VEH_CAR_TURN_RIGHT_ONLY = 0x6E3C3649,
	INPUT_VEH_CAR_ACCELERATE = 0xB9F544B0,
	INPUT_VEH_CAR_BRAKE = 0xD1887B3F,
	INPUT_VEH_CAR_AIM = 0x6777B840,
	INPUT_VEH_CAR_ATTACK = 0x5572F386,
	INPUT_VEH_CAR_ATTACK2 = 0x5B763AD7,
	INPUT_VEH_HANDCART_ACCELERATE = 0xFF3626FC,
	INPUT_VEH_HANDCART_BRAKE = 0x2D79D80A,
	INPUT_HORSE_MOVE_LR = 0x126796EB,
	INPUT_HORSE_MOVE_UD = 0x3BBDEFEF,
	INPUT_HORSE_MOVE_UP_ONLY = 0x699487BB,
	INPUT_HORSE_MOVE_DOWN_ONLY = 0x56F82045,
	INPUT_HORSE_MOVE_LEFT_ONLY = 0x86D773F6,
	INPUT_HORSE_MOVE_RIGHT_ONLY = 0x7E6B8612,
	INPUT_HORSE_SPECIAL = 0x70089459,
	INPUT_HORSE_GUN_LR = 0x3D99EEC6,
	INPUT_HORSE_GUN_UD = 0xBFF476F9,
	INPUT_HORSE_ATTACK = 0x60C81CDE,
	INPUT_HORSE_ATTACK2 = 0xC904196D,
	INPUT_HORSE_SPRINT = 0x5AA007D7,
	INPUT_HORSE_STOP = 0xE16B9AAD,
	INPUT_HORSE_EXIT = 0xCBDB82A8,
	INPUT_HORSE_LOOK_BEHIND = 0x81280569,
	INPUT_HORSE_JUMP = 0xE4D2CE1D,
	INPUT_HORSE_AIM = 0x61470051,
	INPUT_HORSE_COLLECT = 0x7D5B3717,
	INPUT_HITCH_ANIMAL = 0xA95E1468,
	INPUT_HORSE_COMMAND_FLEE = 0x4216AF06,
	INPUT_HORSE_COMMAND_STAY = 0xAE5DFDED,
	INPUT_HORSE_COMMAND_FOLLOW = 0x763E4D27,
	INPUT_HORSE_MELEE = 0x1A3EABBB,
	INPUT_MELEE_HORSE_ATTACK_PRIMARY = 0x78ED2132,
	INPUT_MELEE_HORSE_ATTACK_SECONDARY = 0x162AFEB8,
	INPUT_HORSE_COVER_TRANSITION = 0x2996DD15,
	INPUT_MELEE_ATTACK = 0xB2F377E8,
	INPUT_MELEE_MODIFIER = 0x1E7D7275,
	INPUT_MELEE_BLOCK = 0xB5EEEFB7,
	INPUT_MELEE_GRAPPLE = 0x2277FAE9,
	INPUT_MELEE_GRAPPLE_ATTACK = 0xADEAF48C,
	INPUT_MELEE_GRAPPLE_CHOKE = 0x018C47CF,
	INPUT_MELEE_GRAPPLE_REVERSAL = 0x91C9A817,
	INPUT_MELEE_GRAPPLE_BREAKOUT = 0xD0C1FEFF,
	INPUT_MELEE_GRAPPLE_STAND_SWITCH = 0xBE1F4699,
	INPUT_MELEE_GRAPPLE_MOUNT_SWITCH = 0x67ED272E,
	INPUT_PARACHUTE_DEPLOY = 0xEBF53058,
	INPUT_PARACHUTE_DETACH = 0xFFBFF139,
	INPUT_PARACHUTE_TURN_LR = 0x8EC920BF,
	INPUT_PARACHUTE_TURN_LEFT_ONLY = 0xC4CF3322,
	INPUT_PARACHUTE_TURN_RIGHT_ONLY = 0x2BDBA378,
	INPUT_PARACHUTE_PITCH_UD = 0xF0526228,
	INPUT_PARACHUTE_PITCH_UP_ONLY = 0x08BFEA69,
	INPUT_PARACHUTE_PITCH_DOWN_ONLY = 0x7C3A4352,
	INPUT_PARACHUTE_BRAKE_LEFT = 0x272BD8BA,
	INPUT_PARACHUTE_BRAKE_RIGHT = 0x948B3EA7,
	INPUT_PARACHUTE_SMOKE = 0x2574FAB0,
	INPUT_PARACHUTE_PRECISION_LANDING = 0xC675B8BD,
	INPUT_MAP = 0xE31C6A41,
	INPUT_SELECT_WEAPON_UNARMED = 0x1F6EEB0F,
	INPUT_SELECT_WEAPON_MELEE = 0x109E6852,
	INPUT_SELECT_WEAPON_HANDGUN = 0x184960E3,
	INPUT_SELECT_WEAPON_SHOTGUN = 0x76D3EA05,
	INPUT_SELECT_WEAPON_SMG = 0xCEF1BB48,
	INPUT_SELECT_WEAPON_AUTO_RIFLE = 0x05EEA9D0,
	INPUT_SELECT_WEAPON_SNIPER = 0x96C61FDF,
	INPUT_SELECT_WEAPON_HEAVY = 0x3D1675C3,
	INPUT_SELECT_WEAPON_SPECIAL = 0xC41ECEF8,
	INPUT_SELECT_CHARACTER_MICHAEL = 0xEA9256B8,
	INPUT_SELECT_CHARACTER_FRANKLIN = 0x8E8B08CB,
	INPUT_SELECT_CHARACTER_TREVOR = 0xB00CC093,
	INPUT_SELECT_CHARACTER_MULTIPLAYER = 0xDFB2B3B8,
	INPUT_SAVE_REPLAY_CLIP = 0x5B3AF9E3,
	INPUT_SPECIAL_ABILITY_PC = 0x52E60A8B,
	INPUT_SELECT_QUICKSELECT_SIDEARMS_LEFT = 0xE6F612E4,
	INPUT_SELECT_QUICKSELECT_DUALWIELD = 0x1CE6D9EB,
	INPUT_SELECT_QUICKSELECT_SIDEARMS_RIGHT = 0x4F49CC4C,
	INPUT_SELECT_QUICKSELECT_UNARMED = 0x8F9F9E58,
	INPUT_SELECT_QUICKSELECT_MELEE_NO_UNARMED = 0xAB62E997,
	INPUT_SELECT_QUICKSELECT_SECONDARY_LONGARM = 0xA1FDE2A6,
	INPUT_SELECT_QUICKSELECT_THROWN = 0xB03A913B,
	INPUT_SELECT_QUICKSELECT_PRIMARY_LONGARM = 0x42385422,
	INPUT_CELLPHONE_UP = 0xD2EE3B1E,
	INPUT_CELLPHONE_DOWN = 0x82196002,
	INPUT_CELLPHONE_LEFT = 0x3ABBE990,
	INPUT_CELLPHONE_RIGHT = 0xD25EFDCD,
	INPUT_CELLPHONE_SELECT = 0xDC264018,
	INPUT_CELLPHONE_CANCEL = 0xDD833287,
	INPUT_CELLPHONE_OPTION = 0xD2C28BB4,
	INPUT_CELLPHONE_EXTRA_OPTION = 0xBE354011,
	INPUT_CELLPHONE_SCROLL_FORWARD = 0xCB4E1798,
	INPUT_CELLPHONE_SCROLL_BACKWARD = 0x47CD0F3B,
	INPUT_CELLPHONE_CAMERA_FOCUS_LOCK = 0x5AC1805E,
	INPUT_CELLPHONE_CAMERA_GRID = 0xE18CC57A,
	INPUT_CELLPHONE_CAMERA_SELFIE = 0x6A440BFE,
	INPUT_CELLPHONE_CAMERA_DOF = 0x593DB489,
	INPUT_CELLPHONE_CAMERA_EXPRESSION = 0xD7E274E7,
	INPUT_FRONTEND_DOWN = 0x05CA7C52,
	INPUT_FRONTEND_UP = 0x6319DB71,
	INPUT_FRONTEND_LEFT = 0xA65EBAB4,
	INPUT_FRONTEND_RIGHT = 0xDEB34313,
	INPUT_FRONTEND_RDOWN = 0x5734A944,
	INPUT_FRONTEND_RUP = 0xD7DE6B1E,
	INPUT_FRONTEND_RLEFT = 0x39336A4F,
	INPUT_FRONTEND_RRIGHT = 0x5B48F938,
	INPUT_FRONTEND_AXIS_X = 0xFB56DD5B,
	INPUT_FRONTEND_AXIS_Y = 0x091178D0,
	INPUT_FRONTEND_SCROLL_AXIS_X = 0x3224BC55,
	INPUT_FRONTEND_SCROLL_AXIS_Y = 0x21651AD6,
	INPUT_FRONTEND_RIGHT_AXIS_X = 0x3D23549A,
	INPUT_FRONTEND_RIGHT_AXIS_Y = 0xEB4130DF,
	INPUT_FRONTEND_PAUSE = 0xD82E0BD2,
	INPUT_FRONTEND_PAUSE_ALTERNATE = 0x4A903C11,
	INPUT_FRONTEND_ACCEPT = 0xC7B5340A,
	INPUT_FRONTEND_CANCEL = 0x156F7119,
	INPUT_FRONTEND_X = 0x6DB8C62F,
	INPUT_FRONTEND_Y = 0x7C0162C0,
	INPUT_FRONTEND_LB = 0xE885EF16,
	INPUT_FRONTEND_RB = 0x17BEC168,
	INPUT_FRONTEND_LT = 0x51104035,
	INPUT_FRONTEND_RT = 0x6FED71BC,
	INPUT_FRONTEND_LS = 0x43CDA5B0,
	INPUT_FRONTEND_RS = 0x7DA48D2A,
	INPUT_FRONTEND_LEADERBOARD = 0x9EDC8D65,
	INPUT_FRONTEND_SOCIAL_CLUB = 0x064D1698,
	INPUT_FRONTEND_SOCIAL_CLUB_SECONDARY = 0xBDB8D6F3,
	INPUT_FRONTEND_DELETE = 0x4AF4D473,
	INPUT_FRONTEND_ENDSCREEN_ACCEPT = 0x3E32FCEE,
	INPUT_FRONTEND_ENDSCREEN_EXPAND = 0xC79BDE9F,
	INPUT_FRONTEND_SELECT = 0x171910DC,
	INPUT_FRONTEND_PHOTO_MODE = 0x44CD301B,
	INPUT_FRONTEND_NAV_UP = 0x8CFFE0A1,
	INPUT_FRONTEND_NAV_DOWN = 0x78114AB3,
	INPUT_FRONTEND_NAV_LEFT = 0x877F1027,
	INPUT_FRONTEND_NAV_RIGHT = 0x08BD758C,
	INPUT_FRONTEND_MAP_NAV_UP = 0x125A70E5,
	INPUT_FRONTEND_MAP_NAV_DOWN = 0xF8480EED,
	INPUT_FRONTEND_MAP_NAV_LEFT = 0xE0D75B00,
	INPUT_FRONTEND_MAP_NAV_RIGHT = 0x28725E5D,
	INPUT_FRONTEND_MAP_ZOOM = 0x6B359A27,
	INPUT_GAME_MENU_ACCEPT = 0x43DBF61F,
	INPUT_GAME_MENU_CANCEL = 0x308588E6,
	INPUT_GAME_MENU_OPTION = 0xFBD7B3E6,
	INPUT_GAME_MENU_EXTRA_OPTION = 0xD596CFB0,
	INPUT_GAME_MENU_UP = 0x911CB09E,
	INPUT_GAME_MENU_DOWN = 0x4403F97F,
	INPUT_GAME_MENU_LEFT = 0xAD7FCC5B,
	INPUT_GAME_MENU_RIGHT = 0x65F9EC5B,
	INPUT_GAME_MENU_TAB_LEFT = 0xCBD5B26E,
	INPUT_GAME_MENU_TAB_RIGHT = 0x110AD1D2,
	INPUT_GAME_MENU_TAB_LEFT_SECONDARY = 0x26E9DC00,
	INPUT_GAME_MENU_TAB_RIGHT_SECONDARY = 0x8CC9CD42,
	INPUT_GAME_MENU_SCROLL_FORWARD = 0x81457A1A,
	INPUT_GAME_MENU_SCROLL_BACKWARD = 0x9DA42644,
	INPUT_GAME_MENU_STICK_UP = 0x9CA97399,
	INPUT_GAME_MENU_STICK_DOWN = 0x63898D36,
	INPUT_GAME_MENU_STICK_LEFT = 0x06C089D4,
	INPUT_GAME_MENU_STICK_RIGHT = 0x5BDBE841,
	INPUT_GAME_MENU_RIGHT_STICK_UP = 0xF0232A03,
	INPUT_GAME_MENU_RIGHT_STICK_DOWN = 0xADB78673,
	INPUT_GAME_MENU_RIGHT_STICK_LEFT = 0x71E38966,
	INPUT_GAME_MENU_RIGHT_STICK_RIGHT = 0xE1CECE4B,
	INPUT_GAME_MENU_LS = 0xA8F6DE66,
	INPUT_GAME_MENU_RS = 0x89EA3FA5,
	INPUT_GAME_MENU_RIGHT_AXIS_X = 0x4685AA33,
	INPUT_GAME_MENU_RIGHT_AXIS_Y = 0x60C65EB4,
	INPUT_GAME_MENU_LEFT_AXIS_X = 0xF431D57A,
	INPUT_GAME_MENU_LEFT_AXIS_Y = 0x226EB1EF,
	INPUT_QUIT = 0x8E90C7BB,
	INPUT_DOCUMENT_PAGE_NEXT = 0xC97792B7,
	INPUT_DOCUMENT_PAGE_PREV = 0x20190AB4,
	INPUT_DOCUMENT_SCROLL = 0xAC70F311,
	INPUT_DOCUMENT_SCROLL_UP_ONLY = 0x3D0C19EC,
	INPUT_DOCUMENT_SCROLL_DOWN_ONLY = 0xD72F3E29,
	INPUT_ATTACK2 = 0x0283C582,
	INPUT_PREV_WEAPON = 0xCC1075A7,
	INPUT_NEXT_WEAPON = 0xFD0F0C2C,
	INPUT_SNIPER_ZOOM_IN = 0xE4568AA1,
	INPUT_SNIPER_ZOOM_OUT = 0xE40CE39E,
	INPUT_SNIPER_ZOOM_IN_ALTERNATE = 0x3A9897C1,
	INPUT_SNIPER_ZOOM_OUT_ALTERNATE = 0xBC820489,
	INPUT_REPLAY_START_STOP_RECORDING = 0xDCA6978E,
	INPUT_REPLAY_START_STOP_RECORDING_SECONDARY = 0x8991A70B,
	INPUT_REPLAY_MARKER_DELETE = 0xC7D2C51B,
	INPUT_REPLAY_CLIP_DELETE = 0xF6734E42,
	INPUT_REPLAY_PAUSE = 0x083137B2,
	INPUT_REPLAY_REWIND = 0xC1339A31,
	INPUT_REPLAY_FFWD = 0x609A27E8,
	INPUT_REPLAY_NEWMARKER = 0xF7C6DA28,
	INPUT_REPLAY_RECORD = 0xAD9A9C7C,
	INPUT_REPLAY_SCREENSHOT = 0x567FAF34,
	INPUT_REPLAY_HIDEHUD = 0x7E479C7B,
	INPUT_REPLAY_STARTPOINT = 0x5DAFACCF,
	INPUT_REPLAY_ENDPOINT = 0x4EF75BBD,
	INPUT_REPLAY_ADVANCE = 0x323AA450,
	INPUT_REPLAY_BACK = 0x088C7CD4,
	INPUT_REPLAY_TOOLS = 0x561A3387,
	INPUT_REPLAY_RESTART = 0x81B8BC9D,
	INPUT_REPLAY_SHOWHOTKEY = 0xEBA2A41E,
	INPUT_REPLAY_CYCLEMARKERLEFT = 0x5C220959,
	INPUT_REPLAY_CYCLEMARKERRIGHT = 0xC69AE799,
	INPUT_REPLAY_FOVINCREASE = 0x5925A10D,
	INPUT_REPLAY_FOVDECREASE = 0x2B88D701,
	INPUT_REPLAY_CAMERAUP = 0x749EFF0C,
	INPUT_REPLAY_CAMERADOWN = 0xA1FE9E2A,
	INPUT_REPLAY_SAVE = 0xEBC60685,
	INPUT_REPLAY_TOGGLETIME = 0xE3FB91B3,
	INPUT_REPLAY_TOGGLETIPS = 0xC8A1DE20,
	INPUT_REPLAY_PREVIEW = 0x58AC1355,
	INPUT_REPLAY_TOGGLE_TIMELINE = 0xF8629909,
	INPUT_REPLAY_TIMELINE_PICKUP_CLIP = 0xD2454F90,
	INPUT_REPLAY_TIMELINE_DUPLICATE_CLIP = 0x4146A033,
	INPUT_REPLAY_TIMELINE_PLACE_CLIP = 0x60726F50,
	INPUT_REPLAY_CTRL = 0xD88B47E7,
	INPUT_REPLAY_TIMELINE_SAVE = 0x65D70E9D,
	INPUT_REPLAY_PREVIEW_AUDIO = 0x79022218,
	INPUT_REPLAY_ACTION_REPLAY_START = 0xD9961107,
	INPUT_REPLAY_ACTION_REPLAY_CANCEL = 0x93776CAE,
	INPUT_REPLAY_RECORDING_START = 0xFD28D0F4,
	INPUT_REPLAY_RECORDING_STOP = 0xDB16E702,
	INPUT_REPLAY_SAVE_SNAPSHOT = 0xEFEC8FDE,
	INPUT_VEH_DRIVE_LOOK = 0xA2117C9A,
	INPUT_VEH_DRIVE_LOOK2 = 0x55AC04E5,
	INPUT_VEH_FLY_ATTACK2 = 0x4D83147C,
	INPUT_RADIO_WHEEL_UD = 0x14C7291D,
	INPUT_RADIO_WHEEL_LR = 0xF9FA6BC8,
	INPUT_VEH_SLOWMO_UD = 0xF1F9CD26,
	INPUT_VEH_SLOWMO_UP_ONLY = 0x2B981F4F,
	INPUT_VEH_SLOWMO_DOWN_ONLY = 0x642DE054,
	INPUT_MAP_POI = 0x9BEE9213,
	INPUT_INTERACT_LOCKON = 0xF8982F00,
	INPUT_INTERACT_LOCKON_NEG = 0x26A18F47,
	INPUT_INTERACT_LOCKON_POS = 0xF63A17F9,
	INPUT_INTERACT_LOCKON_ROB = 0x9FA5AD07,
	INPUT_INTERACT_LOCKON_Y = 0x09A92B8B,
	INPUT_INTERACT_LOCKON_A = 0xD10A3A36,
	INPUT_INTERACT_NEG = 0x424BD2D2,
	INPUT_INTERACT_POS = 0xF6BB7378,
	INPUT_INTERACT_OPTION1 = 0x760A9C6F,
	INPUT_INTERACT_OPTION2 = 0x84543902,
	INPUT_INTERACT_ANIMAL = 0xA1ABB953,
	INPUT_INTERACT_LOCKON_ANIMAL = 0x5415BE48,
	INPUT_INTERACT_LEAD_ANIMAL = 0x17D3BFF5,
	INPUT_INTERACT_LOCKON_DETACH_HORSE = 0xF5C4701B,
	INPUT_INTERACT_HORSE_CARE = 0xB0BCE5D6,
	INPUT_INTERACT_LOCKON_CALL_ANIMAL = 0x71F89BBC,
	INPUT_INTERACT_LOCKON_TRACK_ANIMAL = 0xE2473BF0,
	INPUT_INTERACT_LOCKON_TARGET_INFO = 0x31219490,
	INPUT_INTERACT_LOCKON_STUDY_BINOCULARS = 0xB3F388BC,
	INPUT_INTERACT_WILD_ANIMAL = 0x89F3D2E0,
	INPUT_INTERACT_HORSE_FEED = 0x0D55A0F0,
	INPUT_INTERACT_HORSE_BRUSH = 0x63A38F2C,
	INPUT_EMOTE_ACTION = 0x13C42BB2,
	INPUT_EMOTE_TAUNT = 0x470DC190,
	INPUT_EMOTE_GREET = 0x72BAD5AA,
	INPUT_EMOTE_COMM = 0x661857B3,
	INPUT_EMOTE_DANCE = 0xF311100C,
	INPUT_EMOTE_TWIRL_GUN_HOLD = 0x04FB8191,
	INPUT_EMOTE_TWIRL_GUN_VAR_A = 0x6990BDDF,
	INPUT_EMOTE_TWIRL_GUN_VAR_B = 0x52D29063,
	INPUT_EMOTE_TWIRL_GUN_VAR_C = 0xBC2AE312,
	INPUT_EMOTE_TWIRL_GUN_VAR_D = 0xAE69478F,
	INPUT_QUICK_EQUIP_ITEM = 0x6070D032,
	INPUT_MINIGAME_BUILDING_CAMERA_NEXT = 0x16B0EEF8,
	INPUT_MINIGAME_BUILDING_CAMERA_PREV = 0x5F97B231,
	INPUT_MINIGAME_BUILDING_HAMMER = 0xFA91AECD,
	INPUT_CURSOR_ACCEPT_DOUBLE_CLICK = 0x1C559F2E,
	INPUT_CURSOR_ACCEPT_HOLD = 0xE474F150,
	INPUT_CURSOR_ACCEPT = 0x9D2AEA88,
	INPUT_CURSOR_CANCEL = 0x27568539,
	INPUT_CURSOR_CANCEL_DOUBLE_CLICK = 0x9CB4ECCE,
	INPUT_CURSOR_CANCEL_HOLD = 0xD7F70F36,
	INPUT_CURSOR_X = 0xD6C4ECDC,
	INPUT_CURSOR_Y = 0xE4130778,
	INPUT_CURSOR_SCROLL_UP = 0x62800C92,
	INPUT_CURSOR_SCROLL_DOWN = 0x8BDE7443,
	INPUT_CURSOR_SCROLL_CLICK = 0x6AA8A71B,
	INPUT_CURSOR_SCROLL_DOUBLE_CLICK = 0xE1B6ED6D,
	INPUT_CURSOR_SCROLL_HOLD = 0x5484DBDD,
	INPUT_CURSOR_FORWARD_CLICK = 0x11DBBAB9,
	INPUT_CURSOR_FORWARD_DOUBLE_CLICK = 0x9805D715,
	INPUT_CURSOR_FORWARD_HOLD = 0x7630C9A1,
	INPUT_CURSOR_BACKWARD_CLICK = 0x9AF38793,
	INPUT_CURSOR_BACKWARD_DOUBLE_CLICK = 0xA14BA1FC,
	INPUT_CURSOR_BACKWARD_HOLD = 0x01AA9FA1,
	INPUT_ENTER_CHEAT_CODE = 0x7BF65AC8,
	INPUT_INTERACTION_MENU = 0xCC510E59,
	INPUT_MP_TEXT_CHAT_ALL = 0x9720FCEE,
	INPUT_MP_TEXT_CHAT_TEAM = 0x9098AD9D,
	INPUT_MP_TEXT_CHAT_FRIENDS = 0x7098AC73,
	INPUT_MP_TEXT_CHAT_CREW = 0x8142FA92,
	INPUT_PUSH_TO_TALK = 0x4BC9DABB,
	INPUT_CREATOR_LS = 0x339F3730,
	INPUT_CREATOR_RS = 0xD8CF0C95,
	INPUT_CREATOR_LT = 0x446258B6,
	INPUT_CREATOR_RT = 0x3C3DD371,
	INPUT_CREATOR_MENU_TOGGLE = 0x85D24405,
	INPUT_CREATOR_ACCEPT = 0x2CD5343E,
	INPUT_CREATOR_MENU_UP = 0xBCD1444B,
	INPUT_CREATOR_MENU_DOWN = 0x97410755,
	INPUT_CREATOR_MENU_LEFT = 0xEC6A30AA,
	INPUT_CREATOR_MENU_RIGHT = 0x19D8334C,
	INPUT_CREATOR_MENU_ACCEPT = 0xFB9C3231,
	INPUT_CREATOR_MENU_CANCEL = 0xBB3FC460,
	INPUT_CREATOR_MENU_FUNCTION = 0x5A03B3F3,
	INPUT_CREATOR_MENU_EXTRA_FUNCTION = 0xE6B8F103,
	INPUT_CREATOR_MENU_SELECT = 0x0984E40A,
	INPUT_CREATOR_PLACE = 0xD74CACAD,
	INPUT_CREATOR_DELETE = 0x3F4DC0EF,
	INPUT_CREATOR_DROP = 0x414034D5,
	INPUT_CREATOR_FUNCTION = 0xB05FDA25,
	INPUT_CREATOR_ROTATE_RIGHT = 0x9D75674E,
	INPUT_CREATOR_ROTATE_LEFT = 0xD41E9C2A,
	INPUT_CREATOR_GRAB = 0x338A0D45,
	INPUT_CREATOR_SWITCH_CAM = 0x16CCFEC6,
	INPUT_CREATOR_ZOOM_IN = 0x335D8D76,
	INPUT_CREATOR_ZOOM_OUT = 0x24A42F93,
	INPUT_CREATOR_RAISE = 0x0D0FB9B1,
	INPUT_CREATOR_LOWER = 0x1BDE2EB3,
	INPUT_CREATOR_SEARCH = 0xF55864CD,
	INPUT_CREATOR_MOVE_UD = 0x82428676,
	INPUT_CREATOR_MOVE_LR = 0x59753EDC,
	INPUT_CREATOR_LOOK_UD = 0x55EA24F3,
	INPUT_CREATOR_LOOK_LR = 0xAEB2A9C7,
	INPUT_CUT_FREE = 0xD2CC4644,
	INPUT_DROP = 0xD2928083,
	INPUT_PICKUP_CARRIABLE = 0xEB2AC491,
	INPUT_PICKUP_CARRIABLE2 = 0xBE8593AF,
	INPUT_PLACE_CARRIABLE_ONTO_PARENT = 0x7D326951,
	INPUT_PICKUP_CARRIABLE_FROM_PARENT = 0xA1202C7B,
	INPUT_MERCY_KILL = 0x956C2A0E,
	INPUT_REVIVE = 0x43F2959C,
	INPUT_HOGTIE = 0xD9C50532,
	INPUT_CARRIABLE_SUICIDE = 0x6E9734E8,
	INPUT_CARRIABLE_BREAK_FREE = 0x295175BF,
	INPUT_INTERACT_HIT_CARRIABLE = 0x0522B243,
	INPUT_LOOT = 0x41AC83D1,
	INPUT_LOOT2 = 0x399C6619,
	INPUT_LOOT3 = 0x27D1C284,
	INPUT_LOOT_VEHICLE = 0x14DB6C5E,
	INPUT_LOOT_AMMO = 0xC23D7B9E,
	INPUT_BREAK_VEHICLE_LOCK = 0x97C71B28,
	INPUT_LOOT_ALIVE_COMPONENT = 0xFF8109D8,
	INPUT_FEED_INTERACT = 0xA8E3F467,
	INPUT_SADDLE_TRANSFER = 0x73A8FD83,
	INPUT_SHOP_BUY = 0xDFF812F9,
	INPUT_SHOP_SELL = 0x6D1319BE,
	INPUT_SHOP_SPECIAL = 0xEA150E72,
	INPUT_SHOP_BOUNTY = 0xD3ECF82F,
	INPUT_SHOP_INSPECT = 0x5E723D8C,
	INPUT_SHOP_CHANGE_CURRENCY = 0x90FA19AB,
	INPUT_QUICK_USE_ITEM = 0xC1989F95,
	INPUT_PROMPT_PAGE_NEXT = 0x8CF90A9D,
	INPUT_FRONTEND_TOUCH_ZOOM_FACTOR = 0xE7F89C38,
	INPUT_FRONTEND_TOUCH_ZOOM_X = 0x16661AD0,
	INPUT_FRONTEND_TOUCH_ZOOM_Y = 0x253DB87F,
	INPUT_FRONTEND_TOUCH_DRAG_X = 0xEC93548E,
	INPUT_FRONTEND_TOUCH_DRAG_Y = 0x9AC130EB,
	INPUT_FRONTEND_TOUCH_TAP_X = 0xC10E180A,
	INPUT_FRONTEND_TOUCH_TAP_Y = 0xCF4B3484,
	INPUT_FRONTEND_TOUCH_DOUBLE_TAP_X = 0x1661FAB0,
	INPUT_FRONTEND_TOUCH_DOUBLE_TAP_Y = 0x96E87BBF,
	INPUT_FRONTEND_TOUCH_HOLD_X = 0x0FF17F1D,
	INPUT_FRONTEND_TOUCH_HOLD_Y = 0x398ED257,
	INPUT_FRONTEND_TOUCH_SWIPE_UP_X = 0x0B71D439,
	INPUT_FRONTEND_TOUCH_SWIPE_UP_Y = 0x19CA70EA,
	INPUT_FRONTEND_TOUCH_SWIPE_DOWN_X = 0xE3B30955,
	INPUT_FRONTEND_TOUCH_SWIPE_DOWN_Y = 0xBDFF3DEA,
	INPUT_FRONTEND_TOUCH_SWIPE_LEFT_X = 0x2545B0DE,
	INPUT_FRONTEND_TOUCH_SWIPE_LEFT_Y = 0xD43D0ECE,
	INPUT_FRONTEND_TOUCH_SWIPE_RIGHT_X = 0xEAB68397,
	INPUT_FRONTEND_TOUCH_SWIPE_RIGHT_Y = 0x675B7CE3,
	INPUT_MULTIPLAYER_INFO_PLAYERS = 0x9C68CE34,
	INPUT_MULTIPLAYER_DEAD_SWITCH_RESPAWN = 0xB4F298BA,
	INPUT_MULTIPLAYER_DEAD_INFORM_LAW = 0x6816A38E,
	INPUT_MULTIPLAYER_DEAD_RESPAWN = 0x18987353,
	INPUT_MULTIPLAYER_DEAD_DUEL = 0xF875FC78,
	INPUT_MULTIPLAYER_DEAD_PARLEY = 0x4D11FE01,
	INPUT_MULTIPLAYER_DEAD_FEUD = 0xB4A11066,
	INPUT_MULTIPLAYER_DEAD_LEADER_FEUD = 0xCC18F960,
	INPUT_MULTIPLAYER_DEAD_PRESS_CHARGES = 0xE50DCA13,
	INPUT_MULTIPLAYER_RACE_RESPAWN = 0x014CA044,
	INPUT_MULTIPLAYER_PREDATOR_ABILITY = 0xC5CF41B2,
	INPUT_MULTIPLAYER_SPECTATE_PLAYER_NEXT = 0xBA065692,
	INPUT_MULTIPLAYER_SPECTATE_PLAYER_PREV = 0x5092BF47,
	INPUT_MULTIPLAYER_SPECTATE_HIDE_HUD = 0x7DBA5D49,
	INPUT_MULTIPLAYER_SPECTATE_PLAYER_OPTIONS = 0x4E074EE6,
	INPUT_MULTIPLAYER_LEADERBOARD_SCROLL_UD = 0xA917D24B,
	INPUT_MINIGAME_QUIT = 0xE9094BA0,
	INPUT_MINIGAME_INCREASE_BET = 0xC7CB8D5F,
	INPUT_MINIGAME_DECREASE_BET = 0xD3EBF425,
	INPUT_MINIGAME_CHANGE_BET_AXIS_Y = 0xBDC733EE,
	INPUT_MINIGAME_PLACE_BET = 0x410B0B2E,
	INPUT_MINIGAME_CLEAR_BET = 0x4A21C66B,
	INPUT_MINIGAME_HELP = 0x9384E0A8,
	INPUT_MINIGAME_HELP_PREV = 0xC5F53156,
	INPUT_MINIGAME_HELP_NEXT = 0x83608AC0,
	INPUT_MINIGAME_REPLAY = 0x985243B7,
	INPUT_MINIGAME_NEW_GAME = 0x5D1788FF,
	INPUT_MINIGAME_POKER_SKIP = 0x646A7792,
	INPUT_MINIGAME_POKER_CALL = 0xDAB9EE72,
	INPUT_MINIGAME_POKER_FOLD = 0x49B4AD1E,
	INPUT_MINIGAME_POKER_CHECK = 0x206B2087,
	INPUT_MINIGAME_POKER_CHECK_FOLD = 0x72A9D1F7,
	INPUT_MINIGAME_POKER_BET = 0xA9883369,
	INPUT_MINIGAME_POKER_HOLE_CARDS = 0xC2B1193A,
	INPUT_MINIGAME_POKER_BOARD_CARDS = 0x03753498,
	INPUT_MINIGAME_POKER_SKIP_TUTORIAL = 0xB568BCD0,
	INPUT_MINIGAME_POKER_SHOW_POSSIBLE_HANDS = 0x7765B9D4,
	INPUT_MINIGAME_POKER_YOUR_CARDS = 0xF923B337,
	INPUT_MINIGAME_POKER_COMMUNITY_CARDS = 0xE402B898,
	INPUT_MINIGAME_POKER_CHEAT_LR = 0x2330F517,
	INPUT_MINIGAME_FISHING_RESET_CAST = 0xB40A9BDB,
	INPUT_MINIGAME_FISHING_RELEASE_FISH = 0xF14FD435,
	INPUT_MINIGAME_FISHING_KEEP_FISH = 0x52C5C34A,
	INPUT_MINIGAME_FISHING_HOOK = 0xA1CD103A,
	INPUT_MINIGAME_FISHING_LEFT_AXIS_X = 0x69B10623,
	INPUT_MINIGAME_FISHING_LEFT_AXIS_Y = 0x09BF4645,
	INPUT_MINIGAME_FISHING_RIGHT_AXIS_X = 0x4FD4E558,
	INPUT_MINIGAME_FISHING_RIGHT_AXIS_Y = 0x95F2F193,
	INPUT_MINIGAME_FISHING_LEAN_LEFT = 0x0D4C3ABA,
	INPUT_MINIGAME_FISHING_LEAN_RIGHT = 0x05074A9B,
	INPUT_MINIGAME_FISHING_QUICK_EQUIP = 0x25F525CD,
	INPUT_MINIGAME_FISHING_REEL_SPEED_UP = 0x2FA915F5,
	INPUT_MINIGAME_FISHING_REEL_SPEED_DOWN = 0xD7AF56A0,
	INPUT_MINIGAME_FISHING_REEL_SPEED_AXIS = 0x49C73CB2,
	INPUT_MINIGAME_FISHING_MANUAL_REEL_IN = 0xA303F462,
	INPUT_MINIGAME_FISHING_MANUAL_REEL_OUT_MODIFER = 0x33B2A8CC,
	INPUT_MINIGAME_CRACKPOT_BOAT_SHOW_CONTROLS = 0x524C3787,
	INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES = 0x88F8B6B1,
	INPUT_MINIGAME_DOMINOES_VIEW_MOVES = 0x7733CF2C,
	INPUT_MINIGAME_DOMINOES_PLAY_TILE = 0x95F5BB7C,
	INPUT_MINIGAME_DOMINOES_SKIP_DEAL = 0xC5E622D7,
	INPUT_MINIGAME_DOMINOES_MOVE_LEFT_ONLY = 0xFDDD89D4,
	INPUT_MINIGAME_DOMINOES_MOVE_RIGHT_ONLY = 0x7D5187C9,
	INPUT_MINIGAME_DOMINOES_MOVE_UP_ONLY = 0xC6AB8CB3,
	INPUT_MINIGAME_DOMINOES_MOVE_DOWN_ONLY = 0xFD9FC86D,
	INPUT_MINIGAME_BLACKJACK_HAND_VIEW = 0x03F1E7CB,
	INPUT_MINIGAME_BLACKJACK_TABLE_VIEW = 0xADE09435,
	INPUT_MINIGAME_BLACKJACK_BET_AXIS_Y = 0x3D2EA092,
	INPUT_MINIGAME_BLACKJACK_BET = 0x661D8A31,
	INPUT_MINIGAME_BLACKJACK_DECLINE = 0xCD7DDF9B,
	INPUT_MINIGAME_BLACKJACK_STAND = 0x31260507,
	INPUT_MINIGAME_BLACKJACK_HIT = 0xA8142713,
	INPUT_MINIGAME_BLACKJACK_DOUBLE = 0x74486CA4,
	INPUT_MINIGAME_BLACKJACK_SPLIT = 0x432B111F,
	INPUT_MINIGAME_FFF_A = 0x0E717DC6,
	INPUT_MINIGAME_FFF_B = 0x1BC81873,
	INPUT_MINIGAME_FFF_X = 0x65F0ACDF,
	INPUT_MINIGAME_FFF_Y = 0x73AD4858,
	INPUT_MINIGAME_FFF_ZOOM = 0x61E4CACC,
	INPUT_MINIGAME_FFF_SKIP_TURN = 0x3073681B,
	INPUT_MINIGAME_FFF_CYCLE_SEQUENCE_LEFT = 0x29A3550E,
	INPUT_MINIGAME_FFF_CYCLE_SEQUENCE_RIGHT = 0x7B5B896D,
	INPUT_MINIGAME_FFF_FLOURISH_CONTINUE = 0x6FC9DE68,
	INPUT_MINIGAME_FFF_FLOURISH_END = 0xF7750B25,
	INPUT_MINIGAME_FFF_PRACTICE = 0xCA379F82,
	INPUT_MINIGAME_MILKING_LEFT_ACTION = 0xFF4B2ADA,
	INPUT_MINIGAME_MILKING_RIGHT_ACTION = 0x30BE7CF2,
	INPUT_MINIGAME_LEFT_TRIGGER = 0x7EC33553,
	INPUT_MINIGAME_RIGHT_TRIGGER = 0xBE78B715,
	INPUT_MINIGAME_ACTION_LEFT = 0x0A1EFC09,
	INPUT_MINIGAME_ACTION_RIGHT = 0x16D70379,
	INPUT_MINIGAME_ACTION_UP = 0xF5A13A0D,
	INPUT_MINIGAME_ACTION_DOWN = 0xF601BCFC,
	INPUT_STICKY_FEED_ACCEPT = 0xF4DD4C67,
	INPUT_STICKY_FEED_CANCEL = 0x0CFB963F,
	INPUT_STICKY_FEED_X = 0xBD1D94A1,
	INPUT_STICKY_FEED_Y = 0xC85BAB1D,
	INPUT_CAMERA_PUT_AWAY = 0x5FC770EA,
	INPUT_CAMERA_BACK = 0xA4BD74A5,
	INPUT_CAMERA_TAKE_PHOTO = 0x44FA14C2,
	INPUT_CAMERA_CONTEXT_GALLERY = 0xE8337356,
	INPUT_CAMERA_HANDHELD_USE = 0x776F65E9,
	INPUT_CAMERA_DOF = 0x3003F9DC,
	INPUT_CAMERA_SELFIE = 0xAC5922EA,
	INPUT_CAMERA_ZOOM = 0x47EC4C22,
	INPUT_CAMERA_POSE_NEXT = 0xF810FB35,
	INPUT_CAMERA_POSE_PREV = 0x8D5BE9D1,
	INPUT_CAMERA_EXPRESSION_NEXT = 0xCFA703D3,
	INPUT_CAMERA_EXPRESSION_PREV = 0x07B6435D,
	INPUT_CAMERA_ADVANCED_TAKE_PHOTO = 0xB869EDFE,
	INPUT_CAMERA_ADVANCED_ZOOM_IN = 0xBF14CFE7,
	INPUT_CAMERA_ADVANCED_ZOOM_OUT = 0xED7AE13F,
	INPUT_CAMERA_ADVANCED_SWITCH_CONTROLS = 0xD593C221,
	INPUT_TITHING_INCREASE_AMOUNT = 0x24F37AB5,
	INPUT_TITHING_DECREASE_AMOUNT = 0xCEFF5C13,
	INPUT_BREAK_DOOR_LOCK = 0x77110B0A,
	INPUT_INTERROGATE_QUESTION = 0xA1AA2D8D,
	INPUT_INTERROGATE_BEAT = 0x6E1E0D62,
	INPUT_INTERROGATE_KILL = 0x81B2E311,
	INPUT_INTERROGATE_RELEASE = 0x3C22EF0E,
	INPUT_CAMP_BED_INSPECT = 0xC67E13BB,
	INPUT_PC_FREE_LOOK = 0x8AAA0AD4,
	INPUT_MINIGAME_BARTENDER_RAISE_GLASS = 0xA13460F5,
	INPUT_MINIGAME_BARTENDER_RAISE_BOTTLE = 0xF0A25112,
	INPUT_MINIGAME_BARTENDER_POUR = 0xCABC2460,
	INPUT_MINIGAME_BARTENDER_SERVE = 0xDC03B043,
	INPUT_PHOTO_MODE = 0x3C0A40F2,
	INPUT_PHOTO_MODE_PC = 0x35957F6C,
	INPUT_PHOTO_MODE_CHANGE_CAMERA = 0x9F06B29C,
	INPUT_PHOTO_MODE_MOVE_LR = 0x4F136512,
	INPUT_PHOTO_MODE_MOVE_LEFT_ONLY = 0x311353EB,
	INPUT_PHOTO_MODE_MOVE_RIGHT_ONLY = 0x5357A7F5,
	INPUT_PHOTO_MODE_MOVE_UD = 0xEC001315,
	INPUT_PHOTO_MODE_MOVE_UP_ONLY = 0x315D57E6,
	INPUT_PHOTO_MODE_MOVE_DOWN_ONLY = 0x4EBCC409,
	INPUT_PHOTO_MODE_RESET = 0xA209BD57,
	INPUT_PHOTO_MODE_LENSE_NEXT = 0xB138D899,
	INPUT_PHOTO_MODE_LENSE_PREV = 0x06A057F8,
	INPUT_PHOTO_MODE_ROTATE_LEFT = 0x2EEA1D2A,
	INPUT_PHOTO_MODE_ROTATE_RIGHT = 0x96E70854,
	INPUT_PHOTO_MODE_TOGGLE_HUD = 0x7F9055F5,
	INPUT_PHOTO_MODE_VIEW_PHOTOS = 0xDCE96D67,
	INPUT_PHOTO_MODE_TAKE_PHOTO = 0xA190AAC7,
	INPUT_PHOTO_MODE_BACK = 0x2F13EC9A,
	INPUT_PHOTO_MODE_SWITCH_MODE = 0x8F32E2EB,
	INPUT_PHOTO_MODE_FILTER_INTENSITY = 0xFE6DD360,
	INPUT_PHOTO_MODE_FILTER_INTENSITY_UP = 0x2286D46B,
	INPUT_PHOTO_MODE_FILTER_INTENSITY_DOWN = 0xB341F407,
	INPUT_PHOTO_MODE_FOCAL_LENGTH = 0x886ABA4E,
	INPUT_PHOTO_MODE_FOCAL_LENGTH_UP_ONLY = 0xFAFBD66A,
	INPUT_PHOTO_MODE_FOCAL_LENGTH_DOWN_ONLY = 0x01EBFABD,
	INPUT_PHOTO_MODE_FILTER_NEXT = 0x699F8D08,
	INPUT_PHOTO_MODE_FILTER_PREV = 0x4F640885,
	INPUT_PHOTO_MODE_ZOOM_IN = 0x5B843BC9,
	INPUT_PHOTO_MODE_ZOOM_OUT = 0x2354D2E6,
	INPUT_PHOTO_MODE_DOF = 0x26B9AE6A,
	INPUT_PHOTO_MODE_DOF_UP_ONLY = 0x87B07940,
	INPUT_PHOTO_MODE_DOF_DOWN_ONLY = 0x047099F1,
	INPUT_PHOTO_MODE_EXPOSURE_UP = 0xC64E2284,
	INPUT_PHOTO_MODE_EXPOSURE_DOWN = 0xAD07A5A5,
	INPUT_PHOTO_MODE_EXPOSURE_LOCK = 0x9DE08D71,
	INPUT_PHOTO_MODE_CONTRAST = 0x483F707F,
	INPUT_PHOTO_MODE_CONTRAST_UP_ONLY = 0x5D2DD717,
	INPUT_PHOTO_MODE_CONTRAST_DOWN_ONLY = 0x30811620,
	INPUT_CRAFTING_EAT = 0xB99A9CAD,
	INPUT_CAMP_SETUP_TENT = 0x0B1BE2E8,
	INPUT_MINIGAME_ACTION_X = 0x1D927DF2,
	INPUT_WEAPON_INSPECT_ZOOM = 0xC511543B,
	INPUT_FRONTEND_KEYMAPPING_CANCEL = 0x3E89055A,
	INPUT_MINIGAME_DANCE_NEXT = 0x3FEDA104,
	INPUT_MINIGAME_DANCE_PREV = 0xE8D7D731,
	INPUT_DEPRECATED_ABOVE = 0xC1D24F92,
	INPUT_SCRIPT_LEFT_AXIS_X = 0x1F8EEF84,
	INPUT_SCRIPT_LEFT_AXIS_Y = 0x5418D8AB,
	INPUT_SCRIPT_RIGHT_AXIS_X = 0xA6B769E9,
	INPUT_SCRIPT_RIGHT_AXIS_Y = 0x27A5EBC0,
	INPUT_SCRIPT_RUP = 0x771D6E13,
	INPUT_SCRIPT_RDOWN = 0x37933367,
	INPUT_SCRIPT_RLEFT = 0xA4DB0458,
	INPUT_SCRIPT_RRIGHT = 0x22A3B800,
	INPUT_SCRIPT_LB = 0xE624C062,
	INPUT_SCRIPT_RB = 0x91E9231C,
	INPUT_SCRIPT_LT = 0x2B314A1E,
	INPUT_SCRIPT_RT = 0x26E9CD17,
	INPUT_SCRIPT_LS = 0xAADDC975,
	INPUT_SCRIPT_RS = 0xD04E9FE2,
	INPUT_SCRIPT_PAD_UP = 0x0DC15ADD,
	INPUT_SCRIPT_PAD_DOWN = 0xB1DA5574,
	INPUT_SCRIPT_PAD_LEFT = 0x1AF81D9E,
	INPUT_SCRIPT_PAD_RIGHT = 0x82A9B758,
	INPUT_SCRIPT_SELECT = 0xC8722109,
	INPUT_SCRIPTED_FLY_UD = 0xAEB4B1DE,
	INPUT_SCRIPTED_FLY_LR = 0xF1111E4A,
	INPUT_SCRIPTED_FLY_ZUP = 0x639B9FC9,
	INPUT_SCRIPTED_FLY_ZDOWN = 0x9C5E030C
};

enum ePadIndex
{
	PLAYER_CONTROL = 0,
	CAMERA_CONTROL = 1,
	FRONTEND_CONTROL = 2
};

enum eOnscreenKeyboardTextType
{
	KTEXTTYPE_INVALID = -1,
	KTEXTTYPE_DEFAULT,
	KTEXTTYPE_EMAIL,
	KTEXTTYPE_PASSWORD,
	KTEXTTYPE_NUMERIC,
	KTEXTTYPE_ALPHABET,
	KTEXTTYPE_GAMERTAG,
	KTEXTTYPE_FILENAME,
	KTEXTTYPE_COUNT
};

enum eOnscreenKeyboardStatus
{
	OSK_INVALID = -1,
	OSK_PENDING = 0,
	OSK_SUCCESS = 1,
	OSK_CANCELLED = 2,
	OSK_FAILED = 3
};

enum eHudComponent : unsigned
{
	HUD_CTX_INVALID = 0,
	HUD_CTX_IN_FAST_TRAVEL_MENU = 3141998988,
	HUD_CTX_IN_LOBBY = 481761311,
	HUD_CTX_LOBBY_TEAM_SELECT = 1622267885,
	HUD_CTX_IN_MINIGAME = 372886907,
	HUD_CTX_IN_MINIGAME_WITH_MP_GAME_UPDATES = 3961241236,
	HUD_CTX_IN_MINIGAME_POKER_INTRO = 1920936087,
	HUD_CTX_IN_MINIGAME_POKER_OUTRO = 2244964272,
	HUD_CTX_IN_SHOP = 2947521505,
	HUD_CTX_IN_COMBAT_RESTRICTED_SHOP = 1791176674,
	HUD_CTX_IN_MISSION_CUTSCENE = 2615659805,
	HUD_CTX_SCRIPTED_IN_GAME_CUTSCENE = 1331687942,
	HUD_CTX_IN_VERSUS_CUTSCENE = 1003289417,
	HUD_CTX_INPUT_REVEAL_HUD = 4225963071,
	HUD_CTX_HACK_RADAR_FORCE_HIDE = 474191950,
	HUD_CTX_IN_CAMP_WARDROBE = 4042528528,
	HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED = 724769646,
	HUD_CTX_IN_CAMP = 2676363974,
	HUD_CTX_IN_CAMP_WITH_SUPPLIES = 3344342546,
	HUD_CTX_RESTING_BY_FIRE = 3296076414,
	HUD_CTX_FISHING = 3435583101,
	HUD_CTX_IN_QUICK_TIME_EVENT = 3870590388,
	HUD_CTX_MISSION_CONTROLLER_INTRO = 3301703818,
	HUD_CTX_MISSION_CONTROLLER_OUTRO = 68203906,
	HUD_CTX_MISSION_CONTROLLER = 690901814,
	HUD_CTX_MISSION_CONTROLLER_CUTSCENE = 598430796,
	HUD_CTX_MISSION_CREATOR = 1923543915,
	HUD_CTX_IN_MP_TUTORIAL_CUTSCENE = 3929701976,
	HUD_CTX_ROBBERY_ACTION = 2976082944,
	HUD_CTX_IN_FISHING_MODE = 100665617,
	HUD_CTX_TITHING = 1670279562,
	HUD_CTX_TITHING_NOGANG_CASH = 421084969,
	HUD_CTX_GOLD_CURRENCY_CHANGE = 2077578434,
	HUD_CTX_MP_SPECTATING = 3873856013,
	HUD_CTX_INSPECT_ITEM = 2447365204,
	HUD_CTX_IN_CATALOGUE_SHOP_MENU = 1815407589,
	HUD_CTX_SHOP_OBJECTIVE = 559258637,
	HUD_CTX_FEUD1_FISHING = 1422201455,
	HUD_CTX_MINIGAME_SHOOTING = 3006112408,
	HUD_CTX_HONOR_SHOW = 121713391,
	HUD_CTX_MISSION_CUTSCENE_WITH_RADAR = 1759705598,
	HUD_CTX_FIREFIGHT_CUTSCENE = 1733954764,
	HUD_CTX_MP_RACES = 2844444557,
	HUD_CTX_ITEM_CONSUMPTION_HEALTH = 3159166578,
	HUD_CTX_ITEM_CONSUMPTION_HEALTH_CORE = 1898574875,
	HUD_CTX_ITEM_CONSUMPTION_STAMINA = 2220031132,
	HUD_CTX_ITEM_CONSUMPTION_STAMINA_CORE = 308865989,
	HUD_CTX_ITEM_CONSUMPTION_DEADEYE = 3891991919,
	HUD_CTX_ITEM_CONSUMPTION_DEADEYE_CORE = 1506296948,
	HUD_CTX_ITEM_CONSUMPTION_HORSE_HEALTH = 1281091544,
	HUD_CTX_ITEM_CONSUMPTION_HORSE_HEALTH_CORE = 439300812,
	HUD_CTX_ITEM_CONSUMPTION_HORSE_STAMINA = 1404048992,
	HUD_CTX_ITEM_CONSUMPTION_HORSE_STAMINA_CORE = 956976696,
	HUD_CTX_IN_PLAYER_CAMP = 2011163970,
	HUD_CTX_IN_MP_GAME_MODE = 1344742130,
	HUD_CTX_MP_OUT_OF_AREA_BOUNDS = 2170729820,
	HUD_CTX_PROMPT_MONEY = 2550704233,
	HUD_CTX_MP_MATCHMAKING_TRANSITION = 128623374,
	HUD_CTX_OUTDOOR_SHOP = 1422092402,
	HUD_CTX_IN_GUARMA_AND_BROKE = 1023137905,
	HUD_CTX_IN_RESPAWN = 4236504613,
	HUD_CTX_IN_TOWN = 1833957607,
	HUD_CTX_SLEEPING = 700961590,
	HUD_CTX_NON_COMBAT_MISSION = 3045724149,
	HUD_CTX_WATCHING_A_SHOW = 1664736751,
	HUD_CTX_SKINNING_PROCESS = 2064968046,
	HUD_CTX_SP_INTRO_HORSE_ITEMS_RESTRICTED = 398076311,
	HUD_CTX_PLAYER_CAMERA_MODE = 959420967,
	HUD_CTX_INFINITE_AMMO = 1058184710,
	HUD_CTX_SCRIPT_CME_CUTSCENE = 2583486523,
	HUD_CTX_TRANSLATE_OVERLAY = 382897689,
	HUD_CTX_CRAFTING_SEQUENCE = 3825138493,
	HUD_CTX_SHARP_SHOOTER_EVENT = 4228878730,
	HUD_CTX_NO_ALIVE_PLAYER_HORSE = 3843728743,
	HUD_CTX_PLAYER_WITHOUT_SATCHEL = 2188514449,
	HUD_CTX_MAYOR2_CUTSCENE_OBJECTIVES = 853763926,
	HUD_CTX_FADED_GAMEPLAY = 1826124692,
	HUD_CTX_IN_STABLES = 439038017,
	HUD_CTX_INFO_CARD = 3321978543,
	HUD_CTX_POSSE_CREATE = 3020406567,
	HUD_CTX_CHARACTER_CREATOR = 1779876696,
	HUD_CTX_SHOW_MP_DEATH_SCREEN = 3948259678,
	HUD_CTX_PLAYER_MENU_CAMP_MAINTENANCE = 3771555935,
	HUD_CTX_IN_PHOTO_STUDIO = 3802243608,
	HUD_CTX_MP_INSTANCED_HUD = 537169871,
	HUD_CTX_MP_INSTANCED_TOP_RIGHT_HUD = 2531357189,
	HUD_CTX_MP_COOP_MISSION_POST_COMPLETION_PRE_AWARD_FLOW = 253418738,
	HUD_CTX_MP_COOP_MISSION_POST_COMPLETION_AWARD_FLOW = 433996714,
	HUD_CTX_MP_LEADERBOARD_MINI = 36547242,
	HUD_CTX_AMBIENT_SPECTATOR_VIEW = 2083323686,
	HUD_CTX_SHOWDOWN_OUTRO = 999578278,
	HUD_CTX_MP_MINIGAME_SHOW_PLAYER_CASH = 2003196676,
	HUD_CTX_MP_PLAYSTYLE_ICON_TRANSITION = 2443924918,
	HUD_CTX_MP_BOUNTY_JAILTIME = 4246757331,
	HUD_CTX_MP_TRADER = 3512473425,
	HUD_CTX_MP_STEW_POT_PROXIMITY = 3930384766,
	HUD_CTX_MP_SHOW_HUD_ABILITY_CARD_INDICATOR = 1533515944,
	HUD_CTX_MONEY_ANIMATION_PLAYING = 2373808746,
	HUD_CTX_MP_UGC_PLAYER_OUTRO = 4220189749,
	HUD_CTX_MP_IN_ROLE_CUTSCENE = 2975717607,
	HUD_CTX_MP_COLLECTOR_SALESWOMAN = 1163138879,
	HUD_CTX_IN_PHOTO_MODE = 2890042977,
	HUD_CTX_MP_MOONSHINE_BUSINESS = 557238883,
	HUD_CTX_PLAYER_CAMERA_REQUIRES_HUD = 1381790879,
	HUD_CTX_MP_NATURALIST_ANIMAL_MODE = 946989305,
	_0x5F8F860A = 4265452656,
	HUD_CTX_CODE_TOOLS = 367098993
};

enum eTextAlignment
{
	LEFT = 0,
	CENTER = 1,
	RIGHT = 2,
};

enum eAddItemReason : unsigned
{
	ADD_REASON_AWARDS = 0xB784AD1E,
	ADD_REASON_CREATE_CHARACTER = 0xE2C4FF71,
	ADD_REASON_DEBUG = 0x5C05C64D,
	ADD_REASON_DEFAULT = 0x2CD419DC,
	ADD_REASON_GET_INVENTORY = 0xD8188685,
	ADD_REASON_INCENTIVE = 0x8ADC2E95,
	ADD_REASON_LOADOUT = 0xCA3454E6,
	ADD_REASON_LOAD_SAVEGAME = 0x56212906,
	ADD_REASON_LOOTED = 0xCA806A55,
	ADD_REASON_MELEE = 0x7B9BDCE7,
	ADD_REASON_MP_MISSION = 0xEC0E0194,
	ADD_REASON_NOTIFICATION = 0xC56292D2,
	ADD_REASON_PICKUP = 0x1A770E22,
	ADD_REASON_PURCHASED = 0x4A6726C9,
	ADD_REASON_SET_AMOUNT = 0x4504731E,
	ADD_REASON_SYNCING = 0x8D4B4FF4,
	ADD_REASON_USE_FAILED = 0xD385B670
};