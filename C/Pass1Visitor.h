#ifndef PASS1VISITOR_H_
#define PASS1VISITOR_H_

#include <iostream>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "CBaseVisitor.h"
#include "antlr4-runtime.h"
#include "CVisitor.h"

using namespace wci;
using namespace wci::intermediate;


class Pass1Visitor : public CBaseVisitor
{
private:
    SymTabStack *symtab_stack;
    SymTabEntry *program_id;
    vector<SymTabEntry *> variable_id_list;
    // for nested function calls
	stack<string> function_names;
    ofstream j_file;

public:
    Pass1Visitor();
    virtual ~Pass1Visitor();

    ostream& get_assembly_file();
    antlrcpp::Any visitProgram(CParser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(CParser::HeaderContext *ctx) override;
    antlrcpp::Any visitFunc(CParser::FuncContext *ctx) override;
    antlrcpp::Any visitFunc_decl(CParser::Func_declContext *ctx) override;
    antlrcpp::Any visitFunc_name(CParser::Func_nameContext *ctx) override;
    antlrcpp::Any visitDecl_list(CParser::Decl_listContext *ctx) override;
    antlrcpp::Any visitVar_list(CParser::Var_listContext *ctx) override;
    antlrcpp::Any visitVar_name(CParser::Var_nameContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(CParser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitSignedNumberExpr(CParser::SignedNumberExprContext *ctx) override;
	antlrcpp::Any visitSignedNumber(CParser::SignedNumberContext *ctx) override;
    antlrcpp::Any visitUnsignedNumberExpr(CParser::UnsignedNumberExprContext *ctx) override; 
    antlrcpp::Any visitMulDivExpr(CParser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitParenExpr(CParser::ParenExprContext *ctx) override; 
    antlrcpp::Any visitVariableExpr(CParser::VariableExprContext *ctx) override; 
    antlrcpp::Any visitIntegerNumConst(CParser::IntegerNumConstContext *ctx) override;
    antlrcpp::Any visitFloatNumConst(CParser::FloatNumConstContext *ctx) override;
    antlrcpp::Any visitParm(CParser::ParmContext *ctx) override;
};

#endif /* PASS1VISITOR_H_ */
