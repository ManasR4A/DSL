#include "Processor.h"
#include "Object.h"
#include "NativeFunction.h"
#include "ScriptFunction.h"
#include "InvocationContext.h"
#include "Array.h"

#pragma region Pirvate Helper methods

Any MegaScrypt::Processor::GetPrototypeTarget(MegaScryptParser::PrototypeGetterContext* ctx, Object* i_target)
{
	Object* curTarget = i_target == nullptr ? target : i_target;
	
	string varName = ctx->Id()[0]->accept(this).as<string>();
	if (curTarget->Has(varName, false))
	{
		if (curTarget->Get(varName, false).is<Object*>())
			curTarget = curTarget->Get(varName, false).as<Object*>();
		else if (curTarget->Get(varName, false).is<Array*>())
			return curTarget->Get(varName, false).as<Array*>();
		else
			throw exception("ID not a prototype.");

		if (ctx->prototypeGetter()) // to recursively go to the final target
		{
			curTarget = GetPrototypeTarget(ctx->prototypeGetter(), curTarget);
			return curTarget;
		}
		if (ctx->arrayGetter())
		{
			string name = ctx->arrayGetter()->Id()->accept(this).as<string>();
			if (curTarget->Has(name))
			{
				Any obj = GetValue(ctx->arrayGetter()->Id(), curTarget);
				if (obj.is<Array*>())
					return obj.as<Array*>();
			}
				
		}
		return curTarget;

	}
	else
		throw exception("Id not defined as a variable.");

	
}

string MegaScrypt::Processor::GetLastId(MegaScryptParser::PrototypeGetterContext* ctx)
{
	string curID = ctx->Id()[0]->getText();
	if (ctx->prototypeGetter())
		curID = GetLastId(ctx->prototypeGetter());
	else if (ctx->arrayGetter())
		return ctx->arrayGetter()->expression()[0]->accept(this).as<string>();
	else
		curID = ctx->Id()[1]->getText();
	return curID;
}

Any MegaScrypt::Processor::GetValue(TerminalNode* node, Object* _container)
{
	string varName = node->getText();
	if (_container->Has(varName, true))
	{
		Any value = _container->Get(varName, true);
		return value;
	}
	else
		throw exception("Variable %s not declared, thus cannot be accessed."), varName;
}


	#pragma region Bonary Ops
Any MegaScrypt::Processor::BinaryOperation(Any x, Any y, int op)
{
	if (x.is<int>() && y.is<int>())
		return intBinaryOperation(x, y, op);

	else if (x.is<float>() && y.is<float>())
		return floatBinaryOperation(x, y, op);

	else if (x.is<int>() && y.is<float>())
		return intFloatBinaryOperation(x, y, op);

	else if (x.is<float>() && y.is<int>())
		return floatIntBinaryOperation(x, y, op);

	else if (x.is<bool>() && y.is<bool>())
		return boolBinaryOperation(x, y, op);

	else if (isString(x) && isString(y))
		return stringStringBinaryOperation(x, y, op);

	else if(y.isNull())
		return genericBinaryOperation(x, y, op);

	throw exception("no overload of binary operation present for provided operand types.");

}

Any MegaScrypt::Processor::genericBinaryOperation(Any x, Any y, int op)
{


	switch (op)
	{
		case MegaScryptParser::DoubleEquals: return x.isNull();
		case MegaScryptParser::NotEquals: return x.isNotNull();
	}


	throw exception("Invalid Operand types.");

}

Any MegaScrypt::Processor::intBinaryOperation(Any x, Any y, int op)
{
	if (x.is<int>() && y.is<int>())
	{
		int X = x.as<int>();
		int Y = y.as<int>();
		switch (op)
		{
			case MegaScryptParser::Plus: return X + Y;
			case MegaScryptParser::Minus: return X - Y;
			case MegaScryptParser::Multiply: return X * Y;
			case MegaScryptParser::Divide: return X / Y;
			case MegaScryptParser::Modulas: return X % Y;
			case MegaScryptParser::DoubleEquals: return X == Y;
			case MegaScryptParser::NotEquals: return X != Y;
			case MegaScryptParser::LessThan: return X < Y;
			case MegaScryptParser::LessThanEquals: return X <= Y;
			case MegaScryptParser::GreaterThan: return X > Y;
			case MegaScryptParser::GreaterThanEquals: return X >= Y;
			case MegaScryptParser::PlusEquals: {X += Y; x = X; return X; }
			case MegaScryptParser::MinusEquals: {X -= Y; x = X; return X; }
			case MegaScryptParser::MultiplyEquals: {X *= Y; x = X; return X; }
			case MegaScryptParser::DivideEquals: {X /= Y; x = X; return X; }
		}
	}

	throw exception("Invalid Operand types for (int).");

}

