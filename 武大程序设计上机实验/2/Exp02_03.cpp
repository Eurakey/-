#include <stdio.h>

int main()
{
	int number;
	scanf_s("%d", &number);
	int digit = 0;
	while (number > 0)
	{
		digit = number % 10;
		number /= 10;
		printf("%d ",digit);
	}

	return 0;
}