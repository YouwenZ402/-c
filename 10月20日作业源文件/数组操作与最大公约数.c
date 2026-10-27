#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void compare(int x, int y, int* bigger, int* smaller) {
	if (x >= y) {
		*bigger = x;
		*smaller = y;
	}
	else {
		*bigger = y;
		*smaller = x;
	}
}

int gcd(int x, int y) {
	int max, min;
	compare(x, y, &max, &min);
	if (max % min == 0) {
		return min;
	}
		return gcd(min, (max % min));
}



int Del_findgcd(int a[], int n, int *f) {
	int even[5];
	int even_count = 0;
	for (int i = 0; 2 * i < n; i++) {
		even[i] = a[2*i];
		even_count++;
	}
	int g = gcd(even[0], even[1]);
	for (int j = 2; j <=even_count-1; j++) {
		g = gcd(g, even[j]);
	}
	*f = g;
	for (int k = 0; k < even_count-1; k++) {
		printf("%d ", even[k]);
	}
	printf("%d, max common divisor is %d.", even[even_count-1], *f);

	return even_count;
}

int main() {
	int test[10];
	for (int i = 0; i <= 9; i++) {
		scanf("%d", &test[i]);
	}
	int n = 10;
	int result;
	Del_findgcd(test, n, &result);

	return 0;
}