Any MegaScrypt::Processor::intFloatBinaryOperation(Any x, Any y, int op)
{
	if (x.is<int>() && y.is<float>())
	{
		int X = x.as<int>();
		float Y = y.as<float>();
		switch (op)
		{
		case MegaScryptParser::Plus: return X + Y;
		case MegaScryptParser::Minus: return X - Y;
		case MegaScryptParser::Multiply: return X * Y;
		case MegaScryptParser::Divide: return X / Y;
			// TODO: make a way for float % int operation
		//case MegaScryptParser::Modulas: return X % Y;
		case MegaScryptParser::DoubleEquals: return X == Y;
		case MegaScryptParser::NotEquals: return X != Y;
		case MegaScryptParser::LessThan: return X < Y;
		case MegaScryptParser::LessThanEquals: return X <= Y;
		case MegaScryptParser::GreaterThan: return X > Y;
		case MegaScryptParser::GreaterThanEquals: return X >= Y;
		case MegaScryptParser::PlusEquals: {X += Y; x = X; return X; }
		case MegaScryptParser::MinusEquals: {X -= Y; x = X; return X; }
		case MegaScryptParser::MultiplyEquals: {X *= Y; x = X; return X; }
		case MegaScryptParser::DivideEquals: {X /= Y; x = X; return X; }
		}
	}

	throw exception("Invalid Operand types. for (int float)");
}

Any MegaScrypt::Processor::floatIntBinaryOperation(Any x, Any y, int op)
{
	if (x.is<float>() && y.is<int>())
	{
		float X = x.as<float>();
		int Y = y.as<int>();
		switch (op)
		{
		case MegaScryptParser::Plus: return X + Y;
		case MegaScryptParser::Minus: return X - Y;
		case MegaScryptParser::Multiply: return X * Y;
		case MegaScryptParser::Divide: return X / Y;
		//case MegaScryptParser::Modulas: return X % Y;
		case MegaScryptParser::DoubleEquals: return X == Y;
		case MegaScryptParser::NotEquals: return X != Y;
		case MegaScryptParser::LessThan: return X < Y;
		case MegaScryptParser::LessThanEquals: return X <= Y;
		case MegaScryptParser::GreaterThan: return X > Y;
		case MegaScryptParser::GreaterThanEquals: return X >= Y;
		case MegaScryptParser::PlusEquals: {X += Y; x = X; return X; }
		case MegaScryptParser::MinusEquals: {X -= Y; x = X; return X; }
		case MegaScryptParser::MultiplyEquals: {X *= Y; x = X; return X; }
		case MegaScryptParser::DivideEquals: {X /= Y; x = X; return X; }
		}
	}

	throw exception("Invalid Operand types.for (int float)");
}

Any MegaScrypt::Processor::floatBinaryOperation(Any x, Any y, int op)
{
	if (x.is<float>() && y.is<float>())
	{
		float X = x.as<float>();
		float Y = y.as<float>();
		switch (op)
		{
			case MegaScryptParser::Plus: return X + Y;
			case MegaScryptParser::Minus: return X - Y;
			case MegaScryptParser::Multiply: return X * Y;
			case MegaScryptParser::Divide: return X / Y;

			case MegaScryptParser::DoubleEquals: return X == Y;
			case MegaScryptParser::NotEquals: return X != Y;
			case MegaScryptParser::LessThan: return X < Y;
			case MegaScryptParser::LessThanEquals: return X <= Y;
			case MegaScryptParser::GreaterThan: return X > Y;
			case MegaScryptParser::GreaterThanEquals: return X >= Y;
			case MegaScryptParser::PlusEquals: {X += Y; x = X; return X; }
			case MegaScryptParser::MinusEquals: {X -= Y; x = X; return X; }
			case MegaScryptParser::MultiplyEquals: {X *= Y; x = X; return X; }
			case MegaScryptParser::DivideEquals: {X /= Y; x = X; return X; }
		}
	}

	throw exception("Invalid Operand types.for (float)");

}

