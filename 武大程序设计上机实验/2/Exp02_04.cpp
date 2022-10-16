#include <stdio.h>
#include <math.h>
double cos(double b,double c,double a);

int main()
{
	double a, b, c;
	double A, B, C;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	if (a + b>c&&a +c > b&&b + c > a)
	{
		double p = (a + b + c)/2;
		double S = sqrt(p*(p - a)*(p - b)*(p - c));
		A = acos(cos(b, c, a));
		B = acos(cos(a, c, b));
		C = acos(cos(a, b, c));
		printf("Ãæ»ýÊÇ%lf£¬A=%lfrad£¬B=%lfrad£¬C=%lfrad¡£", S, A, B, C);
	}
	else
	{
		printf("Error");
	}

	return 0;
}
double cos(double b, double c, double a)
{
	double x = (b * b + c * c - a * a) / (2 * b * c);
	return x;
}