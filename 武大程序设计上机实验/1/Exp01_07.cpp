#include <stdio.h>

int main()
{
	int number = 0;
	printf("请你输入一个正整数：");
	scanf_s("%d", &number);
	while (number>0)
	{
		int a;
		a = number % 10;//取最后一位数
		printf("它的倒序是：%d",a);
		number /= 10;//打印最后一位数

		return 0;
	}
}
