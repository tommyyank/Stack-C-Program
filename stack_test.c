#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#define OFFSET 32
//this code will print the stack three times
//define the function created in stack.c
/*
*main() calls print_stack() function and the function f1() with an unsigned integer 10
*returns 0 if functions are called correctly
*/
int main()
{
    print_stack("test", OFFSET);
    f1(10);
    return 0;
}
/*
*f1() calls print_stack() and has a local string variable
*The string variable is passed to function f2()
*@param1 unsigned int i: unsigned int that is passed to the function
*/
void f1(unsigned int  i)
{
  print_stack("test2", OFFSET);
  char string[4] = {'A', 'B', 'C', 'D'};
  f2(string);
}

/*
*The function f2() calls the print_stack() function
*@param1 char *stringpointer: passes a string to the function
*/
void f2(char *stringpointer)
{

print_stack("test3", OFFSET);
}
