#pragma once
#include "IFunction.h"
#include "Processor.h"

#include "functional"

namespace MegaScrypt
{
	class InvocationContext;

	class ScriptFunction : public IFunction
	{
	public:
		typedef function<Any(ScriptFunction*, vector<Any>, InvocationContext*)> Invocation;

		ScriptFunction(Processor* i_processor, Invocation i_invocation, MegaScryptParser::FunctDeclarationContext* ctx);

		string Name() override;

		inline vector<string> ParameterNames() { return paramNames; }
		inline MegaScryptParser::FunctDeclarationContext* DeclarationContext() { return DeclCtx; }

		Any Invoke(vector<Any> i_params, InvocationContext* invCtx = nullptr) override;

	protected:
		string name;
		vector<string> paramNames;
		MegaScryptParser::FunctDeclarationContext* DeclCtx;
		Invocation invocation;

		string FindFunctName(Processor* i_processor);
	};
}

