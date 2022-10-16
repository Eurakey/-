#include <stdio.h>

int main()
{
	double x = 0.0;
	scanf_s("%lf", &x);
	double y;
	if (x<0)
	{
		y = 4.0 * x - 3.0;
	}
	else
	{
		y = (x - 2.0) * (x - 2.0) - 7.0;
	}
	printf("%lf", y);

	return 0;
}