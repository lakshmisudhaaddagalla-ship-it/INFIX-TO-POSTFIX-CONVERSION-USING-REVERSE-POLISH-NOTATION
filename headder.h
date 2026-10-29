#include <stdio.h> #include <stdlib.h>

#define SIZE 100


extern char stack[SIZE]; extern int top;

void push(char ch); char pop();

int precedence(char ch);


void convert(char infix[]);
