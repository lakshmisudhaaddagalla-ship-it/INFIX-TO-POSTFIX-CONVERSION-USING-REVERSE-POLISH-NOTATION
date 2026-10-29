#include "header.h"
char stack[SIZE];
int top = -1;
void push(char ch)
{
stack[++top] = ch;
}
char pop()
{
return stack[top--];
}
