#include <stdio.h>
int main()
{
  int i, j, NumAst;
    for (i = 0; i < 5; i++)
    {
      printf("Insert a number 1 < n < 30 "); 
	  scanf("%d", &NumAst);
      if(NumAst >= 1 && NumAst <= 30) {
      for(j = 0; j < NumAst; j++) printf("*");
      printf("\n");
    }
  else
   printf("Number of asterisk inserted is not correct!\n\a");
 }
  return 0;
}
