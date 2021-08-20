grammar C;

@header {
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}

program     : ( func )* header main_block ;
header      : VOID MAIN '(' (parm_decl_list)* ')' ;
main_block  : '{' (decl_list)? main ;
main	    : (stmt_list)? main_closing '}' ;
main_closing: RETURN ';' ;

decl_list      : var_list ( ';' var_list)* ';';
var_list       : var_type var_name ( ',' var_name)* ;
var_name       : IDENTIFIER ; //varId
var_type	   : types ; //typeId


types locals [ TypeSpec *type = nullptr ]
        : INTEGER #integerType
        | FLOAT #floatType
        | VOID #voidType
        ;

stmt
    : assignment_stmt ';' #assignmentStmt
    | if_stmt #ifStmt
    | do_while_stmt ';' #doWhileStmt
    | func_assignment #funcAssignmentStmt
    | func_call ';' #funcCallStmt
    | printf_stmt ';' #printfStmt //not overriding this one.
    ;

stmt_list          : stmt ( stmt )*;
assignment_stmt    : variable '=' expr ;
if_stmt			   : if_part then_part ;
if_part            : IF if_rel_expr ;
then_part		   : '{' stmt_list '}';
do_while_stmt      : do_stmt while_stmt ;
do_stmt            : DO '{' stmt_list '}' ;
while_stmt         : WHILE do_while_rel_expr;
func_assignment    : func_name '=' stmt ;
func_call          : func_name '(' (call_param_list)* ')';
call_param_list    : parm ( ',' )? ;

func         : func_decl func_block ;
func_decl    : var_type var_name '(' ( parm_decl_list )? ')' ;
func_block   : '{' (decl_list)? (func_stmt_list)? func_closing '}' ;
func_closing : RETURN func_name ';' ;

func_stmt_list 
			 : func_add #func_add_stmt
			 | #empty_func_stmt
			 ;
			 
func_add 	 : variable '=' variable '+' variable ';' ;

parm_decl_list : parm_decl ( ',' parm_decl )* ;
parm_decl      : var_type var_name ;


if_rel_expr        : '(' expr rel_op expr ')' ;
do_while_rel_expr  : '(' expr rel_op expr ')' ;


printf_stmt      : 'printf' '("' our_string '"' (',' expr)* ')';
our_string       : IDENTIFIER '-->' PRINT_IDENTIFIER;

variable : IDENTIFIER;

func_name locals [ TypeSpec *type = nullptr ]
    : variable;

parm locals [ TypeSpec *type = nullptr ]
    : expr;
    
expr locals [ TypeSpec *type = nullptr ]
    : expr mul_div_op expr #mulDivExpr
    | expr add_sub_op expr #addSubExpr
    | number #unsignedNumberExpr
    | signedNumber #signedNumberExpr
    | variable #variableExpr
    | '(' expr ')' #parenExpr
    | t_f_op #boolExpr
    ;

signedNumber locals [ TypeSpec *type = nullptr ] 
    : sign number 
    ;
sign      : '+' | '-' ;

number locals [TypeSpec *type = nullptr]
    : INTEGER_NUM #integerNumConst
    | FLOAT_NUM #floatNumConst
    ;

mul_div_op : MUL_OP | DIV_OP ;
add_sub_op : ADD_OP | SUB_OP ;
rel_op     : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ;
t_f_op     : TRUE | FALSE ;

INTEGER  : 'int' ;
FLOAT    : 'float' ;
VOID     : 'void' ;
RETURN   : 'return' ;
IF       : 'if' ;
TRUE     : 'true' ;
FALSE    : 'false' ;
MAIN     : 'main' ;
DO       : 'do' ;
WHILE    : 'while' ;

IDENTIFIER     :  [a-zA-Z][a-zA-Z0-9]* ;
PRINT_IDENTIFIER: '%' [a-z]; // (%) <-- accounts for us having variables to print.
                
INTEGER_NUM    : [0-9]+ ;
FLOAT_NUM     : INTEGER_NUM '.' INTEGER_NUM  ;

MUL_OP     : '*' ;
DIV_OP     : '/' ;
ADD_OP     : '+' ;
SUB_OP     : '-' ;

EQ_OP     : '==' ;
NE_OP     : '<>' ;
LT_OP     : '<' ;
LE_OP     : '<=' ;
GT_OP     : '>' ;
GE_OP     : '>=' ;

NEWLINE : '\r'? '\n' -> skip;
WS      : [ \t]+ -> skip;