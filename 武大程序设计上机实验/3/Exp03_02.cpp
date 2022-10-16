#include <stdio.h>
#define length 100
int main()
{
	int num[length+1] = { 0 };
	num[0] = 2;
	int j = 1;
	for (int i = 1; i < length + 1; i++)
	{
		num[i] = i + 2;
	}
	for (int i = 0; i < length; i++)
	{
		while (num[i] == 1&&i<length&&i<j)
		{
			i++;
		}
		for (j = i+1; j < length; j++) {
			while (num[j]==1)
			{
				j++;
			}
			if (num[j] % num[i] == 0) {
				num[j] = 1;
			}
		}
	}
	for (int i = 0; i < length; i++)
	{
		if (num[i]!=1)
		{
			printf("%d ", num[i]);
		}
	}
	return 0;
}
