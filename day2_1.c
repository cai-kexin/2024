#include<stdio.h>
int main()
{
	int a;
	a = 10;
	
	
	printf("a++=%d\n", a++); // a 是 10，打印后a增加为 11(后置)
	printf("a=%d\n", a);     // 打印 a 的值，此时 a 是 11
	printf("++a=%d\n", ++a); // 先将 a 增加为 12，然后打印（前置）
	printf("a=%d\n", a);     // 打印 a 的值，此时 a 是 12
	
	return 0;
}