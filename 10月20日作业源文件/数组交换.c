#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int isprime(int x) {
	if (x == 0 || x == 1)
		return 0;
	if (x == 2) return 1;

	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}

void input(int group[10]) {
	for (int i = 0; i <= 9; i++) {
		scanf("%d", &group[i]);
	}
}

int main() {
	int group[10];
	input(group);

	int new[10] = { 0 };
	int count = 0;
	for (int i = 0; i <= 9; i++) {
		isprime(group[i]);
		if (isprime(group[i])) {
			new[count] = i;
			count++;
		}
	}
	for (int j = 0; j < count/2; j++) {
		int temp;
		temp = group[new[j]];
		group[new[j]] = group[new[count - j - 1]];
		group[new[count - j - 1]] = temp;

	}
	for (int k = 0; k <= 9; k++) {
		printf("%d ", group[k]);
	}


	return 0;
}