#include "script.h"

void NativeMenu::DisplayText(const std::string& text, const std::string& font, float x, float y, float scale, int align, int r, int g, int b)
{
	std::string Template;
	if (align == CENTER) Template = std::format("~s~<FONT FACE='{0}'><P ALIGN = 'CENTER'>{1}</P></FONT>", font, text);
	else if (align == RIGHT) { DELETED::SET_TEXT_CENTRE(true); Template = std::format("~s~<FONT FACE='{0}'><P ALIGN = 'RIGHT'>{1}</P></FONT>", font, text); }
	else Template = std::format("~s~<FONT FACE='{0}'>{1}</FONT>", font, text);
	const char* str = MISC::VAR_STRING(10, "LITERAL_STRING", const_cast<const char*>(Template.c_str()));

	UIDEBUG::_BG_SET_TEXT_COLOR(r, g, b, 255);
	UIDEBUG::_BG_SET_TEXT_SCALE(0.0f, scale);
	UIDEBUG::_BG_DISPLAY_TEXT(str, x, y);
}

void NativeMenu::DrawSprite(const char* txtDict, const char* txtName, float x, float y, float width, float height, float heading, int r, int g, int b, int a)
{
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED(txtDict)) 
	{
		TXD::REQUEST_STREAMED_TEXTURE_DICT(txtDict, false);
	}
	else 
	{
		GRAPHICS::DRAW_SPRITE(txtDict, txtName, x, y, width, height, heading, r, g, b, a, false);
	}
}

void NativeMenu::DisableControls()
{
	HUD::CLEAR_ALL_HELP_MESSAGES();
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE()) CAM::STOP_GAMEPLAY_HINT(false);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WHISTLE, false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WHISTLE_HORSEBACK, false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_HORSE_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_HORSE_ATTACK2, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_HORSE_MELEE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK, true);

	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_SELECT_RADAR_MODE, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_EXPAND_RADAR, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_OPEN_SATCHEL_MENU, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_OPEN_SATCHEL_HORSE_MENU, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_REVEAL_HUD, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_OPEN_JOURNAL, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_OPEN_CRAFTING_MENU, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_OPEN_EMOTE_WHEEL, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_INTERACTION_MENU, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_HUD_SPECIAL, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_PLAYER_MENU, true);
}

void NativeMenu::PreLoad()
{
	TXD::REQUEST_STREAMED_TEXTURE_DICT("mp_lobby_textures", 0);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("generic_textures", 0);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("menu_textures", 0);
}

void NativeMenu::OpenAnimation()
{
	float Height = 0.0f;
	while (Height < 0.95f)
	{
		DrawSprite("mp_lobby_textures", "menu_ink_1a", 0.165f, 0.49f, 0.28f, Height, 0.0f, 0, 0, 0, 255);
		Height += 0.1f;
		WAIT(0);
	}
}

void NativeMenu::CloseAnimation()
{
	float Height = 0.95f;
	while (Height > 0.0f)
	{
		DrawSprite("mp_lobby_textures", "menu_ink_1a", 0.165f, 0.49f, 0.28f, Height, 0.0f, 0, 0, 0, 255);
		Height -= 0.2f;
		WAIT(0);
	}
}

void NativeMenu::DrawBase()
{
	DisableControls();
	DrawSprite("mp_lobby_textures", "menu_ink_1a", 0.165f, 0.49f, 0.28f, 0.95f, 0.0f, 0, 0, 0, 255);
	DrawSprite("generic_textures", "menu_header_1a", 0.165f, 0.1f, 0.22f, 0.1f, 0.0f, 255, 255, 255, 255);
	DrawSprite("menu_textures", "scroller_line_up", 0.165f, 0.2f, 0.22f, 0.02f, 0.0f, 255, 255, 255, 255);
}

