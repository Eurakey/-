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
		printf("������Ӽ��˳����ѯ��ֹͣ\n");
		ch = getchar();
		switch (ch)
		{
		case '+':
			printf("������������������\n");
			scanf_s("%f%f", &m, &n);
			num1 = m + 0x30;
			num2 = n + 0x30;
			ans = m + n;
			suc = 1;
			break;
		case '-':
			printf("������������������\n");
			scanf_s("%f%f", &m, &n);
			num1 = m + 0x30;
			num2 = n + 0x30;
			ans = m - n;
			suc = 1;
			break;
		case '/':
			printf("������������������\n");
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
				printf("����������\n");
			}
			break;
		case '*':
			printf("������������������\n");
			scanf_s("%f%f", &m, &n);
			num1 = m + 0x30;
			num2 = n + 0x30;
			ans = m * n;
			suc = 1;
			break;
		case '?':
			printf("��ʷ���\n");
			int j;
			for (i>=5?j=i-5:j=0; j < i; j++)
			{
				printf("%s\n",&hist[j]);
			}
		case '.': exit(0);
		default:
			printf("����������\n");
			break;
		}
		if (suc)
		{
			printf("�����%f\n", ans);
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