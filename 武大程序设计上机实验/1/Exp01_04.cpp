#include <stdio.h>
#include <stdlib.h>
int main()
{
	float R;
	float H;
	const float PI = 3.1415926;//���妰
	printf("��������Բ�İ뾶��");
	scanf_s("%f", &R);
	printf("��������Բ���ĸߣ�");
	scanf_s("%f", &H);
	float circumference = 2 * PI * R;
	float round_area = PI * R * R;
	float surface_area = 4 * PI * R * R;
	float ball_volume = 4 / 3 * PI * R * R * R;
	float cylinder = round_area * H;
	printf("Բ���ܳ�= %.2f��Բ�����= %.2f��Բ��ı����= %.2f,������= %.2f���������= %.2f", circumference, round_area, surface_area, ball_volume, cylinder);

	return 0;
}
//���⣺��