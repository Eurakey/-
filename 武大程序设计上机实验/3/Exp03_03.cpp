#include <stdio.h>

int main() {
	char ch[100] = "";
	scanf_s("%s", ch,100*sizeof(char));
	for (int i = 0; i < 100; i++)
	{
		if (ch[i] > 'a' && ch[i] < 'z')
		{
			ch[i] -= 32;
		}
		else if (ch[i] > 'A' && ch[i] < 'Z')
		{
			ch[i] += 32;
		}
		else if(ch[i]=='a')
		{
			ch[i] = 'A';
		}
		else if (ch[i] == 'A')
		{
			ch[i] = 'a';
		}
		else if (ch[i] == 'z')
		{
			ch[i] = 'Z';
		}
		else if (ch[i] == 'Z')
		{
			ch[i] = 'z';
		}
		printf("%c", ch[i]);
	}


	return 0;
}