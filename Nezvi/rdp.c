#include<stdio.h>
#include<string.h>
#include<ctype.h>
char input[10];
int i,error;
void E();
void T();
void Eprime();
void Tprime();
void F();
void main()
{
 i=0;
 error=0;
 printf("The grammer is:\n");
 printf("E->TE' \n");
 printf("E->+TE'|epsilon\n");
 printf("E->FT\n");
 printf("T->*FT'|epsilon\n");
 printf("F->(E)|id\n");
 printf("Enter the input (in the form of arithmetic expression with +,* and 0):\n");
 scanf("%s",input);
 E();
 if(strlen(input)==i && error==0)
 printf("\nAccepted..!!!\n");
 else
  printf("\nRejected..!!!\n");
}
void E()
{
 T();
 Eprime();
}
void Eprime()
{
 if(input[i]=='+')
 {
  i++;
  T();
  Eprime();
 }
}
void T()
{
 F();
 Tprime();
}
void Tprime()
{
 if(input[i]=='*')
 {
  i++;
  F();
  Tprime();
 }
}
void F()
{
 if(isalnum(input[i]))
 i++;
 else if(input[i]=='(')
 {
  i++;
  E();
  if(input[i]==')')
  i++;
  else error=1;
 }
 else error=1;
}
