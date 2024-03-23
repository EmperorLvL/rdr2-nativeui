#include "script.h"

NativeMenu nativemenu;

bool demo{};
int listIndex{};
std::vector<const char*> demoList = { "One", "Two", "Three" };
int demoint{};
float demofloat{};

namespace submenus
{
	void MainMenu()
	{
		nativemenu.DrawTitle("Title");
		nativemenu.DrawSubtitle("Subtitle");
		nativemenu.AddSubmenu("Demo", DemoMenu);
		nativemenu.AddInput("Give Money", [](const char* input) { MONEY::_MONEY_INCREMENT_CASH_BALANCE(std::atoi(input), ADD_REASON_DEFAULT); });
	}

	void DemoMenu()
	{
		nativemenu.DrawTitle("Demo");
		nativemenu.DrawSubtitle("Press on an option");
		nativemenu.AddItem("Test", "This option does nothing");
		nativemenu.AddCheckboxItem("Demo Bool", demo);
		nativemenu.AddBuyableItem("Test Buy", 1000, [] { nativemenu.PostObjective("You bought something!"); });
		nativemenu.AddState("Test State", PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()));
		nativemenu.AddList("Test List", demoList, listIndex);
		nativemenu.AddNumber("Test Int", demoint, 0, 20, 1);
		nativemenu.AddNumber("Test float", demofloat, 0.0f, 20.0f, 0.5f);
	}
}

void update()
{
	nativemenu.ControlMgr();
	if (nativemenu.MenuActivated)
	{
		nativemenu.DrawBase();
		if (nativemenu.CurrentSub) { nativemenu.CurrentSub(); }
		nativemenu.DrawScroller();
		nativemenu.DrawFooter();
	}
}

void ScriptMain()
{	
	nativemenu.MainSub = submenus::MainMenu;
	nativemenu.OpenConditions = [] { return IsKeyJustUp(VirtualKeys::F1); };
	nativemenu.PreLoad();
	while (true)
	{
		update();
		WAIT(0);
	}
}
