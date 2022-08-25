#include "DroppMegaBombComm.h"
#include "FileLoggerSingleton.h"
#include "BombDecorator.h"

void DroppMegaBombComm::Execute() {

	FileLoggerSingleton::getInstance().WriteToLog(string(__FUNCTION__) + " was invoked");

	double x = plane->GetX() + 4;
	double y = plane->GetY() + 2;

	Bomb* ppBomb = new Bomb;
	BombDecorator* pBomb = new BombDecorator(ppBomb);
	pBomb->SetDirection(0.3, 1);
	pBomb->SetSpeed(2);
	pBomb->SetPos(x, y);
	pBomb->SetWidth(BIG_CRATER_SIZE);
	

	vecDynamicObj.push_back(pBomb);
	bombsNumber--;


}
