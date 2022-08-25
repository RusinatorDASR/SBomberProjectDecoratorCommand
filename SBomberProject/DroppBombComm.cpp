#include "DroppBombComm.h"
#include "FileLoggerSingleton.h"

void DroppBombComm::Execute() {
	
		FileLoggerSingleton::getInstance().WriteToLog(string(__FUNCTION__) + " was invoked");

		double x = plane->GetX() + 4;
		double y = plane->GetY() + 2;

		Bomb* pBomb = new Bomb;
		pBomb->SetDirection(0.3, 1);
		pBomb->SetSpeed(2);
		pBomb->SetPos(x, y);
		pBomb->SetWidth(SMALL_CRATER_SIZE);

		vecDynamicObj.push_back(pBomb);
		bombsNumber--;
		
	
}
