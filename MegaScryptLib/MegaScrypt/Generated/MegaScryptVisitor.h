
// Generated from MegaScrypt.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "MegaScryptParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MegaScryptParser.
 */
class  MegaScryptVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MegaScryptParser.
   */
    virtual antlrcpp::Any visitProgram(MegaScryptParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitBlock(MegaScryptParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitStatement(MegaScryptParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitSubStatement(MegaScryptParser::SubStatementContext *context) = 0;

    virtual antlrcpp::Any visitFunctDeclaration(MegaScryptParser::FunctDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVarList(MegaScryptParser::VarListContext *context) = 0;

    virtual antlrcpp::Any visitReturnStmt(MegaScryptParser::ReturnStmtContext *context) = 0;

    virtual antlrcpp::Any visitInvocation(MegaScryptParser::InvocationContext *context) = 0;

    virtual antlrcpp::Any visitParamList(MegaScryptParser::ParamListContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(MegaScryptParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitElseIfStatement(MegaScryptParser::ElseIfStatementContext *context) = 0;

    virtual antlrcpp::Any visitElseStatement(MegaScryptParser::ElseStatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(MegaScryptParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(MegaScryptParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitWhileStmt(MegaScryptParser::WhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitDoWhileStmt(MegaScryptParser::DoWhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitForEachStmt(MegaScryptParser::ForEachStmtContext *context) = 0;

    virtual antlrcpp::Any visitForStmt(MegaScryptParser::ForStmtContext *context) = 0;

    virtual antlrcpp::Any visitExpression(MegaScryptParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArray(MegaScryptParser::ArrayContext *context) = 0;

    virtual antlrcpp::Any visitArrayGetter(MegaScryptParser::ArrayGetterContext *context) = 0;

    virtual antlrcpp::Any visitPrototype(MegaScryptParser::PrototypeContext *context) = 0;

    virtual antlrcpp::Any visitPrototypeGetter(MegaScryptParser::PrototypeGetterContext *context) = 0;

    virtual antlrcpp::Any visitKeyValuePair(MegaScryptParser::KeyValuePairContext *context) = 0;

    virtual antlrcpp::Any visitIncrement(MegaScryptParser::IncrementContext *context) = 0;


};

