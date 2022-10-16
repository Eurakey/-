#include <stdio.h>
#include <stdlib.h>
int main()
{
	float R;
	float H;
	const float PI = 3.1415926;//定义Π
	printf("请您输入圆的半径：");
	scanf_s("%f", &R);
	printf("请你输入圆柱的高：");
	scanf_s("%f", &H);
	float circumference = 2 * PI * R;
	float round_area = PI * R * R;
	float surface_area = 4 * PI * R * R;
	float ball_volume = 4 / 3 * PI * R * R * R;
	float cylinder = round_area * H;
	printf("圆的周长= %.2f，圆的面积= %.2f，圆球的表面积= %.2f,球的体积= %.2f，柱的体积= %.2f", circumference, round_area, surface_area, ball_volume, cylinder);

	return 0;
}
//问题：无