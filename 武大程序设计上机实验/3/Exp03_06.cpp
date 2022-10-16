#include <stdio.h>
#define length 21
int main()
{
	int a[length] = { 0 };
	a[0] = 1;
	a[1] = 1;
	for (int i = 2; i < length; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	for (int i = 0; i < length; i++)
	{
		printf("%d  ", a[i]);
	}
	return 0;
}