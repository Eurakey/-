#include <stdio.h>

int main()
{
	double ke = 0;
	printf("�������������");
	scanf_s("%lf", &ke);
	double jin = 0.002*ke;
	double kela = 5.0 * ke;
	double pound = ke/454.0;
	double ounce = pound/16.0;
	printf("%lf�˵���%lf��,��%lf����,��%lf��,��%lf��˾��",ke, jin, kela, pound, ounce);

	return 0;
}
//�����͸��ʺϣ���Ϊ����ȷ��