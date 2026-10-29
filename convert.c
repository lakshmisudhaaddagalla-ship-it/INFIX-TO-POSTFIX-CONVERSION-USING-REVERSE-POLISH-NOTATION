#include "header.h"
void convert(char infix[])
{
char postfix[SIZE]; int i = 0, j = 0; char ch;
top = -1;
while(infix[i] != '\0')
{
ch = infix[i];
if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
{
postfix[j++] = ch;
}
else if(ch == '(')
{
push(ch);
}
else if(ch == ')')
{
while(top != -1 && stack[top] != '(')
{
postfix[j++] = pop();
}
if(top != -1)
pop();
}
else
{
while(top != -1 && stack[top] != '(' && (precedence(stack[top]) > precedence(ch) || (precedence(stack[top]) == precedence(ch) && ch != '^')))
&& ch != '^')))
{
postfix[j++] = pop();
}
  push(ch);
}
i++;
}
while(top != -1)
{
postfix[j++] = pop();
}
postfix[j] = '\0';
 printf("Postfix expression: %s\n", postfix);
}
