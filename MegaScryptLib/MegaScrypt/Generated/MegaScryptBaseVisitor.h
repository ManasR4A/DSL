
// Generated from MegaScrypt.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "MegaScryptVisitor.h"


/**
 * This class provides an empty implementation of MegaScryptVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MegaScryptBaseVisitor : public MegaScryptVisitor {
public:

  virtual antlrcpp::Any visitProgram(MegaScryptParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(MegaScryptParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(MegaScryptParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubStatement(MegaScryptParser::SubStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctDeclaration(MegaScryptParser::FunctDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarList(MegaScryptParser::VarListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStmt(MegaScryptParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInvocation(MegaScryptParser::InvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamList(MegaScryptParser::ParamListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(MegaScryptParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseIfStatement(MegaScryptParser::ElseIfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseStatement(MegaScryptParser::ElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(MegaScryptParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(MegaScryptParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStmt(MegaScryptParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoWhileStmt(MegaScryptParser::DoWhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForEachStmt(MegaScryptParser::ForEachStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStmt(MegaScryptParser::ForStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(MegaScryptParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray(MegaScryptParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayGetter(MegaScryptParser::ArrayGetterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrototype(MegaScryptParser::PrototypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrototypeGetter(MegaScryptParser::PrototypeGetterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyValuePair(MegaScryptParser::KeyValuePairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIncrement(MegaScryptParser::IncrementContext *ctx) override {
    return visitChildren(ctx);
  }


};

