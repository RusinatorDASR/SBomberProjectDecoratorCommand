#pragma once
#include "AbstractLevelFactory.h"
class SummerLevelFactory :
	public AbstractLevelFactory
{
public:
	Tank* CreateTank();
	House* CreateHouse();
	Ground* CreateGround();
};

