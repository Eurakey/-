#include <stdio.h>
#define length 10

int main()
{
	double grades[length] = { 0 };
	double sum = 0;
	double average;
	double good;
	double bad;
	double count1 = 0;
	double count2 = 0;
	for (int i = 0; i < length; i++)
	{
		scanf_s("%d", &grades[i]);
		sum += grades[i];
	}
	average = sum / length;
	for (int i = 0; i < length; i++)
	{
		if (grades[i] > 90) {
			count1++;
		}
		else if (grades[i]<average)
		{
			count2++;
		}
	}
	good = count1 / length;
	bad = count2 / length;
	printf("高于90的占%lf和低于平均的占%lf",good, bad);

	return 0;
}