#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int smallest;

void min(int x, int y, int z) {
	smallest = x;
	if (y <= smallest) {
		smallest = y;
	}
	if (z <= smallest) {
		smallest = z;
	}
}


int main() {
	int ugly[101];
	ugly[0] = 1;

	int i2 = 0,i3 = 0,i5 = 0;
	int series_2, series_3, series_5;
	int count = 1;
	for (count = 1; count <= 100; count++) {
		series_2 = ugly[i2] * 2;
		series_3 = ugly[i3] * 3;
		series_5 = ugly[i5] * 5;
		min(series_2, series_3, series_5);
		ugly[count] = smallest;

		if (series_2 == smallest) {
			i2++;
		}
		if (series_3 == smallest) {
			i3++;
		}
		if (series_5 == smallest) {
			i5++;
		}

	}
	printf("%d\n", ugly[100]);

	return 0;
}