Any MegaScrypt::Processor::boolBinaryOperation(Any x, Any y, int op)
{

	bool X = ToBool(x);
	bool Y = ToBool(y);
	switch (op)
	{
		case MegaScryptParser::DoubleAmp: return (X && Y);
		case MegaScryptParser::DoubleLambda: return (X || Y);
		case MegaScryptParser::DoubleEquals: return X == Y;
		case MegaScryptParser::NotEquals: return X != Y;
	}

}

Any MegaScrypt::Processor::stringStringBinaryOperation(Any x, Any y, int op)
{
	string X = toString(x);
	string Y = toString(y);
	switch (op)
	{
		case MegaScryptParser::Plus: { X.append(Y); return new string(X); }
		case MegaScryptParser::DoubleEquals: return X == Y;
		case MegaScryptParser::NotEquals: return X != Y;
		//case MegaScryptParser::LessThan: return X < Y;
		//case MegaScryptParser::LessThanEquals: return X <= Y;
		//case MegaScryptParser::GreaterThan: return X > Y;
		//case MegaScryptParser::GreaterThanEquals: return X >= Y;
		case MegaScryptParser::PlusEquals: { X.append(Y); return new string(X); }
	}
}
#pragma endregion

float MegaScrypt::Processor::toFloat(Any var)
{
	if (var.is<float>())
		return var.as<float>();

	throw exception("%s cast to float failed."), var;
}

bool MegaScrypt::Processor::ToBool(Any var)
{
	if (var.is<bool>())
		return var.as<bool>();

	throw exception("%s cast to bool failed."), var;
}

#pragma endregion

#pragma region Public function overloads

bool MegaScrypt::Processor::isString(Any i_string)
{
	if (i_string.is<string>() || i_string.is<string*>())
		return true;
	return false;
}

string MegaScrypt::Processor::toString(Any i_object)
{
	if (i_object.is<string>())
		return i_object.as<string>();

	else if (i_object.is<string*>())
	{
		string* r = i_object.as<string*>();
		string ret(*r);
		return ret;
	}

	else if (i_object.is<int>())
	{
		int val = i_object.as<int>();
		return to_string(val);
	}

	else if (i_object.is<float>())
	{
		float val = i_object.as<float>();
		return to_string(val);
	}

	else if (i_object.is<bool>())
		return i_object.as<string>();

	else if (i_object.isNull())
		return string("null");

	return string();

}

Any MegaScrypt::Processor::visitBlock(MegaScryptParser::BlockContext* ctx)
{
	Object* prevTarget = target;
	target = new Object(prevTarget);

	// visit children

	auto statements = ctx->children;
	if (statements.size() > 0)
	{
		for (auto statenent : statements)
		{
			MegaScryptParser::StatementContext* stmt = dynamic_cast<MegaScryptParser::StatementContext*>(statenent);
			if (stmt)
			{
				auto tokens = stmt->getTokens(MegaScryptParser::Break);
				if (tokens.size() > 0)
				{
					TerminalNode* Break = tokens[0];
					if (Break->getSymbol()->getType() == MegaScryptParser::Break)
						return false;
				}
				stmt->accept(this);
			}
		}
	}

	// delete local scope
	delete target;
	target = prevTarget;

	return true;
}

Any MegaScrypt::Processor::visitStatement(MegaScryptParser::StatementContext* ctx)
{
	if (Returned)
		return LastRetVal;

	return MegaScryptBaseVisitor::visitStatement(ctx);
}

#pragma region If Statements
Any MegaScrypt::Processor::visitIfStatement(MegaScryptParser::IfStatementContext* ctx)
{
	Any result = ctx->expression()->accept(this);
	bool res = ToBool(result);

	if (res)
	{
		// execute block and return
		bool ret = ctx->block()->accept(this).as<bool>();
		return ret;
	}
	else if (ctx->elseIfStatement().size() > 0)
	{
		// iterate through and check if any condotion satisfies
		vector<MegaScryptParser::ElseIfStatementContext*> elifStatements = ctx->elseIfStatement();
		for (auto elifStatement : elifStatements)
		{
			// visit the node and see if the condition satisfies
			Any ret = elifStatement->accept(this);

			// if the condition will satisfy ret != NULL
			if (ret.isNotNull())
				return ret;
		}
	}
	if (ctx->elseStatement() != nullptr)
	{
		// visit the else node and return
		Any ret = ctx->elseStatement()->accept(this);
		return ret;
	}
	return nullptr;
}

