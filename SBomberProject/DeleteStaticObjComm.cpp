#include "DeleteStaticObjComm.h"
#include "SBomber.h"
#include <vector>
using namespace std;

void DeleteStaticObjComm::Execute()
{
	auto it = vecStaticObj.begin();
	for (; it != vecStaticObj.end(); it++)
	{
		if (*it == obj)
		{
			vecStaticObj.erase(it);
			break;
		}
	}
}

