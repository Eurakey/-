#include <stdio.h>

int main()
{
	char str[10000] = "";
	scanf_s("%s", str,sizeof(str));
	int i = 0;
	while (str[i]!='\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			printf("%c", str[i]);
		}
		i++;
	}

	return 0;
}