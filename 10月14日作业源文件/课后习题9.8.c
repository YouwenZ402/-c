#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX3(a,b,c) ((a)>(b)? ((a)>(c)? (a):(c)):((b)>(c)? (b):(c)))

double max(double x, double y, double z) {
	double biggest = x;
	if (y >= biggest) biggest = y;
	if (z >= biggest) biggest = z;

	return biggest;
}

int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	max(a, b, c);
	printf("%.3f\n", max(a, b, c));
	MAX3(a, b, c);
	printf("%.3f\n", MAX3(a, b, c));

	return 0;
}