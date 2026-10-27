#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void  convert(int a, int n) {
	char map[] = "0123456789ABCDEF";
	if (a == 0) return;
	convert(a / n, n);

	int r = a % n;
	printf("%c", map[r]);
	return;
}

int main() {
	int a,n;
	scanf("%d %d", &a,&n);
	convert(a, n);

	return 0;
}