Any MegaScrypt::Processor::visitElseIfStatement(MegaScryptParser::ElseIfStatementContext* ctx)
{
	Any result = ctx->expression()->accept(this);
	bool res = ToBool(result);

	if (res)
	{
		// execute block and return
		bool ret = ctx->block()->accept(this).as<bool>();
		return ret;
	}
	return nullptr;
}

Any MegaScrypt::Processor::visitElseStatement(MegaScryptParser::ElseStatementContext* ctx)
{
	// execute block and return
	bool ret = ctx->block()->accept(this).as<bool>();
	return ret;
}

#pragma endregion

#pragma region Arrays
Any MegaScrypt::Processor::visitArray(MegaScryptParser::ArrayContext* ctx)
{
	Array* ar;
	if (ctx->paramList())
		ar = new Array(ctx->paramList()->accept(this).as<vector<Any>>());
	else
		ar = new Array();
	return ar;
}

Any MegaScrypt::Processor::visitArrayGetter(MegaScryptParser::ArrayGetterContext* ctx)
{
	Object* CurTarget = target;
	string Arn = ctx->Id()->accept(this).as<string>();
	Array* Ar = CurTarget->Get(Arn).as<Array*>();
	int Index;

	// multi-dimenssional array
	if (ctx->expression().size() > 1)
	{
		auto expers = ctx->expression();
		Array* arr = Ar;
		int size = expers.size();

		for (int i = 0 ; i < size - 1 ;  i++)
		{
			auto expr = expers[i];
			Index = expr->accept(this).as<int>();
			arr = (*arr)[Index];
		}
		
		int last = expers[size -1]->accept(this).as<int>();
		Any val = (*arr)[last];
		return val;

	}
	else
	{
		Index = ctx->expression()[0]->accept(this).as<int>();
		return (*Ar)[Index];
	}

}

#pragma endregion

#pragma region Functions

Any MegaScrypt::Processor::Invoke(ScriptFunction* i_funct, vector<Any> i_params, InvocationContext* invCtx)
{
	Object* prevTarget = target;
	Object* parentTarget = (invCtx != nullptr && invCtx->Container() != nullptr) ? invCtx->Container() : target;
	target = new Object(parentTarget);

	if (i_params.size() != 0)
	{
		if (i_funct->ParameterNames().size() > 0 && i_funct->ParameterNames().size() != i_params.size())
			throw new exception("Recieved invalid number of paramenters.");

		for (size_t i = 0; i < i_funct->ParameterNames().size(); i++)
		{
			target->Declare(i_funct->ParameterNames()[i], i_params[i]);
		}
	}

	LastRetVal = nullptr;
	Returned = false;

	MegaScryptBaseVisitor::visitFunctDeclaration(i_funct->DeclarationContext());

	delete target;
	target = prevTarget;

	Any ret = LastRetVal;
	LastRetVal = nullptr;
	Returned = false;

	return ret;

}

Any MegaScrypt::Processor::visitFunctDeclaration(MegaScryptParser::FunctDeclarationContext* ctx)
{
	//ScriptFunction* funct = new ScriptFunction(this, Invoke, ctx);
	return Any();
}

Any MegaScrypt::Processor::visitVarList(MegaScryptParser::VarListContext* ctx)
{
	vector<string> varNames;

	vector<TerminalNode*> Ids = ctx->Id();
	for (auto Id : Ids)
	{
		string name = Id->accept(this).as<string>();
		varNames.push_back(name);
	}

	return varNames;
}

Any MegaScrypt::Processor::visitReturnStmt(MegaScryptParser::ReturnStmtContext* ctx)
{
	if (ctx->expression())
		LastRetVal = ctx->expression()->accept(this);
	else
		LastRetVal = nullptr;

	Returned = true;
	return LastRetVal;
}

