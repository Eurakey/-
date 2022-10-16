#include <stdio.h>

int main()
{
	char z = 'z';
	z += 6;
	printf("%c", z);

	return 0;
}
//字符型变量取值是-128-127，而'z'的a'ascll值是122，加6后是128，溢出了，于是转化为-128变成了Ç；