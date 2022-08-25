#pragma once
#include "AbstractCommand.h"
#include "SBomber.h"
#include <vector>
using namespace std;

class DeleteDynamicObjComm :
	public AbstractCommand
{
public:
	//DeleteDynamicObjComm() {}
	DeleteDynamicObjComm(DynamicObject* obj_, vector<DynamicObject*>& vecDynamicObj_) : obj(obj_), vecDynamicObj(vecDynamicObj_)  {}
	~DeleteDynamicObjComm() {}

	void Execute();
	void SetParams(DynamicObject* obj_, vector<DynamicObject*>& vecDynamicObj_) {
		obj = obj_;
		vecDynamicObj = vecDynamicObj_;
	}
	
private:
	DynamicObject* obj;
	vector<DynamicObject*>& vecDynamicObj;
};

