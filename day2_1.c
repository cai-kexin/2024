#include<stdio.h>
int main()
{
	int a;
	a = 10;
	
	
	printf("a++=%d\n", a++); // a �� 10����ӡ��a����Ϊ 11(����)
	printf("a=%d\n", a);     // ��ӡ a ��ֵ����ʱ a �� 11
	printf("++a=%d\n", ++a); // �Ƚ� a ����Ϊ 12��Ȼ���ӡ��ǰ�ã�
	printf("a=%d\n", a);     // ��ӡ a ��ֵ����ʱ a �� 12
	
	return 0;
}