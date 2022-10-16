#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char ch,num1,num2;
	float m, n;
	char hist[100][100] = {{' '}};
	float ans;
	const char equal = '=';
	int suc = 0;
	char ansch;
	for (int i = 0; ; )
	{
		suc = 0;
		printf("请输入加减乘除或查询或停止\n");
		ch = getchar();
		switch (ch)
		{
		case '+':
			printf("请输入计算的两个数字\n");
			scanf_s("%f%f", &m, &n);
			num1 = m + 0x30;
			num2 = n + 0x30;
			ans = m + n;
			suc = 1;
			break;
		case '-':
			printf("请输入计算的两个数字\n");
			scanf_s("%f%f", &m, &n);
			num1 = m + 0x30;
			num2 = n + 0x30;
			ans = m - n;
			suc = 1;
			break;
		case '/':
			printf("请输入计算的两个数字\n");
			scanf_s("%f%f", &m, &n);
			num1 = m + 0x30;
			num2 = n + 0x30;
			if (n != 0)
			{
				ans = m / n;
				suc = 1;
			}
			else
			{
				printf("请重新输入\n");
			}
			break;
		case '*':
			printf("请输入计算的两个数字\n");
			scanf_s("%f%f", &m, &n);
			num1 = m + 0x30;
			num2 = n + 0x30;
			ans = m * n;
			suc = 1;
			break;
		case '?':
			printf("历史结果\n");
			int j;
			for (i>=5?j=i-5:j=0; j < i; j++)
			{
				printf("%s\n",&hist[j]);
			}
		case '.': exit(0);
		default:
			printf("请重新输入\n");
			break;
		}
		if (suc)
		{
			printf("结果是%f\n", ans);
			ansch = ans + 0x30;
			strncat_s(hist[i], &num1,1);
			strncat_s(hist[i], &ch, 1);
			strncat_s(hist[i], &num2, 1); 
			strncat_s(hist[i], &equal, 1);
			strncat_s(hist[i], &ansch, 1);
			i++;
		}
		else
		{
			continue;
		}
	}

	return 0;
}