Any MegaScrypt::Processor::visitInvocation(MegaScryptParser::InvocationContext* ctx)
{
	Object* Container = target;
	Array* Ar = nullptr;
	Any FirstObj;

	if (ctx->Id())
	{
		FirstObj = ctx->Id()->accept(this);
	}

	else if (ctx->prototypeGetter())
	{
		auto Id = ctx->prototypeGetter()->Id()[0]->accept(this).as<string>();

		FirstObj = ctx->prototypeGetter()->accept(this);
		Any tar = GetPrototypeTarget(ctx->prototypeGetter());
		if (tar.is<Object*>())
			Container = tar.as<Object*>();
		else if (tar.is<Array*>())
			Container = tar.as<Array*>();
		
	}

	if (FirstObj.is<NativeFunction*>())
	{
		vector<Any> params;
		if (ctx->paramList())
			params = ctx->paramList()->accept(this).as<vector<Any>>();
		else
			params = vector<Any>();

		InvocationContext* InvCtx = new InvocationContext(Container);

		Any ret = FirstObj.as<NativeFunction*>()->Invoke(params, InvCtx);
		return ret;
	}

	else if (FirstObj.is<ScriptFunction*>())
	{
		vector<Any> params;
		if (ctx->paramList())
			params = ctx->paramList()->accept(this).as<vector<Any>>();
		else
			params = vector<Any>();

		InvocationContext* InvCtx = new InvocationContext(Container);

		Any ret = FirstObj.as<ScriptFunction*>()->Invoke(params, InvCtx);
		return ret;
	}

	else
	{
		throw exception("Not a function, Invalid Function call.");
	}
}

Any MegaScrypt::Processor::visitParamList(MegaScryptParser::ParamListContext* ctx)
{
	vector<Any> params;
	vector<MegaScryptParser::ExpressionContext*> expers = ctx->expression();

	for (auto exper : expers)
	{
		Any val = exper->accept(this);
		params.push_back(val);
	}

	return params;
}

#pragma endregion

#pragma region Declaration and Assignment
Any MegaScrypt::Processor::visitDeclaration(MegaScryptParser::DeclarationContext* ctx)
{
	string varName;
	Any value;


	if (ctx->Id())
	{
		varName = ctx->Id()->accept(this).as<string>();
	}



	if (ctx->expression())
	{
		value = ctx->expression()->accept(this);
	}
	if (ctx->prototype())
	{
		value = ctx->prototype()->accept(this);
	}
	target->Declare(varName, value);
	return value;
}

Any MegaScrypt::Processor::visitAssignment(MegaScryptParser::AssignmentContext* ctx)
{
	string varName;
	Any value; 
	Object* curTarget = target;

	//LHS
	if (ctx->Id())
		varName = ctx->Id()->accept(this).as<string>();

	if (ctx->prototypeGetter())
	{ 
		curTarget = GetPrototypeTarget(ctx->prototypeGetter()).as<Object*>();
		varName = GetLastId(ctx->prototypeGetter());
	}
		
	
	// RHS
	if (ctx->expression())
	{
		value = ctx->expression()->accept(this);
	}
		
	else if (ctx->prototype())
		value = ctx->prototype()->accept(this);

	
	if(ctx->Equals())
		curTarget->Set(varName, value, true);

	else if (ctx->PlusEquals())
	{
		Any oldVal = curTarget->Get(varName, true);
		Any newVal = BinaryOperation(oldVal, value, MegaScryptParser::PlusEquals);
		curTarget->Set(varName, newVal, true);
	}
	else if (ctx->MinusEquals())
	{
		Any oldVal = curTarget->Get(varName, true);
		Any newVal = BinaryOperation(oldVal, value, MegaScryptParser::Minus);
		curTarget->Set(varName, newVal, true);
	}
	else if (ctx->MultiplyEquals())
	{
		Any oldVal = curTarget->Get(varName, true);
		Any newVal = BinaryOperation(oldVal, value, MegaScryptParser::Multiply);
		curTarget->Set(varName, newVal, true);
	}
	else if (ctx->DivideEquals())
	{
		Any oldVal = curTarget->Get(varName, true);
		Any newVal = BinaryOperation(oldVal, value, MegaScryptParser::Divide);
		curTarget->Set(varName, newVal, true);
	}

	return value;
}

#pragma endregion

#pragma region Loops
Any MegaScrypt::Processor::visitWhileStmt(MegaScryptParser::WhileStmtContext* ctx)
{
	bool condition = ToBool(ctx->expression()->accept(this));
	if (condition)
	{
		while (condition)
		{
			bool ret = ctx->block()->accept(this).as<bool>();
			if (!ret)
				break;
			condition = ToBool(ctx->expression()->accept(this));
		}
	}

	return Any();
}

