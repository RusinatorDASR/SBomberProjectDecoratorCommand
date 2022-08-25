#include "DeleteDynamicObjComm.h"
#include "SBomber.h"
#include <vector>
using namespace std;

void DeleteDynamicObjComm::Execute()
{
	auto it = vecDynamicObj.begin();
	for (; it != vecDynamicObj.end(); it++)
	{
		if (*it == obj)
		{
			vecDynamicObj.erase(it);
			break;
		}
	}
}
