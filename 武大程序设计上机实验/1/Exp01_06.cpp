#include <stdio.h>

int main()
{
	int a=0, b=0, c=0;
	scanf_s("%d%d%d", &a, &b, &c);//����
	if (a > b) //�ж�
	{
		if (a > c) 
		{
			printf("%d", a);
		}
		else
		{
			printf("%d", c);
		}
	}
	else
	{
		if (b > c) 
		{
			printf("%d", b);
		}
		else
		{
			printf("%d", c);
		}
	}
	return 0;
}
//���⣺һ��ʼд����scanf_s("%d,%d",&a,&b);������ʱȴû�Ӷ��ţ���������������У�����û���Ƕ��žͿ�����