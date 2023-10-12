%{
int v=0,c=0;
%}
%%
[aeiouAEIOU] {v++;}
[a-zA-Z] {c++;}
%%
void main()
{
printf("enter the dtring\n");
yylex();
printf("no.of vowels=%d\n",v);
printf("no.of consonents= %d\n",c);
}
