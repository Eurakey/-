#include<stdio.h>

int main()
{
	int n, m;
	printf("请输入n的值\n");
	scanf_s("%d", &n);
	printf("请输入m的值\n");
	scanf_s("%d", &m);
	int a[11], j = n, k = 1, p = 0;
	for (int i = 1; i < n; i++)
		a[i] = i + 1;
	a[n] = 1;
	while (p < n)
	{
		while (k < m)
		{
			j = a[j];
			k++;
		}
		printf("%d\t", a[j]);
		p++;
		a[j] = a[a[j]];
		k = 1;
	}
	return 0;
}