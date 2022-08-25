#pragma once
#include "AbstractCommand.h"
#include "SBomber.h"
#include <vector>
using namespace std;

class DeleteStaticObjComm :
	public AbstractCommand
{
public:
	//DeleteStaticObjComm() {}
	DeleteStaticObjComm(GameObject* obj_,vector<GameObject*>& vecStaticObj_) : obj(obj_), vecStaticObj(vecStaticObj_) {}
	~DeleteStaticObjComm() {}
	void Execute();
	void SetParams(GameObject* obj_, vector<GameObject*>& vecStaticObj_) {
		obj = obj_;
		vecStaticObj = vecStaticObj_;
	}
	
private:
	GameObject* obj;
	vector<GameObject*>& vecStaticObj;
};


