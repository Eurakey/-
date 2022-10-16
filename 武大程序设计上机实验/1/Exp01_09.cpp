#include <stdio.h>

int main()
{
	double ke = 0;
	printf("请您输入克数：");
	scanf_s("%lf", &ke);
	double jin = 0.002*ke;
	double kela = 5.0 * ke;
	double pound = ke/454.0;
	double ounce = pound/16.0;
	printf("%lf克等于%lf斤,或%lf克拉,或%lf磅,或%lf盎司。",ke, jin, kela, pound, ounce);

	return 0;
}
//浮点型更适合，因为更精确。