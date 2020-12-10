
// Generated from MegaScrypt.g4 by ANTLR 4.8


#include "MegaScryptVisitor.h"

#include "MegaScryptParser.h"


using namespace antlrcpp;
using namespace antlr4;

MegaScryptParser::MegaScryptParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MegaScryptParser::~MegaScryptParser() {
  delete _interpreter;
}

std::string MegaScryptParser::getGrammarFileName() const {
  return "MegaScrypt.g4";
}

const std::vector<std::string>& MegaScryptParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MegaScryptParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

MegaScryptParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MegaScryptParser::StatementContext *> MegaScryptParser::ProgramContext::statement() {
  return getRuleContexts<MegaScryptParser::StatementContext>();
}

MegaScryptParser::StatementContext* MegaScryptParser::ProgramContext::statement(size_t i) {
  return getRuleContext<MegaScryptParser::StatementContext>(i);
}

std::vector<MegaScryptParser::BlockContext *> MegaScryptParser::ProgramContext::block() {
  return getRuleContexts<MegaScryptParser::BlockContext>();
}

MegaScryptParser::BlockContext* MegaScryptParser::ProgramContext::block(size_t i) {
  return getRuleContext<MegaScryptParser::BlockContext>(i);
}


size_t MegaScryptParser::ProgramContext::getRuleIndex() const {
  return MegaScryptParser::RuleProgram;
}


antlrcpp::Any MegaScryptParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::ProgramContext* MegaScryptParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, MegaScryptParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MegaScryptParser::T__0)
      | (1ULL << MegaScryptParser::T__5)
      | (1ULL << MegaScryptParser::T__6)
      | (1ULL << MegaScryptParser::T__9)
      | (1ULL << MegaScryptParser::T__10)
      | (1ULL << MegaScryptParser::T__11)
      | (1ULL << MegaScryptParser::T__13)
      | (1ULL << MegaScryptParser::Var)
      | (1ULL << MegaScryptParser::Break)
      | (1ULL << MegaScryptParser::PlusPlus)
      | (1ULL << MegaScryptParser::MinusMinus)
      | (1ULL << MegaScryptParser::Id))) != 0)) {
      setState(52);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(50);
        statement();
        break;
      }

      case 2: {
        setState(51);
        block();
        break;
      }

      }
      setState(56);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

MegaScryptParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MegaScryptParser::StatementContext *> MegaScryptParser::BlockContext::statement() {
  return getRuleContexts<MegaScryptParser::StatementContext>();
}

MegaScryptParser::StatementContext* MegaScryptParser::BlockContext::statement(size_t i) {
  return getRuleContext<MegaScryptParser::StatementContext>(i);
}


size_t MegaScryptParser::BlockContext::getRuleIndex() const {
  return MegaScryptParser::RuleBlock;
}


