#include <stdio.h>

int main()
{
	int a = 10;
	int b = 2;
	printf("a = %d, b = %d\n", a, b);
	scanf_s("%d", &a);
	printf("a^2 = %f,\na^3 = %f,\na/b = %f", a * a*1.0, a * a * a*1.0, 1.0*a / b);

	return 0;
}
//������ԭ��a��b�������ͱ�����������ҲӦ�������ͣ�����a/b=2.5��С�����ֱ���ȥ
//�޸ģ���1.0�����ת����������