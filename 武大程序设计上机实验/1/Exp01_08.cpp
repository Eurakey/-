#include <stdio.h>

int main()
{
	
	char input = 0;
	printf("��������һ����ĸ��");
	scanf_s("%c", &input);
	char qian = 0;
	char hou = 0;
	if (input == 'a' || input == 'A')//az���������
	{
		qian = input + 25;
		hou = input + 1;
	}
	else if (input == 'z' || input == 'Z')
	{
		qian = input - 1;
		hou = input - 25;
	}
	else
	{
		qian = input - 1;
		hou = input + 1;
	}
	printf("ǰһ����%c,��һ����%c.", qian, hou);

	return 0;
}
//���⣺һ��ʼû���ǵ�az�����������������if�������