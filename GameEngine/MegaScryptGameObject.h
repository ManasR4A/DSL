#pragma once

#include "MegaScrypt\Object.h"
#include "GameObject.h"
using namespace MegaScrypt;

class MegaScryptGameObject
{
public:
	MegaScryptGameObject(GameObject* target, Object* prototype = NULL);

	Object* getObject();
	GameObject* getTarget();

	bool IsStatic();

protected:
	Object* obj;
	GameObject* target;

	void Bind();
};

