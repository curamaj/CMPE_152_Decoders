
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from C.g4 by ANTLR 4.7.2


#include "CVisitor.h"

#include "CParser.h"


using namespace antlrcpp;
using namespace antlr4;

CParser::CParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CParser::~CParser() {
  delete _interpreter;
}

std::string CParser::getGrammarFileName() const {
  return "C.g4";
}

const std::vector<std::string>& CParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

CParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::HeaderContext* CParser::ProgramContext::header() {
  return getRuleContext<CParser::HeaderContext>(0);
}

CParser::Main_blockContext* CParser::ProgramContext::main_block() {
  return getRuleContext<CParser::Main_blockContext>(0);
}

std::vector<CParser::FuncContext *> CParser::ProgramContext::func() {
  return getRuleContexts<CParser::FuncContext>();
}

CParser::FuncContext* CParser::ProgramContext::func(size_t i) {
  return getRuleContext<CParser::FuncContext>(i);
}


size_t CParser::ProgramContext::getRuleIndex() const {
  return CParser::RuleProgram;
}


antlrcpp::Any CParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

CParser::ProgramContext* CParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, CParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(93);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(90);
        func(); 
      }
      setState(95);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(96);
    header();
    setState(97);
    main_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

CParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::HeaderContext::VOID() {
  return getToken(CParser::VOID, 0);
}

tree::TerminalNode* CParser::HeaderContext::MAIN() {
  return getToken(CParser::MAIN, 0);
}

std::vector<CParser::Parm_decl_listContext *> CParser::HeaderContext::parm_decl_list() {
  return getRuleContexts<CParser::Parm_decl_listContext>();
}

CParser::Parm_decl_listContext* CParser::HeaderContext::parm_decl_list(size_t i) {
  return getRuleContext<CParser::Parm_decl_listContext>(i);
}


size_t CParser::HeaderContext::getRuleIndex() const {
  return CParser::RuleHeader;
}


antlrcpp::Any CParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

CParser::HeaderContext* CParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, CParser::RuleHeader);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(CParser::VOID);
    setState(100);
    match(CParser::MAIN);
    setState(101);
    match(CParser::T__0);
    setState(105);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::INTEGER)
      | (1ULL << CParser::FLOAT)
      | (1ULL << CParser::VOID))) != 0)) {
      setState(102);
      parm_decl_list();
      setState(107);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(108);
    match(CParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Main_blockContext ------------------------------------------------------------------

CParser::Main_blockContext::Main_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::MainContext* CParser::Main_blockContext::main() {
  return getRuleContext<CParser::MainContext>(0);
}

CParser::Decl_listContext* CParser::Main_blockContext::decl_list() {
  return getRuleContext<CParser::Decl_listContext>(0);
}


size_t CParser::Main_blockContext::getRuleIndex() const {
  return CParser::RuleMain_block;
}


antlrcpp::Any CParser::Main_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMain_block(this);
  else
    return visitor->visitChildren(this);
}

CParser::Main_blockContext* CParser::main_block() {
  Main_blockContext *_localctx = _tracker.createInstance<Main_blockContext>(_ctx, getState());
  enterRule(_localctx, 4, CParser::RuleMain_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    match(CParser::T__2);
    setState(112);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::INTEGER)
      | (1ULL << CParser::FLOAT)
      | (1ULL << CParser::VOID))) != 0)) {
      setState(111);
      decl_list();
    }
    setState(114);
    main();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainContext ------------------------------------------------------------------

CParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::Main_closingContext* CParser::MainContext::main_closing() {
  return getRuleContext<CParser::Main_closingContext>(0);
}

CParser::Stmt_listContext* CParser::MainContext::stmt_list() {
  return getRuleContext<CParser::Stmt_listContext>(0);
}


size_t CParser::MainContext::getRuleIndex() const {
  return CParser::RuleMain;
}


antlrcpp::Any CParser::MainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMain(this);
  else
    return visitor->visitChildren(this);
}

CParser::MainContext* CParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 6, CParser::RuleMain);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__7)
      | (1ULL << CParser::IF)
      | (1ULL << CParser::DO)
      | (1ULL << CParser::IDENTIFIER))) != 0)) {
      setState(116);
      stmt_list();
    }
    setState(119);
    main_closing();
    setState(120);
    match(CParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Main_closingContext ------------------------------------------------------------------

CParser::Main_closingContext::Main_closingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::Main_closingContext::RETURN() {
  return getToken(CParser::RETURN, 0);
}


size_t CParser::Main_closingContext::getRuleIndex() const {
  return CParser::RuleMain_closing;
}


antlrcpp::Any CParser::Main_closingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMain_closing(this);
  else
    return visitor->visitChildren(this);
}

