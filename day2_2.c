/*#include<stdio.h>
int main()
{
	int hour1,minute1;
	int hour2, minute2;

	int h;
	int m;
	scanf_s("%d %d\n", &hour1, &minute1);
	scanf_s("%d %d",&hour2, &minute2);
	h = hour2 - hour1;
	m = minute2 - minute1;
	if (m < 0)
	{
		m = m + 60;
		h--;
	}
	printf("%dСʱ%d����", h, m);

	return 0;
}*/
//��һ������
//��ȷ����
#include<stdio.h>
int main()
{
    int hour1, minute1;
    int hour2, minute2;

    int h;
    int m;

    // ��ȡ����ʱ���
    scanf_s("%d %d", &hour1, &minute1);
    scanf_s("%d %d", &hour2, &minute2);

    // ����Сʱ�ͷ��Ӳ�
    h = hour2 - hour1;
    m = minute2 - minute1;

    // �������Ϊ���������
    if (m < 0)
    {
        m += 60;
        h--;
    }

    // ����СʱΪ�������������ѡ����������
    if (h < 0)
    {
        h += 24; // ����������������24Сʱ
    }

    // ���ʱ���
    printf("%d Сʱ %d ����", h, m);

    return 0;
}
