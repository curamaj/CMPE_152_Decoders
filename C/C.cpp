#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "CLexer.h"
#include "CParser.h"
#include "Pass1Visitor.h"
#include "Pass2Visitor.h"

using namespace std;
using namespace antlrcpp;
using namespace antlr4;

int main(int argc, const char *args[])
{
    ifstream ins;
    ins.open(args[1]);

    ANTLRInputStream input(ins);
    CLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    CParser parser(&tokens);
    tree::ParseTree *tree = parser.program();

    Pass1Visitor *pass1 = new Pass1Visitor();
    pass1->visit(tree);

    ostream& j_file = pass1->get_assembly_file();

    Pass2Visitor *pass2 = new Pass2Visitor(j_file);
    pass2->visit(tree);

    return 0;
}
