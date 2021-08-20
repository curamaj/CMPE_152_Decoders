#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "CBaseVisitor.h"
#include "antlr4-runtime.h"
#include "CVisitor.h"

using namespace wci;
using namespace wci::intermediate;


class Pass2Visitor : public CBaseVisitor
{
private:
	string program_name;
	// for nested function calls
	stack<string> function_names;
	ostream& j_file;

public:
	Pass2Visitor(ostream& j_file);
    virtual ~Pass2Visitor();
    antlrcpp::Any visitProgram(CParser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(CParser::HeaderContext *ctx) override;
    antlrcpp::Any visitMain(CParser::MainContext *ctx) override;
    antlrcpp::Any visitMain_closing(CParser::Main_closingContext *ctx) override;
    antlrcpp::Any visitFunc(CParser::FuncContext *ctx) override;
    antlrcpp::Any visitFunc_decl(CParser::Func_declContext *ctx) override;
    antlrcpp::Any visitFunc_closing(CParser::Func_closingContext *ctx) override;
    antlrcpp::Any visitSignedNumber(CParser::SignedNumberContext *ctx) override;
    antlrcpp::Any visitIntegerNumConst(CParser::IntegerNumConstContext *ctx) override;
    antlrcpp::Any visitFloatNumConst(CParser::FloatNumConstContext *ctx) override;
    antlrcpp::Any visitAssignmentStmt(CParser::AssignmentStmtContext *ctx) override;
    antlrcpp::Any visitIfStmt(CParser::IfStmtContext *ctx) override;
    antlrcpp::Any visitIf_rel_expr(CParser::If_rel_exprContext *ctx) override;
    antlrcpp::Any visitDo_while_stmt(CParser::Do_while_stmtContext *ctx) override;
    antlrcpp::Any visitDo_while_rel_expr(CParser::Do_while_rel_exprContext *ctx) override ;
    antlrcpp::Any visitFuncAssignmentStmt(CParser::FuncAssignmentStmtContext *ctx) override;
    antlrcpp::Any visitFuncCallStmt(CParser::FuncCallStmtContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(CParser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(CParser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitVariableExpr(CParser::VariableExprContext *ctx) override;
    antlrcpp::Any visitStmt_list(CParser::Stmt_listContext *ctx) override;
    antlrcpp::Any visitPrintf_stmt(CParser::Printf_stmtContext *ctx) override;
    antlrcpp::Any visitFunc_add_stmt(CParser::Func_add_stmtContext *ctx) override;
};

#endif /* PASS2VISITOR_H_ */
