/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#pragma once

#include <windows.h>

typedef std::uint32_t Void;
typedef std::uint64_t Any;
typedef std::uint32_t uint;
typedef std::uint32_t Hash;
typedef int Entity;
typedef int Player;
typedef int FireId;
typedef int Ped;
typedef int Vehicle;
typedef int Cam;
typedef int CarGenerator;
typedef int Group;
typedef int Train;
typedef int Pickup;
typedef int Object;
typedef int Weapon;
typedef int Interior;
typedef int Blip;
typedef int Texture;
typedef int TextureDict;
typedef int CoverPoint;
typedef int Camera;
typedef int TaskSequence;
typedef int ColourIndex;
typedef int Instructional;
typedef int Sphere;
typedef int ScrHandle;
typedef int Scaleform;
typedef int AnimScene;
typedef int Prompt;
typedef int PopZone;
typedef int Volume;
typedef int PropSet;
typedef int ItemSet;
typedef int PersChar;

struct Vector3
{
	alignas(8) float x;
	alignas(8) float y;
	alignas(8) float z;
};