std::optional<int> NativeMenu::DrawCallback()
{
	if (CurrentOption <= MaxDisplayOption && TotalOptions <= MaxDisplayOption) 
	{
		return TotalOptions;
	}
	else if (TotalOptions > CurrentOption - MaxDisplayOption && TotalOptions <= CurrentOption) 
	{
		return (TotalOptions - (CurrentOption - MaxDisplayOption));
	}

	return std::nullopt;
}

void NativeMenu::DrawScroller()
{
	int DrawIndex;
	if (CurrentOption > MaxDisplayOption) DrawIndex = MaxDisplayOption;
	else DrawIndex = CurrentOption;

	float DrawPos = 0.192f + DrawIndex * 0.05f + (DrawIndex * 0.005f);
	DrawSprite("menu_textures", "crafting_highlight_t", 0.165f, DrawPos - (0.05f / 2) + 0.005f, 0.22f, 0.02f, 0.0f, 191, 0, 0, 255);
	DrawSprite("menu_textures", "crafting_highlight_b", 0.165f, DrawPos + (0.05f / 2) - 0.005f, 0.22f, 0.02f, 0.0f, 191, 0, 0, 255);
	DrawSprite("menu_textures", "crafting_highlight_r", 0.165f + (0.22f / 2), DrawPos, 0.01f, 0.05f, 0.0f, 191, 0, 0, 255);
	DrawSprite("menu_textures", "crafting_highlight_l", 0.165f - (0.22f / 2), DrawPos, 0.01f, 0.05f, 0.0f, 191, 0, 0, 255);
}

void NativeMenu::DrawItem(const std::string& option, float DrawPos)
{
	DisplayText(option, "$body", 0.06f, DrawPos - 0.013f, 0.35f, LEFT, 230, 230, 230);
}

void NativeMenu::DrawFooter()
{
	int DrawIndex;
	if (TotalOptions > MaxDisplayOption) DrawIndex = MaxDisplayOption;
	else DrawIndex = TotalOptions;

	float DrawPos = 0.192f + DrawIndex * 0.05f + (DrawIndex * 0.005f);
	DrawSprite("menu_textures", "scroller_line_down", 0.165f, DrawPos + 0.045f, 0.22f, 0.02f, 0.0f, 255, 255, 255, 255);
	DisplayText(std::format("{0} of {1}", CurrentOption, TotalOptions), "$body", -0.227f, DrawPos + 0.04f, 0.32f, RIGHT, 200, 200, 200);
	DrawSprite("menu_textures", "scroller_line_down", 0.165f, 0.89f, 0.22f, 0.02f, 0.0f, 255, 255, 255, 255);
	DisplayText(OptionDescription, "$body", -0.665f, 0.9f, 0.3f, CENTER, 230, 230, 230);
	OptionDescription.clear();
}

void NativeMenu::DrawTitle(const std::string& title)
{
	DisplayText(title, "$title1", -0.665f, 0.07f, 0.85f, CENTER, 230, 230, 230);
}

void NativeMenu::DrawSubtitle(const std::string& title)
{
	DisplayText(title, "$title1", -0.665f, 0.165f, 0.4f, CENTER, 230, 230, 230);
}

void NativeMenu::PlaySoundFrontend(const char* audioBank, const char* audioName)
{
	AUDIO::PLAY_SOUND_FRONTEND(audioName, audioBank, 0, 0);
}

