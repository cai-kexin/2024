#include<stdio.h>
int main()
{
    // ����������
    int nums[5] = { 3, 1, 2, 0, 3 };
    // ������������
    int newNums[4] = { 0 };
    // ������������鳤��
    int len = sizeof(nums) / sizeof(nums[0]);
    // ��������������
    for (int i = 0; i < len; i++) {
        // ȡ�����������鵱ǰֵ
        int index = nums[i];
        // �����������鵱ǰֵ��Ϊ������������
        // ���������������Ӧ����ԭ��ֵ+1
        newNums[index] = newNums[index] + 1;
    }

    // ������������鳤��
    int len2 = sizeof(newNums) / sizeof(newNums[0]);
    // ���������������, ��������֮����
    for (int i = 0; i < len2; i++) {
        for (int j = 0; j < newNums[i]; j++) {
            printf("%i\n", i);
        }
    }
    /*
    // ������������鳤��
    int len2 = sizeof(newNums) / sizeof(newNums[0]);
    // ��ԭ������������������
    for(int i = 0; i < len2; i++){
        int index = 0;
        for(int i = 0; i < len; i++){
            for(int j = 0; j < newNums[i]; j++){
                nums[index++] = i;
            }
        }
    }
    */
    return 0;
}