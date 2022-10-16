#include <stdio.h>

int main()
{
	double a = 0.65;

	double b = 0.6;

	double c = a - b;

	printf("c=%.20lf", c);

	return 0;
}
//可以发现结果并不等于0.05，而有误差