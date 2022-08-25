#pragma once

#include "Tank.h"
#include "Ground.h"
#include "House.h"

class AbstractLevelFactory
{
public:
	virtual Tank* CreateTank() = 0;
	virtual Ground* CreateGround() = 0;
	virtual House* CreateHouse() = 0;
};

