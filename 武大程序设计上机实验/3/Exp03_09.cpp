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
//���������������ҵ����ִ���Ϊ�����Ŀ���
