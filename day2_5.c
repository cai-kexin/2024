//循环语句，判断数字是几位数
#include<stdio.h>
int main()
{
	int x;
	int n=0;
	scanf_s("%d", &x);
	n++;
	x /= 10;//如果没有这个的话0会检测出来为0位数
	while (x > 0)
	{
		n++;
		x /= 10;
	}
	printf("位数%d", n);
	return 0;
}