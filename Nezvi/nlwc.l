%{
#include<stdio.h>
#include<string.h>
int wc=0,lc=0,ch=0,sc=0;
%}
%%
\n lc++;
[ ] sc++;
[^\t\n] ch++;
%%
void main()
{
	printf("Enter program \n");
	yylex();
	printf("\n Number of lines= %d",lc);
	printf("\n Number of characters= %d \n",ch);
	printf("\n Number of words= %d",lc+sc);
}
