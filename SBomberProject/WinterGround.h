#pragma once
#include "Ground.h"
#include "ScreenSingleton.h"

class WinterGround :
	public Ground
{
public:
	WinterGround() :Ground(ConsoleColor::CC_White) {};
};

