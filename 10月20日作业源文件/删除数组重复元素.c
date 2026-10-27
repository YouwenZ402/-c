#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input(int group[10]) {
	for (int i = 0; i <= 9; i++) {
		scanf("%d", &group[i]);
	}
}

int main() {
	int group[10];
	int unique[10] = { 0 };
	input(group);
	unique[0] = group[0];

	int count = 1, same;

	for (int j = 1; j <= 9; j++) {
		for (int k = 0; k < j; k++) {
			same = 0;
			if ((group[j]) == group[k]) {
				same = 1;
				break;
			}
		}
		if (same == 0) {
			unique[count] = group[j];
			count++;
		}
		;
	}
	for (int i = 0; i < count; i++) {
		printf("%d ", unique[i]);
	}

	return 0;
}