Any MegaScrypt::Processor::visitDoWhileStmt(MegaScryptParser::DoWhileStmtContext* ctx)
{
	bool condition = true;
	if (condition)
	{
		while (condition)
		{
			bool ret = ctx->block()->accept(this).as<bool>();
			if (!ret)
				break;
			condition = ToBool(ctx->expression()->accept(this));
		}
	}

	return Any();
}

Any MegaScrypt::Processor::visitForEachStmt(MegaScryptParser::ForEachStmtContext* ctx)
{
	string ConditionName = ctx->Id()->accept(this).as<string>();
	Any initialVal = ctx->expression()->accept(this);
	if (initialVal.is<Array*>())
		initialVal = initialVal.as<Array*>()->toVector();
	if (!initialVal.is<vector<Any>>())
		throw exception("cannot invoke foreach if the RHS of condition is not a vector.");

	vector<Any> valRange = initialVal.as<vector<Any>>();
	Any val = valRange[0];

	Object* ConditionScope = new Object(target);
	Object* prevTarget = target;
	target = ConditionScope;

	target->Declare(ConditionName, val);
	for (Any val : valRange)
	{
		target->Set(ConditionName, val);
		bool ret = ctx->block()->accept(this).as<bool>();
		if (!ret)
			break;
	}

	delete target;
	ConditionScope = nullptr;
	target = prevTarget;
	return Any();

}

Any MegaScrypt::Processor::visitForStmt(MegaScryptParser::ForStmtContext* ctx)
{
	Object* ConditionScope = new Object(target);
	Object* prevTarget = target;

	// initializing the condition
	if (ctx->declaration())
	{
		target = ConditionScope;
		ctx->declaration()->accept(this);
	}
	else if (ctx->assignment())
		ctx->assignment()->accept(this);
	target = ConditionScope;

	Any c = ctx->expression()->accept(this);
	bool Condition = false;
	if (c.is<bool>())
		Condition = c.as<bool>();

	while (Condition)
	{
		bool ret = ctx->block()->accept(this).as<bool>();
		if (!ret)
			break;
		ctx->subStatement()->accept(this);
		c = ctx->expression()->accept(this);
		Condition = c.is<bool>() ? ToBool(c) : false;
	}

	delete target;
	ConditionScope = nullptr;
	target = prevTarget;
	return Any();

}

#pragma endregion

#pragma region Expression
Any MegaScrypt::Processor::visitExpression(MegaScryptParser::ExpressionContext* ctx)
{
	
	if (ctx->children.size() == 1)
	{
		if (ctx->Id())
		{
			return GetValue(ctx->Id(), target);
		}

		if (ctx->String())
		{
			string word = ctx->getText();
			word.pop_back();
			word.erase(0, 1);
			return new string(word);
		}

		if (ctx->prototypeGetter())
		{
			return ctx->prototypeGetter()->accept(this);
		}

		Any object = ctx->children[0]->accept(this);
		return object;
	}

	if (ctx->increment())
	{
		Any result = ctx->increment()->accept(this);
		return result;
	}

	vector<MegaScryptParser::ExpressionContext*> expers = ctx->expression();

	if (expers.size() == 1)
	{
		Any result = expers[0]->accept(this);


		if (ctx->Minus())
		{
			if (result.is<int>())
				return -(result.as<int>());

			else if (result.is<float>())
				return -(result.as<float>());
		}

		else if (ctx->Exclaimation() && result.is<bool>())
			return !(result.as<bool>());

		else if (ctx->LeftParanthesis() && ctx->RightParanthesis())
		{
			return result;
		}

		else if (ctx->Null())
		{
			return nullptr;
		}
		
		throw exception("Invalid Uniary Operation.");
	}

	if (expers.size() == 2)
	{
		Any x = expers[0]->accept(this);
		Any y = expers[1]->accept(this);

		TerminalNode* operatorNode = (TerminalNode*)ctx->children[1];
		Any result = BinaryOperation(x, y, operatorNode->getSymbol()->getType());

		return result;

	}

	throw exception("\nInvalid operation.");
}

#pragma endregion

#pragma region Prototype Objects
Any MegaScrypt::Processor::visitPrototype(MegaScryptParser::PrototypeContext* ctx)
{
	vector<MegaScryptParser::KeyValuePairContext*> Pairs = ctx->keyValuePair();

	Object* prototypeTarget = new Object();

	for(auto Pair : Pairs)
	{
		string id = Pair->Id()->accept(this).as<string>();
		Any val = Pair->accept(this);
		if (val.is<Object*>())
			prototypeTarget->Declare(id, val.as<Object*>());
		else if (val.is<Array*>())
			prototypeTarget->Declare(id, val.as<Array*>());
		else
			prototypeTarget->Declare(id, val);
	}
	return new Object(*prototypeTarget);

}

