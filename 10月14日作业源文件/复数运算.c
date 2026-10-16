#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double result, e, g;

void f(char op, double a, double b, double c, double d) {
	if (op == '+') {
		e = a + c;
		g = b + d;

	}
	if (op == '-') {
		e = a - c;
		g = b - d;
	}
	if (op == '*') {
		e = a*c-b*d;
		g = a*d+b*c;
	}

}
	int main() {
	double a, b, c, d;
	char op;
	scanf("(%lf+%lfi)%c(%lf+%lfi)", &a, &b, &op, &c, &d);
	f(op, a, b, c, d);
	printf("(%.6f+%.6fi)%c(%.6f+%.6fi)=(%.6f)+(%.6f)i", a,b,op,c,d,e,g);

	return 0;
}