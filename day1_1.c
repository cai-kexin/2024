

#include<stdio.h>
int main()
{
	int price = 0;
	int change=0;
	printf("请输入金额啊（元）：");
	scanf_s("%d",&price);
	change = price + 100;
	printf("找您%d元\n", change);
	return 0;
}