CParser::Main_closingContext* CParser::main_closing() {
  Main_closingContext *_localctx = _tracker.createInstance<Main_closingContext>(_ctx, getState());
  enterRule(_localctx, 8, CParser::RuleMain_closing);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(CParser::RETURN);
    setState(123);
    match(CParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decl_listContext ------------------------------------------------------------------

CParser::Decl_listContext::Decl_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::Var_listContext *> CParser::Decl_listContext::var_list() {
  return getRuleContexts<CParser::Var_listContext>();
}

CParser::Var_listContext* CParser::Decl_listContext::var_list(size_t i) {
  return getRuleContext<CParser::Var_listContext>(i);
}


size_t CParser::Decl_listContext::getRuleIndex() const {
  return CParser::RuleDecl_list;
}


antlrcpp::Any CParser::Decl_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDecl_list(this);
  else
    return visitor->visitChildren(this);
}

CParser::Decl_listContext* CParser::decl_list() {
  Decl_listContext *_localctx = _tracker.createInstance<Decl_listContext>(_ctx, getState());
  enterRule(_localctx, 10, CParser::RuleDecl_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(125);
    var_list();
    setState(130);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(126);
        match(CParser::T__4);
        setState(127);
        var_list(); 
      }
      setState(132);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(133);
    match(CParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_listContext ------------------------------------------------------------------

CParser::Var_listContext::Var_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::Var_typeContext* CParser::Var_listContext::var_type() {
  return getRuleContext<CParser::Var_typeContext>(0);
}

std::vector<CParser::Var_nameContext *> CParser::Var_listContext::var_name() {
  return getRuleContexts<CParser::Var_nameContext>();
}

CParser::Var_nameContext* CParser::Var_listContext::var_name(size_t i) {
  return getRuleContext<CParser::Var_nameContext>(i);
}


size_t CParser::Var_listContext::getRuleIndex() const {
  return CParser::RuleVar_list;
}


antlrcpp::Any CParser::Var_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitVar_list(this);
  else
    return visitor->visitChildren(this);
}

CParser::Var_listContext* CParser::var_list() {
  Var_listContext *_localctx = _tracker.createInstance<Var_listContext>(_ctx, getState());
  enterRule(_localctx, 12, CParser::RuleVar_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    var_type();
    setState(136);
    var_name();
    setState(141);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::T__5) {
      setState(137);
      match(CParser::T__5);
      setState(138);
      var_name();
      setState(143);
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

//----------------- Var_nameContext ------------------------------------------------------------------

CParser::Var_nameContext::Var_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::Var_nameContext::IDENTIFIER() {
  return getToken(CParser::IDENTIFIER, 0);
}


size_t CParser::Var_nameContext::getRuleIndex() const {
  return CParser::RuleVar_name;
}


antlrcpp::Any CParser::Var_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitVar_name(this);
  else
    return visitor->visitChildren(this);
}

CParser::Var_nameContext* CParser::var_name() {
  Var_nameContext *_localctx = _tracker.createInstance<Var_nameContext>(_ctx, getState());
  enterRule(_localctx, 14, CParser::RuleVar_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(CParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_typeContext ------------------------------------------------------------------

CParser::Var_typeContext::Var_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::TypesContext* CParser::Var_typeContext::types() {
  return getRuleContext<CParser::TypesContext>(0);
}


size_t CParser::Var_typeContext::getRuleIndex() const {
  return CParser::RuleVar_type;
}


antlrcpp::Any CParser::Var_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitVar_type(this);
  else
    return visitor->visitChildren(this);
}

CParser::Var_typeContext* CParser::var_type() {
  Var_typeContext *_localctx = _tracker.createInstance<Var_typeContext>(_ctx, getState());
  enterRule(_localctx, 16, CParser::RuleVar_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    types();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypesContext ------------------------------------------------------------------

CParser::TypesContext::TypesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CParser::TypesContext::getRuleIndex() const {
  return CParser::RuleTypes;
}

void CParser::TypesContext::copyFrom(TypesContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- FloatTypeContext ------------------------------------------------------------------

tree::TerminalNode* CParser::FloatTypeContext::FLOAT() {
  return getToken(CParser::FLOAT, 0);
}

CParser::FloatTypeContext::FloatTypeContext(TypesContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::FloatTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFloatType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerTypeContext ------------------------------------------------------------------

tree::TerminalNode* CParser::IntegerTypeContext::INTEGER() {
  return getToken(CParser::INTEGER, 0);
}

CParser::IntegerTypeContext::IntegerTypeContext(TypesContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::IntegerTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitIntegerType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VoidTypeContext ------------------------------------------------------------------

tree::TerminalNode* CParser::VoidTypeContext::VOID() {
  return getToken(CParser::VOID, 0);
}

CParser::VoidTypeContext::VoidTypeContext(TypesContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::VoidTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitVoidType(this);
  else
    return visitor->visitChildren(this);
}
CParser::TypesContext* CParser::types() {
  TypesContext *_localctx = _tracker.createInstance<TypesContext>(_ctx, getState());
  enterRule(_localctx, 18, CParser::RuleTypes);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::INTEGER: {
        _localctx = dynamic_cast<TypesContext *>(_tracker.createInstance<CParser::IntegerTypeContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(148);
        match(CParser::INTEGER);
        break;
      }

      case CParser::FLOAT: {
        _localctx = dynamic_cast<TypesContext *>(_tracker.createInstance<CParser::FloatTypeContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(149);
        match(CParser::FLOAT);
        break;
      }

      case CParser::VOID: {
        _localctx = dynamic_cast<TypesContext *>(_tracker.createInstance<CParser::VoidTypeContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(150);
        match(CParser::VOID);
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

//----------------- StmtContext ------------------------------------------------------------------

CParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CParser::StmtContext::getRuleIndex() const {
  return CParser::RuleStmt;
}

void CParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FuncAssignmentStmtContext ------------------------------------------------------------------

CParser::Func_assignmentContext* CParser::FuncAssignmentStmtContext::func_assignment() {
  return getRuleContext<CParser::Func_assignmentContext>(0);
}

CParser::FuncAssignmentStmtContext::FuncAssignmentStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::FuncAssignmentStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFuncAssignmentStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStmtContext ------------------------------------------------------------------

CParser::If_stmtContext* CParser::IfStmtContext::if_stmt() {
  return getRuleContext<CParser::If_stmtContext>(0);
}

CParser::IfStmtContext::IfStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DoWhileStmtContext ------------------------------------------------------------------

CParser::Do_while_stmtContext* CParser::DoWhileStmtContext::do_while_stmt() {
  return getRuleContext<CParser::Do_while_stmtContext>(0);
}

CParser::DoWhileStmtContext::DoWhileStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::DoWhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDoWhileStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallStmtContext ------------------------------------------------------------------

CParser::Func_callContext* CParser::FuncCallStmtContext::func_call() {
  return getRuleContext<CParser::Func_callContext>(0);
}

CParser::FuncCallStmtContext::FuncCallStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::FuncCallStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFuncCallStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintfStmtContext ------------------------------------------------------------------

CParser::Printf_stmtContext* CParser::PrintfStmtContext::printf_stmt() {
  return getRuleContext<CParser::Printf_stmtContext>(0);
}

CParser::PrintfStmtContext::PrintfStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::PrintfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPrintfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentStmtContext ------------------------------------------------------------------

CParser::Assignment_stmtContext* CParser::AssignmentStmtContext::assignment_stmt() {
  return getRuleContext<CParser::Assignment_stmtContext>(0);
}

CParser::AssignmentStmtContext::AssignmentStmtContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::AssignmentStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAssignmentStmt(this);
  else
    return visitor->visitChildren(this);
}
CParser::StmtContext* CParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 20, CParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<CParser::AssignmentStmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(153);
      assignment_stmt();
      setState(154);
      match(CParser::T__4);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<CParser::IfStmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(156);
      if_stmt();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<CParser::DoWhileStmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(157);
      do_while_stmt();
      setState(158);
      match(CParser::T__4);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<CParser::FuncAssignmentStmtContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(160);
      func_assignment();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<CParser::FuncCallStmtContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(161);
      func_call();
      setState(162);
      match(CParser::T__4);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<CParser::PrintfStmtContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(164);
      printf_stmt();
      setState(165);
      match(CParser::T__4);
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

//----------------- Stmt_listContext ------------------------------------------------------------------

CParser::Stmt_listContext::Stmt_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::StmtContext *> CParser::Stmt_listContext::stmt() {
  return getRuleContexts<CParser::StmtContext>();
}

CParser::StmtContext* CParser::Stmt_listContext::stmt(size_t i) {
  return getRuleContext<CParser::StmtContext>(i);
}


size_t CParser::Stmt_listContext::getRuleIndex() const {
  return CParser::RuleStmt_list;
}


antlrcpp::Any CParser::Stmt_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStmt_list(this);
  else
    return visitor->visitChildren(this);
}

CParser::Stmt_listContext* CParser::stmt_list() {
  Stmt_listContext *_localctx = _tracker.createInstance<Stmt_listContext>(_ctx, getState());
  enterRule(_localctx, 22, CParser::RuleStmt_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    stmt();
    setState(173);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__7)
      | (1ULL << CParser::IF)
      | (1ULL << CParser::DO)
      | (1ULL << CParser::IDENTIFIER))) != 0)) {
      setState(170);
      stmt();
      setState(175);
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

//----------------- Assignment_stmtContext ------------------------------------------------------------------

CParser::Assignment_stmtContext::Assignment_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::VariableContext* CParser::Assignment_stmtContext::variable() {
  return getRuleContext<CParser::VariableContext>(0);
}

CParser::ExprContext* CParser::Assignment_stmtContext::expr() {
  return getRuleContext<CParser::ExprContext>(0);
}


size_t CParser::Assignment_stmtContext::getRuleIndex() const {
  return CParser::RuleAssignment_stmt;
}


antlrcpp::Any CParser::Assignment_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAssignment_stmt(this);
  else
    return visitor->visitChildren(this);
}

CParser::Assignment_stmtContext* CParser::assignment_stmt() {
  Assignment_stmtContext *_localctx = _tracker.createInstance<Assignment_stmtContext>(_ctx, getState());
  enterRule(_localctx, 24, CParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    variable();
    setState(177);
    match(CParser::T__6);
    setState(178);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

CParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::If_partContext* CParser::If_stmtContext::if_part() {
  return getRuleContext<CParser::If_partContext>(0);
}

CParser::Then_partContext* CParser::If_stmtContext::then_part() {
  return getRuleContext<CParser::Then_partContext>(0);
}


size_t CParser::If_stmtContext::getRuleIndex() const {
  return CParser::RuleIf_stmt;
}


antlrcpp::Any CParser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

CParser::If_stmtContext* CParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 26, CParser::RuleIf_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    if_part();
    setState(181);
    then_part();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_partContext ------------------------------------------------------------------

CParser::If_partContext::If_partContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::If_partContext::IF() {
  return getToken(CParser::IF, 0);
}

CParser::If_rel_exprContext* CParser::If_partContext::if_rel_expr() {
  return getRuleContext<CParser::If_rel_exprContext>(0);
}


size_t CParser::If_partContext::getRuleIndex() const {
  return CParser::RuleIf_part;
}


antlrcpp::Any CParser::If_partContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitIf_part(this);
  else
    return visitor->visitChildren(this);
}

CParser::If_partContext* CParser::if_part() {
  If_partContext *_localctx = _tracker.createInstance<If_partContext>(_ctx, getState());
  enterRule(_localctx, 28, CParser::RuleIf_part);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    match(CParser::IF);
    setState(184);
    if_rel_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Then_partContext ------------------------------------------------------------------

CParser::Then_partContext::Then_partContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::Stmt_listContext* CParser::Then_partContext::stmt_list() {
  return getRuleContext<CParser::Stmt_listContext>(0);
}


size_t CParser::Then_partContext::getRuleIndex() const {
  return CParser::RuleThen_part;
}


antlrcpp::Any CParser::Then_partContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitThen_part(this);
  else
    return visitor->visitChildren(this);
}

CParser::Then_partContext* CParser::then_part() {
  Then_partContext *_localctx = _tracker.createInstance<Then_partContext>(_ctx, getState());
  enterRule(_localctx, 30, CParser::RuleThen_part);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    match(CParser::T__2);
    setState(187);
    stmt_list();
    setState(188);
    match(CParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_while_stmtContext ------------------------------------------------------------------

CParser::Do_while_stmtContext::Do_while_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::Do_stmtContext* CParser::Do_while_stmtContext::do_stmt() {
  return getRuleContext<CParser::Do_stmtContext>(0);
}

CParser::While_stmtContext* CParser::Do_while_stmtContext::while_stmt() {
  return getRuleContext<CParser::While_stmtContext>(0);
}


size_t CParser::Do_while_stmtContext::getRuleIndex() const {
  return CParser::RuleDo_while_stmt;
}


antlrcpp::Any CParser::Do_while_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDo_while_stmt(this);
  else
    return visitor->visitChildren(this);
}

CParser::Do_while_stmtContext* CParser::do_while_stmt() {
  Do_while_stmtContext *_localctx = _tracker.createInstance<Do_while_stmtContext>(_ctx, getState());
  enterRule(_localctx, 32, CParser::RuleDo_while_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    do_stmt();
    setState(191);
    while_stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_stmtContext ------------------------------------------------------------------

CParser::Do_stmtContext::Do_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::Do_stmtContext::DO() {
  return getToken(CParser::DO, 0);
}

CParser::Stmt_listContext* CParser::Do_stmtContext::stmt_list() {
  return getRuleContext<CParser::Stmt_listContext>(0);
}


size_t CParser::Do_stmtContext::getRuleIndex() const {
  return CParser::RuleDo_stmt;
}


antlrcpp::Any CParser::Do_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDo_stmt(this);
  else
    return visitor->visitChildren(this);
}

CParser::Do_stmtContext* CParser::do_stmt() {
  Do_stmtContext *_localctx = _tracker.createInstance<Do_stmtContext>(_ctx, getState());
  enterRule(_localctx, 34, CParser::RuleDo_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    match(CParser::DO);
    setState(194);
    match(CParser::T__2);
    setState(195);
    stmt_list();
    setState(196);
    match(CParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_stmtContext ------------------------------------------------------------------

CParser::While_stmtContext::While_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::While_stmtContext::WHILE() {
  return getToken(CParser::WHILE, 0);
}

CParser::Do_while_rel_exprContext* CParser::While_stmtContext::do_while_rel_expr() {
  return getRuleContext<CParser::Do_while_rel_exprContext>(0);
}


size_t CParser::While_stmtContext::getRuleIndex() const {
  return CParser::RuleWhile_stmt;
}


antlrcpp::Any CParser::While_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitWhile_stmt(this);
  else
    return visitor->visitChildren(this);
}

CParser::While_stmtContext* CParser::while_stmt() {
  While_stmtContext *_localctx = _tracker.createInstance<While_stmtContext>(_ctx, getState());
  enterRule(_localctx, 36, CParser::RuleWhile_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(CParser::WHILE);
    setState(199);
    do_while_rel_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_assignmentContext ------------------------------------------------------------------

CParser::Func_assignmentContext::Func_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::Func_nameContext* CParser::Func_assignmentContext::func_name() {
  return getRuleContext<CParser::Func_nameContext>(0);
}

CParser::StmtContext* CParser::Func_assignmentContext::stmt() {
  return getRuleContext<CParser::StmtContext>(0);
}


size_t CParser::Func_assignmentContext::getRuleIndex() const {
  return CParser::RuleFunc_assignment;
}


antlrcpp::Any CParser::Func_assignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunc_assignment(this);
  else
    return visitor->visitChildren(this);
}

CParser::Func_assignmentContext* CParser::func_assignment() {
  Func_assignmentContext *_localctx = _tracker.createInstance<Func_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 38, CParser::RuleFunc_assignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    func_name();
    setState(202);
    match(CParser::T__6);
    setState(203);
    stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_callContext ------------------------------------------------------------------

CParser::Func_callContext::Func_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::Func_nameContext* CParser::Func_callContext::func_name() {
  return getRuleContext<CParser::Func_nameContext>(0);
}

std::vector<CParser::Call_param_listContext *> CParser::Func_callContext::call_param_list() {
  return getRuleContexts<CParser::Call_param_listContext>();
}

CParser::Call_param_listContext* CParser::Func_callContext::call_param_list(size_t i) {
  return getRuleContext<CParser::Call_param_listContext>(i);
}


size_t CParser::Func_callContext::getRuleIndex() const {
  return CParser::RuleFunc_call;
}


antlrcpp::Any CParser::Func_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunc_call(this);
  else
    return visitor->visitChildren(this);
}

CParser::Func_callContext* CParser::func_call() {
  Func_callContext *_localctx = _tracker.createInstance<Func_callContext>(_ctx, getState());
  enterRule(_localctx, 40, CParser::RuleFunc_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    func_name();
    setState(206);
    match(CParser::T__0);
    setState(210);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::TRUE)
      | (1ULL << CParser::FALSE)
      | (1ULL << CParser::IDENTIFIER)
      | (1ULL << CParser::INTEGER_NUM)
      | (1ULL << CParser::FLOAT_NUM)
      | (1ULL << CParser::ADD_OP)
      | (1ULL << CParser::SUB_OP))) != 0)) {
      setState(207);
      call_param_list();
      setState(212);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(213);
    match(CParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_param_listContext ------------------------------------------------------------------

CParser::Call_param_listContext::Call_param_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ParmContext* CParser::Call_param_listContext::parm() {
  return getRuleContext<CParser::ParmContext>(0);
}


size_t CParser::Call_param_listContext::getRuleIndex() const {
  return CParser::RuleCall_param_list;
}


antlrcpp::Any CParser::Call_param_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCall_param_list(this);
  else
    return visitor->visitChildren(this);
}

CParser::Call_param_listContext* CParser::call_param_list() {
  Call_param_listContext *_localctx = _tracker.createInstance<Call_param_listContext>(_ctx, getState());
  enterRule(_localctx, 42, CParser::RuleCall_param_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    parm();
    setState(217);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::T__5) {
      setState(216);
      match(CParser::T__5);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

CParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::Func_declContext* CParser::FuncContext::func_decl() {
  return getRuleContext<CParser::Func_declContext>(0);
}

CParser::Func_blockContext* CParser::FuncContext::func_block() {
  return getRuleContext<CParser::Func_blockContext>(0);
}


size_t CParser::FuncContext::getRuleIndex() const {
  return CParser::RuleFunc;
}


antlrcpp::Any CParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

CParser::FuncContext* CParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 44, CParser::RuleFunc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    func_decl();
    setState(220);
    func_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_declContext ------------------------------------------------------------------

CParser::Func_declContext::Func_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::Var_typeContext* CParser::Func_declContext::var_type() {
  return getRuleContext<CParser::Var_typeContext>(0);
}

CParser::Var_nameContext* CParser::Func_declContext::var_name() {
  return getRuleContext<CParser::Var_nameContext>(0);
}

CParser::Parm_decl_listContext* CParser::Func_declContext::parm_decl_list() {
  return getRuleContext<CParser::Parm_decl_listContext>(0);
}


size_t CParser::Func_declContext::getRuleIndex() const {
  return CParser::RuleFunc_decl;
}


antlrcpp::Any CParser::Func_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunc_decl(this);
  else
    return visitor->visitChildren(this);
}

CParser::Func_declContext* CParser::func_decl() {
  Func_declContext *_localctx = _tracker.createInstance<Func_declContext>(_ctx, getState());
  enterRule(_localctx, 46, CParser::RuleFunc_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    var_type();
    setState(223);
    var_name();
    setState(224);
    match(CParser::T__0);
    setState(226);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::INTEGER)
      | (1ULL << CParser::FLOAT)
      | (1ULL << CParser::VOID))) != 0)) {
      setState(225);
      parm_decl_list();
    }
    setState(228);
    match(CParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_blockContext ------------------------------------------------------------------

CParser::Func_blockContext::Func_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::Func_closingContext* CParser::Func_blockContext::func_closing() {
  return getRuleContext<CParser::Func_closingContext>(0);
}

CParser::Decl_listContext* CParser::Func_blockContext::decl_list() {
  return getRuleContext<CParser::Decl_listContext>(0);
}

CParser::Func_stmt_listContext* CParser::Func_blockContext::func_stmt_list() {
  return getRuleContext<CParser::Func_stmt_listContext>(0);
}


size_t CParser::Func_blockContext::getRuleIndex() const {
  return CParser::RuleFunc_block;
}


antlrcpp::Any CParser::Func_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunc_block(this);
  else
    return visitor->visitChildren(this);
}

CParser::Func_blockContext* CParser::func_block() {
  Func_blockContext *_localctx = _tracker.createInstance<Func_blockContext>(_ctx, getState());
  enterRule(_localctx, 48, CParser::RuleFunc_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    match(CParser::T__2);
    setState(232);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::INTEGER)
      | (1ULL << CParser::FLOAT)
      | (1ULL << CParser::VOID))) != 0)) {
      setState(231);
      decl_list();
    }
    setState(235);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(234);
      func_stmt_list();
      break;
    }

    }
    setState(237);
    func_closing();
    setState(238);
    match(CParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_closingContext ------------------------------------------------------------------

CParser::Func_closingContext::Func_closingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::Func_closingContext::RETURN() {
  return getToken(CParser::RETURN, 0);
}

CParser::Func_nameContext* CParser::Func_closingContext::func_name() {
  return getRuleContext<CParser::Func_nameContext>(0);
}


size_t CParser::Func_closingContext::getRuleIndex() const {
  return CParser::RuleFunc_closing;
}


antlrcpp::Any CParser::Func_closingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunc_closing(this);
  else
    return visitor->visitChildren(this);
}

CParser::Func_closingContext* CParser::func_closing() {
  Func_closingContext *_localctx = _tracker.createInstance<Func_closingContext>(_ctx, getState());
  enterRule(_localctx, 50, CParser::RuleFunc_closing);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(CParser::RETURN);
    setState(241);
    func_name();
    setState(242);
    match(CParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_stmt_listContext ------------------------------------------------------------------

CParser::Func_stmt_listContext::Func_stmt_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CParser::Func_stmt_listContext::getRuleIndex() const {
  return CParser::RuleFunc_stmt_list;
}

void CParser::Func_stmt_listContext::copyFrom(Func_stmt_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Empty_func_stmtContext ------------------------------------------------------------------

CParser::Empty_func_stmtContext::Empty_func_stmtContext(Func_stmt_listContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::Empty_func_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEmpty_func_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Func_add_stmtContext ------------------------------------------------------------------

CParser::Func_addContext* CParser::Func_add_stmtContext::func_add() {
  return getRuleContext<CParser::Func_addContext>(0);
}

CParser::Func_add_stmtContext::Func_add_stmtContext(Func_stmt_listContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::Func_add_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunc_add_stmt(this);
  else
    return visitor->visitChildren(this);
}
CParser::Func_stmt_listContext* CParser::func_stmt_list() {
  Func_stmt_listContext *_localctx = _tracker.createInstance<Func_stmt_listContext>(_ctx, getState());
  enterRule(_localctx, 52, CParser::RuleFunc_stmt_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::IDENTIFIER: {
        _localctx = dynamic_cast<Func_stmt_listContext *>(_tracker.createInstance<CParser::Func_add_stmtContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(244);
        func_add();
        break;
      }

      case CParser::RETURN: {
        _localctx = dynamic_cast<Func_stmt_listContext *>(_tracker.createInstance<CParser::Empty_func_stmtContext>(_localctx));
        enterOuterAlt(_localctx, 2);

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

//----------------- Func_addContext ------------------------------------------------------------------

CParser::Func_addContext::Func_addContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::VariableContext *> CParser::Func_addContext::variable() {
  return getRuleContexts<CParser::VariableContext>();
}

CParser::VariableContext* CParser::Func_addContext::variable(size_t i) {
  return getRuleContext<CParser::VariableContext>(i);
}

tree::TerminalNode* CParser::Func_addContext::ADD_OP() {
  return getToken(CParser::ADD_OP, 0);
}


size_t CParser::Func_addContext::getRuleIndex() const {
  return CParser::RuleFunc_add;
}


antlrcpp::Any CParser::Func_addContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunc_add(this);
  else
    return visitor->visitChildren(this);
}

CParser::Func_addContext* CParser::func_add() {
  Func_addContext *_localctx = _tracker.createInstance<Func_addContext>(_ctx, getState());
  enterRule(_localctx, 54, CParser::RuleFunc_add);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    variable();
    setState(249);
    match(CParser::T__6);
    setState(250);
    variable();
    setState(251);
    match(CParser::ADD_OP);
    setState(252);
    variable();
    setState(253);
    match(CParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parm_decl_listContext ------------------------------------------------------------------

CParser::Parm_decl_listContext::Parm_decl_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::Parm_declContext *> CParser::Parm_decl_listContext::parm_decl() {
  return getRuleContexts<CParser::Parm_declContext>();
}

CParser::Parm_declContext* CParser::Parm_decl_listContext::parm_decl(size_t i) {
  return getRuleContext<CParser::Parm_declContext>(i);
}


size_t CParser::Parm_decl_listContext::getRuleIndex() const {
  return CParser::RuleParm_decl_list;
}


antlrcpp::Any CParser::Parm_decl_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitParm_decl_list(this);
  else
    return visitor->visitChildren(this);
}

CParser::Parm_decl_listContext* CParser::parm_decl_list() {
  Parm_decl_listContext *_localctx = _tracker.createInstance<Parm_decl_listContext>(_ctx, getState());
  enterRule(_localctx, 56, CParser::RuleParm_decl_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    parm_decl();
    setState(260);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::T__5) {
      setState(256);
      match(CParser::T__5);
      setState(257);
      parm_decl();
      setState(262);
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

//----------------- Parm_declContext ------------------------------------------------------------------

CParser::Parm_declContext::Parm_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::Var_typeContext* CParser::Parm_declContext::var_type() {
  return getRuleContext<CParser::Var_typeContext>(0);
}

CParser::Var_nameContext* CParser::Parm_declContext::var_name() {
  return getRuleContext<CParser::Var_nameContext>(0);
}


size_t CParser::Parm_declContext::getRuleIndex() const {
  return CParser::RuleParm_decl;
}


antlrcpp::Any CParser::Parm_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitParm_decl(this);
  else
    return visitor->visitChildren(this);
}

CParser::Parm_declContext* CParser::parm_decl() {
  Parm_declContext *_localctx = _tracker.createInstance<Parm_declContext>(_ctx, getState());
  enterRule(_localctx, 58, CParser::RuleParm_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    var_type();
    setState(264);
    var_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_rel_exprContext ------------------------------------------------------------------

CParser::If_rel_exprContext::If_rel_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::ExprContext *> CParser::If_rel_exprContext::expr() {
  return getRuleContexts<CParser::ExprContext>();
}

CParser::ExprContext* CParser::If_rel_exprContext::expr(size_t i) {
  return getRuleContext<CParser::ExprContext>(i);
}

CParser::Rel_opContext* CParser::If_rel_exprContext::rel_op() {
  return getRuleContext<CParser::Rel_opContext>(0);
}


size_t CParser::If_rel_exprContext::getRuleIndex() const {
  return CParser::RuleIf_rel_expr;
}


antlrcpp::Any CParser::If_rel_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitIf_rel_expr(this);
  else
    return visitor->visitChildren(this);
}

CParser::If_rel_exprContext* CParser::if_rel_expr() {
  If_rel_exprContext *_localctx = _tracker.createInstance<If_rel_exprContext>(_ctx, getState());
  enterRule(_localctx, 60, CParser::RuleIf_rel_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    match(CParser::T__0);
    setState(267);
    expr(0);
    setState(268);
    rel_op();
    setState(269);
    expr(0);
    setState(270);
    match(CParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_while_rel_exprContext ------------------------------------------------------------------

CParser::Do_while_rel_exprContext::Do_while_rel_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CParser::ExprContext *> CParser::Do_while_rel_exprContext::expr() {
  return getRuleContexts<CParser::ExprContext>();
}

CParser::ExprContext* CParser::Do_while_rel_exprContext::expr(size_t i) {
  return getRuleContext<CParser::ExprContext>(i);
}

CParser::Rel_opContext* CParser::Do_while_rel_exprContext::rel_op() {
  return getRuleContext<CParser::Rel_opContext>(0);
}


size_t CParser::Do_while_rel_exprContext::getRuleIndex() const {
  return CParser::RuleDo_while_rel_expr;
}


antlrcpp::Any CParser::Do_while_rel_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDo_while_rel_expr(this);
  else
    return visitor->visitChildren(this);
}

CParser::Do_while_rel_exprContext* CParser::do_while_rel_expr() {
  Do_while_rel_exprContext *_localctx = _tracker.createInstance<Do_while_rel_exprContext>(_ctx, getState());
  enterRule(_localctx, 62, CParser::RuleDo_while_rel_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    match(CParser::T__0);
    setState(273);
    expr(0);
    setState(274);
    rel_op();
    setState(275);
    expr(0);
    setState(276);
    match(CParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Printf_stmtContext ------------------------------------------------------------------

CParser::Printf_stmtContext::Printf_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::Our_stringContext* CParser::Printf_stmtContext::our_string() {
  return getRuleContext<CParser::Our_stringContext>(0);
}

std::vector<CParser::ExprContext *> CParser::Printf_stmtContext::expr() {
  return getRuleContexts<CParser::ExprContext>();
}

CParser::ExprContext* CParser::Printf_stmtContext::expr(size_t i) {
  return getRuleContext<CParser::ExprContext>(i);
}


size_t CParser::Printf_stmtContext::getRuleIndex() const {
  return CParser::RulePrintf_stmt;
}


antlrcpp::Any CParser::Printf_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPrintf_stmt(this);
  else
    return visitor->visitChildren(this);
}

CParser::Printf_stmtContext* CParser::printf_stmt() {
  Printf_stmtContext *_localctx = _tracker.createInstance<Printf_stmtContext>(_ctx, getState());
  enterRule(_localctx, 64, CParser::RulePrintf_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
    match(CParser::T__7);
    setState(279);
    match(CParser::T__8);
    setState(280);
    our_string();
    setState(281);
    match(CParser::T__9);
    setState(286);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::T__5) {
      setState(282);
      match(CParser::T__5);
      setState(283);
      expr(0);
      setState(288);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(289);
    match(CParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Our_stringContext ------------------------------------------------------------------

CParser::Our_stringContext::Our_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::Our_stringContext::IDENTIFIER() {
  return getToken(CParser::IDENTIFIER, 0);
}

tree::TerminalNode* CParser::Our_stringContext::PRINT_IDENTIFIER() {
  return getToken(CParser::PRINT_IDENTIFIER, 0);
}


size_t CParser::Our_stringContext::getRuleIndex() const {
  return CParser::RuleOur_string;
}


antlrcpp::Any CParser::Our_stringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitOur_string(this);
  else
    return visitor->visitChildren(this);
}

CParser::Our_stringContext* CParser::our_string() {
  Our_stringContext *_localctx = _tracker.createInstance<Our_stringContext>(_ctx, getState());
  enterRule(_localctx, 66, CParser::RuleOur_string);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(291);
    match(CParser::IDENTIFIER);
    setState(292);
    match(CParser::T__10);
    setState(293);
    match(CParser::PRINT_IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

CParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::VariableContext::IDENTIFIER() {
  return getToken(CParser::IDENTIFIER, 0);
}


size_t CParser::VariableContext::getRuleIndex() const {
  return CParser::RuleVariable;
}


antlrcpp::Any CParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

CParser::VariableContext* CParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 68, CParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    match(CParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_nameContext ------------------------------------------------------------------

CParser::Func_nameContext::Func_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::VariableContext* CParser::Func_nameContext::variable() {
  return getRuleContext<CParser::VariableContext>(0);
}


size_t CParser::Func_nameContext::getRuleIndex() const {
  return CParser::RuleFunc_name;
}


antlrcpp::Any CParser::Func_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunc_name(this);
  else
    return visitor->visitChildren(this);
}

CParser::Func_nameContext* CParser::func_name() {
  Func_nameContext *_localctx = _tracker.createInstance<Func_nameContext>(_ctx, getState());
  enterRule(_localctx, 70, CParser::RuleFunc_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParmContext ------------------------------------------------------------------

CParser::ParmContext::ParmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::ExprContext* CParser::ParmContext::expr() {
  return getRuleContext<CParser::ExprContext>(0);
}


size_t CParser::ParmContext::getRuleIndex() const {
  return CParser::RuleParm;
}


antlrcpp::Any CParser::ParmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitParm(this);
  else
    return visitor->visitChildren(this);
}

CParser::ParmContext* CParser::parm() {
  ParmContext *_localctx = _tracker.createInstance<ParmContext>(_ctx, getState());
  enterRule(_localctx, 72, CParser::RuleParm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

CParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CParser::ExprContext::getRuleIndex() const {
  return CParser::RuleExpr;
}

void CParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- VariableExprContext ------------------------------------------------------------------

CParser::VariableContext* CParser::VariableExprContext::variable() {
  return getRuleContext<CParser::VariableContext>(0);
}

CParser::VariableExprContext::VariableExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::VariableExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitVariableExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<CParser::ExprContext *> CParser::AddSubExprContext::expr() {
  return getRuleContexts<CParser::ExprContext>();
}

CParser::ExprContext* CParser::AddSubExprContext::expr(size_t i) {
  return getRuleContext<CParser::ExprContext>(i);
}

CParser::Add_sub_opContext* CParser::AddSubExprContext::add_sub_op() {
  return getRuleContext<CParser::Add_sub_opContext>(0);
}

CParser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnsignedNumberExprContext ------------------------------------------------------------------

CParser::NumberContext* CParser::UnsignedNumberExprContext::number() {
  return getRuleContext<CParser::NumberContext>(0);
}

CParser::UnsignedNumberExprContext::UnsignedNumberExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::UnsignedNumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitUnsignedNumberExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolExprContext ------------------------------------------------------------------

CParser::T_f_opContext* CParser::BoolExprContext::t_f_op() {
  return getRuleContext<CParser::T_f_opContext>(0);
}

CParser::BoolExprContext::BoolExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::BoolExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitBoolExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<CParser::ExprContext *> CParser::MulDivExprContext::expr() {
  return getRuleContexts<CParser::ExprContext>();
}

CParser::ExprContext* CParser::MulDivExprContext::expr(size_t i) {
  return getRuleContext<CParser::ExprContext>(i);
}

CParser::Mul_div_opContext* CParser::MulDivExprContext::mul_div_op() {
  return getRuleContext<CParser::Mul_div_opContext>(0);
}

CParser::MulDivExprContext::MulDivExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

CParser::ExprContext* CParser::ParenExprContext::expr() {
  return getRuleContext<CParser::ExprContext>(0);
}

CParser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SignedNumberExprContext ------------------------------------------------------------------

CParser::SignedNumberContext* CParser::SignedNumberExprContext::signedNumber() {
  return getRuleContext<CParser::SignedNumberContext>(0);
}

CParser::SignedNumberExprContext::SignedNumberExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::SignedNumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitSignedNumberExpr(this);
  else
    return visitor->visitChildren(this);
}

CParser::ExprContext* CParser::expr() {
   return expr(0);
}

CParser::ExprContext* CParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  CParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, CParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(310);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::INTEGER_NUM:
      case CParser::FLOAT_NUM: {
        _localctx = _tracker.createInstance<UnsignedNumberExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(302);
        number();
        break;
      }

      case CParser::ADD_OP:
      case CParser::SUB_OP: {
        _localctx = _tracker.createInstance<SignedNumberExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(303);
        signedNumber();
        break;
      }

      case CParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<VariableExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(304);
        variable();
        break;
      }

      case CParser::T__0: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(305);
        match(CParser::T__0);
        setState(306);
        expr(0);
        setState(307);
        match(CParser::T__1);
        break;
      }

      case CParser::TRUE:
      case CParser::FALSE: {
        _localctx = _tracker.createInstance<BoolExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(309);
        t_f_op();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(322);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(320);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(312);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(313);
          mul_div_op();
          setState(314);
          expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(316);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(317);
          add_sub_op();
          setState(318);
          expr(7);
          break;
        }

        } 
      }
      setState(324);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SignedNumberContext ------------------------------------------------------------------

CParser::SignedNumberContext::SignedNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CParser::SignContext* CParser::SignedNumberContext::sign() {
  return getRuleContext<CParser::SignContext>(0);
}

CParser::NumberContext* CParser::SignedNumberContext::number() {
  return getRuleContext<CParser::NumberContext>(0);
}


size_t CParser::SignedNumberContext::getRuleIndex() const {
  return CParser::RuleSignedNumber;
}


antlrcpp::Any CParser::SignedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitSignedNumber(this);
  else
    return visitor->visitChildren(this);
}

CParser::SignedNumberContext* CParser::signedNumber() {
  SignedNumberContext *_localctx = _tracker.createInstance<SignedNumberContext>(_ctx, getState());
  enterRule(_localctx, 76, CParser::RuleSignedNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    sign();
    setState(326);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

CParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::SignContext::ADD_OP() {
  return getToken(CParser::ADD_OP, 0);
}

tree::TerminalNode* CParser::SignContext::SUB_OP() {
  return getToken(CParser::SUB_OP, 0);
}


size_t CParser::SignContext::getRuleIndex() const {
  return CParser::RuleSign;
}


antlrcpp::Any CParser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

CParser::SignContext* CParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 78, CParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    _la = _input->LA(1);
    if (!(_la == CParser::ADD_OP

    || _la == CParser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

CParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CParser::NumberContext::getRuleIndex() const {
  return CParser::RuleNumber;
}

void CParser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- FloatNumConstContext ------------------------------------------------------------------

tree::TerminalNode* CParser::FloatNumConstContext::FLOAT_NUM() {
  return getToken(CParser::FLOAT_NUM, 0);
}

CParser::FloatNumConstContext::FloatNumConstContext(NumberContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::FloatNumConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFloatNumConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerNumConstContext ------------------------------------------------------------------

tree::TerminalNode* CParser::IntegerNumConstContext::INTEGER_NUM() {
  return getToken(CParser::INTEGER_NUM, 0);
}

CParser::IntegerNumConstContext::IntegerNumConstContext(NumberContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CParser::IntegerNumConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitIntegerNumConst(this);
  else
    return visitor->visitChildren(this);
}
CParser::NumberContext* CParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 80, CParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(332);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::INTEGER_NUM: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<CParser::IntegerNumConstContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(330);
        match(CParser::INTEGER_NUM);
        break;
      }

      case CParser::FLOAT_NUM: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<CParser::FloatNumConstContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(331);
        match(CParser::FLOAT_NUM);
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

//----------------- Mul_div_opContext ------------------------------------------------------------------

CParser::Mul_div_opContext::Mul_div_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::Mul_div_opContext::MUL_OP() {
  return getToken(CParser::MUL_OP, 0);
}

tree::TerminalNode* CParser::Mul_div_opContext::DIV_OP() {
  return getToken(CParser::DIV_OP, 0);
}


size_t CParser::Mul_div_opContext::getRuleIndex() const {
  return CParser::RuleMul_div_op;
}


antlrcpp::Any CParser::Mul_div_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMul_div_op(this);
  else
    return visitor->visitChildren(this);
}

CParser::Mul_div_opContext* CParser::mul_div_op() {
  Mul_div_opContext *_localctx = _tracker.createInstance<Mul_div_opContext>(_ctx, getState());
  enterRule(_localctx, 82, CParser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(334);
    _la = _input->LA(1);
    if (!(_la == CParser::MUL_OP

    || _la == CParser::DIV_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_sub_opContext ------------------------------------------------------------------

CParser::Add_sub_opContext::Add_sub_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::Add_sub_opContext::ADD_OP() {
  return getToken(CParser::ADD_OP, 0);
}

tree::TerminalNode* CParser::Add_sub_opContext::SUB_OP() {
  return getToken(CParser::SUB_OP, 0);
}


size_t CParser::Add_sub_opContext::getRuleIndex() const {
  return CParser::RuleAdd_sub_op;
}


antlrcpp::Any CParser::Add_sub_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAdd_sub_op(this);
  else
    return visitor->visitChildren(this);
}

CParser::Add_sub_opContext* CParser::add_sub_op() {
  Add_sub_opContext *_localctx = _tracker.createInstance<Add_sub_opContext>(_ctx, getState());
  enterRule(_localctx, 84, CParser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    _la = _input->LA(1);
    if (!(_la == CParser::ADD_OP

    || _la == CParser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rel_opContext ------------------------------------------------------------------

CParser::Rel_opContext::Rel_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::Rel_opContext::EQ_OP() {
  return getToken(CParser::EQ_OP, 0);
}

tree::TerminalNode* CParser::Rel_opContext::NE_OP() {
  return getToken(CParser::NE_OP, 0);
}

tree::TerminalNode* CParser::Rel_opContext::LT_OP() {
  return getToken(CParser::LT_OP, 0);
}

tree::TerminalNode* CParser::Rel_opContext::LE_OP() {
  return getToken(CParser::LE_OP, 0);
}

tree::TerminalNode* CParser::Rel_opContext::GT_OP() {
  return getToken(CParser::GT_OP, 0);
}

tree::TerminalNode* CParser::Rel_opContext::GE_OP() {
  return getToken(CParser::GE_OP, 0);
}


size_t CParser::Rel_opContext::getRuleIndex() const {
  return CParser::RuleRel_op;
}


antlrcpp::Any CParser::Rel_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitRel_op(this);
  else
    return visitor->visitChildren(this);
}

CParser::Rel_opContext* CParser::rel_op() {
  Rel_opContext *_localctx = _tracker.createInstance<Rel_opContext>(_ctx, getState());
  enterRule(_localctx, 86, CParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::EQ_OP)
      | (1ULL << CParser::NE_OP)
      | (1ULL << CParser::LT_OP)
      | (1ULL << CParser::LE_OP)
      | (1ULL << CParser::GT_OP)
      | (1ULL << CParser::GE_OP))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- T_f_opContext ------------------------------------------------------------------

CParser::T_f_opContext::T_f_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CParser::T_f_opContext::TRUE() {
  return getToken(CParser::TRUE, 0);
}

tree::TerminalNode* CParser::T_f_opContext::FALSE() {
  return getToken(CParser::FALSE, 0);
}


size_t CParser::T_f_opContext::getRuleIndex() const {
  return CParser::RuleT_f_op;
}


antlrcpp::Any CParser::T_f_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitT_f_op(this);
  else
    return visitor->visitChildren(this);
}

CParser::T_f_opContext* CParser::t_f_op() {
  T_f_opContext *_localctx = _tracker.createInstance<T_f_opContext>(_ctx, getState());
  enterRule(_localctx, 88, CParser::RuleT_f_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    _la = _input->LA(1);
    if (!(_la == CParser::TRUE

    || _la == CParser::FALSE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 37: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CParser::_decisionToDFA;
atn::PredictionContextCache CParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CParser::_atn;
std::vector<uint16_t> CParser::_serializedATN;

std::vector<std::string> CParser::_ruleNames = {
  "program", "header", "main_block", "main", "main_closing", "decl_list", 
  "var_list", "var_name", "var_type", "types", "stmt", "stmt_list", "assignment_stmt", 
  "if_stmt", "if_part", "then_part", "do_while_stmt", "do_stmt", "while_stmt", 
  "func_assignment", "func_call", "call_param_list", "func", "func_decl", 
  "func_block", "func_closing", "func_stmt_list", "func_add", "parm_decl_list", 
  "parm_decl", "if_rel_expr", "do_while_rel_expr", "printf_stmt", "our_string", 
  "variable", "func_name", "parm", "expr", "signedNumber", "sign", "number", 
  "mul_div_op", "add_sub_op", "rel_op", "t_f_op"
};

std::vector<std::string> CParser::_literalNames = {
  "", "'('", "')'", "'{'", "'}'", "';'", "','", "'='", "'printf'", "'(\"'", 
  "'\"'", "'-->'", "'int'", "'float'", "'void'", "'return'", "'if'", "'true'", 
  "'false'", "'main'", "'do'", "'while'", "", "", "", "", "'*'", "'/'", 
  "'+'", "'-'", "'=='", "'<>'", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> CParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "INTEGER", "FLOAT", "VOID", 
  "RETURN", "IF", "TRUE", "FALSE", "MAIN", "DO", "WHILE", "IDENTIFIER", 
  "PRINT_IDENTIFIER", "INTEGER_NUM", "FLOAT_NUM", "MUL_OP", "DIV_OP", "ADD_OP", 
  "SUB_OP", "EQ_OP", "NE_OP", "LT_OP", "LE_OP", "GT_OP", "GE_OP", "NEWLINE", 
  "WS"
};

dfa::Vocabulary CParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CParser::_tokenNames;

CParser::Initializer::Initializer() {
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
    0x3, 0x27, 0x159, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x3, 0x2, 
    0x7, 0x2, 0x5e, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x61, 0xb, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 
    0x6a, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x6d, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x73, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x5, 0x5, 0x78, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x83, 0xa, 
    0x7, 0xc, 0x7, 0xe, 0x7, 0x86, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x8e, 0xa, 0x8, 0xc, 0x8, 0xe, 
    0x8, 0x91, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x9a, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xaa, 0xa, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xae, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xb1, 
    0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x7, 0x16, 0xd3, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0xd6, 0xb, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xdc, 0xa, 0x17, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x5, 0x19, 0xe5, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x5, 0x1a, 0xeb, 0xa, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0xee, 0xa, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0xf9, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x105, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 
    0x108, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x11f, 0xa, 0x22, 0xc, 0x22, 
    0xe, 0x22, 0x122, 0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x139, 0xa, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x27, 0x7, 0x27, 0x143, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 
    0x146, 0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x14f, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x2, 0x3, 0x4c, 0x2f, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
    0x5a, 0x2, 0x6, 0x3, 0x2, 0x1e, 0x1f, 0x3, 0x2, 0x1c, 0x1d, 0x3, 0x2, 
    0x20, 0x25, 0x3, 0x2, 0x13, 0x14, 0x2, 0x148, 0x2, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x65, 0x3, 0x2, 0x2, 0x2, 0x6, 0x70, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0xa, 0x7c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x7f, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x89, 0x3, 0x2, 0x2, 0x2, 0x10, 0x92, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x94, 0x3, 0x2, 0x2, 0x2, 0x14, 0x99, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x18, 0xab, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xb6, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x20, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xc0, 0x3, 0x2, 0x2, 0x2, 0x24, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x26, 0xc8, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xcf, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xdd, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x32, 0xe8, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x36, 0xf8, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x101, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x109, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x40, 0x112, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x118, 0x3, 0x2, 0x2, 0x2, 0x44, 0x125, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x129, 0x3, 0x2, 0x2, 0x2, 0x48, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x138, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x147, 0x3, 0x2, 0x2, 0x2, 0x50, 0x14a, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x54, 0x150, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x152, 0x3, 0x2, 0x2, 0x2, 0x58, 0x154, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x156, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x5e, 0x5, 0x2e, 0x18, 0x2, 0x5d, 0x5c, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x61, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 0x60, 0x62, 0x3, 0x2, 0x2, 
    0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x5, 0x4, 0x3, 0x2, 
    0x63, 0x64, 0x5, 0x6, 0x4, 0x2, 0x64, 0x3, 0x3, 0x2, 0x2, 0x2, 0x65, 
    0x66, 0x7, 0x10, 0x2, 0x2, 0x66, 0x67, 0x7, 0x15, 0x2, 0x2, 0x67, 0x6b, 
    0x7, 0x3, 0x2, 0x2, 0x68, 0x6a, 0x5, 0x3a, 0x1e, 0x2, 0x69, 0x68, 0x3, 
    0x2, 0x2, 0x2, 0x6a, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 
    0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x4, 0x2, 0x2, 
    0x6f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x70, 0x72, 0x7, 0x5, 0x2, 0x2, 0x71, 
    0x73, 0x5, 0xc, 0x7, 0x2, 0x72, 0x71, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 
    0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x5, 
    0x8, 0x5, 0x2, 0x75, 0x7, 0x3, 0x2, 0x2, 0x2, 0x76, 0x78, 0x5, 0x18, 
    0xd, 0x2, 0x77, 0x76, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 
    0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x5, 0xa, 0x6, 0x2, 
    0x7a, 0x7b, 0x7, 0x6, 0x2, 0x2, 0x7b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x7d, 0x7, 0x11, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x7, 0x2, 0x2, 0x7e, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x7f, 0x84, 0x5, 0xe, 0x8, 0x2, 0x80, 0x81, 0x7, 
    0x7, 0x2, 0x2, 0x81, 0x83, 0x5, 0xe, 0x8, 0x2, 0x82, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0x83, 0x86, 0x3, 0x2, 0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x85, 0x3, 0x2, 0x2, 0x2, 0x85, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x7, 0x7, 0x2, 0x2, 0x88, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x5, 0x12, 0xa, 0x2, 0x8a, 0x8f, 
    0x5, 0x10, 0x9, 0x2, 0x8b, 0x8c, 0x7, 0x8, 0x2, 0x2, 0x8c, 0x8e, 0x5, 
    0x10, 0x9, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x8f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 
    0x2, 0x90, 0xf, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0x93, 0x7, 0x18, 0x2, 0x2, 0x93, 0x11, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x95, 0x5, 0x14, 0xb, 0x2, 0x95, 0x13, 0x3, 0x2, 0x2, 0x2, 0x96, 0x9a, 
    0x7, 0xe, 0x2, 0x2, 0x97, 0x9a, 0x7, 0xf, 0x2, 0x2, 0x98, 0x9a, 0x7, 
    0x10, 0x2, 0x2, 0x99, 0x96, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x9b, 0x9c, 0x5, 0x1a, 0xe, 0x2, 0x9c, 0x9d, 0x7, 0x7, 0x2, 0x2, 
    0x9d, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xaa, 0x5, 0x1c, 0xf, 0x2, 0x9f, 
    0xa0, 0x5, 0x22, 0x12, 0x2, 0xa0, 0xa1, 0x7, 0x7, 0x2, 0x2, 0xa1, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xaa, 0x5, 0x28, 0x15, 0x2, 0xa3, 0xa4, 0x5, 
    0x2a, 0x16, 0x2, 0xa4, 0xa5, 0x7, 0x7, 0x2, 0x2, 0xa5, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0xa6, 0xa7, 0x5, 0x42, 0x22, 0x2, 0xa7, 0xa8, 0x7, 0x7, 0x2, 
    0x2, 0xa8, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa9, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0x17, 0x3, 0x2, 0x2, 0x2, 0xab, 0xaf, 0x5, 
    0x16, 0xc, 0x2, 0xac, 0xae, 0x5, 0x16, 0xc, 0x2, 0xad, 0xac, 0x3, 0x2, 
    0x2, 0x2, 0xae, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 
    0x2, 0xaf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0x46, 0x24, 0x2, 0xb3, 
    0xb4, 0x7, 0x9, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0x4c, 0x27, 0x2, 0xb5, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x5, 0x1e, 0x10, 0x2, 0xb7, 0xb8, 0x5, 
    0x20, 0x11, 0x2, 0xb8, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x7, 0x12, 
    0x2, 0x2, 0xba, 0xbb, 0x5, 0x3e, 0x20, 0x2, 0xbb, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0xbc, 0xbd, 0x7, 0x5, 0x2, 0x2, 0xbd, 0xbe, 0x5, 0x18, 0xd, 0x2, 
    0xbe, 0xbf, 0x7, 0x6, 0x2, 0x2, 0xbf, 0x21, 0x3, 0x2, 0x2, 0x2, 0xc0, 
    0xc1, 0x5, 0x24, 0x13, 0x2, 0xc1, 0xc2, 0x5, 0x26, 0x14, 0x2, 0xc2, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x16, 0x2, 0x2, 0xc4, 0xc5, 
    0x7, 0x5, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0x18, 0xd, 0x2, 0xc6, 0xc7, 0x7, 
    0x6, 0x2, 0x2, 0xc7, 0x25, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0x17, 
    0x2, 0x2, 0xc9, 0xca, 0x5, 0x40, 0x21, 0x2, 0xca, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0xcb, 0xcc, 0x5, 0x48, 0x25, 0x2, 0xcc, 0xcd, 0x7, 0x9, 0x2, 0x2, 
    0xcd, 0xce, 0x5, 0x16, 0xc, 0x2, 0xce, 0x29, 0x3, 0x2, 0x2, 0x2, 0xcf, 
    0xd0, 0x5, 0x48, 0x25, 0x2, 0xd0, 0xd4, 0x7, 0x3, 0x2, 0x2, 0xd1, 0xd3, 
    0x5, 0x2c, 0x17, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd6, 0x3, 
    0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 
    0x2, 0x2, 0xd5, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xd7, 0xd8, 0x7, 0x4, 0x2, 0x2, 0xd8, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0xd9, 0xdb, 0x5, 0x4a, 0x26, 0x2, 0xda, 0xdc, 0x7, 0x8, 0x2, 0x2, 0xdb, 
    0xda, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x30, 0x19, 0x2, 0xde, 0xdf, 0x5, 
    0x32, 0x1a, 0x2, 0xdf, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0x12, 
    0xa, 0x2, 0xe1, 0xe2, 0x5, 0x10, 0x9, 0x2, 0xe2, 0xe4, 0x7, 0x3, 0x2, 
    0x2, 0xe3, 0xe5, 0x5, 0x3a, 0x1e, 0x2, 0xe4, 0xe3, 0x3, 0x2, 0x2, 0x2, 
    0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 
    0xe7, 0x7, 0x4, 0x2, 0x2, 0xe7, 0x31, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xea, 
    0x7, 0x5, 0x2, 0x2, 0xe9, 0xeb, 0x5, 0xc, 0x7, 0x2, 0xea, 0xe9, 0x3, 
    0x2, 0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0xec, 0xee, 0x5, 0x36, 0x1c, 0x2, 0xed, 0xec, 0x3, 0x2, 0x2, 
    0x2, 0xed, 0xee, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xf0, 0x5, 0x34, 0x1b, 0x2, 0xf0, 0xf1, 0x7, 0x6, 0x2, 0x2, 0xf1, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0x11, 0x2, 0x2, 0xf3, 0xf4, 
    0x5, 0x48, 0x25, 0x2, 0xf4, 0xf5, 0x7, 0x7, 0x2, 0x2, 0xf5, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0xf6, 0xf9, 0x5, 0x38, 0x1d, 0x2, 0xf7, 0xf9, 0x3, 0x2, 
    0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf7, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0x37, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x46, 0x24, 0x2, 
    0xfb, 0xfc, 0x7, 0x9, 0x2, 0x2, 0xfc, 0xfd, 0x5, 0x46, 0x24, 0x2, 0xfd, 
    0xfe, 0x7, 0x1e, 0x2, 0x2, 0xfe, 0xff, 0x5, 0x46, 0x24, 0x2, 0xff, 0x100, 
    0x7, 0x7, 0x2, 0x2, 0x100, 0x39, 0x3, 0x2, 0x2, 0x2, 0x101, 0x106, 0x5, 
    0x3c, 0x1f, 0x2, 0x102, 0x103, 0x7, 0x8, 0x2, 0x2, 0x103, 0x105, 0x5, 
    0x3c, 0x1f, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 0x108, 0x3, 
    0x2, 0x2, 0x2, 0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 
    0x2, 0x2, 0x2, 0x107, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x108, 0x106, 0x3, 0x2, 
    0x2, 0x2, 0x109, 0x10a, 0x5, 0x12, 0xa, 0x2, 0x10a, 0x10b, 0x5, 0x10, 
    0x9, 0x2, 0x10b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x7, 0x3, 0x2, 
    0x2, 0x10d, 0x10e, 0x5, 0x4c, 0x27, 0x2, 0x10e, 0x10f, 0x5, 0x58, 0x2d, 
    0x2, 0x10f, 0x110, 0x5, 0x4c, 0x27, 0x2, 0x110, 0x111, 0x7, 0x4, 0x2, 
    0x2, 0x111, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x7, 0x3, 0x2, 0x2, 
    0x113, 0x114, 0x5, 0x4c, 0x27, 0x2, 0x114, 0x115, 0x5, 0x58, 0x2d, 0x2, 
    0x115, 0x116, 0x5, 0x4c, 0x27, 0x2, 0x116, 0x117, 0x7, 0x4, 0x2, 0x2, 
    0x117, 0x41, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x7, 0xa, 0x2, 0x2, 0x119, 
    0x11a, 0x7, 0xb, 0x2, 0x2, 0x11a, 0x11b, 0x5, 0x44, 0x23, 0x2, 0x11b, 
    0x120, 0x7, 0xc, 0x2, 0x2, 0x11c, 0x11d, 0x7, 0x8, 0x2, 0x2, 0x11d, 
    0x11f, 0x5, 0x4c, 0x27, 0x2, 0x11e, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11f, 
    0x122, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x120, 
    0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 0x123, 0x3, 0x2, 0x2, 0x2, 0x122, 
    0x120, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x7, 0x4, 0x2, 0x2, 0x124, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 0x18, 0x2, 0x2, 0x126, 
    0x127, 0x7, 0xd, 0x2, 0x2, 0x127, 0x128, 0x7, 0x19, 0x2, 0x2, 0x128, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x7, 0x18, 0x2, 0x2, 0x12a, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x5, 0x46, 0x24, 0x2, 0x12c, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x5, 0x4c, 0x27, 0x2, 0x12e, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x8, 0x27, 0x1, 0x2, 0x130, 
    0x139, 0x5, 0x52, 0x2a, 0x2, 0x131, 0x139, 0x5, 0x4e, 0x28, 0x2, 0x132, 
    0x139, 0x5, 0x46, 0x24, 0x2, 0x133, 0x134, 0x7, 0x3, 0x2, 0x2, 0x134, 
    0x135, 0x5, 0x4c, 0x27, 0x2, 0x135, 0x136, 0x7, 0x4, 0x2, 0x2, 0x136, 
    0x139, 0x3, 0x2, 0x2, 0x2, 0x137, 0x139, 0x5, 0x5a, 0x2e, 0x2, 0x138, 
    0x12f, 0x3, 0x2, 0x2, 0x2, 0x138, 0x131, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x132, 0x3, 0x2, 0x2, 0x2, 0x138, 0x133, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x137, 0x3, 0x2, 0x2, 0x2, 0x139, 0x144, 0x3, 0x2, 0x2, 0x2, 0x13a, 
    0x13b, 0xc, 0x9, 0x2, 0x2, 0x13b, 0x13c, 0x5, 0x54, 0x2b, 0x2, 0x13c, 
    0x13d, 0x5, 0x4c, 0x27, 0xa, 0x13d, 0x143, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x13f, 0xc, 0x8, 0x2, 0x2, 0x13f, 0x140, 0x5, 0x56, 0x2c, 0x2, 0x140, 
    0x141, 0x5, 0x4c, 0x27, 0x9, 0x141, 0x143, 0x3, 0x2, 0x2, 0x2, 0x142, 
    0x13a, 0x3, 0x2, 0x2, 0x2, 0x142, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x143, 
    0x146, 0x3, 0x2, 0x2, 0x2, 0x144, 0x142, 0x3, 0x2, 0x2, 0x2, 0x144, 
    0x145, 0x3, 0x2, 0x2, 0x2, 0x145, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x146, 0x144, 
    0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x5, 0x50, 0x29, 0x2, 0x148, 0x149, 
    0x5, 0x52, 0x2a, 0x2, 0x149, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 
    0x9, 0x2, 0x2, 0x2, 0x14b, 0x51, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14f, 0x7, 
    0x1a, 0x2, 0x2, 0x14d, 0x14f, 0x7, 0x1b, 0x2, 0x2, 0x14e, 0x14c, 0x3, 
    0x2, 0x2, 0x2, 0x14e, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x150, 0x151, 0x9, 0x3, 0x2, 0x2, 0x151, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x152, 0x153, 0x9, 0x2, 0x2, 0x2, 0x153, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x154, 0x155, 0x9, 0x4, 0x2, 0x2, 0x155, 0x59, 0x3, 0x2, 0x2, 0x2, 0x156, 
    0x157, 0x9, 0x5, 0x2, 0x2, 0x157, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x17, 0x5f, 
    0x6b, 0x72, 0x77, 0x84, 0x8f, 0x99, 0xa9, 0xaf, 0xd4, 0xdb, 0xe4, 0xea, 
    0xed, 0xf8, 0x106, 0x120, 0x138, 0x142, 0x144, 0x14e, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CParser::Initializer CParser::_init;
