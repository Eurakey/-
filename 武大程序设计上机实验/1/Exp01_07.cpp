#include <stdio.h>

int main()
{
	int number = 0;
	printf("��������һ����������");
	scanf_s("%d", &number);
	while (number>0)
	{
		int a;
		a = number % 10;//ȡ���һλ��
		printf("���ĵ����ǣ�%d",a);
		number /= 10;//��ӡ���һλ��

		return 0;
	}
}
