//找零
#include<stdio.h>
int main()
{
	int price = 0;
	int bill = 0;
	printf("请输入金额：");
	scanf_s("%d", &price);
	printf("请输入票面：");
	scanf_s("%d", &bill);
	if (bill > price)
	{
		printf("找零%d元", bill - price);
	}
	else {
		printf("钱不够");
	}
	return 0;
}