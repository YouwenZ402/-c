#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void row(int (*p)[4], int result[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			result[i][j] = *(*(p + i) + j) + (*(*(p + i) + j + 1)) * 2 + (*(*(p + i + 1) + j)) * 2 + *(*(p + i + 1) + j + 1);
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%d %d %d\n", result[i][0], result[i][1], result[i][2]);
	}
}

int main() {
	int A[4][4] = { 0 };
	int (*p0)[4];
	p0 = A;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &*(*(A + i) + j));
		}
	}
	int result[3][3];
	row(A, result);

	return 0;
}