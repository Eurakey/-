#include <stdio.h>

int main()
{
	int a = 10;
	int b = 2;
	printf("a = %d, b = %d\n", a, b);
	scanf_s("%d", &a);
	printf("a^2 = %f,\na^3 = %f,\na/b = %f", a * a*1.0, a * a * a*1.0, 1.0*a / b);

	return 0;
}
//不合理原因：a和b都是整型变量，计算结果也应该是整型，所以a/b=2.5中小数部分被舍去
//修改：用1.0相乘来转换数据类型