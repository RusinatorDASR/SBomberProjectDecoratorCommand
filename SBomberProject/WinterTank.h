#pragma once
#include "Tank.h"
#include "ScreenSingleton.h"

class WinterTank :
	public Tank
{
public:
	WinterTank() :Tank(ConsoleColor::CC_LightGray) {};
};

