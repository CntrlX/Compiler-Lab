%{
#include<stdio.h>
#include<stdlib.h>
%}
%token DIGIT ALPHA
%%
var:ALPHA 
|var ALPHA
|var DIGIT;
%%
int main(int argc,char *argv[])
{
 printf("Enter a variable name:");
 yyparse();
 printf("Valid variable!\n");
 return 0;
}
int yyerror()
{
 printf("Invalid variable!\n");
 exit(1);
}
