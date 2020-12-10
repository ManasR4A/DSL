#include "MegaScryptGameObject.h"
#include "MegaScrypt/Processor.h"
using namespace MegaScrypt;

MegaScryptGameObject::MegaScryptGameObject(GameObject* target, Object* prototype)
{
	this->obj = new Object(prototype);
	this->target = target;
	Bind();
}

Object* MegaScryptGameObject::getObject()
{
	return obj;
}

GameObject* MegaScryptGameObject::getTarget()
{
	return target;
}

void MegaScryptGameObject::Bind()
{
	obj->declare("name",
		[this]() -> Any { return new string(this->target->name); },
		[this](Any value) -> Any { this->target->name = Processor::toString(value); return Any(); }
	);

	obj->declare("x",
		[this]() -> Any { return this->target->x; },
		[this](Any value) -> Any { this->target->x = Processor::toFloat(value); return Any(); }
	);

	obj->declare("y",
		[this]() -> Any { return this->target->y; },
		[this](Any value) -> Any { this->target->y = Processor::toFloat(value); return Any(); }
	);

	obj->declare("color",
		[this]() -> Any { return this->target->color.toString(); },
		[this](Any value) -> Any { this->target->color = Color(Processor::toString(value)); return Any(); }
	);
}

bool MegaScryptGameObject::IsStatic()
{
	if (obj->Has("static"))
		return Processor::ToBool(obj->Get("static"));
	return false;
}