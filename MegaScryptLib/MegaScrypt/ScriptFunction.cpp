#include "ScriptFunction.h"
#include "InvocationContext.h"

using namespace antlrcpp;
using namespace antlr4;
using namespace antlr4::tree;

namespace MegaScrypt
{

	ScriptFunction::ScriptFunction(Processor* i_processor, Invocation i_invocation, MegaScryptParser::FunctDeclarationContext* ctx)
	{
		DeclCtx = ctx;
		name = FindFunctName(i_processor);
		invocation = i_invocation;
		if (DeclCtx->varList())
		{
			paramNames = DeclCtx->varList()->accept(i_processor).as<vector<string>>();
		}
		else
			paramNames = vector<string>();
	}

	string ScriptFunction::Name()
	{
		return name;
	}

	Any ScriptFunction::Invoke(vector<Any> i_params, InvocationContext* invCtx)
	{
		return invocation(this, i_params, invCtx);
	}

	string ScriptFunction::FindFunctName(Processor* i_processor)
	{
		ParseTree* node =  DeclCtx->parent;
		while (node != nullptr)
		{
			MegaScryptParser::DeclarationContext* varCtx = dynamic_cast<MegaScryptParser::DeclarationContext*>(node);
			if (varCtx)
			{
				return varCtx->accept(i_processor).as<string>();
			}
			node = node->parent;
		}

		return string();
	}


}

