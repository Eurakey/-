#include <stdio.h>

int main()
{
	int c, f;
	printf("����\n");
	scanf_s("%d", &f);
	c = 5 * (f - 32) / 9;
	printf("���");
	printf("\nCelsius=%d", c);

	return 0;
}