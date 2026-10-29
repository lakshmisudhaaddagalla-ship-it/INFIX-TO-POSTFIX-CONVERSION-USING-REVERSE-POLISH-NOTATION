#include "header.h"
int precedence(char ch)
{
switch(ch)
{
case '^': return 3;

case '*':
case '/': return 2;

case '+':
case '-': return 1;

default: return 0;
}
}
