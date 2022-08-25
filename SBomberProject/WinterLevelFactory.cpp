#include "WinterLevelFactory.h"

Tank* WinterLevelFactory::CreateTank() {
	return new WinterTank();
}

House* WinterLevelFactory::CreateHouse() {
	return new WinterHouse();
}

Ground* WinterLevelFactory::CreateGround() {
	return new WinterGround();
}
