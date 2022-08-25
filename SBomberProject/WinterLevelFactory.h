#pragma once
#include "AbstractLevelFactory.h"
#include "WinterGround.h"
#include "WinterHouse.h"
#include "WinterTank.h"

class WinterLevelFactory :
	public AbstractLevelFactory
{
public:
	Tank* CreateTank();
	House* CreateHouse();
	Ground* CreateGround();
};

