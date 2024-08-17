//计算（5+7/12）*0.3048
#include<stdio.h>
int main()
/*{
	int a;
	int b;
	int c;
	printf("请输入两个整数：");
	scanf_s("%d %d", &a, &b);
	c = (a + b/12)*0.3048;
	printf("c=%d", c);
	return 0;
} 错误原因，整数*整数只能得到整数，所以将12改为12.0（浮点数），同时将c搞成浮点数。
*/
{
	int a;
	int b;
	float c;
	printf("请输入两个整数：");
	scanf_s("%d %d", &a, &b);
	c = (a + b / 12.0) * 0.3048;
	printf("c=%f", c);
	return 0;
}