Any MegaScrypt::Processor::visitKeyValuePair(MegaScryptParser::KeyValuePairContext* ctx)
{
	if(ctx->expression())
		return ctx->expression()->accept(this);

	if (ctx->prototype())
		return ctx->prototype()->accept(this).as<Object*>();

	throw exception("Invalid value defined in Key:Value pair");

}

Any MegaScrypt::Processor::visitPrototypeGetter(MegaScryptParser::PrototypeGetterContext* ctx)
{
	auto IDs = ctx->Id();
	Object* prevTarget = target;
	if (IDs.size() == 1) // Id.prototypeGetter
	{
		string PrototypeName = IDs[0]->accept(this).as<string>();

		if (target->Has(PrototypeName))
		{
			if (ctx->arrayGetter())
			{
				return ctx->arrayGetter()->accept(this);
			}

			target = target->Get(PrototypeName).as<Object*>(); // change to the prototype scope
			Any value = ctx->prototypeGetter()->accept(this);
			target = prevTarget;
			return value;
		}
		else
			throw exception("Itr Prototype not found.");

	}

	else
	{
		string PrototypeName = IDs[0]->accept(this).as<string>();
		string varName = IDs[1]->accept(this).as<string>();

		if (target->Has(PrototypeName))
		{
			Object* OuterPrototype;
			Array* array;
			Any OP = target->Get(PrototypeName);
			if (OP.is<Object*>())
			{
				OuterPrototype = OP.as<Object*>();
				if (OuterPrototype->Has(varName))
				{
					return OuterPrototype->Get(varName);
				}
				else
				{
					throw exception("Prototype does not have the give Variable.");
				}
			}
			else if (OP.is<Array*>())
			{
				array = OP.as<Array*>();
				NativeFunction* funct;
				IFunction* fun = array->GetFuctionPtr(varName);
				if (fun)
				{
					funct = dynamic_cast<NativeFunction*>(fun);
				}

				return funct;
			}

		}
		else
			throw exception("Prototype not declared.");
	
	}
}
#pragma endregion

#pragma region Increment
Any MegaScrypt::Processor::visitIncrement(MegaScryptParser::IncrementContext* ctx)
{
	bool isPrefix = (ctx->children[0]->toString() != ctx->Id()->getText());
	Any result = nullptr;

	//prefix
	if (isPrefix)
	{
		string varName = ctx->Id()->accept(this);
		Any val = target->Get(varName);

		// update first
		if (ctx->PlusPlus())
			val = BinaryOperation(val, 1, MegaScryptParser::Plus);

		else if(ctx->MinusMinus())
			val = BinaryOperation(val, 1, MegaScryptParser::Minus);

		target->Set(varName, val);

		// then get the return value
		result = val;
	}

	//postfix
	else
	{
		string varName = ctx->Id()->accept(this);
		Any val = target->Get(varName);

		// get the return value first
		result = val;

		// then update
		if (ctx->PlusPlus())
			val = BinaryOperation(val, 1, MegaScryptParser::Plus);

		else if (ctx->MinusMinus())
			val = BinaryOperation(val, 1, MegaScryptParser::Minus);

		target->Set(varName, val);
	}

	return result;
}

#pragma endregion

#pragma region Terminal
Any MegaScrypt::Processor::visitTerminal(TerminalNode* node)
{
	switch (node->getSymbol()->getType())
	{
		case MegaScryptParser::True: return true;
		case MegaScryptParser::False: return false;
		case MegaScryptParser::Id: return node->getText();
		case MegaScryptParser::Number:
		{
			string s = node->getText();

			if (s.find(".") < s.length())
			{
				float f = atof(s.c_str());
				return f;
			}
			else
			{
				int i = atoi(s.c_str());
				return i;
			}
		}
		case MegaScryptParser::String: 
		{
			string word = node->getText();
			word.pop_back();
			word.erase(0, 1);
			return new string(word);
		}
		case MegaScryptParser::Null: return nullptr;
	}
	return nullptr;
}

#pragma endregion

#pragma endregion
