//���㣨5+7/12��*0.3048
#include<stdio.h>
int main()
/*{
	int a;
	int b;
	int c;
	printf("����������������");
	scanf_s("%d %d", &a, &b);
	c = (a + b/12)*0.3048;
	printf("c=%d", c);
	return 0;
} ����ԭ������*����ֻ�ܵõ����������Խ�12��Ϊ12.0������������ͬʱ��c��ɸ�������
*/
{
	int a;
	int b;
	float c;
	printf("����������������");
	scanf_s("%d %d", &a, &b);
	c = (a + b / 12.0) * 0.3048;
	printf("c=%f", c);
	return 0;
}