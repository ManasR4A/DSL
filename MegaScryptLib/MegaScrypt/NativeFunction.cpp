#include "NativeFunction.h"
#include "InvocationContext.h"
namespace MegaScrypt
{
	NativeFunction::NativeFunction(string i_name, vector<string> i_paramNames, Callback i_callback):
		name(i_name), 
		paramNames(i_paramNames),
		callback(i_callback)
	{
	}

	string NativeFunction::Name()
	{
		return name;
	}

	Any NativeFunction::Invoke(vector<Any> i_params = vector<Any>(), InvocationContext* invCtx)
	{
		Any ret = callback(i_params);
		return ret;
	}




}

