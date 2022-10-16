#include <stdio.h>

int main()
{
	int a = 3;//定义变量
	int b = 4;
	int c = 5;
	double x = 1.2;
	double y = 2.4;
	double z = -3.6;
	int u = 51274;
	int n = 128765;
	char c1 = 'a';
	char c2 = 'b';
	
	printf("a = %d;b = %d;c = %d;\n",a,b,c);//打印
	printf("x = %.6lf;y = %.6lf,z = %.1lf;\n",x,y,z);
	printf("x + y = %lf;y + z = %lf;\n",x+y,y+z);
	printf("u = %d;n = %d;\n",u,n);
	printf("c1 = %d;\n",c1);
	printf("c2 = %d",c2);

	return 0;
}