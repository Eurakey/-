#include <stdio.h>

int main()
{
	int x, y, z;
	int x1, y1, z1;
	int r;
	printf("输入8，9，6");
	scanf_s("%d%d%d", &x, &y, &z);
	printf("输入球心5，6，8，和半径5");
	scanf_s("%d%d%d%d", &x1, &y1, &z1, &r);
	int d2 = (x - x1) * (x - x1) + (y - y1) * (y - y1) + (z - z1) * (z - z1);
	if (d2==r*r)
	{
		printf("在球上");
	}
	else if (d2 > r*r)
	{
		printf("在球外");
	}
	else if (d2< r*r)
	{
		printf("在球内");
	}
	return 0;
}