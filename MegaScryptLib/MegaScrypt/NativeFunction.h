#pragma once
#include "IFunction.h"
#include "functional"

namespace MegaScrypt
{

	class InvocationContext;

class NativeFunction : public IFunction
{
	
	public:
		typedef function<Any(vector<Any>)> Callback;;

		NativeFunction(string i_name, vector<string> i_paramNames, Callback i_callback);

		string Name() override;
		inline vector<string> ParameterNames() { return paramNames; }

		Any Invoke(vector<Any> i_params, InvocationContext* invCtx = nullptr) override;

	protected:

		string name;
		vector<string> paramNames;
		Callback callback;

	};
}


