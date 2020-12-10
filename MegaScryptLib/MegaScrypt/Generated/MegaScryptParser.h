
// Generated from MegaScrypt.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  MegaScryptParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, Var = 18, True = 19, False = 20, 
    Null = 21, Break = 22, Dot = 23, PlusPlus = 24, MinusMinus = 25, Exclaimation = 26, 
    Underscore = 27, Plus = 28, Minus = 29, Multiply = 30, Divide = 31, 
    Modulas = 32, LeftParanthesis = 33, RightParanthesis = 34, LessThan = 35, 
    LessThanEquals = 36, GreaterThan = 37, GreaterThanEquals = 38, DoubleEquals = 39, 
    NotEquals = 40, DoubleAmp = 41, DoubleLambda = 42, Equals = 43, PlusEquals = 44, 
    MinusEquals = 45, MultiplyEquals = 46, DivideEquals = 47, Id = 48, Number = 49, 
    String = 50, Whitespace = 51
  };

  enum {
    RuleProgram = 0, RuleBlock = 1, RuleStatement = 2, RuleSubStatement = 3, 
    RuleFunctDeclaration = 4, RuleVarList = 5, RuleReturnStmt = 6, RuleInvocation = 7, 
    RuleParamList = 8, RuleIfStatement = 9, RuleElseIfStatement = 10, RuleElseStatement = 11, 
    RuleDeclaration = 12, RuleAssignment = 13, RuleWhileStmt = 14, RuleDoWhileStmt = 15, 
    RuleForEachStmt = 16, RuleForStmt = 17, RuleExpression = 18, RuleArray = 19, 
    RuleArrayGetter = 20, RulePrototype = 21, RulePrototypeGetter = 22, 
    RuleKeyValuePair = 23, RuleIncrement = 24
  };

  MegaScryptParser(antlr4::TokenStream *input);
  ~MegaScryptParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class BlockContext;
  class StatementContext;
  class SubStatementContext;
  class FunctDeclarationContext;
  class VarListContext;
  class ReturnStmtContext;
  class InvocationContext;
  class ParamListContext;
  class IfStatementContext;
  class ElseIfStatementContext;
  class ElseStatementContext;
  class DeclarationContext;
  class AssignmentContext;
  class WhileStmtContext;
  class DoWhileStmtContext;
  class ForEachStmtContext;
  class ForStmtContext;
  class ExpressionContext;
  class ArrayContext;
  class ArrayGetterContext;
  class PrototypeContext;
  class PrototypeGetterContext;
  class KeyValuePairContext;
  class IncrementContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubStatementContext *subStatement();
    ReturnStmtContext *returnStmt();
    antlr4::tree::TerminalNode *Break();
    IfStatementContext *ifStatement();
    WhileStmtContext *whileStmt();
    DoWhileStmtContext *doWhileStmt();
    ForEachStmtContext *forEachStmt();
    ForStmtContext *forStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  SubStatementContext : public antlr4::ParserRuleContext {
  public:
    SubStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    AssignmentContext *assignment();
    IncrementContext *increment();
    InvocationContext *invocation();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubStatementContext* subStatement();

  class  FunctDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParanthesis();
    antlr4::tree::TerminalNode *RightParanthesis();
    VarListContext *varList();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctDeclarationContext* functDeclaration();

  class  VarListContext : public antlr4::ParserRuleContext {
  public:
    VarListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Var();
    antlr4::tree::TerminalNode* Var(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarListContext* varList();

  class  ReturnStmtContext : public antlr4::ParserRuleContext {
  public:
    ReturnStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStmtContext* returnStmt();

  class  InvocationContext : public antlr4::ParserRuleContext {
  public:
    InvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParanthesis();
    ParamListContext *paramList();
    antlr4::tree::TerminalNode *RightParanthesis();
    antlr4::tree::TerminalNode *Id();
    PrototypeGetterContext *prototypeGetter();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InvocationContext* invocation();

  class  ParamListContext : public antlr4::ParserRuleContext {
  public:
    ParamListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamListContext* paramList();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParanthesis();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParanthesis();
    BlockContext *block();
    ElseStatementContext *elseStatement();
    std::vector<ElseIfStatementContext *> elseIfStatement();
    ElseIfStatementContext* elseIfStatement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  ElseIfStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseIfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParanthesis();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParanthesis();
    BlockContext *block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseIfStatementContext* elseIfStatement();

  class  ElseStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseStatementContext* elseStatement();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *Equals();
    ExpressionContext *expression();
    PrototypeContext *prototype();
    ArrayContext *array();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Equals();
    antlr4::tree::TerminalNode *Id();
    PrototypeGetterContext *prototypeGetter();
    ArrayGetterContext *arrayGetter();
    ExpressionContext *expression();
    PrototypeContext *prototype();
    ArrayContext *array();
    antlr4::tree::TerminalNode *PlusEquals();
    antlr4::tree::TerminalNode *MinusEquals();
    antlr4::tree::TerminalNode *MultiplyEquals();
    antlr4::tree::TerminalNode *DivideEquals();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  WhileStmtContext : public antlr4::ParserRuleContext {
  public:
    WhileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParanthesis();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParanthesis();
    BlockContext *block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStmtContext* whileStmt();

  class  DoWhileStmtContext : public antlr4::ParserRuleContext {
  public:
    DoWhileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *LeftParanthesis();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParanthesis();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoWhileStmtContext* doWhileStmt();

  class  ForEachStmtContext : public antlr4::ParserRuleContext {
  public:
    ForEachStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParanthesis();
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Id();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParanthesis();
    BlockContext *block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForEachStmtContext* forEachStmt();

  class  ForStmtContext : public antlr4::ParserRuleContext {
  public:
    ForStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParanthesis();
    ExpressionContext *expression();
    SubStatementContext *subStatement();
    antlr4::tree::TerminalNode *RightParanthesis();
    BlockContext *block();
    DeclarationContext *declaration();
    AssignmentContext *assignment();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStmtContext* forStmt();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *True();
    antlr4::tree::TerminalNode *False();
    IncrementContext *increment();
    antlr4::tree::TerminalNode *Null();
    PrototypeGetterContext *prototypeGetter();
    InvocationContext *invocation();
    FunctDeclarationContext *functDeclaration();
    ArrayGetterContext *arrayGetter();
    ArrayContext *array();
    antlr4::tree::TerminalNode *LeftParanthesis();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RightParanthesis();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Exclaimation();
    antlr4::tree::TerminalNode *Multiply();
    antlr4::tree::TerminalNode *Divide();
    antlr4::tree::TerminalNode *Modulas();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *LessThanEquals();
    antlr4::tree::TerminalNode *GreaterThan();
    antlr4::tree::TerminalNode *GreaterThanEquals();
    antlr4::tree::TerminalNode *DoubleEquals();
    antlr4::tree::TerminalNode *NotEquals();
    antlr4::tree::TerminalNode *DoubleAmp();
    antlr4::tree::TerminalNode *DoubleLambda();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  ArrayContext : public antlr4::ParserRuleContext {
  public:
    ArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParamListContext *paramList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayContext* array();

  class  ArrayGetterContext : public antlr4::ParserRuleContext {
  public:
    ArrayGetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayGetterContext* arrayGetter();

  class  PrototypeContext : public antlr4::ParserRuleContext {
  public:
    PrototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KeyValuePairContext *> keyValuePair();
    KeyValuePairContext* keyValuePair(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrototypeContext* prototype();

  class  PrototypeGetterContext : public antlr4::ParserRuleContext {
  public:
    PrototypeGetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);
    antlr4::tree::TerminalNode *Dot();
    PrototypeGetterContext *prototypeGetter();
    ArrayGetterContext *arrayGetter();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrototypeGetterContext* prototypeGetter();

  class  KeyValuePairContext : public antlr4::ParserRuleContext {
  public:
    KeyValuePairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    ArrayContext *array();
    ExpressionContext *expression();
    PrototypeContext *prototype();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyValuePairContext* keyValuePair();

  class  IncrementContext : public antlr4::ParserRuleContext {
  public:
    IncrementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncrementContext* increment();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

