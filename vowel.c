%{
#include<stdio.h>
int v=0;
int c=0;
%}
%%
[aeiouAEIOU] {v++;}
[a-zA-Z] {c++;}
%%
int yywrap()
{}
int main()
{
yylex();
printf("No of Vowels are=%d\n",v);
printf("No of Consonants are=%d\n",c);
return 0;
}