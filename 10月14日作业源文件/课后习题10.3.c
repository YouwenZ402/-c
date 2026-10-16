#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input(int group[10]) {
	for (int i = 0; i <= 9; i++) {
		scanf("%d", &group[i]);
	}
}

void output(int group[10]) {
	for (int i = 0; i <= 9; i++) {
		printf("%d ", group[i]);
	}
}

void change(int group[10]) {
	int min=0, max=0;
	for (int i = 1; i <= 9; i++) {
		if (group[i] >= group[max]) { max = i; }
		if (group[i] < group[min]) { min = i; }
	}

	int temp;
	temp = group[0];
	group[0] = group[min];
	group[min] = temp;

	if (max == 0) {
		max = min;
	}

	temp = group[9];
	group[9] = group[max];
	group[max] = temp;
}

int main() {
	int group[10];
	input(group);
	change(group);
	output(group);

	return 0;
}
