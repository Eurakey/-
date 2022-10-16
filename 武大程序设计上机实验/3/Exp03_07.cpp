#include <stdio.h>
#define length 8


int main() {
	int num[length] = { 0 };
	int store[length+100000] = { 0 };
	int n = 0;
	for (int i = 0; i < length; i++)
	{
		scanf_s("%d", &num[i]);
	}
	for (int i = 0; i < length; i++)
	{
		for (int j = i + 1; j < length + 1; j++) 
		{
			if (num[i]=num[j])
			{
				store[n] = num[i];
				n++;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", store[i]);
	}
	return 0;
}