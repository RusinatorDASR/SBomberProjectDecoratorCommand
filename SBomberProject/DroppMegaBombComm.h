#pragma once
#include "AbstractCommand.h"
#include "SBomber.h"
using namespace std;

class DroppMegaBombComm : public AbstractCommand
{
public:
	DroppMegaBombComm(const Plane* plane_, vector<DynamicObject*>& vecDynamicObj_, uint16_t& bombsNumber_) : plane(plane_), vecDynamicObj(vecDynamicObj_), bombsNumber(bombsNumber_) {}
	~DroppMegaBombComm() {}
	void Execute();
	void SetParams(const Plane* plane_, vector<DynamicObject*>& vecDynamicObj_, uint16_t& bombsNumber_) {
		plane = plane_;
		vecDynamicObj = vecDynamicObj_;
		bombsNumber = bombsNumber_;
	}
private:
	const Plane* plane;
	vector<DynamicObject*>& vecDynamicObj;
	uint16_t& bombsNumber;
};

