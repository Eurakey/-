
#include<stdio.h>
#include<math.h>
#include<algorithm>

int main()
{
	float x1, y1, h1, w1;
	float x2, y2, h2, w2;
	printf("�������һ���������½�����,��,��");
	scanf_s("%f %f %f %f", &x1, &y1, &h1, &w1);
	printf("������ڶ����������½����꣬����");
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
		printf("�ཻ");
	}
	else if (a > e || b > f)
	{
		printf("����");
	}
	else
	{
		printf("����");
	}

	return 0;
}