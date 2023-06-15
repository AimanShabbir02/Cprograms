#include <stdio.h>
int main()
{
	int bs,hr,ma,ca;
	printf("enter basic salary:");
	scanf("%d",&bs);
	hr = bs*15/100;
	printf("hr = %d\n",hr);
	ma = bs*10/100;
	printf("ma = %d\n",ma);
	ca = bs*5/100;
	printf("ca = %d\n",ca);
	printf("total salary = %d",hr+ma+ca);
}
