#include <stdio.h>
int main()
{
  int num1, num2, j, temp, num, rmd;
  printf(" Enter the interval for Armstrong Numbers: ");
  scanf("%d %d", &num1, &num2); 
  printf(" The Armstrong Numbers Between %d an %d are: ", num1, num2);
  for(j=num1+1; j<num2; ++j)
  {
      temp=j;
      num=0;
      while(temp!=0)
      {
          rmd=(temp%10);
          num+=rmd*rmd*rmd;
          temp/=10;
      }
      if(j==num)
      {
      	printf("%d ",j); 
      }
  }
  return 0;
}
