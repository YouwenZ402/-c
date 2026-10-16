#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pow(int x, int y) {
	int sum = 1;
	for (int i = 1; i <= y; i++) {
		sum *= x;
	}

	return sum;
}


int fun(long n, long* hw) {
	int count = 0;
	while (1) {
		int i = 1;
		for (i = 1; ; i++) {
			if (n / pow(10, i) == 0) { break; }
		}
		int sum = 0;
		int k = n;
		for (int j = 1; j <= i; j++) {
			sum = sum + k % 10 * pow(10, i - j);
			k = k / 10;
		}
		if (n == sum) { 
			*hw = sum;
			return count;
		}
		if (count == 10000) {
			return -1;
		}
		n = n + sum;
		count++;
	}

}

int main() {
	long a, b;
	scanf("%ld", &a);
	fun(a, &b);
	int c = fun(a, &b);

	if (c == -1) { printf("error"); }
	else {
		printf("%ld,%d", b, c);
	}

	return 0;

}