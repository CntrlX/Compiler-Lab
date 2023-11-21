%{
int v=0,c=0;
%}
%%
[aeiouAEIOU] {v++;}
[a-zA-Z] {c++;}
%%
void main()
{
	printf("Enter string \n");
	yylex();
	printf("\n Number of vowels= %d",v);
	printf("\n Number of consonants= %d \n",c);
}
