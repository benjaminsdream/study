%{
#include<stdio.h>
%}
%%
[a-zA-Z][a-zA-Z0-0]* printf("WORD ");
[a-zA-Z\/.-]+ 		 printf("FILENAME ");
\"					 printf("QUOTE ");
\{					 printf("OBRACE ");
\}					 printf("EBRACE ");
;					 printf("SEMICOLON ");
\n					 printf("\n");
[ \t]				 /* ignore whitespace*/
%%
