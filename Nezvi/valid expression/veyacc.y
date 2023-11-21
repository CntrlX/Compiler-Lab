%{
#include<stdio.h>
int flag=0;
%}
%token NUMBER
%left'+''-'
%left'*''/''%'
%left'('')'
%%
ArithmaticExpression:E{
	printf("\nResult= %d\n",$$);
	return 0;
	}
E:E'+'E{$$=$1+$3;}
|E'-'E{$$=$1-$3;}
|E'*'E{$$=$1*$3;}
|E'/'E{$$=$1/$3;}
|E'%'E{$$=$1%$3;}
|'('E')'E{$$=$2;}
|NUMBER {$$=$1;}
;
%%
void main()
{
printf("\nEnter any arithmatic expression which can have operations addition, subtraction, multiplication, division , modulus and round brackets: \n");
yyparse();
if(flag==0)
printf("\n Entered arithmetic expression is valid\n\n");
}
void yyerror()
{
printf("\nEntered arithmetuc expression is invalid\n\n");
flag=1;
} 
	
