#include <stdio.h>

int main()
{
	int c, f;
	printf("ÊäÈë\n");
	scanf_s("%d", &f);
	c = 5 * (f - 32) / 9;
	printf("Êä³ö");
	printf("\nCelsius=%d", c);

	return 0;
}