antlrcpp::Any MegaScryptParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::BlockContext* MegaScryptParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, MegaScryptParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MegaScryptParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(57);
        match(MegaScryptParser::T__0);
        setState(61);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MegaScryptParser::T__5)
          | (1ULL << MegaScryptParser::T__6)
          | (1ULL << MegaScryptParser::T__9)
          | (1ULL << MegaScryptParser::T__10)
          | (1ULL << MegaScryptParser::T__11)
          | (1ULL << MegaScryptParser::T__13)
          | (1ULL << MegaScryptParser::Var)
          | (1ULL << MegaScryptParser::Break)
          | (1ULL << MegaScryptParser::PlusPlus)
          | (1ULL << MegaScryptParser::MinusMinus)
          | (1ULL << MegaScryptParser::Id))) != 0)) {
          setState(58);
          statement();
          setState(63);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(64);
        match(MegaScryptParser::T__1);
        break;
      }

      case MegaScryptParser::T__5:
      case MegaScryptParser::T__6:
      case MegaScryptParser::T__9:
      case MegaScryptParser::T__10:
      case MegaScryptParser::T__11:
      case MegaScryptParser::T__13:
      case MegaScryptParser::Var:
      case MegaScryptParser::Break:
      case MegaScryptParser::PlusPlus:
      case MegaScryptParser::MinusMinus:
      case MegaScryptParser::Id: {
        enterOuterAlt(_localctx, 2);
        setState(65);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

MegaScryptParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MegaScryptParser::SubStatementContext* MegaScryptParser::StatementContext::subStatement() {
  return getRuleContext<MegaScryptParser::SubStatementContext>(0);
}

MegaScryptParser::ReturnStmtContext* MegaScryptParser::StatementContext::returnStmt() {
  return getRuleContext<MegaScryptParser::ReturnStmtContext>(0);
}

tree::TerminalNode* MegaScryptParser::StatementContext::Break() {
  return getToken(MegaScryptParser::Break, 0);
}

MegaScryptParser::IfStatementContext* MegaScryptParser::StatementContext::ifStatement() {
  return getRuleContext<MegaScryptParser::IfStatementContext>(0);
}

MegaScryptParser::WhileStmtContext* MegaScryptParser::StatementContext::whileStmt() {
  return getRuleContext<MegaScryptParser::WhileStmtContext>(0);
}

MegaScryptParser::DoWhileStmtContext* MegaScryptParser::StatementContext::doWhileStmt() {
  return getRuleContext<MegaScryptParser::DoWhileStmtContext>(0);
}

MegaScryptParser::ForEachStmtContext* MegaScryptParser::StatementContext::forEachStmt() {
  return getRuleContext<MegaScryptParser::ForEachStmtContext>(0);
}

MegaScryptParser::ForStmtContext* MegaScryptParser::StatementContext::forStmt() {
  return getRuleContext<MegaScryptParser::ForStmtContext>(0);
}


size_t MegaScryptParser::StatementContext::getRuleIndex() const {
  return MegaScryptParser::RuleStatement;
}


antlrcpp::Any MegaScryptParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::StatementContext* MegaScryptParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, MegaScryptParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(79);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MegaScryptParser::T__5:
      case MegaScryptParser::Var:
      case MegaScryptParser::Break:
      case MegaScryptParser::PlusPlus:
      case MegaScryptParser::MinusMinus:
      case MegaScryptParser::Id: {
        enterOuterAlt(_localctx, 1);
        setState(71);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MegaScryptParser::Var:
          case MegaScryptParser::PlusPlus:
          case MegaScryptParser::MinusMinus:
          case MegaScryptParser::Id: {
            setState(68);
            subStatement();
            break;
          }

          case MegaScryptParser::T__5: {
            setState(69);
            returnStmt();
            break;
          }

          case MegaScryptParser::Break: {
            setState(70);
            match(MegaScryptParser::Break);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(73);
        match(MegaScryptParser::T__2);
        break;
      }

      case MegaScryptParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(74);
        ifStatement();
        break;
      }

      case MegaScryptParser::T__9: {
        enterOuterAlt(_localctx, 3);
        setState(75);
        whileStmt();
        break;
      }

      case MegaScryptParser::T__10: {
        enterOuterAlt(_localctx, 4);
        setState(76);
        doWhileStmt();
        break;
      }

      case MegaScryptParser::T__11: {
        enterOuterAlt(_localctx, 5);
        setState(77);
        forEachStmt();
        break;
      }

      case MegaScryptParser::T__13: {
        enterOuterAlt(_localctx, 6);
        setState(78);
        forStmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubStatementContext ------------------------------------------------------------------

MegaScryptParser::SubStatementContext::SubStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MegaScryptParser::DeclarationContext* MegaScryptParser::SubStatementContext::declaration() {
  return getRuleContext<MegaScryptParser::DeclarationContext>(0);
}

MegaScryptParser::AssignmentContext* MegaScryptParser::SubStatementContext::assignment() {
  return getRuleContext<MegaScryptParser::AssignmentContext>(0);
}

MegaScryptParser::IncrementContext* MegaScryptParser::SubStatementContext::increment() {
  return getRuleContext<MegaScryptParser::IncrementContext>(0);
}

MegaScryptParser::InvocationContext* MegaScryptParser::SubStatementContext::invocation() {
  return getRuleContext<MegaScryptParser::InvocationContext>(0);
}


size_t MegaScryptParser::SubStatementContext::getRuleIndex() const {
  return MegaScryptParser::RuleSubStatement;
}


antlrcpp::Any MegaScryptParser::SubStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitSubStatement(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::SubStatementContext* MegaScryptParser::subStatement() {
  SubStatementContext *_localctx = _tracker.createInstance<SubStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, MegaScryptParser::RuleSubStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(85);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(81);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(82);
      assignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(83);
      increment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(84);
      invocation();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctDeclarationContext ------------------------------------------------------------------

MegaScryptParser::FunctDeclarationContext::FunctDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MegaScryptParser::FunctDeclarationContext::LeftParanthesis() {
  return getToken(MegaScryptParser::LeftParanthesis, 0);
}

tree::TerminalNode* MegaScryptParser::FunctDeclarationContext::RightParanthesis() {
  return getToken(MegaScryptParser::RightParanthesis, 0);
}

MegaScryptParser::VarListContext* MegaScryptParser::FunctDeclarationContext::varList() {
  return getRuleContext<MegaScryptParser::VarListContext>(0);
}

std::vector<MegaScryptParser::StatementContext *> MegaScryptParser::FunctDeclarationContext::statement() {
  return getRuleContexts<MegaScryptParser::StatementContext>();
}

MegaScryptParser::StatementContext* MegaScryptParser::FunctDeclarationContext::statement(size_t i) {
  return getRuleContext<MegaScryptParser::StatementContext>(i);
}


size_t MegaScryptParser::FunctDeclarationContext::getRuleIndex() const {
  return MegaScryptParser::RuleFunctDeclaration;
}


antlrcpp::Any MegaScryptParser::FunctDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitFunctDeclaration(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::FunctDeclarationContext* MegaScryptParser::functDeclaration() {
  FunctDeclarationContext *_localctx = _tracker.createInstance<FunctDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, MegaScryptParser::RuleFunctDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(MegaScryptParser::T__3);
    setState(88);
    match(MegaScryptParser::LeftParanthesis);
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MegaScryptParser::Var) {
      setState(89);
      varList();
    }
    setState(92);
    match(MegaScryptParser::RightParanthesis);
    setState(93);
    match(MegaScryptParser::T__0);
    setState(97);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MegaScryptParser::T__5)
      | (1ULL << MegaScryptParser::T__6)
      | (1ULL << MegaScryptParser::T__9)
      | (1ULL << MegaScryptParser::T__10)
      | (1ULL << MegaScryptParser::T__11)
      | (1ULL << MegaScryptParser::T__13)
      | (1ULL << MegaScryptParser::Var)
      | (1ULL << MegaScryptParser::Break)
      | (1ULL << MegaScryptParser::PlusPlus)
      | (1ULL << MegaScryptParser::MinusMinus)
      | (1ULL << MegaScryptParser::Id))) != 0)) {
      setState(94);
      statement();
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(100);
    match(MegaScryptParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarListContext ------------------------------------------------------------------

MegaScryptParser::VarListContext::VarListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MegaScryptParser::VarListContext::Var() {
  return getTokens(MegaScryptParser::Var);
}

tree::TerminalNode* MegaScryptParser::VarListContext::Var(size_t i) {
  return getToken(MegaScryptParser::Var, i);
}

std::vector<tree::TerminalNode *> MegaScryptParser::VarListContext::Id() {
  return getTokens(MegaScryptParser::Id);
}

tree::TerminalNode* MegaScryptParser::VarListContext::Id(size_t i) {
  return getToken(MegaScryptParser::Id, i);
}


size_t MegaScryptParser::VarListContext::getRuleIndex() const {
  return MegaScryptParser::RuleVarList;
}


antlrcpp::Any MegaScryptParser::VarListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitVarList(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::VarListContext* MegaScryptParser::varList() {
  VarListContext *_localctx = _tracker.createInstance<VarListContext>(_ctx, getState());
  enterRule(_localctx, 10, MegaScryptParser::RuleVarList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(MegaScryptParser::Var);
    setState(103);
    match(MegaScryptParser::Id);
    setState(109);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MegaScryptParser::T__4) {
      setState(104);
      match(MegaScryptParser::T__4);
      setState(105);
      match(MegaScryptParser::Var);
      setState(106);
      match(MegaScryptParser::Id);
      setState(111);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmtContext ------------------------------------------------------------------

MegaScryptParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MegaScryptParser::ExpressionContext* MegaScryptParser::ReturnStmtContext::expression() {
  return getRuleContext<MegaScryptParser::ExpressionContext>(0);
}


size_t MegaScryptParser::ReturnStmtContext::getRuleIndex() const {
  return MegaScryptParser::RuleReturnStmt;
}


antlrcpp::Any MegaScryptParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::ReturnStmtContext* MegaScryptParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, MegaScryptParser::RuleReturnStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(MegaScryptParser::T__5);
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MegaScryptParser::T__3)
      | (1ULL << MegaScryptParser::T__14)
      | (1ULL << MegaScryptParser::True)
      | (1ULL << MegaScryptParser::False)
      | (1ULL << MegaScryptParser::Null)
      | (1ULL << MegaScryptParser::PlusPlus)
      | (1ULL << MegaScryptParser::MinusMinus)
      | (1ULL << MegaScryptParser::Exclaimation)
      | (1ULL << MegaScryptParser::Minus)
      | (1ULL << MegaScryptParser::LeftParanthesis)
      | (1ULL << MegaScryptParser::Id)
      | (1ULL << MegaScryptParser::Number)
      | (1ULL << MegaScryptParser::String))) != 0)) {
      setState(113);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InvocationContext ------------------------------------------------------------------

MegaScryptParser::InvocationContext::InvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MegaScryptParser::InvocationContext::LeftParanthesis() {
  return getToken(MegaScryptParser::LeftParanthesis, 0);
}

MegaScryptParser::ParamListContext* MegaScryptParser::InvocationContext::paramList() {
  return getRuleContext<MegaScryptParser::ParamListContext>(0);
}

tree::TerminalNode* MegaScryptParser::InvocationContext::RightParanthesis() {
  return getToken(MegaScryptParser::RightParanthesis, 0);
}

tree::TerminalNode* MegaScryptParser::InvocationContext::Id() {
  return getToken(MegaScryptParser::Id, 0);
}

MegaScryptParser::PrototypeGetterContext* MegaScryptParser::InvocationContext::prototypeGetter() {
  return getRuleContext<MegaScryptParser::PrototypeGetterContext>(0);
}


size_t MegaScryptParser::InvocationContext::getRuleIndex() const {
  return MegaScryptParser::RuleInvocation;
}


antlrcpp::Any MegaScryptParser::InvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitInvocation(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::InvocationContext* MegaScryptParser::invocation() {
  InvocationContext *_localctx = _tracker.createInstance<InvocationContext>(_ctx, getState());
  enterRule(_localctx, 14, MegaScryptParser::RuleInvocation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(116);
      match(MegaScryptParser::Id);
      break;
    }

    case 2: {
      setState(117);
      prototypeGetter();
      break;
    }

    }
    setState(120);
    match(MegaScryptParser::LeftParanthesis);
    setState(121);
    paramList();
    setState(122);
    match(MegaScryptParser::RightParanthesis);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamListContext ------------------------------------------------------------------

MegaScryptParser::ParamListContext::ParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MegaScryptParser::ExpressionContext *> MegaScryptParser::ParamListContext::expression() {
  return getRuleContexts<MegaScryptParser::ExpressionContext>();
}

MegaScryptParser::ExpressionContext* MegaScryptParser::ParamListContext::expression(size_t i) {
  return getRuleContext<MegaScryptParser::ExpressionContext>(i);
}


size_t MegaScryptParser::ParamListContext::getRuleIndex() const {
  return MegaScryptParser::RuleParamList;
}


antlrcpp::Any MegaScryptParser::ParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitParamList(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::ParamListContext* MegaScryptParser::paramList() {
  ParamListContext *_localctx = _tracker.createInstance<ParamListContext>(_ctx, getState());
  enterRule(_localctx, 16, MegaScryptParser::RuleParamList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    expression(0);
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MegaScryptParser::T__4) {
      setState(125);
      match(MegaScryptParser::T__4);
      setState(126);
      expression(0);
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

MegaScryptParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MegaScryptParser::IfStatementContext::LeftParanthesis() {
  return getToken(MegaScryptParser::LeftParanthesis, 0);
}

MegaScryptParser::ExpressionContext* MegaScryptParser::IfStatementContext::expression() {
  return getRuleContext<MegaScryptParser::ExpressionContext>(0);
}

tree::TerminalNode* MegaScryptParser::IfStatementContext::RightParanthesis() {
  return getToken(MegaScryptParser::RightParanthesis, 0);
}

MegaScryptParser::BlockContext* MegaScryptParser::IfStatementContext::block() {
  return getRuleContext<MegaScryptParser::BlockContext>(0);
}

MegaScryptParser::ElseStatementContext* MegaScryptParser::IfStatementContext::elseStatement() {
  return getRuleContext<MegaScryptParser::ElseStatementContext>(0);
}

std::vector<MegaScryptParser::ElseIfStatementContext *> MegaScryptParser::IfStatementContext::elseIfStatement() {
  return getRuleContexts<MegaScryptParser::ElseIfStatementContext>();
}

MegaScryptParser::ElseIfStatementContext* MegaScryptParser::IfStatementContext::elseIfStatement(size_t i) {
  return getRuleContext<MegaScryptParser::ElseIfStatementContext>(i);
}


size_t MegaScryptParser::IfStatementContext::getRuleIndex() const {
  return MegaScryptParser::RuleIfStatement;
}


antlrcpp::Any MegaScryptParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::IfStatementContext* MegaScryptParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, MegaScryptParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(MegaScryptParser::T__6);
    setState(133);
    match(MegaScryptParser::LeftParanthesis);
    setState(134);
    expression(0);
    setState(135);
    match(MegaScryptParser::RightParanthesis);
    setState(136);
    block();
    setState(144);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(140);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MegaScryptParser::T__7) {
        setState(137);
        elseIfStatement();
        setState(142);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(143);
      elseStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseIfStatementContext ------------------------------------------------------------------

MegaScryptParser::ElseIfStatementContext::ElseIfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MegaScryptParser::ElseIfStatementContext::LeftParanthesis() {
  return getToken(MegaScryptParser::LeftParanthesis, 0);
}

MegaScryptParser::ExpressionContext* MegaScryptParser::ElseIfStatementContext::expression() {
  return getRuleContext<MegaScryptParser::ExpressionContext>(0);
}

tree::TerminalNode* MegaScryptParser::ElseIfStatementContext::RightParanthesis() {
  return getToken(MegaScryptParser::RightParanthesis, 0);
}

MegaScryptParser::BlockContext* MegaScryptParser::ElseIfStatementContext::block() {
  return getRuleContext<MegaScryptParser::BlockContext>(0);
}


size_t MegaScryptParser::ElseIfStatementContext::getRuleIndex() const {
  return MegaScryptParser::RuleElseIfStatement;
}


antlrcpp::Any MegaScryptParser::ElseIfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitElseIfStatement(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::ElseIfStatementContext* MegaScryptParser::elseIfStatement() {
  ElseIfStatementContext *_localctx = _tracker.createInstance<ElseIfStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, MegaScryptParser::RuleElseIfStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(MegaScryptParser::T__7);
    setState(147);
    match(MegaScryptParser::LeftParanthesis);
    setState(148);
    expression(0);
    setState(149);
    match(MegaScryptParser::RightParanthesis);
    setState(150);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatementContext ------------------------------------------------------------------

MegaScryptParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MegaScryptParser::BlockContext* MegaScryptParser::ElseStatementContext::block() {
  return getRuleContext<MegaScryptParser::BlockContext>(0);
}


size_t MegaScryptParser::ElseStatementContext::getRuleIndex() const {
  return MegaScryptParser::RuleElseStatement;
}


antlrcpp::Any MegaScryptParser::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::ElseStatementContext* MegaScryptParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, MegaScryptParser::RuleElseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(MegaScryptParser::T__8);
    setState(153);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

MegaScryptParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MegaScryptParser::DeclarationContext::Var() {
  return getToken(MegaScryptParser::Var, 0);
}

tree::TerminalNode* MegaScryptParser::DeclarationContext::Id() {
  return getToken(MegaScryptParser::Id, 0);
}

tree::TerminalNode* MegaScryptParser::DeclarationContext::Equals() {
  return getToken(MegaScryptParser::Equals, 0);
}

MegaScryptParser::ExpressionContext* MegaScryptParser::DeclarationContext::expression() {
  return getRuleContext<MegaScryptParser::ExpressionContext>(0);
}

MegaScryptParser::PrototypeContext* MegaScryptParser::DeclarationContext::prototype() {
  return getRuleContext<MegaScryptParser::PrototypeContext>(0);
}

MegaScryptParser::ArrayContext* MegaScryptParser::DeclarationContext::array() {
  return getRuleContext<MegaScryptParser::ArrayContext>(0);
}


size_t MegaScryptParser::DeclarationContext::getRuleIndex() const {
  return MegaScryptParser::RuleDeclaration;
}


antlrcpp::Any MegaScryptParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::DeclarationContext* MegaScryptParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 24, MegaScryptParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(MegaScryptParser::Var);
    setState(156);
    match(MegaScryptParser::Id);
    setState(163);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MegaScryptParser::Equals) {
      setState(157);
      match(MegaScryptParser::Equals);
      setState(161);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(158);
        expression(0);
        break;
      }

      case 2: {
        setState(159);
        prototype();
        break;
      }

      case 3: {
        setState(160);
        array();
        break;
      }

      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

MegaScryptParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MegaScryptParser::AssignmentContext::Equals() {
  return getToken(MegaScryptParser::Equals, 0);
}

tree::TerminalNode* MegaScryptParser::AssignmentContext::Id() {
  return getToken(MegaScryptParser::Id, 0);
}

MegaScryptParser::PrototypeGetterContext* MegaScryptParser::AssignmentContext::prototypeGetter() {
  return getRuleContext<MegaScryptParser::PrototypeGetterContext>(0);
}

MegaScryptParser::ArrayGetterContext* MegaScryptParser::AssignmentContext::arrayGetter() {
  return getRuleContext<MegaScryptParser::ArrayGetterContext>(0);
}

MegaScryptParser::ExpressionContext* MegaScryptParser::AssignmentContext::expression() {
  return getRuleContext<MegaScryptParser::ExpressionContext>(0);
}

MegaScryptParser::PrototypeContext* MegaScryptParser::AssignmentContext::prototype() {
  return getRuleContext<MegaScryptParser::PrototypeContext>(0);
}

MegaScryptParser::ArrayContext* MegaScryptParser::AssignmentContext::array() {
  return getRuleContext<MegaScryptParser::ArrayContext>(0);
}

tree::TerminalNode* MegaScryptParser::AssignmentContext::PlusEquals() {
  return getToken(MegaScryptParser::PlusEquals, 0);
}

tree::TerminalNode* MegaScryptParser::AssignmentContext::MinusEquals() {
  return getToken(MegaScryptParser::MinusEquals, 0);
}

tree::TerminalNode* MegaScryptParser::AssignmentContext::MultiplyEquals() {
  return getToken(MegaScryptParser::MultiplyEquals, 0);
}

tree::TerminalNode* MegaScryptParser::AssignmentContext::DivideEquals() {
  return getToken(MegaScryptParser::DivideEquals, 0);
}


size_t MegaScryptParser::AssignmentContext::getRuleIndex() const {
  return MegaScryptParser::RuleAssignment;
}


antlrcpp::Any MegaScryptParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::AssignmentContext* MegaScryptParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 26, MegaScryptParser::RuleAssignment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(183);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(168);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(165);
        match(MegaScryptParser::Id);
        break;
      }

      case 2: {
        setState(166);
        prototypeGetter();
        break;
      }

      case 3: {
        setState(167);
        arrayGetter();
        break;
      }

      }
      setState(170);
      match(MegaScryptParser::Equals);
      setState(174);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
      case 1: {
        setState(171);
        expression(0);
        break;
      }

      case 2: {
        setState(172);
        prototype();
        break;
      }

      case 3: {
        setState(173);
        array();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(179);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(176);
        match(MegaScryptParser::Id);
        break;
      }

      case 2: {
        setState(177);
        prototypeGetter();
        break;
      }

      case 3: {
        setState(178);
        arrayGetter();
        break;
      }

      }
      setState(181);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MegaScryptParser::PlusEquals)
        | (1ULL << MegaScryptParser::MinusEquals)
        | (1ULL << MegaScryptParser::MultiplyEquals)
        | (1ULL << MegaScryptParser::DivideEquals))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(182);
      expression(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStmtContext ------------------------------------------------------------------

MegaScryptParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MegaScryptParser::WhileStmtContext::LeftParanthesis() {
  return getToken(MegaScryptParser::LeftParanthesis, 0);
}

MegaScryptParser::ExpressionContext* MegaScryptParser::WhileStmtContext::expression() {
  return getRuleContext<MegaScryptParser::ExpressionContext>(0);
}

tree::TerminalNode* MegaScryptParser::WhileStmtContext::RightParanthesis() {
  return getToken(MegaScryptParser::RightParanthesis, 0);
}

MegaScryptParser::BlockContext* MegaScryptParser::WhileStmtContext::block() {
  return getRuleContext<MegaScryptParser::BlockContext>(0);
}


size_t MegaScryptParser::WhileStmtContext::getRuleIndex() const {
  return MegaScryptParser::RuleWhileStmt;
}


antlrcpp::Any MegaScryptParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::WhileStmtContext* MegaScryptParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 28, MegaScryptParser::RuleWhileStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(MegaScryptParser::T__9);
    setState(186);
    match(MegaScryptParser::LeftParanthesis);
    setState(187);
    expression(0);
    setState(188);
    match(MegaScryptParser::RightParanthesis);
    setState(189);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoWhileStmtContext ------------------------------------------------------------------

MegaScryptParser::DoWhileStmtContext::DoWhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MegaScryptParser::BlockContext* MegaScryptParser::DoWhileStmtContext::block() {
  return getRuleContext<MegaScryptParser::BlockContext>(0);
}

tree::TerminalNode* MegaScryptParser::DoWhileStmtContext::LeftParanthesis() {
  return getToken(MegaScryptParser::LeftParanthesis, 0);
}

MegaScryptParser::ExpressionContext* MegaScryptParser::DoWhileStmtContext::expression() {
  return getRuleContext<MegaScryptParser::ExpressionContext>(0);
}

tree::TerminalNode* MegaScryptParser::DoWhileStmtContext::RightParanthesis() {
  return getToken(MegaScryptParser::RightParanthesis, 0);
}


size_t MegaScryptParser::DoWhileStmtContext::getRuleIndex() const {
  return MegaScryptParser::RuleDoWhileStmt;
}


antlrcpp::Any MegaScryptParser::DoWhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitDoWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::DoWhileStmtContext* MegaScryptParser::doWhileStmt() {
  DoWhileStmtContext *_localctx = _tracker.createInstance<DoWhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 30, MegaScryptParser::RuleDoWhileStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    match(MegaScryptParser::T__10);
    setState(192);
    block();
    setState(193);
    match(MegaScryptParser::T__9);
    setState(194);
    match(MegaScryptParser::LeftParanthesis);
    setState(195);
    expression(0);
    setState(196);
    match(MegaScryptParser::RightParanthesis);
    setState(197);
    match(MegaScryptParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForEachStmtContext ------------------------------------------------------------------

MegaScryptParser::ForEachStmtContext::ForEachStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MegaScryptParser::ForEachStmtContext::LeftParanthesis() {
  return getToken(MegaScryptParser::LeftParanthesis, 0);
}

tree::TerminalNode* MegaScryptParser::ForEachStmtContext::Var() {
  return getToken(MegaScryptParser::Var, 0);
}

tree::TerminalNode* MegaScryptParser::ForEachStmtContext::Id() {
  return getToken(MegaScryptParser::Id, 0);
}

MegaScryptParser::ExpressionContext* MegaScryptParser::ForEachStmtContext::expression() {
  return getRuleContext<MegaScryptParser::ExpressionContext>(0);
}

tree::TerminalNode* MegaScryptParser::ForEachStmtContext::RightParanthesis() {
  return getToken(MegaScryptParser::RightParanthesis, 0);
}

MegaScryptParser::BlockContext* MegaScryptParser::ForEachStmtContext::block() {
  return getRuleContext<MegaScryptParser::BlockContext>(0);
}


size_t MegaScryptParser::ForEachStmtContext::getRuleIndex() const {
  return MegaScryptParser::RuleForEachStmt;
}


antlrcpp::Any MegaScryptParser::ForEachStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitForEachStmt(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::ForEachStmtContext* MegaScryptParser::forEachStmt() {
  ForEachStmtContext *_localctx = _tracker.createInstance<ForEachStmtContext>(_ctx, getState());
  enterRule(_localctx, 32, MegaScryptParser::RuleForEachStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    match(MegaScryptParser::T__11);
    setState(200);
    match(MegaScryptParser::LeftParanthesis);
    setState(201);
    match(MegaScryptParser::Var);
    setState(202);
    match(MegaScryptParser::Id);
    setState(203);
    match(MegaScryptParser::T__12);
    setState(204);
    expression(0);
    setState(205);
    match(MegaScryptParser::RightParanthesis);
    setState(206);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStmtContext ------------------------------------------------------------------

MegaScryptParser::ForStmtContext::ForStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MegaScryptParser::ForStmtContext::LeftParanthesis() {
  return getToken(MegaScryptParser::LeftParanthesis, 0);
}

MegaScryptParser::ExpressionContext* MegaScryptParser::ForStmtContext::expression() {
  return getRuleContext<MegaScryptParser::ExpressionContext>(0);
}

MegaScryptParser::SubStatementContext* MegaScryptParser::ForStmtContext::subStatement() {
  return getRuleContext<MegaScryptParser::SubStatementContext>(0);
}

tree::TerminalNode* MegaScryptParser::ForStmtContext::RightParanthesis() {
  return getToken(MegaScryptParser::RightParanthesis, 0);
}

MegaScryptParser::BlockContext* MegaScryptParser::ForStmtContext::block() {
  return getRuleContext<MegaScryptParser::BlockContext>(0);
}

MegaScryptParser::DeclarationContext* MegaScryptParser::ForStmtContext::declaration() {
  return getRuleContext<MegaScryptParser::DeclarationContext>(0);
}

MegaScryptParser::AssignmentContext* MegaScryptParser::ForStmtContext::assignment() {
  return getRuleContext<MegaScryptParser::AssignmentContext>(0);
}


size_t MegaScryptParser::ForStmtContext::getRuleIndex() const {
  return MegaScryptParser::RuleForStmt;
}


antlrcpp::Any MegaScryptParser::ForStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitForStmt(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::ForStmtContext* MegaScryptParser::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 34, MegaScryptParser::RuleForStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(MegaScryptParser::T__13);
    setState(209);
    match(MegaScryptParser::LeftParanthesis);
    setState(212);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MegaScryptParser::Var: {
        setState(210);
        declaration();
        break;
      }

      case MegaScryptParser::Id: {
        setState(211);
        assignment();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(214);
    match(MegaScryptParser::T__2);
    setState(215);
    expression(0);
    setState(216);
    match(MegaScryptParser::T__2);
    setState(217);
    subStatement();
    setState(218);
    match(MegaScryptParser::RightParanthesis);
    setState(219);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

MegaScryptParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::Number() {
  return getToken(MegaScryptParser::Number, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::Id() {
  return getToken(MegaScryptParser::Id, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::String() {
  return getToken(MegaScryptParser::String, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::True() {
  return getToken(MegaScryptParser::True, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::False() {
  return getToken(MegaScryptParser::False, 0);
}

MegaScryptParser::IncrementContext* MegaScryptParser::ExpressionContext::increment() {
  return getRuleContext<MegaScryptParser::IncrementContext>(0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::Null() {
  return getToken(MegaScryptParser::Null, 0);
}

MegaScryptParser::PrototypeGetterContext* MegaScryptParser::ExpressionContext::prototypeGetter() {
  return getRuleContext<MegaScryptParser::PrototypeGetterContext>(0);
}

MegaScryptParser::InvocationContext* MegaScryptParser::ExpressionContext::invocation() {
  return getRuleContext<MegaScryptParser::InvocationContext>(0);
}

MegaScryptParser::FunctDeclarationContext* MegaScryptParser::ExpressionContext::functDeclaration() {
  return getRuleContext<MegaScryptParser::FunctDeclarationContext>(0);
}

MegaScryptParser::ArrayGetterContext* MegaScryptParser::ExpressionContext::arrayGetter() {
  return getRuleContext<MegaScryptParser::ArrayGetterContext>(0);
}

MegaScryptParser::ArrayContext* MegaScryptParser::ExpressionContext::array() {
  return getRuleContext<MegaScryptParser::ArrayContext>(0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::LeftParanthesis() {
  return getToken(MegaScryptParser::LeftParanthesis, 0);
}

std::vector<MegaScryptParser::ExpressionContext *> MegaScryptParser::ExpressionContext::expression() {
  return getRuleContexts<MegaScryptParser::ExpressionContext>();
}

MegaScryptParser::ExpressionContext* MegaScryptParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<MegaScryptParser::ExpressionContext>(i);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::RightParanthesis() {
  return getToken(MegaScryptParser::RightParanthesis, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::Minus() {
  return getToken(MegaScryptParser::Minus, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::Exclaimation() {
  return getToken(MegaScryptParser::Exclaimation, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::Multiply() {
  return getToken(MegaScryptParser::Multiply, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::Divide() {
  return getToken(MegaScryptParser::Divide, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::Modulas() {
  return getToken(MegaScryptParser::Modulas, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::Plus() {
  return getToken(MegaScryptParser::Plus, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::LessThan() {
  return getToken(MegaScryptParser::LessThan, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::LessThanEquals() {
  return getToken(MegaScryptParser::LessThanEquals, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::GreaterThan() {
  return getToken(MegaScryptParser::GreaterThan, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::GreaterThanEquals() {
  return getToken(MegaScryptParser::GreaterThanEquals, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::DoubleEquals() {
  return getToken(MegaScryptParser::DoubleEquals, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::NotEquals() {
  return getToken(MegaScryptParser::NotEquals, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::DoubleAmp() {
  return getToken(MegaScryptParser::DoubleAmp, 0);
}

tree::TerminalNode* MegaScryptParser::ExpressionContext::DoubleLambda() {
  return getToken(MegaScryptParser::DoubleLambda, 0);
}


size_t MegaScryptParser::ExpressionContext::getRuleIndex() const {
  return MegaScryptParser::RuleExpression;
}


antlrcpp::Any MegaScryptParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


MegaScryptParser::ExpressionContext* MegaScryptParser::expression() {
   return expression(0);
}

MegaScryptParser::ExpressionContext* MegaScryptParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MegaScryptParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  MegaScryptParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, MegaScryptParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(242);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(222);
      match(MegaScryptParser::Number);
      break;
    }

    case 2: {
      setState(223);
      match(MegaScryptParser::Id);
      break;
    }

    case 3: {
      setState(224);
      match(MegaScryptParser::String);
      break;
    }

    case 4: {
      setState(225);
      match(MegaScryptParser::True);
      break;
    }

    case 5: {
      setState(226);
      match(MegaScryptParser::False);
      break;
    }

    case 6: {
      setState(227);
      increment();
      break;
    }

    case 7: {
      setState(228);
      match(MegaScryptParser::Null);
      break;
    }

    case 8: {
      setState(229);
      prototypeGetter();
      break;
    }

    case 9: {
      setState(230);
      invocation();
      break;
    }

    case 10: {
      setState(231);
      functDeclaration();
      break;
    }

    case 11: {
      setState(232);
      arrayGetter();
      break;
    }

    case 12: {
      setState(233);
      array();
      break;
    }

    case 13: {
      setState(234);
      match(MegaScryptParser::LeftParanthesis);
      setState(235);
      expression(0);
      setState(236);
      match(MegaScryptParser::RightParanthesis);
      break;
    }

    case 14: {
      setState(238);
      match(MegaScryptParser::Minus);
      setState(239);
      expression(9);
      break;
    }

    case 15: {
      setState(240);
      match(MegaScryptParser::Exclaimation);
      setState(241);
      expression(8);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(267);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(265);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(244);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(245);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << MegaScryptParser::Multiply)
            | (1ULL << MegaScryptParser::Divide)
            | (1ULL << MegaScryptParser::Modulas))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(246);
          expression(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(247);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(248);
          _la = _input->LA(1);
          if (!(_la == MegaScryptParser::Plus

          || _la == MegaScryptParser::Minus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(249);
          expression(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(250);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(251);
          _la = _input->LA(1);
          if (!(_la == MegaScryptParser::LessThan

          || _la == MegaScryptParser::LessThanEquals)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(252);
          expression(6);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(253);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(254);
          _la = _input->LA(1);
          if (!(_la == MegaScryptParser::GreaterThan

          || _la == MegaScryptParser::GreaterThanEquals)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(255);
          expression(5);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(256);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(257);
          _la = _input->LA(1);
          if (!(_la == MegaScryptParser::DoubleEquals

          || _la == MegaScryptParser::NotEquals)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(258);
          expression(4);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(259);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(260);
          match(MegaScryptParser::DoubleAmp);
          setState(261);
          expression(3);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(262);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(263);
          match(MegaScryptParser::DoubleLambda);
          setState(264);
          expression(2);
          break;
        }

        } 
      }
      setState(269);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArrayContext ------------------------------------------------------------------

MegaScryptParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MegaScryptParser::ParamListContext* MegaScryptParser::ArrayContext::paramList() {
  return getRuleContext<MegaScryptParser::ParamListContext>(0);
}


size_t MegaScryptParser::ArrayContext::getRuleIndex() const {
  return MegaScryptParser::RuleArray;
}


antlrcpp::Any MegaScryptParser::ArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitArray(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::ArrayContext* MegaScryptParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 38, MegaScryptParser::RuleArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    match(MegaScryptParser::T__14);
    setState(272);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MegaScryptParser::T__3)
      | (1ULL << MegaScryptParser::T__14)
      | (1ULL << MegaScryptParser::True)
      | (1ULL << MegaScryptParser::False)
      | (1ULL << MegaScryptParser::Null)
      | (1ULL << MegaScryptParser::PlusPlus)
      | (1ULL << MegaScryptParser::MinusMinus)
      | (1ULL << MegaScryptParser::Exclaimation)
      | (1ULL << MegaScryptParser::Minus)
      | (1ULL << MegaScryptParser::LeftParanthesis)
      | (1ULL << MegaScryptParser::Id)
      | (1ULL << MegaScryptParser::Number)
      | (1ULL << MegaScryptParser::String))) != 0)) {
      setState(271);
      paramList();
    }
    setState(274);
    match(MegaScryptParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayGetterContext ------------------------------------------------------------------

MegaScryptParser::ArrayGetterContext::ArrayGetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MegaScryptParser::ArrayGetterContext::Id() {
  return getToken(MegaScryptParser::Id, 0);
}

std::vector<MegaScryptParser::ExpressionContext *> MegaScryptParser::ArrayGetterContext::expression() {
  return getRuleContexts<MegaScryptParser::ExpressionContext>();
}

MegaScryptParser::ExpressionContext* MegaScryptParser::ArrayGetterContext::expression(size_t i) {
  return getRuleContext<MegaScryptParser::ExpressionContext>(i);
}


size_t MegaScryptParser::ArrayGetterContext::getRuleIndex() const {
  return MegaScryptParser::RuleArrayGetter;
}


antlrcpp::Any MegaScryptParser::ArrayGetterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitArrayGetter(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::ArrayGetterContext* MegaScryptParser::arrayGetter() {
  ArrayGetterContext *_localctx = _tracker.createInstance<ArrayGetterContext>(_ctx, getState());
  enterRule(_localctx, 40, MegaScryptParser::RuleArrayGetter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(MegaScryptParser::Id);
    setState(281); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(277);
              match(MegaScryptParser::T__14);
              setState(278);
              expression(0);
              setState(279);
              match(MegaScryptParser::T__15);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(283); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrototypeContext ------------------------------------------------------------------

MegaScryptParser::PrototypeContext::PrototypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MegaScryptParser::KeyValuePairContext *> MegaScryptParser::PrototypeContext::keyValuePair() {
  return getRuleContexts<MegaScryptParser::KeyValuePairContext>();
}

MegaScryptParser::KeyValuePairContext* MegaScryptParser::PrototypeContext::keyValuePair(size_t i) {
  return getRuleContext<MegaScryptParser::KeyValuePairContext>(i);
}


size_t MegaScryptParser::PrototypeContext::getRuleIndex() const {
  return MegaScryptParser::RulePrototype;
}


antlrcpp::Any MegaScryptParser::PrototypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitPrototype(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::PrototypeContext* MegaScryptParser::prototype() {
  PrototypeContext *_localctx = _tracker.createInstance<PrototypeContext>(_ctx, getState());
  enterRule(_localctx, 42, MegaScryptParser::RulePrototype);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(285);
    match(MegaScryptParser::T__0);
    setState(286);
    keyValuePair();
    setState(291);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MegaScryptParser::T__4) {
      setState(287);
      match(MegaScryptParser::T__4);
      setState(288);
      keyValuePair();
      setState(293);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(294);
    match(MegaScryptParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrototypeGetterContext ------------------------------------------------------------------

MegaScryptParser::PrototypeGetterContext::PrototypeGetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MegaScryptParser::PrototypeGetterContext::Id() {
  return getTokens(MegaScryptParser::Id);
}

tree::TerminalNode* MegaScryptParser::PrototypeGetterContext::Id(size_t i) {
  return getToken(MegaScryptParser::Id, i);
}

tree::TerminalNode* MegaScryptParser::PrototypeGetterContext::Dot() {
  return getToken(MegaScryptParser::Dot, 0);
}

MegaScryptParser::PrototypeGetterContext* MegaScryptParser::PrototypeGetterContext::prototypeGetter() {
  return getRuleContext<MegaScryptParser::PrototypeGetterContext>(0);
}

MegaScryptParser::ArrayGetterContext* MegaScryptParser::PrototypeGetterContext::arrayGetter() {
  return getRuleContext<MegaScryptParser::ArrayGetterContext>(0);
}


size_t MegaScryptParser::PrototypeGetterContext::getRuleIndex() const {
  return MegaScryptParser::RulePrototypeGetter;
}


antlrcpp::Any MegaScryptParser::PrototypeGetterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitPrototypeGetter(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::PrototypeGetterContext* MegaScryptParser::prototypeGetter() {
  PrototypeGetterContext *_localctx = _tracker.createInstance<PrototypeGetterContext>(_ctx, getState());
  enterRule(_localctx, 44, MegaScryptParser::RulePrototypeGetter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    match(MegaScryptParser::Id);
    setState(297);
    match(MegaScryptParser::Dot);
    setState(301);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(298);
      match(MegaScryptParser::Id);
      break;
    }

    case 2: {
      setState(299);
      prototypeGetter();
      break;
    }

    case 3: {
      setState(300);
      arrayGetter();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyValuePairContext ------------------------------------------------------------------

MegaScryptParser::KeyValuePairContext::KeyValuePairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MegaScryptParser::KeyValuePairContext::Id() {
  return getToken(MegaScryptParser::Id, 0);
}

MegaScryptParser::ArrayContext* MegaScryptParser::KeyValuePairContext::array() {
  return getRuleContext<MegaScryptParser::ArrayContext>(0);
}

MegaScryptParser::ExpressionContext* MegaScryptParser::KeyValuePairContext::expression() {
  return getRuleContext<MegaScryptParser::ExpressionContext>(0);
}

MegaScryptParser::PrototypeContext* MegaScryptParser::KeyValuePairContext::prototype() {
  return getRuleContext<MegaScryptParser::PrototypeContext>(0);
}


size_t MegaScryptParser::KeyValuePairContext::getRuleIndex() const {
  return MegaScryptParser::RuleKeyValuePair;
}


antlrcpp::Any MegaScryptParser::KeyValuePairContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitKeyValuePair(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::KeyValuePairContext* MegaScryptParser::keyValuePair() {
  KeyValuePairContext *_localctx = _tracker.createInstance<KeyValuePairContext>(_ctx, getState());
  enterRule(_localctx, 46, MegaScryptParser::RuleKeyValuePair);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    match(MegaScryptParser::Id);
    setState(304);
    match(MegaScryptParser::T__16);
    setState(308);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(305);
      array();
      break;
    }

    case 2: {
      setState(306);
      expression(0);
      break;
    }

    case 3: {
      setState(307);
      prototype();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementContext ------------------------------------------------------------------

MegaScryptParser::IncrementContext::IncrementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MegaScryptParser::IncrementContext::Id() {
  return getToken(MegaScryptParser::Id, 0);
}

tree::TerminalNode* MegaScryptParser::IncrementContext::PlusPlus() {
  return getToken(MegaScryptParser::PlusPlus, 0);
}

tree::TerminalNode* MegaScryptParser::IncrementContext::MinusMinus() {
  return getToken(MegaScryptParser::MinusMinus, 0);
}


size_t MegaScryptParser::IncrementContext::getRuleIndex() const {
  return MegaScryptParser::RuleIncrement;
}


antlrcpp::Any MegaScryptParser::IncrementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MegaScryptVisitor*>(visitor))
    return parserVisitor->visitIncrement(this);
  else
    return visitor->visitChildren(this);
}

MegaScryptParser::IncrementContext* MegaScryptParser::increment() {
  IncrementContext *_localctx = _tracker.createInstance<IncrementContext>(_ctx, getState());
  enterRule(_localctx, 48, MegaScryptParser::RuleIncrement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(314);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MegaScryptParser::PlusPlus:
      case MegaScryptParser::MinusMinus: {
        enterOuterAlt(_localctx, 1);
        setState(310);
        _la = _input->LA(1);
        if (!(_la == MegaScryptParser::PlusPlus

        || _la == MegaScryptParser::MinusMinus)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(311);
        match(MegaScryptParser::Id);
        break;
      }

      case MegaScryptParser::Id: {
        enterOuterAlt(_localctx, 2);
        setState(312);
        match(MegaScryptParser::Id);
        setState(313);
        _la = _input->LA(1);
        if (!(_la == MegaScryptParser::PlusPlus

        || _la == MegaScryptParser::MinusMinus)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MegaScryptParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 18: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MegaScryptParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);
    case 5: return precpred(_ctx, 2);
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MegaScryptParser::_decisionToDFA;
atn::PredictionContextCache MegaScryptParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MegaScryptParser::_atn;
std::vector<uint16_t> MegaScryptParser::_serializedATN;

std::vector<std::string> MegaScryptParser::_ruleNames = {
  "program", "block", "statement", "subStatement", "functDeclaration", "varList", 
  "returnStmt", "invocation", "paramList", "ifStatement", "elseIfStatement", 
  "elseStatement", "declaration", "assignment", "whileStmt", "doWhileStmt", 
  "forEachStmt", "forStmt", "expression", "array", "arrayGetter", "prototype", 
  "prototypeGetter", "keyValuePair", "increment"
};

std::vector<std::string> MegaScryptParser::_literalNames = {
  "", "'{'", "'}'", "';'", "'function'", "','", "'return'", "'if'", "'else if'", 
  "'else'", "'while'", "'do'", "'foreach'", "'in'", "'for'", "'['", "']'", 
  "':'", "'var'", "'true'", "'false'", "'null'", "'break'", "'.'", "'++'", 
  "'--'", "'!'", "'_'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'", 
  "'<'", "'<='", "'>'", "'>='", "'=='", "'!='", "'&&'", "'||'", "'='", "'+='", 
  "'-='", "'*='", "'/='"
};

std::vector<std::string> MegaScryptParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "Var", "True", "False", "Null", "Break", "Dot", "PlusPlus", "MinusMinus", 
  "Exclaimation", "Underscore", "Plus", "Minus", "Multiply", "Divide", "Modulas", 
  "LeftParanthesis", "RightParanthesis", "LessThan", "LessThanEquals", "GreaterThan", 
  "GreaterThanEquals", "DoubleEquals", "NotEquals", "DoubleAmp", "DoubleLambda", 
  "Equals", "PlusEquals", "MinusEquals", "MultiplyEquals", "DivideEquals", 
  "Id", "Number", "String", "Whitespace"
};

dfa::Vocabulary MegaScryptParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MegaScryptParser::_tokenNames;

MegaScryptParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x35, 0x13f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x3, 0x2, 0x3, 0x2, 
    0x7, 0x2, 0x37, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x3a, 0xb, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x7, 0x3, 0x3e, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x41, 0xb, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x45, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x5, 0x4, 0x4a, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x52, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x58, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x5d, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x62, 
    0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x65, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x6e, 0xa, 0x7, 
    0xc, 0x7, 0xe, 0x7, 0x71, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x75, 
    0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x79, 0xa, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x82, 
    0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x85, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x8d, 0xa, 0xb, 0xc, 0xb, 
    0xe, 0xb, 0x90, 0xb, 0xb, 0x3, 0xb, 0x5, 0xb, 0x93, 0xa, 0xb, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x5, 0xe, 0xa4, 0xa, 0xe, 0x5, 0xe, 0xa6, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0xab, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0xb1, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 
    0xb6, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xba, 0xa, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x5, 0x13, 0xd7, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xf5, 0xa, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x10c, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 
    0x10f, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x113, 0xa, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x6, 0x16, 0x11c, 0xa, 0x16, 0xd, 0x16, 0xe, 0x16, 0x11d, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x124, 0xa, 0x17, 
    0xc, 0x17, 0xe, 0x17, 0x127, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x130, 0xa, 0x18, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x137, 
    0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x13d, 
    0xa, 0x1a, 0x3, 0x1a, 0x2, 0x3, 0x26, 0x1b, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x2, 0x9, 0x3, 0x2, 
    0x2e, 0x31, 0x3, 0x2, 0x20, 0x22, 0x3, 0x2, 0x1e, 0x1f, 0x3, 0x2, 0x25, 
    0x26, 0x3, 0x2, 0x27, 0x28, 0x3, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x1a, 0x1b, 
    0x2, 0x163, 0x2, 0x38, 0x3, 0x2, 0x2, 0x2, 0x4, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x51, 0x3, 0x2, 0x2, 0x2, 0x8, 0x57, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0xc, 0x68, 0x3, 0x2, 0x2, 0x2, 0xe, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x78, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x86, 0x3, 0x2, 0x2, 0x2, 0x16, 0x94, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x9d, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x22, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xd2, 0x3, 0x2, 0x2, 0x2, 0x26, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x28, 0x110, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x116, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x11f, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x30, 0x131, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 0x5, 0x6, 0x4, 
    0x2, 0x35, 0x37, 0x5, 0x4, 0x3, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3f, 0x7, 
    0x3, 0x2, 0x2, 0x3c, 0x3e, 0x5, 0x6, 0x4, 0x2, 0x3d, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x3, 0x2, 0x2, 0x2, 
    0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x45, 0x7, 0x4, 0x2, 0x2, 0x43, 
    0x45, 0x5, 0x6, 0x4, 0x2, 0x44, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x44, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x5, 0x3, 0x2, 0x2, 0x2, 0x46, 0x4a, 0x5, 
    0x8, 0x5, 0x2, 0x47, 0x4a, 0x5, 0xe, 0x8, 0x2, 0x48, 0x4a, 0x7, 0x18, 
    0x2, 0x2, 0x49, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x4b, 0x52, 0x7, 0x5, 0x2, 0x2, 0x4c, 0x52, 0x5, 0x14, 0xb, 0x2, 0x4d, 
    0x52, 0x5, 0x1e, 0x10, 0x2, 0x4e, 0x52, 0x5, 0x20, 0x11, 0x2, 0x4f, 
    0x52, 0x5, 0x22, 0x12, 0x2, 0x50, 0x52, 0x5, 0x24, 0x13, 0x2, 0x51, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x51, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x53, 0x58, 0x5, 0x1a, 0xe, 0x2, 0x54, 0x58, 0x5, 0x1c, 0xf, 
    0x2, 0x55, 0x58, 0x5, 0x32, 0x1a, 0x2, 0x56, 0x58, 0x5, 0x10, 0x9, 0x2, 
    0x57, 0x53, 0x3, 0x2, 0x2, 0x2, 0x57, 0x54, 0x3, 0x2, 0x2, 0x2, 0x57, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x6, 0x2, 0x2, 0x5a, 0x5c, 0x7, 
    0x23, 0x2, 0x2, 0x5b, 0x5d, 0x5, 0xc, 0x7, 0x2, 0x5c, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 
    0x2, 0x5e, 0x5f, 0x7, 0x24, 0x2, 0x2, 0x5f, 0x63, 0x7, 0x3, 0x2, 0x2, 
    0x60, 0x62, 0x5, 0x6, 0x4, 0x2, 0x61, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x66, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x67, 0x7, 0x4, 0x2, 0x2, 0x67, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x69, 0x7, 0x14, 0x2, 0x2, 0x69, 0x6f, 0x7, 0x32, 0x2, 
    0x2, 0x6a, 0x6b, 0x7, 0x7, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x14, 0x2, 0x2, 
    0x6c, 0x6e, 0x7, 0x32, 0x2, 0x2, 0x6d, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0xd, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x74, 0x7, 0x8, 0x2, 0x2, 0x73, 0x75, 0x5, 0x26, 
    0x14, 0x2, 0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0xf, 0x3, 0x2, 0x2, 0x2, 0x76, 0x79, 0x7, 0x32, 0x2, 0x2, 
    0x77, 0x79, 0x5, 0x2e, 0x18, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 
    0x7, 0x23, 0x2, 0x2, 0x7b, 0x7c, 0x5, 0x12, 0xa, 0x2, 0x7c, 0x7d, 0x7, 
    0x24, 0x2, 0x2, 0x7d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x83, 0x5, 0x26, 
    0x14, 0x2, 0x7f, 0x80, 0x7, 0x7, 0x2, 0x2, 0x80, 0x82, 0x5, 0x26, 0x14, 
    0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x82, 0x85, 0x3, 0x2, 0x2, 0x2, 
    0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x85, 0x83, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 
    0x7, 0x9, 0x2, 0x2, 0x87, 0x88, 0x7, 0x23, 0x2, 0x2, 0x88, 0x89, 0x5, 
    0x26, 0x14, 0x2, 0x89, 0x8a, 0x7, 0x24, 0x2, 0x2, 0x8a, 0x92, 0x5, 0x4, 
    0x3, 0x2, 0x8b, 0x8d, 0x5, 0x16, 0xc, 0x2, 0x8c, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0x8d, 0x90, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x91, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x8e, 0x3, 0x2, 0x2, 0x2, 0x91, 0x93, 0x5, 0x18, 0xd, 0x2, 0x92, 0x8e, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0xa, 0x2, 0x2, 0x95, 0x96, 0x7, 0x23, 
    0x2, 0x2, 0x96, 0x97, 0x5, 0x26, 0x14, 0x2, 0x97, 0x98, 0x7, 0x24, 0x2, 
    0x2, 0x98, 0x99, 0x5, 0x4, 0x3, 0x2, 0x99, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x9b, 0x7, 0xb, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0x4, 0x3, 0x2, 0x9c, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x14, 0x2, 0x2, 0x9e, 0xa5, 
    0x7, 0x32, 0x2, 0x2, 0x9f, 0xa3, 0x7, 0x2d, 0x2, 0x2, 0xa0, 0xa4, 0x5, 
    0x26, 0x14, 0x2, 0xa1, 0xa4, 0x5, 0x2c, 0x17, 0x2, 0xa2, 0xa4, 0x5, 
    0x28, 0x15, 0x2, 0xa3, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 
    0x2, 0x2, 0xa3, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa6, 0x3, 0x2, 0x2, 
    0x2, 0xa5, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xab, 0x7, 0x32, 0x2, 0x2, 0xa8, 
    0xab, 0x5, 0x2e, 0x18, 0x2, 0xa9, 0xab, 0x5, 0x2a, 0x16, 0x2, 0xaa, 
    0xa7, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa9, 
    0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xb0, 0x7, 
    0x2d, 0x2, 0x2, 0xad, 0xb1, 0x5, 0x26, 0x14, 0x2, 0xae, 0xb1, 0x5, 0x2c, 
    0x17, 0x2, 0xaf, 0xb1, 0x5, 0x28, 0x15, 0x2, 0xb0, 0xad, 0x3, 0x2, 0x2, 
    0x2, 0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0xb1, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb6, 0x7, 0x32, 0x2, 0x2, 0xb3, 
    0xb6, 0x5, 0x2e, 0x18, 0x2, 0xb4, 0xb6, 0x5, 0x2a, 0x16, 0x2, 0xb5, 
    0xb2, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb4, 
    0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x9, 
    0x2, 0x2, 0x2, 0xb8, 0xba, 0x5, 0x26, 0x14, 0x2, 0xb9, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0xb9, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xba, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0xbb, 0xbc, 0x7, 0xc, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x23, 0x2, 0x2, 
    0xbd, 0xbe, 0x5, 0x26, 0x14, 0x2, 0xbe, 0xbf, 0x7, 0x24, 0x2, 0x2, 0xbf, 
    0xc0, 0x5, 0x4, 0x3, 0x2, 0xc0, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 
    0x7, 0xd, 0x2, 0x2, 0xc2, 0xc3, 0x5, 0x4, 0x3, 0x2, 0xc3, 0xc4, 0x7, 
    0xc, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x23, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0x26, 
    0x14, 0x2, 0xc6, 0xc7, 0x7, 0x24, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x5, 0x2, 
    0x2, 0xc8, 0x21, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x7, 0xe, 0x2, 0x2, 
    0xca, 0xcb, 0x7, 0x23, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x14, 0x2, 0x2, 0xcc, 
    0xcd, 0x7, 0x32, 0x2, 0x2, 0xcd, 0xce, 0x7, 0xf, 0x2, 0x2, 0xce, 0xcf, 
    0x5, 0x26, 0x14, 0x2, 0xcf, 0xd0, 0x7, 0x24, 0x2, 0x2, 0xd0, 0xd1, 0x5, 
    0x4, 0x3, 0x2, 0xd1, 0x23, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x10, 
    0x2, 0x2, 0xd3, 0xd6, 0x7, 0x23, 0x2, 0x2, 0xd4, 0xd7, 0x5, 0x1a, 0xe, 
    0x2, 0xd5, 0xd7, 0x5, 0x1c, 0xf, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0xd6, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd8, 
    0xd9, 0x7, 0x5, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x26, 0x14, 0x2, 0xda, 0xdb, 
    0x7, 0x5, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x8, 0x5, 0x2, 0xdc, 0xdd, 0x7, 
    0x24, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x4, 0x3, 0x2, 0xde, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xe0, 0x8, 0x14, 0x1, 0x2, 0xe0, 0xf5, 0x7, 0x33, 0x2, 
    0x2, 0xe1, 0xf5, 0x7, 0x32, 0x2, 0x2, 0xe2, 0xf5, 0x7, 0x34, 0x2, 0x2, 
    0xe3, 0xf5, 0x7, 0x15, 0x2, 0x2, 0xe4, 0xf5, 0x7, 0x16, 0x2, 0x2, 0xe5, 
    0xf5, 0x5, 0x32, 0x1a, 0x2, 0xe6, 0xf5, 0x7, 0x17, 0x2, 0x2, 0xe7, 0xf5, 
    0x5, 0x2e, 0x18, 0x2, 0xe8, 0xf5, 0x5, 0x10, 0x9, 0x2, 0xe9, 0xf5, 0x5, 
    0xa, 0x6, 0x2, 0xea, 0xf5, 0x5, 0x2a, 0x16, 0x2, 0xeb, 0xf5, 0x5, 0x28, 
    0x15, 0x2, 0xec, 0xed, 0x7, 0x23, 0x2, 0x2, 0xed, 0xee, 0x5, 0x26, 0x14, 
    0x2, 0xee, 0xef, 0x7, 0x24, 0x2, 0x2, 0xef, 0xf5, 0x3, 0x2, 0x2, 0x2, 
    0xf0, 0xf1, 0x7, 0x1f, 0x2, 0x2, 0xf1, 0xf5, 0x5, 0x26, 0x14, 0xb, 0xf2, 
    0xf3, 0x7, 0x1c, 0x2, 0x2, 0xf3, 0xf5, 0x5, 0x26, 0x14, 0xa, 0xf4, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xf4, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xe2, 0x3, 
    0x2, 0x2, 0x2, 0xf4, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xe4, 0x3, 0x2, 
    0x2, 0x2, 0xf4, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xe6, 0x3, 0x2, 0x2, 
    0x2, 0xf4, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xe8, 0x3, 0x2, 0x2, 0x2, 
    0xf4, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xea, 0x3, 0x2, 0x2, 0x2, 0xf4, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xec, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf0, 
    0x3, 0x2, 0x2, 0x2, 0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf5, 0x10d, 0x3, 
    0x2, 0x2, 0x2, 0xf6, 0xf7, 0xc, 0x9, 0x2, 0x2, 0xf7, 0xf8, 0x9, 0x3, 
    0x2, 0x2, 0xf8, 0x10c, 0x5, 0x26, 0x14, 0xa, 0xf9, 0xfa, 0xc, 0x8, 0x2, 
    0x2, 0xfa, 0xfb, 0x9, 0x4, 0x2, 0x2, 0xfb, 0x10c, 0x5, 0x26, 0x14, 0x9, 
    0xfc, 0xfd, 0xc, 0x7, 0x2, 0x2, 0xfd, 0xfe, 0x9, 0x5, 0x2, 0x2, 0xfe, 
    0x10c, 0x5, 0x26, 0x14, 0x8, 0xff, 0x100, 0xc, 0x6, 0x2, 0x2, 0x100, 
    0x101, 0x9, 0x6, 0x2, 0x2, 0x101, 0x10c, 0x5, 0x26, 0x14, 0x7, 0x102, 
    0x103, 0xc, 0x5, 0x2, 0x2, 0x103, 0x104, 0x9, 0x7, 0x2, 0x2, 0x104, 
    0x10c, 0x5, 0x26, 0x14, 0x6, 0x105, 0x106, 0xc, 0x4, 0x2, 0x2, 0x106, 
    0x107, 0x7, 0x2b, 0x2, 0x2, 0x107, 0x10c, 0x5, 0x26, 0x14, 0x5, 0x108, 
    0x109, 0xc, 0x3, 0x2, 0x2, 0x109, 0x10a, 0x7, 0x2c, 0x2, 0x2, 0x10a, 
    0x10c, 0x5, 0x26, 0x14, 0x4, 0x10b, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x10b, 
    0xf9, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xff, 
    0x3, 0x2, 0x2, 0x2, 0x10b, 0x102, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0x10b, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10f, 
    0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 
    0x3, 0x2, 0x2, 0x2, 0x10e, 0x27, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10d, 0x3, 
    0x2, 0x2, 0x2, 0x110, 0x112, 0x7, 0x11, 0x2, 0x2, 0x111, 0x113, 0x5, 
    0x12, 0xa, 0x2, 0x112, 0x111, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x3, 
    0x2, 0x2, 0x2, 0x113, 0x114, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x7, 
    0x12, 0x2, 0x2, 0x115, 0x29, 0x3, 0x2, 0x2, 0x2, 0x116, 0x11b, 0x7, 
    0x32, 0x2, 0x2, 0x117, 0x118, 0x7, 0x11, 0x2, 0x2, 0x118, 0x119, 0x5, 
    0x26, 0x14, 0x2, 0x119, 0x11a, 0x7, 0x12, 0x2, 0x2, 0x11a, 0x11c, 0x3, 
    0x2, 0x2, 0x2, 0x11b, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x3, 
    0x2, 0x2, 0x2, 0x11e, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x7, 0x3, 
    0x2, 0x2, 0x120, 0x125, 0x5, 0x30, 0x19, 0x2, 0x121, 0x122, 0x7, 0x7, 
    0x2, 0x2, 0x122, 0x124, 0x5, 0x30, 0x19, 0x2, 0x123, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x124, 0x127, 0x3, 0x2, 0x2, 0x2, 0x125, 0x123, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x128, 0x3, 0x2, 
    0x2, 0x2, 0x127, 0x125, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x7, 0x4, 
    0x2, 0x2, 0x129, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0x32, 
    0x2, 0x2, 0x12b, 0x12f, 0x7, 0x19, 0x2, 0x2, 0x12c, 0x130, 0x7, 0x32, 
    0x2, 0x2, 0x12d, 0x130, 0x5, 0x2e, 0x18, 0x2, 0x12e, 0x130, 0x5, 0x2a, 
    0x16, 0x2, 0x12f, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 0x3, 0x2, 
    0x2, 0x2, 0x12f, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x131, 0x132, 0x7, 0x32, 0x2, 0x2, 0x132, 0x136, 0x7, 0x13, 0x2, 
    0x2, 0x133, 0x137, 0x5, 0x28, 0x15, 0x2, 0x134, 0x137, 0x5, 0x26, 0x14, 
    0x2, 0x135, 0x137, 0x5, 0x2c, 0x17, 0x2, 0x136, 0x133, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x134, 0x3, 0x2, 0x2, 0x2, 0x136, 0x135, 0x3, 0x2, 0x2, 
    0x2, 0x137, 0x31, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x9, 0x8, 0x2, 0x2, 
    0x139, 0x13d, 0x7, 0x32, 0x2, 0x2, 0x13a, 0x13b, 0x7, 0x32, 0x2, 0x2, 
    0x13b, 0x13d, 0x9, 0x8, 0x2, 0x2, 0x13c, 0x138, 0x3, 0x2, 0x2, 0x2, 
    0x13c, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x33, 0x3, 0x2, 0x2, 0x2, 0x21, 
    0x36, 0x38, 0x3f, 0x44, 0x49, 0x51, 0x57, 0x5c, 0x63, 0x6f, 0x74, 0x78, 
    0x83, 0x8e, 0x92, 0xa3, 0xa5, 0xaa, 0xb0, 0xb5, 0xb9, 0xd6, 0xf4, 0x10b, 
    0x10d, 0x112, 0x11d, 0x125, 0x12f, 0x136, 0x13c, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MegaScryptParser::Initializer MegaScryptParser::_init;
