#include <stdio.h>
#define length 10
int main()
{
	double scores[length] = { 0 };
	double sum = 0;
	for (int i = 0; i < length; )
	{
		scanf_s("%lf", &scores[i]);
		if (scores[i]<=100.0&&scores[i]>=80.0)
		{
			sum += scores[i];
			i++;
		}
		else
		{
			printf("ÇëÖØĞÂÊäÈë\n");
			continue;
		}
	}
	double average = sum / length;
	printf("%lf", average);

	return 0;
}