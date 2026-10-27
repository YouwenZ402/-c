#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int group[10];
	for (int i = 0; i <= 9; i++) {
		scanf("%d", &group[i]);
	}

	int count = 1,same;
	for (int j = 1; j <= 9;j++ ) {
		for (int k = 0; k < j;k++) {
			same=0;
			if ((group[j]) == group[k]) {
				same = 1;
				break;
			}
		}
		if (same == 0) count++;
		;
	}
	printf("%d", count);

	return 0;
}