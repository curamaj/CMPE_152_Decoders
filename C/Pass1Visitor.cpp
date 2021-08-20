#include <iostream>
#include <string>
#include <vector>

#include "Pass1Visitor.h"
#include "wci/intermediate/SymTabFactory.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;

Pass1Visitor::Pass1Visitor()
    : program_id(nullptr), j_file(nullptr)
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);
}

Pass1Visitor::~Pass1Visitor() {}

ostream& Pass1Visitor::get_assembly_file() { return j_file; }

antlrcpp::Any Pass1Visitor::visitProgram(CParser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);

    // Print the cross-reference table to see symbol table entries
    CrossReferencer cross_referencer;
    cross_referencer.print(symtab_stack);

    return value;
}

antlrcpp::Any Pass1Visitor::visitHeader(CParser::HeaderContext *ctx) 
{
	string program_name = "C_main";

	// create and push program stack
	program_id = symtab_stack->enter_local(program_name);
	program_id->set_definition((Definition)DF_PROGRAM);
	program_id->set_attribute((SymTabKey) ROUTINE_SYMTAB, symtab_stack->push());
	symtab_stack->set_program_id(program_id);

	// Create the assembly output file.
	j_file.open(program_name + ".j");
	if (j_file.fail())
	{
		exit(-99);
	}

	// Emit the program header.
	j_file << ".class public " << program_name << endl;
	j_file << ".super java/lang/Object" << endl;

	// Emit the RunTimer and PascalTextIn fields.
	j_file << endl;
	j_file << ".field private static _runTimer LRunTimer;" << endl;
	j_file << ".field private static _standardIn LPascalTextIn;" << endl << endl;

	return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitFunc(CParser::FuncContext *ctx) 
{
	auto value = visitChildren(ctx);

	// exiting function signaled by popping current function name
	function_names.pop();

	return value;
}

antlrcpp::Any Pass1Visitor::visitFunc_decl(CParser::Func_declContext *ctx) 
{
	string func_name = ctx->var_name()->getText();
	string func_return_type = ctx->var_type()->getText();

	SymTabEntry *function_id;

	//push function scope into stack
	function_id = symtab_stack->enter_local(func_name);
	function_id->set_definition((Definition)DF_FUNCTION);
	function_id->set_attribute((SymTabKey) ROUTINE_SYMTAB, symtab_stack->push());

  // set function type from function return type
	if (func_return_type == "int") {
		function_id->set_typespec(Predefined::integer_type);
	}
	else if (func_return_type == "float") {
		function_id->set_typespec(Predefined::real_type);
	}
	else {
		function_id->set_typespec(Predefined::undefined_type);
	}

	symtab_stack->set_program_id(function_id);

	// push parameter declarations to current stack
	int parm_decl_list_size = ctx->parm_decl_list()->parm_decl().size();
	string variable_name = "",
					variable_type = "";
	TypeSpec *type;
	for(int i = 0; i < parm_decl_list_size; i++)
	{
		variable_name = ctx->parm_decl_list()->parm_decl()[i]->var_name()->IDENTIFIER()->toString();
		variable_type = ctx->parm_decl_list()->parm_decl()[i]->var_type()->getText();
		SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
		variable_id->set_definition((Definition) DF_VARIABLE);

		if (variable_type == "int") {
			variable_type = "I";
			type = Predefined::integer_type;
		}
		else if (variable_type == "float") {
			variable_type = "F";
			type = Predefined::real_type;
		}
		else {
			variable_type = "?";
			type = Predefined::undefined_type;
		}

		variable_id->set_attribute((SymTabKey) ROUTINE_PARMS, variable_type);
		variable_id->set_typespec(type);
		variable_id_list.push_back(variable_id);
	}

	// use function names stack size as a flag for function children that they are currently in a function call
	function_names.push(func_name);

	return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitParm(CParser::ParmContext *ctx) 
{
	auto value = visitChildren(ctx);

	// set context type to context expression type
	TypeSpec* my_parm_type = ctx->expr()->type;
	ctx->type = my_parm_type;

	return value;
}

antlrcpp::Any Pass1Visitor::visitFunc_name(CParser::Func_nameContext *ctx) {
	auto value = visitChildren(ctx);
	
	// set context func_name type to variable typespec
	TypeSpec* my_func_type = symtab_stack->lookup(ctx->variable()->getText())->get_typespec();
	ctx->type = my_func_type;
	
	return value;
}

antlrcpp::Any Pass1Visitor::visitDecl_list(CParser::Decl_listContext *ctx)
{
	auto value = visitChildren(ctx);

	return value;
};

antlrcpp::Any Pass1Visitor::visitVar_list(CParser::Var_listContext *ctx)
{
	// emit global variable list
	j_file << "; ";
	int numOfVars = ctx->var_name().size();
	for (int j = 0 ; j < numOfVars; j++) {
		if (j == numOfVars - 1) { //dont emit comma
			j_file << ctx->var_name()[j]->getText() << ":";
		}
		else { //emit comma
			j_file << ctx->var_name()[j]->getText() << ",";
		}
	}

	// emit global variable list type
	TypeSpec *type;
	string type_indicator;
	string typeName;
	string type_name = ctx->var_type()->types()->getText();
	if (type_name == "int")
	{
		type = Predefined::integer_type;
		type_indicator = "I";
		typeName = "integer";
	}
	else if (type_name == "float")
	{
		type = Predefined::real_type;
		type_indicator = "F";
		typeName = "float";
	}
	else //Create else if's for other types.
	{
		type = nullptr;
		type_indicator = "?";
		typeName = "null";
	}
	j_file << typeName << endl << endl;

	// reset variable_id_list size to prepare for every new program visit
	if (function_names.size() == 0) {
		variable_id_list.resize(0);
	}

	auto value = visitChildren(ctx);

	// Emit a field access declaration using pushed SymTabEntries after visiting children
	for (SymTabEntry *id : variable_id_list) {
		id->set_typespec(type);
		j_file << ".field private static "
			   << id->get_name() << " " << type_indicator << endl;
	}
	j_file << endl;

	return value;
}

antlrcpp::Any Pass1Visitor::visitVar_name(CParser::Var_nameContext *ctx)
{
	// if currently not in function declaration, push var_name to stack
	if (function_names.size() == 0) {
		string variable_name = ctx->IDENTIFIER()->toString();
		SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
		variable_id->set_definition((Definition) DF_VARIABLE);
		variable_id_list.push_back(variable_id);
	}

	return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitIntegerNumConst(CParser::IntegerNumConstContext *ctx)
{
	ctx->type = Predefined::integer_type;
	return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitFloatNumConst(CParser::FloatNumConstContext *ctx)
{
	ctx->type = Predefined::real_type;
	return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitAddSubExpr(CParser::AddSubExprContext *ctx)
{
	auto value = visitChildren(ctx);

	TypeSpec *type1 = ctx->expr(0)->type;
	TypeSpec *type2 = ctx->expr(1)->type;

	// only accepts same type operands
	bool integer_mode =    (type1 == Predefined::integer_type)
											&& (type2 == Predefined::integer_type);
	bool float_mode    =  (type1 == Predefined::real_type)
											&& (type2 == Predefined::real_type);

	TypeSpec *type = integer_mode ? Predefined::integer_type
									: float_mode  ? Predefined::real_type
									: nullptr;
	ctx->type = type;

	return value;
}

antlrcpp::Any Pass1Visitor::visitMulDivExpr(CParser::MulDivExprContext *ctx)
{
	auto value = visitChildren(ctx);

	TypeSpec *type1 = ctx->expr(0)->type;
	TypeSpec *type2 = ctx->expr(1)->type;

	// only accepts same type operands
	bool integer_mode =    (type1 == Predefined::integer_type)
											&& (type2 == Predefined::integer_type);
	bool float_mode    =  (type1 == Predefined::real_type)
											&& (type2 == Predefined::real_type);

	TypeSpec *type = integer_mode ? Predefined::integer_type
									: float_mode  ? Predefined::real_type
									: nullptr;
	ctx->type = type;

	return value;
}

antlrcpp::Any Pass1Visitor::visitSignedNumberExpr(CParser::SignedNumberExprContext *ctx)
{
	auto value = visitChildren(ctx);
	ctx->type = ctx->signedNumber()->type;
	return value;
}

antlrcpp::Any Pass1Visitor::visitSignedNumber(CParser::SignedNumberContext *ctx)
{
	auto value = visit(ctx->number());
	ctx->type = ctx->number()->type;
	return value;
}

antlrcpp::Any Pass1Visitor::visitUnsignedNumberExpr(CParser::UnsignedNumberExprContext *ctx)
{
	auto value = visitChildren(ctx);
	ctx->type = ctx->number()->type;
	return value;
}

antlrcpp::Any Pass1Visitor::visitParenExpr(CParser::ParenExprContext *ctx)
{
	auto value = visitChildren(ctx);
	ctx->type = ctx->expr()->type;
	return value;
}

antlrcpp::Any Pass1Visitor::visitVariableExpr(CParser::VariableExprContext *ctx)
{
	string variable_name = ctx->variable()->IDENTIFIER()->toString();

	// set variable type through lookup
	if (function_names.size() == 0) {
		SymTabEntry *variable_id = symtab_stack->lookup(variable_name);
		ctx->type = variable_id->get_typespec();
	}
	// set variable type through SymTabEntries search
	else {
		for (SymTabEntry *entry : variable_id_list) {
			if (entry->get_name() == variable_name) {
				ctx->type = entry->get_typespec();
				break;
			}
		}
	}

	return visitChildren(ctx);
}

