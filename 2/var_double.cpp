#include <stdio.h>

int main(void)
{

	double a = 1.23456789;
	double b = 2.25123456;
	double c;
	
	c = a + b;
	printf("%.10f + %.10f = %.10f\n", a, b, c);

	return 0;
}
