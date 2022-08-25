#pragma once
#include "House.h"
#include "ScreenSingleton.h"

class WinterHouse :
	public House
{
public:
	WinterHouse() :House(ConsoleColor::CC_White) {};
};

