
#include<stdio.h>
#include<math.h>
#include<algorithm>

int main()
{
	float x1, y1, h1, w1;
	float x2, y2, h2, w2;
	printf("请输入第一个矩形左下角坐标,宽,高");
	scanf_s("%f %f %f %f", &x1, &y1, &h1, &w1);
	printf("请输入第二个矩形左下角坐标，宽，高");
	scanf_s("%f %f %f %f", &x2, &y2, &h2, &w2);
	float a, b, e, f, g, h;
	a = fabs(x1 + w1 / 2 - x2 - w2 / 2);
	b = fabs(x1 + w1 / 2 - x2 - w2 / 2);
	e = (w1 + w2) / 2;
	f = (h1 + h2) / 2;
	g = fabs((w1 - w2) / 2);
	h = fabs((h1 - h2) / 2);
	if (a > g && a<e && b>h && b < f)
	{
		printf("相交");
	}
	else if (a > e || b > f)
	{
		printf("相离");
	}
	else
	{
		printf("包含");
	}

	return 0;
}