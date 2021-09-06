#include<stdio.h>
int isPrime(int a)
{
	for (int b = 2; b < a; b++) {
		if (a % b == 0)
			return 0;
		else
			return 1;
	}
}
int main()
{
	int n;
	scanf_s("%d", &n);
	if (isPrime(n) == 1)
		printf("Prime Number");
	else
		printf("Not Prime Number");
	return 0;
}
