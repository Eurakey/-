#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	scanf_s("%f%f%f", &a, &b, &c);
	float decide = b * b - 4 * a * c;
	if (decide >= 0)
	{
		float x1 = (-b + sqrt(decide))/  (2 * a * c);
		float x2 = (-b + sqrt(decide)) / (2 * a * c);
		printf("%f   %f", x1, x2);
	}

	return 0;
}