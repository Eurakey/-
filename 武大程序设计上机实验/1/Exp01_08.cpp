#include <stdio.h>

int main()
{
	
	char input = 0;
	printf("请您输入一个字母捏：");
	scanf_s("%c", &input);
	char qian = 0;
	char hou = 0;
	if (input == 'a' || input == 'A')//az的特殊情况
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
	printf("前一个：%c,后一个：%c.", qian, hou);

	return 0;
}
//问题：一开始没考虑到az的特殊情况，后来用if语句解决。