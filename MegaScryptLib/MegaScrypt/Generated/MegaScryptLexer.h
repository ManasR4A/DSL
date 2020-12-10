
// Generated from MegaScrypt.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  MegaScryptLexer : public antlr4::Lexer {
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

  MegaScryptLexer(antlr4::CharStream *input);
  ~MegaScryptLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

