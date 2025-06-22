#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
#include<cstdio>
using namespace std;
struct Lab{
	string pdfpath="C:\Users\j\OneDrive\Desktop\C++ programs\PF lab prgrams\Lab Solutions\Programming lab 11.pdf";
    string outputfilepath=""
};
struct Theory{
	string function_a="\n\tA function in C++ is a self-contained block of code that performs a specific task. \n\tFunctions are used to break down a program into smaller, manageable pieces, making code modular and more readable.\n\t Functions improve code reuse and maintainability.";
string function_b="\n\n\treturn_type function_name(parameters) { Function bodyCode to perform the taskreturn result;  Optional return statement}";
 string function_c="\n\n\t A Function must be delcared before use the three parts of function in logical order are function prototype, function definition and function call";
  string function=function_a+function_b+function_c;
string controlFlow_a="\n\t1. Sequential Execution:\n\n\tThe default control flow.\n\tStatements are executed one after another in the order in which they appear.";
string controlFlow_b="\n\t2. Conditional Execution (Selection):\n\n\tAllows the program to make decisions based on conditions.\n\tControlled by if, else if, and else statements.";
string controlFlow_c="\n\t3. Repetitive Execution (Iteration/Looping)\n\t:Allows a block of code to be executed repeatedly.\n\tControlled by for, while, and do-while loops.";
string controlFlow=controlFlow_a+controlFlow_b+controlFlow_c;
string dynamic_a="\n\tDynamic memory in C++ refers to the memory allocation and deallocation processes that occur during program execution at runtime.";
 string dynamic_b="\n\tUnlike static memory allocation (which occurs at compile time), dynamic memory allows for the allocation and release of memory during program execution, \nproviding more flexibility and adaptability.";
string Dynamic_memory=dynamic_a+dynamic_b;
string Pointer_a="\n\tA pointer is a variable that stores the memory address of another variable.\n\tIt provides a way to indirectly access the value stored in the memory location it points to.";
string Pointer_b="\n\tPointers allow dynamic memory allocation, passing addresses to functions, and efficient array manipulation.";
string Pointer=Pointer_a+Pointer_b;

};
struct PF{
	Lab lb;
	Theory th;
};
struct Notes{
	string PRE,ICT;
	PF p;
}note;
int main()
{
cout<<note.p.lb;

return 0;}

