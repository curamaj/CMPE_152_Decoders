
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from C.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  CLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, INTEGER = 12, FLOAT = 13, 
    VOID = 14, RETURN = 15, IF = 16, TRUE = 17, FALSE = 18, MAIN = 19, DO = 20, 
    WHILE = 21, IDENTIFIER = 22, PRINT_IDENTIFIER = 23, INTEGER_NUM = 24, 
    FLOAT_NUM = 25, MUL_OP = 26, DIV_OP = 27, ADD_OP = 28, SUB_OP = 29, 
    EQ_OP = 30, NE_OP = 31, LT_OP = 32, LE_OP = 33, GT_OP = 34, GE_OP = 35, 
    NEWLINE = 36, WS = 37
  };

  CLexer(antlr4::CharStream *input);
  ~CLexer();

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

