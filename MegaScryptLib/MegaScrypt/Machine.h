#pragma once

#include <string>
using namespace std;

#include "antlr4-runtime.h"
using namespace antlr4;
using namespace antlrcpp;

#include "Processor.h"
#include "Object.h"
#include "Array.h"

namespace MegaScrypt
{
	class IFunction;
	class Machine
	{
	public:
		Machine();
		Any Execute(string script);
		Any Evaluate(string expression);
		void Declare(IFunction* i_func);
		void Declare(string varName, Array* arr);

		inline Object* getTarget()
		{ 
			return target; 
		}

	protected:
		Processor* processor;
		Object* target;

		
	};
}

