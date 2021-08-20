
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from C.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  CParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleHeader = 1, RuleMain_block = 2, RuleMain = 3, RuleMain_closing = 4, 
    RuleDecl_list = 5, RuleVar_list = 6, RuleVar_name = 7, RuleVar_type = 8, 
    RuleTypes = 9, RuleStmt = 10, RuleStmt_list = 11, RuleAssignment_stmt = 12, 
    RuleIf_stmt = 13, RuleIf_part = 14, RuleThen_part = 15, RuleDo_while_stmt = 16, 
    RuleDo_stmt = 17, RuleWhile_stmt = 18, RuleFunc_assignment = 19, RuleFunc_call = 20, 
    RuleCall_param_list = 21, RuleFunc = 22, RuleFunc_decl = 23, RuleFunc_block = 24, 
    RuleFunc_closing = 25, RuleFunc_stmt_list = 26, RuleFunc_add = 27, RuleParm_decl_list = 28, 
    RuleParm_decl = 29, RuleIf_rel_expr = 30, RuleDo_while_rel_expr = 31, 
    RulePrintf_stmt = 32, RuleOur_string = 33, RuleVariable = 34, RuleFunc_name = 35, 
    RuleParm = 36, RuleExpr = 37, RuleSignedNumber = 38, RuleSign = 39, 
    RuleNumber = 40, RuleMul_div_op = 41, RuleAdd_sub_op = 42, RuleRel_op = 43, 
    RuleT_f_op = 44
  };

  CParser(antlr4::TokenStream *input);
  ~CParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class HeaderContext;
  class Main_blockContext;
  class MainContext;
  class Main_closingContext;
  class Decl_listContext;
  class Var_listContext;
  class Var_nameContext;
  class Var_typeContext;
  class TypesContext;
  class StmtContext;
  class Stmt_listContext;
  class Assignment_stmtContext;
  class If_stmtContext;
  class If_partContext;
  class Then_partContext;
  class Do_while_stmtContext;
  class Do_stmtContext;
  class While_stmtContext;
  class Func_assignmentContext;
  class Func_callContext;
  class Call_param_listContext;
  class FuncContext;
  class Func_declContext;
  class Func_blockContext;
  class Func_closingContext;
  class Func_stmt_listContext;
  class Func_addContext;
  class Parm_decl_listContext;
  class Parm_declContext;
  class If_rel_exprContext;
  class Do_while_rel_exprContext;
  class Printf_stmtContext;
  class Our_stringContext;
  class VariableContext;
  class Func_nameContext;
  class ParmContext;
  class ExprContext;
  class SignedNumberContext;
  class SignContext;
  class NumberContext;
  class Mul_div_opContext;
  class Add_sub_opContext;
  class Rel_opContext;
  class T_f_opContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HeaderContext *header();
    Main_blockContext *main_block();
    std::vector<FuncContext *> func();
    FuncContext* func(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  HeaderContext : public antlr4::ParserRuleContext {
  public:
    HeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VOID();
    antlr4::tree::TerminalNode *MAIN();
    std::vector<Parm_decl_listContext *> parm_decl_list();
    Parm_decl_listContext* parm_decl_list(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderContext* header();

  class  Main_blockContext : public antlr4::ParserRuleContext {
  public:
    Main_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MainContext *main();
    Decl_listContext *decl_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Main_blockContext* main_block();

  class  MainContext : public antlr4::ParserRuleContext {
  public:
    MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Main_closingContext *main_closing();
    Stmt_listContext *stmt_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainContext* main();

  class  Main_closingContext : public antlr4::ParserRuleContext {
  public:
    Main_closingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Main_closingContext* main_closing();

  class  Decl_listContext : public antlr4::ParserRuleContext {
  public:
    Decl_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Var_listContext *> var_list();
    Var_listContext* var_list(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decl_listContext* decl_list();

  class  Var_listContext : public antlr4::ParserRuleContext {
  public:
    Var_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_typeContext *var_type();
    std::vector<Var_nameContext *> var_name();
    Var_nameContext* var_name(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_listContext* var_list();

  class  Var_nameContext : public antlr4::ParserRuleContext {
  public:
    Var_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_nameContext* var_name();

  class  Var_typeContext : public antlr4::ParserRuleContext {
  public:
    Var_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypesContext *types();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_typeContext* var_type();

  class  TypesContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    TypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TypesContext() = default;
    void copyFrom(TypesContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FloatTypeContext : public TypesContext {
  public:
    FloatTypeContext(TypesContext *ctx);

    antlr4::tree::TerminalNode *FLOAT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerTypeContext : public TypesContext {
  public:
    IntegerTypeContext(TypesContext *ctx);

    antlr4::tree::TerminalNode *INTEGER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VoidTypeContext : public TypesContext {
  public:
    VoidTypeContext(TypesContext *ctx);

    antlr4::tree::TerminalNode *VOID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TypesContext* types();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StmtContext() = default;
    void copyFrom(StmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FuncAssignmentStmtContext : public StmtContext {
  public:
    FuncAssignmentStmtContext(StmtContext *ctx);

    Func_assignmentContext *func_assignment();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfStmtContext : public StmtContext {
  public:
    IfStmtContext(StmtContext *ctx);

    If_stmtContext *if_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DoWhileStmtContext : public StmtContext {
  public:
    DoWhileStmtContext(StmtContext *ctx);

    Do_while_stmtContext *do_while_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncCallStmtContext : public StmtContext {
  public:
    FuncCallStmtContext(StmtContext *ctx);

    Func_callContext *func_call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrintfStmtContext : public StmtContext {
  public:
    PrintfStmtContext(StmtContext *ctx);

    Printf_stmtContext *printf_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignmentStmtContext : public StmtContext {
  public:
    AssignmentStmtContext(StmtContext *ctx);

    Assignment_stmtContext *assignment_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StmtContext* stmt();

  class  Stmt_listContext : public antlr4::ParserRuleContext {
  public:
    Stmt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stmt_listContext* stmt_list();

  class  Assignment_stmtContext : public antlr4::ParserRuleContext {
  public:
    Assignment_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_stmtContext* assignment_stmt();

  class  If_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_partContext *if_part();
    Then_partContext *then_part();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmtContext* if_stmt();

  class  If_partContext : public antlr4::ParserRuleContext {
  public:
    If_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    If_rel_exprContext *if_rel_expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_partContext* if_part();

  class  Then_partContext : public antlr4::ParserRuleContext {
  public:
    Then_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Stmt_listContext *stmt_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Then_partContext* then_part();

  class  Do_while_stmtContext : public antlr4::ParserRuleContext {
  public:
    Do_while_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Do_stmtContext *do_stmt();
    While_stmtContext *while_stmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Do_while_stmtContext* do_while_stmt();

  class  Do_stmtContext : public antlr4::ParserRuleContext {
  public:
    Do_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    Stmt_listContext *stmt_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Do_stmtContext* do_stmt();

  class  While_stmtContext : public antlr4::ParserRuleContext {
  public:
    While_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    Do_while_rel_exprContext *do_while_rel_expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_stmtContext* while_stmt();

  class  Func_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Func_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_nameContext *func_name();
    StmtContext *stmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_assignmentContext* func_assignment();

  class  Func_callContext : public antlr4::ParserRuleContext {
  public:
    Func_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_nameContext *func_name();
    std::vector<Call_param_listContext *> call_param_list();
    Call_param_listContext* call_param_list(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_callContext* func_call();

  class  Call_param_listContext : public antlr4::ParserRuleContext {
  public:
    Call_param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParmContext *parm();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_param_listContext* call_param_list();

  class  FuncContext : public antlr4::ParserRuleContext {
  public:
    FuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_declContext *func_decl();
    Func_blockContext *func_block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncContext* func();

  class  Func_declContext : public antlr4::ParserRuleContext {
  public:
    Func_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_typeContext *var_type();
    Var_nameContext *var_name();
    Parm_decl_listContext *parm_decl_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_declContext* func_decl();

  class  Func_blockContext : public antlr4::ParserRuleContext {
  public:
    Func_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_closingContext *func_closing();
    Decl_listContext *decl_list();
    Func_stmt_listContext *func_stmt_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_blockContext* func_block();

  class  Func_closingContext : public antlr4::ParserRuleContext {
  public:
    Func_closingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    Func_nameContext *func_name();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_closingContext* func_closing();

  class  Func_stmt_listContext : public antlr4::ParserRuleContext {
  public:
    Func_stmt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Func_stmt_listContext() = default;
    void copyFrom(Func_stmt_listContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Empty_func_stmtContext : public Func_stmt_listContext {
  public:
    Empty_func_stmtContext(Func_stmt_listContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Func_add_stmtContext : public Func_stmt_listContext {
  public:
    Func_add_stmtContext(Func_stmt_listContext *ctx);

    Func_addContext *func_add();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Func_stmt_listContext* func_stmt_list();

  class  Func_addContext : public antlr4::ParserRuleContext {
  public:
    Func_addContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    antlr4::tree::TerminalNode *ADD_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_addContext* func_add();

  class  Parm_decl_listContext : public antlr4::ParserRuleContext {
  public:
    Parm_decl_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Parm_declContext *> parm_decl();
    Parm_declContext* parm_decl(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parm_decl_listContext* parm_decl_list();

  class  Parm_declContext : public antlr4::ParserRuleContext {
  public:
    Parm_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_typeContext *var_type();
    Var_nameContext *var_name();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parm_declContext* parm_decl();

  class  If_rel_exprContext : public antlr4::ParserRuleContext {
  public:
    If_rel_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Rel_opContext *rel_op();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_rel_exprContext* if_rel_expr();

  class  Do_while_rel_exprContext : public antlr4::ParserRuleContext {
  public:
    Do_while_rel_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Rel_opContext *rel_op();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Do_while_rel_exprContext* do_while_rel_expr();

  class  Printf_stmtContext : public antlr4::ParserRuleContext {
  public:
    Printf_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Our_stringContext *our_string();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Printf_stmtContext* printf_stmt();

  class  Our_stringContext : public antlr4::ParserRuleContext {
  public:
    Our_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *PRINT_IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Our_stringContext* our_string();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  Func_nameContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    Func_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_nameContext* func_name();

  class  ParmContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    ParmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParmContext* parm();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VariableExprContext : public ExprContext {
  public:
    VariableExprContext(ExprContext *ctx);

    VariableContext *variable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubExprContext : public ExprContext {
  public:
    AddSubExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Add_sub_opContext *add_sub_op();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnsignedNumberExprContext : public ExprContext {
  public:
    UnsignedNumberExprContext(ExprContext *ctx);

    NumberContext *number();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolExprContext : public ExprContext {
  public:
    BoolExprContext(ExprContext *ctx);

    T_f_opContext *t_f_op();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulDivExprContext : public ExprContext {
  public:
    MulDivExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Mul_div_opContext *mul_div_op();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExprContext : public ExprContext {
  public:
    ParenExprContext(ExprContext *ctx);

    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SignedNumberExprContext : public ExprContext {
  public:
    SignedNumberExprContext(ExprContext *ctx);

    SignedNumberContext *signedNumber();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  SignedNumberContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    SignedNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignContext *sign();
    NumberContext *number();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignedNumberContext* signedNumber();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_OP();
    antlr4::tree::TerminalNode *SUB_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignContext* sign();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumberContext() = default;
    void copyFrom(NumberContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FloatNumConstContext : public NumberContext {
  public:
    FloatNumConstContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *FLOAT_NUM();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerNumConstContext : public NumberContext {
  public:
    IntegerNumConstContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *INTEGER_NUM();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumberContext* number();

  class  Mul_div_opContext : public antlr4::ParserRuleContext {
  public:
    Mul_div_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL_OP();
    antlr4::tree::TerminalNode *DIV_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mul_div_opContext* mul_div_op();

  class  Add_sub_opContext : public antlr4::ParserRuleContext {
  public:
    Add_sub_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_OP();
    antlr4::tree::TerminalNode *SUB_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_sub_opContext* add_sub_op();

  class  Rel_opContext : public antlr4::ParserRuleContext {
  public:
    Rel_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ_OP();
    antlr4::tree::TerminalNode *NE_OP();
    antlr4::tree::TerminalNode *LT_OP();
    antlr4::tree::TerminalNode *LE_OP();
    antlr4::tree::TerminalNode *GT_OP();
    antlr4::tree::TerminalNode *GE_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rel_opContext* rel_op();

  class  T_f_opContext : public antlr4::ParserRuleContext {
  public:
    T_f_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T_f_opContext* t_f_op();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

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

