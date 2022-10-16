#include <stdio.h>

int main()
{
	int c1 = 0;
	int c2 = 0;

	c1 = getchar();
	c2 = getchar();
	putchar(c1);
	putchar(c2);
	printf("\n%c,%c", c1, c2);
	return 0;
}