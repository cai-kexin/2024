//���100���ڵ�����
#include <stdio.h>

int main()
{
    int x;

    // scanf("%d", &x);

    for (x = 2; x < 100; x++)//�����Ҫ���ǰ50��������������ٶ���һ��cun=0��������ͬʱҲ���Ըĳ�
        //whileѭ��
    {
        int i;
        int isPrime = 1;  // x ������
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
