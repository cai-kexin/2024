//ѭ����䣬�ж������Ǽ�λ��
#include<stdio.h>
int main()
{
	int x;
	int n=0;
	scanf_s("%d", &x);
	n++;
	x /= 10;//���û������Ļ�0�������Ϊ0λ��
	while (x > 0)
	{
		n++;
		x /= 10;
	}
	printf("λ��%d", n);
	return 0;
}