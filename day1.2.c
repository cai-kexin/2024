#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("请输入两个整数：");
	scanf_s("%d %d", &a,&b);
	c = a + b;
	printf("c=%d", c);
	return 0;
}