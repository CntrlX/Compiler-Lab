#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
FILE *f1;
char c,str[10],operators[]="+-/%=";
int lineno=1,num=0,i=0,op=0;
printf("\nenter the c program\n");
f1=fopen("input.txt","w");
while((c=getchar())!=EOF)
putc(c,f1);
fclose(f1);
f1=fopen("input.txt","r");
printf("\n");
while((c=getc(f1))!=EOF)
{
if(isdigit(c))
{
num=c-48;
c=getc(f1);
while(isdigit(c))
{
num=num*10+(c-48);
c=getc(f1);
}
printf("%d is anumber\n",num);
ungetc(c,f1);
}
else if(isalpha(c))
{
i=0;
str[i++]=c;
c=getc(f1);
while(isdigit(c)||isalpha(c)||c=='_')
{
str[i++]=c;
c=getc(f1);
}
str[i++]='\0';
if(strcmp("auto",str)==0||strcmp("break",str)==0||strcmp("case",str)==0||strcmp("char",str)==0||strcmp("const",str)==0||strcmp("continue",str)==0||strcmp("default",str)==0||strcmp("do",str)==0||strcmp("double",str)==0||strcmp("else",str)==0||strcmp("enum",str)==0||strcmp("extern",str)==0||strcmp("float",str)==0||strcmp("for",str)==0||strcmp("goto",str)==0||strcmp("if",str)==0||strcmp("int",str)==0||strcmp("long",str)==0||strcmp("register",str)==0||strcmp("return",str)==0||strcmp("short",str)==0||strcmp("signed",str)==0||strcmp("sizeof",str)==0||strcmp("static",str)==0||strcmp("struct",str)==0||strcmp("switch",str)==0||strcmp("typedef",str)==0||strcmp("union",str)==0||strcmp("unsigned",str)==0||strcmp("void",str)==0||strcmp("volatile",str)==0||strcmp("while",str)==0)
printf("%s is a keyword\n",str);
else
printf("%s is a identifer\n",str);
ungetc(c,f1);
i=0;
}
else if(c==' '||c=='\t')
printf("\n");
else if(c=='\n')
lineno++;
else
{
if(c=='+'||c=='-'||c=='*'||c=='/'||c=='=')
printf("%c is an operator\n",c);
else
printf("%c is a special symbol\n",c);
}
}
printf("total no of lines are:%d\n",lineno);
fclose(f1);
}