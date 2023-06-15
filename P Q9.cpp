#include <stdio.h>
int main()
{
	int a,b,real_division,integer_division;
	printf("enter two numbers: ");
	scanf("%d %d",&a,&b);
	real_division= a%b;
	printf("real_division = %d\n",real_division);
	integer_division= a/b;
	printf("integer_division = %d\n",integer_division);
}
