#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A[2][3] = { {1,2,3},{4,5,6} };
	int B[3][4];
	int (*p)[4];
	p = B;
	for ( p = B; p <B+3; p++) {
		for (int i = 0; i < 4; i++) {
			scanf("%d", &(*p)[i]);
		}
	}
	

	int C[2][4] = { 0 };

	for (int i = 0; i <4 ; i++) {
		for (int j = 0; j < 3; j++) {
			C[0][i] += A[0][j] * B[j][i];
		}
	}

	for (int k = 0; k < 4; k++) {
		C[0][k]++;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			C[1][i] += A[1][j] * B[j][i];
		}
	}

	for (int k = 0; k < 4; k++) {
		C[1][k]+=2;
	}


	int (*p1)[4];
	p1 = C;
	for (p1 = C; p1 < C + 2; p1++) {
		printf("%d %d %d %d\n", (*p1)[0], (*p1)[1], (*p1)[2], (*p1)[3]);
	}
	return 0;
}