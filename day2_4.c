//找出a,b,c的最大值
#include<stdio.h>
int main()
{
	int a, b, c;
	int max = 0;
	printf("请输入三个数：");
	scanf_s("%d %d %d", &a,&b,&c);
	if (a > b)
	{
		if (a > c)
		{
			max = a;
			printf("The max is %d", max);
		}
		else
		{
			max = c;
			printf("The max is %d", max);
		}

	}

	else 
	{
		if (b > c)
		{
			max = b;
			printf("The max is %d", max);
		}
		else 
		{ 
			max = c;
			printf("The max is %d", max);
		}
	}
	return 0;
}