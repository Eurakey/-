#include<stdio.h>
int main() {
	int result
	for (int i = 0; i < 7; i++) {
		int curnum;
		scanf_s("%d", &curnum);
		int result = curnum ^ result;
	}
	if (result > 0) {
		printf("%d", &result);
	}
	else
	{
		printf("Nor found!");
	}

	return 0;
}
//利用异或运算符来找到出现次数为奇数的筷子
