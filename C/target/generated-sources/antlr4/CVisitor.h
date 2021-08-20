
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from C.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "CParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CParser.
 */
class  CVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CParser.
   */
    virtual antlrcpp::Any visitProgram(CParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitHeader(CParser::HeaderContext *context) = 0;

    virtual antlrcpp::Any visitMain_block(CParser::Main_blockContext *context) = 0;

    virtual antlrcpp::Any visitMain(CParser::MainContext *context) = 0;

    virtual antlrcpp::Any visitMain_closing(CParser::Main_closingContext *context) = 0;

    virtual antlrcpp::Any visitDecl_list(CParser::Decl_listContext *context) = 0;

    virtual antlrcpp::Any visitVar_list(CParser::Var_listContext *context) = 0;

    virtual antlrcpp::Any visitVar_name(CParser::Var_nameContext *context) = 0;

    virtual antlrcpp::Any visitVar_type(CParser::Var_typeContext *context) = 0;

    virtual antlrcpp::Any visitIntegerType(CParser::IntegerTypeContext *context) = 0;

    virtual antlrcpp::Any visitFloatType(CParser::FloatTypeContext *context) = 0;

    virtual antlrcpp::Any visitVoidType(CParser::VoidTypeContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStmt(CParser::AssignmentStmtContext *context) = 0;

    virtual antlrcpp::Any visitIfStmt(CParser::IfStmtContext *context) = 0;

    virtual antlrcpp::Any visitDoWhileStmt(CParser::DoWhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitFuncAssignmentStmt(CParser::FuncAssignmentStmtContext *context) = 0;

    virtual antlrcpp::Any visitFuncCallStmt(CParser::FuncCallStmtContext *context) = 0;

    virtual antlrcpp::Any visitPrintfStmt(CParser::PrintfStmtContext *context) = 0;

    virtual antlrcpp::Any visitStmt_list(CParser::Stmt_listContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt(CParser::Assignment_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(CParser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_part(CParser::If_partContext *context) = 0;

    virtual antlrcpp::Any visitThen_part(CParser::Then_partContext *context) = 0;

    virtual antlrcpp::Any visitDo_while_stmt(CParser::Do_while_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDo_stmt(CParser::Do_stmtContext *context) = 0;

    virtual antlrcpp::Any visitWhile_stmt(CParser::While_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFunc_assignment(CParser::Func_assignmentContext *context) = 0;

    virtual antlrcpp::Any visitFunc_call(CParser::Func_callContext *context) = 0;

    virtual antlrcpp::Any visitCall_param_list(CParser::Call_param_listContext *context) = 0;

    virtual antlrcpp::Any visitFunc(CParser::FuncContext *context) = 0;

    virtual antlrcpp::Any visitFunc_decl(CParser::Func_declContext *context) = 0;

    virtual antlrcpp::Any visitFunc_block(CParser::Func_blockContext *context) = 0;

    virtual antlrcpp::Any visitFunc_closing(CParser::Func_closingContext *context) = 0;

    virtual antlrcpp::Any visitFunc_add_stmt(CParser::Func_add_stmtContext *context) = 0;

    virtual antlrcpp::Any visitEmpty_func_stmt(CParser::Empty_func_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFunc_add(CParser::Func_addContext *context) = 0;

    virtual antlrcpp::Any visitParm_decl_list(CParser::Parm_decl_listContext *context) = 0;

    virtual antlrcpp::Any visitParm_decl(CParser::Parm_declContext *context) = 0;

    virtual antlrcpp::Any visitIf_rel_expr(CParser::If_rel_exprContext *context) = 0;

    virtual antlrcpp::Any visitDo_while_rel_expr(CParser::Do_while_rel_exprContext *context) = 0;

    virtual antlrcpp::Any visitPrintf_stmt(CParser::Printf_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOur_string(CParser::Our_stringContext *context) = 0;

    virtual antlrcpp::Any visitVariable(CParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitFunc_name(CParser::Func_nameContext *context) = 0;

    virtual antlrcpp::Any visitParm(CParser::ParmContext *context) = 0;

    virtual antlrcpp::Any visitVariableExpr(CParser::VariableExprContext *context) = 0;

    virtual antlrcpp::Any visitAddSubExpr(CParser::AddSubExprContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedNumberExpr(CParser::UnsignedNumberExprContext *context) = 0;

    virtual antlrcpp::Any visitBoolExpr(CParser::BoolExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivExpr(CParser::MulDivExprContext *context) = 0;

    virtual antlrcpp::Any visitParenExpr(CParser::ParenExprContext *context) = 0;

    virtual antlrcpp::Any visitSignedNumberExpr(CParser::SignedNumberExprContext *context) = 0;

    virtual antlrcpp::Any visitSignedNumber(CParser::SignedNumberContext *context) = 0;

    virtual antlrcpp::Any visitSign(CParser::SignContext *context) = 0;

    virtual antlrcpp::Any visitIntegerNumConst(CParser::IntegerNumConstContext *context) = 0;

    virtual antlrcpp::Any visitFloatNumConst(CParser::FloatNumConstContext *context) = 0;

    virtual antlrcpp::Any visitMul_div_op(CParser::Mul_div_opContext *context) = 0;

    virtual antlrcpp::Any visitAdd_sub_op(CParser::Add_sub_opContext *context) = 0;

    virtual antlrcpp::Any visitRel_op(CParser::Rel_opContext *context) = 0;

    virtual antlrcpp::Any visitT_f_op(CParser::T_f_opContext *context) = 0;


};

