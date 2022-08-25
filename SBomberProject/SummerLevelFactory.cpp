#include "SummerLevelFactory.h"

Tank* SummerLevelFactory::CreateTank() {
	return new Tank();
}

House* SummerLevelFactory::CreateHouse() {
	return new House();
}

Ground* SummerLevelFactory::CreateGround() {
	return new Ground();
}