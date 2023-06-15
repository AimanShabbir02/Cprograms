#include <stdio.h>
int main()
{
	int a,b,percentage;
	printf("enter total marks: ");
	scanf("%d",&a);
	printf("enter obtained marks: ");
	scanf("%d",&b);
	percentage = b*100/a;
	printf("percentage=%d\n",percentage);
}
