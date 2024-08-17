//整数求逆
#include <stdio.h>

int main()
{
    int x;
    int digit;
    int ret = 0;
    x = 12345;
   // printf("请输入x:\n");
    //scanf_s("%d" , &x);
    while (x>0) 
    {
        digit = x % 10;
        printf("digit=%d\n", digit);
        ret = ret * 10 + digit;
        printf("x=%d,digit=%d,ret=%d\n", x,digit,ret);
        x /= 10;
    }
    printf("ret=%d\n", ret);

    return 0;
}