void NativeMenu::PostObjective(const char* info)
{
	const char* VarStr = MISC::VAR_STRING(10, "LITERAL_STRING", info);
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(VarStr);
	UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void NativeMenu::AddItem(const std::string& option, const std::string& description)
{
	TotalOptions++;
	OptionDrawPos = DrawCallback();
	if (OptionDrawPos.has_value())
	{
		float DrawPos = 0.192f + OptionDrawPos.value() * 0.05f + (OptionDrawPos.value() * 0.005f);
		DrawSprite("generic_textures", "selection_box_bg_1a", 0.165f, DrawPos, 0.22f, 0.05f, 0.0f, 30, 30, 30, 255);
		DrawItem(option, DrawPos);
	}
	else return;

	if (CurrentOption == TotalOptions)
	{
		OptionDescription = description;
	}
}

void NativeMenu::AddItem(const std::string& option, std::function<void()> func, const std::string& description)
{
	AddItem(option, description);
	if (CurrentOption == TotalOptions)
	{
		if (EnterKeyPressed)
		{
			func();
		}
	}
}

void NativeMenu::AddInput(const std::string& option, std::function<void(const char* result)> callback, const std::string& description)
{
	AddItem(option, description);
	if (CurrentOption == TotalOptions)
	{
		if (EnterKeyPressed)
		{
			int FontSet = 256;
			if (LOCALIZATION::_DOES_CURRENT_LANGUAGE_SUPPORT_CONDENSED_STYLE()) { FontSet |= 64; }
			MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(FontSet);
			MISC::DISPLAY_ONSCREEN_KEYBOARD(KTEXTTYPE_EMAIL, "", "", "", "", "", "", 90);
			while (MISC::UPDATE_ONSCREEN_KEYBOARD() == OSK_PENDING) WAIT(0);
			if (!MISC::GET_ONSCREEN_KEYBOARD_RESULT() || MISC::UPDATE_ONSCREEN_KEYBOARD() == OSK_CANCELLED) { return; }
			std::invoke(callback, MISC::GET_ONSCREEN_KEYBOARD_RESULT());
		}
	}
}

void NativeMenu::AddSubmenu(const std::string& option, Submenu sub, const std::string& description)
{
	AddItem(option, description);
	if (CurrentOption == TotalOptions)
	{
		if (EnterKeyPressed)
		{
			SwitchSubmenu(sub);
		}
	}
}

void NativeMenu::AddCheckboxItem(const std::string& option, bool& var, std::function<void()> func, const std::string& description)
{
	AddItem(option, description);
	if (OptionDrawPos.has_value())
	{
		float DrawPos = 0.192f + OptionDrawPos.value() * 0.05f + (OptionDrawPos.value() * 0.005f);
		DrawSprite("generic_textures", "tick_box", 0.26f, DrawPos, 0.014f, 0.024f, 0.0f, 255, 255, 255, 255);
		if (var) 
		{
			DrawSprite("generic_textures", "tick", 0.26f, DrawPos, 0.014f, 0.024f, 0.0f, 191, 0, 0, 255);
		}
	}
	else return;

	if (CurrentOption == TotalOptions)
	{
		if (EnterKeyPressed)
		{
			var ^= 1;
			func();
		}
	}
}

void NativeMenu::AddBuyableItem(const std::string& option, int cost, std::function<void()> func, const std::string& description)
{
	AddItem(option, description);
	if (OptionDrawPos.has_value())
	{
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(HUD_CTX_IN_MINIGAME_POKER_INTRO);
		float DrawPos = 0.192f + OptionDrawPos.value() * 0.05f + (OptionDrawPos.value() * 0.005f);
		DisplayText(std::format("${:.2f}", cost / 100.0f), "$title1", -0.23f, DrawPos - 0.016f, 0.5f, RIGHT, 230, 230, 230);
	}
	else return;

	if (CurrentOption == TotalOptions)
	{
		if (EnterKeyPressed)
		{
			if (MONEY::_MONEY_GET_CASH_BALANCE() >= cost)
			{
				if (MONEY::_MONEY_DECREMENT_CASH_BALANCE(cost)) { PlaySoundFrontend("HUD_SHOP_SOUNDSET", "PURCHASE"); func(); }
			}
			else
			{
				PlaySoundFrontend("HUD_SHOP_SOUNDSET", "UNAFFORDABLE");
			}
		}
	}
}

void NativeMenu::AddState(const std::string& option, bool condition, std::function<void()> func, const std::string& description)
{
	AddItem(option, description);
	if (OptionDrawPos.has_value())
	{
		float DrawPos = 0.192f + OptionDrawPos.value() * 0.05f + (OptionDrawPos.value() * 0.005f);
		if (condition) 
		{
			DrawSprite("menu_textures", "menu_icon_tick", 0.26f, DrawPos, 0.014f, 0.024f, 0.0f, 255, 255, 255, 255);
		}
	}
	else return;

	if (CurrentOption == TotalOptions)
	{
		if (EnterKeyPressed) { func(); }
	}
}

void NativeMenu::AddNumber(const std::string& option, int& var, int min, int max, int step, std::function<void()> func, const std::string& description)
{
	AddItem(option, description);

	bool IsSelected = CurrentOption == TotalOptions ? true : false;
	if (OptionDrawPos.has_value())
	{
		float DrawPos = 0.192f + OptionDrawPos.value() * 0.05f + (OptionDrawPos.value() * 0.005f);
		if (IsSelected) 
		{
			DisplayText(std::format("<IMG SRC='img://menu_textures/selection_arrow_left' height='16' width='16'/> {0} <IMG SRC='img://menu_textures/selection_arrow_right' height='16' width='16'/>", var), "$body", -0.23f, DrawPos - 0.013f, 0.35f, RIGHT, 230, 230, 230);
		}
		else 
		{
			DisplayText(std::format("{0}", var), "$body", -0.23f, DrawPos - 0.013f, 0.35f, RIGHT, 230, 230, 230);
		}
	}
	else return;

	if (IsSelected)
	{
		if (LeftKeyPressed)
		{
			if (var <= min) var = 0;
			else
			{
				PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_LEFT");
				var -= step;
			}
		}
		if (RightKeyPressed)
		{
			if (var >= max) var = max;
			else
			{
				PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_RIGHT");
				var += step;
			}
		}
		if (EnterKeyPressed) 
		{ 
			func(); 
		}
	}
}

void NativeMenu::AddNumber(const std::string& option, float& var, float min, float max, float step, std::function<void()> func, const std::string& description)
{
	AddItem(option, description);

	bool IsSelected = CurrentOption == TotalOptions ? true : false;
	if (OptionDrawPos.has_value())
	{
		float DrawPos = 0.192f + OptionDrawPos.value() * 0.05f + (OptionDrawPos.value() * 0.005f);
		if (IsSelected) 
		{
			DisplayText(std::format("<IMG SRC='img://menu_textures/selection_arrow_left' height='16' width='16'/> {:.2f} <IMG SRC='img://menu_textures/selection_arrow_right' height='16' width='16'/>", var), "$body", -0.23f, DrawPos - 0.013f, 0.35f, RIGHT, 230, 230, 230);
		}
		else 
		{
			DisplayText(std::format("{:.2f}", var), "$body", -0.23f, DrawPos - 0.013f, 0.35f, RIGHT, 230, 230, 230);
		}
	}
	else return;

	if (IsSelected)
	{
		if (LeftKeyPressed)
		{
			if (var <= min) var = 0;
			else
			{
				PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_LEFT");
				var -= step;
			}
		}
		if (RightKeyPressed)
		{
			if (var >= max) var = max;
			else
			{
				PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_RIGHT");
				var += step;
			}
		}
		if (EnterKeyPressed) 
		{ 
			func(); 
		}
	}
}

void NativeMenu::AddList(const std::string& option, std::vector<const char*> list, int& index, std::function<void()> func, const std::string& description)
{
	AddItem(option, description);

	bool IsSelected = CurrentOption == TotalOptions ? true : false;
	if (OptionDrawPos.has_value())
	{
		float DrawPos = 0.192f + OptionDrawPos.value() * 0.05f + (OptionDrawPos.value() * 0.005f);
		if (IsSelected) 
		{
			DisplayText(std::format("<IMG SRC='img://menu_textures/selection_arrow_left' height='16' width='16'/> {0} <IMG SRC='img://menu_textures/selection_arrow_right' height='16' width='16'/>", list[index]), "$body", -0.23f, DrawPos - 0.013f, 0.35f, RIGHT, 230, 230, 230);
		}
		else 
		{
			DisplayText(std::format("{0}", list[index]), "$body", -0.23f, DrawPos - 0.013f, 0.35f, RIGHT, 230, 230, 230);
		}
	}
	else return;

	if (IsSelected)
	{
		if (LeftKeyPressed)
		{
			if (index <= 0) index = 0;
			else
			{
				PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_LEFT");
				index--;
			}
		}
		if (RightKeyPressed)
		{
			if (index >= static_cast<int>(list.size() - 1)) index = static_cast<int>(list.size() - 1);
			else
			{
				PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_RIGHT");
				index++;
			}
		}
		if (EnterKeyPressed) 
		{ 
			func(); 
		}
	}
}

void NativeMenu::SwitchSubmenu(Submenu sub)
{
	SubmenuArray[SubmenuIndex] = CurrentSub;
	OptionArray[SubmenuIndex] = CurrentOption;
	SubmenuIndex++;
	CurrentSub = sub;
	CurrentOption = 1;
}

void NativeMenu::SubmenuBack()
{
	if (CurrentSub == MainSub)
	{
		CloseMenu();
		HasBeenOpened = false;
		MenuActivated = false;
	}
	SubmenuIndex--;
	CurrentSub = SubmenuArray[SubmenuIndex];
	CurrentOption = OptionArray[SubmenuIndex];
	PlaySoundFrontend("HUD_PLAYER_MENU", "BACK");
}

void NativeMenu::OpenMenu()
{
	MAP::DISPLAY_RADAR(false);
	if (!HasBeenOpened) 
	{
		SwitchSubmenu(MainSub);
		HasBeenOpened = true;
	}
	OpenAnimation();
	PlaySoundFrontend("HUD_PLAYER_MENU", "MENU_ENTER");
}

void NativeMenu::CloseMenu()
{
	CloseAnimation();
	PlaySoundFrontend("HUD_PLAYER_MENU", "MENU_CLOSE");
	MAP::DISPLAY_RADAR(true);
}

void NativeMenu::ToggleMenu()
{
	MenuActivated ^= 1;

	if (MenuActivated) 
	{ 
		OpenMenu(); 
	}
	else 
	{ 
		CloseMenu(); 
	}
}

void NativeMenu::ControlMgr()
{
	EnterKeyPressed = LeftKeyPressed = RightKeyPressed = false;

	if (MISC::GET_GAME_TIMER() - ControlTick > 200)
	{
		if (OpenConditions())
		{
			ToggleMenu();
			ControlTick = MISC::GET_GAME_TIMER();
		}

		if (MenuActivated)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
			{
				EnterKeyPressed = true;
				PlaySoundFrontend("HUD_PLAYER_MENU", "SELECT");
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
			{
				SubmenuBack();
			}
		}
	}

	if (MISC::GET_GAME_TIMER() - ScrollTick > 160)
	{
		if (MenuActivated)
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN))
			{
				if (CurrentOption < TotalOptions) 
				{
					CurrentOption++;
				}
				else 
				{
					CurrentOption = 1;
				}

				PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_DOWN");

				ScrollTick = MISC::GET_GAME_TIMER();
			}
			else if (PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
			{
				if (CurrentOption > 1) 
				{
					CurrentOption--;
				}
				else 
				{
					CurrentOption = TotalOptions;
				}

				PlaySoundFrontend("HUD_PLAYER_MENU", "NAV_UP");

				ScrollTick = MISC::GET_GAME_TIMER();
			}
			else if (PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
			{
				LeftKeyPressed = true;

				ScrollTick = MISC::GET_GAME_TIMER();
			}
			else if (PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
			{
				RightKeyPressed = true;

				ScrollTick = MISC::GET_GAME_TIMER();
			}
		}
	}
	TotalOptions = 0;
}
