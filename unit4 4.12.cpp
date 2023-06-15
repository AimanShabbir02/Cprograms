#include <stdbool.h>
#include <stdio.h>
bool isPrime(int n)
{
	if (n == 1 || n == 0)
		return false;
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int N = 100;
	for (int i = 1; i <= N; i++) {
		if (isPrime(i))
			printf("%d ", i);
	}
	return 0;
}

