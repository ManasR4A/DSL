#pragma once
#include "string"
#include "vector"
using namespace std;

#include "antlr4-runtime.h"
using namespace antlrcpp;
using namespace antlr4;

namespace MegaScrypt
{
	class InvocationContext;
	class IFunction
	{
	public:
		//string name;
		//vector<string> ParamNames;
		virtual string Name() { return string(); }
		virtual Any Invoke(vector<Any> i_params, InvocationContext* invCtx = nullptr) { return Any(); }
	};
}

