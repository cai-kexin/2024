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
	printf("%d小时%d分钟", h, m);

	return 0;
}*/
//有一点问题
//正确代码
#include<stdio.h>
int main()
{
    int hour1, minute1;
    int hour2, minute2;

    int h;
    int m;

    // 读取两个时间点
    scanf_s("%d %d", &hour1, &minute1);
    scanf_s("%d %d", &hour2, &minute2);

    // 计算小时和分钟差
    h = hour2 - hour1;
    m = minute2 - minute1;

    // 处理分钟为负数的情况
    if (m < 0)
    {
        m += 60;
        h--;
    }

    // 处理小时为负数的情况（可选，根据需求）
    if (h < 0)
    {
        h += 24; // 假设跨天的情况，添加24小时
    }

    // 输出时间差
    printf("%d 小时 %d 分钟", h, m);

    return 0;
}
