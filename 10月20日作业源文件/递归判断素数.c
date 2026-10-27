#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int CanBeDivided(int dividend, int divisor) {
	if (divisor < 2)
		return 1;
	if (dividend % divisor == 0)
		return 0;
	return CanBeDivided(dividend, divisor - 1);
}

int IsPrime(int a) {
	CanBeDivided(a, a - 1);
	if (CanBeDivided(a, a - 1) == 1)
		return 1;
	return 0;

}

int main() {
	int a;
	scanf("%d", &a);
	printf("%d\n", IsPrime(a));

	return 0;
}