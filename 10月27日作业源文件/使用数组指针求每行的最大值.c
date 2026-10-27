#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void row_max(int (*p)[4], int result[3]) {
	for (int i = 0; i < 3; i++) {
		int max = *(*(p + i) + 0);
		for (int j = 0; j < 4; j++) {
			if (*(*(p + i) + j) >= max) {
				max = *(*(p + i) + j);
				result[i] = max;
			}
		}
	}
}

int main() {
	int array[3][4] = { 0 };
	int (*p0)[4];
	p0 = array;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &*(*(array + i) + j));
		}
	}
	int result[3];
	row_max(array, result);
	printf("%d %d %d", result[0], result[1], result[2]);
}