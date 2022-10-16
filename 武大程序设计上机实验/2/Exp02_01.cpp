#include <stdio.h>

int main()
{
	float f1 = 1.0;
	float f2 = 2.0;
	float* p1 = &f1;
	float* p2 = &f2;;
	printf("p1 = %p;p2 = %p;\n", p1, p2);
	printf("p1 - p2 = %p\n", p1 - p2);
	printf("p1 + 2 = %p,p1 -2 = %p\n", p1 + 2, p1 - 2);

	return 0;
}
//两个指针变量相减，结果绝对值为8，这是因为指针相减表示两指针指向的内存位置相隔的距离，而这两个相邻的浮点类型的指针相隔。
//指针加一个整数，结果偏差量为该整数的四倍，这是因为指针加减整数表示指针指向的内存位置的移动，而float类型变量大小是4个字节，减法同理。