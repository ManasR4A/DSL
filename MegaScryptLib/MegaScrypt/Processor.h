#pragma once
#include "Object.h"
#include "Generated/MegaScryptBaseVisitor.h"

using namespace antlrcpp;
using namespace antlr4;
using namespace antlr4::tree;

namespace MegaScrypt
{
	class ScriptFunction;
	class InvocationContext;

	class Processor : public MegaScryptBaseVisitor
	{

	protected:
		Object* target = nullptr;

		Any GetPrototypeTarget(MegaScryptParser::PrototypeGetterContext* ctx, Object* i_target = nullptr);
		string GetLastId(MegaScryptParser::PrototypeGetterContext* ctx);

		Any GetValue(TerminalNode* node, Object* _container);
		Any BinaryOperation(Any x, Any y, int op);
		Any genericBinaryOperation(Any x, Any y, int op);
		Any intBinaryOperation(Any x, Any y, int op);
		Any intFloatBinaryOperation(Any x, Any y, int op);
		Any floatIntBinaryOperation(Any x, Any y, int op);
		Any floatBinaryOperation(Any x, Any y, int op);
		Any boolBinaryOperation(Any x, Any y, int op);
		Any stringStringBinaryOperation(Any x, Any y, int op);
		

		Any LastRetVal = nullptr;
		bool Returned = false;

	public:
		static float toFloat(Any var);
		static bool ToBool(Any var);
		static bool isString(Any i_string);
		static string toString(Any i_object);
		inline void setTarget(Object* i_target) { target = i_target; }
		inline Object* getTarget() { return target; }

		Any visitBlock(MegaScryptParser::BlockContext* ctx) override;
		Any visitStatement(MegaScryptParser::StatementContext* ctx) override;

		Any visitIfStatement(MegaScryptParser::IfStatementContext* ctx) override;
		Any visitElseIfStatement(MegaScryptParser::ElseIfStatementContext* ctx) override;
		Any visitElseStatement(MegaScryptParser::ElseStatementContext* ctx) override;

		Any visitArray(MegaScryptParser::ArrayContext* ctx) override;
		Any visitArrayGetter(MegaScryptParser::ArrayGetterContext* ctx) override;

		Any Invoke(ScriptFunction* , vector<Any>, InvocationContext* invCtx);
		Any visitFunctDeclaration(MegaScryptParser::FunctDeclarationContext* ctx) override;
		Any visitVarList(MegaScryptParser::VarListContext* ctx) override;
		Any visitReturnStmt(MegaScryptParser::ReturnStmtContext* ctx) override;
		Any visitInvocation(MegaScryptParser::InvocationContext* ctx) override;
		Any visitParamList(MegaScryptParser::ParamListContext* ctx) override;

		Any visitDeclaration(MegaScryptParser::DeclarationContext* ctx) override;
		Any visitAssignment(MegaScryptParser::AssignmentContext* ctx) override;

		Any visitWhileStmt(MegaScryptParser::WhileStmtContext* ctx) override;
		Any visitDoWhileStmt(MegaScryptParser::DoWhileStmtContext* ctx) override;
		Any visitForEachStmt(MegaScryptParser::ForEachStmtContext* ctx) override;
		Any visitForStmt(MegaScryptParser::ForStmtContext* ctx) override;

		Any visitExpression(MegaScryptParser::ExpressionContext* ctx) override;

		Any visitPrototype(MegaScryptParser::PrototypeContext* ctx) override;
		Any visitKeyValuePair(MegaScryptParser::KeyValuePairContext* ctx) override;
		Any visitPrototypeGetter(MegaScryptParser::PrototypeGetterContext* ctx) override;

		Any visitIncrement(MegaScryptParser::IncrementContext* ctx) override;

		Any visitTerminal(TerminalNode* node) override;

	};

}