#include <stdio.h>
#include <math.h>
int main( )
{
	for (int i = 100; i < 1000; i++) {
		int a = i / 100;
		int b = (i / 10) % 10;
		int c = i % 10;
		if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i) {
			printf("%d\n",i);
		}
	}
	return 0;
}
