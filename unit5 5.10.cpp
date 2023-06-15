#include <stdio.h>
float Round(float x);
int main()
{
	float one;
	float two;
	float three;
	float i;
	int c;
	for(c=1; c<=3; c++)
	{
		printf("%d. Input any positive number of the floor length: ",c);
		scanf("%f",&i);
		if(c==1)
		{
			one=i;
		}
		else if(c==2)
		{
			two=i;
		}
		else
		{
			three=i;
		}
	}
	printf("\n\nthe Number enter was %.2f and ronded up to %.2f\n",one, Round(one));
	printf("the Number enter was %.2f and ronded up to %.2f\n",two, Round(two));
	printf("the Number enter was %.2f and ronded up to %.2f\n",three, Round(three));
	return 0;
}
float Round(float x)
{
	int c;
	c=x;
	if(x-c > 0)
	{
		return x+0.5;
	}
	else
	{
		return x;
	}
}
