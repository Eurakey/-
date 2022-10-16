#include <stdio.h>

int main()
{
	int a=0, b=0, c=0;
	scanf_s("%d%d%d", &a, &b, &c);//输入
	if (a > b) //判断
	{
		if (a > c) 
		{
			printf("%d", a);
		}
		else
		{
			printf("%d", c);
		}
	}
	else
	{
		if (b > c) 
		{
			printf("%d", b);
		}
		else
		{
			printf("%d", c);
		}
	}
	return 0;
}
//问题：一开始写的是scanf_s("%d,%d",&a,&b);但输入时却没加逗号，结果不能正常运行，后来没加那逗号就可以了