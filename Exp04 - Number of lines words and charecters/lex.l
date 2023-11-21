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
printf("enter thr program\n");
yylex();
printf("\n no.of lines=%d",lc);
printf("\n no.of charecters=%d",ch);
printf("\n no.of words= %d",lc+sc);
}
