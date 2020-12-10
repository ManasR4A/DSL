#pragma once
#include "Object.h"

namespace MegaScrypt
{
	class InvocationContext
	{
		
	public:
		InvocationContext(Object* i_container)
		{
			container = i_container;
		}
		
		inline Object* Container() { return container; }

	protected:
		Object* container = nullptr;

	};
}


