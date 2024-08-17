//输出100以内的素数
#include <stdio.h>

int main()
{
    int x;

    // scanf("%d", &x);

    for (x = 2; x < 100; x++)//如果需要输出前50个素数，则可以再定义一个cun=0来计数，同时也可以改成
        //while循环
    {
        int i;
        int isPrime = 1;  // x 是素数
        for (i = 2; i < x; i++) {
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", x);
        }
    }

    printf("\n");

    return 0;
}
