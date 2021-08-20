#include <iostream>
#include <string>

#include "Pass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;

static int branch_label = 0;

Pass2Visitor::Pass2Visitor(ostream& j_file)
    : program_name(""), j_file(j_file)
{
//	cout << "Calling Pass2Visitor Constructor" << endl;
}

Pass2Visitor::~Pass2Visitor() {}

antlrcpp::Any Pass2Visitor::visitProgram(CParser::ProgramContext *ctx)
{

//	cout << "[Pass2Visitor] - visiting visitProgram" << endl;
    auto value = visitChildren(ctx);
    return value;
}

antlrcpp::Any Pass2Visitor::visitHeader(CParser::HeaderContext *ctx)
{

//	cout << "\n[Pass2Visitor] - visiting visitHeader" << endl;
    program_name = "C_main";
    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitMain(CParser::MainContext *ctx)
{
//	cout << "[Pass2Visitor] - visiting MAIN" << endl;
    // Emit the main program header.
    j_file << endl;
    j_file << ".method public static main([Ljava/lang/String;)V" << endl;
    j_file << endl;
    j_file << "\tnew RunTimer" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
    j_file << "\tputstatic        " << program_name
           << "/_runTimer LRunTimer;" << endl;
    j_file << "\tnew PascalTextIn" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
    j_file << "\tputstatic        " + program_name
           << "/_standardIn LPascalTextIn;" << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitMain_closing(CParser::Main_closingContext *ctx){

//	cout << "[Pass2Visitor] - Visiting visitMain_closing" << endl;
	auto value = visitChildren(ctx);
    // Emit the main program epilogue.
    j_file << endl;
    j_file << "\tgetstatic     " << program_name
           << "/_runTimer LRunTimer;" << endl;
    j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
    j_file << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 16" << endl;
    j_file << ".limit stack 16" << endl;
    j_file << ".end method" << endl;
    return value;
}

antlrcpp::Any Pass2Visitor::visitFunc_closing(CParser::Func_closingContext *ctx)
{
	//Visit Function closing and print out the function type, along with stack and local variable limits.
	auto value = visitChildren(ctx);
	string data_type;
	if (ctx->func_name()->type == Predefined::integer_type){
		data_type = "i";
	} else if (ctx->func_name()->type == Predefined::real_type){
		data_type = "f";
	} else {
		data_type = "?";
	}
	j_file << "\t" << data_type << "return" << endl;
	j_file << endl;
	j_file << ".limit stack 8" << endl;
	j_file << ".limit locals 8" << endl;
	j_file << ".end method" << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitFunc(CParser::FuncContext *ctx) {
//	cout << "inside visitFunc" << endl;
	// set return type
	string type_name = ctx->func_decl()->var_type()->getText();
	if (type_name == "int") {
		ctx->func_block()->func_closing()->func_name()->type = Predefined::integer_type;
	}
	else if (type_name == "float") {
		ctx->func_block()->func_closing()->func_name()->type = Predefined::real_type;
	}
	else if (type_name == "void") {
		ctx->func_block()->func_closing()->func_name()->type = Predefined::undefined_type;
	}
	else {
		ctx->func_block()->func_closing()->func_name()->type = Predefined::undefined_type;
	}

	auto value = visitChildren(ctx);

	function_names.pop();

	return value;
}

antlrcpp::Any Pass2Visitor::visitFunc_decl(CParser::Func_declContext *ctx)
{
	//Visit Function declaration (parses the data type of the function and parameters)
	string func_name = ctx->var_name()->getText();
    string type_name = ctx->var_type()->getText();
    string type_indicator,
			parameter_type,
			parameters = "";

    if (type_name == "int") {
    	type_indicator = "I";
    }
	else if (type_name == "float") {
		type_indicator = "F";
	}
	else if (type_name == "void") {
		type_indicator = "V";
	}
	else {
		type_indicator = "?";
	}

    int parm_decl_list_size = ctx->parm_decl_list()->parm_decl().size();
    for(int i = 0; i < parm_decl_list_size; i++)
    {
    	parameter_type = ctx->parm_decl_list()->parm_decl()[i]->var_type()->getText();
    	if (parameter_type == "int")
        	parameters.append("I");
    	else if (parameter_type == "float")
    		parameters.append("F");
    	else
    		parameters.append("?");
    }
    //emit function definition header code.
	j_file << endl;
	j_file << ".method public static ";
	j_file << func_name << "(";
	j_file << parameters << ")";
	j_file << type_indicator << endl;

	function_names.push(func_name);

	return visitChildren(ctx);
};

antlrcpp::Any Pass2Visitor::visitSignedNumber(CParser::SignedNumberContext *ctx)
{
	//Visit method for a Signed Number.
//	cout << "Pass2 signednumber" << endl;
    auto value = visitChildren(ctx);
    TypeSpec *type = ctx->number()->type;

    if (ctx->sign()->children[0] == ctx->sign()->SUB_OP())
    {
        string opcode = (type == Predefined::integer_type) ? "ineg"
                      : (type == Predefined::real_type)    ? "fneg"
                      :                                      "?neg";

        // Emit a negate instruction.
        j_file << "\t" << opcode << endl;
    }

    return value;
}

antlrcpp::Any Pass2Visitor::visitIntegerNumConst(CParser::IntegerNumConstContext *ctx)
{
	//Visit method for a Constant number to be loaded into an integer variable.
//	cout << "[Pass2Visitor] - Visiting visitIntegerNumConst" << endl;

    // Emit a load constant instruction.
    j_file << "\tldc\t" << ctx->getText() << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitFloatNumConst(CParser::FloatNumConstContext *ctx)
{
	//Visit method for a Constant number to be loaded into an float variable.
//	cout << "[Pass2Visitor] - Visiting visitFloatNumConst" << endl;

    // Emit a load constant instruction.
    j_file << "\tldc\t" << ctx->getText() << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitAssignmentStmt(CParser::AssignmentStmtContext *ctx)
{
	//Visit method to visit assignment statement.
//	cout << "[Pass2Visitor] - Visiting Assignment Statement" << endl;
	j_file << endl << "; " + ctx->assignment_stmt()->getText() << endl << endl;

	auto value = visit(ctx->assignment_stmt()->expr());
	//Check type of variable (expr can be a variable for this case)
    string type_indicator =
                  (ctx->assignment_stmt()->expr()->type == Predefined::integer_type)   ? "I"
                : (ctx->assignment_stmt()->expr()->type == Predefined::real_type)      ? "F"
                : (ctx->assignment_stmt()->expr()->type == Predefined::char_type)      ? "C"
                : (ctx->assignment_stmt()->expr()->type == Predefined::boolean_type)   ? "Z"
                : (ctx->assignment_stmt()->expr()->type == Predefined::undefined_type) ? "V"
                :                                                     "?";
    //Get current func name.
    string current_func_name = "";
	if (function_names.size() == 0) {
		current_func_name = program_name;
	}
	else {
		current_func_name = function_names.top();
	}

    // Emit a field put instruction.
    j_file << "\tputstatic\t" << current_func_name
           << "/" << ctx->assignment_stmt()->variable()->IDENTIFIER()->toString()
           << " " << type_indicator << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitFuncAssignmentStmt(CParser::FuncAssignmentStmtContext *ctx)
{
	//Visit method to allow an identifier to be assigned the value returned by a function
	auto value = visitChildren(ctx);
	//Check type of both the function (what it returns)
    TypeSpec* var_type = ctx->func_assignment()->func_name()->type;
    string type_indicator = "";
    if (var_type == Predefined::integer_type)
    	type_indicator = "I";
    else if (var_type == Predefined::real_type)
    	type_indicator = "F";
    else
    	type_indicator = "?";

    // Emit a field put instruction.
    j_file << "\tputstatic\t" << program_name
           << "/" << ctx->func_assignment()->func_name()->getText()
           << " " << type_indicator << endl;
    return value;
}

antlrcpp::Any Pass2Visitor::visitFuncCallStmt(CParser::FuncCallStmtContext *ctx) {
	//Visit method for a Function Call. This parses the function call and emits code for invokestatic.
//	cout << "-----------visitFuncCallStmt-------------" << endl;

	j_file << endl;
	j_file << "; "<< ctx->getText() << endl << endl;
	auto value = visitChildren(ctx);

	string func_name = ctx->func_call()->func_name()->getText();
    // Get function return type
	string func_return_type = " ";
    //cout << func_name << endl;
	TypeSpec* my_type = ctx->func_call()->func_name()->type;
	if (my_type == Predefined::integer_type)
		func_return_type = "I";
	else if (my_type == Predefined::real_type)
		func_return_type = "F";
	else
		func_return_type = "?";
	// Get parameters data types
	string parameters = "";
	int size = ctx->func_call()->call_param_list().size();
	for(int i = 0; i < size; i++)
	{
		TypeSpec* my_parm_type = ctx->func_call()->call_param_list()[i]->parm()->type;
		if (my_parm_type == Predefined::integer_type)
			parameters.append("I");
		else if (my_parm_type == Predefined::real_type)
			parameters.append("F");
		else
			parameters.append("?");
	}
	// Emit a field get instruction.
	j_file << "\t" <<"invokestatic " << program_name
		   << "/" << func_name << "(" ;
	j_file << parameters;
	j_file << ")" << func_return_type << endl;

	return value;
}

antlrcpp::Any Pass2Visitor::visitIfStmt(CParser::IfStmtContext *ctx) {
//	cout << "[Pass2Visitor] - In visitIfStmt" << endl;
	j_file << endl << "; " + ctx->if_stmt()->getText() << endl << endl;
	auto value = visitChildren(ctx);
	j_file << "\t" << "ifeq" << "\tIF" << branch_label+2 << endl;
	j_file << "IF" << branch_label+2 << ":" << endl;
	branch_label = branch_label+3;
    return value;
}

antlrcpp::Any Pass2Visitor::visitIf_rel_expr(CParser::If_rel_exprContext *ctx)
{
//Visit method to evaluate an IF relational expression.
//	cout << "[Pass2Visitor] - In visitIf_rel_expr" << endl;

	auto value = visitChildren(ctx);

	TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    string expr_1   = ctx->expr(0)->getText();
    string expr_2   = ctx->expr(1)->getText();

    string type_indicator;

    // check if the same data types before comparing
    if (type1 == type2) {
        type_indicator =  (type1 == Predefined::integer_type)    ? "I"
                        : (type1 == Predefined::real_type)       ? "F"
                        : (type1 == Predefined::char_type)       ? "C"
                        : (type1 == Predefined::boolean_type)    ? "Z"
                        : (type1 == Predefined::undefined_type)  ? "V"
                        :                                          "?";
    }

    string op = ctx->rel_op()->getText();
    string opcode;

    //Emit opcode based on data type in relational expression
    if (type_indicator == "I") {
		if (op == "==") {
			opcode = "if_icmpeq";
		}
		else if (op == "<>") {
			opcode = "if_icmpne";
		}
		else if (op == "<") {
			opcode = "if_icmplt";
		}
		else if (op == "<=") {
			opcode = "if_icmple";
		}
		else if (op == ">") {
			opcode = "if_icmpgt";
		}
		else if (op == ">=") {
			opcode = "if_icmpge";
		}
		else {
			opcode = "????";
		}
    }

    else if (type_indicator == "F") {
		if (op == "==") {
			opcode = "if_fcmpeq";
		}
		else if (op == "<>") {
			opcode = "if_fcmpne";
		}
		else if (op == "<") {
			opcode = "if_fcmplt";
		}
		else if (op == "<=") {
			opcode = "if_fcmple";
		}
		else if (op == ">") {
			opcode = "if_fcmpgt";
		}
		else if (op == ">=") {
			opcode = "if_fcmpge";
		}
		else {
			opcode = "????";
		}
    }
    //The branch label is a static number that changes based on what code we are emitting.
    // Emit a rel instruction
    j_file << "\t" << opcode << "\t" << "IF" << branch_label << endl;
    if (type_indicator == "I"){
    	j_file << "\t" << "iconst_0" << endl;
    	j_file << "\t" << "goto" << "\tIF" << branch_label+1 << endl; //branch_label = branch_label++
    	j_file << "IF" << branch_label << ":" << endl;
    	j_file << "\t" << "iconst_1" << endl;
    	j_file << "IF" << branch_label+1 << ":" << endl;
    }
    else {
    	j_file << "\t" << "fconst_0" << endl;
		j_file << "\t" << "goto" << "\tIF" << branch_label+1 << endl; //branch_label = branch_label++
		j_file << "IF" << branch_label << ":" << endl;
		j_file << "\t" << "fconst_1" << endl;
		j_file << "IF" << branch_label+1 << ":" << endl;
    }

    return value;
}

antlrcpp::Any Pass2Visitor::visitDo_while_stmt(CParser::Do_while_stmtContext *ctx)
{
	//Visit method to evaluate an Do While statement. When we visit children in the middle of this statement,
	//we go into the Visit method visitDo_while_rel_expr.
    //The branch label is a static number that changes based on what code we are emitting.

//	cout << "[Pass2Visitor] - In visitDo_while_stmt " << endl;
	j_file << endl << "; " + ctx->do_stmt()->getText() << " " << ctx->while_stmt()->getText() << endl;
	j_file << endl << "DO_WHILE" << branch_label << ":" << endl;
	auto value = visitChildren(ctx);
	j_file << "\t" << "ifne" << "\tDO_WHILE" << branch_label+3 << endl;
	j_file << "\t" << "goto" << "\tDO_WHILE" << branch_label << endl;
	j_file << "DO_WHILE" << branch_label+3 << ":" << endl;
	branch_label += 4;
	return value;
}

antlrcpp::Any Pass2Visitor::visitDo_while_rel_expr(CParser::Do_while_rel_exprContext *ctx) {
	//Visit method to evaluate an Do While statement, part 2. This method is what creates the majority
	//of the branch labels that are emitted for a do while loop.
//	cout << "[Pass2Visitor] - In visitDo_while_rel_expr " << endl;

	auto value = visitChildren(ctx);

	TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    string expr_1   = ctx->expr(0)->getText();
    string expr_2   = ctx->expr(1)->getText();

    string type_indicator;

    // check if the same data types before comparing
    if (type1 == type2) {
        type_indicator =  (type1 == Predefined::integer_type)    ? "I"
                        : (type1 == Predefined::real_type)       ? "F"
                        : (type1 == Predefined::char_type)       ? "C"
                        : (type1 == Predefined::boolean_type)    ? "Z"
                        : (type1 == Predefined::undefined_type)  ? "V"
                        :                                       "?";
    }

    string op = ctx->rel_op()->getText();
    string opcode;
    //Emit opcode based on data type in relational expression
    if (type_indicator == "I") {
		if (op == "==") {
			opcode = "if_icmpeq";
		}
		else if (op == "<>") {
			opcode = "if_icmpne";
		}
		else if (op == "<") {
			opcode = "if_icmplt";
		}
		else if (op == "<=") {
			opcode = "if_icmple";
		}
		else if (op == ">") {
			opcode = "if_icmpgt";
		}
		else if (op == ">=") {
			opcode = "if_icmpge";
		}
		else {
			opcode = "????";
		}
    }

    else if (type_indicator == "F") {
		if (op == "==") {
			opcode = "if_fcmpeq";
		}
		else if (op == "<>") {
			opcode = "if_fcmpne";
		}
		else if (op == "<") {
			opcode = "if_fcmplt";
		}
		else if (op == "<=") {
			opcode = "if_fcmple";
		}
		else if (op == ">") {
			opcode = "if_fcmpgt";
		}
		else if (op == ">=") {
			opcode = "if_fcmpge";
		}
		else {
			opcode = "????";
		}
    }

    //The branch label is a static number that changes based on what code we are emitting.
    // Emit a rel instruction
    j_file << "\t" << opcode << "\t" << "DO_WHILE" << branch_label+1 << endl;
    if (type_indicator == "I") {
    	j_file << "\t" << "iconst_1" << endl;
    	j_file << "\t" << "goto" << "\tDO_WHILE" << branch_label+2 << endl; //branch_label = branch_label++
    	j_file << "DO_WHILE" << branch_label+1 << ":" << endl;
    	j_file << "\t" << "iconst_0" << endl;
    	j_file << "DO_WHILE" << branch_label+2 << ":" << endl;
    } else if (type_indicator == "F") {
    	j_file << "\t" << "fconst_1" << endl;
    	j_file << "\t" << "goto" << "\tDO_WHILE" << branch_label+2 << endl; //branch_label = branch_label++
    	j_file << "DO_WHILE" << branch_label+1 << ":" << endl;
    	j_file << "\t" << "fconst_0" << endl;
    	j_file << "DO_WHILE" << branch_label+2 << ":" << endl;
    }
    return value;
}

antlrcpp::Any Pass2Visitor::visitAddSubExpr(CParser::AddSubExprContext *ctx) {
	//Visit method for either addition or subtraction.
//	cout << "[Pass2Visitor] - In visitAddSubExpr" << endl;

    auto value = visitChildren(ctx);
    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;
    //Ensure that addition or subtraction is being done on the SAME data type.
    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);
    string op = ctx->add_sub_op()->getText();
    string opcode;
    ///Addition, emit opcode based on type detected
    if (op == "+")
    {
        opcode = integer_mode ? "iadd"
               : real_mode    ? "fadd"
               :                "????";
    }
    ///Subtraction, emit opcode based on type detected
    else
    {
        opcode = integer_mode ? "isub"
               : real_mode    ? "fsub"
               :                "????";
    }
    // Emit an add or subtract instruction.
    j_file << "\t" << opcode << endl;
    return value;
}

antlrcpp::Any Pass2Visitor::visitMulDivExpr(CParser::MulDivExprContext *ctx) {
	//Visit method for either Multiplication or Division.
//	cout << "In visitMulDivExpr" << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    //Ensure that multiplication or division is being done on the SAME data type.
    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode =    (type1 == Predefined::real_type)
                    && (type2 == Predefined::real_type);

    string op = ctx->mul_div_op()->getText();
    string opcode;
    //Multiplication, emit opcode based on type detected
    if (op == "*")
    {
        opcode = integer_mode ? "imul"
               : real_mode    ? "fmul"
               :                "????";
    }
    //Division, emit opcode based on type detected
    else
    {
        opcode = integer_mode ? "idiv"
               : real_mode    ? "fdiv"
               :                "????";
    }

    // Emit a multiply or divide instruction.
    j_file << "\t" << opcode << endl;
    return value;
}

antlrcpp::Any Pass2Visitor::visitVariableExpr(CParser::VariableExprContext *ctx) {
//Visit method for a Expression, in this case the expression is a 'Variable'
	//	cout << "[Pass2Visitor] - In visitIdentifierExpr" << endl;
	//Get variable name.
    string variable_name = ctx->variable()->IDENTIFIER()->toString();
    //Check type.
    TypeSpec *type = ctx->type;
    string type_indicator = (type == Predefined::integer_type)  ? "I"
                        : (type == Predefined::real_type)       ? "F"
                        : (type == Predefined::char_type)       ? "C"
                        : (type == Predefined::boolean_type)    ? "Z"
                        : (type == Predefined::undefined_type)  ? "V"
                        :                                       "?";
    //Get current function name
    string current_func_name = "";
    if (function_names.size() == 0) {
    	current_func_name = program_name;
    }
    else {
    	current_func_name = function_names.top();
    }

    // Emit a field get instruction.
    j_file << "\tgetstatic\t" << current_func_name
           << "/" << variable_name << " " << type_indicator << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitStmt_list(CParser::Stmt_listContext *ctx){
	//Visit method for visit Statement List. Should just return visitChildren.
//    cout << "[Pass2Visitor] - Visiting Statement List " << endl;
//    cout << ctx->getText() << endl;
	return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitPrintf_stmt(CParser::Printf_stmtContext *ctx) {
	//Visit method for a Printf statement.
//	cout << "pass 2 printf" << endl;
    j_file << endl << "; " << ctx->getText() << endl << endl;

    auto value = visitChildren(ctx);
    int size = ctx->expr().size(); // get size of Identifier list to allocate an array.
    //Get the PrintStream object, load in the string constant, create an array of size 'size' based on how many arguments there are.
    j_file << "\t" << "getstatic" << "\t" << "java/lang/System/out Ljava/io/PrintStream;" << endl;
    j_file << "\t" << "ldc" << "\t" << "\"" << ctx->our_string()->getText() <<  "\\" << "n" << "\"" <<  endl;
    j_file << "\t" << "iconst_" << size << endl;
    j_file << "\t" << "anewarray" << "\t" << "java/lang/Object" << endl;

    //duplicate the address off the array on to the top of the stack, and attempt a getstatic of the argument passed.
    for (int i = 0; i < size ; i++) {
        j_file << "\t" << "dup" << endl;
        j_file << "\t" << "iconst_" << i << endl;
        j_file << "\t" << "getstatic" << "\t" << program_name << "/" << ctx->expr()[i]->getText() << " " ;//How to determine the type for the Identifier?

        string current_data_type;
        string current_data_type_full_name;
        if (ctx->expr()[i]->type == Predefined::integer_type) {
            current_data_type = "I"; //for integer type.
            current_data_type_full_name = "Integer";
        }
        else if (ctx->expr()[i]->type == Predefined::real_type) {
            current_data_type = "F"; //for real type.
            current_data_type_full_name = "Float";
        }

        j_file << current_data_type << endl;
        j_file << "\t" << "invokestatic" << "\t" << "java/lang/" << current_data_type_full_name << ".valueOf(" << current_data_type << ")Ljava/lang/" << current_data_type_full_name << ";" << endl;
        //store the value into our array (the argument)
        j_file << "\t" << "aastore" << endl;
    }
    //invoke the Printstream.printf function
    j_file << "\t" << "invokevirtual" << "\t" <<"java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;" << endl;
    //Perform 2 pop operations  (only 1 pop was causing some execution errors...)
    j_file << "\t" << "pop" << endl << "\t" <<"pop" << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitFunc_add_stmt(CParser::Func_add_stmtContext *ctx)
{
	//Visit method for a VERY basic function: The add function. Takes 2 numbers from the top of the operand stack
	//via the iload_0, and iload_1. Only does addition on integers. Then stores the iadd value back into the variable
	//that was passed as the first param, and performs a iload_0.
	j_file << "\tiload_0" << endl;
	j_file << "\tiload_1" << endl;
	j_file << "\tiadd" << endl;
	j_file << "\tistore_0" << endl << endl;
	j_file << "\tiload_0" << endl;

	return visitChildren(ctx);
}
