#include "Machine.h"
#include "Generated/MegaScryptLexer.h"
#include "IFunction.h"

using namespace MegaScrypt;

MegaScrypt::Machine::Machine()
{
	processor = new Processor();
	target = new Object();
	processor->setTarget(target);
}

Any Machine::Execute(string script)
{
	Any result;

	ANTLRInputStream*	input	= new ANTLRInputStream(script);
	MegaScryptLexer*	lexer	= new MegaScryptLexer(input);
	CommonTokenStream*	tokens	= new CommonTokenStream(lexer);
	MegaScryptParser*	parser	= new MegaScryptParser(tokens);
	//parser->addErrorListener()

	MegaScryptParser::ProgramContext* root = parser->program();
	result = root->accept(processor);
	
	return result;
}

Any Machine::Evaluate(string expression)
{
	Any result;
	ANTLRInputStream* input = new ANTLRInputStream(expression);
	MegaScryptLexer* lexer = new MegaScryptLexer(input);
	CommonTokenStream* tokens = new CommonTokenStream(lexer);
	MegaScryptParser* parser = new MegaScryptParser(tokens);

	MegaScryptParser::ExpressionContext* root = parser->expression();
	result = root->accept(processor);

	return result;
}

void MegaScrypt::Machine::Declare(IFunction* i_func)
{
	target->Declare(i_func->Name(), i_func);
}

void MegaScrypt::Machine::Declare(string varName, Array* arr)
{
	target->Declare(varName, arr);
}
