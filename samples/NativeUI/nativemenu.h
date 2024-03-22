#pragma once

typedef void (*Submenu)();

class NativeMenu
{
public:
	Submenu CurrentSub = nullptr;
	Submenu MainSub = nullptr;
	unsigned int SubmenuIndex = 0;
	std::unordered_map<int, int> OptionArray;
	std::array<Submenu, 255> SubmenuArray{};
	std::function<bool()> OpenConditions = [] { return false; };

	bool MenuActivated = false;
	bool HasBeenOpened = false;
	bool EnterKeyPressed = false;
	bool RightKeyPressed = false;
	bool LeftKeyPressed = false;

	int CurrentOption = 1;
	int MaxDisplayOption = 7;
	int TotalOptions = 0;

	int ControlTick{};
	int ScrollTick{};

	std::optional<int> OptionDrawPos;
	std::string OptionDescription = "";

	void DisplayText(const std::string& text, const std::string& font, float x, float y, float scale, int align, int r, int g, int b);
	void DrawSprite(const char* txtDict, const char* txtName, float x, float y, float width, float height, float heading, int r, int g, int b, int a);
	void DisableControls();

	void OpenAnimation();
	void CloseAnimation();

	std::optional<int> DrawCallback();

	void PreLoad();
	void DrawBase();
	void DrawItem(const std::string& option, float DrawPos);
	void DrawScroller();
	void DrawFooter();
	void DrawTitle(const std::string& title);
	void DrawSubtitle(const std::string& title);
	void PlaySoundFrontend(const char* audioBank, const char* audioName);
	void PostObjective(const char* info);

	void AddItem(const std::string& option, const std::string& description);
	void AddItem(const std::string& option, std::function<void()> func, const std::string& description = "");
	void AddInput(const std::string& option, std::function<void(const char* result)> callback, const std::string& description = "");
	void AddSubmenu(const std::string& option, Submenu sub, const std::string& description = "");
	void AddCheckboxItem(const std::string& option, bool& var, std::function<void()> func = [] {}, const std::string& description = "");
	void AddBuyableItem(const std::string& option, int cost, std::function<void()> func, const std::string& description = "");
	void AddState(const std::string& option, bool condition, std::function<void()> func = [] {}, const std::string& description = "");
	void AddList(const std::string& option, std::vector<const char*> list, int& index, std::function<void()> func = [] {}, const std::string& description = "");
	void AddNumber(const std::string& option, int& var, int min, int max, int step = 1, std::function<void()> func = [] {}, const std::string& description = "");
	void AddNumber(const std::string& option, float& var, float min, float max, float step = 1.0f, std::function<void()> func = [] {}, const std::string& description = "");
	void SwitchSubmenu(Submenu sub);
	void SubmenuBack();

	void OpenMenu();
	void CloseMenu();
	void ToggleMenu();

	void ControlMgr();
};