
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from C.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "CVisitor.h"


/**
 * This class provides an empty implementation of CVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CBaseVisitor : public CVisitor {
public:

  virtual antlrcpp::Any visitProgram(CParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeader(CParser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMain_block(CParser::Main_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMain(CParser::MainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMain_closing(CParser::Main_closingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl_list(CParser::Decl_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_list(CParser::Var_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_name(CParser::Var_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_type(CParser::Var_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerType(CParser::IntegerTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatType(CParser::FloatTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVoidType(CParser::VoidTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentStmt(CParser::AssignmentStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStmt(CParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoWhileStmt(CParser::DoWhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncAssignmentStmt(CParser::FuncAssignmentStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncCallStmt(CParser::FuncCallStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintfStmt(CParser::PrintfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt_list(CParser::Stmt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt(CParser::Assignment_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_stmt(CParser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_part(CParser::If_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThen_part(CParser::Then_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDo_while_stmt(CParser::Do_while_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDo_stmt(CParser::Do_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_stmt(CParser::While_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_assignment(CParser::Func_assignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_call(CParser::Func_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_param_list(CParser::Call_param_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc(CParser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_decl(CParser::Func_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_block(CParser::Func_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_closing(CParser::Func_closingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_add_stmt(CParser::Func_add_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmpty_func_stmt(CParser::Empty_func_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_add(CParser::Func_addContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParm_decl_list(CParser::Parm_decl_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParm_decl(CParser::Parm_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_rel_expr(CParser::If_rel_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDo_while_rel_expr(CParser::Do_while_rel_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintf_stmt(CParser::Printf_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOur_string(CParser::Our_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(CParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_name(CParser::Func_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParm(CParser::ParmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableExpr(CParser::VariableExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubExpr(CParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsignedNumberExpr(CParser::UnsignedNumberExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolExpr(CParser::BoolExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivExpr(CParser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenExpr(CParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedNumberExpr(CParser::SignedNumberExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedNumber(CParser::SignedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSign(CParser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerNumConst(CParser::IntegerNumConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatNumConst(CParser::FloatNumConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul_div_op(CParser::Mul_div_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_sub_op(CParser::Add_sub_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRel_op(CParser::Rel_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitT_f_op(CParser::T_f_opContext *ctx) override {
    return visitChildren(ctx);
  }


};

