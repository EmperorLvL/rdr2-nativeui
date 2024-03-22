/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#pragma once

#include <string>
#include <array>
#include <format>
#include <functional>
#include <optional>

#include "..\..\inc\natives.h"
#include "..\..\inc\types.h"
#include "..\..\inc\enums.h"
#include "..\..\inc\main.h"

#include "keyboard.h"
#include "nativemenu.h"

namespace submenus
{
	void MainMenu();
	void DemoMenu();
}

void ScriptMain();